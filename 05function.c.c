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

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
_Bool bool_value(_Bool self);
int int_value(int self);
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
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
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
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
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
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
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
char* skip_block(struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self);
static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self);
static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile(struct sInfo* info);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self);
static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self);
static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self);
static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self);
static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self);
static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_132;
struct list$1char$* __result_obj__63;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_132=0;    i_132<num_value;    i_132++    ){
        list$1char$_push_back(self,values[i_132]);
    }
    __result_obj__63 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__63,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__63;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item){
void* __right_value49 = (void*)0;
struct list_item$1char$* litem_133;
void* __right_value50 = (void*)0;
struct list_item$1char$* litem_134;
void* __right_value51 = (void*)0;
struct list_item$1char$* litem_135;
struct list$1char$* __result_obj__62;
    if(    self->len==0) {
        litem_133=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value49=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1227, "struct list_item$1char$*"))));
        litem_133->prev=((void*)0);
        litem_133->next=((void*)0);
        litem_133->item=item;
        self->tail=litem_133;
        self->head=litem_133;
    }
    else if(    self->len==1) {
        litem_134=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1237, "struct list_item$1char$*"))));
        litem_134->prev=self->head;
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head->next=litem_134;
    }
    else {
        litem_135=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1247, "struct list_item$1char$*"))));
        litem_135->prev=self->tail;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail->next=litem_135;
        self->tail=litem_135;
    }
    self->len++;
    __result_obj__62 = self;
    return __result_obj__62;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_136;
struct list_item$1char$* prev_it_137;
    it_136=self->head;
    while(it_136!=((void*)0)) {
        prev_it_137=it_136;
        it_136=it_136->next;
        /*c*/ come_call_finalizer3(prev_it_137,list_item$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_138;
struct list$1char$p* __result_obj__66;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_138=0;    i_138<num_value;    i_138++    ){
        list$1char$p_push_back(self,values[i_138]);
    }
    __result_obj__66 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__66,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__66;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item){
void* __right_value54 = (void*)0;
struct list_item$1char$p* litem_139;
void* __right_value55 = (void*)0;
struct list_item$1char$p* litem_140;
void* __right_value56 = (void*)0;
struct list_item$1char$p* litem_141;
struct list$1char$p* __result_obj__65;
    if(    self->len==0) {
        litem_139=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value54=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1227, "struct list_item$1char$p*"))));
        litem_139->prev=((void*)0);
        litem_139->next=((void*)0);
        litem_139->item=item;
        self->tail=litem_139;
        self->head=litem_139;
    }
    else if(    self->len==1) {
        litem_140=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1237, "struct list_item$1char$p*"))));
        litem_140->prev=self->head;
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head->next=litem_140;
    }
    else {
        litem_141=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1247, "struct list_item$1char$p*"))));
        litem_141->prev=self->tail;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail->next=litem_141;
        self->tail=litem_141;
    }
    self->len++;
    __result_obj__65 = self;
    return __result_obj__65;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_142;
struct list_item$1char$p* prev_it_143;
    it_142=self->head;
    while(it_142!=((void*)0)) {
        prev_it_143=it_142;
        it_142=it_142->next;
        /*c*/ come_call_finalizer3(prev_it_143,list_item$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_144;
struct list$1short$* __result_obj__69;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_144=0;    i_144<num_value;    i_144++    ){
        list$1short$_push_back(self,values[i_144]);
    }
    __result_obj__69 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__69,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__69;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item){
void* __right_value59 = (void*)0;
struct list_item$1short$* litem_145;
void* __right_value60 = (void*)0;
struct list_item$1short$* litem_146;
void* __right_value61 = (void*)0;
struct list_item$1short$* litem_147;
struct list$1short$* __result_obj__68;
    if(    self->len==0) {
        litem_145=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value59=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1227, "struct list_item$1short$*"))));
        litem_145->prev=((void*)0);
        litem_145->next=((void*)0);
        litem_145->item=item;
        self->tail=litem_145;
        self->head=litem_145;
    }
    else if(    self->len==1) {
        litem_146=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1237, "struct list_item$1short$*"))));
        litem_146->prev=self->head;
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head->next=litem_146;
    }
    else {
        litem_147=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1247, "struct list_item$1short$*"))));
        litem_147->prev=self->tail;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail->next=litem_147;
        self->tail=litem_147;
    }
    self->len++;
    __result_obj__68 = self;
    return __result_obj__68;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_148;
struct list_item$1short$* prev_it_149;
    it_148=self->head;
    while(it_148!=((void*)0)) {
        prev_it_149=it_148;
        it_148=it_148->next;
        /*c*/ come_call_finalizer3(prev_it_149,list_item$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_150;
struct list$1int$* __result_obj__72;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_150=0;    i_150<num_value;    i_150++    ){
        list$1int$_push_back(self,values[i_150]);
    }
    __result_obj__72 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__72,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__72;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item){
void* __right_value64 = (void*)0;
struct list_item$1int$* litem_151;
void* __right_value65 = (void*)0;
struct list_item$1int$* litem_152;
void* __right_value66 = (void*)0;
struct list_item$1int$* litem_153;
struct list$1int$* __result_obj__71;
    if(    self->len==0) {
        litem_151=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value64=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1227, "struct list_item$1int$*"))));
        litem_151->prev=((void*)0);
        litem_151->next=((void*)0);
        litem_151->item=item;
        self->tail=litem_151;
        self->head=litem_151;
    }
    else if(    self->len==1) {
        litem_152=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1237, "struct list_item$1int$*"))));
        litem_152->prev=self->head;
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head->next=litem_152;
    }
    else {
        litem_153=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1247, "struct list_item$1int$*"))));
        litem_153->prev=self->tail;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail->next=litem_153;
        self->tail=litem_153;
    }
    self->len++;
    __result_obj__71 = self;
    return __result_obj__71;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_154;
struct list_item$1int$* prev_it_155;
    it_154=self->head;
    while(it_154!=((void*)0)) {
        prev_it_155=it_154;
        it_154=it_154->next;
        /*c*/ come_call_finalizer3(prev_it_155,list_item$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_156;
struct list$1long$* __result_obj__75;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_156=0;    i_156<num_value;    i_156++    ){
        list$1long$_push_back(self,values[i_156]);
    }
    __result_obj__75 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__75,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__75;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item){
void* __right_value69 = (void*)0;
struct list_item$1long$* litem_157;
void* __right_value70 = (void*)0;
struct list_item$1long$* litem_158;
void* __right_value71 = (void*)0;
struct list_item$1long$* litem_159;
struct list$1long$* __result_obj__74;
    if(    self->len==0) {
        litem_157=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value69=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1227, "struct list_item$1long$*"))));
        litem_157->prev=((void*)0);
        litem_157->next=((void*)0);
        litem_157->item=item;
        self->tail=litem_157;
        self->head=litem_157;
    }
    else if(    self->len==1) {
        litem_158=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1237, "struct list_item$1long$*"))));
        litem_158->prev=self->head;
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head->next=litem_158;
    }
    else {
        litem_159=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1247, "struct list_item$1long$*"))));
        litem_159->prev=self->tail;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail->next=litem_159;
        self->tail=litem_159;
    }
    self->len++;
    __result_obj__74 = self;
    return __result_obj__74;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_160;
struct list_item$1long$* prev_it_161;
    it_160=self->head;
    while(it_160!=((void*)0)) {
        prev_it_161=it_160;
        it_160=it_160->next;
        /*c*/ come_call_finalizer3(prev_it_161,list_item$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_162;
struct list$1float$* __result_obj__78;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_162=0;    i_162<num_value;    i_162++    ){
        list$1float$_push_back(self,values[i_162]);
    }
    __result_obj__78 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__78,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__78;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item){
void* __right_value74 = (void*)0;
struct list_item$1float$* litem_163;
void* __right_value75 = (void*)0;
struct list_item$1float$* litem_164;
void* __right_value76 = (void*)0;
struct list_item$1float$* litem_165;
struct list$1float$* __result_obj__77;
    if(    self->len==0) {
        litem_163=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value74=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1227, "struct list_item$1float$*"))));
        litem_163->prev=((void*)0);
        litem_163->next=((void*)0);
        litem_163->item=item;
        self->tail=litem_163;
        self->head=litem_163;
    }
    else if(    self->len==1) {
        litem_164=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1237, "struct list_item$1float$*"))));
        litem_164->prev=self->head;
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head->next=litem_164;
    }
    else {
        litem_165=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1247, "struct list_item$1float$*"))));
        litem_165->prev=self->tail;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail->next=litem_165;
        self->tail=litem_165;
    }
    self->len++;
    __result_obj__77 = self;
    return __result_obj__77;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_166;
struct list_item$1float$* prev_it_167;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        prev_it_167=it_166;
        it_166=it_166->next;
        /*c*/ come_call_finalizer3(prev_it_167,list_item$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_168;
struct list$1double$* __result_obj__81;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_168=0;    i_168<num_value;    i_168++    ){
        list$1double$_push_back(self,values[i_168]);
    }
    __result_obj__81 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__81,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__81;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item){
void* __right_value79 = (void*)0;
struct list_item$1double$* litem_169;
void* __right_value80 = (void*)0;
struct list_item$1double$* litem_170;
void* __right_value81 = (void*)0;
struct list_item$1double$* litem_171;
struct list$1double$* __result_obj__80;
    if(    self->len==0) {
        litem_169=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value79=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1227, "struct list_item$1double$*"))));
        litem_169->prev=((void*)0);
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail=litem_169;
        self->head=litem_169;
    }
    else if(    self->len==1) {
        litem_170=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1237, "struct list_item$1double$*"))));
        litem_170->prev=self->head;
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head->next=litem_170;
    }
    else {
        litem_171=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1247, "struct list_item$1double$*"))));
        litem_171->prev=self->tail;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail->next=litem_171;
        self->tail=litem_171;
    }
    self->len++;
    __result_obj__80 = self;
    return __result_obj__80;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_172;
