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

int gRightValueNum=0;
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
void free_objects_of_match_lv_tables(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self);
static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self);
static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph_next(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph_length(struct list$1sNode$ph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self);
static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self);
static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self);
static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
void drop_object(struct sType* type, char* obj, struct sInfo* info);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
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
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1105, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1115, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1125, "struct list_item$1char$*"))));
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
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1105, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1115, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1125, "struct list_item$1char$p*"))));
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
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1105, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1115, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1125, "struct list_item$1short$*"))));
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
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1105, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1115, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1125, "struct list_item$1int$*"))));
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
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1105, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1115, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1125, "struct list_item$1long$*"))));
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
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1105, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1115, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1125, "struct list_item$1float$*"))));
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
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1105, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1115, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1125, "struct list_item$1double$*"))));
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
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1105, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1115, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1125, "struct list_item$1char$ph*"))));
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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_239;
struct list$1sRightValueObject$ph* o2_saved_240;
struct sRightValueObject* it2_243;
char* __dec_obj16;
void* __right_value187 = (void*)0;
char* __dec_obj17;
void* __right_value188 = (void*)0;
char* __dec_obj18;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_239=right_value->right_value_objects;
        for(        o2_saved_240=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it2_243=list$1sRightValueObject$ph_begin((o2_saved_240));        !list$1sRightValueObject$ph_end((o2_saved_240));        it2_243=list$1sRightValueObject$ph_next((o2_saved_240))        ){
            if(            it_239->mID==it2_243->mID) {
                it2_243->mStored=(_Bool)1;
                break;
            }
        }
        /*c*/ come_call_finalizer3(o2_saved_240,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj16=right_value->c_value,
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        gComeDebug) {
            __dec_obj17=right_value->c_value,
            right_value->c_value=(char*)come_increment_ref_count(append_stackframe(right_value->c_value,right_value->type,info));
            __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    __dec_obj18=right_value->c_value,
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_begin(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_241;
struct sRightValueObject* __result_obj__163;
struct sRightValueObject* __result_obj__164;
struct sRightValueObject* result_242;
struct sRightValueObject* __result_obj__165;
result_241 = (void*)0;
result_242 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_241,0,sizeof(struct sRightValueObject*));
        __result_obj__163 = result_241;
        return __result_obj__163;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__164 = self->it->item;
        return __result_obj__164;
    }
    memset(&result_242,0,sizeof(struct sRightValueObject*));
    __result_obj__165 = result_242;
    return __result_obj__165;
}

static _Bool list$1sRightValueObject$ph_end(struct list$1sRightValueObject$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObject$ph_next(struct list$1sRightValueObject$ph* self){
struct sRightValueObject* result_244;
struct sRightValueObject* __result_obj__166;
struct sRightValueObject* __result_obj__167;
struct sRightValueObject* result_245;
struct sRightValueObject* __result_obj__168;
result_244 = (void*)0;
result_245 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_244,0,sizeof(struct sRightValueObject*));
        __result_obj__166 = result_244;
        return __result_obj__166;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__167 = self->it->item;
        return __result_obj__167;
    }
    memset(&result_245,0,sizeof(struct sRightValueObject*));
    __result_obj__168 = result_245;
    return __result_obj__168;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_246;
struct list_item$1sRightValueObject$ph* prev_it_247;
    it_246=self->head;
    while(it_246!=((void*)0)) {
        prev_it_247=it_246;
        it_246=it_246->next;
        /*c*/ come_call_finalizer3(prev_it_247,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
    if(    self!=((void*)0)&&self->mObjType!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mObjType,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mObjValue!=((void*)0)) {
        (self->mObjValue = come_decrement_ref_count(self->mObjValue, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct list_item$1sType$ph* it_248;
struct list_item$1sType$ph* prev_it_249;
    it_248=self->head;
    while(it_248!=((void*)0)) {
        prev_it_249=it_248;
        it_248=it_248->next;
        /*c*/ come_call_finalizer3(prev_it_249,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_250;
struct list_item$1sNode$ph* prev_it_251;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        /*c*/ come_call_finalizer3(prev_it_251,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value227 = (void*)0;
struct sType* result_252;
struct sType* __result_obj__184;
struct sType* __result_obj__185;
struct sClass* klass_276;
void* __right_value228 = (void*)0;
struct sType* result_type_277;
struct sType* __dec_obj43;
struct list$1sType$ph* o2_saved_280;
struct sType* it_283;
void* __right_value229 = (void*)0;
struct sType* new_param_type_286;
int generics_number_290;
void* __right_value233 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_291=0;
char* Err_292=0;
struct list$1sNode$ph* array_num_293;
_Bool immutable__294;
int pointer_num_295;
_Bool heap_296;
_Bool deffer_right_value_297;
_Bool exception__298;
_Bool guard__299;
_Bool no_heap_300;
_Bool no_calling_destructor_301;
_Bool null_value_302;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* __dec_obj47;
struct list$1sNode$ph* __dec_obj48;
int generics_number_306;
void* __right_value236 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_307=0;
char* Err_308=0;
void* __right_value237 = (void*)0;
struct sClass* klass2_309;
int generics_number2_310;
struct list$1sNode$ph* array_num_311;
_Bool immutable__312;
int pointer_num_313;
_Bool heap_314;
_Bool deffer_right_value_315;
_Bool guard__316;
_Bool no_heap_317;
_Bool no_calling_destructor_318;
_Bool null_value_319;
_Bool record__320;
_Bool multiple_types_321;
_Bool exception__322;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sType* __dec_obj49;
struct list$1sNode$ph* __dec_obj50;
struct list$1sType$ph* o2_saved_323;
struct sType* it_324;
void* __right_value240 = (void*)0;
struct sType* type_325;
void* __right_value241 = (void*)0;
char* new_name_326;
struct sType* __result_obj__196;
    result_252=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type==((void*)0)) {
        __result_obj__184 = (struct sType*)come_increment_ref_count(result_252);
        /*c*/ come_call_finalizer3(result_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__184,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__184;
    }
    if(    list$1sType$ph_length(generics_type->mGenericsTypes)==0) {
        __result_obj__185 = (struct sType*)come_increment_ref_count(result_252);
        /*c*/ come_call_finalizer3(result_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__185,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__185;
    }
    klass_276=type->mClass;
    if(    string_operator_equals(klass_276->mName,"lambda")) {
        result_type_277=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType,generics_type,info));
        __dec_obj43=result_252->mResultType,
        result_252->mResultType=(struct sType*)come_increment_ref_count(result_type_277);
        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1sType$ph_reset(result_252->mParamTypes);
        for(        o2_saved_280=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_283=list$1sType$ph_begin((o2_saved_280));        !list$1sType$ph_end((o2_saved_280));        it_283=list$1sType$ph_next((o2_saved_280))        ){
            new_param_type_286=(struct sType*)come_increment_ref_count(solve_generics(it_283,generics_type,info));
            list$1sType$ph_push_back(result_252->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_286));
            /*c*/ come_call_finalizer3(new_param_type_286,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_280,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_277,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    klass_276->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
        generics_number_290=klass_276->mMethodGenericsNum;
        if(        generics_number_290>=list$1sType$ph_length(info->method_generics_types)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value233=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_290,list$1sType$ph_length(info->method_generics_types))));
            come_exception_var_c1_291=multiple_assign_var1->v1;
            Err_292=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            ((Err_292)?(puts(Err_292),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value233,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_292 = come_decrement_ref_count(Err_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        array_num_293=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__294=type->mImmutable;
        pointer_num_295=type->mPointerNum;
        heap_296=type->mHeap;
        deffer_right_value_297=type->mDefferRightValue;
        exception__298=type->mException;
        guard__299=type->mGuardValue;
        no_heap_300=type->mNoHeap;
        no_calling_destructor_301=type->mNoCallingDestructor;
        null_value_302=type->mNullValue;
        __dec_obj47=result_252,
        result_252=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value234=list$1sType$ph$p_operator_load_element(info->method_generics_types,generics_number_290)))));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(__right_value234,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        heap_296) {
            result_252->mHeap=heap_296;
        }
        if(        guard__299) {
            result_252->mGuardValue=guard__299;
        }
        if(        deffer_right_value_297) {
            result_252->mDefferRightValue=deffer_right_value_297||result_252->mDefferRightValue;
        }
        if(        no_heap_300) {
            result_252->mNoHeap=(_Bool)1;
            result_252->mHeap=(_Bool)0;
        }
        if(        exception__298) {
            result_252->mException=(_Bool)1;
        }
        if(        no_calling_destructor_301) {
            result_252->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__294) {
            result_252->mImmutable=immutable__294;
        }
        if(        list$1sNode$ph_length(array_num_293)>0) {
            __dec_obj48=result_252->mArrayNum,
            result_252->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_293);
            /*b*/ come_call_finalizer3(__dec_obj48,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_302) {
            result_252->mNullValue=null_value_302;
        }
        if(        pointer_num_295>0) {
            result_252->mPointerNum+=pointer_num_295;
        }
        /*c*/ come_call_finalizer3(array_num_293,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    klass_276->mGenerics) {
        generics_number_306=klass_276->mGenericsNum;
        if(        generics_number_306>=list$1sType$ph_length(generics_type->mGenericsTypes)) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value236=err_msg(info,"invalid generics parametor number")));
            come_exception_var_c2_307=multiple_assign_var2->v1;
            Err_308=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            ((Err_308)?(puts(Err_308),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value236,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_308 = come_decrement_ref_count(Err_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        klass2_309=((struct sType*)(__right_value237=list$1sType$ph$p_operator_load_element(generics_type->mGenericsTypes,generics_number_306)))->mClass;
        /*c*/ come_call_finalizer3(__right_value237,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        generics_number2_310=klass2_309->mGenericsNum;
        if(        generics_number_306!=generics_number2_310) {
            array_num_311=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
            immutable__312=type->mImmutable;
            pointer_num_313=type->mPointerNum;
            heap_314=type->mHeap;
            deffer_right_value_315=type->mDefferRightValue;
            guard__316=type->mGuardValue;
            no_heap_317=type->mNoHeap;
            no_calling_destructor_318=type->mNoCallingDestructor;
            null_value_319=type->mNullValue;
            record__320=type->mRecord;
            multiple_types_321=type->mMultipleTypes;
            exception__322=type->mException;
            __dec_obj49=result_252,
            result_252=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value238=list$1sType$ph$p_operator_load_element(generics_type->mGenericsTypes,generics_number_306)))));
            /*b*/ come_call_finalizer3(__dec_obj49,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            /*c*/ come_call_finalizer3(__right_value238,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            heap_314) {
                result_252->mHeap=heap_314;
            }
            if(            deffer_right_value_315) {
                result_252->mDefferRightValue=deffer_right_value_315||result_252->mDefferRightValue;
            }
            if(            exception__322) {
                result_252->mException=exception__322;
            }
            if(            guard__316) {
                result_252->mGuardValue=guard__316;
            }
            if(            record__320) {
                result_252->mRecord=record__320;
            }
            if(            no_heap_317) {
                result_252->mNoHeap=(_Bool)1;
                result_252->mHeap=(_Bool)0;
            }
            if(            multiple_types_321) {
                result_252->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_318) {
                result_252->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__312) {
                result_252->mImmutable=immutable__312;
            }
            if(            list$1sNode$ph_length(array_num_311)>0) {
                __dec_obj50=result_252->mArrayNum,
                result_252->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_311);
                /*b*/ come_call_finalizer3(__dec_obj50,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            if(            null_value_319) {
                result_252->mNullValue=null_value_319;
            }
            if(            pointer_num_313>0) {
                result_252->mPointerNum+=pointer_num_313;
            }
            /*c*/ come_call_finalizer3(array_num_311,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        list$1sType$ph_reset(result_252->mGenericsTypes);
        for(        o2_saved_323=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_324=list$1sType$ph_begin((o2_saved_323));        !list$1sType$ph_end((o2_saved_323));        it_324=list$1sType$ph_next((o2_saved_323))        ){
            type_325=(struct sType*)come_increment_ref_count(solve_generics(it_324,generics_type,info));
            list$1sType$ph_push_back(result_252->mGenericsTypes,(struct sType*)come_increment_ref_count(type_325));
            /*c*/ come_call_finalizer3(type_325,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_323,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !output_generics_struct(result_252,generics_type,info)) {
            new_name_326=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_326);
            exit(1);
            (new_name_326 = come_decrement_ref_count(new_name_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __result_obj__196 = (struct sType*)come_increment_ref_count(result_252);
    /*c*/ come_call_finalizer3(result_252,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__169;
void* __right_value189 = (void*)0;
struct sType* result_253;
void* __right_value190 = (void*)0;
struct sType* __dec_obj19;
void* __right_value191 = (void*)0;
struct sType* __dec_obj20;
void* __right_value199 = (void*)0;
struct list$1sType$ph* __dec_obj24;
void* __right_value200 = (void*)0;
struct sType* __dec_obj25;
void* __right_value201 = (void*)0;
struct sType* __dec_obj26;
void* __right_value203 = (void*)0;
struct sNode* __dec_obj27;
void* __right_value204 = (void*)0;
struct sNode* __dec_obj28;
void* __right_value205 = (void*)0;
char* __dec_obj29;
void* __right_value206 = (void*)0;
char* __dec_obj30;
void* __right_value207 = (void*)0;
char* __dec_obj31;
void* __right_value215 = (void*)0;
struct list$1sNode$ph* __dec_obj35;
void* __right_value216 = (void*)0;
char* __dec_obj36;
void* __right_value217 = (void*)0;
struct list$1sType$ph* __dec_obj37;
void* __right_value225 = (void*)0;
struct list$1char$ph* __dec_obj41;
void* __right_value226 = (void*)0;
struct sType* __dec_obj42;
struct sType* __result_obj__183;
    if(    self==(void*)0) {
        __result_obj__169 = (void*)0;
        return __result_obj__169;
    }
    result_253=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_253->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj19=result_253->mOriginalLoadVarType,
        result_253->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj20=result_253->mChannelType,
        result_253->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj24=result_253->mGenericsTypes,
        result_253->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj25=result_253->mNoSolvedGenericsType,
        result_253->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj26=result_253->mAnyOriginalType,
        result_253->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj27=result_253->mSizeNum,
        result_253->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj28=result_253->mAlignas,
        result_253->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj29=result_253->mTupleName,
        result_253->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj30=result_253->mAttribute,
        result_253->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_253->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_253->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_253->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_253->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_253->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_253->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_253->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_253->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_253->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_253->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_253->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_253->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_253->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_253->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_253->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_253->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_253->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_253->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_253->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_253->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_253->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_253->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_253->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj31=result_253->mAsmName,
        result_253->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_253->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_253->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj35=result_253->mArrayNum,
        result_253->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_253->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj36=result_253->mOriginalTypeName,
        result_253->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_253->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_253->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_253->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj37=result_253->mParamTypes,
        result_253->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj37,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj41=result_253->mParamNames,
        result_253->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj42=result_253->mResultType,
        result_253->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_253->mVarArgs=self->mVarArgs;
    }
    __result_obj__183 = result_253;
    /*c*/ come_call_finalizer3(result_253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__170;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct list$1sType$ph* result_254;
struct list_item$1sType$ph* it_255;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1sType$ph* __result_obj__173;
    if(    self==((void*)0)) {
        __result_obj__170 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__170,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__170;
    }
    result_254=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1016, "struct list$1sType$ph*"))));
    it_255=self->head;
    while(it_255!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_254,(struct sType*)come_increment_ref_count(sType_clone(it_255->item)));
        }
        else {
            list$1sType$ph_add(result_254,(struct sType*)come_increment_ref_count(sType_clone(it_255->item)));
        }
        it_255=it_255->next;
    }
    __result_obj__173 = (struct list$1sType$ph*)come_increment_ref_count(result_254);
    /*c*/ come_call_finalizer3(result_254,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value194 = (void*)0;
struct list_item$1sType$ph* litem_256;
struct sType* __dec_obj21;
void* __right_value195 = (void*)0;
struct list_item$1sType$ph* litem_257;
struct sType* __dec_obj22;
void* __right_value196 = (void*)0;
struct list_item$1sType$ph* litem_258;
struct sType* __dec_obj23;
struct list$1sType$ph* __result_obj__172;
    if(    self->len==0) {
        litem_256=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value194=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1035, "struct list_item$1sType$ph*"))));
        litem_256->prev=((void*)0);
        litem_256->next=((void*)0);
        __dec_obj21=litem_256->item,
        litem_256->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_256;
        self->head=litem_256;
    }
    else if(    self->len==1) {
        litem_257=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value195=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1045, "struct list_item$1sType$ph*"))));
        litem_257->prev=self->head;
        litem_257->next=((void*)0);
        __dec_obj22=litem_257->item,
        litem_257->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_257;
        self->head->next=litem_257;
    }
    else {
        litem_258=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value196=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1055, "struct list_item$1sType$ph*"))));
        litem_258->prev=self->tail;
        litem_258->next=((void*)0);
        __dec_obj23=litem_258->item,
        litem_258->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_258;
        self->tail=litem_258;
    }
    self->len++;
    __result_obj__172 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__172;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_259;
