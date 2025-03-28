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
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
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
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
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
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
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
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
char* output_function(struct sFun* fun, struct sInfo* info);
static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position);
static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position);
char* header_function(struct sFun* fun, struct sInfo* info);
static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key);
static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key);
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
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
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
static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position);
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

char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static){
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
struct buffer* buf_239;
char* class_name_240;
void* __right_value189 = (void*)0;
char* __result_obj__163;
void* __right_value190 = (void*)0;
struct CVALUE* come_value_241;
void* __right_value191 = (void*)0;
char* result_type_str_246;
int j_247;
struct list$1sType$ph* o2_saved_248;
struct sType* it_251;
void* __right_value192 = (void*)0;
char* param_type_str_254;
void* __right_value193 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_255=0;
char* Err_256=0;
void* __right_value194 = (void*)0;
char* __result_obj__170;
int i_257;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
char* __result_obj__171;
    buf_239=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 5, "struct buffer*"))));
    class_name_240=type->mClass->mName;
    if(    type->mAlignas) {
        if(        !node_compile(type->mAlignas,info)) {
            printf("_Alignas error\n");
            __result_obj__163 = (char*)come_increment_ref_count(((char*)(__right_value189=__builtin_string(""))));
            /*c*/ come_call_finalizer3(buf_239,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__163 = come_decrement_ref_count(__result_obj__163, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__163;
        }
        come_value_241=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(buf_239,"_Alignas(%s) ",come_value_241->c_value);
        /*c*/ come_call_finalizer3(come_value_241,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    type->mStatic&&!no_static) {
        buffer_append_str(buf_239,"static ");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_239,"_Atomic(");
    }
    if(    type->mConstant) {
        buffer_append_str(buf_239,"const ");
    }
    if(    type->mUnsigned) {
        buffer_append_str(buf_239,"unsigned ");
    }
    if(    type->mShort) {
        buffer_append_str(buf_239,"short ");
    }
    if(    string_operator_equals(type->mOriginalTypeName,"va_list")) {
        buffer_append_str(buf_239,"va_list");
    }
    else if(    string_operator_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_239,"__builtin_va_list");
    }
    else if(    charp_operator_equals(class_name_240,"__builtin_va_list")) {
        if(        in_header) {
            buffer_append_str(buf_239,class_name_240);
        }
        else {
            buffer_append_str(buf_239,"va_list");
        }
    }
    else if(    type->mClass->mStruct) {
        buffer_append_str(buf_239,"struct ");
        buffer_append_str(buf_239,class_name_240);
    }
    else if(    type->mClass->mUnion) {
        buffer_append_str(buf_239,"union ");
        buffer_append_str(buf_239,class_name_240);
    }
    else if(    type->mClass->mEnum) {
        buffer_append_str(buf_239,"enum ");
        buffer_append_str(buf_239,class_name_240);
    }
    else if(    type->mLongLong) {
        if(        charp_operator_equals(class_name_240,"int")) {
            buffer_append_str(buf_239,"long long int");
        }
        else if(        charp_operator_equals(class_name_240,"long")) {
            buffer_append_str(buf_239,"long long");
        }
    }
    else if(    type->mLong) {
        buffer_append_str(buf_239,"long ");
        if(        charp_operator_equals(class_name_240,"int")) {
            buffer_append_str(buf_239," int");
        }
        else if(        charp_operator_equals(class_name_240,"long")) {
            buffer_append_str(buf_239," long");
        }
        else if(        charp_operator_equals(class_name_240,"double")) {
            buffer_append_str(buf_239," double");
        }
    }
    else if(    charp_operator_equals(class_name_240,"long")) {
        buffer_append_str(buf_239,"long");
    }
    else if(    charp_operator_equals(class_name_240,"__uint128_t")) {
        buffer_append_str(buf_239,"__uint128_t");
    }
    else if(    charp_operator_equals(class_name_240,"bool")) {
        buffer_append_str(buf_239,"_Bool");
    }
    else if(    charp_operator_equals(class_name_240,"lambda")) {
        result_type_str_246=(char*)come_increment_ref_count(make_type_name_string(type->mResultType,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
        buffer_append_str(buf_239,result_type_str_246);
        buffer_append_str(buf_239," (*)(");
        j_247=0;
        for(        o2_saved_248=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_251=list$1sType$ph_begin((o2_saved_248));        !list$1sType$ph_end((o2_saved_248));        it_251=list$1sType$ph_next((o2_saved_248))        ){
            param_type_str_254=(char*)come_increment_ref_count(make_type_name_string(it_251,in_header,(_Bool)0,(_Bool)0,info,(_Bool)1));
            buffer_append_str(buf_239,param_type_str_254);
            if(            j_247!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_239,",");
            }
            j_247++;
            (param_type_str_254 = come_decrement_ref_count(param_type_str_254, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_248,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_239,")");
        (result_type_str_246 = come_decrement_ref_count(result_type_str_246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        if(        class_name_240==((void*)0)) {
            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value193=err_msg(info,"class name is null")));
            come_exception_var_c1_255=multiple_assign_var1->v1;
            Err_256=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            ((Err_256)?(puts(Err_256),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value193,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__170 = (char*)come_increment_ref_count(((char*)(__right_value194=__builtin_string(""))));
            (Err_256 = come_decrement_ref_count(Err_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_239,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value194 = come_decrement_ref_count(__right_value194, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__170 = come_decrement_ref_count(__result_obj__170, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__170;
            (Err_256 = come_decrement_ref_count(Err_256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(buf_239,class_name_240);
    }
    if(    charp_operator_not_equals(class_name_240,"lambda")&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        for(        i_257=0;        i_257<type->mPointerNum;        i_257++        ){
            buffer_append_str(buf_239,"*");
        }
    }
    if(    array_cast_pointer&&list$1sNode$ph_length(type->mArrayNum)>0&&!no_pointer&&string_operator_not_equals(type->mOriginalTypeName,"va_list")&&string_operator_not_equals(type->mOriginalTypeName,"__builtin_va_list")) {
        buffer_append_str(buf_239,"*");
    }
    if(    type->mRestrict) {
        buffer_append_str(buf_239,"restrict");
    }
    if(    type->mAtomic) {
        buffer_append_str(buf_239,")");
    }
    if(    type->mAttribute) {
        buffer_append_str(buf_239,((char*)(__right_value195=charp_operator_add(" ",type->mAttribute))));
        (__right_value195 = come_decrement_ref_count(__right_value195, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__171 = (char*)come_increment_ref_count(((char*)(__right_value196=buffer_to_string(buf_239))));
    /*c*/ come_call_finalizer3(buf_239,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value196 = come_decrement_ref_count(__right_value196, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__171 = come_decrement_ref_count(__result_obj__171, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__171;
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
struct list_item$1sType$ph* it_242;
struct list_item$1sType$ph* prev_it_243;
    it_242=self->head;
    while(it_242!=((void*)0)) {
        prev_it_243=it_242;
        it_242=it_242->next;
        /*c*/ come_call_finalizer3(prev_it_243,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_244;
struct list_item$1sNode$ph* prev_it_245;
    it_244=self->head;
    while(it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        /*c*/ come_call_finalizer3(prev_it_245,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_249;
struct sType* __result_obj__164;
struct sType* __result_obj__165;
struct sType* result_250;
struct sType* __result_obj__166;
result_249 = (void*)0;
result_250 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_249,0,sizeof(struct sType*));
        __result_obj__164 = result_249;
        return __result_obj__164;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__165 = self->it->item;
        return __result_obj__165;
    }
    memset(&result_250,0,sizeof(struct sType*));
    __result_obj__166 = result_250;
    return __result_obj__166;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_252;
struct sType* __result_obj__167;
struct sType* __result_obj__168;
struct sType* result_253;
struct sType* __result_obj__169;
result_252 = (void*)0;
result_253 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_252,0,sizeof(struct sType*));
        __result_obj__167 = result_252;
        return __result_obj__167;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__168 = self->it->item;
        return __result_obj__168;
    }
    memset(&result_253,0,sizeof(struct sType*));
    __result_obj__169 = result_253;
    return __result_obj__169;
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
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct buffer* buf_258;
char* class_name_259;
int i_260;
void* __right_value199 = (void*)0;
struct sType* gtype_261;
void* __right_value200 = (void*)0;
int i_268;
int i_269;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
char* __result_obj__176;
    buf_258=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 153, "struct buffer*"))));
    class_name_259=type->mClass->mName;
    buffer_append_str(buf_258,class_name_259);
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        buffer_append_str(buf_258,"<");
        for(        i_260=0;        i_260<list$1sType$ph_length(type->mGenericsTypes);        i_260++        ){
            gtype_261=((struct sType*)(__right_value199=list$1sType$ph_operator_load_element(type->mGenericsTypes,i_260)));
            /*c*/ come_call_finalizer3(__right_value199,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_str(buf_258,((char*)(__right_value200=make_come_type_name_string(gtype_261,info))));
            (__right_value200 = come_decrement_ref_count(__right_value200, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_260!=list$1sType$ph_length(type->mGenericsTypes)-1) {
                buffer_append_str(buf_258,",");
            }
        }
        buffer_append_str(buf_258,">");
    }
    if(    charp_operator_not_equals(class_name_259,"lambda")) {
        for(        i_268=0;        i_268<type->mPointerNum;        i_268++        ){
            buffer_append_str(buf_258,"*");
        }
    }
    if(    list$1sNode$ph_length(type->mArrayNum)>0) {
        for(        i_269=0;        i_269<list$1sNode$ph_length(type->mArrayNum);        i_269++        ){
            buffer_append_str(buf_258,"[]");
        }
    }
    if(    type->mHeap) {
        buffer_append_str(buf_258,"%");
    }
    if(    type->mAttribute) {
        buffer_append_str(buf_258,((char*)(__right_value201=charp_operator_add(" ",type->mAttribute))));
        (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__176 = (char*)come_increment_ref_count(((char*)(__right_value202=buffer_to_string(buf_258))));
    /*c*/ come_call_finalizer3(buf_258,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value202 = come_decrement_ref_count(__right_value202, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__176 = come_decrement_ref_count(__result_obj__176, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__176;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_262;
int i_263;
struct sType* __result_obj__172;
struct sType* default_value_264;
struct sType* __result_obj__173;
default_value_264 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_262=self->head;
    i_263=0;
    while(it_262!=((void*)0)) {
        if(        position==i_263) {
            __result_obj__172 = (struct sType*)come_increment_ref_count(it_262->item);
            /*c*/ come_call_finalizer3(__result_obj__172,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__172;
        }
        it_262=it_262->next;
        i_263++;
    }
    memset(&default_value_264,0,sizeof(struct sType*));
    __result_obj__173 = (struct sType*)come_increment_ref_count(default_value_264);
    /*c*/ come_call_finalizer3(default_value_264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__173,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__173;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_265;
int i_266;
struct sType* __result_obj__174;
struct sType* default_value_267;
struct sType* __result_obj__175;
default_value_267 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_265=self->head;
    i_266=0;
    while(it_265!=((void*)0)) {
        if(        position==i_266) {
            __result_obj__174 = (struct sType*)come_increment_ref_count(it_265->item);
            /*c*/ come_call_finalizer3(__result_obj__174,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__174;
        }
        it_265=it_265->next;
        i_266++;
    }
    memset(&default_value_267,0,sizeof(struct sType*));
    __result_obj__175 = (struct sType*)come_increment_ref_count(default_value_267);
    /*c*/ come_call_finalizer3(default_value_267,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__175,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__175;
}

void show_type(struct sType* type, struct sInfo* info){
void* __right_value203 = (void*)0;
    puts(((char*)(__right_value203=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))));
    (__right_value203 = come_decrement_ref_count(__right_value203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct buffer* buf_270;
void* __right_value206 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_271=0;
char* Err_272=0;
void* __right_value207 = (void*)0;
char* __result_obj__177;
int i_273;
struct list$1sType$ph* o2_saved_274;
struct sType* it_275;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
char* __result_obj__178;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
int i_276;
int i_277;
struct list$1sType$ph* o2_saved_278;
struct sType* it_279;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
char* __result_obj__179;
void* __right_value218 = (void*)0;
char* __result_obj__180;
    buf_270=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 204, "struct buffer*"))));
    if(    type->mResultType==((void*)0)) {
        multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value206=err_msg(info,"invalid lambda type")));
        come_exception_var_c2_271=multiple_assign_var2->v1;
        Err_272=(char*)come_increment_ref_count(multiple_assign_var2->v2);
        ((Err_272)?(puts(Err_272),exit(2)):(0));
        /*c*/ come_call_finalizer3(__right_value206,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value207=__builtin_string(""))));
        (Err_272 = come_decrement_ref_count(Err_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(buf_270,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value207 = come_decrement_ref_count(__right_value207, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__177;
        (Err_272 = come_decrement_ref_count(Err_272, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    type->mResultType&&string_operator_equals(type->mResultType->mClass->mName,"lambda")) {
        buffer_append_format(buf_270,"(*%s)(",var_name);
        i_273=0;
        for(        o2_saved_274=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_275=list$1sType$ph_begin((o2_saved_274));        !list$1sType$ph_end((o2_saved_274));        it_275=list$1sType$ph_next((o2_saved_274))        ){
            buffer_append_str(buf_270,((char*)(__right_value208=make_type_name_string(it_275,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value208 = come_decrement_ref_count(__right_value208, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_273!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_270,",");
            }
            i_273++;
        }
        /*c*/ come_call_finalizer3(o2_saved_274,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_270,")");
        if(        type->mAttribute) {
            buffer_append_str(buf_270,((char*)(__right_value209=charp_operator_add(" ",type->mAttribute))));
            (__right_value209 = come_decrement_ref_count(__right_value209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__178 = (char*)come_increment_ref_count(((char*)(__right_value211=make_lambda_type_name_string(type->mResultType,((char*)(__right_value210=buffer_to_string(buf_270))),info))));
        /*c*/ come_call_finalizer3(buf_270,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value210 = come_decrement_ref_count(__right_value210, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value211 = come_decrement_ref_count(__right_value211, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__178 = come_decrement_ref_count(__result_obj__178, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__178;
    }
    else {
        if(        type->mLambdaArray) {
            if(            type->mLambdaArrayNum==0) {
                buffer_append_format(buf_270,"%s (*%s[])(",((char*)(__right_value212=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name);
                (__right_value212 = come_decrement_ref_count(__right_value212, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_format(buf_270,"%s (*%s[%d])(",((char*)(__right_value213=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))),var_name,type->mLambdaArrayNum);
                (__right_value213 = come_decrement_ref_count(__right_value213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append_format(buf_270,"%s ",((char*)(__right_value214=make_type_name_string(type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value214 = come_decrement_ref_count(__right_value214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            type->mFunctionPointerNum>1) {
                buffer_append_str(buf_270,"(");
                for(                i_276=0;                i_276<type->mFunctionPointerNum;                i_276++                ){
                    buffer_append_str(buf_270,"*");
                }
                buffer_append_format(buf_270,"%s)(",var_name);
            }
            else {
                buffer_append_format(buf_270,"(*%s)(",var_name);
            }
        }
        i_277=0;
        for(        o2_saved_278=(struct list$1sType$ph*)come_increment_ref_count((type->mParamTypes)),it_279=list$1sType$ph_begin((o2_saved_278));        !list$1sType$ph_end((o2_saved_278));        it_279=list$1sType$ph_next((o2_saved_278))        ){
            buffer_append_str(buf_270,((char*)(__right_value215=make_type_name_string(it_279,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
            (__right_value215 = come_decrement_ref_count(__right_value215, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            i_277!=list$1sType$ph_length(type->mParamTypes)-1) {
                buffer_append_str(buf_270,",");
            }
            i_277++;
        }
        /*c*/ come_call_finalizer3(o2_saved_278,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_270,")");
        if(        type->mAttribute) {
            buffer_append_str(buf_270,((char*)(__right_value216=charp_operator_add(" ",type->mAttribute))));
            (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value217=buffer_to_string(buf_270))));
        /*c*/ come_call_finalizer3(buf_270,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value217 = come_decrement_ref_count(__right_value217, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__179;
    }
    __result_obj__180 = (char*)come_increment_ref_count(((char*)(__right_value218=buffer_to_string(buf_270))));
    /*c*/ come_call_finalizer3(buf_270,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value218 = come_decrement_ref_count(__right_value218, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__180 = come_decrement_ref_count(__result_obj__180, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct buffer* buf_280;
void* __right_value259 = (void*)0;
struct sType* type2_281;
void* __right_value260 = (void*)0;
char* str_305;
void* __right_value261 = (void*)0;
char* str_306;
void* __right_value262 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_307=0;
char* Err_308=0;
void* __right_value263 = (void*)0;
char* __result_obj__196;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_309;
void* __right_value265 = (void*)0;
char* type_str_310;
void* __right_value266 = (void*)0;
char* type_str_311;
struct list$1sNode$ph* o2_saved_312;
struct sNode* it_315;
void* __right_value267 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_318=0;
char* Err_319=0;
void* __right_value268 = (void*)0;
char* __result_obj__203;
void* __right_value269 = (void*)0;
struct CVALUE* cvalue_320;
void* __right_value270 = (void*)0;
char* type_str_321;
void* __right_value271 = (void*)0;
char* __result_obj__204;
void* __right_value272 = (void*)0;
char* __result_obj__205;
    buf_280=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 281, "struct buffer*"))));
    type2_281=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    type2_281->mArrayPointerType) {
        type2_281->mPointerNum--;
    }
    if(    string_operator_equals(type2_281->mClass->mName,"lambda")&&type2_281->mAsmName!=((void*)0)&&string_operator_not_equals(type2_281->mAsmName,"")) {
        str_305=(char*)come_increment_ref_count(header_lambda(type2_281,(char*)come_increment_ref_count(type2_281->mAsmName),info));
        buffer_append_str(buf_280,str_305);
        (str_305 = come_decrement_ref_count(str_305, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    string_operator_equals(type2_281->mClass->mName,"lambda")) {
        str_306=(char*)come_increment_ref_count(make_lambda_type_name_string(type2_281,name,info));
        buffer_append_str(buf_280,str_306);
        (str_306 = come_decrement_ref_count(str_306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    type2_281->mSizeNum!=((void*)0)) {
        if(        !node_compile(type2_281->mSizeNum,info)) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value262=err_msg(info,"invalid bit field number")));
            come_exception_var_c3_307=multiple_assign_var3->v1;
            Err_308=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_308)?(puts(Err_308),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value262,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__196 = (char*)come_increment_ref_count(((char*)(__right_value263=__builtin_string(""))));
            (Err_308 = come_decrement_ref_count(Err_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value263 = come_decrement_ref_count(__right_value263, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__196 = come_decrement_ref_count(__result_obj__196, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__196;
            (Err_308 = come_decrement_ref_count(Err_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_value_309=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        type_str_310=(char*)come_increment_ref_count(make_type_name_string(type2_281,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_format(buf_280,"%s ",type_str_310);
        buffer_append_format(buf_280,"%s:%s",name,come_value_309->c_value);
        if(        type2_281->mAsmName!=((void*)0)&&string_operator_not_equals(type2_281->mAsmName,"")) {
            buffer_append_format(buf_280," __asm__(\"%s\")",type2_281->mAsmName);
        }
        if(        type2_281->mAsmName!=((void*)0)&&string_operator_not_equals(type2_281->mAsmName,"")) {
            buffer_append_format(buf_280," __asm__(\"%s\")",type2_281->mAsmName);
        }
        /*c*/ come_call_finalizer3(come_value_309,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (type_str_310 = come_decrement_ref_count(type_str_310, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(type2_281->mArrayNum)>0) {
        type_str_311=(char*)come_increment_ref_count(make_type_name_string(type2_281,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        buffer_append_str(buf_280,type_str_311);
        buffer_append_str(buf_280," ");
        buffer_append_str(buf_280,name);
        for(        o2_saved_312=(struct list$1sNode$ph*)come_increment_ref_count((type2_281->mArrayNum)),it_315=list$1sNode$ph_begin((o2_saved_312));        !list$1sNode$ph_end((o2_saved_312));        it_315=list$1sNode$ph_next((o2_saved_312))        ){
            if(            !node_compile(it_315,info)) {
                multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value267=err_msg(info,"invalid array number")));
                come_exception_var_c4_318=multiple_assign_var4->v1;
                Err_319=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                ((Err_319)?(puts(Err_319),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value267,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__203 = (char*)come_increment_ref_count(((char*)(__right_value268=__builtin_string(""))));
                (Err_319 = come_decrement_ref_count(Err_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(o2_saved_312,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (type_str_311 = come_decrement_ref_count(type_str_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(buf_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type2_281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__203 = come_decrement_ref_count(__result_obj__203, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__203;
                (Err_319 = come_decrement_ref_count(Err_319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            cvalue_320=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            buffer_append_format(buf_280,"[%s]",cvalue_320->c_value);
            /*c*/ come_call_finalizer3(cvalue_320,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_312,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        type2_281->mArrayPointerType) {
            buffer_append_str(buf_280,"[]");
        }
        if(        type2_281->mAsmName!=((void*)0)&&string_operator_not_equals(type2_281->mAsmName,"")) {
            buffer_append_format(buf_280," __asm__(\"%s\")",type2_281->mAsmName);
        }
        (type_str_311 = come_decrement_ref_count(type_str_311, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        type_str_321=(char*)come_increment_ref_count(make_type_name_string(type2_281,in_header,(_Bool)0,(_Bool)0,info,(_Bool)0));
        if(        string_operator_equals(type_str_321,"")) {
            __result_obj__204 = (char*)come_increment_ref_count(((char*)(__right_value271=__builtin_string(""))));
            (type_str_321 = come_decrement_ref_count(type_str_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(buf_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type2_281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__204 = come_decrement_ref_count(__result_obj__204, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__204;
        }
        buffer_append_str(buf_280,type_str_321);
        buffer_append_str(buf_280," ");
        buffer_append_str(buf_280,name);
        if(        type2_281->mArrayPointerType) {
            buffer_append_str(buf_280,"[]");
        }
        if(        type2_281->mAsmName!=((void*)0)&&string_operator_not_equals(type2_281->mAsmName,"")) {
            buffer_append_format(buf_280," __asm__(\"%s\")",type2_281->mAsmName);
        }
        (type_str_321 = come_decrement_ref_count(type_str_321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__205 = (char*)come_increment_ref_count(((char*)(__right_value272=buffer_to_string(buf_280))));
    /*c*/ come_call_finalizer3(buf_280,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_281,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__205 = come_decrement_ref_count(__result_obj__205, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__205;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__181;
void* __right_value221 = (void*)0;
struct sType* result_282;
void* __right_value222 = (void*)0;
struct sType* __dec_obj16;
void* __right_value223 = (void*)0;
struct sType* __dec_obj17;
void* __right_value231 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value232 = (void*)0;
struct sType* __dec_obj22;
void* __right_value233 = (void*)0;
struct sType* __dec_obj23;
void* __right_value235 = (void*)0;
struct sNode* __dec_obj24;
void* __right_value236 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value237 = (void*)0;
char* __dec_obj26;
void* __right_value238 = (void*)0;
char* __dec_obj27;
void* __right_value239 = (void*)0;
char* __dec_obj28;
void* __right_value247 = (void*)0;
struct list$1sNode$ph* __dec_obj32;
void* __right_value248 = (void*)0;
char* __dec_obj33;
void* __right_value249 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value257 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value258 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__195;
    if(    self==(void*)0) {
        __result_obj__181 = (void*)0;
        return __result_obj__181;
    }
    result_282=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_282->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj16=result_282->mOriginalLoadVarType,
        result_282->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj16,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj17=result_282->mChannelType,
        result_282->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj21=result_282->mGenericsTypes,
        result_282->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj22=result_282->mNoSolvedGenericsType,
        result_282->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_282->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj23=result_282->mAnyOriginalType,
        result_282->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj24=result_282->mSizeNum,
        result_282->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj25=result_282->mAlignas,
        result_282->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj26=result_282->mTupleName,
        result_282->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj27=result_282->mAttribute,
        result_282->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_282->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_282->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_282->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_282->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_282->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_282->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_282->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_282->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_282->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_282->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_282->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_282->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_282->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_282->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_282->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_282->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_282->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_282->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_282->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_282->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_282->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_282->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_282->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_282->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj28=result_282->mAsmName,
        result_282->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_282->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_282->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_282->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj32=result_282->mArrayNum,
        result_282->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj32,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_282->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_282->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_282->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_282->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_282->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_282->mOriginalTypeName,
        result_282->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_282->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_282->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_282->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_282->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj34=result_282->mParamTypes,
        result_282->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_282->mParamNames,
        result_282->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_282->mResultType,
        result_282->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_282->mVarArgs=self->mVarArgs;
    }
    __result_obj__195 = result_282;
    /*c*/ come_call_finalizer3(result_282,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__182;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct list$1sType$ph* result_283;
struct list_item$1sType$ph* it_284;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct list$1sType$ph* __result_obj__185;
    if(    self==((void*)0)) {
        __result_obj__182 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__182,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__182;
    }
    result_283=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1022, "struct list$1sType$ph*"))));
    it_284=self->head;
    while(it_284!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_283,(struct sType*)come_increment_ref_count(sType_clone(it_284->item)));
        }
        else {
            list$1sType$ph_add(result_283,(struct sType*)come_increment_ref_count(sType_clone(it_284->item)));
        }
        it_284=it_284->next;
    }
    __result_obj__185 = (struct list$1sType$ph*)come_increment_ref_count(result_283);
    /*c*/ come_call_finalizer3(result_283,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__185,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__183;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__183 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value226 = (void*)0;
struct list_item$1sType$ph* litem_285;
struct sType* __dec_obj18;
void* __right_value227 = (void*)0;
struct list_item$1sType$ph* litem_286;
struct sType* __dec_obj19;
void* __right_value228 = (void*)0;
struct list_item$1sType$ph* litem_287;
struct sType* __dec_obj20;
struct list$1sType$ph* __result_obj__184;
    if(    self->len==0) {
        litem_285=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value226=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1041, "struct list_item$1sType$ph*"))));
        litem_285->prev=((void*)0);
        litem_285->next=((void*)0);
        __dec_obj18=litem_285->item,
        litem_285->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_285;
        self->head=litem_285;
    }
    else if(    self->len==1) {
        litem_286=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value227=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1051, "struct list_item$1sType$ph*"))));
        litem_286->prev=self->head;
        litem_286->next=((void*)0);
        __dec_obj19=litem_286->item,
        litem_286->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_286;
        self->head->next=litem_286;
    }
    else {
        litem_287=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value228=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1061, "struct list_item$1sType$ph*"))));
        litem_287->prev=self->tail;
        litem_287->next=((void*)0);
        __dec_obj20=litem_287->item,
        litem_287->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_287;
        self->tail=litem_287;
    }
    self->len++;
    __result_obj__184 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_288;
struct list_item$1sType$ph* prev_it_289;
    it_288=self->head;
    while(it_288!=((void*)0)) {
        prev_it_289=it_288;
        it_288=it_288->next;
        /*c*/ come_call_finalizer3(prev_it_289,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__186;
void* __right_value234 = (void*)0;
struct sNode* result_290;
struct sNode* __result_obj__187;
    if(    self==(void*)0) {
        __result_obj__186 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__186;
    }
    result_290=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_290->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_290->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_290->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_290->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_290->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_290->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_290->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_290->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_290->kind=self->kind;
    }
    __result_obj__187 = (struct sNode*)come_increment_ref_count(result_290);
    ((result_290) ? result_290 = come_decrement_ref_count(result_290, ((struct sNode*)result_290)->finalize, ((struct sNode*)result_290)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__187) ? __result_obj__187 = come_decrement_ref_count(__result_obj__187, ((struct sNode*)__result_obj__187)->finalize, ((struct sNode*)__result_obj__187)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__187;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__188;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1sNode$ph* result_291;
struct list_item$1sNode$ph* it_292;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1sNode$ph* __result_obj__191;
    if(    self==((void*)0)) {
        __result_obj__188 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__188,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__188;
    }
    result_291=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_292=self->head;
    while(it_292!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_291,(struct sNode*)come_increment_ref_count(sNode_clone(it_292->item)));
        }
        else {
            list$1sNode$ph_add(result_291,(struct sNode*)come_increment_ref_count(sNode_clone(it_292->item)));
        }
        it_292=it_292->next;
    }
    __result_obj__191 = (struct list$1sNode$ph*)come_increment_ref_count(result_291);
    /*c*/ come_call_finalizer3(result_291,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__191,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__189;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__189 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value242 = (void*)0;
struct list_item$1sNode$ph* litem_293;
struct sNode* __dec_obj29;
void* __right_value243 = (void*)0;
struct list_item$1sNode$ph* litem_294;
struct sNode* __dec_obj30;
void* __right_value244 = (void*)0;
struct list_item$1sNode$ph* litem_295;
struct sNode* __dec_obj31;
struct list$1sNode$ph* __result_obj__190;
    if(    self->len==0) {
        litem_293=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value242=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1041, "struct list_item$1sNode$ph*"))));
        litem_293->prev=((void*)0);
        litem_293->next=((void*)0);
        __dec_obj29=litem_293->item,
        litem_293->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_293;
        self->head=litem_293;
    }
    else if(    self->len==1) {
        litem_294=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value243=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1051, "struct list_item$1sNode$ph*"))));
        litem_294->prev=self->head;
        litem_294->next=((void*)0);
        __dec_obj30=litem_294->item,
        litem_294->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_294;
        self->head->next=litem_294;
    }
    else {
        litem_295=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value244=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1061, "struct list_item$1sNode$ph*"))));
        litem_295->prev=self->tail;
        litem_295->next=((void*)0);
        __dec_obj31=litem_295->item,
        litem_295->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_295;
        self->tail=litem_295;
    }
    self->len++;
    __result_obj__190 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__190;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_296;
struct list_item$1sNode$ph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        /*c*/ come_call_finalizer3(prev_it_297,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__192;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
struct list$1char$ph* result_298;
struct list_item$1char$ph* it_299;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct list$1char$ph* __result_obj__194;
    if(    self==((void*)0)) {
        __result_obj__192 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__192,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__192;
    }
    result_298=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1022, "struct list$1char$ph*"))));
    it_299=self->head;
    while(it_299!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_298,(char*)come_increment_ref_count((char*)come_memdup(it_299->item, "./comelang.h", 1027, "char*")));
        }
        else {
            list$1char$ph_add(result_298,(char*)come_increment_ref_count((char*)come_memdup(it_299->item, "./comelang.h", 1030, "char*")));
        }
        it_299=it_299->next;
    }
    __result_obj__194 = (struct list$1char$ph*)come_increment_ref_count(result_298);
    /*c*/ come_call_finalizer3(result_298,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__194,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value252 = (void*)0;
struct list_item$1char$ph* litem_300;
char* __dec_obj35;
void* __right_value253 = (void*)0;
struct list_item$1char$ph* litem_301;
char* __dec_obj36;
void* __right_value254 = (void*)0;
struct list_item$1char$ph* litem_302;
char* __dec_obj37;
struct list$1char$ph* __result_obj__193;
    if(    self->len==0) {
        litem_300=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value252=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1041, "struct list_item$1char$ph*"))));
        litem_300->prev=((void*)0);
        litem_300->next=((void*)0);
        __dec_obj35=litem_300->item,
        litem_300->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_300;
        self->head=litem_300;
    }
    else if(    self->len==1) {
        litem_301=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value253=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1051, "struct list_item$1char$ph*"))));
        litem_301->prev=self->head;
        litem_301->next=((void*)0);
        __dec_obj36=litem_301->item,
        litem_301->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_301;
        self->head->next=litem_301;
    }
    else {
        litem_302=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value254=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1061, "struct list_item$1char$ph*"))));
        litem_302->prev=self->tail;
        litem_302->next=((void*)0);
        __dec_obj37=litem_302->item,
        litem_302->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_302;
        self->tail=litem_302;
    }
    self->len++;
    __result_obj__193 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__193;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_303;
struct list_item$1char$ph* prev_it_304;
    it_303=self->head;
    while(it_303!=((void*)0)) {
        prev_it_304=it_303;
        it_303=it_303->next;
        /*c*/ come_call_finalizer3(prev_it_304,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_313;
struct sNode* __result_obj__197;
struct sNode* __result_obj__198;
struct sNode* result_314;
struct sNode* __result_obj__199;
result_313 = (void*)0;
result_314 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_313,0,sizeof(struct sNode*));
        __result_obj__197 = result_313;
        return __result_obj__197;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__198 = self->it->item;
        return __result_obj__198;
    }
    memset(&result_314,0,sizeof(struct sNode*));
    __result_obj__199 = result_314;
    return __result_obj__199;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_316;
struct sNode* __result_obj__200;
struct sNode* __result_obj__201;
struct sNode* result_317;
struct sNode* __result_obj__202;
result_316 = (void*)0;
result_317 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_316,0,sizeof(struct sNode*));
        __result_obj__200 = result_316;
        return __result_obj__200;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_317,0,sizeof(struct sNode*));
    __result_obj__202 = result_317;
    return __result_obj__202;
}

struct sType* get_no_solved_type(struct sType* type){
struct sType* result_322;
struct sType* __dec_obj40;
void* __right_value273 = (void*)0;
struct sType* __dec_obj41;
int i_323;
struct list$1sType$ph* o2_saved_324;
struct sType* it_325;
void* __right_value277 = (void*)0;
struct sType* __result_obj__209;
result_322 = (void*)0;
    if(    type->mNoSolvedGenericsType) {
        __dec_obj40=result_322,
        result_322=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj41=result_322,
        result_322=(struct sType*)come_increment_ref_count(sType_clone(type));
        /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    i_323=0;
    for(    o2_saved_324=(struct list$1sType$ph*)come_increment_ref_count((type->mGenericsTypes)),it_325=list$1sType$ph_begin((o2_saved_324));    !list$1sType$ph_end((o2_saved_324));    it_325=list$1sType$ph_next((o2_saved_324))    ){
        list$1sType$ph$p_operator_store_element(result_322->mGenericsTypes,i_323,(struct sType*)come_increment_ref_count(get_no_solved_type(it_325)));
        i_323++;
    }
    /*c*/ come_call_finalizer3(o2_saved_324,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__209 = (struct sType*)come_increment_ref_count(result_322);
    /*c*/ come_call_finalizer3(result_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_326;
int i_327;
struct sType* default_value_328;
struct list$1sType$ph* __result_obj__207;
struct list_item$1sType$ph* it_332;
int i_333;
struct sType* __dec_obj45;
struct list$1sType$ph* __result_obj__208;
default_value_328 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_326=self->len;
        for(        i_327=0;        i_327<position-len_326;        i_327++        ){
            memset(&default_value_328,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_328));
            /*c*/ come_call_finalizer3(default_value_328,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__207 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__207;
    }
    it_332=self->head;
    i_333=0;
    while(it_332!=((void*)0)) {
        if(        position==i_333) {
            __dec_obj45=it_332->item,
            it_332->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj45,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_332=it_332->next;
        i_333++;
    }
    __result_obj__208 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value274 = (void*)0;
struct list_item$1sType$ph* litem_329;
struct sType* __dec_obj42;
void* __right_value275 = (void*)0;
struct list_item$1sType$ph* litem_330;
struct sType* __dec_obj43;
void* __right_value276 = (void*)0;
struct list_item$1sType$ph* litem_331;
struct sType* __dec_obj44;
struct list$1sType$ph* __result_obj__206;
    if(    self->len==0) {
        litem_329=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value274=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1111, "struct list_item$1sType$ph*"))));
        litem_329->prev=((void*)0);
        litem_329->next=((void*)0);
        __dec_obj42=litem_329->item,
        litem_329->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_329;
        self->head=litem_329;
    }
    else if(    self->len==1) {
        litem_330=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value275=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1121, "struct list_item$1sType$ph*"))));
        litem_330->prev=self->head;
        litem_330->next=((void*)0);
        __dec_obj43=litem_330->item,
        litem_330->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_330;
        self->head->next=litem_330;
    }
    else {
        litem_331=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value276=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1131, "struct list_item$1sType$ph*"))));
        litem_331->prev=self->tail;
        litem_331->next=((void*)0);
        __dec_obj44=litem_331->item,
        litem_331->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_331;
        self->tail=litem_331;
    }
    self->len++;
    __result_obj__206 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__206;
}

char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info){
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct buffer* buf_334;
int i_335;
void* __right_value280 = (void*)0;
char* __result_obj__210;
void* __right_value281 = (void*)0;
struct sType* no_solved_type_336;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct buffer* buf_337;
char* class_name_338;
int i_339;
void* __right_value284 = (void*)0;
struct sType* gtype_340;
void* __right_value285 = (void*)0;
int i_341;
int i_342;
void* __right_value286 = (void*)0;
char* __result_obj__211;
    if(    original_type_name&&type->mOriginalTypeName&&string_operator_not_equals(type->mOriginalTypeName,"")) {
        buf_334=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 390, "struct buffer*"))));
        buffer_append_str(buf_334,type->mOriginalTypeName);
        for(        i_335=0;        i_335<type->mOriginalTypeNamePointerNum;        i_335++        ){
            buffer_append_str(buf_334,"*");
        }
        if(        type->mOriginalTypeNameHeap) {
            buffer_append_str(buf_334,"%");
        }
        __result_obj__210 = (char*)come_increment_ref_count(((char*)(__right_value280=buffer_to_string(buf_334))));
        /*c*/ come_call_finalizer3(buf_334,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value280 = come_decrement_ref_count(__right_value280, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__210;
        /*c*/ come_call_finalizer3(buf_334,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        no_solved_type_336=(struct sType*)come_increment_ref_count(get_no_solved_type(type));
        buf_337=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 405, "struct buffer*"))));
        class_name_338=no_solved_type_336->mClass->mName;
        buffer_append_str(buf_337,class_name_338);
        if(        list$1sType$ph_length(no_solved_type_336->mGenericsTypes)>0) {
            buffer_append_str(buf_337,"<");
            for(            i_339=0;            i_339<list$1sType$ph_length(no_solved_type_336->mGenericsTypes);            i_339++            ){
                gtype_340=((struct sType*)(__right_value284=list$1sType$ph_operator_load_element(no_solved_type_336->mGenericsTypes,i_339)));
                /*c*/ come_call_finalizer3(__right_value284,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                buffer_append_str(buf_337,((char*)(__right_value285=make_come_type_name_string_no_solved(gtype_340,(_Bool)1,info))));
                (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                i_339!=list$1sType$ph_length(no_solved_type_336->mGenericsTypes)-1) {
                    buffer_append_str(buf_337,",");
                }
            }
            buffer_append_str(buf_337,">");
        }
        if(        charp_operator_not_equals(class_name_338,"lambda")) {
            for(            i_341=0;            i_341<no_solved_type_336->mPointerNum;            i_341++            ){
                buffer_append_str(buf_337,"*");
            }
        }
        if(        list$1sNode$ph_length(no_solved_type_336->mArrayNum)>0) {
            for(            i_342=0;            i_342<list$1sNode$ph_length(no_solved_type_336->mArrayNum);            i_342++            ){
                buffer_append_str(buf_337,"[]");
            }
        }
        if(        no_solved_type_336->mHeap) {
            buffer_append_str(buf_337,"%");
        }
        __result_obj__211 = (char*)come_increment_ref_count(((char*)(__right_value286=buffer_to_string(buf_337))));
        /*c*/ come_call_finalizer3(no_solved_type_336,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_337,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__211;
        /*c*/ come_call_finalizer3(no_solved_type_336,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_337,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info){
void* __right_value287 = (void*)0;
char* type_name_343;
void* __right_value288 = (void*)0;
char* __result_obj__212;
    type_name_343=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(type,original_type_name,info));
    __result_obj__212 = (char*)come_increment_ref_count(((char*)(__right_value288=xsprintf("%s %s",type_name_343,name))));
    (type_name_343 = come_decrement_ref_count(type_name_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value288 = come_decrement_ref_count(__right_value288, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__212;
}

char* make_come_header_function(struct sFun* fun, char* base_fun_name, struct sType* impl_type, int version_, struct sInfo* info){
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct buffer* header_344;
void* __right_value291 = (void*)0;
char* result_type_name_345;
void* __right_value292 = (void*)0;
char* impl_name_346;
int i_347;
void* __right_value293 = (void*)0;
struct sType* param_type_348;
void* __right_value294 = (void*)0;
char* param_name_355;
void* __right_value295 = (void*)0;
char* default_parametor_356;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* __result_obj__217;
    header_344=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 455, "struct buffer*"))));
    result_type_name_345=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(fun->mResultType,(_Bool)0,info));
    if(    impl_type) {
        impl_name_346=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(impl_type,(_Bool)0,info));
        buffer_append_format(header_344,"extern %s %s::%s(",result_type_name_345,impl_name_346,base_fun_name);
        (impl_name_346 = come_decrement_ref_count(impl_name_346, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_format(header_344,"extern %s %s(",result_type_name_345,base_fun_name);
    }
    for(    i_347=0;    i_347<list$1sType$ph_length(fun->mParamTypes);    i_347++    ){
        param_type_348=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(fun->mParamTypes,i_347));
        param_name_355=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamNames,i_347));
        default_parametor_356=(char*)come_increment_ref_count(list$1char$ph_operator_load_element(fun->mParamDefaultParametors,i_347));
        if(        default_parametor_356) {
            buffer_append_format(header_344,"%s %s=%s",((char*)(__right_value296=make_come_type_name_string_no_solved(param_type_348,(_Bool)0,info))),param_name_355,default_parametor_356);
            (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(header_344,"%s %s",((char*)(__right_value297=make_come_type_name_string_no_solved(param_type_348,(_Bool)0,info))),param_name_355);
            (__right_value297 = come_decrement_ref_count(__right_value297, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_347!=list$1sType$ph_length(fun->mParamTypes)-1) {
            buffer_append_str(header_344,",");
        }
        /*c*/ come_call_finalizer3(param_type_348,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (param_name_355 = come_decrement_ref_count(param_name_355, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (default_parametor_356 = come_decrement_ref_count(default_parametor_356, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    version_==-1||version_==0) {
        buffer_append_str(header_344,");\n");
    }
    else {
        buffer_append_format(header_344,") version %d;\n",version_);
    }
    __result_obj__217 = (char*)come_increment_ref_count(((char*)(__right_value298=buffer_to_string(header_344))));
    (base_fun_name = come_decrement_ref_count(base_fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(impl_type,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(header_344,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_name_345 = come_decrement_ref_count(result_type_name_345, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value298 = come_decrement_ref_count(__right_value298, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__217 = come_decrement_ref_count(__result_obj__217, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__217;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_349;
int i_350;
char* __result_obj__213;
char* default_value_351;
char* __result_obj__214;
default_value_351 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_349=self->head;
    i_350=0;
    while(it_349!=((void*)0)) {
        if(        position==i_350) {
            __result_obj__213 = (char*)come_increment_ref_count(it_349->item);
            (__result_obj__213 = come_decrement_ref_count(__result_obj__213, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__213;
        }
        it_349=it_349->next;
        i_350++;
    }
    memset(&default_value_351,0,sizeof(char*));
    __result_obj__214 = (char*)come_increment_ref_count(default_value_351);
    (default_value_351 = come_decrement_ref_count(default_value_351, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__214 = come_decrement_ref_count(__result_obj__214, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__214;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_352;
int i_353;
char* __result_obj__215;
char* default_value_354;
char* __result_obj__216;
default_value_354 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_352=self->head;
    i_353=0;
    while(it_352!=((void*)0)) {
        if(        position==i_353) {
            __result_obj__215 = (char*)come_increment_ref_count(it_352->item);
            (__result_obj__215 = come_decrement_ref_count(__result_obj__215, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__215;
        }
        it_352=it_352->next;
        i_353++;
    }
    memset(&default_value_354,0,sizeof(char*));
    __result_obj__216 = (char*)come_increment_ref_count(default_value_354);
    (default_value_354 = come_decrement_ref_count(default_value_354, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__216 = come_decrement_ref_count(__result_obj__216, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__216;
}

char* output_function(struct sFun* fun, struct sInfo* info){
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct buffer* output_357;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct buffer* output2_358;
int i_359;
struct list$1sType$ph* o2_saved_360;
struct sType* it_361;
void* __right_value303 = (void*)0;
char* name_362;
void* __right_value304 = (void*)0;
char* str_363;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
char* str_364;
void* __right_value307 = (void*)0;
struct sType* base_result_type_365;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1sNode$ph* __dec_obj46;
void* __right_value310 = (void*)0;
char* result_type_str_366;
int i_367;
struct list$1sType$ph* o2_saved_368;
struct sType* it_369;
void* __right_value311 = (void*)0;
char* name_370;
void* __right_value312 = (void*)0;
char* str_371;
void* __right_value313 = (void*)0;
struct sNode* node_372;
void* __right_value314 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_379=0;
char* Err_380=0;
void* __right_value315 = (void*)0;
char* __result_obj__222;
void* __right_value316 = (void*)0;
struct CVALUE* cvalue_381;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* result_type_str_382;
int i_383;
struct list$1sType$ph* o2_saved_384;
struct sType* it_385;
void* __right_value319 = (void*)0;
char* name_386;
void* __right_value320 = (void*)0;
char* str_387;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __result_obj__223;
    output_357=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 496, "struct buffer*"))));
    if(    fun->mResultType->mResultType) {
        output2_358=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 498, "struct buffer*"))));
        buffer_append_str(output2_358,fun->mName);
        buffer_append_str(output2_358,"(");
        i_359=0;
        for(        o2_saved_360=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_361=list$1sType$ph_begin((o2_saved_360));        !list$1sType$ph_end((o2_saved_360));        it_361=list$1sType$ph_next((o2_saved_360))        ){
            name_362=((char*)(__right_value303=list$1char$ph_operator_load_element(fun->mParamNames,i_359)));
            (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_363=(char*)come_increment_ref_count(make_define_var(it_361,name_362,(_Bool)0,info));
            buffer_append_str(output2_358,str_363);
            if(            i_359==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output2_358,", ...");
                }
            }
            else {
                buffer_append_str(output2_358,", ");
            }
            i_359++;
            (str_363 = come_decrement_ref_count(str_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_360,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_358,")");
        str_364=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value305=buffer_to_string(output2_358))),info));
        (__right_value305 = come_decrement_ref_count(__right_value305, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic) {
            buffer_append_str(output_357,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_357,"inline ");
        }
        buffer_append_str(output_357,str_364);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value307=buffer_to_string(output_357))));
        (__right_value307 = come_decrement_ref_count(__right_value307, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(output2_358,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_364 = come_decrement_ref_count(str_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_365=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj46=base_result_type_365->mArrayNum,
        base_result_type_365->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 552, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_366=(char*)come_increment_ref_count(make_type_name_string(base_result_type_365,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_357,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_357,"inline ");
        }
        buffer_append_str(output_357,result_type_str_366);
        buffer_append_str(output_357," (*");
        buffer_append_str(output_357,fun->mName);
        buffer_append_str(output_357,"(");
        i_367=0;
        for(        o2_saved_368=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_369=list$1sType$ph_begin((o2_saved_368));        !list$1sType$ph_end((o2_saved_368));        it_369=list$1sType$ph_next((o2_saved_368))        ){
            name_370=((char*)(__right_value311=list$1char$ph_operator_load_element(fun->mParamNames,i_367)));
            (__right_value311 = come_decrement_ref_count(__right_value311, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_371=(char*)come_increment_ref_count(make_define_var(it_369,name_370,(_Bool)0,info));
            buffer_append_str(output_357,str_371);
            if(            i_367==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_357,", ...");
                }
            }
            else {
                buffer_append_str(output_357,", ");
            }
            i_367++;
            (str_371 = come_decrement_ref_count(str_371, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_368,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_372=((struct sNode*)(__right_value313=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value313) ? __right_value313 = come_decrement_ref_count(__right_value313, ((struct sNode*)__right_value313)->finalize, ((struct sNode*)__right_value313)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_372,info)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value314=err_msg(info,"invalid array number")));
            come_exception_var_c5_379=multiple_assign_var5->v1;
            Err_380=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_380)?(puts(Err_380),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value314,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__222 = (char*)come_increment_ref_count(((char*)(__right_value315=__builtin_string(""))));
            (Err_380 = come_decrement_ref_count(Err_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(base_result_type_365,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_366 = come_decrement_ref_count(result_type_str_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_357,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__222;
            (Err_380 = come_decrement_ref_count(Err_380, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        cvalue_381=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_357,"))[%s]",cvalue_381->c_value);
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value317=buffer_to_string(output_357))));
        (__right_value317 = come_decrement_ref_count(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        /*c*/ come_call_finalizer3(base_result_type_365,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_366 = come_decrement_ref_count(result_type_str_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_381,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_382=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_357,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_357,"inline ");
        }
        buffer_append_str(output_357,result_type_str_382);
        buffer_append_str(output_357," ");
        buffer_append_str(output_357,fun->mName);
        buffer_append_str(output_357,"(");
        i_383=0;
        for(        o2_saved_384=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_385=list$1sType$ph_begin((o2_saved_384));        !list$1sType$ph_end((o2_saved_384));        it_385=list$1sType$ph_next((o2_saved_384))        ){
            name_386=((char*)(__right_value319=list$1char$ph_operator_load_element(fun->mParamNames,i_383)));
            (__right_value319 = come_decrement_ref_count(__right_value319, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_387=(char*)come_increment_ref_count(make_define_var(it_385,name_386,(_Bool)0,info));
            buffer_append_str(output_357,str_387);
            if(            i_383==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_357,", ...");
                }
            }
            else {
                buffer_append_str(output_357,", ");
            }
            i_383++;
            (str_387 = come_decrement_ref_count(str_387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_384,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output_357,")");
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value321=buffer_to_string(output_357))));
        (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(info->module->mSourceHead,";\n");
        (result_type_str_382 = come_decrement_ref_count(result_type_str_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    buffer_append_str(output_357,"{\n");
    buffer_append_str(output_357,((char*)(__right_value322=buffer_to_string(fun->mSourceHead))));
    (__right_value322 = come_decrement_ref_count(__right_value322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_357,((char*)(__right_value323=buffer_to_string(fun->mSourceHead2))));
    (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_357,((char*)(__right_value324=buffer_to_string(fun->mSource))));
    (__right_value324 = come_decrement_ref_count(__right_value324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    buffer_append_str(output_357,"}\n");
    __result_obj__223 = (char*)come_increment_ref_count(((char*)(__right_value325=buffer_to_string(output_357))));
    /*c*/ come_call_finalizer3(output_357,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value325 = come_decrement_ref_count(__right_value325, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__223 = come_decrement_ref_count(__result_obj__223, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__223;
}

static struct sNode* list$1sNode$ph$p_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_373;
int i_374;
struct sNode* __result_obj__218;
struct sNode* default_value_375;
struct sNode* __result_obj__219;
default_value_375 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_373=self->head;
    i_374=0;
    while(it_373!=((void*)0)) {
        if(        position==i_374) {
            __result_obj__218 = (struct sNode*)come_increment_ref_count(it_373->item);
            ((__result_obj__218) ? __result_obj__218 = come_decrement_ref_count(__result_obj__218, ((struct sNode*)__result_obj__218)->finalize, ((struct sNode*)__result_obj__218)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__218;
        }
        it_373=it_373->next;
        i_374++;
    }
    memset(&default_value_375,0,sizeof(struct sNode*));
    __result_obj__219 = (struct sNode*)come_increment_ref_count(default_value_375);
    ((default_value_375) ? default_value_375 = come_decrement_ref_count(default_value_375, ((struct sNode*)default_value_375)->finalize, ((struct sNode*)default_value_375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__219) ? __result_obj__219 = come_decrement_ref_count(__result_obj__219, ((struct sNode*)__result_obj__219)->finalize, ((struct sNode*)__result_obj__219)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__219;
}

static struct sNode* list$1sNode$ph_operator_load_element(struct list$1sNode$ph* self, int position){
struct list_item$1sNode$ph* it_376;
int i_377;
struct sNode* __result_obj__220;
struct sNode* default_value_378;
struct sNode* __result_obj__221;
default_value_378 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_376=self->head;
    i_377=0;
    while(it_376!=((void*)0)) {
        if(        position==i_377) {
            __result_obj__220 = (struct sNode*)come_increment_ref_count(it_376->item);
            ((__result_obj__220) ? __result_obj__220 = come_decrement_ref_count(__result_obj__220, ((struct sNode*)__result_obj__220)->finalize, ((struct sNode*)__result_obj__220)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__220;
        }
        it_376=it_376->next;
        i_377++;
    }
    memset(&default_value_378,0,sizeof(struct sNode*));
    __result_obj__221 = (struct sNode*)come_increment_ref_count(default_value_378);
    ((default_value_378) ? default_value_378 = come_decrement_ref_count(default_value_378, ((struct sNode*)default_value_378)->finalize, ((struct sNode*)default_value_378)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__221) ? __result_obj__221 = come_decrement_ref_count(__result_obj__221, ((struct sNode*)__result_obj__221)->finalize, ((struct sNode*)__result_obj__221)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__221;
}

char* header_function(struct sFun* fun, struct sInfo* info){
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct buffer* output_388;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct buffer* output2_389;
int i_390;
struct list$1sType$ph* o2_saved_391;
struct sType* it_392;
void* __right_value330 = (void*)0;
char* name_393;
void* __right_value331 = (void*)0;
char* str_394;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* str_395;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* base_result_type_396;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct list$1sNode$ph* __dec_obj47;
void* __right_value338 = (void*)0;
char* result_type_str_397;
int i_398;
struct list$1sType$ph* o2_saved_399;
struct sType* it_400;
void* __right_value339 = (void*)0;
char* name_401;
void* __right_value340 = (void*)0;
char* str_402;
void* __right_value341 = (void*)0;
struct sNode* node_403;
void* __right_value342 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_404=0;
char* Err_405=0;
void* __right_value343 = (void*)0;
char* __result_obj__224;
void* __right_value344 = (void*)0;
struct CVALUE* cvalue_406;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* result_type_str_407;
int i_408;
struct list$1sType$ph* o2_saved_409;
struct sType* it_410;
void* __right_value348 = (void*)0;
char* name_411;
void* __right_value349 = (void*)0;
char* str_412;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* __result_obj__225;
    output_388=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 678, "struct buffer*"))));
    if(    fun->mResultType->mResultType) {
        output2_389=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 681, "struct buffer*"))));
        buffer_append_str(output2_389,fun->mName);
        buffer_append_str(output2_389,"(");
        i_390=0;
        for(        o2_saved_391=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_392=list$1sType$ph_begin((o2_saved_391));        !list$1sType$ph_end((o2_saved_391));        it_392=list$1sType$ph_next((o2_saved_391))        ){
            name_393=((char*)(__right_value330=list$1char$ph_operator_load_element(fun->mParamNames,i_390)));
            (__right_value330 = come_decrement_ref_count(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_394=(char*)come_increment_ref_count(make_define_var(it_392,name_393,(_Bool)0,info));
            buffer_append_str(output2_389,str_394);
            if(            i_390!=list$1sType$ph_length(fun->mParamTypes)-1) {
                buffer_append_str(output2_389,", ");
            }
            i_390++;
            (str_394 = come_decrement_ref_count(str_394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_391,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(output2_389,")");
        str_395=(char*)come_increment_ref_count(make_lambda_type_name_string(fun->mResultType,((char*)(__right_value332=buffer_to_string(output2_389))),info));
        (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun->mStatic) {
            buffer_append_str(output_388,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_388,"inline ");
        }
        buffer_append_str(output_388,str_395);
        if(        string_operator_not_equals(fun->mFunAttribute,"")) {
            buffer_append_str(output_388,((char*)(__right_value335=xsprintf(" \%s ",((char*)(__right_value334=string_to_string(fun->mFunAttribute)))))));
            (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value335 = come_decrement_ref_count(__right_value335, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_str(output_388,";\n");
        /*c*/ come_call_finalizer3(output2_389,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (str_395 = come_decrement_ref_count(str_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1sNode$ph_length(fun->mResultType->mArrayNum)>0) {
        base_result_type_396=(struct sType*)come_increment_ref_count(fun->mResultType);
        __dec_obj47=base_result_type_396->mArrayNum,
        base_result_type_396->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "03output_code.c", 717, "struct list$1sNode$ph*"))));
        /*b*/ come_call_finalizer3(__dec_obj47,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_str_397=(char*)come_increment_ref_count(make_type_name_string(base_result_type_396,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_388,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_388,"inline ");
        }
        buffer_append_str(output_388,result_type_str_397);
        buffer_append_str(output_388," (*");
        buffer_append_str(output_388,fun->mName);
        buffer_append_str(output_388,"(");
        i_398=0;
        for(        o2_saved_399=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_400=list$1sType$ph_begin((o2_saved_399));        !list$1sType$ph_end((o2_saved_399));        it_400=list$1sType$ph_next((o2_saved_399))        ){
            name_401=((char*)(__right_value339=list$1char$ph_operator_load_element(fun->mParamNames,i_398)));
            (__right_value339 = come_decrement_ref_count(__right_value339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_402=(char*)come_increment_ref_count(make_define_var(it_400,name_401,(_Bool)0,info));
            buffer_append_str(output_388,str_402);
            if(            i_398==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_388,", ...");
                }
            }
            else {
                buffer_append_str(output_388,", ");
            }
            i_398++;
            (str_402 = come_decrement_ref_count(str_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_399,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        node_403=((struct sNode*)(__right_value341=list$1sNode$ph_operator_load_element(fun->mResultType->mArrayNum,0)));
        ((__right_value341) ? __right_value341 = come_decrement_ref_count(__right_value341, ((struct sNode*)__right_value341)->finalize, ((struct sNode*)__right_value341)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        if(        !node_compile(node_403,info)) {
            multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value342=err_msg(info,"invalid array number")));
            come_exception_var_c6_404=multiple_assign_var6->v1;
            Err_405=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            ((Err_405)?(puts(Err_405),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value342,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__224 = (char*)come_increment_ref_count(((char*)(__right_value343=__builtin_string(""))));
            (Err_405 = come_decrement_ref_count(Err_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(base_result_type_396,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (result_type_str_397 = come_decrement_ref_count(result_type_str_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(output_388,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (__right_value343 = come_decrement_ref_count(__right_value343, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__224 = come_decrement_ref_count(__result_obj__224, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__224;
            (Err_405 = come_decrement_ref_count(Err_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        cvalue_406=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        buffer_append_format(output_388,"))[%s]",cvalue_406->c_value);
        if(        string_operator_not_equals(fun->mAttribute,"")) {
            buffer_append_str(output_388,((char*)(__right_value346=xsprintf("\%s ",((char*)(__right_value345=string_to_string(fun->mAttribute)))))));
            (__right_value345 = come_decrement_ref_count(__right_value345, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value346 = come_decrement_ref_count(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        buffer_append_format(output_388,";\n");
        /*c*/ come_call_finalizer3(base_result_type_396,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (result_type_str_397 = come_decrement_ref_count(result_type_str_397, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(cvalue_406,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        result_type_str_407=(char*)come_increment_ref_count(make_type_name_string(fun->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
        if(        fun->mStatic) {
            buffer_append_str(output_388,"static ");
        }
        if(        fun->mInline) {
            buffer_append_str(output_388,"inline ");
        }
        buffer_append_str(output_388,result_type_str_407);
        buffer_append_str(output_388," ");
        buffer_append_str(output_388,fun->mName);
        buffer_append_str(output_388,"(");
        i_408=0;
        for(        o2_saved_409=(struct list$1sType$ph*)come_increment_ref_count((fun->mParamTypes)),it_410=list$1sType$ph_begin((o2_saved_409));        !list$1sType$ph_end((o2_saved_409));        it_410=list$1sType$ph_next((o2_saved_409))        ){
            name_411=((char*)(__right_value348=list$1char$ph_operator_load_element(fun->mParamNames,i_408)));
            (__right_value348 = come_decrement_ref_count(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            str_412=(char*)come_increment_ref_count(make_define_var(it_410,name_411,(_Bool)0,info));
            buffer_append_str(output_388,str_412);
            if(            i_408==list$1sType$ph_length(fun->mParamTypes)-1) {
                if(                fun->mVarArgs) {
                    buffer_append_str(output_388,", ...");
                }
            }
            else {
                buffer_append_str(output_388,", ");
            }
            i_408++;
            (str_412 = come_decrement_ref_count(str_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_409,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        string_operator_not_equals(fun->mFunAttribute,"")) {
            buffer_append_str(output_388,((char*)(__right_value351=xsprintf(") \%s;\n",((char*)(__right_value350=string_to_string(fun->mFunAttribute)))))));
            (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_str(output_388,");\n");
        }
        (result_type_str_407 = come_decrement_ref_count(result_type_str_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__225 = (char*)come_increment_ref_count(((char*)(__right_value352=buffer_to_string(output_388))));
    /*c*/ come_call_finalizer3(output_388,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value352 = come_decrement_ref_count(__right_value352, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__225 = come_decrement_ref_count(__result_obj__225, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__225;
}

static char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct buffer* output_413;
void* __right_value355 = (void*)0;
char* result_type_str_414;
int i_415;
struct list$1sType$ph* o2_saved_416;
struct sType* it_417;
void* __right_value356 = (void*)0;
char* name_418;
void* __right_value357 = (void*)0;
char* str_419;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
char* __result_obj__226;
    output_413=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "03output_code.c", 812, "struct buffer*"))));
    result_type_str_414=(char*)come_increment_ref_count(make_type_name_string(lambda_type->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    buffer_append_str(output_413,result_type_str_414);
    buffer_append_str(output_413," ");
    buffer_append_str(output_413,name);
    buffer_append_str(output_413,"(");
    i_415=0;
    for(    o2_saved_416=(struct list$1sType$ph*)come_increment_ref_count((lambda_type->mParamTypes)),it_417=list$1sType$ph_begin((o2_saved_416));    !list$1sType$ph_end((o2_saved_416));    it_417=list$1sType$ph_next((o2_saved_416))    ){
        name_418=((char*)(__right_value356=list$1char$ph_operator_load_element(lambda_type->mParamNames,i_415)));
        (__right_value356 = come_decrement_ref_count(__right_value356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        str_419=(char*)come_increment_ref_count(make_define_var(it_417,name_418,(_Bool)0,info));
        buffer_append_str(output_413,str_419);
        if(        i_415==list$1sType$ph_length(lambda_type->mParamTypes)-1) {
            if(            lambda_type->mVarArgs) {
                buffer_append_str(output_413,", ...");
            }
        }
        else {
            buffer_append_str(output_413,", ");
        }
        i_415++;
        (str_419 = come_decrement_ref_count(str_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_416,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    lambda_type->mAttribute) {
        buffer_append_str(output_413,((char*)(__right_value360=string_operator_add(((char*)(__right_value359=charp_operator_add(" ",lambda_type->mAttribute))),");\n"))));
        (__right_value358 = come_decrement_ref_count(__right_value358, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value359 = come_decrement_ref_count(__right_value359, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value360 = come_decrement_ref_count(__right_value360, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(output_413,");\n");
    }
    __result_obj__226 = (char*)come_increment_ref_count(((char*)(__right_value361=buffer_to_string(output_413))));
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(output_413,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (result_type_str_414 = come_decrement_ref_count(result_type_str_414, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value361 = come_decrement_ref_count(__right_value361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__226 = come_decrement_ref_count(__result_obj__226, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__226;
}

void add_come_code(struct sInfo* info, const char* msg, ...){
char* msg2_420;
va_list args_421;
int len_422;
int i_423;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
msg2_420 = (void*)0;
memset(&args_421, 0, sizeof(va_list));
memset(&i_423, 0, sizeof(int));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_421,msg);
    len_422=vasprintf(&msg2_420,msg,args_421);
    __builtin_va_end(args_421);
    if(    info->come_fun) {
        for(        i_423=0;        i_423<info->block_level;        i_423++        ){
            buffer_append_str(info->come_fun->mSource,"    ");
        }
        buffer_append_str(info->come_fun->mSource,((char*)(__right_value362=xsprintf("%s",msg2_420))));
        (__right_value362 = come_decrement_ref_count(__right_value362, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        buffer_append_str(info->module->mSourceHead,((char*)(__right_value363=xsprintf("%s",msg2_420))));
        (__right_value363 = come_decrement_ref_count(__right_value363, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    free(msg2_420);
    /*c*/ come_call_finalizer3((&args_421),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_424;
va_list args_425;
int len_426;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
_Bool _if_conditional1;
void* __right_value367 = (void*)0;
void* __right_value373 = (void*)0;
msg2_424 = (void*)0;
memset(&args_425, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_425,msg);
        len_426=vasprintf(&msg2_424,msg,args_425);
        __builtin_va_end(args_425);
        if(        (_if_conditional1=(((char*)(__right_value366=map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value365=__builtin_string(id))))))==((void*)0))),        (__right_value364 = come_decrement_ref_count(__right_value364, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value365 = come_decrement_ref_count(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            map$2char$phchar$ph$p_operator_store_element(info->module->mHeader,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_424)));
        }
        free(msg2_424);
        /*c*/ come_call_finalizer3((&args_425),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phchar$ph$p_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_427;
unsigned int hash_428;
unsigned int it_429;
char* __result_obj__227;
char* __result_obj__228;
char* __result_obj__229;
char* __result_obj__230;
default_value_427 = (void*)0;
    memset(&default_value_427,0,sizeof(char*));
    hash_428=string_get_hash_key(((char*)key))%self->size;
    it_429=hash_428;
    while((_Bool)1) {
        if(        self->item_existance[it_429]) {
            if(            string_equals(self->keys[it_429],key)) {
                __result_obj__227 = (char*)come_increment_ref_count(self->items[it_429]);
                (default_value_427 = come_decrement_ref_count(default_value_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__227 = come_decrement_ref_count(__result_obj__227, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__227;
            }
            it_429++;
            if(            it_429>=self->size) {
                it_429=0;
            }
            else if(            it_429==hash_428) {
                __result_obj__228 = (char*)come_increment_ref_count(default_value_427);
                (default_value_427 = come_decrement_ref_count(default_value_427, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__228;
            }
        }
        else {
            __result_obj__229 = (char*)come_increment_ref_count(default_value_427);
            (default_value_427 = come_decrement_ref_count(default_value_427, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__229 = come_decrement_ref_count(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__229;
        }
    }
    __result_obj__230 = (char*)come_increment_ref_count(default_value_427);
    (default_value_427 = come_decrement_ref_count(default_value_427, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__230 = come_decrement_ref_count(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__230;
}

static char* map$2char$phchar$ph_operator_load_element(struct map$2char$phchar$ph* self, char* key){
char* default_value_430;
unsigned int hash_431;
unsigned int it_432;
char* __result_obj__231;
char* __result_obj__232;
char* __result_obj__233;
char* __result_obj__234;
default_value_430 = (void*)0;
    memset(&default_value_430,0,sizeof(char*));
    hash_431=string_get_hash_key(((char*)key))%self->size;
    it_432=hash_431;
    while((_Bool)1) {
        if(        self->item_existance[it_432]) {
            if(            string_equals(self->keys[it_432],key)) {
                __result_obj__231 = (char*)come_increment_ref_count(self->items[it_432]);
                (default_value_430 = come_decrement_ref_count(default_value_430, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__231;
            }
            it_432++;
            if(            it_432>=self->size) {
                it_432=0;
            }
            else if(            it_432==hash_431) {
                __result_obj__232 = (char*)come_increment_ref_count(default_value_430);
                (default_value_430 = come_decrement_ref_count(default_value_430, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__232;
            }
        }
        else {
            __result_obj__233 = (char*)come_increment_ref_count(default_value_430);
            (default_value_430 = come_decrement_ref_count(default_value_430, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__233;
        }
    }
    __result_obj__234 = (char*)come_increment_ref_count(default_value_430);
    (default_value_430 = come_decrement_ref_count(default_value_430, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__234;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_450;
unsigned int it_451;
_Bool same_key_exist_468;
char* it2_471;
struct map$2char$phchar$ph* __result_obj__255;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_450=string_get_hash_key(((char*)key))%self->size;
    it_451=hash_450;
    while((_Bool)1) {
        if(        self->item_existance[it_451]) {
            if(            string_equals(self->keys[it_451],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_451]);
                    (self->keys[it_451] = come_decrement_ref_count(self->keys[it_451], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_451]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_451]);
                    self->keys[it_451]=key;
                }
                if(                1) {
                    (self->items[it_451] = come_decrement_ref_count(self->items[it_451], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_451]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_451]=item;
                }
                break;
            }
            it_451++;
            if(            it_451>=self->size) {
                it_451=0;
            }
            else if(            it_451==hash_450) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_451]=(_Bool)1;
            if(            1) {
                self->keys[it_451]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_451]=key;
            }
            if(            1) {
                self->items[it_451]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_451]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_468=(_Bool)0;
    for(    it2_471=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_471=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_471,key)) {
            same_key_exist_468=(_Bool)1;
        }
    }
    if(    !same_key_exist_468) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__255 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_433;
void* __right_value368 = (void*)0;
char** keys_434;
void* __right_value369 = (void*)0;
char** items_435;
void* __right_value370 = (void*)0;
_Bool* item_existance_436;
int len_437;
char* it_440;
char* default_value_443;
void* __right_value371 = (void*)0;
char* it2_444;
unsigned int hash_447;
int n_448;
char* default_value_449;
void* __right_value372 = (void*)0;
default_value_443 = (void*)0;
default_value_449 = (void*)0;
    size_433=self->size*10;
    keys_434=(char**)come_increment_ref_count(((char**)(__right_value368=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_433)), "./comelang.h", 2165, "char**"))));
    items_435=(char**)come_increment_ref_count(((char**)(__right_value369=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_433)), "./comelang.h", 2166, "char**"))));
    item_existance_436=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value370=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_433)), "./comelang.h", 2167, "_Bool*"))));
    len_437=0;
    for(    it_440=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_440=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_443,0,sizeof(char*));
        it2_444=((char*)(__right_value371=map$2char$phchar$ph_at(self,it_440,(char*)come_increment_ref_count(default_value_443))));
        (__right_value371 = come_decrement_ref_count(__right_value371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_447=string_get_hash_key(((char*)it_440))%size_433;
        n_448=hash_447;
        while((_Bool)1) {
            if(            item_existance_436[n_448]) {
                n_448++;
                if(                n_448>=size_433) {
                    n_448=0;
                }
                else if(                n_448==hash_447) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_436[n_448]=(_Bool)1;
                keys_434[n_448]=it_440;
                items_435[n_448]=((char*)(__right_value372=map$2char$phchar$ph_at(self,it_440,(char*)come_increment_ref_count(default_value_449))));
                (__right_value372 = come_decrement_ref_count(__right_value372, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_437++;
                (default_value_449 = come_decrement_ref_count(default_value_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_449 = come_decrement_ref_count(default_value_449, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_443 = come_decrement_ref_count(default_value_443, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_434;
    self->items=items_435;
    self->item_existance=item_existance_436;
    self->size=size_433;
    self->len=len_437;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_438;
char* __result_obj__235;
char* __result_obj__236;
char* result_439;
char* __result_obj__237;
result_438 = (void*)0;
result_439 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_438,0,sizeof(char*));
        __result_obj__235 = result_438;
        return __result_obj__235;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__236 = self->key_list->it->item;
        return __result_obj__236;
    }
    memset(&result_439,0,sizeof(char*));
    __result_obj__237 = result_439;
    return __result_obj__237;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_441;
char* __result_obj__238;
char* __result_obj__239;
char* result_442;
char* __result_obj__240;
result_441 = (void*)0;
result_442 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_441,0,sizeof(char*));
        __result_obj__238 = result_441;
        return __result_obj__238;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__239 = self->key_list->it->item;
        return __result_obj__239;
    }
    memset(&result_442,0,sizeof(char*));
    __result_obj__240 = result_442;
    return __result_obj__240;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_445;
unsigned int it_446;
char* __result_obj__241;
char* __result_obj__242;
char* __result_obj__243;
char* __result_obj__244;
    hash_445=string_get_hash_key(((char*)key))%self->size;
    it_446=hash_445;
    while((_Bool)1) {
        if(        self->item_existance[it_446]) {
            if(            string_equals(self->keys[it_446],key)) {
                __result_obj__241 = (char*)come_increment_ref_count(self->items[it_446]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__241;
            }
            it_446++;
            if(            it_446>=self->size) {
                it_446=0;
            }
            else if(            it_446==hash_445) {
                __result_obj__242 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__242;
            }
        }
        else {
            __result_obj__243 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__243 = come_decrement_ref_count(__result_obj__243, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__243;
        }
    }
    __result_obj__244 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_452;
struct list_item$1char$ph* it_453;
struct list$1char$ph* __result_obj__248;
    it2_452=0;
    it_453=self->head;
    while(it_453!=((void*)0)) {
        if(        string_equals(it_453->item,item)) {
            list$1char$ph_delete(self,it2_452,it2_452+1);
            break;
        }
        it2_452++;
        it_453=it_453->next;
    }
    __result_obj__248 = self;
    return __result_obj__248;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_454;
struct list$1char$ph* __result_obj__245;
struct list_item$1char$ph* it_457;
int i_458;
struct list_item$1char$ph* prev_it_459;
struct list_item$1char$ph* it_460;
int i_461;
struct list_item$1char$ph* prev_it_462;
struct list_item$1char$ph* it_463;
struct list_item$1char$ph* head_prev_it_464;
struct list_item$1char$ph* tail_it_465;
int i_466;
struct list_item$1char$ph* prev_it_467;
struct list$1char$ph* __result_obj__247;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_454=tail;
        tail=head;
        head=tmp_454;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__245 = self;
        return __result_obj__245;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_457=self->head;
        i_458=0;
        while(it_457!=((void*)0)) {
            if(            i_458<tail) {
                prev_it_459=it_457;
                it_457=it_457->next;
                i_458++;
                /*c*/ come_call_finalizer3(prev_it_459,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_458==tail) {
                self->head=it_457;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_457=it_457->next;
                i_458++;
            }
        }
    }
    else if(    tail==self->len) {
        it_460=self->head;
        i_461=0;
        while(it_460!=((void*)0)) {
            if(            i_461==head) {
                self->tail=it_460->prev;
                self->tail->next=((void*)0);
            }
            if(            i_461>=head) {
                prev_it_462=it_460;
                it_460=it_460->next;
                i_461++;
                /*c*/ come_call_finalizer3(prev_it_462,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_460=it_460->next;
                i_461++;
            }
        }
    }
    else {
        it_463=self->head;
        head_prev_it_464=((void*)0);
        tail_it_465=((void*)0);
        i_466=0;
        while(it_463!=((void*)0)) {
            if(            i_466==head) {
                head_prev_it_464=it_463->prev;
            }
            if(            i_466==tail) {
                tail_it_465=it_463;
            }
            if(            i_466>=head&&i_466<tail) {
                prev_it_467=it_463;
                it_463=it_463->next;
                i_466++;
                /*c*/ come_call_finalizer3(prev_it_467,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_463=it_463->next;
                i_466++;
            }
        }
        if(        head_prev_it_464!=((void*)0)) {
            head_prev_it_464->next=tail_it_465;
        }
        if(        tail_it_465!=((void*)0)) {
            tail_it_465->prev=head_prev_it_464;
        }
    }
    __result_obj__247 = self;
    return __result_obj__247;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_455;
struct list_item$1char$ph* prev_it_456;
struct list$1char$ph* __result_obj__246;
    it_455=self->head;
    while(it_455!=((void*)0)) {
        prev_it_456=it_455;
        it_455=it_455->next;
        /*c*/ come_call_finalizer3(prev_it_456,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__246 = self;
    return __result_obj__246;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_469;
char* __result_obj__249;
char* __result_obj__250;
char* result_470;
char* __result_obj__251;
result_469 = (void*)0;
result_470 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_469,0,sizeof(char*));
        __result_obj__249 = result_469;
        return __result_obj__249;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__250 = self->it->item;
        return __result_obj__250;
    }
    memset(&result_470,0,sizeof(char*));
    __result_obj__251 = result_470;
    return __result_obj__251;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_472;
char* __result_obj__252;
char* __result_obj__253;
char* result_473;
char* __result_obj__254;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_472,0,sizeof(char*));
        __result_obj__252 = result_472;
        return __result_obj__252;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__253 = self->it->item;
        return __result_obj__253;
    }
    memset(&result_473,0,sizeof(char*));
    __result_obj__254 = result_473;
    return __result_obj__254;
}

void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...){
char* msg2_474;
va_list args_475;
int len_476;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
_Bool _if_conditional2;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
msg2_474 = (void*)0;
memset(&args_475, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return;
    }
    if(    string_operator_equals(info->sname_at_head,info->base_sname)) {
        __builtin_va_start(args_475,msg);
        len_476=vasprintf(&msg2_474,msg,args_475);
        __builtin_va_end(args_475);
        if(        (_if_conditional2=(((char*)(__right_value376=map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value375=__builtin_string(id))))))==((void*)0))),        (__right_value374 = come_decrement_ref_count(__right_value374, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value375 = come_decrement_ref_count(__right_value375, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional2) {
            map$2char$phchar$ph$p_operator_store_element(info->module->mHeaderStructs,(char*)come_increment_ref_count(__builtin_string(id)),(char*)come_increment_ref_count(xsprintf("%s",msg2_474)));
        }
        free(msg2_474);
        /*c*/ come_call_finalizer3((&args_475),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    (id = come_decrement_ref_count(id, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_source_file(struct sInfo* info){
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sFun* main_fun_477;
_Bool main_module_484;
void* __right_value382 = (void*)0;
char* output_file_name_485;
struct _IO_FILE* f_486;
_Bool __exception_result_var_b1;
struct map$2char$phbuffer$ph* o2_saved_487;
char* it_490;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct buffer* buf_493;
void* __right_value386 = (void*)0;
struct map$2char$phbuffer$ph* o2_saved_502;
char* it_503;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct buffer* buf_504;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct map$2char$phsFun$ph* o2_saved_505;
char* it_508;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sFun* it2_511;
void* __right_value395 = (void*)0;
char* header_512;
struct map$2char$phchar$ph* o2_saved_515;
char* it_516;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
char* str_517;
struct map$2char$phsFun$ph* o2_saved_520;
char* it_521;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sFun* it2_522;
void* __right_value402 = (void*)0;
char* output_523;
struct map$2char$phsFun$ph* o2_saved_524;
char* it_525;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct sFun* it2_526;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
int n_527;
void* __right_value409 = (void*)0;
char* output_528;
_Bool __result_obj__284;
    main_fun_477=((struct sFun*)(__right_value381=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value380=xsprintf("main"))))));
    (__right_value379 = come_decrement_ref_count(__right_value379, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value380 = come_decrement_ref_count(__right_value380, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value381,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    main_module_484=(_Bool)0;
    if(    main_fun_477) {
        if(        !main_fun_477->mExternal) {
            main_module_484=(_Bool)1;
        }
    }
    output_file_name_485=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    f_486=fopen(output_file_name_485,"w");
    if(    f_486==((void*)0)) {
        (come_push_stackframe("03output_code.c", 934, 0),__exception_result_var_b1=die("fopen"), come_pop_stackframe(), __exception_result_var_b1);
    }
    fprintf(f_486,"/// previous struct definition ///\n");
    for(    o2_saved_487=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->previous_struct_definition)),it_490=map$2char$phbuffer$ph_begin((o2_saved_487));    !map$2char$phbuffer$ph_end((o2_saved_487));    it_490=map$2char$phbuffer$ph_next((o2_saved_487))    ){
        buf_493=((struct buffer*)(__right_value385=map$2char$phbuffer$ph_operator_load_element(info->previous_struct_definition,((char*)(__right_value384=__builtin_string(it_490))))));
        (__right_value383 = come_decrement_ref_count(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value384 = come_decrement_ref_count(__right_value384, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value385,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_486,"%s\n",((char*)(__right_value386=buffer_to_string(buf_493))));
        (__right_value386 = come_decrement_ref_count(__right_value386, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_487,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_486,"/// struct definition ///\n");
    for(    o2_saved_502=(struct map$2char$phbuffer$ph*)come_increment_ref_count((info->struct_definition)),it_503=map$2char$phbuffer$ph_begin((o2_saved_502));    !map$2char$phbuffer$ph_end((o2_saved_502));    it_503=map$2char$phbuffer$ph_next((o2_saved_502))    ){
        buf_504=((struct buffer*)(__right_value389=map$2char$phbuffer$ph_operator_load_element(info->struct_definition,((char*)(__right_value388=__builtin_string(it_503))))));
        (__right_value387 = come_decrement_ref_count(__right_value387, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value388 = come_decrement_ref_count(__right_value388, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value389,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fprintf(f_486,"%s\n",((char*)(__right_value390=buffer_to_string(buf_504))));
        (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_502,map$2char$phbuffer$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_486,"// source head\n");
    fprintf(f_486,"%s\n",((char*)(__right_value391=buffer_to_string(info->module->mSourceHead))));
    (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    fprintf(f_486,"// header function\n");
    for(    o2_saved_505=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_508=map$2char$phsFun$ph_begin((o2_saved_505));    !map$2char$phsFun$ph_end((o2_saved_505));    it_508=map$2char$phsFun$ph_next((o2_saved_505))    ){
        it2_511=((struct sFun*)(__right_value394=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value393=__builtin_string(it_508))))));
        (__right_value392 = come_decrement_ref_count(__right_value392, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value393 = come_decrement_ref_count(__right_value393, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value394,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        header_512=(char*)come_increment_ref_count(header_function(it2_511,info));
        if(        it2_511->mInline) {
        }
        else if(        string_operator_not_equals(it_508,"__builtin_va_start")&&string_operator_not_equals(it_508,"__builtin_va_end")) {
            fprintf(f_486,"%s",header_512,it_508);
        }
        (header_512 = come_decrement_ref_count(header_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_505,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_486,"// uniq global variable\n");
    if(    main_module_484) {
        for(        o2_saved_515=(struct map$2char$phchar$ph*)come_increment_ref_count((info->uniq_definition)),it_516=map$2char$phchar$ph_begin((o2_saved_515));        !map$2char$phchar$ph_end((o2_saved_515));        it_516=map$2char$phchar$ph_next((o2_saved_515))        ){
            str_517=((char*)(__right_value398=map$2char$phchar$ph_operator_load_element(info->uniq_definition,((char*)(__right_value397=__builtin_string(it_516))))));
            (__right_value396 = come_decrement_ref_count(__right_value396, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value397 = come_decrement_ref_count(__right_value397, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value398 = come_decrement_ref_count(__right_value398, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            fprintf(f_486,"%s\n",str_517);
        }
        /*c*/ come_call_finalizer3(o2_saved_515,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    fprintf(f_486,"// inline function\n");
    for(    o2_saved_520=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_521=map$2char$phsFun$ph_begin((o2_saved_520));    !map$2char$phsFun$ph_end((o2_saved_520));    it_521=map$2char$phsFun$ph_next((o2_saved_520))    ){
        it2_522=((struct sFun*)(__right_value401=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value400=__builtin_string(it_521))))));
        (__right_value399 = come_decrement_ref_count(__right_value399, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value400 = come_decrement_ref_count(__right_value400, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value401,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        it2_522->mInline) {
            output_523=(char*)come_increment_ref_count(output_function(it2_522,info));
            fprintf(f_486,"%s",output_523);
            (output_523 = come_decrement_ref_count(output_523, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_520,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_486,"\n");
    fprintf(f_486,"// body function\n");
    for(    o2_saved_524=(struct map$2char$phsFun$ph*)come_increment_ref_count((info->funcs)),it_525=map$2char$phsFun$ph_begin((o2_saved_524));    !map$2char$phsFun$ph_end((o2_saved_524));    it_525=map$2char$phsFun$ph_next((o2_saved_524))    ){
        it2_526=((struct sFun*)(__right_value405=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value404=__builtin_string(it_525))))));
        (__right_value403 = come_decrement_ref_count(__right_value403, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value404 = come_decrement_ref_count(__right_value404, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value405,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        n_527=string_length(((char*)(__right_value406=buffer_to_string(it2_526->mSourceHead))))+string_length(((char*)(__right_value407=buffer_to_string(it2_526->mSourceHead2))))+string_length(((char*)(__right_value408=buffer_to_string(it2_526->mSource))));
        (__right_value406 = come_decrement_ref_count(__right_value406, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value407 = come_decrement_ref_count(__right_value407, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        it2_526->mExternal) {
        }
        else if(        !main_module_484&&it2_526->mUniq) {
        }
        else if(        it2_526->mInline) {
        }
        else {
            output_528=(char*)come_increment_ref_count(output_function(it2_526,info));
            fprintf(f_486,"%s",output_528);
            fprintf(f_486,"\n");
            (output_528 = come_decrement_ref_count(output_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_524,map$2char$phsFun$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fclose(f_486);
    __result_obj__284 = (_Bool)1;
    (output_file_name_485 = come_decrement_ref_count(output_file_name_485, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__284;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_478;
unsigned int hash_479;
unsigned int it_480;
struct sFun* __result_obj__256;
struct sFun* __result_obj__257;
struct sFun* __result_obj__258;
struct sFun* __result_obj__259;
default_value_478 = (void*)0;
    memset(&default_value_478,0,sizeof(struct sFun*));
    hash_479=string_get_hash_key(((char*)key))%self->size;
    it_480=hash_479;
    while((_Bool)1) {
        if(        self->item_existance[it_480]) {
            if(            string_equals(self->keys[it_480],key)) {
                __result_obj__256 = (struct sFun*)come_increment_ref_count(self->items[it_480]);
                /*c*/ come_call_finalizer3(default_value_478,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__256,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__256;
            }
            it_480++;
            if(            it_480>=self->size) {
                it_480=0;
            }
            else if(            it_480==hash_479) {
                __result_obj__257 = (struct sFun*)come_increment_ref_count(default_value_478);
                /*c*/ come_call_finalizer3(default_value_478,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__257;
            }
        }
        else {
            __result_obj__258 = (struct sFun*)come_increment_ref_count(default_value_478);
            /*c*/ come_call_finalizer3(default_value_478,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__258,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__258;
        }
    }
    __result_obj__259 = (struct sFun*)come_increment_ref_count(default_value_478);
    /*c*/ come_call_finalizer3(default_value_478,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__259,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
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
struct sFun* default_value_481;
unsigned int hash_482;
unsigned int it_483;
struct sFun* __result_obj__260;
struct sFun* __result_obj__261;
struct sFun* __result_obj__262;
struct sFun* __result_obj__263;
default_value_481 = (void*)0;
    memset(&default_value_481,0,sizeof(struct sFun*));
    hash_482=string_get_hash_key(((char*)key))%self->size;
    it_483=hash_482;
    while((_Bool)1) {
        if(        self->item_existance[it_483]) {
            if(            string_equals(self->keys[it_483],key)) {
                __result_obj__260 = (struct sFun*)come_increment_ref_count(self->items[it_483]);
                /*c*/ come_call_finalizer3(default_value_481,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__260,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__260;
            }
            it_483++;
            if(            it_483>=self->size) {
                it_483=0;
            }
            else if(            it_483==hash_482) {
                __result_obj__261 = (struct sFun*)come_increment_ref_count(default_value_481);
                /*c*/ come_call_finalizer3(default_value_481,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__261,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__261;
            }
        }
        else {
            __result_obj__262 = (struct sFun*)come_increment_ref_count(default_value_481);
            /*c*/ come_call_finalizer3(default_value_481,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__262,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__262;
        }
    }
    __result_obj__263 = (struct sFun*)come_increment_ref_count(default_value_481);
    /*c*/ come_call_finalizer3(default_value_481,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_488;
char* __result_obj__264;
char* __result_obj__265;
char* result_489;
char* __result_obj__266;
result_488 = (void*)0;
result_489 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_488,0,sizeof(char*));
        __result_obj__264 = result_488;
        return __result_obj__264;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__265 = self->key_list->it->item;
        return __result_obj__265;
    }
    memset(&result_489,0,sizeof(char*));
    __result_obj__266 = result_489;
    return __result_obj__266;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_491;
char* __result_obj__267;
char* __result_obj__268;
char* result_492;
char* __result_obj__269;
result_491 = (void*)0;
result_492 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_491,0,sizeof(char*));
        __result_obj__267 = result_491;
        return __result_obj__267;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__268 = self->key_list->it->item;
        return __result_obj__268;
    }
    memset(&result_492,0,sizeof(char*));
    __result_obj__269 = result_492;
    return __result_obj__269;
}

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_494;
unsigned int hash_495;
unsigned int it_496;
struct buffer* __result_obj__270;
struct buffer* __result_obj__271;
struct buffer* __result_obj__272;
struct buffer* __result_obj__273;
default_value_494 = (void*)0;
    memset(&default_value_494,0,sizeof(struct buffer*));
    hash_495=string_get_hash_key(((char*)key))%self->size;
    it_496=hash_495;
    while((_Bool)1) {
        if(        self->item_existance[it_496]) {
            if(            string_equals(self->keys[it_496],key)) {
                __result_obj__270 = (struct buffer*)come_increment_ref_count(self->items[it_496]);
                /*c*/ come_call_finalizer3(default_value_494,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__270,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__270;
            }
            it_496++;
            if(            it_496>=self->size) {
                it_496=0;
            }
            else if(            it_496==hash_495) {
                __result_obj__271 = (struct buffer*)come_increment_ref_count(default_value_494);
                /*c*/ come_call_finalizer3(default_value_494,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__271,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__271;
            }
        }
        else {
            __result_obj__272 = (struct buffer*)come_increment_ref_count(default_value_494);
            /*c*/ come_call_finalizer3(default_value_494,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__272,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__272;
        }
    }
    __result_obj__273 = (struct buffer*)come_increment_ref_count(default_value_494);
    /*c*/ come_call_finalizer3(default_value_494,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static struct buffer* map$2char$phbuffer$ph_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_497;
unsigned int hash_498;
unsigned int it_499;
struct buffer* __result_obj__274;
struct buffer* __result_obj__275;
struct buffer* __result_obj__276;
struct buffer* __result_obj__277;
default_value_497 = (void*)0;
    memset(&default_value_497,0,sizeof(struct buffer*));
    hash_498=string_get_hash_key(((char*)key))%self->size;
    it_499=hash_498;
    while((_Bool)1) {
        if(        self->item_existance[it_499]) {
            if(            string_equals(self->keys[it_499],key)) {
                __result_obj__274 = (struct buffer*)come_increment_ref_count(self->items[it_499]);
                /*c*/ come_call_finalizer3(default_value_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__274,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__274;
            }
            it_499++;
            if(            it_499>=self->size) {
                it_499=0;
            }
            else if(            it_499==hash_498) {
                __result_obj__275 = (struct buffer*)come_increment_ref_count(default_value_497);
                /*c*/ come_call_finalizer3(default_value_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__275,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__275;
            }
        }
        else {
            __result_obj__276 = (struct buffer*)come_increment_ref_count(default_value_497);
            /*c*/ come_call_finalizer3(default_value_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__276,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__276;
        }
    }
    __result_obj__277 = (struct buffer*)come_increment_ref_count(default_value_497);
    /*c*/ come_call_finalizer3(default_value_497,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__277,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__277;
}

static void map$2char$phbuffer$ph$p_finalize(struct map$2char$phbuffer$ph* self){
int i_500;
int i_501;
    for(    i_500=0;    i_500<self->size;    i_500++    ){
        if(        self->item_existance[i_500]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_500],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_501=0;    i_501<self->size;    i_501++    ){
        if(        self->item_existance[i_501]) {
            if(            1) {
                (self->keys[i_501] = come_decrement_ref_count(self->keys[i_501], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_506;
char* __result_obj__278;
char* __result_obj__279;
char* result_507;
char* __result_obj__280;
result_506 = (void*)0;
result_507 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_506,0,sizeof(char*));
        __result_obj__278 = result_506;
        return __result_obj__278;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__279 = self->key_list->it->item;
        return __result_obj__279;
    }
    memset(&result_507,0,sizeof(char*));
    __result_obj__280 = result_507;
    return __result_obj__280;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_509;
char* __result_obj__281;
char* __result_obj__282;
char* result_510;
char* __result_obj__283;
result_509 = (void*)0;
result_510 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_509,0,sizeof(char*));
        __result_obj__281 = result_509;
        return __result_obj__281;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__282 = self->key_list->it->item;
        return __result_obj__282;
    }
    memset(&result_510,0,sizeof(char*));
    __result_obj__283 = result_510;
    return __result_obj__283;
}

static void map$2char$phsFun$ph$p_finalize(struct map$2char$phsFun$ph* self){
int i_513;
int i_514;
    for(    i_513=0;    i_513<self->size;    i_513++    ){
        if(        self->item_existance[i_513]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_513],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_514=0;    i_514<self->size;    i_514++    ){
        if(        self->item_existance[i_514]) {
            if(            1) {
                (self->keys[i_514] = come_decrement_ref_count(self->keys[i_514], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_518;
int i_519;
    for(    i_518=0;    i_518<self->size;    i_518++    ){
        if(        self->item_existance[i_518]) {
            if(            1) {
                (self->items[i_518] = come_decrement_ref_count(self->items[i_518], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_519=0;    i_519<self->size;    i_519++    ){
        if(        self->item_existance[i_519]) {
            if(            1) {
                (self->keys[i_519] = come_decrement_ref_count(self->keys[i_519], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool output_header_file(struct sInfo* info){
char* output_file_name_529;
struct _IO_FILE* f_530;
struct map$2char$phchar$ph* o2_saved_531;
char* it_532;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
char* item_533;
struct map$2char$phchar$ph* o2_saved_534;
char* it_535;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
char* item_536;
_Bool __result_obj__285;
    output_file_name_529=(char*)come_increment_ref_count(info->output_file_name);
    f_530=fopen(output_file_name_529,"a");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_530,"#ifndef __COMMON_H__\n");
        fprintf(f_530,"#define __COMMON_H__\n");
        fprintf(f_530,"#include <comelang.h>\n");
    }
    for(    o2_saved_531=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeaderStructs)),it_532=map$2char$phchar$ph_begin((o2_saved_531));    !map$2char$phchar$ph_end((o2_saved_531));    it_532=map$2char$phchar$ph_next((o2_saved_531))    ){
        item_533=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeaderStructs,((char*)(__right_value411=__builtin_string(it_532)))));
        (__right_value410 = come_decrement_ref_count(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value411 = come_decrement_ref_count(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_530,"%s",item_533);
        (item_533 = come_decrement_ref_count(item_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_531,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    for(    o2_saved_534=(struct map$2char$phchar$ph*)come_increment_ref_count((info->module->mHeader)),it_535=map$2char$phchar$ph_begin((o2_saved_534));    !map$2char$phchar$ph_end((o2_saved_534));    it_535=map$2char$phchar$ph_next((o2_saved_534))    ){
        item_536=(char*)come_increment_ref_count(map$2char$phchar$ph_operator_load_element(info->module->mHeader,((char*)(__right_value414=__builtin_string(it_535)))));
        (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fprintf(f_530,"%s",item_536);
        (item_536 = come_decrement_ref_count(item_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    /*c*/ come_call_finalizer3(o2_saved_534,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    fprintf(f_530,"\n");
    if(    string_operator_equals(info->output_file_name,"common.h")) {
        fprintf(f_530,"#endif\n");
    }
    fclose(f_530);
    __result_obj__285 = (_Bool)1;
    (output_file_name_529 = come_decrement_ref_count(output_file_name_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__285;
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
char* msg2_537;
va_list args_538;
int len_539;
msg2_537 = (void*)0;
memset(&args_538, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_538,code);
    len_539=vasprintf(&msg2_537,code,args_538);
    __builtin_va_end(args_538);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead,msg2_537);
    }
    free(msg2_537);
    /*c*/ come_call_finalizer3((&args_538),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
char* msg2_540;
va_list args_541;
int len_542;
msg2_540 = (void*)0;
memset(&args_541, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_541,code);
    len_542=vasprintf(&msg2_540,code,args_541);
    __builtin_va_end(args_541);
    if(    info->come_fun) {
        buffer_append_str(info->come_fun->mSourceHead2,msg2_540);
    }
    free(msg2_540);
    /*c*/ come_call_finalizer3((&args_541),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_last_code_to_source(struct sInfo* info){
char* __dec_obj48;
char* __dec_obj49;
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        add_last_code_to_source_with_comma(info);
    }
    else {
        if(        info->module->mLastCode) {
            add_come_code(info,"%s;\n",info->module->mLastCode);
            __dec_obj48=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        if(        info->module->mLastCode2) {
            add_come_code(info,"%s;\n",info->module->mLastCode2);
            __dec_obj49=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
    }
}

void add_last_code_to_source_with_comma(struct sInfo* info){
char* __dec_obj50;
char* __dec_obj51;
    if(    info->no_output_come_code) {
        return;
    }
    if(    info->module->mLastCode) {
        add_come_code(info,"%s ,",info->module->mLastCode);
        __dec_obj50=info->module->mLastCode,
        info->module->mLastCode=((void*)0);
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->module->mLastCode2) {
        add_come_code(info,"%s ,",info->module->mLastCode2);
        __dec_obj51=info->module->mLastCode2,
        info->module->mLastCode2=((void*)0);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
char* msg2_543;
va_list args_544;
int len_545;
void* __right_value416 = (void*)0;
char* __dec_obj52;
msg2_543 = (void*)0;
memset(&args_544, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_544,msg);
    len_545=vasprintf(&msg2_543,msg,args_544);
    __builtin_va_end(args_544);
    __dec_obj52=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(__builtin_string(msg2_543));
    __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_543);
    /*c*/ come_call_finalizer3((&args_544),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
char* msg2_546;
va_list args_547;
int len_548;
void* __right_value417 = (void*)0;
char* __dec_obj53;
msg2_546 = (void*)0;
memset(&args_547, 0, sizeof(va_list));
    if(    info->no_output_come_code) {
        return;
    }
    __builtin_va_start(args_547,msg);
    len_548=vasprintf(&msg2_546,msg,args_547);
    __builtin_va_end(args_547);
    __dec_obj53=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(__builtin_string(msg2_546));
    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    free(msg2_546);
    /*c*/ come_call_finalizer3((&args_547),va_list_finalize, 1/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

void dec_stack_ptr(int value, struct sInfo* info){
    list$1CVALUE$ph_delete(info->stack,-value,-1);
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_delete(struct list$1CVALUE$ph* self, int head, int tail){
int tmp_549;
struct list$1CVALUE$ph* __result_obj__286;
struct list_item$1CVALUE$ph* it_552;
int i_553;
struct list_item$1CVALUE$ph* prev_it_554;
struct list_item$1CVALUE$ph* it_555;
int i_556;
struct list_item$1CVALUE$ph* prev_it_557;
struct list_item$1CVALUE$ph* it_558;
struct list_item$1CVALUE$ph* head_prev_it_559;
struct list_item$1CVALUE$ph* tail_it_560;
int i_561;
struct list_item$1CVALUE$ph* prev_it_562;
struct list$1CVALUE$ph* __result_obj__288;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_549=tail;
        tail=head;
        head=tmp_549;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__286 = self;
        return __result_obj__286;
    }
    if(    head==0&&tail==self->len) {
        list$1CVALUE$ph_reset(self);
    }
    else if(    head==0) {
        it_552=self->head;
        i_553=0;
        while(it_552!=((void*)0)) {
            if(            i_553<tail) {
                prev_it_554=it_552;
                it_552=it_552->next;
                i_553++;
                /*c*/ come_call_finalizer3(prev_it_554,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_553==tail) {
                self->head=it_552;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_552=it_552->next;
                i_553++;
            }
        }
    }
    else if(    tail==self->len) {
        it_555=self->head;
        i_556=0;
        while(it_555!=((void*)0)) {
            if(            i_556==head) {
                self->tail=it_555->prev;
                self->tail->next=((void*)0);
            }
            if(            i_556>=head) {
                prev_it_557=it_555;
                it_555=it_555->next;
                i_556++;
                /*c*/ come_call_finalizer3(prev_it_557,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_555=it_555->next;
                i_556++;
            }
        }
    }
    else {
        it_558=self->head;
        head_prev_it_559=((void*)0);
        tail_it_560=((void*)0);
        i_561=0;
        while(it_558!=((void*)0)) {
            if(            i_561==head) {
                head_prev_it_559=it_558->prev;
            }
            if(            i_561==tail) {
                tail_it_560=it_558;
            }
            if(            i_561>=head&&i_561<tail) {
                prev_it_562=it_558;
                it_558=it_558->next;
                i_561++;
                /*c*/ come_call_finalizer3(prev_it_562,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_558=it_558->next;
                i_561++;
            }
        }
        if(        head_prev_it_559!=((void*)0)) {
            head_prev_it_559->next=tail_it_560;
        }
        if(        tail_it_560!=((void*)0)) {
            tail_it_560->prev=head_prev_it_559;
        }
    }
    __result_obj__288 = self;
    return __result_obj__288;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_reset(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_550;
struct list_item$1CVALUE$ph* prev_it_551;
struct list$1CVALUE$ph* __result_obj__287;
    it_550=self->head;
    while(it_550!=((void*)0)) {
        prev_it_551=it_550;
        it_550=it_550->next;
        /*c*/ come_call_finalizer3(prev_it_551,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__287 = self;
    return __result_obj__287;
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
char* __dec_obj54;
void* __right_value418 = (void*)0;
void* __right_value424 = (void*)0;
struct CVALUE* result_563;
void* __right_value425 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_571=0;
char* Err_572=0;
struct CVALUE* __result_obj__295;
    __dec_obj54=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_563=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(((struct CVALUE*)(__right_value418=list$1CVALUE$ph_operator_load_element(info->stack,offset)))));
    /*c*/ come_call_finalizer3(__right_value418,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    result_563==((void*)0)) {
        multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value425=err_msg(info,"invalid stack value")));
        come_exception_var_c7_571=multiple_assign_var7->v1;
        Err_572=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        ((Err_572)?(puts(Err_572),exit(2)):(0));
        /*c*/ come_call_finalizer3(__right_value425,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
        (Err_572 = come_decrement_ref_count(Err_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    list$1CVALUE$ph_delete(info->stack,-1,-1);
    __result_obj__295 = (struct CVALUE*)come_increment_ref_count(result_563);
    /*c*/ come_call_finalizer3(result_563,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__295,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_564;
int i_565;
struct CVALUE* __result_obj__289;
struct CVALUE* default_value_566;
struct CVALUE* __result_obj__290;
default_value_566 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_564=self->head;
    i_565=0;
    while(it_564!=((void*)0)) {
        if(        position==i_565) {
            __result_obj__289 = (struct CVALUE*)come_increment_ref_count(it_564->item);
            /*c*/ come_call_finalizer3(__result_obj__289,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__289;
        }
        it_564=it_564->next;
        i_565++;
    }
    memset(&default_value_566,0,sizeof(struct CVALUE*));
    __result_obj__290 = (struct CVALUE*)come_increment_ref_count(default_value_566);
    /*c*/ come_call_finalizer3(default_value_566,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

static struct CVALUE* list$1CVALUE$ph_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_567;
int i_568;
struct CVALUE* __result_obj__291;
struct CVALUE* default_value_569;
struct CVALUE* __result_obj__292;
default_value_569 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_567=self->head;
    i_568=0;
    while(it_567!=((void*)0)) {
        if(        position==i_568) {
            __result_obj__291 = (struct CVALUE*)come_increment_ref_count(it_567->item);
            /*c*/ come_call_finalizer3(__result_obj__291,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__291;
        }
        it_567=it_567->next;
        i_568++;
    }
    memset(&default_value_569,0,sizeof(struct CVALUE*));
    __result_obj__292 = (struct CVALUE*)come_increment_ref_count(default_value_569);
    /*c*/ come_call_finalizer3(default_value_569,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__292,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__293;
void* __right_value419 = (void*)0;
struct CVALUE* result_570;
void* __right_value420 = (void*)0;
char* __dec_obj55;
void* __right_value421 = (void*)0;
struct sType* __dec_obj56;
void* __right_value422 = (void*)0;
char* __dec_obj57;
void* __right_value423 = (void*)0;
char* __dec_obj58;
struct CVALUE* __result_obj__294;
    if(    self==(void*)0) {
        __result_obj__293 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__293,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__293;
    }
    result_570=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj55=result_570->c_value,
        result_570->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj56=result_570->type,
        result_570->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_570->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj57=result_570->c_value_without_right_value_objects,
        result_570->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj58=result_570->c_value_without_cast_object_value,
        result_570->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__294 = (struct CVALUE*)come_increment_ref_count(result_570);
    /*c*/ come_call_finalizer3(result_570,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

void transpiler_clear_last_code(struct sInfo* info){
char* __dec_obj59;
char* __dec_obj60;
    __dec_obj59=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj60=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
}