struct list_item$1double$* prev_it_173;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*c*/ come_call_finalizer3(prev_it_173,list_item$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__115;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__115 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__115,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__115;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_207;
struct list_item$1char$ph* prev_it_208;
    it_207=self->head;
    while(it_207!=((void*)0)) {
        prev_it_208=it_207;
        it_207=it_207->next;
        /*c*/ come_call_finalizer3(prev_it_208,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char* item){
void* __right_value128 = (void*)0;
struct list_item$1char$ph* litem_212;
char* __dec_obj13;
void* __right_value129 = (void*)0;
struct list_item$1char$ph* litem_213;
char* __dec_obj14;
void* __right_value130 = (void*)0;
struct list_item$1char$ph* litem_214;
char* __dec_obj15;
struct list$1char$ph* __result_obj__117;
    if(    self->len==0) {
        litem_212=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value128=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1227, "struct list_item$1char$ph*"))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        __dec_obj13=litem_212->item,
        litem_212->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1237, "struct list_item$1char$ph*"))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        __dec_obj14=litem_213->item,
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1247, "struct list_item$1char$ph*"))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        __dec_obj15=litem_214->item,
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result_obj__117 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__117;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value186 = (void*)0;
struct sSemicolonNode* __result_obj__167;
    ((struct sNodeBase*)(__right_value186=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value186,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__167 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value187 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = come_increment_ref_count(((char*)(__right_value187=__builtin_string("sSemicolonNode"))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__168;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value188 = (void*)0;
struct sLambdaNode* __result_obj__169;
    ((struct sNodeBase*)(__right_value188=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value188,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mFun=fun;
    __result_obj__169 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value189 = (void*)0;
char* __result_obj__170;
    __result_obj__170 = come_increment_ref_count(((char*)(__right_value189=__builtin_string("sLambdaNode"))));
    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__170;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_249;
int block_level_250;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct CVALUE* come_value_251;
void* __right_value192 = (void*)0;
char* __dec_obj16;
void* __right_value231 = (void*)0;
struct sType* __dec_obj41;
_Bool __result_obj__187;
    come_fun_249=info->come_fun;
    info->come_fun=self->mFun;
    block_level_250=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_250;
    come_value_251=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj16=come_value_251->c_value,
    come_value_251->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj41=come_value_251->type,
    come_value_251->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_251->var=((void*)0);
    add_come_last_code(info,"%s",come_value_251->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_251));
    info->come_fun=come_fun_249;
    __result_obj__187 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_251,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__187;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__171;
void* __right_value193 = (void*)0;
struct sType* result_256;
void* __right_value194 = (void*)0;
struct sType* __dec_obj17;
void* __right_value195 = (void*)0;
struct sType* __dec_obj18;
void* __right_value203 = (void*)0;
struct list$1sType$ph* __dec_obj22;
void* __right_value204 = (void*)0;
struct sType* __dec_obj23;
void* __right_value205 = (void*)0;
struct sType* __dec_obj24;
void* __right_value207 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value208 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value209 = (void*)0;
char* __dec_obj27;
void* __right_value210 = (void*)0;
char* __dec_obj28;
void* __right_value211 = (void*)0;
char* __dec_obj29;
void* __right_value219 = (void*)0;
struct list$1sNode$ph* __dec_obj33;
void* __right_value220 = (void*)0;
char* __dec_obj34;
void* __right_value221 = (void*)0;
struct list$1sType$ph* __dec_obj35;
void* __right_value229 = (void*)0;
struct list$1char$ph* __dec_obj39;
void* __right_value230 = (void*)0;
struct sType* __dec_obj40;
struct sType* __result_obj__185;
    if(    self==(void*)0) {
        __result_obj__171 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__171,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__171;
    }
    result_256=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_256->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj17=result_256->mOriginalLoadVarType,
        result_256->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj18=result_256->mChannelType,
        result_256->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj22=result_256->mGenericsTypes,
        result_256->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj23=result_256->mNoSolvedGenericsType,
        result_256->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_256->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj24=result_256->mAnyOriginalType,
        result_256->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj25=result_256->mSizeNum,
        result_256->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj26=result_256->mAlignas,
        result_256->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj27=result_256->mTupleName,
        result_256->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj28=result_256->mAttribute,
        result_256->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_256->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_256->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_256->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_256->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_256->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_256->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_256->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_256->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_256->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_256->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_256->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_256->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_256->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_256->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_256->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_256->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_256->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_256->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_256->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_256->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_256->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_256->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_256->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj29=result_256->mAsmName,
        result_256->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_256->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_256->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_256->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj33=result_256->mArrayNum,
        result_256->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj33,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_256->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_256->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_256->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_256->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_256->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj34=result_256->mOriginalTypeName,
        result_256->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_256->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_256->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_256->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_256->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj35=result_256->mParamTypes,
        result_256->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj39=result_256->mParamNames,
        result_256->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj39,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj40=result_256->mResultType,
        result_256->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_256->mVarArgs=self->mVarArgs;
    }
    __result_obj__185 = come_increment_ref_count(result_256);
    /*c*/ come_call_finalizer3(result_256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
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
struct list_item$1sType$ph* it_252;
struct list_item$1sType$ph* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        /*c*/ come_call_finalizer3(prev_it_253,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_254;
struct list_item$1sNode$ph* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        /*c*/ come_call_finalizer3(prev_it_255,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__172;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct list$1sType$ph* result_257;
struct list_item$1sType$ph* it_258;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct list$1sType$ph* __result_obj__175;
    if(    self==((void*)0)) {
        __result_obj__172 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__172,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__172;
    }
    result_257=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_258=self->head;
    while(it_258!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_257,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_258->item)));
        }
        else {
            list$1sType$ph_add(result_257,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_258->item)));
        }
        it_258=it_258->next;
    }
    __result_obj__175 = come_increment_ref_count(result_257);
    /*c*/ come_call_finalizer3(result_257,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__173;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__173 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value198 = (void*)0;
struct list_item$1sType$ph* litem_259;
struct sType* __dec_obj19;
void* __right_value199 = (void*)0;
struct list_item$1sType$ph* litem_260;
struct sType* __dec_obj20;
void* __right_value200 = (void*)0;
struct list_item$1sType$ph* litem_261;
struct sType* __dec_obj21;
struct list$1sType$ph* __result_obj__174;
    if(    self->len==0) {
        litem_259=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value198=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_259->prev=((void*)0);
        litem_259->next=((void*)0);
        __dec_obj19=litem_259->item,
        litem_259->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_259;
        self->head=litem_259;
    }
    else if(    self->len==1) {
        litem_260=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value199=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_260->prev=self->head;
        litem_260->next=((void*)0);
        __dec_obj20=litem_260->item,
        litem_260->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_260;
        self->head->next=litem_260;
    }
    else {
        litem_261=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value200=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_261->prev=self->tail;
        litem_261->next=((void*)0);
        __dec_obj21=litem_261->item,
        litem_261->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_261;
        self->tail=litem_261;
    }
    self->len++;
    __result_obj__174 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__174;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_262;
struct list_item$1sType$ph* prev_it_263;
    it_262=self->head;
    while(it_262!=((void*)0)) {
        prev_it_263=it_262;
        it_262=it_262->next;
        /*c*/ come_call_finalizer3(prev_it_263,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__176;
void* __right_value206 = (void*)0;
struct sNode* result_264;
struct sNode* __result_obj__177;
    if(    self==(void*)0) {
        __result_obj__176 = come_increment_ref_count((void*)0);
        ((__result_obj__176) ? __result_obj__176 = come_decrement_ref_count(__result_obj__176, ((struct sNode*)__result_obj__176)->finalize, ((struct sNode*)__result_obj__176)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__176;
    }
    result_264=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_264->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_264->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_264->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_264->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_264->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_264->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_264->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_264->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_264->kind=self->kind;
    }
    __result_obj__177 = come_increment_ref_count(result_264);
    ((result_264) ? result_264 = come_decrement_ref_count(result_264, ((struct sNode*)result_264)->finalize, ((struct sNode*)result_264)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__177) ? __result_obj__177 = come_decrement_ref_count(__result_obj__177, ((struct sNode*)__result_obj__177)->finalize, ((struct sNode*)__result_obj__177)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__177;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__178;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct list$1sNode$ph* result_265;
struct list_item$1sNode$ph* it_266;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1sNode$ph* __result_obj__181;
    if(    self==((void*)0)) {
        __result_obj__178 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_265=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_266=self->head;
    while(it_266!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_265,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_266->item)));
        }
        else {
            list$1sNode$ph_add(result_265,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_266->item)));
        }
        it_266=it_266->next;
    }
    __result_obj__181 = come_increment_ref_count(result_265);
    /*c*/ come_call_finalizer3(result_265,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__179;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__179 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value214 = (void*)0;
struct list_item$1sNode$ph* litem_267;
struct sNode* __dec_obj30;
void* __right_value215 = (void*)0;
struct list_item$1sNode$ph* litem_268;
struct sNode* __dec_obj31;
void* __right_value216 = (void*)0;
struct list_item$1sNode$ph* litem_269;
struct sNode* __dec_obj32;
struct list$1sNode$ph* __result_obj__180;
    if(    self->len==0) {
        litem_267=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value214=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_267->prev=((void*)0);
        litem_267->next=((void*)0);
        __dec_obj30=litem_267->item,
        litem_267->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_267;
        self->head=litem_267;
    }
    else if(    self->len==1) {
        litem_268=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value215=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_268->prev=self->head;
        litem_268->next=((void*)0);
        __dec_obj31=litem_268->item,
        litem_268->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_268;
        self->head->next=litem_268;
    }
    else {
        litem_269=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value216=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_269->prev=self->tail;
        litem_269->next=((void*)0);
        __dec_obj32=litem_269->item,
        litem_269->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_269;
        self->tail=litem_269;
    }
    self->len++;
    __result_obj__180 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__180;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_270;
struct list_item$1sNode$ph* prev_it_271;
    it_270=self->head;
    while(it_270!=((void*)0)) {
        prev_it_271=it_270;
        it_270=it_270->next;
        /*c*/ come_call_finalizer3(prev_it_271,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__182;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct list$1char$ph* result_272;
struct list_item$1char$ph* it_273;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
struct list$1char$ph* __result_obj__184;
    if(    self==((void*)0)) {
        __result_obj__182 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__182,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__182;
    }
    result_272=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_273=self->head;
    while(it_273!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_272,(char*)come_increment_ref_count((char*)come_memdup(it_273->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_272,(char*)come_increment_ref_count((char*)come_memdup(it_273->item, "./comelang.h", 1146, "char*")));
        }
        it_273=it_273->next;
    }
    __result_obj__184 = come_increment_ref_count(result_272);
    /*c*/ come_call_finalizer3(result_272,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__184,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value224 = (void*)0;
struct list_item$1char$ph* litem_274;
char* __dec_obj36;
void* __right_value225 = (void*)0;
struct list_item$1char$ph* litem_275;
char* __dec_obj37;
void* __right_value226 = (void*)0;
struct list_item$1char$ph* litem_276;
char* __dec_obj38;
struct list$1char$ph* __result_obj__183;
    if(    self->len==0) {
        litem_274=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value224=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_274->prev=((void*)0);
        litem_274->next=((void*)0);
        __dec_obj36=litem_274->item,
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_274;
        self->head=litem_274;
    }
    else if(    self->len==1) {
        litem_275=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value225=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_275->prev=self->head;
        litem_275->next=((void*)0);
        __dec_obj37=litem_275->item,
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_275;
        self->head->next=litem_275;
    }
    else {
        litem_276=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value226=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_276->prev=self->tail;
        litem_276->next=((void*)0);
        __dec_obj38=litem_276->item,
        litem_276->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_276;
        self->tail=litem_276;
    }
    self->len++;
    __result_obj__183 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__183;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_277;
struct list_item$1char$ph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*c*/ come_call_finalizer3(prev_it_278,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value232 = (void*)0;
struct list_item$1CVALUE$ph* litem_279;
struct CVALUE* __dec_obj42;
void* __right_value233 = (void*)0;
struct list_item$1CVALUE$ph* litem_280;
struct CVALUE* __dec_obj43;
void* __right_value234 = (void*)0;
struct list_item$1CVALUE$ph* litem_281;
struct CVALUE* __dec_obj44;
struct list$1CVALUE$ph* __result_obj__186;
    if(    self->len==0) {
        litem_279=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value232=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj42=litem_279->item,
        litem_279->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value233=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj43=litem_280->item,
        litem_280->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj43,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value234=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj44=litem_281->item,
        litem_281->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__186 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
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

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value235 = (void*)0;
struct sFun* __dec_obj45;
struct sFunNode* __result_obj__188;
    ((struct sNodeBase*)(__right_value235=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value235,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj45=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    /*b*/ come_call_finalizer3(__dec_obj45,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__188 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__188,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value236 = (void*)0;
char* __result_obj__189;
    __result_obj__189 = come_increment_ref_count(((char*)(__right_value236=__builtin_string("sFunNode"))));
    (__right_value236 = come_decrement_ref_count(__right_value236, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__189 = come_decrement_ref_count(__result_obj__189, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__189;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_282;
int block_level_283;
void* __right_value237 = (void*)0;
    come_fun_282=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_283=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_283;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value237=xsprintf("come_heap_final();\n"))));
            (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_282;
    return (_Bool)1;
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sBlock* result_284;
int sline_top_285;
int block_level_286;
char* p_saved_287;
int sline_saved_288;
char* sname_saved_289;
void* __right_value240 = (void*)0;
char* __dec_obj46;
char* __dec_obj47;
struct map$2char$phchar$ph* __dec_obj48;
char* p_292;
int sline_293;
void* __right_value241 = (void*)0;
char* sname_294;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
char* module_name_295;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct list$1char$ph* params_296;
void* __right_value246 = (void*)0;
char* word_297;
void* __right_value247 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_298=0;
char* Err_299=0;
void* __right_value248 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_300=0;
char* Err_301=0;
void* __right_value249 = (void*)0;
char* __dec_obj49;
void* __right_value250 = (void*)0;
char* __dec_obj50;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
_Bool _if_conditional1;
void* __right_value253 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_305=0;
char* Err_306=0;
struct sBlock* __result_obj__194;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct sClassModule* module_307;
void* __right_value256 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_308=0;
char* Err_309=0;
void* __right_value257 = (void*)0;
void* __right_value263 = (void*)0;
struct map$2char$phchar$ph* __dec_obj52;
int i_313;
struct list$1char$ph* o2_saved_314;
char* it_317;
void* __right_value264 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
char* __dec_obj53;
void* __right_value273 = (void*)0;
struct sNode* node_360;
void* __right_value274 = (void*)0;
char* __dec_obj54;
void* __right_value275 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_361=0;
char* Err_362=0;
_Bool omit_semicolon_366;
void* __right_value279 = (void*)0;
char* __dec_obj58;
char* head_381;
void* __right_value280 = (void*)0;
struct sNode* value_382;
char* tail_383;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sNode* node_385;
void* __right_value284 = (void*)0;
char* __dec_obj60;
struct sNode* node_386;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value291 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_388=0;
char* Err_389=0;
_Bool omit_semicolon_390;
char* p_391;
char* head_392;
void* __right_value292 = (void*)0;
char* source_393;
void* __right_value293 = (void*)0;
struct sNode* node_394;
void* __right_value294 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_395=0;
char* Err_396=0;
struct sBlock* __result_obj__226;
node_386 = (void*)0;
    result_284=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 117, "struct sBlock*")),info));
    sline_top_285=info->sline_top;
    info->sline_top=info->sline;
    block_level_286=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_287=((void*)0);
        sline_saved_288=0;
        sname_saved_289=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_287) {
                if(                *info->p==0) {
                    info->p=p_saved_287;
                    info->sline=sline_saved_288;
                    __dec_obj46=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_289));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_287=((void*)0);
                    sline_saved_288=0;
                    __dec_obj47=sname_saved_289,
                    sname_saved_289=((void*)0);
                    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj48=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj48,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_292=info->p;
            sline_293=info->sline;
            sname_294=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_293;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value242=parse_word(info)));
                (__right_value242 = come_decrement_ref_count(__right_value242, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_295=(char*)come_increment_ref_count(parse_word(info));
                params_296=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 173, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_297=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_296,(char*)come_increment_ref_count(word_297));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value247=err_msg(info,"invalid source end")));
                            come_exception_var_c1_298=multiple_assign_var1->v1;
                            Err_299=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_299)?(puts(Err_299),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value247,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_299 = come_decrement_ref_count(Err_299, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_297 = come_decrement_ref_count(word_297, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value248=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_300=multiple_assign_var2->v1;
                            Err_301=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_301)?(puts(Err_301),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value248,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_301 = come_decrement_ref_count(Err_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_297 = come_decrement_ref_count(word_297, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_287=info->p;
                sline_saved_288=info->sline;
                __dec_obj49=sname_saved_289,
                sname_saved_289=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj50=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_295));
                __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value252=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value251=__builtin_string(module_name_295))))))==((void*)0))),                (__right_value251 = come_decrement_ref_count(__right_value251, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value252,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value253=err_msg(info,"module not found")));
                    come_exception_var_c3_305=multiple_assign_var3->v1;
                    Err_306=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_306)?(puts(Err_306),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value253,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__194 = come_increment_ref_count(((void*)0));
                    (Err_306 = come_decrement_ref_count(Err_306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_295 = come_decrement_ref_count(module_name_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_296,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_294 = come_decrement_ref_count(sname_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_289 = come_decrement_ref_count(sname_saved_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_284,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__194,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__194;
                    (Err_306 = come_decrement_ref_count(Err_306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_307=((struct sClassModule*)(__right_value255=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value254=__builtin_string(module_name_295))))));
                (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value255,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_307->mParams)!=list$1char$ph_length(params_296)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value256=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_308=multiple_assign_var4->v1;
                    Err_309=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_309)?(puts(Err_309),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value256,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_309 = come_decrement_ref_count(Err_309, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj52=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 227, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj52,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_313=0;
                for(                o2_saved_314=(struct list$1char$ph*)come_increment_ref_count((module_307->mParams)),it_317=list$1char$ph_begin((o2_saved_314));                !list$1char$ph_end((o2_saved_314));                it_317=list$1char$ph_next((o2_saved_314))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_317)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value270=list$1char$ph$p_operator_load_element(params_296,i_313))))));
                    (__right_value270 = come_decrement_ref_count(__right_value270, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_313++;
                }
                /*c*/ come_call_finalizer3(o2_saved_314,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_307->mText;
                info->sline=module_307->mSLine;
                __dec_obj53=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_307->mSName));
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_295 = come_decrement_ref_count(module_name_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_296,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            node_360=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj54=info->sname,
            info->sname=(char*)come_increment_ref_count(node_360->sname(node_360->_protocol_obj));
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=node_360->sline(node_360->_protocol_obj);
            if(            node_360==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value275=err_msg(info,"Invalid expression")));
                come_exception_var_c5_361=multiple_assign_var5->v1;
                Err_362=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_362)?(puts(Err_362),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value275,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_362 = come_decrement_ref_count(Err_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_360));
            parse_sharp_v5(info);
            if(            node_360->terminated(node_360->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_366=(_Bool)1;
            if(            node_360->terminated(node_360->_protocol_obj)) {
                omit_semicolon_366=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_366=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_284->mOmitSemicolon=omit_semicolon_366;
                if(                omit_semicolon_366&&in_function) {
                    list$1sNode$ph_delete(result_284->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_292;
                    info->sline=sline_293;
                    __dec_obj58=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_294));
                    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    head_381=info->p;
                    value_382=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_383=info->p;
                    __dec_obj59=value_382,
                    value_382=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_382),info));
                    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    char buf_384[tail_383-head_381+1];
                    memset(&buf_384, 0, sizeof(char)                    *(tail_383-head_381+1)                    );
                    memcpy(buf_384,head_381,tail_383-head_381);
                    buf_384[tail_383-head_381]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_385=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_382),(char*)come_increment_ref_count(__builtin_string(buf_384)),info));
                    list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_385));
                    ((value_382) ? value_382 = come_decrement_ref_count(value_382, ((struct sNode*)value_382)->finalize, ((struct sNode*)value_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_294 = come_decrement_ref_count(sname_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_360) ? node_360 = come_decrement_ref_count(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_382) ? value_382 = come_decrement_ref_count(value_382, ((struct sNode*)value_382)->finalize, ((struct sNode*)value_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_385) ? node_385 = come_decrement_ref_count(node_385, ((struct sNode*)node_385)->finalize, ((struct sNode*)node_385)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_294 = come_decrement_ref_count(sname_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_360) ? node_360 = come_decrement_ref_count(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_294 = come_decrement_ref_count(sname_294, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_360) ? node_360 = come_decrement_ref_count(node_360, ((struct sNode*)node_360)->finalize, ((struct sNode*)node_360)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_287) {
            if(            info->p==0) {
                info->p=p_saved_287;
                info->sline=sline_saved_288;
                __dec_obj60=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_289));
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_287=((void*)0);
                sline_saved_288=0;
            }
        }
        (sname_saved_289 = come_decrement_ref_count(sname_saved_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 331, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value286=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 331, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj62=node_386,
            node_386=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value286,sSemicolonNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_386));
        }
        else {
            __dec_obj63=node_386,
            node_386=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_386==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value291=err_msg(info,"Invalid expression")));
                come_exception_var_c6_388=multiple_assign_var6->v1;
                Err_389=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_389)?(puts(Err_389),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value291,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_389 = come_decrement_ref_count(Err_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_386->terminated(node_386->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_390=(_Bool)1;
            if(            node_386->terminated(node_386->_protocol_obj)) {
                omit_semicolon_390=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_390=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_284->mOmitSemicolon=omit_semicolon_390;
            list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_386));
        }
        ((node_386) ? node_386 = come_decrement_ref_count(node_386, ((struct sNode*)node_386)->finalize, ((struct sNode*)node_386)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_391=info->p;
        head_392=info->head;
        source_393=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_393;
        info->head=source_393;
        node_394=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_394==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value294=err_msg(info,"Invalid expression")));
            come_exception_var_c7_395=multiple_assign_var7->v1;
            Err_396=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_396)?(puts(Err_396),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value294,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_396 = come_decrement_ref_count(Err_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_394));
        info->p=p_391;
        info->head=head_392;
        (source_393 = come_decrement_ref_count(source_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_394) ? node_394 = come_decrement_ref_count(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_286;
    __result_obj__226 = come_increment_ref_count(result_284);
    /*c*/ come_call_finalizer3(result_284,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_290;
int i_291;
    for(    i_290=0;    i_290<self->size;    i_290++    ){
        if(        self->item_existance[i_290]) {
            if(            1) {
                (self->items[i_290] = come_decrement_ref_count(self->items[i_290], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_291=0;    i_291<self->size;    i_291++    ){
        if(        self->item_existance[i_291]) {
            if(            1) {
                (self->keys[i_291] = come_decrement_ref_count(self->keys[i_291], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_302;
unsigned int hash_303;
unsigned int it_304;
struct sClassModule* __result_obj__190;
struct sClassModule* __result_obj__191;
struct sClassModule* __result_obj__192;
struct sClassModule* __result_obj__193;
default_value_302 = (void*)0;
    memset(&default_value_302,0,sizeof(struct sClassModule*));
    hash_303=string_get_hash_key(((char*)key))%self->size;
    it_304=hash_303;
    while((_Bool)1) {
        if(        self->item_existance[it_304]) {
            if(            string_equals(self->keys[it_304],key)) {
                __result_obj__190 = come_increment_ref_count(self->items[it_304]);
                /*c*/ come_call_finalizer3(default_value_302,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__190,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__190;
            }
            it_304++;
            if(            it_304>=self->size) {
                it_304=0;
            }
            else if(            it_304==hash_303) {
                __result_obj__191 = come_increment_ref_count(default_value_302);
                /*c*/ come_call_finalizer3(default_value_302,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__191,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__191;
            }
        }
        else {
            __result_obj__192 = come_increment_ref_count(default_value_302);
            /*c*/ come_call_finalizer3(default_value_302,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__192,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__192;
        }
    }
    __result_obj__193 = come_increment_ref_count(default_value_302);
    /*c*/ come_call_finalizer3(default_value_302,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
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

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
int i_310;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1char$ph* __dec_obj51;
struct map$2char$phchar$ph* __result_obj__196;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value258=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2042, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value259=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2043, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value260=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2044, "_Bool*"))));
    for(    i_310=0;    i_310<128;    i_310++    ){
        self->item_existance[i_310]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj51=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2054, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__196 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__195;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__195 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__195,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_311;
int i_312;
    for(    i_311=0;    i_311<self->size;    i_311++    ){
        if(        self->item_existance[i_311]) {
            if(            1) {
                (self->items[i_311] = come_decrement_ref_count(self->items[i_311], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_312=0;    i_312<self->size;    i_312++    ){
        if(        self->item_existance[i_312]) {
            if(            1) {
                (self->keys[i_312] = come_decrement_ref_count(self->keys[i_312], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_315;
char* __result_obj__197;
char* __result_obj__198;
char* result_316;
char* __result_obj__199;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_315,0,sizeof(char*));
        __result_obj__197 = result_315;
        return __result_obj__197;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__198 = self->it->item;
        return __result_obj__198;
    }
    memset(&result_316,0,sizeof(char*));
    __result_obj__199 = result_316;
    return __result_obj__199;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_318;
char* __result_obj__200;
char* __result_obj__201;
char* result_319;
char* __result_obj__202;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_318,0,sizeof(char*));
        __result_obj__200 = result_318;
        return __result_obj__200;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_319,0,sizeof(char*));
    __result_obj__202 = result_319;
    return __result_obj__202;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_337;
unsigned int it_338;
_Bool same_key_exist_355;
char* it2_356;
struct map$2char$phchar$ph* __result_obj__217;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_337=string_get_hash_key(((char*)key))%self->size;
    it_338=hash_337;
    while((_Bool)1) {
        if(        self->item_existance[it_338]) {
            if(            string_equals(self->keys[it_338],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_338]);
                    (self->keys[it_338] = come_decrement_ref_count(self->keys[it_338], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_338]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_338]);
                    self->keys[it_338]=key;
                }
                if(                1) {
                    (self->items[it_338] = come_decrement_ref_count(self->items[it_338], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_338]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_338]=item;
                }
                break;
            }
            it_338++;
            if(            it_338>=self->size) {
                it_338=0;
            }
            else if(            it_338==hash_337) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_338]=(_Bool)1;
            if(            1) {
                self->keys[it_338]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_338]=key;
            }
            if(            1) {
                self->items[it_338]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_338]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_355=(_Bool)0;
    for(    it2_356=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_356=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_356,key)) {
            same_key_exist_355=(_Bool)1;
        }
    }
    if(    !same_key_exist_355) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__217 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__217;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_320;
void* __right_value265 = (void*)0;
char** keys_321;
void* __right_value266 = (void*)0;
char** items_322;
void* __right_value267 = (void*)0;
_Bool* item_existance_323;
int len_324;
char* it_327;
char* default_value_330;
void* __right_value268 = (void*)0;
char* it2_331;
unsigned int hash_334;
int n_335;
char* default_value_336;
void* __right_value269 = (void*)0;
default_value_330 = (void*)0;
default_value_336 = (void*)0;
    size_320=self->size*10;
    keys_321=(char**)come_increment_ref_count(((char**)(__right_value265=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "./comelang.h", 2281, "char**"))));
    items_322=(char**)come_increment_ref_count(((char**)(__right_value266=(char**)come_calloc(1, sizeof(char*)*(1*(size_320)), "./comelang.h", 2282, "char**"))));
    item_existance_323=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value267=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_320)), "./comelang.h", 2283, "_Bool*"))));
    len_324=0;
    for(    it_327=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_327=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_330,0,sizeof(char*));
        it2_331=((char*)(__right_value268=map$2char$phchar$ph_at(self,it_327,(char*)come_increment_ref_count(default_value_330))));
        (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_334=string_get_hash_key(((char*)it_327))%size_320;
        n_335=hash_334;
        while((_Bool)1) {
            if(            item_existance_323[n_335]) {
                n_335++;
                if(                n_335>=size_320) {
                    n_335=0;
                }
                else if(                n_335==hash_334) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_323[n_335]=(_Bool)1;
                keys_321[n_335]=it_327;
                items_322[n_335]=((char*)(__right_value269=map$2char$phchar$ph_at(self,it_327,(char*)come_increment_ref_count(default_value_336))));
                (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_324++;
                (default_value_336 = come_decrement_ref_count(default_value_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_336 = come_decrement_ref_count(default_value_336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_330 = come_decrement_ref_count(default_value_330, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_321;
    self->items=items_322;
    self->item_existance=item_existance_323;
    self->size=size_320;
    self->len=len_324;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_325;
char* __result_obj__203;
char* __result_obj__204;
char* result_326;
char* __result_obj__205;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result_obj__203 = result_325;
        return __result_obj__203;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__204 = self->key_list->it->item;
        return __result_obj__204;
    }
    memset(&result_326,0,sizeof(char*));
    __result_obj__205 = result_326;
    return __result_obj__205;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_328;
char* __result_obj__206;
char* __result_obj__207;
char* result_329;
char* __result_obj__208;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_328,0,sizeof(char*));
        __result_obj__206 = result_328;
        return __result_obj__206;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__207 = self->key_list->it->item;
        return __result_obj__207;
    }
    memset(&result_329,0,sizeof(char*));
    __result_obj__208 = result_329;
    return __result_obj__208;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_332;
unsigned int it_333;
char* __result_obj__209;
char* __result_obj__210;
char* __result_obj__211;
char* __result_obj__212;
    hash_332=string_get_hash_key(((char*)key))%self->size;
    it_333=hash_332;
    while((_Bool)1) {
        if(        self->item_existance[it_333]) {
            if(            string_equals(self->keys[it_333],key)) {
                __result_obj__209 = come_increment_ref_count(self->items[it_333]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__209;
            }
            it_333++;
            if(            it_333>=self->size) {
                it_333=0;
            }
            else if(            it_333==hash_332) {
                __result_obj__210 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__210;
            }
        }
        else {
            __result_obj__211 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__211;
        }
    }
    __result_obj__212 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__212;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_339;
struct list_item$1char$ph* it_340;
struct list$1char$ph* __result_obj__216;
    it2_339=0;
    it_340=self->head;
    while(it_340!=((void*)0)) {
        if(        string_equals(it_340->item,item)) {
            list$1char$ph_delete(self,it2_339,it2_339+1);
            break;
        }
        it2_339++;
        it_340=it_340->next;
    }
    __result_obj__216 = self;
    return __result_obj__216;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_341;
struct list$1char$ph* __result_obj__213;
struct list_item$1char$ph* it_344;
int i_345;
struct list_item$1char$ph* prev_it_346;
struct list_item$1char$ph* it_347;
int i_348;
struct list_item$1char$ph* prev_it_349;
struct list_item$1char$ph* it_350;
struct list_item$1char$ph* head_prev_it_351;
struct list_item$1char$ph* tail_it_352;
int i_353;
struct list_item$1char$ph* prev_it_354;
struct list$1char$ph* __result_obj__215;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_341=tail;
        tail=head;
        head=tmp_341;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__213 = self;
        return __result_obj__213;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_344=self->head;
        i_345=0;
        while(it_344!=((void*)0)) {
            if(            i_345<tail) {
                prev_it_346=it_344;
                it_344=it_344->next;
                i_345++;
                /*c*/ come_call_finalizer3(prev_it_346,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_345==tail) {
                self->head=it_344;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_344=it_344->next;
                i_345++;
            }
        }
    }
    else if(    tail==self->len) {
        it_347=self->head;
        i_348=0;
        while(it_347!=((void*)0)) {
            if(            i_348==head) {
                self->tail=it_347->prev;
                self->tail->next=((void*)0);
            }
            if(            i_348>=head) {
                prev_it_349=it_347;
                it_347=it_347->next;
                i_348++;
                /*c*/ come_call_finalizer3(prev_it_349,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_347=it_347->next;
                i_348++;
            }
        }
    }
    else {
        it_350=self->head;
        head_prev_it_351=((void*)0);
        tail_it_352=((void*)0);
        i_353=0;
        while(it_350!=((void*)0)) {
            if(            i_353==head) {
                head_prev_it_351=it_350->prev;
            }
            if(            i_353==tail) {
                tail_it_352=it_350;
            }
            if(            i_353>=head&&i_353<tail) {
                prev_it_354=it_350;
                it_350=it_350->next;
                i_353++;
                /*c*/ come_call_finalizer3(prev_it_354,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_350=it_350->next;
                i_353++;
            }
        }
        if(        head_prev_it_351!=((void*)0)) {
            head_prev_it_351->next=tail_it_352;
        }
        if(        tail_it_352!=((void*)0)) {
            tail_it_352->prev=head_prev_it_351;
        }
    }
    __result_obj__215 = self;
    return __result_obj__215;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_342;
struct list_item$1char$ph* prev_it_343;
struct list$1char$ph* __result_obj__214;
    it_342=self->head;
    while(it_342!=((void*)0)) {
        prev_it_343=it_342;
        it_342=it_342->next;
        /*c*/ come_call_finalizer3(prev_it_343,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__214 = self;
    return __result_obj__214;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_357;
int i_358;
char* __result_obj__218;
char* default_value_359;
char* __result_obj__219;
default_value_359 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_357=self->head;
    i_358=0;
    while(it_357!=((void*)0)) {
        if(        position==i_358) {
            __result_obj__218 = come_increment_ref_count(it_357->item);
            (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__218;
        }
        it_357=it_357->next;
        i_358++;
    }
    memset(&default_value_359,0,sizeof(char*));
    __result_obj__219 = come_increment_ref_count(default_value_359);
    (default_value_359 = come_decrement_ref_count(default_value_359, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__219;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value276 = (void*)0;
struct list_item$1sNode$ph* litem_363;
struct sNode* __dec_obj55;
void* __right_value277 = (void*)0;
struct list_item$1sNode$ph* litem_364;
struct sNode* __dec_obj56;
void* __right_value278 = (void*)0;
struct list_item$1sNode$ph* litem_365;
struct sNode* __dec_obj57;
struct list$1sNode$ph* __result_obj__220;
    if(    self->len==0) {
        litem_363=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value276=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1227, "struct list_item$1sNode$ph*"))));
        litem_363->prev=((void*)0);
        litem_363->next=((void*)0);
        __dec_obj55=litem_363->item,
        litem_363->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_363;
        self->head=litem_363;
    }
    else if(    self->len==1) {
        litem_364=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value277=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1237, "struct list_item$1sNode$ph*"))));
        litem_364->prev=self->head;
        litem_364->next=((void*)0);
        __dec_obj56=litem_364->item,
        litem_364->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_364;
        self->head->next=litem_364;
    }
    else {
        litem_365=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value278=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1247, "struct list_item$1sNode$ph*"))));
        litem_365->prev=self->tail;
        litem_365->next=((void*)0);
        __dec_obj57=litem_365->item,
        litem_365->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_365;
        self->tail=litem_365;
    }
    self->len++;
    __result_obj__220 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__220;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_367;
struct list$1sNode$ph* __result_obj__221;
struct list_item$1sNode$ph* it_370;
int i_371;
struct list_item$1sNode$ph* prev_it_372;
struct list_item$1sNode$ph* it_373;
int i_374;
struct list_item$1sNode$ph* prev_it_375;
struct list_item$1sNode$ph* it_376;
struct list_item$1sNode$ph* head_prev_it_377;
struct list_item$1sNode$ph* tail_it_378;
int i_379;
struct list_item$1sNode$ph* prev_it_380;
struct list$1sNode$ph* __result_obj__223;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_367=tail;
        tail=head;
        head=tmp_367;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__221 = self;
        return __result_obj__221;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_370=self->head;
        i_371=0;
        while(it_370!=((void*)0)) {
            if(            i_371<tail) {
                prev_it_372=it_370;
                it_370=it_370->next;
                i_371++;
                /*c*/ come_call_finalizer3(prev_it_372,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_371==tail) {
                self->head=it_370;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_370=it_370->next;
                i_371++;
            }
        }
    }
    else if(    tail==self->len) {
        it_373=self->head;
        i_374=0;
        while(it_373!=((void*)0)) {
            if(            i_374==head) {
                self->tail=it_373->prev;
                self->tail->next=((void*)0);
            }
            if(            i_374>=head) {
                prev_it_375=it_373;
                it_373=it_373->next;
                i_374++;
                /*c*/ come_call_finalizer3(prev_it_375,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_373=it_373->next;
                i_374++;
            }
        }
    }
    else {
        it_376=self->head;
        head_prev_it_377=((void*)0);
        tail_it_378=((void*)0);
        i_379=0;
        while(it_376!=((void*)0)) {
            if(            i_379==head) {
                head_prev_it_377=it_376->prev;
            }
            if(            i_379==tail) {
                tail_it_378=it_376;
            }
            if(            i_379>=head&&i_379<tail) {
                prev_it_380=it_376;
                it_376=it_376->next;
                i_379++;
                /*c*/ come_call_finalizer3(prev_it_380,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_376=it_376->next;
                i_379++;
            }
        }
        if(        head_prev_it_377!=((void*)0)) {
            head_prev_it_377->next=tail_it_378;
        }
        if(        tail_it_378!=((void*)0)) {
            tail_it_378->prev=head_prev_it_377;
        }
    }
    __result_obj__223 = self;
    return __result_obj__223;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_368;
struct list_item$1sNode$ph* prev_it_369;
struct list$1sNode$ph* __result_obj__222;
    it_368=self->head;
    while(it_368!=((void*)0)) {
        prev_it_369=it_368;
        it_368=it_368->next;
        /*c*/ come_call_finalizer3(prev_it_369,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__222 = self;
    return __result_obj__222;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__224;
void* __right_value287 = (void*)0;
struct sSemicolonNode* result_387;
void* __right_value288 = (void*)0;
char* __dec_obj61;
struct sSemicolonNode* __result_obj__225;
    if(    self==(void*)0) {
        __result_obj__224 = (void*)0;
        return __result_obj__224;
    }
    result_387=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)) {
        result_387->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj61=result_387->sname,
        result_387->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_387->sline_real=self->sline_real;
    }
    __result_obj__225 = result_387;
    /*c*/ come_call_finalizer3(result_387,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_397;
struct sVarTable* old_table_398;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sVarTable* __dec_obj64;
struct sVarTable* current_loop_vtable_399;
int i_400;
struct list$1char$ph* o2_saved_401;
char* name_402;
void* __right_value297 = (void*)0;
struct sType* type_403;
void* __right_value298 = (void*)0;
int block_level_407;
int i_408;
struct list$1sNode$ph* o2_saved_409;
struct sNode* node_412;
struct list$1sRightValueObject$ph* right_value_objects_415;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
int stack_num_before_420;
int sline_421;
void* __right_value301 = (void*)0;
char* sname_422;
void* __right_value302 = (void*)0;
char* __dec_obj68;
_Bool Value_423;
void* __right_value303 = (void*)0;
struct CVALUE* come_value_424;
void* __right_value309 = (void*)0;
struct CVALUE* come_value2_425;
void* __right_value310 = (void*)0;
char* __dec_obj73;
void* __right_value311 = (void*)0;
struct CVALUE* come_value2_427;
struct sVar* var__428;
void* __right_value312 = (void*)0;
struct CVALUE* come_value3_429;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_446=0;
char* Err_447=0;
_Bool _if_conditional2;
int __result_obj__238;
void* __right_value315 = (void*)0;
struct sType* __dec_obj74;
void* __right_value316 = (void*)0;
char* c_value_448;
void* __right_value317 = (void*)0;
char* __dec_obj75;
void* __right_value318 = (void*)0;
char* __dec_obj76;
void* __right_value319 = (void*)0;
char* __dec_obj77;
_Bool Value_449;
void* __right_value320 = (void*)0;
char* __dec_obj78;
struct list$1sRightValueObject$ph* __dec_obj79;
void* __if_result__0_452 = (void*)0;
struct list$1sVar$ph* o2_saved_453;
struct sVar* it_456;
void* __right_value321 = (void*)0;
struct list$1sVar$ph* __dec_obj80;
memset(&i_400, 0, sizeof(int));
memset(&i_408, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_397=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_398=info->lv_table;
    if(    !no_var_table) {
        __dec_obj64=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 405, "struct sVarTable*")),(_Bool)0,old_table_398));
        /*b*/ come_call_finalizer3(__dec_obj64,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_399=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_401=(param_names),name_402=list$1char$ph_begin((o2_saved_401));        !list$1char$ph_end((o2_saved_401));        name_402=list$1char$ph_next((o2_saved_401))        ){
            type_403=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types,i_400));
            type_403->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_402,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_403)),info,(_Bool)1);
            i_400++;
            /*c*/ come_call_finalizer3(type_403,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    block_level_407=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_409=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_412=list$1sNode$ph_begin((o2_saved_409));        !list$1sNode$ph_end((o2_saved_409));        node_412=list$1sNode$ph_next((o2_saved_409))        ){
            right_value_objects_415=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj65=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 435, "struct list$1sRightValueObject$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj65,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj66=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj67=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            stack_num_before_420=list$1CVALUE$ph_length(info->stack);
            sline_421=info->sline;
            sname_422=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_412->sline(node_412->_protocol_obj);
            __dec_obj68=info->sname,
            info->sname=(char*)come_increment_ref_count(node_412->sname(node_412->_protocol_obj));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            i_408==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_423=node_compile(node_412,info);
                if(                !Value_423) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_420+1) {
                    come_value_424=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_424->type->mClass->mName,"void")&&come_value_424->type->mPointerNum==0) {
                        come_value2_425=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_424));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_425));
                        __dec_obj73=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_425->c_value));
                        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        come_value2_427=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_424));
                        var__428=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__428) {
                            come_value3_429=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 470, "struct CVALUE*"));
                            if(                            var__428->mType->mClass=="void"&&var__428->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value314=check_assign_type("invalid if result value",var__428->mType,((struct sType*)(__right_value313=come_call_cloner(sType_clone, come_value_424->type))),come_value3_429,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_446=multiple_assign_var8->v1;
                                Err_447=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_447)),                                /*c*/ come_call_finalizer3(__right_value313,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                /*c*/ come_call_finalizer3(__right_value314,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                _if_conditional2) {
                                    __result_obj__238 = (_Bool)1;
                                    (Err_447 = come_decrement_ref_count(Err_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(come_value3_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value2_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(right_value_objects_415,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    (sname_422 = come_decrement_ref_count(sname_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(o2_saved_409,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    return __result_obj__238;
                                }
                                else {
                                }
                                (Err_447 = come_decrement_ref_count(Err_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj74=var__428->mType,
                            var__428->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_424->type));
                            /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_424->type->mHeap) {
                                c_value_448=(char*)come_increment_ref_count(increment_ref_count_object(come_value_424->type,come_value_424->c_value,info));
                                __dec_obj75=come_value2_427->c_value,
                                come_value2_427->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__428->mCValueName,c_value_448));
                                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                (c_value_448 = come_decrement_ref_count(c_value_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj76=come_value2_427->c_value,
                                come_value2_427->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__428->mCValueName,come_value_424->c_value));
                                __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            /*c*/ come_call_finalizer3(come_value3_429,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_427));
                        __dec_obj77=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_427->c_value));
                        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_427,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(come_value_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            else {
                Value_449=node_compile(node_412,info);
                if(                !Value_449) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_421;
            __dec_obj78=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_422));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_420);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj79=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_415);
            /*b*/ come_call_finalizer3(__dec_obj79,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_408++;
            /*c*/ come_call_finalizer3(right_value_objects_415,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_422 = come_decrement_ref_count(sname_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_409,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_407==0) {
            for(            o2_saved_453=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_456=list$1sVar$ph_begin((o2_saved_453));            !list$1sVar$ph_end((o2_saved_453));            it_456=list$1sVar$ph_next((o2_saved_453))            ){
                free_object(((struct sType*)(__right_value321=come_call_cloner(sType_clone, it_456->mType))),it_456->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value321,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_453,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj80=info->match_it_var,
            __if_result__0_452=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            /*b*/ come_call_finalizer3(__dec_obj80,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        /*c*/ come_call_finalizer3(__if_result__0_452,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->lv_table=old_table_398;
    info->block_level=block_level_407;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_399;
    info->inhibits_output_code=inhibits_output_code_397;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_404;
int i_405;
struct sType* __result_obj__227;
struct sType* default_value_406;
struct sType* __result_obj__228;
default_value_406 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_404=self->head;
    i_405=0;
    while(it_404!=((void*)0)) {
        if(        position==i_405) {
            __result_obj__227 = come_increment_ref_count(it_404->item);
            /*c*/ come_call_finalizer3(__result_obj__227,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__227;
        }
        it_404=it_404->next;
        i_405++;
    }
    memset(&default_value_406,0,sizeof(struct sType*));
    __result_obj__228 = come_increment_ref_count(default_value_406);
    /*c*/ come_call_finalizer3(default_value_406,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__228,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_410;
struct sNode* __result_obj__229;
struct sNode* __result_obj__230;
struct sNode* result_411;
struct sNode* __result_obj__231;
result_410 = (void*)0;
result_411 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_410,0,sizeof(struct sNode*));
        __result_obj__229 = result_410;
        return __result_obj__229;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__230 = self->it->item;
        return __result_obj__230;
    }
    memset(&result_411,0,sizeof(struct sNode*));
    __result_obj__231 = result_411;
    return __result_obj__231;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_413;
struct sNode* __result_obj__232;
struct sNode* __result_obj__233;
struct sNode* result_414;
struct sNode* __result_obj__234;
result_413 = (void*)0;
result_414 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_413,0,sizeof(struct sNode*));
        __result_obj__232 = result_413;
        return __result_obj__232;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__233 = self->it->item;
        return __result_obj__233;
    }
    memset(&result_414,0,sizeof(struct sNode*));
    __result_obj__234 = result_414;
    return __result_obj__234;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__235;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__235 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__235,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__235;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_416;
struct list_item$1sRightValueObject$ph* prev_it_417;
    it_416=self->head;
    while(it_416!=((void*)0)) {
        prev_it_417=it_416;
        it_416=it_416->next;
        /*c*/ come_call_finalizer3(prev_it_417,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_418;
struct list_item$1sRightValueObject$ph* prev_it_419;
    it_418=self->head;
    while(it_418!=((void*)0)) {
        prev_it_419=it_418;
        it_418=it_418->next;
        /*c*/ come_call_finalizer3(prev_it_419,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__236;
void* __right_value304 = (void*)0;
struct CVALUE* result_426;
void* __right_value305 = (void*)0;
char* __dec_obj69;
void* __right_value306 = (void*)0;
struct sType* __dec_obj70;
void* __right_value307 = (void*)0;
char* __dec_obj71;
void* __right_value308 = (void*)0;
char* __dec_obj72;
struct CVALUE* __result_obj__237;
    if(    self==(void*)0) {
        __result_obj__236 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__236,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__236;
    }
    result_426=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj69=result_426->c_value,
        result_426->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj70=result_426->type,
        result_426->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_426->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_426->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj71=result_426->c_value_without_right_value_objects,
        result_426->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj72=result_426->c_value_without_cast_object_value,
        result_426->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__237 = come_increment_ref_count(result_426);
    /*c*/ come_call_finalizer3(result_426,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__237,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__237;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_430;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_431;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_430=left->head;
    it2_431=right->head;
    while(it_430!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_430->item,it2_431->item)) {
            return (_Bool)0;
        }
        it_430=it_430->next;
        it2_431=it2_431->next;
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

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_432;
struct list_item$1sType$ph* it2_433;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_432=left->head;
    it2_433=right->head;
    while(it_432!=((void*)0)) {
        if(        !sType_equals(it_432->item,it2_433->item)) {
            return (_Bool)0;
        }
        it_432=it_432->next;
        it2_433=it2_433->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_434;
struct list_item$1sNode$ph* it2_435;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_434=left->head;
    it2_435=right->head;
    while(it_434!=((void*)0)) {
        if(        !sNode_equals(it_434->item,it2_435->item)) {
            return (_Bool)0;
        }
        it_434=it_434->next;
        it2_435=it2_435->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_436;
struct list_item$1char$ph* it2_437;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_436=left->head;
    it2_437=right->head;
    while(it_436!=((void*)0)) {
        if(        !string_equals(it_436->item,it2_437->item)) {
            return (_Bool)0;
        }
        it_436=it_436->next;
        it2_437=it2_437->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
    return !list$1tuple2$2char$phsType$ph$ph_operator_equals(left,right);
}

static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_438;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_439;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_438=left->head;
    it2_439=right->head;
    while(it_438!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_438->item,it2_439->item))) {
            return (_Bool)0;
        }
        it_438=it_438->next;
        it2_439=it2_439->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    list$1sNode$ph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1char$ph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)&&string_equals(left->mParentClassName,right->mParentClassName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mDynamic,right->mDynamic));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2char$phsType$ph$ph_operator_equals(left->mFields,right->mFields))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mDynamic,right->mDynamic))));
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mChannelType,right->mChannelType)&&list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&sNode_equals(left->mAlignas,right->mAlignas)&&string_equals(left->mTupleName,right->mTupleName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&string_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&string_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)&&list$1char$ph_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(list$1sType$ph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(list$1sNode$ph_operator_equals(left->mArrayNum,right->mArrayNum))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(list$1sType$ph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1char$ph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))));
}