struct list_item$1sType$ph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*c*/ come_call_finalizer3(prev_it_260,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__174;
void* __right_value202 = (void*)0;
struct sNode* result_261;
struct sNode* __result_obj__175;
    if(    self==(void*)0) {
        __result_obj__174 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__174) ? __result_obj__174 = come_decrement_ref_count(__result_obj__174, ((struct sNode*)__result_obj__174)->finalize, ((struct sNode*)__result_obj__174)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__174;
    }
    result_261=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_261->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_261->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_261->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_261->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_261->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_261->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_261->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_261->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_261->kind=self->kind;
    }
    __result_obj__175 = (struct sNode*)come_increment_ref_count(result_261);
    ((result_261) ? result_261 = come_decrement_ref_count(result_261, ((struct sNode*)result_261)->finalize, ((struct sNode*)result_261)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__175) ? __result_obj__175 = come_decrement_ref_count(__result_obj__175, ((struct sNode*)__result_obj__175)->finalize, ((struct sNode*)__result_obj__175)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__175;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__176;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct list$1sNode$ph* result_262;
struct list_item$1sNode$ph* it_263;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sNode$ph* __result_obj__179;
    if(    self==((void*)0)) {
        __result_obj__176 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__176,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__176;
    }
    result_262=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1016, "struct list$1sNode$ph*"))));
    it_263=self->head;
    while(it_263!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_262,(struct sNode*)come_increment_ref_count(sNode_clone(it_263->item)));
        }
        else {
            list$1sNode$ph_add(result_262,(struct sNode*)come_increment_ref_count(sNode_clone(it_263->item)));
        }
        it_263=it_263->next;
    }
    __result_obj__179 = (struct list$1sNode$ph*)come_increment_ref_count(result_262);
    /*c*/ come_call_finalizer3(result_262,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__177;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__177 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__177,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__177;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value210 = (void*)0;
struct list_item$1sNode$ph* litem_264;
struct sNode* __dec_obj32;
void* __right_value211 = (void*)0;
struct list_item$1sNode$ph* litem_265;
struct sNode* __dec_obj33;
void* __right_value212 = (void*)0;
struct list_item$1sNode$ph* litem_266;
struct sNode* __dec_obj34;
struct list$1sNode$ph* __result_obj__178;
    if(    self->len==0) {
        litem_264=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value210=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1035, "struct list_item$1sNode$ph*"))));
        litem_264->prev=((void*)0);
        litem_264->next=((void*)0);
        __dec_obj32=litem_264->item,
        litem_264->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_264;
        self->head=litem_264;
    }
    else if(    self->len==1) {
        litem_265=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value211=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1045, "struct list_item$1sNode$ph*"))));
        litem_265->prev=self->head;
        litem_265->next=((void*)0);
        __dec_obj33=litem_265->item,
        litem_265->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_265;
        self->head->next=litem_265;
    }
    else {
        litem_266=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value212=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1055, "struct list_item$1sNode$ph*"))));
        litem_266->prev=self->tail;
        litem_266->next=((void*)0);
        __dec_obj34=litem_266->item,
        litem_266->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_266;
        self->tail=litem_266;
    }
    self->len++;
    __result_obj__178 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__178;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_267;
struct list_item$1sNode$ph* prev_it_268;
    it_267=self->head;
    while(it_267!=((void*)0)) {
        prev_it_268=it_267;
        it_267=it_267->next;
        /*c*/ come_call_finalizer3(prev_it_268,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__180;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1char$ph* result_269;
struct list_item$1char$ph* it_270;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1char$ph* __result_obj__182;
    if(    self==((void*)0)) {
        __result_obj__180 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__180;
    }
    result_269=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1016, "struct list$1char$ph*"))));
    it_270=self->head;
    while(it_270!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_269,(char*)come_increment_ref_count((char*)come_memdup(it_270->item, "./comelang.h", 1021, "char*")));
        }
        else {
            list$1char$ph_add(result_269,(char*)come_increment_ref_count((char*)come_memdup(it_270->item, "./comelang.h", 1024, "char*")));
        }
        it_270=it_270->next;
    }
    __result_obj__182 = (struct list$1char$ph*)come_increment_ref_count(result_269);
    /*c*/ come_call_finalizer3(result_269,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__182,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value220 = (void*)0;
struct list_item$1char$ph* litem_271;
char* __dec_obj38;
void* __right_value221 = (void*)0;
struct list_item$1char$ph* litem_272;
char* __dec_obj39;
void* __right_value222 = (void*)0;
struct list_item$1char$ph* litem_273;
char* __dec_obj40;
struct list$1char$ph* __result_obj__181;
    if(    self->len==0) {
        litem_271=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value220=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1035, "struct list_item$1char$ph*"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj38=litem_271->item,
        litem_271->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1) {
        litem_272=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value221=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1045, "struct list_item$1char$ph*"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj39=litem_272->item,
        litem_272->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value222=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1055, "struct list_item$1char$ph*"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj40=litem_273->item,
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result_obj__181 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__181;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_274;
struct list_item$1char$ph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*c*/ come_call_finalizer3(prev_it_275,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_278;
struct list_item$1sType$ph* prev_it_279;
struct list$1sType$ph* __result_obj__186;
    it_278=self->head;
    while(it_278!=((void*)0)) {
        prev_it_279=it_278;
        it_278=it_278->next;
        /*c*/ come_call_finalizer3(prev_it_279,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__186 = self;
    return __result_obj__186;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_281;
struct sType* __result_obj__187;
struct sType* __result_obj__188;
struct sType* result_282;
struct sType* __result_obj__189;
result_281 = (void*)0;
result_282 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_281,0,sizeof(struct sType*));
        __result_obj__187 = result_281;
        return __result_obj__187;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__188 = self->it->item;
        return __result_obj__188;
    }
    memset(&result_282,0,sizeof(struct sType*));
    __result_obj__189 = result_282;
    return __result_obj__189;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_284;
struct sType* __result_obj__190;
struct sType* __result_obj__191;
struct sType* result_285;
struct sType* __result_obj__192;
result_284 = (void*)0;
result_285 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_284,0,sizeof(struct sType*));
        __result_obj__190 = result_284;
        return __result_obj__190;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__191 = self->it->item;
        return __result_obj__191;
    }
    memset(&result_285,0,sizeof(struct sType*));
    __result_obj__192 = result_285;
    return __result_obj__192;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value230 = (void*)0;
struct list_item$1sType$ph* litem_287;
struct sType* __dec_obj44;
void* __right_value231 = (void*)0;
struct list_item$1sType$ph* litem_288;
struct sType* __dec_obj45;
void* __right_value232 = (void*)0;
struct list_item$1sType$ph* litem_289;
struct sType* __dec_obj46;
struct list$1sType$ph* __result_obj__193;
    if(    self->len==0) {
        litem_287=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value230=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1105, "struct list_item$1sType$ph*"))));
        litem_287->prev=((void*)0);
        litem_287->next=((void*)0);
        __dec_obj44=litem_287->item,
        litem_287->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_287;
        self->head=litem_287;
    }
    else if(    self->len==1) {
        litem_288=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value231=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1115, "struct list_item$1sType$ph*"))));
        litem_288->prev=self->head;
        litem_288->next=((void*)0);
        __dec_obj45=litem_288->item,
        litem_288->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_288;
        self->head->next=litem_288;
    }
    else {
        litem_289=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value232=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1125, "struct list_item$1sType$ph*"))));
        litem_289->prev=self->tail;
        litem_289->next=((void*)0);
        __dec_obj46=litem_289->item,
        litem_289->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_289;
        self->tail=litem_289;
    }
    self->len++;
    __result_obj__193 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_303;