static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_440;
struct list_item$1sType$ph* it2_441;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_440=left->head;
    it2_441=right->head;
    while(it_440!=((void*)0)) {
        if(        !(sType_operator_equals(it_440->item,it2_441->item))) {
            return (_Bool)0;
        }
        it_440=it_440->next;
        it2_441=it2_441->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_442;
struct list_item$1sNode$ph* it2_443;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_442=left->head;
    it2_443=right->head;
    while(it_442!=((void*)0)) {
        if(        !(sNode_operator_equals(it_442->item,it2_443->item))) {
            return (_Bool)0;
        }
        it_442=it_442->next;
        it2_443=it2_443->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_444;
struct list_item$1char$ph* it2_445;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_444=left->head;
    it2_445=right->head;
    while(it_444!=((void*)0)) {
        if(        !(string_operator_equals(it_444->item,it2_445->item))) {
            return (_Bool)0;
        }
        it_444=it_444->next;
        it2_445=it2_445->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    return !list$1sType$ph_operator_equals(left,right);
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    return !list$1sNode$ph_operator_equals(left,right);
}

static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    return !list$1char$ph_operator_equals(left,right);
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_450;
struct list_item$1sRightValueObject$ph* prev_it_451;
struct list$1sRightValueObject$ph* __result_obj__239;
    it_450=self->head;
    while(it_450!=((void*)0)) {
        prev_it_451=it_450;
        it_450=it_450->next;
        /*c*/ come_call_finalizer3(prev_it_451,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__239 = self;
    return __result_obj__239;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_454;
struct sVar* __result_obj__240;
struct sVar* __result_obj__241;
struct sVar* result_455;
struct sVar* __result_obj__242;
result_454 = (void*)0;
result_455 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_454,0,sizeof(struct sVar*));
        __result_obj__240 = result_454;
        return __result_obj__240;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__241 = self->it->item;
        return __result_obj__241;
    }
    memset(&result_455,0,sizeof(struct sVar*));
    __result_obj__242 = result_455;
    return __result_obj__242;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_457;
struct sVar* __result_obj__243;
struct sVar* __result_obj__244;
struct sVar* result_458;
struct sVar* __result_obj__245;
result_457 = (void*)0;
result_458 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_457,0,sizeof(struct sVar*));
        __result_obj__243 = result_457;
        return __result_obj__243;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__244 = self->it->item;
        return __result_obj__244;
    }
    memset(&result_458,0,sizeof(struct sVar*));
    __result_obj__245 = result_458;
    return __result_obj__245;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_459;
struct list_item$1sVar$ph* prev_it_460;
    it_459=self->head;
    while(it_459!=((void*)0)) {
        prev_it_460=it_459;
        it_459=it_459->next;
        /*c*/ come_call_finalizer3(prev_it_460,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
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

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_461;
struct list_item$1sVar$ph* prev_it_462;
    it_461=self->head;
    while(it_461!=((void*)0)) {
        prev_it_462=it_461;
        it_461=it_461->next;
        /*c*/ come_call_finalizer3(prev_it_462,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph_length(info->stack),top);
        exit(2);
    }
}

char* skip_block(struct sInfo* info){
char* head_463;
_Bool dquort_464;
_Bool squort_465;
int sline_466;
int nest_467;
void* __right_value322 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_468=0;
char* Err_469=0;
void* __right_value323 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_470=0;
char* Err_471=0;
void* __right_value324 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_472=0;
char* Err_473=0;
void* __right_value325 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_474=0;
char* Err_475=0;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_476=0;
char* Err_477=0;
void* __right_value327 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_478=0;
char* Err_479=0;
void* __right_value328 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_480=0;
char* Err_481=0;
void* __right_value329 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_482=0;
char* Err_483=0;
char* tail_484;
void* __right_value330 = (void*)0;
char* buf_485;
void* __right_value331 = (void*)0;
char* __result_obj__246;
    head_463=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_464=(_Bool)0;
        squort_465=(_Bool)0;
        sline_466=0;
        nest_467=0;
        while(1) {
            if(            dquort_464) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value322=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_466)));
                        come_exception_var_c8_468=multiple_assign_var9->v1;
                        Err_469=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                        ((Err_469)?(puts(Err_469),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value322,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_469 = come_decrement_ref_count(Err_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_464=!dquort_464;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value323=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_466)));
                        come_exception_var_c9_470=multiple_assign_var10->v1;
                        Err_471=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_471)?(puts(Err_471),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value323,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_471 = come_decrement_ref_count(Err_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value324=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_466)));
                        come_exception_var_c10_472=multiple_assign_var11->v1;
                        Err_473=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_473)?(puts(Err_473),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value324,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_473 = come_decrement_ref_count(Err_473, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_465) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value325=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_466)));
                        come_exception_var_c11_474=multiple_assign_var12->v1;
                        Err_475=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_475)?(puts(Err_475),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value325,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_475 = come_decrement_ref_count(Err_475, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_465=!squort_465;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_466)));
                        come_exception_var_c12_476=multiple_assign_var13->v1;
                        Err_477=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_477)?(puts(Err_477),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_477 = come_decrement_ref_count(Err_477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value327=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_466)));
                        come_exception_var_c13_478=multiple_assign_var14->v1;
                        Err_479=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_479)?(puts(Err_479),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value327,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_479 = come_decrement_ref_count(Err_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_466=info->sline;
                info->p++;
                squort_465=!squort_465;
            }
            else if(            *info->p==34) {
                sline_466=info->sline;
                info->p++;
                dquort_464=!dquort_464;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_467++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_467==0) {
                    break;
                }
                nest_467--;
            }
            else if(            *info->p==0) {
                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value328=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c14_480=multiple_assign_var15->v1;
                Err_481=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                ((Err_481)?(puts(Err_481),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value328,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_481 = come_decrement_ref_count(Err_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
    else {
        multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value329=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c15_482=multiple_assign_var16->v1;
        Err_483=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        ((Err_483)?(puts(Err_483),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value329,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (Err_483 = come_decrement_ref_count(Err_483, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_484=info->p;
    buf_485=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_484-head_463+1)), "05function.c", 686, "char*"));
    memcpy(buf_485,head_463,tail_484-head_463);
    buf_485[tail_484-head_463]=0;
    skip_spaces_and_lf(info);
    __result_obj__246 = come_increment_ref_count(((char*)(__right_value331=__builtin_string(buf_485))));
    (buf_485 = come_decrement_ref_count(buf_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value331 = come_decrement_ref_count(__right_value331, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__246 = come_decrement_ref_count(__result_obj__246, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__246;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct buffer* asm_fun_name_486;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct buffer* result_487;
char* head_488;
int brace_num_489;
char* tail_490;
char* head_491;
int brace_num_492;
char* tail_493;
char* head_494;
char* tail_495;
char* head_496;
char* tail_497;
int len_498;
_Bool in_dquort_499;
int brace_num_500;
char* head_501;
char* tail_502;
char* head_503;
char* tail_504;
char* head_505;
char* tail_506;
char* head_507;
int nest_508;
char* tail_509;
char* head_510;
int nest_511;
char* tail_512;
char* head_513;
int nest_514;
char* tail_515;
char* head_516;
int nest_517;
char* tail_518;
char* head_519;
int nest_520;
char* tail_521;
char* head_522;
char* tail_523;
char* head_524;
char* tail_525;
char* head_526;
char* tail_527;
char* head_528;
char* tail_529;
char* head_530;
char* tail_531;
char* head_532;
int brace_num_533;
char* tail_534;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__250;
    asm_fun_name_486=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 697, "struct buffer*"))));
    result_487=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 698, "struct buffer*"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_488=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_489=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_489++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_489--;
                        if(                        brace_num_489==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_490=info->p;
            buffer_append(result_487,head_488,tail_490-head_488);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_491=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_492=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_492++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_492--;
                        if(                        brace_num_492==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_493=info->p;
            buffer_append(result_487,head_491,tail_493-head_491);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_494=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_495=info->p;
            buffer_append(result_487,head_494,tail_495-head_494);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_496=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_497=info->p;
            buffer_append(result_487,head_496,tail_497-head_496);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_498=0;
            if(            *info->p==40) {
                in_dquort_499=(_Bool)0;
                brace_num_500=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_499=!in_dquort_499;
                    }
                    else if(                    in_dquort_499) {
                        buffer_append_char(asm_fun_name_486,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_500++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_500--;
                        if(                        brace_num_500==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_501=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_502=info->p;
            buffer_append(result_487,head_501,tail_502-head_501);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_503=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_504=info->p;
            buffer_append(result_487,head_503,tail_504-head_503);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_505=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_506=info->p;
            buffer_append(result_487,head_505,tail_506-head_505);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_507=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_508=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_508++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_508--;
                        if(                        nest_508==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_509=info->p;
            buffer_append(result_487,head_507,tail_509-head_507);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_510=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_511=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_511++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_511--;
                        if(                        nest_511==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_512=info->p;
            buffer_append(result_487,head_510,tail_512-head_510);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_513=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_514=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_514++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_514--;
                        if(                        nest_514==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_515=info->p;
            buffer_append(result_487,head_513,tail_515-head_513);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_516=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_517=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_517++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_517--;
                        if(                        nest_517==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_518=info->p;
            buffer_append(result_487,head_516,tail_518-head_516);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_519=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_520=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_520++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_520--;
                        if(                        nest_520==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_521=info->p;
            buffer_append(result_487,head_519,tail_521-head_519);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_522=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_523=info->p;
            buffer_append(result_487,head_522,tail_523-head_522);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_524=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_525=info->p;
            buffer_append(result_487,head_524,tail_525-head_524);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_526=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_527=info->p;
            buffer_append(result_487,head_526,tail_527-head_526);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_528=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_529=info->p;
            buffer_append(result_487,head_528,tail_529-head_528);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_530=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_531=info->p;
            buffer_append(result_487,head_530,tail_531-head_530);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_532=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_533=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_533++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_533--;
                        if(                        brace_num_533==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_534=info->p;
            buffer_append(result_487,head_532,tail_534-head_532);
        }
        else {
            break;
        }
    }
    __result_obj__250 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value342=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1112, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_486)),(char*)come_increment_ref_count(buffer_to_string(result_487))))));
    /*c*/ come_call_finalizer3(asm_fun_name_486,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_487,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value342,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__250,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__250;
}

static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self){
struct tuple2$2char$phchar$ph* __result_obj__247;
void* __right_value338 = (void*)0;
struct tuple2$2char$phchar$ph* result_535;
void* __right_value339 = (void*)0;
char* __dec_obj81;
void* __right_value340 = (void*)0;
char* __dec_obj82;
struct tuple2$2char$phchar$ph* __result_obj__248;
    if(    self==(void*)0) {
        __result_obj__247 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__247,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__247;
    }
    result_535=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj81=result_535->v1,
        result_535->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phchar$ph_clone", 4, "char*"));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj82=result_535->v2,
        result_535->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2char$phchar$ph_clone", 5, "char*"));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__248 = come_increment_ref_count(result_535);
    /*c*/ come_call_finalizer3(result_535,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__248,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_536;
    result_536=0;
    result_536+=int_get_hash_key(((int)self->v1));
    result_536+=int_get_hash_key(((int)self->v2));
    return result_536;
}

static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj83;
char* __dec_obj84;
struct tuple2$2char$phchar$ph* __result_obj__249;
    __dec_obj83=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj84=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__249 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__249,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct buffer* asm_fun_name_537;
void* __right_value345 = (void*)0;
char* attribute_538;
int nest_539;
int nest_540;
int nest_541;
int nest_542;
int nest_543;
void* __right_value346 = (void*)0;
char* __dec_obj85;
int len_544;
_Bool in_dquort_545;
int brace_num_546;
int brace_num_547;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__251;
    asm_fun_name_537=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1117, "struct buffer*"))));
    attribute_538=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_539=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_539++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_539--;
                        if(                        nest_539==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_540=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_540++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_540--;
                        if(                        nest_540==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_541=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_541++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_541--;
                        if(                        nest_541==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_542=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_542++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_542--;
                        if(                        nest_542==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_543=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_543++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_543--;
                        if(                        nest_543==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj85=attribute_538,
            attribute_538=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_544=0;
            if(            *info->p==40) {
                in_dquort_545=(_Bool)0;
                brace_num_546=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_545=!in_dquort_545;
                    }
                    else if(                    in_dquort_545) {
                        buffer_append_char(asm_fun_name_537,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_546++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_546--;
                        if(                        brace_num_546==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_547=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_547++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_547--;
                        if(                        brace_num_547==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__251 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value349=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1386, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_537)),(char*)come_increment_ref_count(attribute_538)))));
    /*c*/ come_call_finalizer3(asm_fun_name_537,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute_538 = come_decrement_ref_count(attribute_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value349,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__251,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value350 = (void*)0;
char* __dec_obj86;
char* head_548;
int head_sline_549;
void* __right_value351 = (void*)0;
char* buf_550;
void* __right_value352 = (void*)0;
struct sNode* node_551;
_Bool Value_552;
    while(*info->p) {
        __dec_obj86=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1392, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        head_548=info->p;
        head_sline_549=info->sline;
        buf_550=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_550 = come_decrement_ref_count(buf_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_551=(struct sNode*)come_increment_ref_count(top_level_v99(buf_550,head_548,head_sline_549,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_551!=((void*)0)) {
            Value_552=node_compile(node_551,info);
            if(            !Value_552) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_550 = come_decrement_ref_count(buf_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_551) ? node_551 = come_decrement_ref_count(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_550 = come_decrement_ref_count(buf_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_551) ? node_551 = come_decrement_ref_count(node_551, ((struct sNode*)node_551)->finalize, ((struct sNode*)node_551)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value353 = (void*)0;
char* name_553;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sType* result_type_554;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1sType$ph* param_types_555;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1char$ph* param_names_556;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1char$ph* param_default_parametors_557;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sFun* fun_558;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
char* name_580;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* result_type_581;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1sType$ph* param_types_582;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1char$ph* param_names_583;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct list$1char$ph* param_default_parametors_584;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sFun* fun_585;
void* __right_value387 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_553=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_554=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1442, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_555=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1443, "struct list$1sType$ph*"))));
        param_names_556=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1444, "struct list$1char$ph*"))));
        param_default_parametors_557=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1445, "struct list$1char$ph*"))));
        fun_558=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1446, "struct sFun*")),(char*)come_increment_ref_count(name_553),(struct sType*)come_increment_ref_count(result_type_554),(struct list$1sType$ph*)come_increment_ref_count(param_types_555),(struct list$1char$ph*)come_increment_ref_count(param_names_556),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_557),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_553)),(struct sFun*)come_increment_ref_count(fun_558));
        (name_553 = come_decrement_ref_count(name_553, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_554,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_555,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_556,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_557,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_558,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_580=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_581=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_582=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1456, "struct list$1sType$ph*"))));
        param_names_583=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1457, "struct list$1char$ph*"))));
        param_default_parametors_584=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1458, "struct list$1char$ph*"))));
        fun_585=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1459, "struct sFun*")),(char*)come_increment_ref_count(name_580),(struct sType*)come_increment_ref_count(result_type_581),(struct list$1sType$ph*)come_increment_ref_count(param_types_582),(struct list$1char$ph*)come_increment_ref_count(param_names_583),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_584),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_580)),(struct sFun*)come_increment_ref_count(fun_585));
        (name_580 = come_decrement_ref_count(name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_582,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_583,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_584,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_585,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_576;
unsigned int it_577;
_Bool same_key_exist_578;
char* it2_579;
struct map$2char$phsFun$ph* __result_obj__262;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_576=string_get_hash_key(((char*)key))%self->size;
    it_577=hash_576;
    while((_Bool)1) {
        if(        self->item_existance[it_577]) {
            if(            string_equals(self->keys[it_577],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_577]);
                    (self->keys[it_577] = come_decrement_ref_count(self->keys[it_577], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_577]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_577]);
                    self->keys[it_577]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_577],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_577]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_577]=item;
                }
                break;
            }
            it_577++;
            if(            it_577>=self->size) {
                it_577=0;
            }
            else if(            it_577==hash_576) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_577]=(_Bool)1;
            if(            1) {
                self->keys[it_577]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_577]=key;
            }
            if(            1) {
                self->items[it_577]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_577]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_578=(_Bool)0;
    for(    it2_579=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_579=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_579,key)) {
            same_key_exist_578=(_Bool)1;
        }
    }
    if(    !same_key_exist_578) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__262 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_559;
void* __right_value367 = (void*)0;
char** keys_560;
void* __right_value368 = (void*)0;
struct sFun** items_561;
void* __right_value369 = (void*)0;
_Bool* item_existance_562;
int len_563;
char* it_566;
struct sFun* default_value_569;
void* __right_value370 = (void*)0;
struct sFun* it2_570;
unsigned int hash_573;
int n_574;
struct sFun* default_value_575;
void* __right_value371 = (void*)0;
default_value_569 = (void*)0;
default_value_575 = (void*)0;
    size_559=self->size*10;
    keys_560=(char**)come_increment_ref_count(((char**)(__right_value367=(char**)come_calloc(1, sizeof(char*)*(1*(size_559)), "./comelang.h", 2281, "char**"))));
    items_561=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value368=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_559)), "./comelang.h", 2282, "struct sFun**"))));
    item_existance_562=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value369=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_559)), "./comelang.h", 2283, "_Bool*"))));
    len_563=0;
    for(    it_566=map$2char$phsFun$ph_begin(self);    !map$2char$phsFun$ph_end(self);    it_566=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_569,0,sizeof(struct sFun*));
        it2_570=((struct sFun*)(__right_value370=map$2char$phsFun$ph_at(self,it_566,(struct sFun*)come_increment_ref_count(default_value_569))));
        /*c*/ come_call_finalizer3(__right_value370,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_573=string_get_hash_key(((char*)it_566))%size_559;
        n_574=hash_573;
        while((_Bool)1) {
            if(            item_existance_562[n_574]) {
                n_574++;
                if(                n_574>=size_559) {
                    n_574=0;
                }
                else if(                n_574==hash_573) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_562[n_574]=(_Bool)1;
                keys_560[n_574]=it_566;
                items_561[n_574]=((struct sFun*)(__right_value371=map$2char$phsFun$ph_at(self,it_566,(struct sFun*)come_increment_ref_count(default_value_575))));
                /*c*/ come_call_finalizer3(__right_value371,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_563++;
                /*c*/ come_call_finalizer3(default_value_575,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_575,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_569,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_560;
    self->items=items_561;
    self->item_existance=item_existance_562;
    self->size=size_559;
    self->len=len_563;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_564;
char* __result_obj__252;
char* __result_obj__253;
char* result_565;
char* __result_obj__254;
result_564 = (void*)0;
result_565 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_564,0,sizeof(char*));
        __result_obj__252 = result_564;
        return __result_obj__252;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__253 = self->key_list->it->item;
        return __result_obj__253;
    }
    memset(&result_565,0,sizeof(char*));
    __result_obj__254 = result_565;
    return __result_obj__254;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_567;
char* __result_obj__255;
char* __result_obj__256;
char* result_568;
char* __result_obj__257;
result_567 = (void*)0;
result_568 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_567,0,sizeof(char*));
        __result_obj__255 = result_567;
        return __result_obj__255;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__256 = self->key_list->it->item;
        return __result_obj__256;
    }
    memset(&result_568,0,sizeof(char*));
    __result_obj__257 = result_568;
    return __result_obj__257;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_571;
unsigned int it_572;
struct sFun* __result_obj__258;
struct sFun* __result_obj__259;
struct sFun* __result_obj__260;
struct sFun* __result_obj__261;
    hash_571=string_get_hash_key(((char*)key))%self->size;
    it_572=hash_571;
    while((_Bool)1) {
        if(        self->item_existance[it_572]) {
            if(            string_equals(self->keys[it_572],key)) {
                __result_obj__258 = come_increment_ref_count(self->items[it_572]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__258,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__258;
            }
            it_572++;
            if(            it_572>=self->size) {
                it_572=0;
            }
            else if(            it_572==hash_571) {
                __result_obj__259 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__259,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__259;
            }
        }
        else {
            __result_obj__260 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__260;
        }
    }
    __result_obj__261 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__261,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_586;
_Bool is_type_name_flag_587;
int sline_588;
_Bool define_struct_nobody_589;
char* p_590;
int sline_591;
void* __right_value388 = (void*)0;
char* word_592;
_Bool define_function_pointer_result_function_593;
_Bool define_variable_between_brace_594;
char* p_595;
void* __right_value389 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* result_type_596=0;
char* fun_name_597=0;
_Bool err_598=0;
void* __right_value390 = (void*)0;
char* word_599;
_Bool define_function_flag_600;
char* p_601;
void* __right_value391 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_602=0;
char* fun_name_603=0;
_Bool err_604=0;
char* word_605;
void* __right_value392 = (void*)0;
char* __dec_obj87;
void* __right_value393 = (void*)0;
char* __dec_obj88;
char* __dec_obj89;
void* __right_value394 = (void*)0;
char* __dec_obj90;
_Bool define_variable_606;
char* p_607;
void* __right_value395 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_608=0;
char* fun_name_609=0;
_Bool err_610=0;
void* __right_value396 = (void*)0;
char* word_611;
void* __right_value397 = (void*)0;
char* word_612;
char* p_613;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
char* word_614;
void* __right_value401 = (void*)0;
char* __dec_obj91;
void* __right_value402 = (void*)0;
char* word_615;
void* __right_value403 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c16_616=0;
char* Err_617=0;
void* __right_value404 = (void*)0;
char* word_618;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct sNode* node_619;
struct sNode* __result_obj__263;
void* __right_value407 = (void*)0;
struct sNode* __result_obj__264;
char* header_head_620;
void* __right_value408 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* result_type_621=0;
char* fun_name_622=0;
_Bool err_623=0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1sType$ph* param_types_624;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct list$1char$ph* param_names_625;
void* __right_value413 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* param_type_626=0;
char* param_name_627=0;
_Bool err_628=0;
void* __right_value414 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_c17_629=0;
char* Err_630=0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_635=0;
char* Err_636=0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct list$1sType$ph* param_types2_637;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1char$ph* param_names2_638;
void* __right_value425 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var25 = (void*)0;
struct sType* param_type_639=0;
char* param_name_640=0;
_Bool err_641=0;
void* __right_value426 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c19_642=0;
char* Err_643=0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_645=0;
char* Err_646=0;
char* header_tail_647;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sType* result_type2_648;
struct sType* __dec_obj95;
void* __right_value433 = (void*)0;
struct list$1sType$ph* __dec_obj96;
void* __right_value434 = (void*)0;
struct list$1char$ph* __dec_obj97;
_Bool var_args_649;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1char$ph* param_default_parametors_650;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sFun* fun_651;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sFun* fun2_655;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value495 = (void*)0;
struct sNode* result_656;
struct sNode* __result_obj__294;
void* __right_value496 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_692=0;
char* Err_693=0;
void* __right_value497 = (void*)0;
struct sNode* node_694;
struct sNode* __result_obj__295;
void* __right_value498 = (void*)0;
struct sNode* node_695;
struct sNode* __result_obj__296;
void* __right_value499 = (void*)0;
struct sNode* node_696;
char* source_tail_697;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct buffer* header_698;
struct sNode* __result_obj__297;
void* __right_value502 = (void*)0;
char* buf2_699;
void* __right_value503 = (void*)0;
struct sNode* __result_obj__298;
    info->in_top_level=(_Bool)1;
    source_head_586=info->p;
    is_type_name_flag_587=is_type_name(buf,info);
    sline_588=info->sline;
    define_struct_nobody_589=(_Bool)0;
    {
        p_590=info->p;
        sline_591=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_592=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_589=(_Bool)1;
                }
                (word_592 = come_decrement_ref_count(word_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_591;
    }
    define_function_pointer_result_function_593=(_Bool)0;
    define_variable_between_brace_594=(_Bool)0;
    if(    is_type_name_flag_587) {
        p_595=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value389=backtrace_parse_type((_Bool)0,info)));
            result_type_596=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            fun_name_597=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_598=multiple_assign_var17->v3;
            /*c*/ come_call_finalizer3(__right_value389,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_593=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_599=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_599,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_594=(_Bool)1;
                            }
                        }
                        (word_599 = come_decrement_ref_count(word_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            /*c*/ come_call_finalizer3(result_type_596,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_597 = come_decrement_ref_count(fun_name_597, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_588;
    }
    define_function_flag_600=(_Bool)0;
    if(    is_type_name_flag_587&&!define_function_pointer_result_function_593&&charp_operator_not_equals(buf,"__typeof__")) {
        p_601=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value391=backtrace_parse_type((_Bool)0,info)));
            result_type_602=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_603=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_604=multiple_assign_var18->v3;
            /*c*/ come_call_finalizer3(__right_value391,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_602,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_603 = come_decrement_ref_count(fun_name_603, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_605=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj87=word_605,
                word_605=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(word_605,"extern")) {
                    __dec_obj88=word_605,
                    word_605=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj89=word_605,
                word_605=((void*)0);
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_605) {
                if(                is_type_name(word_605,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj90=word_605,
                        word_605=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                }
                if(                strlen(word_605)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_587) {
                        define_function_flag_600=(_Bool)1;
                    }
                }
            }
            (word_605 = come_decrement_ref_count(word_605, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_601;
        info->sline=sline_588;
    }
    define_variable_606=(_Bool)1;
    if(    is_type_name_flag_587&&!define_function_pointer_result_function_593) {
        p_607=info->p;
        info->p=head;
        if(        !is_type_name_flag_587) {
            define_variable_606=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value395=backtrace_parse_type((_Bool)0,info)));
            result_type_608=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_609=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_610=multiple_assign_var19->v3;
            /*c*/ come_call_finalizer3(__right_value395,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_611=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_606=(_Bool)1;
                            }
                        }
                        (word_611 = come_decrement_ref_count(word_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_612=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_612,info)&&*info->p!=40) {
                            define_variable_606=(_Bool)1;
                        }
                    }
                    (word_612 = come_decrement_ref_count(word_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(result_type_608,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_609 = come_decrement_ref_count(fun_name_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_606=(_Bool)0;
        }
        else if(        define_variable_606) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_606=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_606=(_Bool)0;
            }
        }
        info->p=p_607;
        info->sline=sline_588;
    }
    else {
        define_variable_606=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_593) {
        p_613=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value398=parse_struct_attribute(info)));
            (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value399=parse_word(info)));
                (__right_value399 = come_decrement_ref_count(__right_value399, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_614=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj91=word_614,
                        word_614=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_614,"extends")) {
                            define_variable_606=(_Bool)0;
                        }
                    }
                    (word_614 = come_decrement_ref_count(word_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_606=(_Bool)0;
        }
        else if(        define_variable_606) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_606=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_606=(_Bool)0;
            }
        }
        info->p=p_613;
        info->sline=sline_588;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_615=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value403=err_msg(info,"unexpected source end")));
                    come_exception_var_c16_616=multiple_assign_var20->v1;
                    Err_617=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                    ((Err_617)?(puts(Err_617),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value403,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_617 = come_decrement_ref_count(Err_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_618=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_618, "05function.c", 1754, "char*")));
                    (word_618 = come_decrement_ref_count(word_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_619=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__263 = come_increment_ref_count(node_619);
            ((node_619) ? node_619 = come_decrement_ref_count(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_615 = come_decrement_ref_count(word_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__263) ? __result_obj__263 = come_decrement_ref_count(__result_obj__263, ((struct sNode*)__result_obj__263)->finalize, ((struct sNode*)__result_obj__263)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__263;
            ((node_619) ? node_619 = come_decrement_ref_count(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_615 = come_decrement_ref_count(word_615, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_589) {
    }
    else if(    define_variable_between_brace_594) {
        info->p=head;
        info->sline=sline_588;
        __result_obj__264 = come_increment_ref_count(((struct sNode*)(__right_value407=parse_global_variable(info))));
        ((__right_value407) ? __right_value407 = come_decrement_ref_count(__right_value407, ((struct sNode*)__right_value407)->finalize, ((struct sNode*)__right_value407)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__264) ? __result_obj__264 = come_decrement_ref_count(__result_obj__264, ((struct sNode*)__result_obj__264)->finalize, ((struct sNode*)__result_obj__264)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__264;
    }
    else if(    define_function_pointer_result_function_593) {
        header_head_620=info->p;
        multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value408=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_621=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
        fun_name_622=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        err_623=multiple_assign_var21->v3;
        /*c*/ come_call_finalizer3(__right_value408,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_624=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1783, "struct list$1sType$ph*"))));
            param_names_625=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1784, "struct list$1char$ph*"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value413=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_626=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                    param_name_627=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    err_628=multiple_assign_var22->v3;
                    /*c*/ come_call_finalizer3(__right_value413,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_628) {
                        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value414=err_msg(info,"parse_type is failed")));
                        come_exception_var_c17_629=multiple_assign_var23->v1;
                        Err_630=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                        ((Err_630)?(puts(Err_630),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value414,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_630 = come_decrement_ref_count(Err_630, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph_push_back(param_types_624,(struct sType*)come_increment_ref_count(param_type_626));
                    static int num_function_pointer_result_var_name_a_634=0;
                    list$1char$ph_push_back(param_names_625,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_634)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value419=parse_word(info)));
                        (__right_value419 = come_decrement_ref_count(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*c*/ come_call_finalizer3(param_type_626,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_627 = come_decrement_ref_count(param_name_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value420=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c18_635=multiple_assign_var24->v1;
                        Err_636=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_636)?(puts(Err_636),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value420,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_636 = come_decrement_ref_count(Err_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    /*c*/ come_call_finalizer3(param_type_626,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_627 = come_decrement_ref_count(param_name_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_637=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1830, "struct list$1sType$ph*"))));
                param_names2_638=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1831, "struct list$1char$ph*"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var25=((struct tuple3$3sType$phchar$phbool$*)(__right_value425=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_639=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                        param_name_640=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        err_641=multiple_assign_var25->v3;
                        /*c*/ come_call_finalizer3(__right_value425,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        !err_641) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value426=err_msg(info,"parse_type is failed")));
                            come_exception_var_c19_642=multiple_assign_var26->v1;
                            Err_643=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_643)?(puts(Err_643),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value426,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_643 = come_decrement_ref_count(Err_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph_push_back(param_types2_637,(struct sType*)come_increment_ref_count(param_type_639));
                        static int num_function_pointer_result_var_name_b_644=0;
                        list$1char$ph_push_back(param_names2_638,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_644)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value428=parse_word(info)));
                            (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*c*/ come_call_finalizer3(param_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (param_name_640 = come_decrement_ref_count(param_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value429=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c20_645=multiple_assign_var27->v1;
                            Err_646=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_646)?(puts(Err_646),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value429,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_646 = come_decrement_ref_count(Err_646, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        /*c*/ come_call_finalizer3(param_type_639,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_640 = come_decrement_ref_count(param_name_640, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_647=info->p;
                result_type2_648=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1873, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj95=result_type2_648->mResultType,
                result_type2_648->mResultType=(struct sType*)come_increment_ref_count(result_type_621);
                /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj96=result_type2_648->mParamTypes,
                result_type2_648->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types2_637));
                /*b*/ come_call_finalizer3(__dec_obj96,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj97=result_type2_648->mParamNames,
                result_type2_648->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_638));
                /*b*/ come_call_finalizer3(__dec_obj97,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_648->mVarArgs=(_Bool)0;
                result_type2_648->mStatic=(_Bool)0;
                var_args_649=(_Bool)0;
                param_default_parametors_650=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1883, "struct list$1char$ph*"))));
                fun_651=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1885, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_622)),(struct sType*)come_increment_ref_count(result_type2_648),(struct list$1sType$ph*)come_increment_ref_count(param_types_624),(struct list$1char$ph*)come_increment_ref_count(param_names_625),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_650),(_Bool)1,var_args_649,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_655=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value442=__builtin_string(fun_name_622)))));
                (__right_value442 = come_decrement_ref_count(__right_value442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_655==((void*)0)||fun2_655->mExternal) {
                    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_622)),(struct sFun*)come_increment_ref_count(fun_651));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1898, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value446=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1898, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_651),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_656=(struct sNode*)come_increment_ref_count(_inf_value2);
                /*c*/ come_call_finalizer3(__right_value446,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__294 = come_increment_ref_count(result_656);
                /*c*/ come_call_finalizer3(param_types2_637,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_638,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_648,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_650,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_651,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun2_655,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_656) ? result_656 = come_decrement_ref_count(result_656, ((struct sNode*)result_656)->finalize, ((struct sNode*)result_656)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_625,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_621,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_622 = come_decrement_ref_count(fun_name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__294;
                /*c*/ come_call_finalizer3(param_types2_637,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_638,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_648,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_650,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_651,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun2_655,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_656) ? result_656 = come_decrement_ref_count(result_656, ((struct sNode*)result_656)->finalize, ((struct sNode*)result_656)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value496=err_msg(info,"require (")));
                come_exception_var_c21_692=multiple_assign_var28->v1;
                Err_693=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_693)?(puts(Err_693),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value496,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_693 = come_decrement_ref_count(Err_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(param_types_624,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_625,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(result_type_621,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_622 = come_decrement_ref_count(fun_name_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_588;
        node_694=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__295 = come_increment_ref_count(node_694);
        ((node_694) ? node_694 = come_decrement_ref_count(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__295) ? __result_obj__295 = come_decrement_ref_count(__result_obj__295, ((struct sNode*)__result_obj__295)->finalize, ((struct sNode*)__result_obj__295)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__295;
        ((node_694) ? node_694 = come_decrement_ref_count(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_600) {
        info->p=head;
        info->sline=sline_588;
        node_695=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__296 = come_increment_ref_count(node_695);
        ((node_695) ? node_695 = come_decrement_ref_count(node_695, ((struct sNode*)node_695)->finalize, ((struct sNode*)node_695)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__296) ? __result_obj__296 = come_decrement_ref_count(__result_obj__296, ((struct sNode*)__result_obj__296)->finalize, ((struct sNode*)__result_obj__296)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__296;
        ((node_695) ? node_695 = come_decrement_ref_count(node_695, ((struct sNode*)node_695)->finalize, ((struct sNode*)node_695)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_606) {
        info->p=head;
        info->sline=sline_588;
        node_696=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_697=info->p;
        header_698=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1932, "struct buffer*"))));
        buffer_append(header_698,source_head_586,source_tail_697-source_head_586);
        __result_obj__297 = come_increment_ref_count(node_696);
        ((node_696) ? node_696 = come_decrement_ref_count(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__297;
        ((node_696) ? node_696 = come_decrement_ref_count(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_698,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->p=head;
    info->sline=sline_588;
    buf2_699=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__298 = come_increment_ref_count(((struct sNode*)(__right_value503=top_level_v98(buf2_699,head,head_sline,info))));
    (buf2_699 = come_decrement_ref_count(buf2_699, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value503) ? __right_value503 = come_decrement_ref_count(__right_value503, ((struct sNode*)__right_value503)->finalize, ((struct sNode*)__right_value503)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__298) ? __result_obj__298 = come_decrement_ref_count(__result_obj__298, ((struct sNode*)__result_obj__298)->finalize, ((struct sNode*)__result_obj__298)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__298;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value415 = (void*)0;
struct list_item$1sType$ph* litem_631;
struct sType* __dec_obj92;
void* __right_value416 = (void*)0;
struct list_item$1sType$ph* litem_632;
struct sType* __dec_obj93;
void* __right_value417 = (void*)0;
struct list_item$1sType$ph* litem_633;
struct sType* __dec_obj94;
struct list$1sType$ph* __result_obj__265;
    if(    self->len==0) {
        litem_631=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value415=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1227, "struct list_item$1sType$ph*"))));
        litem_631->prev=((void*)0);
        litem_631->next=((void*)0);
        __dec_obj92=litem_631->item,
        litem_631->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_631;
        self->head=litem_631;
    }
    else if(    self->len==1) {
        litem_632=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value416=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1237, "struct list_item$1sType$ph*"))));
        litem_632->prev=self->head;
        litem_632->next=((void*)0);
        __dec_obj93=litem_632->item,
        litem_632->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_632;
        self->head->next=litem_632;
    }
    else {
        litem_633=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value417=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1247, "struct list_item$1sType$ph*"))));
        litem_633->prev=self->tail;
        litem_633->next=((void*)0);
        __dec_obj94=litem_633->item,
        litem_633->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_633;
        self->tail=litem_633;
    }
    self->len++;
    __result_obj__265 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_652;
unsigned int hash_653;
unsigned int it_654;
struct sFun* __result_obj__266;
struct sFun* __result_obj__267;
struct sFun* __result_obj__268;
struct sFun* __result_obj__269;
default_value_652 = (void*)0;
    memset(&default_value_652,0,sizeof(struct sFun*));
    hash_653=string_get_hash_key(((char*)key))%self->size;
    it_654=hash_653;
    while((_Bool)1) {
        if(        self->item_existance[it_654]) {
            if(            string_equals(self->keys[it_654],key)) {
                __result_obj__266 = come_increment_ref_count(self->items[it_654]);
                /*c*/ come_call_finalizer3(default_value_652,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__266,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__266;
            }
            it_654++;
            if(            it_654>=self->size) {
                it_654=0;
            }
            else if(            it_654==hash_653) {
                __result_obj__267 = come_increment_ref_count(default_value_652);
                /*c*/ come_call_finalizer3(default_value_652,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__267,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__267;
            }
        }
        else {
            __result_obj__268 = come_increment_ref_count(default_value_652);
            /*c*/ come_call_finalizer3(default_value_652,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__268,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__268;
        }
    }
    __result_obj__269 = come_increment_ref_count(default_value_652);
    /*c*/ come_call_finalizer3(default_value_652,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__269,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__270;
void* __right_value447 = (void*)0;
struct sFunNode* result_657;
void* __right_value448 = (void*)0;
char* __dec_obj98;
void* __right_value494 = (void*)0;
struct sFun* __dec_obj121;
struct sFunNode* __result_obj__293;
    if(    self==(void*)0) {
        __result_obj__270 = (void*)0;
        return __result_obj__270;
    }
    result_657=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)) {
        result_657->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj98=result_657->sname,
        result_657->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_657->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj121=result_657->mFun,
        result_657->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        /*b*/ come_call_finalizer3(__dec_obj121,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__293 = result_657;
    /*c*/ come_call_finalizer3(result_657,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__271;
void* __right_value449 = (void*)0;
struct sFun* result_658;
void* __right_value450 = (void*)0;
char* __dec_obj99;
void* __right_value451 = (void*)0;
struct sType* __dec_obj100;
void* __right_value452 = (void*)0;
struct list$1sType$ph* __dec_obj101;
void* __right_value453 = (void*)0;
struct list$1char$ph* __dec_obj102;
void* __right_value454 = (void*)0;
struct list$1char$ph* __dec_obj103;
void* __right_value455 = (void*)0;
struct sType* __dec_obj104;
void* __right_value487 = (void*)0;
struct sBlock* __dec_obj114;
void* __right_value488 = (void*)0;
struct buffer* __dec_obj115;
void* __right_value489 = (void*)0;
struct buffer* __dec_obj116;
void* __right_value490 = (void*)0;
struct buffer* __dec_obj117;
void* __right_value491 = (void*)0;
struct buffer* __dec_obj118;
void* __right_value492 = (void*)0;
char* __dec_obj119;
void* __right_value493 = (void*)0;
char* __dec_obj120;
struct sFun* __result_obj__292;
    if(    self==(void*)0) {
        __result_obj__271 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__271,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__271;
    }
    result_658=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj99=result_658->mName,
        result_658->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj100=result_658->mResultType,
        result_658->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj101=result_658->mParamTypes,
        result_658->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj101,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj102=result_658->mParamNames,
        result_658->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj102,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj103=result_658->mParamDefaultParametors,
        result_658->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        /*b*/ come_call_finalizer3(__dec_obj103,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj104=result_658->mLambdaType,
        result_658->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj114=result_658->mBlock,
        result_658->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj114,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj115=result_658->mSource,
        result_658->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        /*b*/ come_call_finalizer3(__dec_obj115,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj116=result_658->mSourceHead,
        result_658->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        /*b*/ come_call_finalizer3(__dec_obj116,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj117=result_658->mSourceHead2,
        result_658->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        /*b*/ come_call_finalizer3(__dec_obj117,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj118=result_658->mSourceDefer,
        result_658->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        /*b*/ come_call_finalizer3(__dec_obj118,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_658->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_658->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_658->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_658->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_658->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_658->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_658->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj119=result_658->mAttribute,
        result_658->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 22, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj120=result_658->mFunAttribute,
        result_658->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 23, "char*"));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__292 = come_increment_ref_count(result_658);
    /*c*/ come_call_finalizer3(result_658,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__292,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__272;
void* __right_value456 = (void*)0;
struct sBlock* result_659;
void* __right_value457 = (void*)0;
struct list$1sNode$ph* __dec_obj105;
void* __right_value486 = (void*)0;
struct sVarTable* __dec_obj113;
struct sBlock* __result_obj__291;
    if(    self==(void*)0) {
        __result_obj__272 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__272,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__272;
    }
    result_659=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj105=result_659->mNodes,
        result_659->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj105,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj113=result_659->mVarTable,
        result_659->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj113,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_659->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__291 = come_increment_ref_count(result_659);
    /*c*/ come_call_finalizer3(result_659,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__273;
void* __right_value458 = (void*)0;
struct sVarTable* result_660;
void* __right_value485 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj112;
struct sVarTable* __result_obj__290;
    if(    self==(void*)0) {
        __result_obj__273 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__273,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__273;
    }
    result_660=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj112=result_660->mVars,
        result_660->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj112,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_660->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_660->mParent=self->mParent;
    }
    __result_obj__290 = come_increment_ref_count(result_660);
    /*c*/ come_call_finalizer3(result_660,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__274;
void* __right_value459 = (void*)0;
void* __right_value465 = (void*)0;
struct map$2char$phsVar$ph* result_664;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1char$ph* __dec_obj107;
char* it_667;
struct sVar* default_value_670;
void* __right_value468 = (void*)0;
struct sVar* it2_673;
void* __right_value474 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__289;
default_value_670 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__274 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__274,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__274;
    }
    result_664=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2113, "struct map$2char$phsVar$ph*"))));
    __dec_obj107=result_664->key_list,
    result_664->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2115, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj107,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_667=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_667=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_670,0,sizeof(struct sVar*));
        it2_673=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_667,(struct sVar*)come_increment_ref_count(default_value_670)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_664,(char*)come_increment_ref_count((char*)come_memdup(it_667, "./comelang.h", 2124, "char*")),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_673)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_664,(char*)come_increment_ref_count((char*)come_memdup(it_667, "./comelang.h", 2127, "char*")),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_673)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_664,(char*)come_increment_ref_count(it_667),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_673)));
        }
        else {
            map$2char$phsVar$ph_put(result_664,(char*)come_increment_ref_count(it_667),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_673)));
        }
        /*c*/ come_call_finalizer3(default_value_670,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_673,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__289 = come_increment_ref_count(result_664);
    /*c*/ come_call_finalizer3(result_664,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__289,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_661;
int i_662;
    for(    i_661=0;    i_661<self->size;    i_661++    ){
        if(        self->item_existance[i_661]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_661],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_662=0;    i_662<self->size;    i_662++    ){
        if(        self->item_existance[i_662]) {
            if(            1) {
                (self->keys[i_662] = come_decrement_ref_count(self->keys[i_662], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
int i_663;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1char$ph* __dec_obj106;
struct map$2char$phsVar$ph* __result_obj__275;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value460=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2042, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value461=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2043, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value462=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2044, "_Bool*"))));
    for(    i_663=0;    i_663<128;    i_663++    ){
        self->item_existance[i_663]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj106=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2054, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj106,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__275 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_665;
char* __result_obj__276;
char* __result_obj__277;
char* result_666;
char* __result_obj__278;
result_665 = (void*)0;
result_666 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_665,0,sizeof(char*));
        __result_obj__276 = result_665;
        return __result_obj__276;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__277 = self->key_list->it->item;
        return __result_obj__277;
    }
    memset(&result_666,0,sizeof(char*));
    __result_obj__278 = result_666;
    return __result_obj__278;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_668;
char* __result_obj__279;
char* __result_obj__280;
char* result_669;
char* __result_obj__281;
result_668 = (void*)0;
result_669 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_668,0,sizeof(char*));
        __result_obj__279 = result_668;
        return __result_obj__279;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__280 = self->key_list->it->item;
        return __result_obj__280;
    }
    memset(&result_669,0,sizeof(char*));
    __result_obj__281 = result_669;
    return __result_obj__281;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_671;
unsigned int it_672;
struct sVar* __result_obj__282;
struct sVar* __result_obj__283;
struct sVar* __result_obj__284;
struct sVar* __result_obj__285;
    hash_671=string_get_hash_key(((char*)key))%self->size;
    it_672=hash_671;
    while((_Bool)1) {
        if(        self->item_existance[it_672]) {
            if(            string_equals(self->keys[it_672],key)) {
                __result_obj__282 = come_increment_ref_count(self->items[it_672]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__282,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__282;
            }
            it_672++;
            if(            it_672>=self->size) {
                it_672=0;
            }
            else if(            it_672==hash_671) {
                __result_obj__283 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__283,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__283;
            }
        }
        else {
            __result_obj__284 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__284,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__284;
        }
    }
    __result_obj__285 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_685;
int it_686;
_Bool same_key_exist_687;
char* it2_688;
struct map$2char$phsVar$ph* __result_obj__286;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_685=string_get_hash_key(((char*)key))%self->size;
    it_686=hash_685;
    while((_Bool)1) {
        if(        self->item_existance[it_686]) {
            if(            string_equals(self->keys[it_686],key)) {
                if(                1) {
                    (self->keys[it_686] = come_decrement_ref_count(self->keys[it_686], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_686]);
                    self->keys[it_686]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_686]);
                    self->keys[it_686]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_686],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_686]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_686]=item;
                }
                break;
            }
            it_686++;
            if(            it_686>=self->size) {
                it_686=0;
            }
            else if(            it_686==hash_685) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_686]=(_Bool)1;
            if(            1) {
                self->keys[it_686]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_686]=key;
            }
            if(            1) {
                self->items[it_686]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_686]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_687=(_Bool)0;
    for(    it2_688=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_688=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_688,key)) {
            same_key_exist_687=(_Bool)1;
        }
    }
    if(    !same_key_exist_687) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__286 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_674;