int i_304;
struct sType* __result_obj__194;
struct sType* default_value_305;
struct sType* __result_obj__195;
default_value_305 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_303=self->head;
    i_304=0;
    while(it_303!=((void*)0)) {
        if(        position==i_304) {
            __result_obj__194 = (struct sType*)come_increment_ref_count(it_303->item);
            /*c*/ come_call_finalizer3(__result_obj__194,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__194;
        }
        it_303=it_303->next;
        i_304++;
    }
    memset(&default_value_305,0,sizeof(struct sType*));
    __result_obj__195 = (struct sType*)come_increment_ref_count(default_value_305);
    /*c*/ come_call_finalizer3(default_value_305,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__195,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __right_value242 = (void*)0;
struct sType* result_327;
struct sClass* klass_328;
int generics_number_329;
void* __right_value243 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_330=0;
char* Err_331=0;
struct list$1sNode$ph* array_num_332;
_Bool immutable__333;
int pointer_num_334;
_Bool heap_335;
_Bool deffer_right_value_336;
_Bool guard__337;
_Bool no_heap_338;
_Bool no_calling_destructor_339;
_Bool null_value_340;
_Bool exception__341;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* __dec_obj51;
struct list$1sNode$ph* __dec_obj52;
int i_342;
struct list$1sType$ph* o2_saved_343;
struct sType* it_344;
void* __right_value246 = (void*)0;
struct list$1sType$ph* o2_saved_350;
struct sType* it_351;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sType* __dec_obj54;
struct sType* __result_obj__199;
    result_327=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_328=type->mClass;
    if(    klass_328->mMethodGenerics&&info->method_generics_types&&list$1sType$ph_length(info->method_generics_types)>0) {
        generics_number_329=klass_328->mMethodGenericsNum;
        if(        generics_number_329>=list$1sType$ph_length(info->method_generics_types)) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value243=err_msg(info,"invalid method generics parametor number. %d %d",generics_number_329,list$1sType$ph_length(info->method_generics_types))));
            come_exception_var_c3_330=multiple_assign_var3->v1;
            Err_331=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_331)?(puts(Err_331),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value243,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(2);
            (Err_331 = come_decrement_ref_count(Err_331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        array_num_332=(struct list$1sNode$ph*)come_increment_ref_count(type->mArrayNum);
        immutable__333=type->mImmutable;
        pointer_num_334=type->mPointerNum;
        heap_335=type->mHeap;
        deffer_right_value_336=type->mDefferRightValue;
        guard__337=type->mGuardValue;
        no_heap_338=type->mNoHeap;
        no_calling_destructor_339=type->mNoCallingDestructor;
        null_value_340=type->mNullValue;
        exception__341=type->mException;
        __dec_obj51=result_327,
        result_327=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)(__right_value244=list$1sType$ph$p_operator_load_element(info->method_generics_types,generics_number_329)))));
        /*b*/ come_call_finalizer3(__dec_obj51,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(__right_value244,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        deffer_right_value_336) {
            result_327->mDefferRightValue=deffer_right_value_336||result_327->mDefferRightValue;
        }
        if(        heap_335) {
            result_327->mHeap=heap_335||result_327->mHeap;
        }
        if(        exception__341) {
            result_327->mException=exception__341;
        }
        if(        guard__337) {
            result_327->mGuardValue=guard__337||result_327->mGuardValue;
        }
        if(        no_heap_338) {
            result_327->mNoHeap=(_Bool)1;
            result_327->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_339) {
            result_327->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__333) {
            result_327->mImmutable=immutable__333;
        }
        if(        list$1sNode$ph_length(array_num_332)>0) {
            __dec_obj52=result_327->mArrayNum,
            result_327->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(array_num_332);
            /*b*/ come_call_finalizer3(__dec_obj52,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        if(        null_value_340) {
            result_327->mNullValue=null_value_340;
        }
        if(        pointer_num_334>0) {
            result_327->mPointerNum+=pointer_num_334;
        }
        /*c*/ come_call_finalizer3(array_num_332,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    i_342=0;
    for(    o2_saved_343=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_344=list$1sType$ph_begin((o2_saved_343));    !list$1sType$ph_end((o2_saved_343));    it_344=list$1sType$ph_next((o2_saved_343))    ){
        list$1sType$ph$p_operator_store_element(result_327->mGenericsTypes,i_342,(struct sType*)come_increment_ref_count(solve_method_generics(it_344,info)));
        i_342++;
    }
    /*c*/ come_call_finalizer3(o2_saved_343,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    i_342=0;
    for(    o2_saved_350=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_351=list$1sType$ph_begin((o2_saved_350));    !list$1sType$ph_end((o2_saved_350));    it_351=list$1sType$ph_next((o2_saved_350))    ){
        list$1sType$ph$p_operator_store_element(result_327->mParamTypes,i_342,(struct sType*)come_increment_ref_count(solve_method_generics(it_351,info)));
        i_342++;
    }
    /*c*/ come_call_finalizer3(o2_saved_350,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    type->mResultType) {
        __dec_obj54=result_327->mResultType,
        result_327->mResultType=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType,info));
        /*b*/ come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__199 = (struct sType*)come_increment_ref_count(result_327);
    /*c*/ come_call_finalizer3(result_327,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_345;
int i_346;
struct sType* default_value_347;
struct list$1sType$ph* __result_obj__197;
struct list_item$1sType$ph* it_348;
int i_349;
struct sType* __dec_obj53;
struct list$1sType$ph* __result_obj__198;
default_value_347 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_345=self->len;
        for(        i_346=0;        i_346<position-len_345;        i_346++        ){
            memset(&default_value_347,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_347));
            /*c*/ come_call_finalizer3(default_value_347,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__197 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__197;
    }
    it_348=self->head;
    i_349=0;
    while(it_348!=((void*)0)) {
        if(        position==i_349) {
            __dec_obj53=it_348->item,
            it_348->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_348=it_348->next;
        i_349++;
    }
    __result_obj__198 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count, struct sType* obj_type, char* obj_value){
void* __right_value249 = (void*)0;
struct sRightValueObject* new_value_352;
struct sType* __dec_obj55;
void* __right_value250 = (void*)0;
char* __dec_obj56;
char* __dec_obj57;
struct sType* __dec_obj58;
void* __right_value251 = (void*)0;
char* __dec_obj59;
void* __right_value255 = (void*)0;
char* buf_356;
void* __right_value256 = (void*)0;
char* __dec_obj63;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
char* __dec_obj64;
    if(    gComeGC||gComeC) {
        /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return;
    }
    new_value_352=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc_v2(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 292, "struct sRightValueObject*"));
    __dec_obj55=new_value_352->mType,
    new_value_352->mType=(struct sType*)come_increment_ref_count(type);
    /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    new_value_352->mFreed=(_Bool)0;
    new_value_352->mID=gRightValueNum;
    __dec_obj56=new_value_352->mVarName,
    new_value_352->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=new_value_352->mFunName,
    new_value_352->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    new_value_352->mBlockLevel=info->block_level;
    new_value_352->mDecrementRefCount=decrement_ref_count;
    if(    obj_value) {
        __dec_obj58=new_value_352->mObjType,
        new_value_352->mObjType=(struct sType*)come_increment_ref_count(obj_type);
        /*b*/ come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj59=new_value_352->mObjValue,
        new_value_352->mObjValue=(char*)come_increment_ref_count(__builtin_string(obj_value));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !type->mHeap) {
            new_value_352->mNoFree=(_Bool)1;
        }
    }
    list$1sRightValueObject$ph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_352));
    if(    type->mPointerNum>0) {
        buf_356=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
        add_come_code_at_function_head(info,buf_356);
        __dec_obj63=come_value->c_value_without_right_value_objects,
        come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(come_value->c_value, "04heap.c", 317, "char*"));
        __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj64=come_value->c_value,
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value257=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_352->mVarName,come_value->c_value));
        __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value->right_value_objects=new_value_352;
        (buf_356 = come_decrement_ref_count(buf_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(new_value_352,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_push_back(struct list$1sRightValueObject$ph* self, struct sRightValueObject* item){
void* __right_value252 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_353;
struct sRightValueObject* __dec_obj60;
void* __right_value253 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_354;
struct sRightValueObject* __dec_obj61;
void* __right_value254 = (void*)0;
struct list_item$1sRightValueObject$ph* litem_355;
struct sRightValueObject* __dec_obj62;
struct list$1sRightValueObject$ph* __result_obj__200;
    if(    self->len==0) {
        litem_353=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value252=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1105, "struct list_item$1sRightValueObject$ph*"))));
        litem_353->prev=((void*)0);
        litem_353->next=((void*)0);
        __dec_obj60=litem_353->item,
        litem_353->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj60,sRightValueObject_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1) {
        litem_354=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value253=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1115, "struct list_item$1sRightValueObject$ph*"))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj61=litem_354->item,
        litem_354->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj61,sRightValueObject_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1sRightValueObject$ph*)come_increment_ref_count(((struct list_item$1sRightValueObject$ph*)(__right_value254=(struct list_item$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list_item$1sRightValueObject$ph)*(1), "./comelang.h", 1125, "struct list_item$1sRightValueObject$ph*"))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj62=litem_355->item,
        litem_355->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj62,sRightValueObject_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result_obj__200 = self;
    /*c*/ come_call_finalizer3(item,sRightValueObject_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__200;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_357;
struct list$1sRightValueObject$ph* o2_saved_358;
struct sRightValueObject* it_359;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_357=0;
    for(    o2_saved_358=(struct list$1sRightValueObject$ph*)come_increment_ref_count((info->right_value_objects)),it_359=list$1sRightValueObject$ph_begin((o2_saved_358));    !list$1sRightValueObject$ph_end((o2_saved_358));    it_359=list$1sRightValueObject$ph_next((o2_saved_358))    ){
        if(        it_359->mID==right_value_num) {
            break;
        }
        i_357++;
    }
    /*c*/ come_call_finalizer3(o2_saved_358,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1sRightValueObject$ph_delete(info->right_value_objects,i_357,i_357+1);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_delete(struct list$1sRightValueObject$ph* self, int head, int tail){
int tmp_360;
struct list$1sRightValueObject$ph* __result_obj__201;
struct list_item$1sRightValueObject$ph* it_363;
int i_364;
struct list_item$1sRightValueObject$ph* prev_it_365;
struct list_item$1sRightValueObject$ph* it_366;
int i_367;
struct list_item$1sRightValueObject$ph* prev_it_368;
struct list_item$1sRightValueObject$ph* it_369;
struct list_item$1sRightValueObject$ph* head_prev_it_370;
struct list_item$1sRightValueObject$ph* tail_it_371;
int i_372;
struct list_item$1sRightValueObject$ph* prev_it_373;
struct list$1sRightValueObject$ph* __result_obj__203;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_360=tail;
        tail=head;
        head=tmp_360;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__201 = self;
        return __result_obj__201;
    }
    if(    head==0&&tail==self->len) {
        list$1sRightValueObject$ph_reset(self);
    }
    else if(    head==0) {
        it_363=self->head;
        i_364=0;
        while(it_363!=((void*)0)) {
            if(            i_364<tail) {
                prev_it_365=it_363;
                it_363=it_363->next;
                i_364++;
                /*c*/ come_call_finalizer3(prev_it_365,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_364==tail) {
                self->head=it_363;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_363=it_363->next;
                i_364++;
            }
        }
    }
    else if(    tail==self->len) {
        it_366=self->head;
        i_367=0;
        while(it_366!=((void*)0)) {
            if(            i_367==head) {
                self->tail=it_366->prev;
                self->tail->next=((void*)0);
            }
            if(            i_367>=head) {
                prev_it_368=it_366;
                it_366=it_366->next;
                i_367++;
                /*c*/ come_call_finalizer3(prev_it_368,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_366=it_366->next;
                i_367++;
            }
        }
    }
    else {
        it_369=self->head;
        head_prev_it_370=((void*)0);
        tail_it_371=((void*)0);
        i_372=0;
        while(it_369!=((void*)0)) {
            if(            i_372==head) {
                head_prev_it_370=it_369->prev;
            }
            if(            i_372==tail) {
                tail_it_371=it_369;
            }
            if(            i_372>=head&&i_372<tail) {
                prev_it_373=it_369;
                it_369=it_369->next;
                i_372++;
                /*c*/ come_call_finalizer3(prev_it_373,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_369=it_369->next;
                i_372++;
            }
        }
        if(        head_prev_it_370!=((void*)0)) {
            head_prev_it_370->next=tail_it_371;
        }
        if(        tail_it_371!=((void*)0)) {
            tail_it_371->prev=head_prev_it_370;
        }
    }
    __result_obj__203 = self;
    return __result_obj__203;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_361;
struct list_item$1sRightValueObject$ph* prev_it_362;
struct list$1sRightValueObject$ph* __result_obj__202;
    it_361=self->head;
    while(it_361!=((void*)0)) {
        prev_it_362=it_361;
        it_361=it_361->next;
        /*c*/ come_call_finalizer3(prev_it_362,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__202 = self;
    return __result_obj__202;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __right_value259 = (void*)0;
char* __result_obj__204;
void* __right_value260 = (void*)0;
char* __result_obj__205;
struct sClass* klass_374;
void* __right_value261 = (void*)0;
char* type_name_375;
void* __right_value262 = (void*)0;
char* __result_obj__206;
    if(    gComeGC||gComeC) {
        __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value259=__builtin_string(obj))));
        (__right_value259 = come_decrement_ref_count(__right_value259, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__204;
    }
    if(    info->no_output_come_code) {
        __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value260=__builtin_string(obj))));
        (__right_value260 = come_decrement_ref_count(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__205;
    }
    klass_374=type->mClass;
    type_name_375=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result_obj__206 = (char*)come_increment_ref_count(((char*)(__right_value262=xsprintf("(%s)come_increment_ref_count(%s)",type_name_375,obj))));
    (type_name_375 = come_decrement_ref_count(type_name_375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__206 = come_decrement_ref_count(__result_obj__206, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__206;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUE$ph* stack_saved_376;
struct list$1sRightValueObject$ph* right_value_objects_377;
struct sClass* klass_378;
void* __right_value263 = (void*)0;
char* name_380;
void* __right_value264 = (void*)0;
_Bool no_decrement_381;
void* __right_value265 = (void*)0;
char* c_value_382;
struct sClass* klass_383;
char* class_name_384;
char* fun_name_385;
void* __right_value266 = (void*)0;
struct sType* type2_386;
void* __right_value267 = (void*)0;
char* fun_name2_387;
struct sFun* finalizer_388;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
char* none_generics_name_392;
void* __right_value270 = (void*)0;
char* generics_fun_name_393;
void* __right_value271 = (void*)0;
struct sGenericsFun* generics_fun_394;
void* __right_value272 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var4 = (void*)0;
char* name_398=0;
_Bool err_399=0;
void* __right_value273 = (void*)0;
int i_400;
void* __right_value274 = (void*)0;
char* new_fun_name_401;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
char* __dec_obj65;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var5 = (void*)0;
struct sFun* fun_402=0;
char* new_fun_name_403=0;
char* __dec_obj66;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
char* type_name_404;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* type_name_405;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* str_406;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* str_407;
struct list$1sRightValueObject$ph* __dec_obj67;
struct list$1CVALUE$ph* __dec_obj68;
memset(&i_400, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_376=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_377=info->right_value_objects;
    klass_378=type->mClass;
    static int dec_num_379=0;
    name_380=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_379));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value264=make_define_var(type,name_380,(_Bool)0,info))));
    (__right_value264 = come_decrement_ref_count(__right_value264, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code(info,"%s=%s,\n",name_380,obj);
    obj=name_380;
    no_decrement_381=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_382=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_383=type->mClass;
        class_name_384=klass_383->mName;
        fun_name_385="finalize";
        type2_386=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_386->mHeap=(_Bool)0;
        fun_name2_387=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_385,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType) {
            type=type->mNoSolvedGenericsType;
        }
        finalizer_388=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0) {
            finalizer_388=((struct sFun*)(__right_value268=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_387)));
            /*c*/ come_call_finalizer3(__right_value268,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_388==((void*)0)) {
                none_generics_name_392=(char*)come_increment_ref_count(get_none_generics_name(type2_386->mClass->mName));
                generics_fun_name_393=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_392,fun_name_385));
                generics_fun_394=((struct sGenericsFun*)(__right_value271=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_393)));
                /*c*/ come_call_finalizer3(__right_value271,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                generics_fun_394) {
                    multiple_assign_var4=((struct tuple2$2char$phbool$*)(__right_value272=create_generics_fun((char*)come_increment_ref_count(fun_name2_387),generics_fun_394,type,info)));
                    name_398=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    err_399=multiple_assign_var4->v2;
                    /*c*/ come_call_finalizer3(__right_value272,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_399) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_388=((struct sFun*)(__right_value273=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_398)));
                    /*c*/ come_call_finalizer3(__right_value273,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_398 = come_decrement_ref_count(name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_392 = come_decrement_ref_count(none_generics_name_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_393 = come_decrement_ref_count(generics_fun_name_393, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_400=128-1;            i_400>=1;            i_400--            ){
                new_fun_name_401=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_387,i_400));
                finalizer_388=((struct sFun*)(__right_value275=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_401)));
                /*c*/ come_call_finalizer3(__right_value275,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                finalizer_388) {
                    __dec_obj65=fun_name2_387,
                    fun_name2_387=(char*)come_increment_ref_count(__builtin_string(new_fun_name_401));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_401 = come_decrement_ref_count(new_fun_name_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_401 = come_decrement_ref_count(new_fun_name_401, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_388==((void*)0)) {
                finalizer_388=((struct sFun*)(__right_value277=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_387)));
                /*c*/ come_call_finalizer3(__right_value277,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        if(        finalizer_388==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0) {
            multiple_assign_var5=((struct tuple2$2sFun$pchar$ph*)(__right_value278=create_finalizer_automatically(type,fun_name_385,info)));
            fun_402=multiple_assign_var5->v1;
            new_fun_name_403=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            /*c*/ come_call_finalizer3(__right_value278,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj66=fun_name2_387,
            fun_name2_387=(char*)come_increment_ref_count(new_fun_name_403);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            finalizer_388=fun_402;
            (new_fun_name_403 = come_decrement_ref_count(new_fun_name_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_388!=((void*)0)||(finalizer_388==((void*)0)&&string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==1)) {
            if(            string_operator_equals(type->mClass->mName,"void")) {
                if(                c_value_382) {
                    add_come_last_code2(info,((char*)(__right_value284=xsprintf("/*a*/ come_call_finalizer3(\%s,(void*)0, \%s/*alloca value*/, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, (void*)0)",((char*)(__right_value279=string_to_string(c_value_382))),((char*)(__right_value280=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value281=int_to_string(((no_decrement_381)?(1):(0))))),((char*)(__right_value282=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value283=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value279 = come_decrement_ref_count(__right_value279, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value283 = come_decrement_ref_count(__right_value283, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            else if(            klass_383->mProtocol&&type->mPointerNum==1) {
                type_name_404=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_382) {
                    add_come_last_code2(info,((char*)(__right_value298=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, \%s/*alloca value*/, \%s/* no decrement }/, \%s/*no_free*/, \%s/* force_delete */, (void*)0)",((char*)(__right_value286=string_to_string(fun_name2_387))),((char*)(__right_value287=string_to_string(c_value_382))),((char*)(__right_value288=string_to_string(c_value_382))),((char*)(__right_value289=string_to_string(type_name_404))),((char*)(__right_value290=string_to_string(c_value_382))),((char*)(__right_value291=string_to_string(c_value_382))),((char*)(__right_value292=string_to_string(type_name_404))),((char*)(__right_value293=string_to_string(c_value_382))),((char*)(__right_value294=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value295=int_to_string(((no_decrement_381)?(1):(0))))),((char*)(__right_value296=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value297=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value290 = come_decrement_ref_count(__right_value290, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value292 = come_decrement_ref_count(__right_value292, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_404 = come_decrement_ref_count(type_name_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_382) {
                    add_come_last_code2(info,((char*)(__right_value305=xsprintf("/*b*/ come_call_finalizer3(\%s,\%s, \%s/* alloca value */, \%s/* no decrement */, \%s/* no_free */, \%s/* force_delete_ */, (void*)0)",((char*)(__right_value299=string_to_string(c_value_382))),((char*)(__right_value300=string_to_string(fun_name2_387))),((char*)(__right_value301=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value302=int_to_string(((no_decrement_381)?(1):(0))))),((char*)(__right_value303=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value304=int_to_string(((force_delete_)?(1):(0)))))))));
                    (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value300 = come_decrement_ref_count(__right_value300, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value301 = come_decrement_ref_count(__right_value301, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value302 = come_decrement_ref_count(__right_value302, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value304 = come_decrement_ref_count(__right_value304, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_383->mProtocol&&type->mPointerNum==1) {
                type_name_405=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_406=(char*)come_increment_ref_count(xsprintf("(\%s ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0 /* no_decrement */,\%s/* no_free */,0 /*force_delete*/, (void*)0) :0)",((char*)(__right_value307=string_to_string(name_380))),((char*)(__right_value308=string_to_string(name_380))),((char*)(__right_value309=string_to_string(name_380))),((char*)(__right_value310=string_to_string(type_name_405))),((char*)(__right_value311=string_to_string(name_380))),((char*)(__right_value312=string_to_string(type_name_405))),((char*)(__right_value313=string_to_string(name_380))),((char*)(__right_value314=int_to_string(((no_free)?(1):(0)))))));
                (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value308 = come_decrement_ref_count(__right_value308, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value309 = come_decrement_ref_count(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value310 = come_decrement_ref_count(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value312 = come_decrement_ref_count(__right_value312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_last_code2(info,str_406);
                (type_name_405 = come_decrement_ref_count(type_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (str_406 = come_decrement_ref_count(str_406, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                str_407=(char*)come_increment_ref_count(xsprintf(((char*)(__right_value317=xsprintf("%%s = come_decrement_ref_count(%%s, (void*)0, (void*)0, 0/* no_decrement */,\%s/* no_free */,0/*force_delete*/, (void*)0)",((char*)(__right_value316=int_to_string(((no_free)?(1):(0)))))))),name_380,name_380));
                (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                add_come_last_code2(info,str_407);
                (str_407 = come_decrement_ref_count(str_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (c_value_382 = come_decrement_ref_count(c_value_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_386,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_387 = come_decrement_ref_count(fun_name2_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj67=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_377);
    /*b*/ come_call_finalizer3(__dec_obj67,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj68=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_376);
    /*b*/ come_call_finalizer3(__dec_obj68,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    /*c*/ come_call_finalizer3(stack_saved_376,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_380 = come_decrement_ref_count(name_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_389;
unsigned int hash_390;
unsigned int it_391;
struct sFun* __result_obj__207;
struct sFun* __result_obj__208;
struct sFun* __result_obj__209;
struct sFun* __result_obj__210;
default_value_389 = (void*)0;
    memset(&default_value_389,0,sizeof(struct sFun*));
    hash_390=string_get_hash_key(((char*)key))%self->size;
    it_391=hash_390;
    while((_Bool)1) {
        if(        self->item_existance[it_391]) {
            if(            string_equals(self->keys[it_391],key)) {
                __result_obj__207 = (struct sFun*)come_increment_ref_count(self->items[it_391]);
                /*c*/ come_call_finalizer3(default_value_389,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__207,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__207;
            }
            it_391++;
            if(            it_391>=self->size) {
                it_391=0;
            }
            else if(            it_391==hash_390) {
                __result_obj__208 = (struct sFun*)come_increment_ref_count(default_value_389);
                /*c*/ come_call_finalizer3(default_value_389,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__208,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__208;
            }
        }
        else {
            __result_obj__209 = (struct sFun*)come_increment_ref_count(default_value_389);
            /*c*/ come_call_finalizer3(default_value_389,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__209,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__209;
        }
    }
    __result_obj__210 = (struct sFun*)come_increment_ref_count(default_value_389);
    /*c*/ come_call_finalizer3(default_value_389,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__210,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
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

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_395;
unsigned int hash_396;
unsigned int it_397;
struct sGenericsFun* __result_obj__211;
struct sGenericsFun* __result_obj__212;
struct sGenericsFun* __result_obj__213;
struct sGenericsFun* __result_obj__214;
default_value_395 = (void*)0;
    memset(&default_value_395,0,sizeof(struct sGenericsFun*));
    hash_396=string_get_hash_key(((char*)key))%self->size;
    it_397=hash_396;
    while((_Bool)1) {
        if(        self->item_existance[it_397]) {
            if(            string_equals(self->keys[it_397],key)) {
                __result_obj__211 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_397]);
                /*c*/ come_call_finalizer3(default_value_395,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__211,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__211;
            }
            it_397++;
            if(            it_397>=self->size) {
                it_397=0;
            }
            else if(            it_397==hash_396) {
                __result_obj__212 = (struct sGenericsFun*)come_increment_ref_count(default_value_395);
                /*c*/ come_call_finalizer3(default_value_395,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__212,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__212;
            }
        }
        else {
            __result_obj__213 = (struct sGenericsFun*)come_increment_ref_count(default_value_395);
            /*c*/ come_call_finalizer3(default_value_395,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__213,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__213;
        }
    }
    __result_obj__214 = (struct sGenericsFun*)come_increment_ref_count(default_value_395);
    /*c*/ come_call_finalizer3(default_value_395,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__214,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
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

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_408;
struct list_item$1sRightValueObject$ph* prev_it_409;
    it_408=self->head;
    while(it_408!=((void*)0)) {
        prev_it_409=it_408;
        it_408=it_408->next;
        /*c*/ come_call_finalizer3(prev_it_409,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1CVALUE$ph_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_410;
struct list_item$1CVALUE$ph* prev_it_411;
    it_410=self->head;
    while(it_410!=((void*)0)) {
        prev_it_411=it_410;
        it_410=it_410->next;
        /*c*/ come_call_finalizer3(prev_it_411,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_412;
struct list_item$1CVALUE$ph* prev_it_413;
    it_412=self->head;
    while(it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        /*c*/ come_call_finalizer3(prev_it_413,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUE$ph* stack_saved_414;
struct list$1sRightValueObject$ph* right_value_objects_415;
struct sType* type_before_416;
void* __right_value319 = (void*)0;
char* c_value_417;
struct sClass* klass_418;
char* class_name_419;
char* fun_name_420;
void* __right_value320 = (void*)0;
struct sType* type2_421;
void* __right_value321 = (void*)0;
char* fun_name2_422;
struct sFun* finalizer_423;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* none_generics_name_424;
void* __right_value324 = (void*)0;
char* generics_fun_name_425;
void* __right_value325 = (void*)0;
struct sGenericsFun* generics_fun_426;
void* __right_value326 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var6 = (void*)0;
char* name_427=0;
_Bool err_428=0;
void* __right_value327 = (void*)0;
int i_429;
void* __right_value328 = (void*)0;
char* new_fun_name_430;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
char* __dec_obj69;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var7 = (void*)0;
struct sFun* fun_431=0;
char* new_fun_name_432=0;
char* __dec_obj70;
void* __right_value333 = (void*)0;
char* type_name_433;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_434;
struct tuple2$2char$phsType$ph* it_437;
struct tuple2$2char$phsType$ph* multiple_assign_var8 = (void*)0;
char* name_440=0;
struct sType* field_type_441=0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
char* obj_442;
void* __right_value358 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_445;
struct tuple2$2char$phsType$ph* it_446;
struct tuple2$2char$phsType$ph* multiple_assign_var9 = (void*)0;
char* name_447=0;
struct sType* field_type_448=0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
char* obj_449;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
char* type_name_450;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj71;
struct list$1CVALUE$ph* __dec_obj72;
memset(&i_429, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_414=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_415=info->right_value_objects;
    type_before_416=type;
    if(    info->comma_instead_of_semicolon||info->without_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1sType$ph_length(type->mGenericsTypes)>0) {
        c_value_417=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_418=type->mClass;
        class_name_419=klass_418->mName;
        fun_name_420="finalize";
        type2_421=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_421->mHeap=(_Bool)0;
        fun_name2_422=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_420,info,(_Bool)1));
        finalizer_423=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0) {
            finalizer_423=((struct sFun*)(__right_value322=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_422)));
            /*c*/ come_call_finalizer3(__right_value322,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_423==((void*)0)) {
                none_generics_name_424=(char*)come_increment_ref_count(get_none_generics_name(type2_421->mClass->mName));
                generics_fun_name_425=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_424,fun_name_420));
                generics_fun_426=((struct sGenericsFun*)(__right_value325=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_425)));
                /*c*/ come_call_finalizer3(__right_value325,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                generics_fun_426) {
                    multiple_assign_var6=((struct tuple2$2char$phbool$*)(__right_value326=create_generics_fun((char*)come_increment_ref_count(fun_name2_422),generics_fun_426,type,info)));
                    name_427=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    err_428=multiple_assign_var6->v2;
                    /*c*/ come_call_finalizer3(__right_value326,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_428) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_423=((struct sFun*)(__right_value327=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_427)));
                    /*c*/ come_call_finalizer3(__right_value327,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_427 = come_decrement_ref_count(name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_424 = come_decrement_ref_count(none_generics_name_424, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_425 = come_decrement_ref_count(generics_fun_name_425, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_429=128-1;            i_429>=1;            i_429--            ){
                new_fun_name_430=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_422,i_429));
                finalizer_423=((struct sFun*)(__right_value329=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_430)));
                /*c*/ come_call_finalizer3(__right_value329,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                finalizer_423) {
                    __dec_obj69=fun_name2_422,
                    fun_name2_422=(char*)come_increment_ref_count(__builtin_string(new_fun_name_430));
                    __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_430 = come_decrement_ref_count(new_fun_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_430 = come_decrement_ref_count(new_fun_name_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            finalizer_423==((void*)0)) {
                finalizer_423=((struct sFun*)(__right_value331=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_422)));
                /*c*/ come_call_finalizer3(__right_value331,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        if(        finalizer_423==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNode$ph_length(type->mArrayNum)==0) {
            multiple_assign_var7=((struct tuple2$2sFun$pchar$ph*)(__right_value332=create_finalizer_automatically(type,fun_name_420,info)));
            fun_431=multiple_assign_var7->v1;
            new_fun_name_432=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            /*c*/ come_call_finalizer3(__right_value332,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj70=fun_name2_422,
            fun_name2_422=(char*)come_increment_ref_count(new_fun_name_432);
            __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            finalizer_423=fun_431;
            (new_fun_name_432 = come_decrement_ref_count(new_fun_name_432, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_423!=((void*)0)) {
            if(            klass_418->mProtocol&&type->mPointerNum==1) {
                type_name_433=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_417) {
                    add_come_code(info,((char*)(__right_value347=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, \%s /*alloca value */, \%s/* no_decrement */, \%s/* no_free */, \%s /* force_delete */, (void*)0)\%s",((char*)(__right_value334=string_to_string(fun_name2_422))),((char*)(__right_value335=string_to_string(c_value_417))),((char*)(__right_value336=string_to_string(c_value_417))),((char*)(__right_value337=string_to_string(type_name_433))),((char*)(__right_value338=string_to_string(c_value_417))),((char*)(__right_value339=string_to_string(c_value_417))),((char*)(__right_value340=string_to_string(type_name_433))),((char*)(__right_value341=string_to_string(c_value_417))),((char*)(__right_value342=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value343=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value344=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value345=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value346=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value336 = come_decrement_ref_count(__right_value336, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value337 = come_decrement_ref_count(__right_value337, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value338 = come_decrement_ref_count(__right_value338, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value340 = come_decrement_ref_count(__right_value340, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value341 = come_decrement_ref_count(__right_value341, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value342 = come_decrement_ref_count(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value347 = come_decrement_ref_count(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (type_name_433 = come_decrement_ref_count(type_name_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                c_value_417) {
                    add_come_code(info,((char*)(__right_value355=xsprintf("/*c*/ come_call_finalizer3(\%s,\%s, \%s/* alloca value */, \%s/* no_decrement */, \%s/* no_free */, \%s/* force_delete */ , (void*)0)\%s",((char*)(__right_value348=string_to_string(c_value_417))),((char*)(__right_value349=string_to_string(fun_name2_422))),((char*)(__right_value350=int_to_string(((type->mAllocaValue)?(1):(0))))),((char*)(__right_value351=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value352=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value353=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value354=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                    (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value349 = come_decrement_ref_count(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value353 = come_decrement_ref_count(__right_value353, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value354 = come_decrement_ref_count(__right_value354, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (__right_value355 = come_decrement_ref_count(__right_value355, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        else {
            if(            klass_418->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_434=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_418->mFields)),it_437=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_434));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_434));                it_437=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_434))                ){
                    multiple_assign_var8=it_437;
                    name_440=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                    field_type_441=(struct sType*)come_increment_ref_count(multiple_assign_var8->v2);
                    if(                    field_type_441->mHeap&&field_type_441->mPointerNum>0) {
                        obj_442=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value356=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_417,name_440));
                        (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value358=sType_clone(field_type_441))),obj_442,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value358,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (obj_442 = come_decrement_ref_count(obj_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_440 = come_decrement_ref_count(name_440, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type_441,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_434,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else if(            klass_418->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_445=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_418->mFields)),it_446=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_445));                !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_445));                it_446=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_445))                ){
                    multiple_assign_var9=it_446;
                    name_447=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                    field_type_448=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
                    if(                    field_type_448->mHeap&&field_type_448->mPointerNum>0) {
                        obj_449=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value359=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_417,name_447));
                        (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        free_object(((struct sType*)(__right_value361=sType_clone(field_type_448))),obj_449,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        /*c*/ come_call_finalizer3(__right_value361,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (obj_449 = come_decrement_ref_count(obj_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    (name_447 = come_decrement_ref_count(name_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(field_type_448,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                /*c*/ come_call_finalizer3(o2_saved_445,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                klass_418->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_417) {
                        type_name_450=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        add_come_code(info,((char*)(__right_value374=xsprintf("((\%s) ? \%s = come_decrement_ref_count(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, \%s/* no_decrement */, \%s/*no_free*/,\%s/*force_delete*/, (void*)0):(void*)0)\%s",((char*)(__right_value363=string_to_string(c_value_417))),((char*)(__right_value364=string_to_string(c_value_417))),((char*)(__right_value365=string_to_string(c_value_417))),((char*)(__right_value366=string_to_string(type_name_450))),((char*)(__right_value367=string_to_string(c_value_417))),((char*)(__right_value368=string_to_string(type_name_450))),((char*)(__right_value369=string_to_string(c_value_417))),((char*)(__right_value370=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value371=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value372=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value373=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value367 = come_decrement_ref_count(__right_value367, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value368 = come_decrement_ref_count(__right_value368, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value369 = come_decrement_ref_count(__right_value369, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value370 = come_decrement_ref_count(__right_value370, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value373 = come_decrement_ref_count(__right_value373, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (type_name_450 = come_decrement_ref_count(type_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    if(                    c_value_417) {
                        add_come_code(info,((char*)(__right_value381=xsprintf("(\%s = come_decrement_ref_count(\%s, (void*)0, (void*)0, \%s/* no_decrement*/, \%s/* no_free*/, \%s/* force_delete_*/, (void*)0))\%s",((char*)(__right_value375=string_to_string(c_value_417))),((char*)(__right_value376=string_to_string(c_value_417))),((char*)(__right_value377=int_to_string(((no_decrement)?(1):(0))))),((char*)(__right_value378=int_to_string(((no_free)?(1):(0))))),((char*)(__right_value379=int_to_string(((force_delete_)?(1):(0))))),((char*)(__right_value380=charp_to_string((((comma)?(",\n"):(";\n"))))))))));
                        (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value377 = come_decrement_ref_count(__right_value377, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value378 = come_decrement_ref_count(__right_value378, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
        }
        (c_value_417 = come_decrement_ref_count(c_value_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_421,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_422 = come_decrement_ref_count(fun_name2_422, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj71=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_415);
    /*b*/ come_call_finalizer3(__dec_obj71,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj72=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_414);
    /*b*/ come_call_finalizer3(__dec_obj72,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    /*c*/ come_call_finalizer3(stack_saved_414,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_435;
struct tuple2$2char$phsType$ph* __result_obj__215;
struct tuple2$2char$phsType$ph* __result_obj__216;
struct tuple2$2char$phsType$ph* result_436;
struct tuple2$2char$phsType$ph* __result_obj__217;
result_435 = (void*)0;
result_436 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_435,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__215 = result_435;
        return __result_obj__215;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__216 = self->it->item;
        return __result_obj__216;
    }
    memset(&result_436,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__217 = result_436;
    return __result_obj__217;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_438;
struct tuple2$2char$phsType$ph* __result_obj__218;
struct tuple2$2char$phsType$ph* __result_obj__219;
struct tuple2$2char$phsType$ph* result_439;
struct tuple2$2char$phsType$ph* __result_obj__220;
result_438 = (void*)0;
result_439 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_438,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__218 = result_438;
        return __result_obj__218;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__219 = self->it->item;
        return __result_obj__219;
    }
    memset(&result_439,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__220 = result_439;
    return __result_obj__220;
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_443;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_444;
    it_443=self->head;
    while(it_443!=((void*)0)) {
        prev_it_444=it_443;
        it_443=it_443->next;
        /*c*/ come_call_finalizer3(prev_it_444,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info){
_Bool in_clone_object_451;
void* __right_value382 = (void*)0;
struct sType* type2_452;
char* result_453;
struct sType* result_type_454;
struct list$1CVALUE$ph* stack_saved_455;
struct list$1sRightValueObject$ph* right_value_objects_456;
void* __right_value383 = (void*)0;
char* c_value_457;
struct sClass* klass_458;
char* class_name_459;
char* fun_name_460;
struct sFun* cloner_461;
char* fun_name2_462;
void* __right_value384 = (void*)0;
char* none_generics_name_463;
void* __right_value385 = (void*)0;
struct sType* obj_type_464;
void* __right_value386 = (void*)0;
char* __dec_obj73;
void* __right_value387 = (void*)0;
char* fun_name3_465;
void* __right_value388 = (void*)0;
struct sGenericsFun* generics_fun_466;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var10 = (void*)0;
char* name_469=0;
_Bool err_470=0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__228;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
char* __dec_obj78;
int i_481;
void* __right_value403 = (void*)0;
char* new_fun_name_482;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
char* __dec_obj79;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var11 = (void*)0;
struct sFun* fun_483=0;
char* new_fun_name_484=0;
char* __dec_obj80;
struct sType* __dec_obj81;
void* __right_value408 = (void*)0;
struct sType* __dec_obj82;
void* __right_value409 = (void*)0;
char* __dec_obj83;
void* __right_value410 = (void*)0;
char* __dec_obj84;
void* __right_value411 = (void*)0;
struct sType* __dec_obj85;
void* __right_value412 = (void*)0;
char* type_name_485;
void* __right_value413 = (void*)0;
char* __dec_obj86;
void* __right_value414 = (void*)0;
char* __dec_obj87;
struct list$1sRightValueObject$ph* __dec_obj88;
struct list$1CVALUE$ph* __dec_obj89;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct tuple2$2sType$phchar$ph* __result_obj__229;
fun_name2_462 = (void*)0;
memset(&i_481, 0, sizeof(int));
    in_clone_object_451=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_452=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_453=((void*)0);
    result_type_454=((void*)0);
    stack_saved_455=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_456=info->right_value_objects;
    c_value_457=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_458=type->mClass;
    class_name_459=klass_458->mName;
    fun_name_460="clone";
    cloner_461=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_463=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_464=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj73=fun_name2_462,
        fun_name2_462=(char*)come_increment_ref_count(create_method_name(obj_type_464,(_Bool)0,fun_name_460,info,(_Bool)1));
        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_465=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_463,fun_name_460));
        generics_fun_466=((struct sGenericsFun*)(__right_value388=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_465,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value388,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_466) {
            multiple_assign_var10=((struct tuple2$2char$phbool$*)(__right_value390=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_462)),generics_fun_466,obj_type_464,info)));
            name_469=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            err_470=multiple_assign_var10->v2;
            /*c*/ come_call_finalizer3(__right_value390,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_470) {
                __result_obj__228 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value399=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 671, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "04heap.c", 671, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string(""))))));
                (name_469 = come_decrement_ref_count(name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_463 = come_decrement_ref_count(none_generics_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_464,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_465 = come_decrement_ref_count(fun_name3_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type2_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (result_453 = come_decrement_ref_count(result_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_454,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(stack_saved_455,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (c_value_457 = come_decrement_ref_count(c_value_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name2_462 = come_decrement_ref_count(fun_name2_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value399,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__228,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__228;
            }
            cloner_461=((struct sFun*)(__right_value400=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_469)));
            /*c*/ come_call_finalizer3(__right_value400,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_469 = come_decrement_ref_count(name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_461=((struct sFun*)(__right_value401=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_462)));
            /*c*/ come_call_finalizer3(__right_value401,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_463 = come_decrement_ref_count(none_generics_name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_464,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_465 = come_decrement_ref_count(fun_name3_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj78=fun_name2_462,
        fun_name2_462=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_460,info,(_Bool)1));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_481=128-1;        i_481>=1;        i_481--        ){
            new_fun_name_482=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_462,i_481));
            cloner_461=((struct sFun*)(__right_value404=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_482)));
            /*c*/ come_call_finalizer3(__right_value404,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_461) {
                __dec_obj79=fun_name2_462,
                fun_name2_462=(char*)come_increment_ref_count(__builtin_string(new_fun_name_482));
                __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_482 = come_decrement_ref_count(new_fun_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_482 = come_decrement_ref_count(new_fun_name_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_461==((void*)0)) {
            cloner_461=((struct sFun*)(__right_value406=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_462)));
            /*c*/ come_call_finalizer3(__right_value406,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_461==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFun$pchar$ph*)(__right_value407=create_cloner_automatically(type,fun_name_460,info)));
        fun_483=multiple_assign_var11->v1;
        new_fun_name_484=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        /*c*/ come_call_finalizer3(__right_value407,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj80=fun_name2_462,
        fun_name2_462=(char*)come_increment_ref_count(new_fun_name_484);
        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_461=fun_483;
        (new_fun_name_484 = come_decrement_ref_count(new_fun_name_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    cloner_461!=((void*)0)) {
        __dec_obj81=result_type_454,
        result_type_454=(struct sType*)come_increment_ref_count(cloner_461->mResultType);
        /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj82=result_type_454,
        result_type_454=(struct sType*)come_increment_ref_count(solve_generics(result_type_454,type,info));
        /*b*/ come_call_finalizer3(__dec_obj82,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj83=result_453,
        result_453=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_462,c_value_457));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        gComeDebug) {
            __dec_obj84=result_453,
            result_453=(char*)come_increment_ref_count(append_stackframe(result_453,result_type_454,info));
            __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
    else {
        __dec_obj85=result_type_454,
        result_type_454=(struct sType*)come_increment_ref_count(sType_clone(type));
        /*b*/ come_call_finalizer3(__dec_obj85,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type2_452->mHeap=(_Bool)1;
        type_name_485=(char*)come_increment_ref_count(make_type_name_string(type2_452,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj86=result_453,
        result_453=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_485,c_value_457,info->sname,info->sline,type_name_485));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        gComeDebug) {
            __dec_obj87=result_453,
            result_453=(char*)come_increment_ref_count(append_stackframe(result_453,result_type_454,info));
            __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        (type_name_485 = come_decrement_ref_count(type_name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj88=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_456);
    /*b*/ come_call_finalizer3(__dec_obj88,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj89=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_455);
    /*b*/ come_call_finalizer3(__dec_obj89,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->in_clone_object=in_clone_object_451;
    __result_obj__229 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(((struct tuple2$2sType$phchar$ph*)(__right_value416=tuple2$2sType$phchar$ph_initialize((struct tuple2$2sType$phchar$ph**)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "04heap.c", 733, "struct tuple2$2sType$phchar$ph")),(struct sType*)come_increment_ref_count(result_type_454),(char*)come_increment_ref_count(result_453)))));
    /*c*/ come_call_finalizer3(type2_452,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_453 = come_decrement_ref_count(result_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_454,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(stack_saved_455,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (c_value_457 = come_decrement_ref_count(c_value_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_462 = come_decrement_ref_count(fun_name2_462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value416,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__229,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_467;
unsigned int it_468;
struct sGenericsFun* __result_obj__221;
struct sGenericsFun* __result_obj__222;
struct sGenericsFun* __result_obj__223;
struct sGenericsFun* __result_obj__224;
    hash_467=string_get_hash_key(((char*)key))%self->size;
    it_468=hash_467;
    while((_Bool)1) {
        if(        self->item_existance[it_468]) {
            if(            string_equals(self->keys[it_468],key)) {
                __result_obj__221 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_468]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__221,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__221;
            }
            it_468++;
            if(            it_468>=self->size) {
                it_468=0;
            }
            else if(            it_468==hash_467) {
                __result_obj__222 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__222,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__222;
            }
        }
        else {
            __result_obj__223 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__223,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__223;
        }
    }
    __result_obj__224 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__224,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__224;
}

static void tuple2$2sType$phchar$ph_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_clone(struct tuple2$2sType$phchar$ph* self){
struct tuple2$2sType$phchar$ph* __result_obj__225;
void* __right_value395 = (void*)0;
struct tuple2$2sType$phchar$ph* result_471;
void* __right_value396 = (void*)0;
struct sType* __dec_obj74;
void* __right_value397 = (void*)0;
char* __dec_obj75;
struct tuple2$2sType$phchar$ph* __result_obj__226;
    if(    self==(void*)0) {
        __result_obj__225 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__225,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__225;
    }
    result_471=(struct tuple2$2sType$phchar$ph*)come_increment_ref_count((struct tuple2$2sType$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sType$phchar$ph)*(1), "tuple2$2sType$phchar$ph_clone", 3, "struct tuple2$2sType$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj74=result_471->v1,
        result_471->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj75=result_471->v2,
        result_471->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2sType$phchar$ph_clone", 5, "char*"));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__226 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(result_471);
    /*c*/ come_call_finalizer3(result_471,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,tuple2$2sType$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
}

static unsigned int tuple2$2sType$phchar$ph_get_hash_key(struct tuple2$2sType$phchar$ph* self){
unsigned int result_472;
    result_472=0;
    result_472+=int_get_hash_key(((int)self->v1));
    result_472+=int_get_hash_key(((int)self->v2));
    return result_472;
}

static _Bool tuple2$2sType$phchar$ph_equals(struct tuple2$2sType$phchar$ph* left, struct tuple2$2sType$phchar$ph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_473;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_474;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_473=left->head;
    it2_474=right->head;
    while(it_473!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_473->item,it2_474->item)) {
            return (_Bool)0;
        }
        it_473=it_473->next;
        it2_474=it2_474->next;
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
struct list_item$1sType$ph* it_475;
struct list_item$1sType$ph* it2_476;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_475=left->head;
    it2_476=right->head;
    while(it_475!=((void*)0)) {
        if(        !sType_equals(it_475->item,it2_476->item)) {
            return (_Bool)0;
        }
        it_475=it_475->next;
        it2_476=it2_476->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_477;
struct list_item$1sNode$ph* it2_478;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_477=left->head;
    it2_478=right->head;
    while(it_477!=((void*)0)) {
        if(        !sNode_equals(it_477->item,it2_478->item)) {
            return (_Bool)0;
        }
        it_477=it_477->next;
        it2_478=it2_478->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_479;
struct list_item$1char$ph* it2_480;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_479=left->head;
    it2_480=right->head;
    while(it_479!=((void*)0)) {
        if(        !string_equals(it_479->item,it2_480->item)) {
            return (_Bool)0;
        }
        it_479=it_479->next;
        it2_480=it2_480->next;
    }
    return (_Bool)1;
}

static struct tuple2$2sType$phchar$ph* tuple2$2sType$phchar$ph_initialize(struct tuple2$2sType$phchar$ph* self, struct sType* v1, char* v2){
struct sType* __dec_obj76;
char* __dec_obj77;
struct tuple2$2sType$phchar$ph* __result_obj__227;
    __dec_obj76=self->v1,
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /*b*/ come_call_finalizer3(__dec_obj76,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj77=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__227 = (struct tuple2$2sType$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__227,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

void drop_object(struct sType* type, char* obj, struct sInfo* info){
void* __right_value417 = (void*)0;
char* c_value_486;
char* fun_name_487;
void* __right_value418 = (void*)0;
struct sType* type2_488;
void* __right_value419 = (void*)0;
char* fun_name2_489;
struct sFun* dropper_490;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* none_generics_name_491;
void* __right_value422 = (void*)0;
char* generics_fun_name_492;
void* __right_value423 = (void*)0;
struct sGenericsFun* generics_fun_493;
void* __right_value424 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name_494=0;
_Bool err_495=0;
void* __right_value425 = (void*)0;
int i_496;
void* __right_value426 = (void*)0;
char* new_fun_name_497;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
char* __dec_obj90;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
memset(&i_496, 0, sizeof(int));
    if(    gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    type->mClass->mStruct||list$1sType$ph_length(type->mGenericsTypes)>0) {
        c_value_486=(char*)come_increment_ref_count(__builtin_string(obj));
        fun_name_487="on_drop";
        type2_488=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_488->mHeap=(_Bool)0;
        fun_name2_489=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_487,info,(_Bool)1));
        dropper_490=((void*)0);
        if(        list$1sType$ph_length(type->mGenericsTypes)>0) {
            dropper_490=((struct sFun*)(__right_value420=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_489)));
            /*c*/ come_call_finalizer3(__right_value420,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            dropper_490==((void*)0)) {
                none_generics_name_491=(char*)come_increment_ref_count(get_none_generics_name(type2_488->mClass->mName));
                generics_fun_name_492=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_491,fun_name_487));
                generics_fun_493=((struct sGenericsFun*)(__right_value423=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_492)));
                /*c*/ come_call_finalizer3(__right_value423,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                generics_fun_493) {
                    multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value424=create_generics_fun((char*)come_increment_ref_count(fun_name2_489),generics_fun_493,type,info)));
                    name_494=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                    err_495=multiple_assign_var12->v2;
                    /*c*/ come_call_finalizer3(__right_value424,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_495) {
                        printf("%s %d: can't create generics dropper\n",info->sname,info->sline);
                        exit(2);
                    }
                    dropper_490=((struct sFun*)(__right_value425=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_494)));
                    /*c*/ come_call_finalizer3(__right_value425,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_494 = come_decrement_ref_count(name_494, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (none_generics_name_491 = come_decrement_ref_count(none_generics_name_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_492 = come_decrement_ref_count(generics_fun_name_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            for(            i_496=128-1;            i_496>=1;            i_496--            ){
                new_fun_name_497=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_489,i_496));
                dropper_490=((struct sFun*)(__right_value427=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_497)));
                /*c*/ come_call_finalizer3(__right_value427,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                dropper_490) {
                    __dec_obj90=fun_name2_489,
                    fun_name2_489=(char*)come_increment_ref_count(__builtin_string(new_fun_name_497));
                    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_497 = come_decrement_ref_count(new_fun_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_497 = come_decrement_ref_count(new_fun_name_497, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            dropper_490==((void*)0)) {
                dropper_490=((struct sFun*)(__right_value429=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_489)));
                /*c*/ come_call_finalizer3(__right_value429,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        if(        dropper_490!=((void*)0)) {
            if(            c_value_486) {
                add_come_code(info,((char*)(__right_value432=xsprintf("\%s(\%s);\n",((char*)(__right_value430=string_to_string(fun_name2_489))),((char*)(__right_value431=string_to_string(c_value_486)))))));
                (__right_value430 = come_decrement_ref_count(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value431 = come_decrement_ref_count(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value432 = come_decrement_ref_count(__right_value432, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (c_value_486 = come_decrement_ref_count(c_value_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_488,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name2_489 = come_decrement_ref_count(fun_name2_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_498;
struct list$1CVALUE$ph* stack_saved_499;
struct list$1sRightValueObject$ph* right_value_objects_500;
struct sClass* klass_501;
char* class_name_502;
char* fun_name_503;
void* __right_value433 = (void*)0;
struct sType* type2_504;
struct sFun* cloner_505;
char* fun_name2_506;
void* __right_value434 = (void*)0;
char* none_generics_name_507;
void* __right_value435 = (void*)0;
struct sType* obj_type_508;
void* __right_value436 = (void*)0;
char* __dec_obj91;
void* __right_value437 = (void*)0;
char* fun_name3_509;
void* __right_value438 = (void*)0;
struct sGenericsFun* generics_fun_510;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var13 = (void*)0;
char* name_511=0;
_Bool err_512=0;
_Bool __result_obj__230;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
char* __dec_obj92;
int i_513;
void* __right_value444 = (void*)0;
char* new_fun_name_514;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* __dec_obj93;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var14 = (void*)0;
struct sFun* fun_515=0;
char* new_fun_name_516=0;
char* __dec_obj94;
struct list$1sRightValueObject$ph* __dec_obj95;
struct list$1CVALUE$ph* __dec_obj96;
_Bool __result_obj__231;
fun_name2_506 = (void*)0;
memset(&i_513, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_498=((void*)0);
    stack_saved_499=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_500=info->right_value_objects;
    klass_501=type->mClass;
    class_name_502=klass_501->mName;
    fun_name_503="equals";
    type2_504=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_504->mHeap=(_Bool)0;
    cloner_505=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_507=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_508=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj91=fun_name2_506,
        fun_name2_506=(char*)come_increment_ref_count(create_method_name(obj_type_508,(_Bool)0,fun_name_503,info,(_Bool)1));
        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_509=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_507,fun_name_503));
        generics_fun_510=((struct sGenericsFun*)(__right_value438=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_509,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value438,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_510) {
            multiple_assign_var13=((struct tuple2$2char$phbool$*)(__right_value440=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_506)),generics_fun_510,obj_type_508,info)));
            name_511=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            err_512=multiple_assign_var13->v2;
            /*c*/ come_call_finalizer3(__right_value440,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_512) {
                __result_obj__230 = (_Bool)0;
                (name_511 = come_decrement_ref_count(name_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_507 = come_decrement_ref_count(none_generics_name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_508,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_509 = come_decrement_ref_count(fun_name3_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_498 = come_decrement_ref_count(result_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(stack_saved_499,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_504,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_506 = come_decrement_ref_count(fun_name2_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__230;
            }
            else {
                cloner_505=((struct sFun*)(__right_value441=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_511)));
                /*c*/ come_call_finalizer3(__right_value441,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (name_511 = come_decrement_ref_count(name_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_505=((struct sFun*)(__right_value442=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_506)));
            /*c*/ come_call_finalizer3(__right_value442,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_507 = come_decrement_ref_count(none_generics_name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_508,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_509 = come_decrement_ref_count(fun_name3_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj92=fun_name2_506,
        fun_name2_506=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_503,info,(_Bool)1));
        __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_513=128-1;        i_513>=1;        i_513--        ){
            new_fun_name_514=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_506,i_513));
            cloner_505=((struct sFun*)(__right_value445=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_514)));
            /*c*/ come_call_finalizer3(__right_value445,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_505) {
                __dec_obj93=fun_name2_506,
                fun_name2_506=(char*)come_increment_ref_count(__builtin_string(new_fun_name_514));
                __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_514 = come_decrement_ref_count(new_fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_514 = come_decrement_ref_count(new_fun_name_514, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_505==((void*)0)) {
            cloner_505=((struct sFun*)(__right_value447=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_506)));
            /*c*/ come_call_finalizer3(__right_value447,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_505==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var14=((struct tuple2$2sFun$pchar$ph*)(__right_value448=create_equals_automatically(type,fun_name_503,info)));
        fun_515=multiple_assign_var14->v1;
        new_fun_name_516=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        /*c*/ come_call_finalizer3(__right_value448,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj94=fun_name2_506,
        fun_name2_506=(char*)come_increment_ref_count(new_fun_name_516);
        __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_505=fun_515;
        (new_fun_name_516 = come_decrement_ref_count(new_fun_name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj95=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_500);
    /*b*/ come_call_finalizer3(__dec_obj95,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj96=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_499);
    /*b*/ come_call_finalizer3(__dec_obj96,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__231 = (_Bool)1;
    (result_498 = come_decrement_ref_count(result_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(stack_saved_499,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_504,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_506 = come_decrement_ref_count(fun_name2_506, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__231;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_517;
struct list$1CVALUE$ph* stack_saved_518;
struct list$1sRightValueObject$ph* right_value_objects_519;
struct sClass* klass_520;
char* class_name_521;
char* fun_name_522;
void* __right_value449 = (void*)0;
struct sType* type2_523;
struct sFun* cloner_524;
char* fun_name2_525;
void* __right_value450 = (void*)0;
char* none_generics_name_526;
void* __right_value451 = (void*)0;
struct sType* obj_type_527;
void* __right_value452 = (void*)0;
char* __dec_obj97;
void* __right_value453 = (void*)0;
char* fun_name3_528;
void* __right_value454 = (void*)0;
struct sGenericsFun* generics_fun_529;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var15 = (void*)0;
char* name_530=0;
_Bool err_531=0;
_Bool __result_obj__232;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
char* __dec_obj98;
int i_532;
void* __right_value460 = (void*)0;
char* new_fun_name_533;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
char* __dec_obj99;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var16 = (void*)0;
struct sFun* fun_534=0;
char* new_fun_name_535=0;
char* __dec_obj100;
struct list$1sRightValueObject$ph* __dec_obj101;
struct list$1CVALUE$ph* __dec_obj102;
_Bool __result_obj__233;
fun_name2_525 = (void*)0;
memset(&i_532, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_517=((void*)0);
    stack_saved_518=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_519=info->right_value_objects;
    klass_520=type->mClass;
    class_name_521=klass_520->mName;
    fun_name_522="operator_equals";
    type2_523=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_523->mHeap=(_Bool)0;
    cloner_524=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_526=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_527=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj97=fun_name2_525,
        fun_name2_525=(char*)come_increment_ref_count(create_method_name(obj_type_527,(_Bool)0,fun_name_522,info,(_Bool)1));
        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_528=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_526,fun_name_522));
        generics_fun_529=((struct sGenericsFun*)(__right_value454=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_528,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value454,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_529) {
            multiple_assign_var15=((struct tuple2$2char$phbool$*)(__right_value456=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_525)),generics_fun_529,obj_type_527,info)));
            name_530=(char*)come_increment_ref_count(multiple_assign_var15->v1);
            err_531=multiple_assign_var15->v2;
            /*c*/ come_call_finalizer3(__right_value456,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_531) {
                __result_obj__232 = (_Bool)0;
                (name_530 = come_decrement_ref_count(name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_526 = come_decrement_ref_count(none_generics_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_527,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_528 = come_decrement_ref_count(fun_name3_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_517 = come_decrement_ref_count(result_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(stack_saved_518,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_523,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_525 = come_decrement_ref_count(fun_name2_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__232;
            }
            cloner_524=((struct sFun*)(__right_value457=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_530)));
            /*c*/ come_call_finalizer3(__right_value457,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_530 = come_decrement_ref_count(name_530, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_524=((struct sFun*)(__right_value458=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_525)));
            /*c*/ come_call_finalizer3(__right_value458,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_526 = come_decrement_ref_count(none_generics_name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_527,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_528 = come_decrement_ref_count(fun_name3_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj98=fun_name2_525,
        fun_name2_525=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_522,info,(_Bool)1));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_532=128-1;        i_532>=1;        i_532--        ){
            new_fun_name_533=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_525,i_532));
            cloner_524=((struct sFun*)(__right_value461=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_533)));
            /*c*/ come_call_finalizer3(__right_value461,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_524) {
                __dec_obj99=fun_name2_525,
                fun_name2_525=(char*)come_increment_ref_count(__builtin_string(new_fun_name_533));
                __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_533 = come_decrement_ref_count(new_fun_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_533 = come_decrement_ref_count(new_fun_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_524==((void*)0)) {
            cloner_524=((struct sFun*)(__right_value463=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_525)));
            /*c*/ come_call_finalizer3(__right_value463,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_524==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var16=((struct tuple2$2sFun$pchar$ph*)(__right_value464=create_operator_equals_automatically(type,fun_name_522,info)));
        fun_534=multiple_assign_var16->v1;
        new_fun_name_535=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        /*c*/ come_call_finalizer3(__right_value464,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj100=fun_name2_525,
        fun_name2_525=(char*)come_increment_ref_count(new_fun_name_535);
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_524=fun_534;
        (new_fun_name_535 = come_decrement_ref_count(new_fun_name_535, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj101=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_519);
    /*b*/ come_call_finalizer3(__dec_obj101,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj102=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_518);
    /*b*/ come_call_finalizer3(__dec_obj102,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__233 = (_Bool)1;
    (result_517 = come_decrement_ref_count(result_517, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(stack_saved_518,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_523,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_525 = come_decrement_ref_count(fun_name2_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__233;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_536;
struct list$1CVALUE$ph* stack_saved_537;
struct list$1sRightValueObject$ph* right_value_objects_538;
struct sClass* klass_539;
char* class_name_540;
char* fun_name_541;
void* __right_value465 = (void*)0;
struct sType* type2_542;
struct sFun* cloner_543;
char* fun_name2_544;
void* __right_value466 = (void*)0;
char* none_generics_name_545;
void* __right_value467 = (void*)0;
struct sType* obj_type_546;
void* __right_value468 = (void*)0;
char* __dec_obj103;
void* __right_value469 = (void*)0;
char* fun_name3_547;
void* __right_value470 = (void*)0;
struct sGenericsFun* generics_fun_548;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var17 = (void*)0;
char* name_549=0;
_Bool err_550=0;
_Bool __result_obj__234;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* __dec_obj104;
int i_551;
void* __right_value476 = (void*)0;
char* new_fun_name_552;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* __dec_obj105;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var18 = (void*)0;
struct sFun* fun_553=0;
char* new_fun_name_554=0;
char* __dec_obj106;
struct list$1sRightValueObject$ph* __dec_obj107;
struct list$1CVALUE$ph* __dec_obj108;
_Bool __result_obj__235;
fun_name2_544 = (void*)0;
memset(&i_551, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_536=((void*)0);
    stack_saved_537=(struct list$1CVALUE$ph*)come_increment_ref_count(info->stack);
    right_value_objects_538=info->right_value_objects;
    klass_539=type->mClass;
    class_name_540=klass_539->mName;
    fun_name_541="operator_not_equals";
    type2_542=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_542->mHeap=(_Bool)0;
    cloner_543=((void*)0);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_545=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_546=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj103=fun_name2_544,
        fun_name2_544=(char*)come_increment_ref_count(create_method_name(obj_type_546,(_Bool)0,fun_name_541,info,(_Bool)1));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_547=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_545,fun_name_541));
        generics_fun_548=((struct sGenericsFun*)(__right_value470=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_547,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value470,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_548) {
            multiple_assign_var17=((struct tuple2$2char$phbool$*)(__right_value472=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_544)),generics_fun_548,obj_type_546,info)));
            name_549=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_550=multiple_assign_var17->v2;
            /*c*/ come_call_finalizer3(__right_value472,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_550) {
                __result_obj__234 = (_Bool)0;
                (name_549 = come_decrement_ref_count(name_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (none_generics_name_545 = come_decrement_ref_count(none_generics_name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(obj_type_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name3_547 = come_decrement_ref_count(fun_name3_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_536 = come_decrement_ref_count(result_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(stack_saved_537,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_542,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name2_544 = come_decrement_ref_count(fun_name2_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__234;
            }
            cloner_543=((struct sFun*)(__right_value473=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_549)));
            /*c*/ come_call_finalizer3(__right_value473,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_549 = come_decrement_ref_count(name_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_543=((struct sFun*)(__right_value474=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_544)));
            /*c*/ come_call_finalizer3(__right_value474,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (none_generics_name_545 = come_decrement_ref_count(none_generics_name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_546,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_547 = come_decrement_ref_count(fun_name3_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj104=fun_name2_544,
        fun_name2_544=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_541,info,(_Bool)1));
        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_551=128-1;        i_551>=1;        i_551--        ){
            new_fun_name_552=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_544,i_551));
            cloner_543=((struct sFun*)(__right_value477=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_552)));
            /*c*/ come_call_finalizer3(__right_value477,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_543) {
                __dec_obj105=fun_name2_544,
                fun_name2_544=(char*)come_increment_ref_count(__builtin_string(new_fun_name_552));
                __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_552 = come_decrement_ref_count(new_fun_name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_552 = come_decrement_ref_count(new_fun_name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_543==((void*)0)) {
            cloner_543=((struct sFun*)(__right_value479=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_544)));
            /*c*/ come_call_finalizer3(__right_value479,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    cloner_543==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var18=((struct tuple2$2sFun$pchar$ph*)(__right_value480=create_operator_not_equals_automatically(type,fun_name_541,info)));
        fun_553=multiple_assign_var18->v1;
        new_fun_name_554=(char*)come_increment_ref_count(multiple_assign_var18->v2);
        /*c*/ come_call_finalizer3(__right_value480,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj106=fun_name2_544,
        fun_name2_544=(char*)come_increment_ref_count(new_fun_name_554);
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        cloner_543=fun_553;
        (new_fun_name_554 = come_decrement_ref_count(new_fun_name_554, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __dec_obj107=info->right_value_objects,
    info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_538);
    /*b*/ come_call_finalizer3(__dec_obj107,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj108=info->stack,
    info->stack=(struct list$1CVALUE$ph*)come_increment_ref_count(stack_saved_537);
    /*b*/ come_call_finalizer3(__dec_obj108,list$1CVALUE$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__235 = (_Bool)1;
    (result_536 = come_decrement_ref_count(result_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(stack_saved_537,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_542,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_544 = come_decrement_ref_count(fun_name2_544, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__235;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_555;
struct list$1sRightValueObject$ph* right_value_objects_556;
int n_557;
struct list$1sRightValueObject$ph* o2_saved_558;
struct sRightValueObject* it_559;
struct list$1sRightValueObject$ph* o2_saved_560;
struct sRightValueObject* it_561;
struct sType* type_562;
void* __right_value481 = (void*)0;
struct sType* type2_563;
void* __right_value482 = (void*)0;
struct sType* __dec_obj109;
void* __right_value483 = (void*)0;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon||info->without_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_555=(_Bool)0;
    right_value_objects_556=info->right_value_objects;
    n_557=0;
    for(    o2_saved_558=(right_value_objects_556),it_559=list$1sRightValueObject$ph_begin((o2_saved_558));    !list$1sRightValueObject$ph_end((o2_saved_558));    it_559=list$1sRightValueObject$ph_next((o2_saved_558))    ){
        if(        it_559&&!it_559->mFreed) {
            if(            string_operator_equals(it_559->mFunName,info->come_fun->mName)&&it_559->mBlockLevel==info->block_level&&!it_559->mStored) {
                if(                it_559->mObjType) {
                    drop_object(it_559->mObjType,it_559->mObjValue,info);
                }
            }
        }
        n_557++;
    }
    for(    o2_saved_560=(right_value_objects_556),it_561=list$1sRightValueObject$ph_begin((o2_saved_560));    !list$1sRightValueObject$ph_end((o2_saved_560));    it_561=list$1sRightValueObject$ph_next((o2_saved_560))    ){
        if(        it_561&&!it_561->mFreed) {
            if(            string_operator_equals(it_561->mFunName,info->come_fun->mName)&&it_561->mBlockLevel==info->block_level&&!it_561->mStored&&!it_561->mNoFree) {
                type_562=(struct sType*)come_increment_ref_count(it_561->mType);
                type2_563=(struct sType*)come_increment_ref_count(sType_clone(type_562));
                if(                info->generics_type) {
                    __dec_obj109=type_562,
                    type_562=(struct sType*)come_increment_ref_count(solve_generics(type2_563,info->generics_type,info));
                    /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
                free_object(((struct sType*)(__right_value483=sType_clone(type_562))),it_561->mVarName,!it_561->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value483,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                it_561->mFreed=(_Bool)1;
                free_right_value_555=(_Bool)1;
                /*c*/ come_call_finalizer3(type_562,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_563,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        n_557++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
struct sVarTable* it_564;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sVar* var__565;
struct sVar* __result_obj__240;
struct sVar* __result_obj__241;
    it_564=table;
    while(it_564) {
        var__565=((struct sVar*)(__right_value485=map$2char$phsVar$ph$p_operator_load_element(it_564->mVars,((char*)(__right_value484=__builtin_string(name))))));
        (__right_value484 = come_decrement_ref_count(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value485,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        var__565) {
            __result_obj__240 = var__565;
            return __result_obj__240;
        }
        it_564=it_564->mParent;
    }
    __result_obj__241 = ((void*)0);
    return __result_obj__241;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_566;
unsigned int hash_567;
unsigned int it_568;
struct sVar* __result_obj__236;
struct sVar* __result_obj__237;
struct sVar* __result_obj__238;
struct sVar* __result_obj__239;
default_value_566 = (void*)0;
    memset(&default_value_566,0,sizeof(struct sVar*));
    hash_567=string_get_hash_key(((char*)key))%self->size;
    it_568=hash_567;
    while((_Bool)1) {
        if(        self->item_existance[it_568]) {
            if(            string_equals(self->keys[it_568],key)) {
                __result_obj__236 = (struct sVar*)come_increment_ref_count(self->items[it_568]);
                /*c*/ come_call_finalizer3(default_value_566,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__236,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__236;
            }
            it_568++;
            if(            it_568>=self->size) {
                it_568=0;
            }
            else if(            it_568==hash_567) {
                __result_obj__237 = (struct sVar*)come_increment_ref_count(default_value_566);
                /*c*/ come_call_finalizer3(default_value_566,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__237,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__237;
            }
        }
        else {
            __result_obj__238 = (struct sVar*)come_increment_ref_count(default_value_566);
            /*c*/ come_call_finalizer3(default_value_566,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__238,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__238;
        }
    }
    __result_obj__239 = (struct sVar*)come_increment_ref_count(default_value_566);
    /*c*/ come_call_finalizer3(default_value_566,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__239,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
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

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_569;
char* it_572;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sVar* p_575;
struct sType* type_576;
struct sClass* klass_577;
void* __right_value488 = (void*)0;
struct sType* type2_578;
void* __right_value489 = (void*)0;
struct sType* type2_579;
void* __right_value490 = (void*)0;
char* c_value_580;
void* __right_value491 = (void*)0;
struct sType* type2_581;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_569=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_572=map$2char$phsVar$ph_begin((o2_saved_569));    !map$2char$phsVar$ph_end((o2_saved_569));    it_572=map$2char$phsVar$ph_next((o2_saved_569))    ){
        p_575=((struct sVar*)(__right_value487=map$2char$phsVar$ph$p_operator_load_element(table->mVars,((char*)(__right_value486=__builtin_string(it_572))))));
        (__right_value486 = come_decrement_ref_count(__right_value486, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value487,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_576=p_575->mType;
        klass_577=type_576->mClass;
        if(        type_576->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_575->mCValueName,p_575->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_575->mCValueName,p_575->mCValueName);
        }
        else if(        ret_value!=((void*)0)&&p_575->mCValueName!=((void*)0)&&string_operator_equals(p_575->mCValueName,ret_value->mCValueName)&&type_576->mHeap) {
            type2_578=(struct sType*)come_increment_ref_count(sType_clone(type_576));
            free_object(type2_578,p_575->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
            /*c*/ come_call_finalizer3(type2_578,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        type_576->mHeap&&p_575->mCValueName) {
            type2_579=(struct sType*)come_increment_ref_count(sType_clone(type_576));
            free_object(type2_579,p_575->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            /*c*/ come_call_finalizer3(type2_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else if(        klass_577->mStruct&&p_575->mCValueName&&type_576->mAllocaValue&&!type_576->mNoCallingDestructor) {
            c_value_580=(char*)come_increment_ref_count(xsprintf("(&%s)",p_575->mCValueName));
            type2_581=(struct sType*)come_increment_ref_count(sType_clone(type_576));
            type2_581->mPointerNum++;
            free_object(type2_581,c_value_580,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            (c_value_580 = come_decrement_ref_count(c_value_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type2_581,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_569,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_570;
char* __result_obj__242;
char* __result_obj__243;
char* result_571;
char* __result_obj__244;
result_570 = (void*)0;
result_571 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_570,0,sizeof(char*));
        __result_obj__242 = result_570;
        return __result_obj__242;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__243 = self->key_list->it->item;
        return __result_obj__243;
    }
    memset(&result_571,0,sizeof(char*));
    __result_obj__244 = result_571;
    return __result_obj__244;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_573;
char* __result_obj__245;
char* __result_obj__246;
char* result_574;
char* __result_obj__247;
result_573 = (void*)0;
result_574 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_573,0,sizeof(char*));
        __result_obj__245 = result_573;
        return __result_obj__245;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__246 = self->key_list->it->item;
        return __result_obj__246;
    }
    memset(&result_574,0,sizeof(char*));
    __result_obj__247 = result_574;
    return __result_obj__247;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_582;
int i_583;
    for(    i_582=0;    i_582<self->size;    i_582++    ){
        if(        self->item_existance[i_582]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_582],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_583=0;    i_583<self->size;    i_583++    ){
        if(        self->item_existance[i_583]) {
            if(            1) {
                (self->keys[i_583] = come_decrement_ref_count(self->keys[i_583], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_584;
    if(    gComeGC||gComeC) {
        return;
    }
    it_584=info->lv_table;
    if(    it_584==info->come_fun->mBlock->mVarTable) {
        free_objects(it_584,ret_value,info);
    }
    else {
        while(it_584!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_584,ret_value,info);
            it_584=it_584->mParent;
        }
        free_objects(it_584,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_585;
struct sVarTable* current_loop_vtable_586;
struct sVarTable* it_587;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_585=((void*)0);
    current_loop_vtable_586=info->current_loop_vtable;
    if(    current_loop_vtable_586!=((void*)0)) {
        it_587=info->lv_table;
        while(it_587!=current_loop_vtable_586) {
            free_objects(it_587,ret_value_585,info);
            it_587=it_587->mParent;
        }
        free_objects(it_587,ret_value_585,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __right_value492 = (void*)0;
_Bool _if_conditional1;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
char* __result_obj__248;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
char* __result_obj__249;
void* __right_value503 = (void*)0;
char* var_name_589;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
_Bool _if_conditional2;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __result_obj__250;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
char* __result_obj__251;
void* __right_value520 = (void*)0;
char* __result_obj__252;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            if(            (_if_conditional1=(((struct sFun*)(__right_value492=map$2char$phsFun$ph$p_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),            /*c*/ come_call_finalizer3(__right_value492,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional1) {
                __result_obj__248 = (char*)come_increment_ref_count(((char*)(__right_value497=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s,\%s),\%s,come_pop_stackframe_v2())",((char*)(__right_value493=string_to_string(info->sname))),((char*)(__right_value494=int_to_string(info->sline))),((char*)(__right_value495=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value496=charp_to_string(c_value)))))));
                (__right_value493 = come_decrement_ref_count(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value494 = come_decrement_ref_count(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value495 = come_decrement_ref_count(__right_value495, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value496 = come_decrement_ref_count(__right_value496, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value497 = come_decrement_ref_count(__right_value497, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__248 = come_decrement_ref_count(__result_obj__248, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__248;
            }
            else {
                __result_obj__249 = (char*)come_increment_ref_count(((char*)(__right_value502=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value498=string_to_string(info->sname))),((char*)(__right_value499=int_to_string(info->sline))),((char*)(__right_value500=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value501=charp_to_string(c_value)))))));
                (__right_value498 = come_decrement_ref_count(__right_value498, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value499 = come_decrement_ref_count(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value500 = come_decrement_ref_count(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value501 = come_decrement_ref_count(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value502 = come_decrement_ref_count(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__249 = come_decrement_ref_count(__result_obj__249, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__249;
            }
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_588=0;
        ++n_588;
        var_name_589=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_588));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value504=make_define_var(type,var_name_589,(_Bool)0,info))));
        (__right_value504 = come_decrement_ref_count(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        (_if_conditional2=(((struct sFun*)(__right_value505=map$2char$phsFun$ph$p_operator_load_element(info->funcs,"come_push_stack_frame_v2"))))),        /*c*/ come_call_finalizer3(__right_value505,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional2) {
            __result_obj__250 = (char*)come_increment_ref_count(((char*)(__right_value512=xsprintf("(come_push_stackframe_v2(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe_v2(), \%s)",((char*)(__right_value506=string_to_string(info->sname))),((char*)(__right_value507=int_to_string(info->sline))),((char*)(__right_value508=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value509=string_to_string(var_name_589))),((char*)(__right_value510=charp_to_string(c_value))),((char*)(__right_value511=string_to_string(var_name_589)))))));
            (var_name_589 = come_decrement_ref_count(var_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value506 = come_decrement_ref_count(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value510 = come_decrement_ref_count(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value512 = come_decrement_ref_count(__right_value512, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__250 = come_decrement_ref_count(__result_obj__250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__250;
        }
        else {
            __result_obj__251 = (char*)come_increment_ref_count(((char*)(__right_value519=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value513=string_to_string(info->sname))),((char*)(__right_value514=int_to_string(info->sline))),((char*)(__right_value515=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value516=string_to_string(var_name_589))),((char*)(__right_value517=charp_to_string(c_value))),((char*)(__right_value518=string_to_string(var_name_589)))))));
            (var_name_589 = come_decrement_ref_count(var_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value513 = come_decrement_ref_count(__right_value513, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value514 = come_decrement_ref_count(__right_value514, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value515 = come_decrement_ref_count(__right_value515, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value516 = come_decrement_ref_count(__right_value516, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value517 = come_decrement_ref_count(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value518 = come_decrement_ref_count(__right_value518, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value519 = come_decrement_ref_count(__right_value519, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__251 = come_decrement_ref_count(__result_obj__251, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__251;
        }
        (var_name_589 = come_decrement_ref_count(var_name_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__252 = (char*)come_increment_ref_count(((char*)(__right_value520=__builtin_string(c_value))));
    (__right_value520 = come_decrement_ref_count(__right_value520, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__252 = come_decrement_ref_count(__result_obj__252, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__252;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2char$phsVar$ph* o2_saved_590;
char* it_591;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sVar* p_592;
struct sType* type_593;
struct sClass* klass_594;
_Bool __result_obj__253;
_Bool __result_obj__254;
_Bool __result_obj__255;
_Bool __result_obj__256;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_590=(struct map$2char$phsVar$ph*)come_increment_ref_count((table->mVars)),it_591=map$2char$phsVar$ph_begin((o2_saved_590));    !map$2char$phsVar$ph_end((o2_saved_590));    it_591=map$2char$phsVar$ph_next((o2_saved_590))    ){
        p_592=((struct sVar*)(__right_value522=map$2char$phsVar$ph$p_operator_load_element(table->mVars,((char*)(__right_value521=__builtin_string(it_591))))));
        (__right_value521 = come_decrement_ref_count(__right_value521, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value522,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_593=p_592->mType;
        klass_594=type_593->mClass;
        if(        type_593->mChannel) {
            __result_obj__253 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_590,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__253;
        }
        else if(        ret_value!=((void*)0)&&p_592->mCValueName!=((void*)0)&&string_operator_equals(p_592->mCValueName,ret_value->mCValueName)&&type_593->mHeap) {
            __result_obj__254 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_590,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__254;
        }
        else if(        type_593->mHeap&&p_592->mCValueName) {
            __result_obj__255 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_590,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__255;
        }
        else if(        klass_594->mStruct&&p_592->mCValueName&&type_593->mAllocaValue&&!type_593->mNoCallingDestructor) {
            __result_obj__256 = (_Bool)1;
            /*c*/ come_call_finalizer3(o2_saved_590,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__256;
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_590,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_595;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_595=info->lv_table;
    if(    it_595==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_595,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_595!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_595,ret_value,info)) {
                return (_Bool)1;
            }
            it_595=it_595->mParent;
        }
        if(        existance_free_objects(it_595,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObject$ph* right_value_objects_596;
struct list$1sRightValueObject$ph* o2_saved_597;
struct sRightValueObject* it_598;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_596=info->right_value_objects;
    for(    o2_saved_597=(right_value_objects_596),it_598=list$1sRightValueObject$ph_begin((o2_saved_597));    !list$1sRightValueObject$ph_end((o2_saved_597));    it_598=list$1sRightValueObject$ph_next((o2_saved_597))    ){
        if(        it_598&&!it_598->mFreed) {
            if(            string_operator_equals(it_598->mFunName,info->come_fun->mName)&&it_598->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