void* __right_value469 = (void*)0;
char** keys_675;
void* __right_value470 = (void*)0;
struct sVar** items_676;
void* __right_value471 = (void*)0;
_Bool* item_existance_677;
int len_678;
char* it_679;
struct sVar* default_value_680;
void* __right_value472 = (void*)0;
struct sVar* it2_681;
unsigned int hash_682;
int n_683;
struct sVar* default_value_684;
void* __right_value473 = (void*)0;
default_value_680 = (void*)0;
default_value_684 = (void*)0;
    size_674=self->size*10;
    keys_675=(char**)come_increment_ref_count(((char**)(__right_value469=(char**)come_calloc(1, sizeof(char*)*(1*(size_674)), "./comelang.h", 2281, "char**"))));
    items_676=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value470=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_674)), "./comelang.h", 2282, "struct sVar**"))));
    item_existance_677=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value471=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_674)), "./comelang.h", 2283, "_Bool*"))));
    len_678=0;
    for(    it_679=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_679=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_680,0,sizeof(struct sVar*));
        it2_681=((struct sVar*)(__right_value472=map$2char$phsVar$ph_at(self,it_679,(struct sVar*)come_increment_ref_count(default_value_680))));
        /*c*/ come_call_finalizer3(__right_value472,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_682=string_get_hash_key(((char*)it_679))%size_674;
        n_683=hash_682;
        while((_Bool)1) {
            if(            item_existance_677[n_683]) {
                n_683++;
                if(                n_683>=size_674) {
                    n_683=0;
                }
                else if(                n_683==hash_682) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_677[n_683]=(_Bool)1;
                keys_675[n_683]=it_679;
                items_676[n_683]=((struct sVar*)(__right_value473=map$2char$phsVar$ph_at(self,it_679,(struct sVar*)come_increment_ref_count(default_value_684))));
                /*c*/ come_call_finalizer3(__right_value473,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_678++;
                /*c*/ come_call_finalizer3(default_value_684,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_684,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_680,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_675;
    self->items=items_676;
    self->item_existance=item_existance_677;
    self->size=size_674;
    self->len=len_678;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__287;
void* __right_value475 = (void*)0;
struct sVar* result_689;
void* __right_value476 = (void*)0;
char* __dec_obj108;
void* __right_value477 = (void*)0;
char* __dec_obj109;
void* __right_value478 = (void*)0;
struct sType* __dec_obj110;
void* __right_value479 = (void*)0;
char* __dec_obj111;
struct sVar* __result_obj__288;
    if(    self==(void*)0) {
        __result_obj__287 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__287,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__287;
    }
    result_689=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj108=result_689->mName,
        result_689->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj109=result_689->mCValueName,
        result_689->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj110=result_689->mType,
        result_689->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_689->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_689->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj111=result_689->mFunName,
        result_689->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__288 = come_increment_ref_count(result_689);
    /*c*/ come_call_finalizer3(result_689,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__288,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_690;
int i_691;
    for(    i_690=0;    i_690<self->size;    i_690++    ){
        if(        self->item_existance[i_690]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_690],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_691=0;    i_691<self->size;    i_691++    ){
        if(        self->item_existance[i_691]) {
            if(            1) {
                (self->keys[i_691] = come_decrement_ref_count(self->keys[i_691], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_700;
int caller_line_701;
char* caller_sname_702;
_Bool comma_instead_of_semicolon_703;
_Bool without_semicolon_704;
char* last_code_705;
char* __dec_obj122;
char* last_code2_706;
char* __dec_obj123;
void* __right_value504 = (void*)0;
char* sname_top_707;
int sline_top_708;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sFun* funX_709;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__302;
void* __right_value511 = (void*)0;
struct sType* result_type_712;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct list$1sType$ph* param_types_713;
struct list$1sType$ph* o2_saved_714;
struct sType* it_717;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* param_type_720;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1char$ph* param_names_721;
void* __right_value518 = (void*)0;
struct list$1char$ph* param_default_parametors_722;
char* p_723;
int sline_724;
char* sname_725;
char* head_726;
struct buffer* source_727;
void* __right_value519 = (void*)0;
struct buffer* __dec_obj126;
struct sType* generics_type_saved_728;
void* __right_value520 = (void*)0;
struct sType* __dec_obj127;
struct list$1char$ph* method_generics_type_names_729;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1char$ph* __dec_obj128;
struct list$1char$ph* o2_saved_730;
char* it_731;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1char$ph* __dec_obj129;
char* __dec_obj130;
void* __right_value525 = (void*)0;
struct sBlock* block_732;
struct buffer* __dec_obj131;
char* __dec_obj132;
_Bool var_args_733;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sFun* fun_734;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value533 = (void*)0;
struct sNode* node_735;
_Bool in_generics_fun_736;
_Bool Value_737;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__309;
struct sType* __dec_obj133;
struct list$1char$ph* __dec_obj134;
void* __right_value537 = (void*)0;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__310;
    caller_fun_700=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_701=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_702=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_703=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_704=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_705=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj122=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_706=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj123=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_707=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_708=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_709=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value505=__builtin_string(fun_name)))));
    (__right_value505 = come_decrement_ref_count(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_709) {
        __result_obj__302 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value510=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1973, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_707 = come_decrement_ref_count(sname_top_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_709,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value510,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__302,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__302;
    }
    result_type_712=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_713=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1979, "struct list$1sType$ph*"))));
    for(    o2_saved_714=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_717=list$1sType$ph_begin((o2_saved_714));    !list$1sType$ph_end((o2_saved_714));    it_717=list$1sType$ph_next((o2_saved_714))    ){
        param_type_720=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value514=come_call_cloner(sType_clone, it_717))),generics_type,info));
        /*c*/ come_call_finalizer3(__right_value514,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_713,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_720)));
        /*c*/ come_call_finalizer3(param_type_720,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_714,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_721=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_722=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_723=info->p;
    sline_724=info->sline;
    sname_725=(char*)come_increment_ref_count(info->sname);
    head_726=info->head;
    source_727=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj126=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_728=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj127=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_729=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj128=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2007, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj128,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_730=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_731=list$1char$ph_begin((o2_saved_730));    !list$1char$ph_end((o2_saved_730));    it_731=list$1char$ph_next((o2_saved_730))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_731, "05function.c", 2009, "char*")));
    }
    /*c*/ come_call_finalizer3(o2_saved_730,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj129=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj129,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj130=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_732=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_726;
    __dec_obj131=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_727);
    /*b*/ come_call_finalizer3(__dec_obj131,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_723;
    info->sline=sline_724;
    __dec_obj132=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_725);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_712->mInline=(_Bool)0;
    result_type_712->mStatic=(_Bool)0;
    result_type_712->mUniq=(_Bool)0;
    var_args_733=generics_fun->mVarArgs;
    fun_734=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2031, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_712),(struct list$1sType$ph*)come_increment_ref_count(param_types_713),(struct list$1char$ph*)come_increment_ref_count(param_names_721),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_722),(_Bool)0,var_args_733,(struct sBlock*)come_increment_ref_count(block_732),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_734));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2038, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value532=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2038, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_734),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_735=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value532,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    in_generics_fun_736=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_737=node_compile(node_735,info);
    if(    !Value_737) {
        __result_obj__309 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value536=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2043, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_707 = come_decrement_ref_count(sname_top_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_709,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_712,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_713,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_721,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_722,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_725 = come_decrement_ref_count(sname_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_727,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type_saved_728,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_729,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_732,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_734,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_735) ? node_735 = come_decrement_ref_count(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value536,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__309,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__309;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_736;
    __dec_obj133=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_728);
    /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj134=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_729);
    /*b*/ come_call_finalizer3(__dec_obj134,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj135=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_707));
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_708;
    __dec_obj136=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_705);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj137=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_706);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_700;
    info->caller_line=caller_line_701;
    info->caller_sname=caller_sname_702;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_703;
    info->without_semicolon=without_semicolon_704;
    __result_obj__310 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value540=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2064, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_707 = come_decrement_ref_count(sname_top_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(funX_709,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_712,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_713,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_721,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_722,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_725 = come_decrement_ref_count(sname_725, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_727,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(generics_type_saved_728,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_729,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_732,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_734,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_735) ? node_735 = come_decrement_ref_count(node_735, ((struct sNode*)node_735)->finalize, ((struct sNode*)node_735)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value540,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__310,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__310;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__299;
void* __right_value507 = (void*)0;
struct tuple2$2char$phbool$* result_710;
void* __right_value508 = (void*)0;
char* __dec_obj124;
struct tuple2$2char$phbool$* __result_obj__300;
    if(    self==(void*)0) {
        __result_obj__299 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__299,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__299;
    }
    result_710=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj124=result_710->v1,
        result_710->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phbool$_clone", 4, "char*"));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_710->v2=self->v2;
    }
    __result_obj__300 = come_increment_ref_count(result_710);
    /*c*/ come_call_finalizer3(result_710,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_711;
    result_711=0;
    result_711+=int_get_hash_key(((int)self->v1));
    result_711+=int_get_hash_key(((int)self->v2));
    return result_711;
}

static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj125;
struct tuple2$2char$phbool$* __result_obj__301;
    __dec_obj125=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__301 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__301,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_715;
struct sType* __result_obj__303;
struct sType* __result_obj__304;
struct sType* result_716;
struct sType* __result_obj__305;
result_715 = (void*)0;
result_716 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_715,0,sizeof(struct sType*));
        __result_obj__303 = result_715;
        return __result_obj__303;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__304 = self->it->item;
        return __result_obj__304;
    }
    memset(&result_716,0,sizeof(struct sType*));
    __result_obj__305 = result_716;
    return __result_obj__305;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_718;
struct sType* __result_obj__306;
struct sType* __result_obj__307;
struct sType* result_719;
struct sType* __result_obj__308;
result_718 = (void*)0;
result_719 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_718,0,sizeof(struct sType*));
        __result_obj__306 = result_718;
        return __result_obj__306;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__307 = self->it->item;
        return __result_obj__307;
    }
    memset(&result_719,0,sizeof(struct sType*));
    __result_obj__308 = result_719;
    return __result_obj__308;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_738;
int caller_line_739;
char* caller_sname_740;
_Bool comma_instead_of_semicolon_741;
char* last_code_742;
char* __dec_obj138;
char* last_code2_743;
char* __dec_obj139;
void* __right_value541 = (void*)0;
char* sname_top_744;
int sline_top_745;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sFun* funX_746;
_Bool __result_obj__311;
void* __right_value544 = (void*)0;
struct sType* result_type_747;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1sType$ph* param_types_748;
struct list$1sType$ph* o2_saved_749;
struct sType* it_750;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* param_type_751;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1char$ph* param_names_752;
void* __right_value551 = (void*)0;
struct list$1char$ph* param_default_parametors_753;
char* p_754;
int sline_755;
char* sname_756;
char* head_757;
struct buffer* source_758;
void* __right_value552 = (void*)0;
struct buffer* __dec_obj140;
struct list$1char$ph* method_generics_type_names_759;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1char$ph* __dec_obj141;
struct list$1char$ph* o2_saved_760;
char* it_761;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1char$ph* __dec_obj142;
char* __dec_obj143;
void* __right_value557 = (void*)0;
struct sBlock* block_762;
struct buffer* __dec_obj144;
char* __dec_obj145;
_Bool var_args_763;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sFun* fun_764;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value566 = (void*)0;
struct sNode* node_765;
_Bool Value_766;
void* __if_result__1_767 = (void*)0;
_Bool __result_obj__312;
struct list$1char$ph* __dec_obj146;
void* __right_value567 = (void*)0;
char* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
_Bool __result_obj__313;
    caller_fun_738=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_739=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_740=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_741=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_742=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj138=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_743=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj139=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_744=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_745=info->sline;
    funX_746=((struct sFun*)(__right_value543=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value542=__builtin_string(fun_name))))));
    (__right_value542 = come_decrement_ref_count(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value543,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    funX_746) {
        __result_obj__311 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_742 = come_decrement_ref_count(last_code_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_743 = come_decrement_ref_count(last_code2_743, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_744 = come_decrement_ref_count(sname_top_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__311;
    }
    result_type_747=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_748=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2093, "struct list$1sType$ph*"))));
    for(    o2_saved_749=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_750=list$1sType$ph_begin((o2_saved_749));    !list$1sType$ph_end((o2_saved_749));    it_750=list$1sType$ph_next((o2_saved_749))    ){
        param_type_751=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value547=come_call_cloner(sType_clone, it_750))),info));
        /*c*/ come_call_finalizer3(__right_value547,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_748,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_751)));
        /*c*/ come_call_finalizer3(param_type_751,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_749,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_752=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_753=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_754=info->p;
    sline_755=info->sline;
    sname_756=(char*)come_increment_ref_count(info->sname);
    head_757=info->head;
    source_758=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj140=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj140,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_759=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj141=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2115, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj141,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_760=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_761=list$1char$ph_begin((o2_saved_760));    !list$1char$ph_end((o2_saved_760));    it_761=list$1char$ph_next((o2_saved_760))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_761, "05function.c", 2117, "char*")));
    }
    /*c*/ come_call_finalizer3(o2_saved_760,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj142=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj142,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj143=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_762=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_757;
    __dec_obj144=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_758);
    /*b*/ come_call_finalizer3(__dec_obj144,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_754;
    info->sline=sline_755;
    __dec_obj145=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_756);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_747->mInline=(_Bool)0;
    result_type_747->mStatic=(_Bool)0;
    result_type_747->mUniq=(_Bool)0;
    var_args_763=generics_fun->mVarArgs;
    fun_764=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2139, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_747),(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_748)),(struct list$1char$ph*)come_increment_ref_count(param_names_752),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_753),(_Bool)0,var_args_763,(struct sBlock*)come_increment_ref_count(block_762),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_764));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2146, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value565=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2146, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_764),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_765=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value565,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_766=node_compile(node_765,info);
    if(    !Value_766) {
        __result_obj__312 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_742 = come_decrement_ref_count(last_code_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_743 = come_decrement_ref_count(last_code2_743, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_744 = come_decrement_ref_count(sname_top_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_747,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_748,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_753,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_756 = come_decrement_ref_count(sname_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_758,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_759,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_762,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_764,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_765) ? node_765 = come_decrement_ref_count(node_765, ((struct sNode*)node_765)->finalize, ((struct sNode*)node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__312;
    }
    else {
        __if_result__1_767=(void*)(Value_766);
;
    }
    __dec_obj146=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_759);
    /*b*/ come_call_finalizer3(__dec_obj146,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj147=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_744));
    __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_745;
    __dec_obj148=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_742);
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj149=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_743);
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_738;
    info->caller_line=caller_line_739;
    info->caller_sname=caller_sname_740;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_741;
    __result_obj__313 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_742 = come_decrement_ref_count(last_code_742, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_743 = come_decrement_ref_count(last_code2_743, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_744 = come_decrement_ref_count(sname_top_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_747,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_748,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_753,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_756 = come_decrement_ref_count(sname_756, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_758,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_759,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_762,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_764,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_765) ? node_765 = come_decrement_ref_count(node_765, ((struct sNode*)node_765)->finalize, ((struct sNode*)node_765)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__313;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_768;
char* source_head_769;
void* __right_value568 = (void*)0;
char* attribute_770;
struct sType* result_type_771;
char* var_name_772;
_Bool constructor__773;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sType* __dec_obj150;
void* __right_value571 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* result_type2_774=0;
char* var_name2_775=0;
_Bool err_776=0;
struct sType* __dec_obj151;
char* __dec_obj152;
_Bool method_definition_777;
char* p_778;
int sline_779;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct buffer* buf2_780;
char* fun_name_781;
char* base_fun_name_782;
struct sType* obj_type2_783;
void* __right_value574 = (void*)0;
char* __dec_obj153;
void* __right_value575 = (void*)0;
char* __dec_obj154;
void* __right_value576 = (void*)0;
struct sType* __dec_obj155;
void* __right_value577 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* obj_type_784=0;
char* name_785=0;
_Bool err_786=0;
void* __right_value578 = (void*)0;
char* __dec_obj156;
void* __right_value579 = (void*)0;
char* __dec_obj157;
void* __right_value580 = (void*)0;
struct sType* __dec_obj158;
void* __right_value581 = (void*)0;
char* __dec_obj159;
void* __right_value582 = (void*)0;
char* __dec_obj160;
void* __right_value583 = (void*)0;
struct sType* __dec_obj161;
void* __right_value584 = (void*)0;
char* __dec_obj162;
void* __right_value585 = (void*)0;
char* __dec_obj163;
void* __right_value586 = (void*)0;
struct sType* __dec_obj164;
void* __right_value587 = (void*)0;
char* __dec_obj165;
void* __right_value588 = (void*)0;
char* __dec_obj166;
void* __right_value589 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var31 = (void*)0;
struct list$1sType$ph* param_types_787=0;
struct list$1char$ph* param_names_788=0;
struct list$1char$ph* param_default_parametors_789=0;
_Bool var_args_790=0;
char* header_tail_791;
int version_792;
int n_793;
void* __right_value590 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var32 = (void*)0;
char* asm_fun_794=0;
char* fun_attribute_795=0;
void* __right_value591 = (void*)0;
char* __dec_obj167;
_Bool in_top_level_796;
void* __right_value592 = (void*)0;
struct sBlock* block_797;
void* __right_value593 = (void*)0;
char* fun_name_799;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct sFun* fun_800;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sFun* fun2_801;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value606 = (void*)0;
struct sNode* __result_obj__316;
void* __right_value607 = (void*)0;
char* none_generics_name_803;
void* __right_value608 = (void*)0;
char* generics_sname_804;
int generics_sline_805;
void* __right_value609 = (void*)0;
char* block_806;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sGenericsFun* fun_807;
void* __right_value616 = (void*)0;
char* fun_name3_808;
void* __right_value622 = (void*)0;
struct sNode* __result_obj__328;
void* __right_value623 = (void*)0;
char* generics_sname_830;
int generics_sline_831;
void* __right_value624 = (void*)0;
char* block_832;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sGenericsFun* fun_833;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* __result_obj__329;
char* source_tail_834;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
char* new_fun_name_835;
void* __right_value635 = (void*)0;
char* __dec_obj169;
void* __right_value636 = (void*)0;
struct sBlock* block_836;
_Bool static_fun_837;
_Bool inline_fun_838;
_Bool uniq_fun_839;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sFun* fun_840;
void* __right_value641 = (void*)0;
char* header_841;
void* __right_value642 = (void*)0;
char* id_842;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sFun* fun2_843;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value649 = (void*)0;
struct sNode* __result_obj__330;
void* __right_value650 = (void*)0;
char* new_fun_name_844;
void* __right_value651 = (void*)0;
char* __dec_obj170;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sFun* fun_845;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sFun* fun2_846;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* header_847;
void* __right_value659 = (void*)0;
char* id_848;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value662 = (void*)0;
struct sNode* __result_obj__331;
void* __right_value663 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_849=0;
char* fun_attribute2_850=0;
void* __right_value664 = (void*)0;
char* __dec_obj171;
void* __right_value665 = (void*)0;
char* __dec_obj172;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sFun* fun_851;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct sFun* fun2_852;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
char* header_853;
void* __right_value673 = (void*)0;
char* id_854;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value676 = (void*)0;
struct sNode* __result_obj__332;
void* __right_value677 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c22_855=0;
char* Err_856=0;
struct sNode* __result_obj__333;
fun_name_781 = (void*)0;
    header_head_768=info->p;
    source_head_769=info->p;
    attribute_770=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_771=((void*)0);
    var_name_772=((void*)0);
    constructor__773=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value569=parse_word(info)));
        (__right_value569 = come_decrement_ref_count(__right_value569, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj150=result_type_771,
        result_type_771=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_771->mHeap=(_Bool)1;
        constructor__773=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value571=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_774=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
        var_name2_775=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        err_776=multiple_assign_var29->v3;
        /*c*/ come_call_finalizer3(__right_value571,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj151=result_type_771,
        result_type_771=(struct sType*)come_increment_ref_count(result_type2_774);
        /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj152=var_name_772,
        var_name_772=(char*)come_increment_ref_count(var_name2_775);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !err_776) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*c*/ come_call_finalizer3(result_type2_774,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name2_775 = come_decrement_ref_count(var_name2_775, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_777=(_Bool)0;
    {
        p_778=info->p;
        sline_779=info->sline;
        buf2_780=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2207, "struct buffer*"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_780,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_780)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_777=(_Bool)1;
        }
        info->p=p_778;
        info->sline=sline_779;
        /*c*/ come_call_finalizer3(buf2_780,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    base_fun_name_782=((void*)0);
    obj_type2_783=((void*)0);
    if(    constructor__773) {
        __dec_obj153=base_fun_name_782,
        base_fun_name_782=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj154=fun_name_781,
        fun_name_781=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_782,info,(_Bool)1));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj155=obj_type2_783,
        obj_type2_783=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj155,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_777) {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value577=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_784=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        name_785=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_786=multiple_assign_var30->v3;
        /*c*/ come_call_finalizer3(__right_value577,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_786) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj156=base_fun_name_782,
        base_fun_name_782=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj157=fun_name_781,
        fun_name_781=(char*)come_increment_ref_count(create_method_name(obj_type_784,(_Bool)0,base_fun_name_782,info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj158=obj_type2_783,
        obj_type2_783=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_type_784));
        /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(obj_type_784,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_785 = come_decrement_ref_count(name_785, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj159=base_fun_name_782,
        base_fun_name_782=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj160=fun_name_781,
        fun_name_781=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_782,info,(_Bool)1));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj161=obj_type2_783,
        obj_type2_783=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        /*b*/ come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj162=base_fun_name_782,
        base_fun_name_782=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj163=fun_name_781,
        fun_name_781=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_782,info,(_Bool)1));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj164=obj_type2_783,
        obj_type2_783=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj165=fun_name_781,
        fun_name_781=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj166=base_fun_name_782,
        base_fun_name_782=(char*)come_increment_ref_count(__builtin_string(fun_name_781));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_782,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var31=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value589=parse_params(info,constructor__773)));
    param_types_787=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var31->v1);
    param_names_788=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v2);
    param_default_parametors_789=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v3);
    var_args_790=multiple_assign_var31->v4;
    /*c*/ come_call_finalizer3(__right_value589,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    header_tail_791=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_782,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_792=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_793=0;
        while(xisdigit(*info->p)) {
            n_793=n_793*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_792=n_793;
    }
    multiple_assign_var32=((struct tuple2$2char$phchar$ph*)(__right_value590=parse_function_attribute(info)));
    asm_fun_794=(char*)come_increment_ref_count(multiple_assign_var32->v1);
    fun_attribute_795=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    /*c*/ come_call_finalizer3(__right_value590,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(asm_fun_794,"")) {
        __dec_obj167=fun_name_781,
        fun_name_781=(char*)come_increment_ref_count(__builtin_string(asm_fun_794));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    in_top_level_796=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_782,"lambda")) {
        block_797=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_798=0;
        lambda_num_798++;
        fun_name_799=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_798));
        result_type_771->mInline=(_Bool)0;
        result_type_771->mStatic=(_Bool)0;
        result_type_771->mUniq=(_Bool)0;
        fun_800=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2326, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sType$ph*)come_increment_ref_count(param_types_787),(struct list$1char$ph*)come_increment_ref_count(param_names_788),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_789),(_Bool)0,var_args_790,(struct sBlock*)come_increment_ref_count(block_797),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_801=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value599=__builtin_string(fun_name_799)))));
        (__right_value599 = come_decrement_ref_count(__right_value599, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_801==((void*)0)||fun2_801->mExternal) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_799)),(struct sFun*)come_increment_ref_count(fun_800));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2336, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value603=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2336, "struct sLambdaNode*")),fun_800,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__316 = come_increment_ref_count(((struct sNode*)(__right_value606=_inf_value5)));
        /*c*/ come_call_finalizer3(block_797,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_799 = come_decrement_ref_count(fun_name_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_800,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_801,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_770 = come_decrement_ref_count(attribute_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_771,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_772 = come_decrement_ref_count(var_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_781 = come_decrement_ref_count(fun_name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_782 = come_decrement_ref_count(base_fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_783,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_794 = come_decrement_ref_count(asm_fun_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_795 = come_decrement_ref_count(fun_attribute_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value603,sLambdaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value606) ? __right_value606 = come_decrement_ref_count(__right_value606, ((struct sNode*)__right_value606)->finalize, ((struct sNode*)__right_value606)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__316) ? __result_obj__316 = come_decrement_ref_count(__result_obj__316, ((struct sNode*)__result_obj__316)->finalize, ((struct sNode*)__result_obj__316)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__316;
        /*c*/ come_call_finalizer3(block_797,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_799 = come_decrement_ref_count(fun_name_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_800,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_801,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        none_generics_name_803=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_804=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_805=info->sline;
        block_806=(char*)come_increment_ref_count(skip_block(info));
        fun_807=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2346, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value611=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value612=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sType$ph*)come_increment_ref_count(param_types_787),(struct list$1char$ph*)come_increment_ref_count(param_names_788),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_789),var_args_790,(char*)come_increment_ref_count(block_806),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_804)),generics_sline_805));
        /*c*/ come_call_finalizer3(__right_value611,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value612,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fun_name3_808=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_803,base_fun_name_782));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_808)),(struct sGenericsFun*)come_increment_ref_count(fun_807));
        __result_obj__328 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_803 = come_decrement_ref_count(none_generics_name_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_804 = come_decrement_ref_count(generics_sname_804, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_806 = come_decrement_ref_count(block_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_807,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_808 = come_decrement_ref_count(fun_name3_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_770 = come_decrement_ref_count(attribute_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_771,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_772 = come_decrement_ref_count(var_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_781 = come_decrement_ref_count(fun_name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_782 = come_decrement_ref_count(base_fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_783,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_794 = come_decrement_ref_count(asm_fun_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_795 = come_decrement_ref_count(fun_attribute_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__328) ? __result_obj__328 = come_decrement_ref_count(__result_obj__328, ((struct sNode*)__result_obj__328)->finalize, ((struct sNode*)__result_obj__328)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__328;
        (none_generics_name_803 = come_decrement_ref_count(none_generics_name_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_804 = come_decrement_ref_count(generics_sname_804, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_806 = come_decrement_ref_count(block_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_807,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_808 = come_decrement_ref_count(fun_name3_808, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0) {
        generics_sname_830=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_831=info->sline;
        block_832=(char*)come_increment_ref_count(skip_block(info));
        fun_833=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2360, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value626=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value627=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sType$ph*)come_increment_ref_count(param_types_787),(struct list$1char$ph*)come_increment_ref_count(param_names_788),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_789),var_args_790,(char*)come_increment_ref_count(block_832),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_830)),generics_sline_831));
        /*c*/ come_call_finalizer3(__right_value626,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value627,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        method_definition_777) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sGenericsFun*)come_increment_ref_count(fun_833));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_782)),(struct sGenericsFun*)come_increment_ref_count(fun_833));
        }
        __result_obj__329 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_830 = come_decrement_ref_count(generics_sname_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_832 = come_decrement_ref_count(block_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_833,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_770 = come_decrement_ref_count(attribute_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_771,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_772 = come_decrement_ref_count(var_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_781 = come_decrement_ref_count(fun_name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_782 = come_decrement_ref_count(base_fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_783,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_794 = come_decrement_ref_count(asm_fun_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_795 = come_decrement_ref_count(fun_attribute_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__329) ? __result_obj__329 = come_decrement_ref_count(__result_obj__329, ((struct sNode*)__result_obj__329)->finalize, ((struct sNode*)__result_obj__329)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__329;
        (generics_sname_830 = come_decrement_ref_count(generics_sname_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_832 = come_decrement_ref_count(block_832, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_833,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_834=info->p-1;
        if(        version_792>0) {
            new_fun_name_835=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value633=__builtin_string(fun_name_781))),version_792));
            (__right_value633 = come_decrement_ref_count(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj169=fun_name_781,
            fun_name_781=(char*)come_increment_ref_count(__builtin_string(new_fun_name_835));
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_835 = come_decrement_ref_count(new_fun_name_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_836=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__773,(_Bool)1));
        static_fun_837=(_Bool)0;
        if(        result_type_771->mStatic) {
            result_type_771->mStatic=(_Bool)0;
            result_type_771->mUniq=(_Bool)0;
            static_fun_837=(_Bool)1;
        }
        inline_fun_838=(_Bool)0;
        if(        result_type_771->mInline) {
            result_type_771->mInline=(_Bool)0;
            result_type_771->mUniq=(_Bool)0;
            inline_fun_838=(_Bool)1;
        }
        uniq_fun_839=(_Bool)0;
        if(        result_type_771->mUniq) {
            result_type_771->mUniq=(_Bool)0;
            result_type_771->mInline=(_Bool)0;
            result_type_771->mStatic=(_Bool)0;
            uniq_fun_839=(_Bool)1;
        }
        if(        result_type_771->mUniq) {
            result_type_771->mUniq=(_Bool)0;
            result_type_771->mInline=(_Bool)0;
            result_type_771->mStatic=(_Bool)0;
        }
        fun_840=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2408, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sType$ph*)come_increment_ref_count(param_types_787),(struct list$1char$ph*)come_increment_ref_count(param_names_788),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_789),(_Bool)0,var_args_790,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_836)),static_fun_837,info,inline_fun_838,uniq_fun_839,(_Bool)0,(char*)come_increment_ref_count(attribute_770),(char*)come_increment_ref_count(fun_attribute_795)));
        if(        info->output_header_file) {
            if(            !result_type_771->mStatic&&!info->no_output_come_code) {
                header_841=(char*)come_increment_ref_count(make_come_header_function(fun_840,(char*)come_increment_ref_count(base_fun_name_782),(struct sType*)come_increment_ref_count(obj_type2_783),version_792,info));
                id_842=(char*)come_increment_ref_count(__builtin_string(fun_name_781));
                add_come_code_at_come_header(info,id_842,"%s",header_841);
                (header_841 = come_decrement_ref_count(header_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_842 = come_decrement_ref_count(id_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        info->in_class) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sFun*)come_increment_ref_count(fun_840));
        }
        else {
            fun2_843=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value644=__builtin_string(fun_name_781)))));
            (__right_value644 = come_decrement_ref_count(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_843==((void*)0)||fun2_843->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sFun*)come_increment_ref_count(fun_840));
            }
            /*c*/ come_call_finalizer3(fun2_843,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2434, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value648=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2434, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_840),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__330 = come_increment_ref_count(((struct sNode*)(__right_value649=_inf_value6)));
        /*c*/ come_call_finalizer3(block_836,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_840,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_770 = come_decrement_ref_count(attribute_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_771,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_772 = come_decrement_ref_count(var_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_781 = come_decrement_ref_count(fun_name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_782 = come_decrement_ref_count(base_fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_783,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_794 = come_decrement_ref_count(asm_fun_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_795 = come_decrement_ref_count(fun_attribute_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value648,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value649) ? __right_value649 = come_decrement_ref_count(__right_value649, ((struct sNode*)__right_value649)->finalize, ((struct sNode*)__right_value649)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__330) ? __result_obj__330 = come_decrement_ref_count(__result_obj__330, ((struct sNode*)__result_obj__330)->finalize, ((struct sNode*)__result_obj__330)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__330;
        /*c*/ come_call_finalizer3(block_836,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_840,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_792>0) {
            new_fun_name_844=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_781,version_792));
            __dec_obj170=fun_name_781,
            fun_name_781=(char*)come_increment_ref_count(__builtin_string(new_fun_name_844));
            __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_844 = come_decrement_ref_count(new_fun_name_844, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_771->mStatic=(_Bool)0;
            result_type_771->mUniq=(_Bool)0;
            result_type_771->mInline=(_Bool)0;
            fun_845=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2450, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sType$ph*)come_increment_ref_count(param_types_787),(struct list$1char$ph*)come_increment_ref_count(param_names_788),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_789),(_Bool)1,var_args_790,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_770),(char*)come_increment_ref_count(fun_attribute_795)));
            fun2_846=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value655=__builtin_string(fun_name_781)))));
            (__right_value655 = come_decrement_ref_count(__right_value655, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_846==((void*)0)||fun2_846->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sFun*)come_increment_ref_count(fun_845));
            }
            if(            info->output_header_file) {
                if(                !result_type_771->mStatic&&!info->no_output_come_code) {
                    header_847=(char*)come_increment_ref_count(make_come_header_function(fun_845,(char*)come_increment_ref_count(base_fun_name_782),(struct sType*)come_increment_ref_count(obj_type2_783),version_792,info));
                    id_848=(char*)come_increment_ref_count(__builtin_string(fun_name_781));
                    add_come_code_at_come_header(info,id_848,"%s",header_847);
                    (header_847 = come_decrement_ref_count(header_847, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_848 = come_decrement_ref_count(id_848, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2470, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value661=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2470, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_845),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__331 = come_increment_ref_count(((struct sNode*)(__right_value662=_inf_value7)));
            /*c*/ come_call_finalizer3(fun_845,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_846,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_770 = come_decrement_ref_count(attribute_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_771,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_772 = come_decrement_ref_count(var_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_781 = come_decrement_ref_count(fun_name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_782 = come_decrement_ref_count(base_fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_783,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_794 = come_decrement_ref_count(asm_fun_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_795 = come_decrement_ref_count(fun_attribute_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value661,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value662) ? __right_value662 = come_decrement_ref_count(__right_value662, ((struct sNode*)__right_value662)->finalize, ((struct sNode*)__right_value662)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__331) ? __result_obj__331 = come_decrement_ref_count(__result_obj__331, ((struct sNode*)__result_obj__331)->finalize, ((struct sNode*)__result_obj__331)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__331;
            /*c*/ come_call_finalizer3(fun_845,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_846,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value663=parse_function_attribute(info)));
            asm_fun_849=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute2_850=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            /*c*/ come_call_finalizer3(__right_value663,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            string_operator_not_equals(asm_fun_849,"")) {
                __dec_obj171=fun_name_781,
                fun_name_781=(char*)come_increment_ref_count(__builtin_string(asm_fun_849));
                __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            __dec_obj172=fun_attribute_795,
            fun_attribute_795=(char*)come_increment_ref_count(string_operator_add(fun_attribute_795,fun_attribute2_850));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            result_type_771->mStatic=(_Bool)0;
            result_type_771->mUniq=(_Bool)0;
            result_type_771->mInline=(_Bool)0;
            fun_851=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sType*)come_increment_ref_count(result_type_771),(struct list$1sType$ph*)come_increment_ref_count(param_types_787),(struct list$1char$ph*)come_increment_ref_count(param_names_788),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_789),(_Bool)1,var_args_790,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_770),(char*)come_increment_ref_count(fun_attribute_795)));
            fun2_852=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value669=__builtin_string(fun_name_781)))));
            (__right_value669 = come_decrement_ref_count(__right_value669, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_852==((void*)0)||fun2_852->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_781)),(struct sFun*)come_increment_ref_count(fun_851));
            }
            if(            info->output_header_file) {
                if(                !result_type_771->mStatic&&!info->no_output_come_code) {
                    header_853=(char*)come_increment_ref_count(make_come_header_function(fun_851,(char*)come_increment_ref_count(base_fun_name_782),(struct sType*)come_increment_ref_count(obj_type2_783),version_792,info));
                    id_854=(char*)come_increment_ref_count(__builtin_string(fun_name_781));
                    add_come_code_at_come_header(info,id_854,"%s",header_853);
                    (header_853 = come_decrement_ref_count(header_853, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_854 = come_decrement_ref_count(id_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2507, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value675=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2507, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_851),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__332 = come_increment_ref_count(((struct sNode*)(__right_value676=_inf_value8)));
            (asm_fun_849 = come_decrement_ref_count(asm_fun_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_850 = come_decrement_ref_count(fun_attribute2_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_851,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_852,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_770 = come_decrement_ref_count(attribute_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_771,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_772 = come_decrement_ref_count(var_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_781 = come_decrement_ref_count(fun_name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_782 = come_decrement_ref_count(base_fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_783,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_794 = come_decrement_ref_count(asm_fun_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_795 = come_decrement_ref_count(fun_attribute_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value675,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value676) ? __right_value676 = come_decrement_ref_count(__right_value676, ((struct sNode*)__right_value676)->finalize, ((struct sNode*)__right_value676)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__332) ? __result_obj__332 = come_decrement_ref_count(__result_obj__332, ((struct sNode*)__result_obj__332)->finalize, ((struct sNode*)__result_obj__332)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__332;
            (asm_fun_849 = come_decrement_ref_count(asm_fun_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_850 = come_decrement_ref_count(fun_attribute2_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_851,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_852,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value677=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_exception_var_c22_855=multiple_assign_var34->v1;
        Err_856=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_856)?(puts(Err_856),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value677,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
        (Err_856 = come_decrement_ref_count(Err_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_796;
    __result_obj__333 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_770 = come_decrement_ref_count(attribute_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_771,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_772 = come_decrement_ref_count(var_name_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_781 = come_decrement_ref_count(fun_name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_782 = come_decrement_ref_count(base_fun_name_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(obj_type2_783,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_787,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (asm_fun_794 = come_decrement_ref_count(asm_fun_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute_795 = come_decrement_ref_count(fun_attribute_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__333) ? __result_obj__333 = come_decrement_ref_count(__result_obj__333, ((struct sNode*)__result_obj__333)->finalize, ((struct sNode*)__result_obj__333)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__333;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__314;
void* __right_value604 = (void*)0;
struct sLambdaNode* result_802;
void* __right_value605 = (void*)0;
char* __dec_obj168;
struct sLambdaNode* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = (void*)0;
        return __result_obj__314;
    }
    result_802=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)) {
        result_802->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_802->sname,
        result_802->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_802->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_802->mFun=self->mFun;
    }
    __result_obj__315 = result_802;
    /*c*/ come_call_finalizer3(result_802,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_826;
unsigned int it_827;
_Bool same_key_exist_828;
char* it2_829;
struct map$2char$phsGenericsFun$ph* __result_obj__327;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_826=string_get_hash_key(((char*)key))%self->size;
    it_827=hash_826;
    while((_Bool)1) {
        if(        self->item_existance[it_827]) {
            if(            string_equals(self->keys[it_827],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_827]);
                    (self->keys[it_827] = come_decrement_ref_count(self->keys[it_827], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_827]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_827]);
                    self->keys[it_827]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_827],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_827]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_827]=item;
                }
                break;
            }
            it_827++;
            if(            it_827>=self->size) {
                it_827=0;
            }
            else if(            it_827==hash_826) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_827]=(_Bool)1;
            if(            1) {
                self->keys[it_827]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_827]=key;
            }
            if(            1) {
                self->items[it_827]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_827]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_828=(_Bool)0;
    for(    it2_829=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_829=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_829,key)) {
            same_key_exist_828=(_Bool)1;
        }
    }
    if(    !same_key_exist_828) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__327 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_809;
void* __right_value617 = (void*)0;
char** keys_810;
void* __right_value618 = (void*)0;
struct sGenericsFun** items_811;
void* __right_value619 = (void*)0;
_Bool* item_existance_812;
int len_813;
char* it_816;
struct sGenericsFun* default_value_819;
void* __right_value620 = (void*)0;
struct sGenericsFun* it2_820;
unsigned int hash_823;
int n_824;
struct sGenericsFun* default_value_825;
void* __right_value621 = (void*)0;
default_value_819 = (void*)0;
default_value_825 = (void*)0;
    size_809=self->size*10;
    keys_810=(char**)come_increment_ref_count(((char**)(__right_value617=(char**)come_calloc(1, sizeof(char*)*(1*(size_809)), "./comelang.h", 2281, "char**"))));
    items_811=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value618=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_809)), "./comelang.h", 2282, "struct sGenericsFun**"))));
    item_existance_812=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value619=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_809)), "./comelang.h", 2283, "_Bool*"))));
    len_813=0;
    for(    it_816=map$2char$phsGenericsFun$ph_begin(self);    !map$2char$phsGenericsFun$ph_end(self);    it_816=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_819,0,sizeof(struct sGenericsFun*));
        it2_820=((struct sGenericsFun*)(__right_value620=map$2char$phsGenericsFun$ph_at(self,it_816,(struct sGenericsFun*)come_increment_ref_count(default_value_819))));
        /*c*/ come_call_finalizer3(__right_value620,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_823=string_get_hash_key(((char*)it_816))%size_809;
        n_824=hash_823;
        while((_Bool)1) {
            if(            item_existance_812[n_824]) {
                n_824++;
                if(                n_824>=size_809) {
                    n_824=0;
                }
                else if(                n_824==hash_823) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_812[n_824]=(_Bool)1;
                keys_810[n_824]=it_816;
                items_811[n_824]=((struct sGenericsFun*)(__right_value621=map$2char$phsGenericsFun$ph_at(self,it_816,(struct sGenericsFun*)come_increment_ref_count(default_value_825))));
                /*c*/ come_call_finalizer3(__right_value621,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_813++;
                /*c*/ come_call_finalizer3(default_value_825,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_825,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_819,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_810;
    self->items=items_811;
    self->item_existance=item_existance_812;
    self->size=size_809;
    self->len=len_813;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_814;
char* __result_obj__317;
char* __result_obj__318;
char* result_815;
char* __result_obj__319;
result_814 = (void*)0;
result_815 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_814,0,sizeof(char*));
        __result_obj__317 = result_814;
        return __result_obj__317;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__318 = self->key_list->it->item;
        return __result_obj__318;
    }
    memset(&result_815,0,sizeof(char*));
    __result_obj__319 = result_815;
    return __result_obj__319;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_817;
char* __result_obj__320;
char* __result_obj__321;
char* result_818;
char* __result_obj__322;
result_817 = (void*)0;
result_818 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_817,0,sizeof(char*));
        __result_obj__320 = result_817;
        return __result_obj__320;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__321 = self->key_list->it->item;
        return __result_obj__321;
    }
    memset(&result_818,0,sizeof(char*));
    __result_obj__322 = result_818;
    return __result_obj__322;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_821;
unsigned int it_822;
struct sGenericsFun* __result_obj__323;
struct sGenericsFun* __result_obj__324;
struct sGenericsFun* __result_obj__325;
struct sGenericsFun* __result_obj__326;
    hash_821=string_get_hash_key(((char*)key))%self->size;
    it_822=hash_821;
    while((_Bool)1) {
        if(        self->item_existance[it_822]) {
            if(            string_equals(self->keys[it_822],key)) {
                __result_obj__323 = come_increment_ref_count(self->items[it_822]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__323,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__323;
            }
            it_822++;
            if(            it_822>=self->size) {
                it_822=0;
            }
            else if(            it_822==hash_821) {
                __result_obj__324 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__324,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__324;
            }
        }
        else {
            __result_obj__325 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__325,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__325;
        }
    }
    __result_obj__326 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__326,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__326;
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

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_857;
char* __dec_obj173;
char* last_code2_858;
char* __dec_obj174;
_Bool comma_instead_of_semicolon_859;
struct sClass* current_stack_frame_struct_860;
char* real_fun_name_861;
struct sFun* finalizer_862;
void* __right_value678 = (void*)0;
struct sType* type_before_863;
void* __right_value679 = (void*)0;
struct sType* type2_864;
void* __right_value680 = (void*)0;
char* fun_name2_865;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
char* none_generics_name_866;
void* __right_value683 = (void*)0;
char* generics_fun_name_867;
void* __right_value684 = (void*)0;
struct sGenericsFun* generics_fun_868;
void* __right_value685 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_872=0;
_Bool err_873=0;
void* __right_value686 = (void*)0;
char* __dec_obj175;
int i_874;
void* __right_value687 = (void*)0;
char* new_fun_name_875;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
char* __dec_obj176;
void* __right_value690 = (void*)0;
char* __dec_obj177;
void* __right_value691 = (void*)0;
char* __dec_obj178;
void* __right_value692 = (void*)0;
char* user_real_fun_name_876;
void* __right_value693 = (void*)0;
struct sFun* user_finalizer_877;
void* __right_value694 = (void*)0;
struct sType* type2_878;
struct sClass* klass_879;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct buffer* source_880;
void* __right_value697 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_887;
struct tuple2$2char$phsType$ph* it_890;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_893=0;
struct sType* field_type_894=0;
char* p_897;
int sline_898;
char* sname_899;
char* head_900;
struct buffer* source3_901;
struct buffer* __dec_obj179;
void* __right_value698 = (void*)0;
char* __dec_obj180;
void* __right_value699 = (void*)0;
struct sBlock* block_902;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct sType* result_type_903;
void* __right_value703 = (void*)0;
char* name_904;
void* __right_value704 = (void*)0;
struct sType* self_type_905;
struct sType* __list_values1___907[1];
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct list$1sType$ph* param_types_906;
void* __right_value708 = (void*)0;
char* __list_values2___911[1];
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct list$1char$ph* param_names_915;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1char$ph* param_default_parametors_916;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sFun* fun2_917;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sFun* fun_918;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value723 = (void*)0;
struct sNode* node_919;
_Bool Value_920;
struct buffer* __dec_obj181;
char* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__359;
memset(&i_874, 0, sizeof(int));
    last_code_857=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj173=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_858=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj174=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_859=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_860=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_861=((void*)0);
    finalizer_862=((void*)0);
    type_before_863=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_864=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_864->mHeap=(_Bool)0;
    fun_name2_865=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        finalizer_862=((struct sFun*)(__right_value681=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_865)));
        /*c*/ come_call_finalizer3(__right_value681,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        finalizer_862==((void*)0)) {
            none_generics_name_866=(char*)come_increment_ref_count(get_none_generics_name(type2_864->mClass->mName));
            generics_fun_name_867=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_866,fun_name));
            generics_fun_868=((struct sGenericsFun*)(__right_value684=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_867)));
            /*c*/ come_call_finalizer3(__right_value684,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_868) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value685=create_generics_fun((char*)come_increment_ref_count(fun_name2_865),generics_fun_868,type,info)));
                name_872=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_873=multiple_assign_var35->v2;
                /*c*/ come_call_finalizer3(__right_value685,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_873) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_862=((struct sFun*)(__right_value686=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_872)));
                /*c*/ come_call_finalizer3(__right_value686,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_872 = come_decrement_ref_count(name_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_866 = come_decrement_ref_count(none_generics_name_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_867 = come_decrement_ref_count(generics_fun_name_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj175=real_fun_name_861,
        real_fun_name_861=(char*)come_increment_ref_count(fun_name2_865);
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        for(        i_874=128-1;        i_874>=1;        i_874--        ){
            new_fun_name_875=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_865,i_874));
            finalizer_862=((struct sFun*)(__right_value688=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_875)));
            /*c*/ come_call_finalizer3(__right_value688,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_862) {
                __dec_obj176=fun_name2_865,
                fun_name2_865=(char*)come_increment_ref_count(__builtin_string(new_fun_name_875));
                __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_875 = come_decrement_ref_count(new_fun_name_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_875 = come_decrement_ref_count(new_fun_name_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_862==((void*)0)) {
            finalizer_862=((struct sFun*)(__right_value690=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_865)));
            /*c*/ come_call_finalizer3(__right_value690,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj177=real_fun_name_861,
        real_fun_name_861=(char*)come_increment_ref_count(fun_name2_865);
        __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    finalizer_862==((void*)0)) {
        type=type_before_863;
        __dec_obj178=real_fun_name_861,
        real_fun_name_861=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        user_real_fun_name_876=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_877=((struct sFun*)(__right_value693=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_876)));
        /*c*/ come_call_finalizer3(__right_value693,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_878=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_878;
        klass_879=type->mClass;
        if(        type->mPointerNum>0&&klass_879->mStruct||type->mAllocaValue) {
            source_880=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2607, "struct buffer*"))));
            buffer_append_char(source_880,123);
            if(            user_finalizer_877) {
                char source2_881[1024];
                memset(&source2_881, 0, sizeof(char)                *(1024)                );
                snprintf(source2_881,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_876);
                buffer_append_str(source_880,source2_881);
            }
            klass_879=((struct sClass*)(__right_value697=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_879->mName)));
            /*c*/ come_call_finalizer3(__right_value697,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_887=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_879->mFields)),it_890=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_887));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_887));            it_890=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_887))            ){
                multiple_assign_var36=it_890;
                name_893=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_894=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_894->mHeap) {
                    char source2_895[1024];
                    memset(&source2_895, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_895,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_893,name_893,name_893,name_893);
                    buffer_append_str(source_880,source2_895);
                }
                else if(                field_type_894->mChannel) {
                    char source2_896[1024];
                    memset(&source2_896, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_896,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_893,name_893);
                    buffer_append_str(source_880,source2_896);
                    snprintf(source2_896,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_893,name_893);
                    buffer_append_str(source_880,source2_896);
                }
                (name_893 = come_decrement_ref_count(name_893, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_894,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_887,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_char(source_880,125);
            p_897=info->p;
            sline_898=info->sline;
            sname_899=(char*)come_increment_ref_count(info->sname);
            head_900=info->head;
            source3_901=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj179=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_880);
            /*b*/ come_call_finalizer3(__dec_obj179,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_880->buf;
            info->head=source_880->buf;
            __dec_obj180=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_861));
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=0;
            block_902=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_903=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2656, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_904=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_861, "05function.c", 2657, "char*"));
            self_type_905=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_905->mHeap=(_Bool)0;
            if(            self_type_905->mPointerNum==0) {
                self_type_905->mPointerNum=1;
            }
            if(            self_type_905->mPointerNum>1) {
                self_type_905->mPointerNum=1;
            }
            param_types_906=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___907[0]=self_type_905,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2666, "struct list$1sType$ph")),1,__list_values1___907)));
            param_names_915=(struct list$1char$ph*)come_increment_ref_count((__list_values2___911[0]=((char*)(__right_value708=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2667, "struct list$1char$ph")),1,__list_values2___911)));
            (__right_value708 = come_decrement_ref_count(__right_value708, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_916=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2668, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_916,((void*)0));
            result_type_903->mStatic=(_Bool)0;
            result_type_903->mUniq=(_Bool)0;
            result_type_903->mInline=(_Bool)0;
            fun2_917=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value714=__builtin_string(name_904)))));
            (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_917==((void*)0)||fun2_917->mExternal) {
                fun_918=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2677, "struct sFun*")),(char*)come_increment_ref_count(name_904),(struct sType*)come_increment_ref_count(result_type_903),(struct list$1sType$ph*)come_increment_ref_count(param_types_906),(struct list$1char$ph*)come_increment_ref_count(param_names_915),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_916),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_902),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_904)),(struct sFun*)come_increment_ref_count(fun_918));
                finalizer_862=fun_918;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2687, "struct sNode");
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value722=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2687, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_918),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_919=(struct sNode*)come_increment_ref_count(_inf_value9);
                /*c*/ come_call_finalizer3(__right_value722,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_920=node_compile(node_919,info);
                if(                !Value_920) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                /*c*/ come_call_finalizer3(fun_918,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_919) ? node_919 = come_decrement_ref_count(node_919, ((struct sNode*)node_919)->finalize, ((struct sNode*)node_919)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_862=fun2_917;
            }
            __dec_obj181=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_901);
            /*b*/ come_call_finalizer3(__dec_obj181,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_897;
            info->head=head_900;
            info->sline=sline_898;
            __dec_obj182=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_899);
            __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(source_880,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_899 = come_decrement_ref_count(sname_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_901,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(block_902,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_903,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_904 = come_decrement_ref_count(name_904, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(self_type_905,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_906,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_915,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_916,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_917,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (user_real_fun_name_876 = come_decrement_ref_count(user_real_fun_name_876, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_878,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_860;
    __dec_obj183=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_857);
    __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj184=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_858);
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_859;
    __result_obj__359 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value730=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2712, "struct tuple2$2sFun$pchar$ph")),finalizer_862,(char*)come_increment_ref_count(real_fun_name_861)))));
    (last_code_857 = come_decrement_ref_count(last_code_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_858 = come_decrement_ref_count(last_code2_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_861 = come_decrement_ref_count(real_fun_name_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_863,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_864,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_865 = come_decrement_ref_count(fun_name2_865, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value730,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__359,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__359;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_869;
unsigned int hash_870;
unsigned int it_871;
struct sGenericsFun* __result_obj__334;
struct sGenericsFun* __result_obj__335;
struct sGenericsFun* __result_obj__336;
struct sGenericsFun* __result_obj__337;
default_value_869 = (void*)0;
    memset(&default_value_869,0,sizeof(struct sGenericsFun*));
    hash_870=string_get_hash_key(((char*)key))%self->size;
    it_871=hash_870;
    while((_Bool)1) {
        if(        self->item_existance[it_871]) {
            if(            string_equals(self->keys[it_871],key)) {
                __result_obj__334 = come_increment_ref_count(self->items[it_871]);
                /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__334,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__334;
            }
            it_871++;
            if(            it_871>=self->size) {
                it_871=0;
            }
            else if(            it_871==hash_870) {
                __result_obj__335 = come_increment_ref_count(default_value_869);
                /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__335,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__335;
            }
        }
        else {
            __result_obj__336 = come_increment_ref_count(default_value_869);
            /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__336,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__336;
        }
    }
    __result_obj__337 = come_increment_ref_count(default_value_869);
    /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__337,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__337;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_882;
unsigned int hash_883;
unsigned int it_884;
struct sClass* __result_obj__338;
struct sClass* __result_obj__339;
struct sClass* __result_obj__340;
struct sClass* __result_obj__341;
default_value_882 = (void*)0;
    memset(&default_value_882,0,sizeof(struct sClass*));
    hash_883=string_get_hash_key(((char*)key))%self->size;
    it_884=hash_883;
    while((_Bool)1) {
        if(        self->item_existance[it_884]) {
            if(            string_equals(self->keys[it_884],key)) {
                __result_obj__338 = come_increment_ref_count(self->items[it_884]);
                /*c*/ come_call_finalizer3(default_value_882,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__338,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__338;
            }
            it_884++;
            if(            it_884>=self->size) {
                it_884=0;
            }
            else if(            it_884==hash_883) {
                __result_obj__339 = come_increment_ref_count(default_value_882);
                /*c*/ come_call_finalizer3(default_value_882,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__339,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__339;
            }
        }
        else {
            __result_obj__340 = come_increment_ref_count(default_value_882);
            /*c*/ come_call_finalizer3(default_value_882,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__340,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__340;
        }
    }
    __result_obj__341 = come_increment_ref_count(default_value_882);
    /*c*/ come_call_finalizer3(default_value_882,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__341,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__341;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_885;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_886;
    it_885=self->head;
    while(it_885!=((void*)0)) {
        prev_it_886=it_885;
        it_885=it_885->next;
        /*c*/ come_call_finalizer3(prev_it_886,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_888;
struct tuple2$2char$phsType$ph* __result_obj__342;
struct tuple2$2char$phsType$ph* __result_obj__343;
struct tuple2$2char$phsType$ph* result_889;
struct tuple2$2char$phsType$ph* __result_obj__344;
result_888 = (void*)0;
result_889 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_888,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__342 = result_888;
        return __result_obj__342;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__343 = self->it->item;
        return __result_obj__343;
    }
    memset(&result_889,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__344 = result_889;
    return __result_obj__344;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_891;
struct tuple2$2char$phsType$ph* __result_obj__345;
struct tuple2$2char$phsType$ph* __result_obj__346;
struct tuple2$2char$phsType$ph* result_892;
struct tuple2$2char$phsType$ph* __result_obj__347;
result_891 = (void*)0;
result_892 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_891,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__345 = result_891;
        return __result_obj__345;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__346 = self->it->item;
        return __result_obj__346;
    }
    memset(&result_892,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__347 = result_892;
    return __result_obj__347;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_908;
struct list$1sType$ph* __result_obj__348;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_908=0;    i_908<num_value;    i_908++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_908]));
    }
    __result_obj__348 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__348,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__348;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__349;
void* __right_value705 = (void*)0;
struct list$1sType$ph* result_909;
struct list$1sType$ph* __result_obj__350;
    if(    self==(void*)0) {
        __result_obj__349 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__349,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__349;
    }
    result_909=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*"));
    if(    self!=((void*)0)) {
        result_909->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_909->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_909->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_909->it=self->it;
    }
    __result_obj__350 = come_increment_ref_count(result_909);
    /*c*/ come_call_finalizer3(result_909,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__350,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__350;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_910;
    result_910=0;
    result_910+=int_get_hash_key(((int)self->head));
    result_910+=int_get_hash_key(((int)self->tail));
    result_910+=int_get_hash_key(((int)self->len));
    result_910+=int_get_hash_key(((int)self->it));
    return result_910;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_912;
struct list$1char$ph* __result_obj__351;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_912=0;    i_912<num_value;    i_912++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_912]));
    }
    __result_obj__351 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__351,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__351;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__352;
void* __right_value709 = (void*)0;
struct list$1char$ph* result_913;
struct list$1char$ph* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__352,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__352;
    }
    result_913=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*"));
    if(    self!=((void*)0)) {
        result_913->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_913->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_913->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_913->it=self->it;
    }
    __result_obj__353 = come_increment_ref_count(result_913);
    /*c*/ come_call_finalizer3(result_913,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__353,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__353;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_914;
    result_914=0;
    result_914+=int_get_hash_key(((int)self->head));
    result_914+=int_get_hash_key(((int)self->tail));
    result_914+=int_get_hash_key(((int)self->len));
    result_914+=int_get_hash_key(((int)self->it));
    return result_914;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__354;
void* __right_value724 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_921;
void* __right_value725 = (void*)0;
char* __dec_obj185;
struct tuple2$2sFun$pchar$ph* __result_obj__355;
    if(    self==(void*)0) {
        __result_obj__354 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__354,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__354;
    }
    result_921=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*"));
    if(    self!=((void*)0)) {
        result_921->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj185=result_921->v2,
        result_921->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2sFun$pchar$ph_clone", 5, "char*"));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__355 = come_increment_ref_count(result_921);
    /*c*/ come_call_finalizer3(result_921,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__355,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__355;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_922;
    result_922=0;
    result_922+=int_get_hash_key(((int)self->v1));
    result_922+=int_get_hash_key(((int)self->v2));
    return result_922;
}

static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right){
    if(    !sFun_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
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
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
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
int n_923;
_Bool result_924;
char* it_925;
char* default_value_926;
void* __right_value726 = (void*)0;
char* it2_927;
struct sVar* default_value2_930;
void* __right_value727 = (void*)0;
struct sVar* item_931;
void* __right_value728 = (void*)0;
struct sVar* item2_932;
default_value_926 = (void*)0;
default_value2_930 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_923=0;
    result_924=(_Bool)1;
    for(    it_925=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_925=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_926,0,sizeof(char*));
        it2_927=((char*)(__right_value726=list$1char$ph_item(right->key_list,n_923,default_value_926)));
        (__right_value726 = come_decrement_ref_count(__right_value726, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_925,it2_927)) {
            memset(&default_value2_930,0,sizeof(struct sVar*));
            item_931=((struct sVar*)(__right_value727=map$2char$phsVar$ph_at(left,it_925,(struct sVar*)come_increment_ref_count(default_value2_930))));
            /*c*/ come_call_finalizer3(__right_value727,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_932=((struct sVar*)(__right_value728=map$2char$phsVar$ph_at(right,it2_927,(struct sVar*)come_increment_ref_count(default_value2_930))));
            /*c*/ come_call_finalizer3(__right_value728,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_931,item2_932)) {
                result_924=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_930,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_924=(_Bool)0;
        }
        n_923++;
        (default_value_926 = come_decrement_ref_count(default_value_926, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_924;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_928;
int i_929;
char* __result_obj__356;
char* __result_obj__357;
    if(    position<0) {
        position+=self->len;
    }
    it_928=self->head;
    i_929=0;
    while(it_928!=((void*)0)) {
        if(        position==i_929) {
            __result_obj__356 = come_increment_ref_count(it_928->item);
            (__result_obj__356 = come_decrement_ref_count(__result_obj__356, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__356;
        }
        it_928=it_928->next;
        i_929++;
    }
    __result_obj__357 = come_increment_ref_count(default_value);
    (__result_obj__357 = come_decrement_ref_count(__result_obj__357, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__357;
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

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj186;
struct tuple2$2sFun$pchar$ph* __result_obj__358;
    self->v1=v1;
    __dec_obj186=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__358 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__358,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__358;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_933;
char* __dec_obj187;
char* last_code2_934;
char* __dec_obj188;
_Bool comma_instead_of_semicolon_935;
struct sClass* current_stack_frame_struct_936;
struct sFun* equaler_937;
void* __right_value731 = (void*)0;
char* real_fun_name_938;
void* __right_value732 = (void*)0;
struct sType* type2_939;
struct sClass* klass_940;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct buffer* source_941;
char* name_942;
void* __right_value735 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_944;
struct tuple2$2char$phsType$ph* it_945;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_946=0;
struct sType* field_type_947=0;
char* p_949;
int sline_950;
char* sname_951;
char* head_952;
struct buffer* source3_953;
struct buffer* __dec_obj189;
void* __right_value736 = (void*)0;
char* __dec_obj190;
void* __right_value737 = (void*)0;
struct sBlock* block_954;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sType* result_type_955;
void* __right_value741 = (void*)0;
char* name_956;
void* __right_value742 = (void*)0;
struct sType* left_type_957;
void* __right_value743 = (void*)0;
struct sType* right_type_958;
struct sType* __list_values3___960[2];
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
struct list$1sType$ph* param_types_959;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
char* __list_values4___961[2];
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct list$1char$ph* param_names_962;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1char$ph* param_default_parametors_963;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sFun* fun2_964;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sFun* fun_965;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value761 = (void*)0;
struct sNode* node_966;
_Bool Value_967;
void* __right_value762 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c23_968=0;
char* Err_969=0;
struct buffer* __dec_obj191;
char* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__360;
    last_code_933=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj187=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_934=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj188=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_935=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_936=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_937=((void*)0);
    real_fun_name_938=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_939=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_939;
    klass_940=type->mClass;
    if(    type->mPointerNum>0&&!klass_940->mNumber) {
        source_941=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2738, "struct buffer*"))));
        buffer_append_char(source_941,123);
        if(        klass_940->mProtocol) {
            name_942="_protocol_obj";
            char source2_943[1024];
            memset(&source2_943, 0, sizeof(char)            *(1024)            );
            snprintf(source2_943,1024,"return left.%s.equals(right.%s);\n",name_942,name_942);
            buffer_append_str(source_941,source2_943);
        }
        else {
            klass_940=((struct sClass*)(__right_value735=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_940->mName)));
            /*c*/ come_call_finalizer3(__right_value735,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_944=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_940->mFields)),it_945=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_944));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_944));            it_945=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_944))            ){
                multiple_assign_var37=it_945;
                name_946=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_947=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_948[1024];
                memset(&source2_948, 0, sizeof(char)                *(1024)                );
                snprintf(source2_948,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_946,name_946,name_946);
                buffer_append_str(source_941,source2_948);
                (name_946 = come_decrement_ref_count(name_946, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_947,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_944,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_941,"return true;");
        buffer_append_char(source_941,125);
        p_949=info->p;
        sline_950=info->sline;
        sname_951=(char*)come_increment_ref_count(info->sname);
        head_952=info->head;
        source3_953=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj189=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_941);
        /*b*/ come_call_finalizer3(__dec_obj189,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_941->buf;
        info->head=source_941->buf;
        __dec_obj190=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_938));
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_954=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_955=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_956=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_938, "05function.c", 2779, "char*"));
        left_type_957=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_957->mHeap=(_Bool)0;
        right_type_958=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_958->mHeap=(_Bool)0;
        param_types_959=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___960[0]=left_type_957,
__list_values3___960[1]=right_type_958,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2784, "struct list$1sType$ph")),2,__list_values3___960)));
        param_names_962=(struct list$1char$ph*)come_increment_ref_count((__list_values4___961[0]=((char*)(__right_value746=__builtin_string("left"))),
__list_values4___961[1]=((char*)(__right_value747=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2785, "struct list$1char$ph")),2,__list_values4___961)));
        (__right_value746 = come_decrement_ref_count(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value747 = come_decrement_ref_count(__right_value747, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_963=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2786, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_963,((void*)0));
        list$1char$ph_push_back(param_default_parametors_963,((void*)0));
        result_type_955->mStatic=(_Bool)0;
        result_type_955->mUniq=(_Bool)0;
        result_type_955->mInline=(_Bool)0;
        fun2_964=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value752=__builtin_string(name_956)))));
        (__right_value752 = come_decrement_ref_count(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_964==((void*)0)||fun2_964->mExternal) {
            fun_965=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2796, "struct sFun*")),(char*)come_increment_ref_count(name_956),(struct sType*)come_increment_ref_count(result_type_955),(struct list$1sType$ph*)come_increment_ref_count(param_types_959),(struct list$1char$ph*)come_increment_ref_count(param_names_962),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_963),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_954),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_956)),(struct sFun*)come_increment_ref_count(fun_965));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2804, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value760=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2804, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_965),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_966=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value760,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_967=node_compile(node_966,info);
            if(            !Value_967) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value762=err_msg(info,"compiling error")));
                come_exception_var_c23_968=multiple_assign_var38->v1;
                Err_969=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_969)?(puts(Err_969),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value762,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_969 = come_decrement_ref_count(Err_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_937=fun_965;
            /*c*/ come_call_finalizer3(fun_965,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_966) ? node_966 = come_decrement_ref_count(node_966, ((struct sNode*)node_966)->finalize, ((struct sNode*)node_966)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_937=fun2_964;
        }
        __dec_obj191=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_953);
        /*b*/ come_call_finalizer3(__dec_obj191,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_949;
        info->head=head_952;
        info->sline=sline_950;
        __dec_obj192=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_951);
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_941,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_951 = come_decrement_ref_count(sname_951, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_953,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_954,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_955,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_956 = come_decrement_ref_count(name_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_957,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_958,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_959,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_962,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_963,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_964,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_936;
    __dec_obj193=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_933);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj194=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_934);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_935;
    __result_obj__360 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value764=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2830, "struct tuple2$2sFun$pchar$ph")),equaler_937,(char*)come_increment_ref_count(real_fun_name_938)))));
    (last_code_933 = come_decrement_ref_count(last_code_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_934 = come_decrement_ref_count(last_code2_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_938 = come_decrement_ref_count(real_fun_name_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_939,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value764,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__360,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__360;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_970;
char* __dec_obj195;
char* last_code2_971;
char* __dec_obj196;
_Bool comma_instead_of_semicolon_972;
struct sClass* current_stack_frame_struct_973;
struct sFun* equaler_974;
void* __right_value765 = (void*)0;
char* real_fun_name_975;
void* __right_value766 = (void*)0;
struct sType* type2_976;
struct sClass* klass_977;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* source_978;
char* name_979;
int i_982;
void* __right_value769 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_983;
struct tuple2$2char$phsType$ph* it_984;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_985=0;
struct sType* field_type_986=0;
char* p_990;
int sline_991;
char* sname_992;
char* head_993;
struct buffer* source3_994;
struct buffer* __dec_obj197;
void* __right_value770 = (void*)0;
char* __dec_obj198;
void* __right_value771 = (void*)0;
struct sBlock* block_995;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sType* result_type_996;
void* __right_value775 = (void*)0;
char* name_997;
void* __right_value776 = (void*)0;
struct sType* left_type_998;
void* __right_value777 = (void*)0;
struct sType* right_type_999;
struct sType* __list_values5___1001[2];
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct list$1sType$ph* param_types_1000;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
char* __list_values6___1002[2];
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct list$1char$ph* param_names_1003;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct list$1char$ph* param_default_parametors_1004;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sFun* fun2_1005;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sFun* fun_1006;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value795 = (void*)0;
struct sNode* node_1007;
_Bool Value_1008;
void* __right_value796 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c24_1009=0;
char* Err_1010=0;
struct buffer* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__361;
    last_code_970=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj195=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_971=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj196=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_972=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_973=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_974=((void*)0);
    real_fun_name_975=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_976=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_976;
    klass_977=type->mClass;
    if(    type->mPointerNum>0&&!klass_977->mNumber) {
        source_978=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2855, "struct buffer*"))));
        buffer_append_char(source_978,123);
        if(        klass_977->mProtocol) {
            name_979="_protocol_obj";
            char source2_980[1024];
            memset(&source2_980, 0, sizeof(char)            *(1024)            );
            snprintf(source2_980,1024,"return left.%s !== right.%s;\n",name_979,name_979);
            buffer_append_str(source_978,source2_980);
        }
        else {
            char source2_981[1024];
            memset(&source2_981, 0, sizeof(char)            *(1024)            );
            snprintf(source2_981,1024,"return !(");
            buffer_append_str(source_978,source2_981);
            snprintf(source2_981,1024,"( ");
            buffer_append_str(source_978,source2_981);
            i_982=0;
            klass_977=((struct sClass*)(__right_value769=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_977->mName)));
            /*c*/ come_call_finalizer3(__right_value769,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_983=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_977->mFields)),it_984=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_983));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_983));            it_984=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_983))            ){
                multiple_assign_var39=it_984;
                name_985=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_986=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_987[1024];
                memset(&source2_987, 0, sizeof(char)                *(1024)                );
                snprintf(source2_987,1024,"(left.%s === right.%s)",name_985,name_985,name_985);
                buffer_append_str(source_978,source2_987);
                if(                i_982==list$1tuple2$2char$phsType$ph$ph_length(klass_977->mFields)-1) {
                    char source2_988[1024];
                    memset(&source2_988, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_988,1024,"));");
                    buffer_append_str(source_978,source2_988);
                }
                else {
                    char source2_989[1024];
                    memset(&source2_989, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_989,1024," && ");
                    buffer_append_str(source_978,source2_989);
                }
                i_982++;
                (name_985 = come_decrement_ref_count(name_985, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_986,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_983,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_978,125);
        p_990=info->p;
        sline_991=info->sline;
        sname_992=(char*)come_increment_ref_count(info->sname);
        head_993=info->head;
        source3_994=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj197=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_978);
        /*b*/ come_call_finalizer3(__dec_obj197,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_978->buf;
        info->head=source_978->buf;
        __dec_obj198=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_975));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_995=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_996=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2915, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_997=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_975, "05function.c", 2916, "char*"));
        left_type_998=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_998->mHeap=(_Bool)0;
        right_type_999=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_999->mHeap=(_Bool)0;
        param_types_1000=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___1001[0]=left_type_998,
__list_values5___1001[1]=right_type_999,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2921, "struct list$1sType$ph")),2,__list_values5___1001)));
        param_names_1003=(struct list$1char$ph*)come_increment_ref_count((__list_values6___1002[0]=((char*)(__right_value780=__builtin_string("left"))),
__list_values6___1002[1]=((char*)(__right_value781=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2922, "struct list$1char$ph")),2,__list_values6___1002)));
        (__right_value780 = come_decrement_ref_count(__right_value780, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1004=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2923, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1004,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1004,((void*)0));
        result_type_996->mStatic=(_Bool)0;
        result_type_996->mUniq=(_Bool)0;
        result_type_996->mInline=(_Bool)0;
        fun2_1005=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value786=__builtin_string(name_997)))));
        (__right_value786 = come_decrement_ref_count(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1005==((void*)0)||fun2_1005->mExternal) {
            fun_1006=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2933, "struct sFun*")),(char*)come_increment_ref_count(name_997),(struct sType*)come_increment_ref_count(result_type_996),(struct list$1sType$ph*)come_increment_ref_count(param_types_1000),(struct list$1char$ph*)come_increment_ref_count(param_names_1003),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1004),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_995),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_997)),(struct sFun*)come_increment_ref_count(fun_1006));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2941, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value794=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2941, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1006),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1007=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value794,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1008=node_compile(node_1007,info);
            if(            !Value_1008) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value796=err_msg(info,"compiling error")));
                come_exception_var_c24_1009=multiple_assign_var40->v1;
                Err_1010=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1010)?(puts(Err_1010),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value796,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1010 = come_decrement_ref_count(Err_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_974=fun_1006;
            /*c*/ come_call_finalizer3(fun_1006,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1007) ? node_1007 = come_decrement_ref_count(node_1007, ((struct sNode*)node_1007)->finalize, ((struct sNode*)node_1007)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_974=fun2_1005;
        }
        __dec_obj199=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_994);
        /*b*/ come_call_finalizer3(__dec_obj199,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_990;
        info->head=head_993;
        info->sline=sline_991;
        __dec_obj200=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_992);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_978,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_992 = come_decrement_ref_count(sname_992, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_994,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_995,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_996,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_997 = come_decrement_ref_count(name_997, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_998,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_999,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1003,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1004,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1005,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_973;
    __dec_obj201=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_970);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj202=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_971);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_972;
    __result_obj__361 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value798=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2967, "struct tuple2$2sFun$pchar$ph")),equaler_974,(char*)come_increment_ref_count(real_fun_name_975)))));
    (last_code_970 = come_decrement_ref_count(last_code_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_971 = come_decrement_ref_count(last_code2_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_975 = come_decrement_ref_count(real_fun_name_975, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_976,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value798,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__361,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__361;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1011;
char* __dec_obj203;
char* last_code2_1012;
char* __dec_obj204;
_Bool comma_instead_of_semicolon_1013;
struct sClass* current_stack_frame_struct_1014;
struct sFun* equaler_1015;
void* __right_value799 = (void*)0;
char* real_fun_name_1016;
void* __right_value800 = (void*)0;
struct sType* type2_1017;
struct sClass* klass_1018;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct buffer* source_1019;
char* name_1020;
int i_1023;
void* __right_value803 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1024;
struct tuple2$2char$phsType$ph* it_1025;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1026=0;
struct sType* field_type_1027=0;
char* p_1031;
int sline_1032;
char* sname_1033;
char* head_1034;
struct buffer* source3_1035;
struct buffer* __dec_obj205;
void* __right_value804 = (void*)0;
char* __dec_obj206;
void* __right_value805 = (void*)0;
struct sBlock* block_1036;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct sType* result_type_1037;
void* __right_value809 = (void*)0;
char* name_1038;
void* __right_value810 = (void*)0;
struct sType* left_type_1039;
void* __right_value811 = (void*)0;
struct sType* right_type_1040;
struct sType* __list_values7___1042[2];
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct list$1sType$ph* param_types_1041;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
char* __list_values8___1043[2];
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct list$1char$ph* param_names_1044;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1char$ph* param_default_parametors_1045;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct sFun* fun2_1046;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sFun* fun_1047;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value829 = (void*)0;
struct sNode* node_1048;
_Bool Value_1049;
void* __right_value830 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c25_1050=0;
char* Err_1051=0;
struct buffer* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
char* __dec_obj210;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__362;
    last_code_1011=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj203=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1012=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj204=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1013=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1014=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1015=((void*)0);
    real_fun_name_1016=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1017=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1017;
    klass_1018=type->mClass;
    if(    type->mPointerNum>0&&!klass_1018->mNumber) {
        source_1019=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2992, "struct buffer*"))));
        buffer_append_char(source_1019,123);
        if(        klass_1018->mProtocol) {
            name_1020="_protocol_obj";
            char source2_1021[1024];
            memset(&source2_1021, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1021,1024,"return !left.%s.equals(right.%s);\n",name_1020,name_1020);
            buffer_append_str(source_1019,source2_1021);
        }
        else {
            char source2_1022[1024];
            memset(&source2_1022, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1022,1024,"return !(");
            buffer_append_str(source_1019,source2_1022);
            i_1023=0;
            klass_1018=((struct sClass*)(__right_value803=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1018->mName)));
            /*c*/ come_call_finalizer3(__right_value803,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1024=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1018->mFields)),it_1025=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1024));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1024));            it_1025=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1024))            ){
                multiple_assign_var41=it_1025;
                name_1026=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1027=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1028[1024];
                memset(&source2_1028, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1028,1024,"left.%s.equals(right.%s)",name_1026,name_1026);
                buffer_append_str(source_1019,source2_1028);
                if(                i_1023==list$1tuple2$2char$phsType$ph$ph_length(klass_1018->mFields)-1) {
                    char source2_1029[1024];
                    memset(&source2_1029, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1029,1024,");");
                    buffer_append_str(source_1019,source2_1029);
                }
                else {
                    char source2_1030[1024];
                    memset(&source2_1030, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1030,1024," && ");
                    buffer_append_str(source_1019,source2_1030);
                }
                i_1023++;
                (name_1026 = come_decrement_ref_count(name_1026, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1027,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1024,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_1019,125);
        p_1031=info->p;
        sline_1032=info->sline;
        sname_1033=(char*)come_increment_ref_count(info->sname);
        head_1034=info->head;
        source3_1035=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj205=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1019);
        /*b*/ come_call_finalizer3(__dec_obj205,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1019->buf;
        info->head=source_1019->buf;
        __dec_obj206=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1016));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1036=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1037=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3049, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1038=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1016, "05function.c", 3050, "char*"));
        left_type_1039=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1039->mHeap=(_Bool)0;
        right_type_1040=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1040->mHeap=(_Bool)0;
        param_types_1041=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___1042[0]=left_type_1039,
__list_values7___1042[1]=right_type_1040,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3055, "struct list$1sType$ph")),2,__list_values7___1042)));
        param_names_1044=(struct list$1char$ph*)come_increment_ref_count((__list_values8___1043[0]=((char*)(__right_value814=__builtin_string("left"))),
__list_values8___1043[1]=((char*)(__right_value815=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3056, "struct list$1char$ph")),2,__list_values8___1043)));
        (__right_value814 = come_decrement_ref_count(__right_value814, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value815 = come_decrement_ref_count(__right_value815, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1045=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3057, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1045,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1045,((void*)0));
        result_type_1037->mStatic=(_Bool)0;
        result_type_1037->mUniq=(_Bool)0;
        result_type_1037->mInline=(_Bool)0;
        fun2_1046=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value820=__builtin_string(name_1038)))));
        (__right_value820 = come_decrement_ref_count(__right_value820, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1046==((void*)0)||fun2_1046->mExternal) {
            fun_1047=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3067, "struct sFun*")),(char*)come_increment_ref_count(name_1038),(struct sType*)come_increment_ref_count(result_type_1037),(struct list$1sType$ph*)come_increment_ref_count(param_types_1041),(struct list$1char$ph*)come_increment_ref_count(param_names_1044),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1045),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1036),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1038)),(struct sFun*)come_increment_ref_count(fun_1047));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3075, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value828=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3075, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1047),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1048=(struct sNode*)come_increment_ref_count(_inf_value12);
            /*c*/ come_call_finalizer3(__right_value828,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1049=node_compile(node_1048,info);
            if(            !Value_1049) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value830=err_msg(info,"compiling error")));
                come_exception_var_c25_1050=multiple_assign_var42->v1;
                Err_1051=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1051)?(puts(Err_1051),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value830,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1051 = come_decrement_ref_count(Err_1051, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1015=fun_1047;
            /*c*/ come_call_finalizer3(fun_1047,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1048) ? node_1048 = come_decrement_ref_count(node_1048, ((struct sNode*)node_1048)->finalize, ((struct sNode*)node_1048)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1015=fun2_1046;
        }
        __dec_obj207=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1035);
        /*b*/ come_call_finalizer3(__dec_obj207,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1031;
        info->head=head_1034;
        info->sline=sline_1032;
        __dec_obj208=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1033);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1019,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1033 = come_decrement_ref_count(sname_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1035,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1036,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1037,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1038 = come_decrement_ref_count(name_1038, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1039,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1040,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1041,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1044,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1045,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1046,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1014;
    __dec_obj209=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1011);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj210=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1012);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1013;
    __result_obj__362 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value832=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3101, "struct tuple2$2sFun$pchar$ph")),equaler_1015,(char*)come_increment_ref_count(real_fun_name_1016)))));
    (last_code_1011 = come_decrement_ref_count(last_code_1011, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1012 = come_decrement_ref_count(last_code2_1012, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1016 = come_decrement_ref_count(real_fun_name_1016, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1017,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value832,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__362,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1052;
char* __dec_obj211;
char* last_code2_1053;
char* __dec_obj212;
_Bool comma_instead_of_semicolon_1054;
struct sClass* current_stack_frame_struct_1055;
struct sFun* equaler_1056;
void* __right_value833 = (void*)0;
char* real_fun_name_1057;
void* __right_value834 = (void*)0;
struct sType* type2_1058;
struct sClass* klass_1059;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct buffer* source_1060;
char* name_1061;
void* __right_value837 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1064;
struct tuple2$2char$phsType$ph* it_1065;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1066=0;
struct sType* field_type_1067=0;
char* p_1069;
int sline_1070;
char* sname_1071;
char* head_1072;
struct buffer* source3_1073;
struct buffer* __dec_obj213;
void* __right_value838 = (void*)0;
char* __dec_obj214;
void* __right_value839 = (void*)0;
struct sBlock* block_1074;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
struct sType* result_type_1075;
void* __right_value843 = (void*)0;
char* name_1076;
void* __right_value844 = (void*)0;
struct sType* left_type_1077;
void* __right_value845 = (void*)0;
struct sType* right_type_1078;
struct sType* __list_values9___1080[2];
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct list$1sType$ph* param_types_1079;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
char* __list_values10___1081[2];
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
struct list$1char$ph* param_names_1082;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct list$1char$ph* param_default_parametors_1083;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct sFun* fun2_1084;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sFun* fun_1085;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value863 = (void*)0;
struct sNode* node_1086;
_Bool Value_1087;
void* __right_value864 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c26_1088=0;
char* Err_1089=0;
struct buffer* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__363;
    last_code_1052=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj211=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1053=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj212=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1054=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1055=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1056=((void*)0);
    real_fun_name_1057=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1058=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1058;
    klass_1059=type->mClass;
    if(    type->mPointerNum>0&&!klass_1059->mNumber) {
        source_1060=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3126, "struct buffer*"))));
        buffer_append_char(source_1060,123);
        if(        klass_1059->mProtocol) {
            name_1061="_protocol_obj";
            char source2_1062[1024];
            memset(&source2_1062, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1062,1024,"return left.%s === right.%s;\n",name_1061,name_1061);
            buffer_append_str(source_1060,source2_1062);
        }
        else {
            char source2_1063[1024];
            memset(&source2_1063, 0, sizeof(char)            *(1024)            );
            klass_1059=((struct sClass*)(__right_value837=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1059->mName)));
            /*c*/ come_call_finalizer3(__right_value837,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1064=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1059->mFields)),it_1065=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1064));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1064));            it_1065=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1064))            ){
                multiple_assign_var43=it_1065;
                name_1066=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1067=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1068[1024];
                memset(&source2_1068, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1068,1024,"if(left.%s !== right.%s) { return false; }\n",name_1066,name_1066,name_1066);
                buffer_append_str(source_1060,source2_1068);
                (name_1066 = come_decrement_ref_count(name_1066, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1067,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1064,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_1060,"return true;\n");
        buffer_append_char(source_1060,125);
        p_1069=info->p;
        sline_1070=info->sline;
        sname_1071=(char*)come_increment_ref_count(info->sname);
        head_1072=info->head;
        source3_1073=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj213=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1060);
        /*b*/ come_call_finalizer3(__dec_obj213,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1060->buf;
        info->head=source_1060->buf;
        __dec_obj214=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1057));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1074=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1075=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3168, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1076=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1057, "05function.c", 3169, "char*"));
        left_type_1077=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1077->mHeap=(_Bool)0;
        right_type_1078=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1078->mHeap=(_Bool)0;
        param_types_1079=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___1080[0]=left_type_1077,
__list_values9___1080[1]=right_type_1078,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3174, "struct list$1sType$ph")),2,__list_values9___1080)));
        param_names_1082=(struct list$1char$ph*)come_increment_ref_count((__list_values10___1081[0]=((char*)(__right_value848=__builtin_string("left"))),
__list_values10___1081[1]=((char*)(__right_value849=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3175, "struct list$1char$ph")),2,__list_values10___1081)));
        (__right_value848 = come_decrement_ref_count(__right_value848, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value849 = come_decrement_ref_count(__right_value849, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1083=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3176, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1083,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1083,((void*)0));
        result_type_1075->mStatic=(_Bool)0;
        result_type_1075->mUniq=(_Bool)0;
        result_type_1075->mInline=(_Bool)0;
        fun2_1084=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value854=__builtin_string(name_1076)))));
        (__right_value854 = come_decrement_ref_count(__right_value854, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1084==((void*)0)||fun2_1084->mExternal) {
            fun_1085=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3186, "struct sFun*")),(char*)come_increment_ref_count(name_1076),(struct sType*)come_increment_ref_count(result_type_1075),(struct list$1sType$ph*)come_increment_ref_count(param_types_1079),(struct list$1char$ph*)come_increment_ref_count(param_names_1082),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1083),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1074),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1076)),(struct sFun*)come_increment_ref_count(fun_1085));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3194, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value862=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3194, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1085),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1086=(struct sNode*)come_increment_ref_count(_inf_value13);
            /*c*/ come_call_finalizer3(__right_value862,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1087=node_compile(node_1086,info);
            if(            !Value_1087) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value864=err_msg(info,"compiling error(X)")));
                come_exception_var_c26_1088=multiple_assign_var44->v1;
                Err_1089=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1089)?(puts(Err_1089),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value864,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1089 = come_decrement_ref_count(Err_1089, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1056=fun_1085;
            /*c*/ come_call_finalizer3(fun_1085,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1086) ? node_1086 = come_decrement_ref_count(node_1086, ((struct sNode*)node_1086)->finalize, ((struct sNode*)node_1086)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1056=fun2_1084;
        }
        __dec_obj215=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1073);
        /*b*/ come_call_finalizer3(__dec_obj215,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1069;
        info->head=head_1072;
        info->sline=sline_1070;
        __dec_obj216=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1071);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1060,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1071 = come_decrement_ref_count(sname_1071, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1073,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1074,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1075,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1076 = come_decrement_ref_count(name_1076, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1077,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1078,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1079,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1082,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1083,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1084,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1055;
    __dec_obj217=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1052);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj218=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1053);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1054;
    __result_obj__363 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value866=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3220, "struct tuple2$2sFun$pchar$ph")),equaler_1056,(char*)come_increment_ref_count(real_fun_name_1057)))));
    (last_code_1052 = come_decrement_ref_count(last_code_1052, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1053 = come_decrement_ref_count(last_code2_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1057 = come_decrement_ref_count(real_fun_name_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1058,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value866,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__363,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__363;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__364;
char* last_code_1090;
char* __dec_obj219;
char* last_code2_1091;
char* __dec_obj220;
_Bool comma_instead_of_semicolon_1092;
struct sClass* current_stack_frame_struct_1093;
struct sFun* cloner_1094;
void* __right_value869 = (void*)0;
char* real_fun_name_1095;
void* __right_value870 = (void*)0;
struct sType* type2_1096;
struct sClass* klass_1097;
char* fun_name2_1098;
void* __right_value871 = (void*)0;
char* none_generics_name_1099;
void* __right_value872 = (void*)0;
struct sType* obj_type_1100;
void* __right_value873 = (void*)0;
char* __dec_obj221;
void* __right_value874 = (void*)0;
char* fun_name3_1101;
void* __right_value875 = (void*)0;
struct sGenericsFun* generics_fun_1102;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1103=0;
_Bool err_1104=0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__365;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
char* __dec_obj222;
void* __right_value882 = (void*)0;
char* __dec_obj223;
int i_1105;
void* __right_value883 = (void*)0;
char* new_fun_name_1106;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
char* __dec_obj224;
void* __right_value886 = (void*)0;
char* __dec_obj225;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct buffer* source_1107;
void* __right_value889 = (void*)0;
char* name_1108;
void* __right_value890 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1110;
struct tuple2$2char$phsType$ph* it_1111;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1112=0;
struct sType* field_type_1113=0;
void* __right_value891 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1116;
struct tuple2$2char$phsType$ph* it_1117;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1118=0;
struct sType* field_type_1119=0;
void* __right_value892 = (void*)0;
char* user_real_fun_name_1123;
void* __right_value893 = (void*)0;
struct sFun* user_cloner_1124;
char* p_1126;
int sline_1127;
char* sname_1128;
struct buffer* source3_1129;
char* head_1130;
struct buffer* __dec_obj226;
void* __right_value894 = (void*)0;
char* __dec_obj227;
void* __right_value895 = (void*)0;
struct sBlock* block_1131;
void* __right_value896 = (void*)0;
struct sType* result_type_1132;
void* __right_value897 = (void*)0;
char* name_1133;
void* __right_value898 = (void*)0;
struct sType* self_type_1134;
struct sType* __list_values11___1136[1];
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct list$1sType$ph* param_types_1135;
void* __right_value901 = (void*)0;
char* __list_values12___1137[1];
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1char$ph* param_names_1138;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct list$1char$ph* param_default_parametors_1139;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct sFun* fun2_1140;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sFun* fun_1141;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value915 = (void*)0;
struct sNode* node_1142;
_Bool Value_1143;
void* __right_value916 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c27_1144=0;
char* Err_1145=0;
char* __dec_obj228;
struct buffer* __dec_obj229;
char* __dec_obj230;
char* __dec_obj231;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__366;
fun_name2_1098 = (void*)0;
memset(&i_1105, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__364 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value868=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3226, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        /*c*/ come_call_finalizer3(__right_value868,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__364,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__364;
    }
    last_code_1090=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj219=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1091=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj220=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1092=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1093=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1094=((void*)0);
    real_fun_name_1095=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1096=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1096;
    klass_1097=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1099=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1100=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj221=fun_name2_1098,
        fun_name2_1098=(char*)come_increment_ref_count(create_method_name(obj_type_1100,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1101=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1099,fun_name));
        generics_fun_1102=((struct sGenericsFun*)(__right_value875=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1101,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value875,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1102) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value877=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1098)),generics_fun_1102,obj_type_1100,info)));
            name_1103=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1104=multiple_assign_var45->v2;
            /*c*/ come_call_finalizer3(__right_value877,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1104) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__365 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value879=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3266, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1103 = come_decrement_ref_count(name_1103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1099 = come_decrement_ref_count(none_generics_name_1099, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(obj_type_1100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name3_1101 = come_decrement_ref_count(fun_name3_1101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1090 = come_decrement_ref_count(last_code_1090, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1091 = come_decrement_ref_count(last_code2_1091, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1095 = come_decrement_ref_count(real_fun_name_1095, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_1096,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_1098 = come_decrement_ref_count(fun_name2_1098, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value879,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__365,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__365;
                }
            }
            cloner_1094=((struct sFun*)(__right_value880=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1103)));
            /*c*/ come_call_finalizer3(__right_value880,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1103 = come_decrement_ref_count(name_1103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1094=((struct sFun*)(__right_value881=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1098)));
            /*c*/ come_call_finalizer3(__right_value881,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj222=real_fun_name_1095,
        real_fun_name_1095=(char*)come_increment_ref_count(fun_name2_1098);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (none_generics_name_1099 = come_decrement_ref_count(none_generics_name_1099, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1100,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1101 = come_decrement_ref_count(fun_name3_1101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj223=fun_name2_1098,
        fun_name2_1098=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1105=128-1;        i_1105>=1;        i_1105--        ){
            new_fun_name_1106=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1098,i_1105));
            cloner_1094=((struct sFun*)(__right_value884=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1106)));
            /*c*/ come_call_finalizer3(__right_value884,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1094) {
                __dec_obj224=fun_name2_1098,
                fun_name2_1098=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1106));
                __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1106 = come_decrement_ref_count(new_fun_name_1106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1106 = come_decrement_ref_count(new_fun_name_1106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1094==((void*)0)) {
            cloner_1094=((struct sFun*)(__right_value886=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1098)));
            /*c*/ come_call_finalizer3(__right_value886,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj225=real_fun_name_1095,
        real_fun_name_1095=(char*)come_increment_ref_count(fun_name2_1098);
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    cloner_1094==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1107=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3301, "struct buffer*"))));
        buffer_append_str(source_1107,"{\n");
        buffer_append_str(source_1107,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1107,"var result = new %s;\n",((char*)(__right_value889=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value889 = come_decrement_ref_count(__right_value889, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1097->mProtocol) {
            name_1108="_protocol_obj";
            char source2_1109[1024];
            memset(&source2_1109, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1109,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1107,source2_1109);
            klass_1097=((struct sClass*)(__right_value890=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1097->mName)));
            /*c*/ come_call_finalizer3(__right_value890,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1110=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1097->mFields)),it_1111=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1110));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1110));            it_1111=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1110))            ){
                multiple_assign_var46=it_1111;
                name_1112=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1113=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1112,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph_length(field_type_1113->mArrayNum)>0) {
                    char source2_1114[1024];
                    memset(&source2_1114, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1114,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1112,name_1112,name_1112);
                    buffer_append_str(source_1107,source2_1114);
                }
                else {
                    char source2_1115[1024];
                    memset(&source2_1115, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1115,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1112,name_1112);
                    buffer_append_str(source_1107,source2_1115);
                }
                (name_1112 = come_decrement_ref_count(name_1112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1113,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1110,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_1097=((struct sClass*)(__right_value891=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1097->mName)));
            /*c*/ come_call_finalizer3(__right_value891,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1116=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1097->mFields)),it_1117=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1116));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1116));            it_1117=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1116))            ){
                multiple_assign_var47=it_1117;
                name_1118=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1119=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1119->mHeap) {
                    char source2_1120[1024];
                    memset(&source2_1120, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1120,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1118,name_1118,name_1118);
                    buffer_append_str(source_1107,source2_1120);
                }
                else if(                list$1sNode$ph_length(field_type_1119->mArrayNum)>0) {
                    char source2_1121[1024];
                    memset(&source2_1121, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1121,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1118,name_1118,name_1118);
                    buffer_append_str(source_1107,source2_1121);
                }
                else {
                    char source2_1122[1024];
                    memset(&source2_1122, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1122,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1118,name_1118);
                    buffer_append_str(source_1107,source2_1122);
                }
                (name_1118 = come_decrement_ref_count(name_1118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1119,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1116,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        user_real_fun_name_1123=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1124=((struct sFun*)(__right_value893=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1123)));
        /*c*/ come_call_finalizer3(__right_value893,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        user_cloner_1124) {
            char source2_1125[1024];
            memset(&source2_1125, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1125,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1123);
            buffer_append_str(source_1107,source2_1125);
        }
        buffer_append_format(source_1107,"return result;");
        buffer_append_char(source_1107,125);
        p_1126=info->p;
        sline_1127=info->sline;
        sname_1128=(char*)come_increment_ref_count(info->sname);
        source3_1129=(struct buffer*)come_increment_ref_count(info->source);
        head_1130=info->head;
        __dec_obj226=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1107);
        /*b*/ come_call_finalizer3(__dec_obj226,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj227=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1095));
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1131=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1132=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1133=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1095, "05function.c", 3389, "char*"));
        self_type_1134=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1134->mHeap=(_Bool)0;
        param_types_1135=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___1136[0]=self_type_1134,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3392, "struct list$1sType$ph")),1,__list_values11___1136)));
        param_names_1138=(struct list$1char$ph*)come_increment_ref_count((__list_values12___1137[0]=((char*)(__right_value901=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3393, "struct list$1char$ph")),1,__list_values12___1137)));
        (__right_value901 = come_decrement_ref_count(__right_value901, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1139=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3394, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1139,((void*)0));
        result_type_1132->mStatic=(_Bool)0;
        result_type_1132->mUniq=(_Bool)0;
        result_type_1132->mInline=(_Bool)0;
        fun2_1140=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value906=__builtin_string(name_1133)))));
        (__right_value906 = come_decrement_ref_count(__right_value906, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1140==((void*)0)||fun2_1140->mExternal) {
            fun_1141=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3404, "struct sFun*")),(char*)come_increment_ref_count(name_1133),(struct sType*)come_increment_ref_count(result_type_1132),(struct list$1sType$ph*)come_increment_ref_count(param_types_1135),(struct list$1char$ph*)come_increment_ref_count(param_names_1138),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1139),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1131),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1133)),(struct sFun*)come_increment_ref_count(fun_1141));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3412, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value914=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3412, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1141),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1142=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value914,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1143=node_compile(node_1142,info);
            if(            !Value_1143) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value916=err_msg(info,"compiling error(Y)")));
                come_exception_var_c27_1144=multiple_assign_var48->v1;
                Err_1145=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1145)?(puts(Err_1145),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value916,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1145 = come_decrement_ref_count(Err_1145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1094=fun_1141;
            /*c*/ come_call_finalizer3(fun_1141,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1142) ? node_1142 = come_decrement_ref_count(node_1142, ((struct sNode*)node_1142)->finalize, ((struct sNode*)node_1142)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1094=fun2_1140;
        }
        __dec_obj228=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1128);
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1127;
        __dec_obj229=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1129);
        /*b*/ come_call_finalizer3(__dec_obj229,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1126;
        info->head=head_1130;
        info->sline=sline_1127;
        /*c*/ come_call_finalizer3(source_1107,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (user_real_fun_name_1123 = come_decrement_ref_count(user_real_fun_name_1123, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1128 = come_decrement_ref_count(sname_1128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1129,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1131,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1132,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1133 = come_decrement_ref_count(name_1133, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1134,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1135,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1138,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1139,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1140,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1093;
    __dec_obj230=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1090);
    __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj231=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1091);
    __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1092;
    __result_obj__366 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value918=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3440, "struct tuple2$2sFun$pchar$ph")),cloner_1094,(char*)come_increment_ref_count(real_fun_name_1095)))));
    (last_code_1090 = come_decrement_ref_count(last_code_1090, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1091 = come_decrement_ref_count(last_code2_1091, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1095 = come_decrement_ref_count(real_fun_name_1095, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1096,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1098 = come_decrement_ref_count(fun_name2_1098, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value918,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__366,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__366;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1146;
char* __dec_obj232;
char* last_code2_1147;
char* __dec_obj233;
_Bool comma_instead_of_semicolon_1148;
struct sClass* current_stack_frame_struct_1149;
struct sFun* cloner_1150;
void* __right_value919 = (void*)0;
char* real_fun_name_1151;
void* __right_value920 = (void*)0;
struct sType* type2_1152;
struct sClass* klass_1153;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct buffer* source_1154;
int i_1155;
void* __right_value923 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1156;
struct tuple2$2char$phsType$ph* it_1157;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1158=0;
struct sType* field_type_1159=0;
char* p_1162;
int sline_1163;
char* sname_1164;
struct buffer* source3_1165;
char* head_1166;
struct buffer* __dec_obj234;
void* __right_value924 = (void*)0;
char* __dec_obj235;
void* __right_value925 = (void*)0;
struct sBlock* block_1167;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct sType* result_type_1168;
void* __right_value929 = (void*)0;
char* name_1169;
void* __right_value930 = (void*)0;
struct sType* self_type_1170;
struct sType* __list_values13___1172[1];
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct list$1sType$ph* param_types_1171;
void* __right_value933 = (void*)0;
char* __list_values14___1173[1];
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct list$1char$ph* param_names_1174;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct list$1char$ph* param_default_parametors_1175;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sFun* fun2_1176;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct sFun* fun_1177;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value947 = (void*)0;
struct sNode* node_1178;
_Bool Value_1179;
void* __right_value948 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c28_1180=0;
char* Err_1181=0;
char* __dec_obj236;
struct buffer* __dec_obj237;
char* __dec_obj238;
char* __dec_obj239;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__367;
    last_code_1146=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj232=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1147=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj233=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1148=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1149=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1150=((void*)0);
    real_fun_name_1151=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1152=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1152;
    klass_1153=type->mClass;
    if(    type->mPointerNum>0&&!klass_1153->mNumber) {
        source_1154=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3465, "struct buffer*"))));
        buffer_append_str(source_1154,"{\n");
        buffer_append_str(source_1154,"var result = new buffer();\n");
        buffer_append_format(source_1154,"result.append_str(\"%s {\");\n",klass_1153->mName);
        i_1155=0;
        klass_1153=((struct sClass*)(__right_value923=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1153->mName)));
        /*c*/ come_call_finalizer3(__right_value923,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1156=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1153->mFields)),it_1157=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1156));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1156));        it_1157=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1156))        ){
            multiple_assign_var49=it_1157;
            name_1158=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1159=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1155==list$1tuple2$2char$phsType$ph$ph_length(klass_1153->mFields)-1) {
                char source2_1160[1024];
                memset(&source2_1160, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1160,1024,"result.append_str(\"%s:\");\n",name_1158);
                buffer_append_str(source_1154,source2_1160);
                snprintf(source2_1160,1024,"result.append_str(self.%s.to_string());\n",name_1158);
                buffer_append_str(source_1154,source2_1160);
            }
            else {
                char source2_1161[1024];
                memset(&source2_1161, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1161,1024,"result.append_str(\"%s:\");\n",name_1158);
                buffer_append_str(source_1154,source2_1161);
                snprintf(source2_1161,1024,"result.append_str(self.%s.to_string());\n",name_1158);
                buffer_append_str(source_1154,source2_1161);
                snprintf(source2_1161,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1154,source2_1161);
            }
            i_1155++;
            (name_1158 = come_decrement_ref_count(name_1158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1159,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1156,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(source_1154,"result.append_str(\"}\");\n");
        buffer_append_format(source_1154,"return result.to_string();\n");
        buffer_append_char(source_1154,125);
        p_1162=info->p;
        sline_1163=info->sline;
        sname_1164=(char*)come_increment_ref_count(info->sname);
        source3_1165=(struct buffer*)come_increment_ref_count(info->source);
        head_1166=info->head;
        __dec_obj234=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1154);
        /*b*/ come_call_finalizer3(__dec_obj234,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj235=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1151));
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1167=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1168=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3526, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1168->mHeap=(_Bool)1;
        name_1169=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1151, "05function.c", 3528, "char*"));
        self_type_1170=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1170->mHeap=(_Bool)0;
        param_types_1171=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___1172[0]=self_type_1170,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3531, "struct list$1sType$ph")),1,__list_values13___1172)));
        param_names_1174=(struct list$1char$ph*)come_increment_ref_count((__list_values14___1173[0]=((char*)(__right_value933=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3532, "struct list$1char$ph")),1,__list_values14___1173)));
        (__right_value933 = come_decrement_ref_count(__right_value933, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1175=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3533, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1175,((void*)0));
        result_type_1168->mStatic=(_Bool)0;
        result_type_1168->mUniq=(_Bool)0;
        result_type_1168->mInline=(_Bool)0;
        fun2_1176=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value938=__builtin_string(name_1169)))));
        (__right_value938 = come_decrement_ref_count(__right_value938, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1176==((void*)0)||fun2_1176->mExternal) {
            fun_1177=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3542, "struct sFun*")),(char*)come_increment_ref_count(name_1169),(struct sType*)come_increment_ref_count(result_type_1168),(struct list$1sType$ph*)come_increment_ref_count(param_types_1171),(struct list$1char$ph*)come_increment_ref_count(param_names_1174),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1175),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1167),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1169)),(struct sFun*)come_increment_ref_count(fun_1177));
            cloner_1150=fun_1177;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3552, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value946=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3552, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1177),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1178=(struct sNode*)come_increment_ref_count(_inf_value15);
            /*c*/ come_call_finalizer3(__right_value946,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1179=node_compile(node_1178,info);
            if(            !Value_1179) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value948=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1180=multiple_assign_var50->v1;
                Err_1181=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1181)?(puts(Err_1181),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value948,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1181 = come_decrement_ref_count(Err_1181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1177,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1178) ? node_1178 = come_decrement_ref_count(node_1178, ((struct sNode*)node_1178)->finalize, ((struct sNode*)node_1178)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1150=fun2_1176;
        }
        __dec_obj236=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1164);
        __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1163;
        __dec_obj237=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1165);
        /*b*/ come_call_finalizer3(__dec_obj237,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1162;
        info->head=head_1166;
        info->sline=sline_1163;
        /*c*/ come_call_finalizer3(source_1154,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1164 = come_decrement_ref_count(sname_1164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1165,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1167,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1168,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1169 = come_decrement_ref_count(name_1169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1170,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1171,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1174,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1175,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1176,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1149;
    __dec_obj238=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1146);
    __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj239=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1147);
    __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1148;
    __result_obj__367 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value950=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3578, "struct tuple2$2sFun$pchar$ph")),cloner_1150,(char*)come_increment_ref_count(real_fun_name_1151)))));
    (last_code_1146 = come_decrement_ref_count(last_code_1146, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1147 = come_decrement_ref_count(last_code2_1147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1151 = come_decrement_ref_count(real_fun_name_1151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1152,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value950,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__367,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__367;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1227;
char* __dec_obj250;
char* last_code2_1228;
char* __dec_obj251;
_Bool comma_instead_of_semicolon_1229;
struct sClass* current_stack_frame_struct_1230;
struct sFun* get_hash_key_fun_1231;
void* __right_value995 = (void*)0;
char* real_fun_name_1232;
void* __right_value996 = (void*)0;
struct sType* type2_1233;
struct sClass* klass_1234;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
char* none_generics_name_1235;
void* __right_value999 = (void*)0;
char* generics_fun_name_1236;
void* __right_value1000 = (void*)0;
struct sGenericsFun* generics_fun_1237;
void* __right_value1001 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1238=0;
_Bool err_1239=0;
void* __right_value1002 = (void*)0;
int i_1240;
void* __right_value1003 = (void*)0;
char* new_fun_name_1241;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
char* __dec_obj252;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct buffer* source_1242;
int i_1243;
void* __right_value1009 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1244;
struct tuple2$2char$phsType$ph* it_1245;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1246=0;
struct sType* field_type_1247=0;
char* p_1249;
int sline_1250;
char* sname_1251;
struct buffer* source3_1252;
char* head_1253;
struct buffer* __dec_obj253;
void* __right_value1010 = (void*)0;
char* __dec_obj254;
void* __right_value1011 = (void*)0;
struct sBlock* block_1254;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sType* result_type_1255;
void* __right_value1015 = (void*)0;
char* name_1256;
void* __right_value1016 = (void*)0;
struct sType* self_type_1257;
struct sType* __list_values17___1259[1];
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct list$1sType$ph* param_types_1258;
void* __right_value1019 = (void*)0;
char* __list_values18___1260[1];
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct list$1char$ph* param_names_1261;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
struct list$1char$ph* param_default_parametors_1262;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct sFun* fun2_1263;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sFun* fun_1264;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1033 = (void*)0;
struct sNode* node_1265;
_Bool Value_1266;
void* __right_value1034 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c30_1267=0;
char* Err_1268=0;
char* __dec_obj255;
struct buffer* __dec_obj256;
char* __dec_obj257;
char* __dec_obj258;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__369;
memset(&i_1240, 0, sizeof(int));
    last_code_1227=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj250=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1228=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj251=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1229=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1230=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1231=((void*)0);
    real_fun_name_1232=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1233=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1233;
    klass_1234=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1231=((struct sFun*)(__right_value997=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1232)));
        /*c*/ come_call_finalizer3(__right_value997,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        get_hash_key_fun_1231==((void*)0)) {
            none_generics_name_1235=(char*)come_increment_ref_count(get_none_generics_name(type2_1233->mClass->mName));
            generics_fun_name_1236=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1235,fun_name));
            generics_fun_1237=((struct sGenericsFun*)(__right_value1000=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1236)));
            /*c*/ come_call_finalizer3(__right_value1000,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1237) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1001=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1232),generics_fun_1237,type,info)));
                name_1238=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1239=multiple_assign_var54->v2;
                /*c*/ come_call_finalizer3(__right_value1001,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1239) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1231=((struct sFun*)(__right_value1002=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1238)));
                /*c*/ come_call_finalizer3(__right_value1002,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1238 = come_decrement_ref_count(name_1238, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1235 = come_decrement_ref_count(none_generics_name_1235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1236 = come_decrement_ref_count(generics_fun_name_1236, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1240=128-1;        i_1240>=1;        i_1240--        ){
            new_fun_name_1241=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1232,i_1240));
            get_hash_key_fun_1231=((struct sFun*)(__right_value1004=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1241)));
            /*c*/ come_call_finalizer3(__right_value1004,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            get_hash_key_fun_1231) {
                __dec_obj252=real_fun_name_1232,
                real_fun_name_1232=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1241));
                __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1241 = come_decrement_ref_count(new_fun_name_1241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1241 = come_decrement_ref_count(new_fun_name_1241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1231==((void*)0)) {
            get_hash_key_fun_1231=((struct sFun*)(__right_value1006=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1232)));
            /*c*/ come_call_finalizer3(__right_value1006,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    get_hash_key_fun_1231==((void*)0)&&type->mPointerNum>0&&!klass_1234->mNumber&&!klass_1234->mProtocol) {
        source_1242=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3841, "struct buffer*"))));
        buffer_append_str(source_1242,"{\n");
        buffer_append_str(source_1242,"unsigned int result = 0;\n");
        i_1243=0;
        klass_1234=((struct sClass*)(__right_value1009=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1234->mName)));
        /*c*/ come_call_finalizer3(__right_value1009,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1244=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1234->mFields)),it_1245=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1244));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1244));        it_1245=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1244))        ){
            multiple_assign_var55=it_1245;
            name_1246=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1247=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1248[1024];
            memset(&source2_1248, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1248,1024,"result += ((int)self.%s).get_hash_key();\n",name_1246);
            buffer_append_str(source_1242,source2_1248);
            i_1243++;
            (name_1246 = come_decrement_ref_count(name_1246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1247,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1244,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_format(source_1242,"return result;\n");
        buffer_append_char(source_1242,125);
        p_1249=info->p;
        sline_1250=info->sline;
        sname_1251=(char*)come_increment_ref_count(info->sname);
        source3_1252=(struct buffer*)come_increment_ref_count(info->source);
        head_1253=info->head;
        __dec_obj253=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1242);
        /*b*/ come_call_finalizer3(__dec_obj253,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj254=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1232));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1254=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1255=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3878, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1255->mUnsigned=(_Bool)1;
        name_1256=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1232, "05function.c", 3880, "char*"));
        self_type_1257=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1257->mHeap=(_Bool)0;
        param_types_1258=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___1259[0]=self_type_1257,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3883, "struct list$1sType$ph")),1,__list_values17___1259)));
        param_names_1261=(struct list$1char$ph*)come_increment_ref_count((__list_values18___1260[0]=((char*)(__right_value1019=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3884, "struct list$1char$ph")),1,__list_values18___1260)));
        (__right_value1019 = come_decrement_ref_count(__right_value1019, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1262=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3885, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1262,((void*)0));
        result_type_1255->mStatic=(_Bool)0;
        result_type_1255->mUniq=(_Bool)0;
        result_type_1255->mInline=(_Bool)0;
        fun2_1263=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1024=__builtin_string(name_1256)))));
        (__right_value1024 = come_decrement_ref_count(__right_value1024, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1263==((void*)0)||fun2_1263->mExternal) {
            fun_1264=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3894, "struct sFun*")),(char*)come_increment_ref_count(name_1256),(struct sType*)come_increment_ref_count(result_type_1255),(struct list$1sType$ph*)come_increment_ref_count(param_types_1258),(struct list$1char$ph*)come_increment_ref_count(param_names_1261),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1262),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1254),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1256)),(struct sFun*)come_increment_ref_count(fun_1264));
            get_hash_key_fun_1231=fun_1264;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3904, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1032=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3904, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1264),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1265=(struct sNode*)come_increment_ref_count(_inf_value17);
            /*c*/ come_call_finalizer3(__right_value1032,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1266=node_compile(node_1265,info);
            if(            !Value_1266) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1034=err_msg(info,"compiling error(Y)")));
                come_exception_var_c30_1267=multiple_assign_var56->v1;
                Err_1268=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1268)?(puts(Err_1268),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value1034,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1268 = come_decrement_ref_count(Err_1268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1264,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1265) ? node_1265 = come_decrement_ref_count(node_1265, ((struct sNode*)node_1265)->finalize, ((struct sNode*)node_1265)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1231=fun2_1263;
        }
        __dec_obj255=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1251);
        __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1250;
        __dec_obj256=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1252);
        /*b*/ come_call_finalizer3(__dec_obj256,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1249;
        info->head=head_1253;
        info->sline=sline_1250;
        /*c*/ come_call_finalizer3(source_1242,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1251 = come_decrement_ref_count(sname_1251, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1252,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1254,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1255,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1256 = come_decrement_ref_count(name_1256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1257,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1258,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1261,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1262,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1263,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1230;
    __dec_obj257=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1227);
    __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj258=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1228);
    __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1229;
    __result_obj__369 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1036=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3930, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_1231,(char*)come_increment_ref_count(real_fun_name_1232)))));
    (last_code_1227 = come_decrement_ref_count(last_code_1227, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1228 = come_decrement_ref_count(last_code2_1228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1232 = come_decrement_ref_count(real_fun_name_1232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1233,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value1036,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__369,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__369;
}

