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
    _Bool mUniq;
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
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
struct sModule* sModule_initialize(struct sModule* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct sBlock* sBlock_initialize(struct sBlock* self);
static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static void sBlock_finalize(struct sBlock* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline);
static void sClassModule_finalize(struct sClassModule* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute, _Bool const_fun);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline, _Bool const_fun);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, _Bool uniq_, struct sInfo* info);
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
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static int list$1char$ph_length(struct list$1char$ph* self);
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
static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position);
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
static _Bool list$1tuple2$2char$phsType$ph$ph_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
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
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
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
static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct sClass* map$2char$phsClass$ph_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
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
int i_121;
struct list$1char$* __result_obj__59;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_121=0;    i_121<num_value;    i_121++    ){
        list$1char$_push_back(self,values[i_121]);
    }
    __result_obj__59 = (struct list$1char$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_122=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value50=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1113, "struct list_item$1char$*"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        litem_122->item=item;
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value51=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1123, "struct list_item$1char$*"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        litem_123->item=item;
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value52=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1133, "struct list_item$1char$*"))));
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
    while(    it_125!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_128=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value55=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1113, "struct list_item$1char$p*"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        litem_128->item=item;
        self->tail=litem_128;
        self->head=litem_128;
    }
    else if(    self->len==1) {
        litem_129=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value56=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1123, "struct list_item$1char$p*"))));
        litem_129->prev=self->head;
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head->next=litem_129;
    }
    else {
        litem_130=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value57=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1133, "struct list_item$1char$p*"))));
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
    while(    it_131!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1short$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_134=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value60=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1113, "struct list_item$1short$*"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        litem_134->item=item;
        self->tail=litem_134;
        self->head=litem_134;
    }
    else if(    self->len==1) {
        litem_135=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value61=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1123, "struct list_item$1short$*"))));
        litem_135->prev=self->head;
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head->next=litem_135;
    }
    else {
        litem_136=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value62=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1133, "struct list_item$1short$*"))));
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
    while(    it_137!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1int$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_140=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value65=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1113, "struct list_item$1int$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value66=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1123, "struct list_item$1int$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value67=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1133, "struct list_item$1int$*"))));
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
    while(    it_143!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1long$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_146=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value70=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1113, "struct list_item$1long$*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value71=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1123, "struct list_item$1long$*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value72=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1133, "struct list_item$1long$*"))));
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
    while(    it_149!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1float$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_152=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value75=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1113, "struct list_item$1float$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value76=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1123, "struct list_item$1float$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value77=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1133, "struct list_item$1float$*"))));
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
    while(    it_155!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1double$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
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
        litem_158=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value80=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1113, "struct list_item$1double$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value81=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1123, "struct list_item$1double$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value82=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1133, "struct list_item$1double$*"))));
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
    while(    it_161!=((void*)0)) {
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
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__111,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__111;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_196;
struct list_item$1char$ph* prev_it_197;
    it_196=self->head;
    while(    it_196!=((void*)0)) {
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
        litem_201=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value129=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1113, "struct list_item$1char$ph*"))));
        litem_201->prev=((void*)0);
        litem_201->next=((void*)0);
        __dec_obj13=litem_201->item,
        litem_201->item=(char*)come_increment_ref_count(item);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_201;
        self->head=litem_201;
    }
    else if(    self->len==1) {
        litem_202=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value130=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1123, "struct list_item$1char$ph*"))));
        litem_202->prev=self->head;
        litem_202->next=((void*)0);
        __dec_obj14=litem_202->item,
        litem_202->item=(char*)come_increment_ref_count(item);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_202;
        self->head->next=litem_202;
    }
    else {
        litem_203=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value131=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1133, "struct list_item$1char$ph*"))));
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
struct list_item$1sType$ph* it_239;
struct list_item$1sType$ph* prev_it_240;
    it_239=self->head;
    while(    it_239!=((void*)0)) {
        prev_it_240=it_239;
        it_239=it_239->next;
        /*c*/ come_call_finalizer3(prev_it_240,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_241;
struct list_item$1sNode$ph* prev_it_242;
    it_241=self->head;
    while(    it_241!=((void*)0)) {
        prev_it_242=it_241;
        it_241=it_241->next;
        /*c*/ come_call_finalizer3(prev_it_242,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
int i_243;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1char$ph* __dec_obj20;
struct map$2char$phchar$ph* __result_obj__167;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value194=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value195=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1929, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value196=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_243=0;    i_243<128;    i_243++    ){
        self->item_existance[i_243]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj20=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj20,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__167 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__166;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__166 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__166,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__166;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_244;
struct list_item$1char$ph* prev_it_245;
    it_244=self->head;
    while(    it_244!=((void*)0)) {
        prev_it_245=it_244;
        it_244=it_244->next;
        /*c*/ come_call_finalizer3(prev_it_245,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_246;
int i_247;
    for(    i_246=0;    i_246<self->size;    i_246++    ){
        if(        self->item_existance[i_246]) {
            if(            1) {
                (self->items[i_246] = come_decrement_ref_count(self->items[i_246], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_247=0;    i_247<self->size;    i_247++    ){
        if(        self->item_existance[i_247]) {
            if(            1) {
                (self->keys[i_247] = come_decrement_ref_count(self->keys[i_247], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_248;
int i_249;
    for(    i_248=0;    i_248<self->size;    i_248++    ){
        if(        self->item_existance[i_248]) {
            if(            1) {
                (self->items[i_248] = come_decrement_ref_count(self->items[i_248], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_249=0;    i_249<self->size;    i_249++    ){
        if(        self->item_existance[i_249]) {
            if(            1) {
                (self->keys[i_249] = come_decrement_ref_count(self->keys[i_249], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void sModule_finalize(struct sModule* self){
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSourceHead,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mSource,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        (self->mLastCode = come_decrement_ref_count(self->mLastCode, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        (self->mLastCode2 = come_decrement_ref_count(self->mLastCode2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeader,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mHeaderStructs!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mHeaderStructs,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
int i_250;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
struct list$1char$ph* __dec_obj23;
struct map$2char$phsVar$ph* __result_obj__169;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value203=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1928, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value204=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1929, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value205=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1930, "_Bool*"))));
    for(    i_250=0;    i_250<128;    i_250++    ){
        self->item_existance[i_250]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj23=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1940, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj23,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__169 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__169,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__169;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_251;
int i_252;
    for(    i_251=0;    i_251<self->size;    i_251++    ){
        if(        self->item_existance[i_251]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_251],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_252=0;    i_252<self->size;    i_252++    ){
        if(        self->item_existance[i_252]) {
            if(            1) {
                (self->keys[i_252] = come_decrement_ref_count(self->keys[i_252], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_253;
int i_254;
    for(    i_253=0;    i_253<self->size;    i_253++    ){
        if(        self->item_existance[i_253]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_253],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_254=0;    i_254<self->size;    i_254++    ){
        if(        self->item_existance[i_254]) {
            if(            1) {
                (self->keys[i_254] = come_decrement_ref_count(self->keys[i_254], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__171;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__171 = (struct list$1sNode$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__171,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__171;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_255;
struct list_item$1sNode$ph* prev_it_256;
    it_255=self->head;
    while(    it_255!=((void*)0)) {
        prev_it_256=it_255;
        it_255=it_255->next;
        /*c*/ come_call_finalizer3(prev_it_256,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value218 = (void*)0;
struct sSemicolonNode* __result_obj__176;
    ((struct sNodeBase*)(__right_value218=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value218,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__176 = (struct sSemicolonNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value219 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string("sSemicolonNode"))));
    (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value220 = (void*)0;
struct sLambdaNode* __result_obj__178;
    ((struct sNodeBase*)(__right_value220=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value220,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mFun=fun;
    __result_obj__178 = (struct sLambdaNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__178,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__178;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value221 = (void*)0;
char* __result_obj__179;
    __result_obj__179 = (char*)come_increment_ref_count(((char*)(__right_value221=__builtin_string("sLambdaNode"))));
    (__right_value221 = come_decrement_ref_count(__right_value221, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__179 = come_decrement_ref_count(__result_obj__179, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_257;
int block_level_258;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
struct CVALUE* come_value_259;
void* __right_value224 = (void*)0;
char* __dec_obj31;
void* __right_value263 = (void*)0;
struct sType* __dec_obj56;
_Bool __result_obj__195;
    come_fun_257=info->come_fun;
    info->come_fun=self->mFun;
    block_level_258=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_258;
    come_value_259=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj31=come_value_259->c_value,
    come_value_259->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj56=come_value_259->type,
    come_value_259->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    /*b*/ come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_259->var=((void*)0);
    add_come_last_code(info,"%s",come_value_259->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_259));
    info->come_fun=come_fun_257;
    __result_obj__195 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_259,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__180;
void* __right_value225 = (void*)0;
struct sType* result_260;
void* __right_value226 = (void*)0;
struct sType* __dec_obj32;
void* __right_value227 = (void*)0;
struct sType* __dec_obj33;
void* __right_value235 = (void*)0;
struct list$1sType$ph* __dec_obj37;
void* __right_value236 = (void*)0;
struct sType* __dec_obj38;
void* __right_value237 = (void*)0;
struct sType* __dec_obj39;
void* __right_value239 = (void*)0;
struct sNode* __dec_obj40;
void* __right_value240 = (void*)0;
struct sNode* __dec_obj41;
void* __right_value241 = (void*)0;
char* __dec_obj42;
void* __right_value242 = (void*)0;
char* __dec_obj43;
void* __right_value243 = (void*)0;
char* __dec_obj44;
void* __right_value251 = (void*)0;
struct list$1sNode$ph* __dec_obj48;
void* __right_value252 = (void*)0;
char* __dec_obj49;
void* __right_value253 = (void*)0;
struct list$1sType$ph* __dec_obj50;
void* __right_value261 = (void*)0;
struct list$1char$ph* __dec_obj54;
void* __right_value262 = (void*)0;
struct sType* __dec_obj55;
struct sType* __result_obj__193;
    if(    self==(void*)0) {
        __result_obj__180 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__180,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__180;
    }
    result_260=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_260->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj32=result_260->mOriginalLoadVarType,
        result_260->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj33=result_260->mChannelType,
        result_260->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj33,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj37=result_260->mGenericsTypes,
        result_260->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj37,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj38=result_260->mNoSolvedGenericsType,
        result_260->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_260->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj39=result_260->mAnyOriginalType,
        result_260->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj40=result_260->mSizeNum,
        result_260->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj40 ? __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj41=result_260->mAlignas,
        result_260->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj41 ? __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj42=result_260->mTupleName,
        result_260->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj43=result_260->mAttribute,
        result_260->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_260->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_260->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_260->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_260->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_260->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_260->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_260->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_260->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_260->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_260->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_260->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_260->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_260->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_260->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_260->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_260->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_260->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_260->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_260->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_260->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_260->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_260->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_260->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_260->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj44=result_260->mAsmName,
        result_260->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_260->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_260->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_260->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj48=result_260->mArrayNum,
        result_260->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj48,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_260->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_260->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_260->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_260->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_260->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj49=result_260->mOriginalTypeName,
        result_260->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_260->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_260->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_260->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_260->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj50=result_260->mParamTypes,
        result_260->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj50,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj54=result_260->mParamNames,
        result_260->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj54,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj55=result_260->mResultType,
        result_260->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_260->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_260->mExceptionGenericsType=self->mExceptionGenericsType;
    }
    __result_obj__193 = (struct sType*)come_increment_ref_count(result_260);
    /*c*/ come_call_finalizer3(result_260,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__181;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct list$1sType$ph* result_261;
struct list_item$1sType$ph* it_262;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct list$1sType$ph* __result_obj__184;
    if(    self==((void*)0)) {
        __result_obj__181 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__181,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__181;
    }
    result_261=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1024, "struct list$1sType$ph*"))));
    it_262=self->head;
    while(    it_262!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_261,(struct sType*)come_increment_ref_count(sType_clone(it_262->item)));
        }
        else {
            list$1sType$ph_add(result_261,(struct sType*)come_increment_ref_count(sType_clone(it_262->item)));
        }
        it_262=it_262->next;
    }
    __result_obj__184 = (struct list$1sType$ph*)come_increment_ref_count(result_261);
    /*c*/ come_call_finalizer3(result_261,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__184,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__182;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__182 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__182,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value230 = (void*)0;
struct list_item$1sType$ph* litem_263;
struct sType* __dec_obj34;
void* __right_value231 = (void*)0;
struct list_item$1sType$ph* litem_264;
struct sType* __dec_obj35;
void* __right_value232 = (void*)0;
struct list_item$1sType$ph* litem_265;
struct sType* __dec_obj36;
struct list$1sType$ph* __result_obj__183;
    if(    self->len==0) {
        litem_263=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value230=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1043, "struct list_item$1sType$ph*"))));
        litem_263->prev=((void*)0);
        litem_263->next=((void*)0);
        __dec_obj34=litem_263->item,
        litem_263->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj34,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_263;
        self->head=litem_263;
    }
    else if(    self->len==1) {
        litem_264=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value231=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1053, "struct list_item$1sType$ph*"))));
        litem_264->prev=self->head;
        litem_264->next=((void*)0);
        __dec_obj35=litem_264->item,
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_264;
        self->head->next=litem_264;
    }
    else {
        litem_265=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value232=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1063, "struct list_item$1sType$ph*"))));
        litem_265->prev=self->tail;
        litem_265->next=((void*)0);
        __dec_obj36=litem_265->item,
        litem_265->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_265;
        self->tail=litem_265;
    }
    self->len++;
    __result_obj__183 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_266;
struct list_item$1sType$ph* prev_it_267;
    it_266=self->head;
    while(    it_266!=((void*)0)) {
        prev_it_267=it_266;
        it_266=it_266->next;
        /*c*/ come_call_finalizer3(prev_it_267,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__185;
void* __right_value238 = (void*)0;
struct sNode* result_268;
struct sNode* __result_obj__186;
    if(    self==(void*)0) {
        __result_obj__185 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__185) ? __result_obj__185 = come_decrement_ref_count(__result_obj__185, ((struct sNode*)__result_obj__185)->finalize, ((struct sNode*)__result_obj__185)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__185;
    }
    result_268=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_268->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_268->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_268->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_268->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_268->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_268->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_268->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_268->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_268->kind=self->kind;
    }
    __result_obj__186 = (struct sNode*)come_increment_ref_count(result_268);
    ((result_268) ? result_268 = come_decrement_ref_count(result_268, ((struct sNode*)result_268)->finalize, ((struct sNode*)result_268)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__186;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__187;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct list$1sNode$ph* result_269;
struct list_item$1sNode$ph* it_270;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sNode$ph* __result_obj__189;
    if(    self==((void*)0)) {
        __result_obj__187 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__187;
    }
    result_269=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1024, "struct list$1sNode$ph*"))));
    it_270=self->head;
    while(    it_270!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_269,(struct sNode*)come_increment_ref_count(sNode_clone(it_270->item)));
        }
        else {
            list$1sNode$ph_add(result_269,(struct sNode*)come_increment_ref_count(sNode_clone(it_270->item)));
        }
        it_270=it_270->next;
    }
    __result_obj__189 = (struct list$1sNode$ph*)come_increment_ref_count(result_269);
    /*c*/ come_call_finalizer3(result_269,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value246 = (void*)0;
struct list_item$1sNode$ph* litem_271;
struct sNode* __dec_obj45;
void* __right_value247 = (void*)0;
struct list_item$1sNode$ph* litem_272;
struct sNode* __dec_obj46;
void* __right_value248 = (void*)0;
struct list_item$1sNode$ph* litem_273;
struct sNode* __dec_obj47;
struct list$1sNode$ph* __result_obj__188;
    if(    self->len==0) {
        litem_271=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value246=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1043, "struct list_item$1sNode$ph*"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj45=litem_271->item,
        litem_271->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj45 ? __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1) {
        litem_272=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value247=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1053, "struct list_item$1sNode$ph*"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj46=litem_272->item,
        litem_272->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj46 ? __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value248=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1063, "struct list_item$1sNode$ph*"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj47=litem_273->item,
        litem_273->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj47 ? __dec_obj47 = come_decrement_ref_count(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result_obj__188 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__188;
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__190;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct list$1char$ph* result_274;
struct list_item$1char$ph* it_275;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1char$ph* __result_obj__192;
    if(    self==((void*)0)) {
        __result_obj__190 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__190,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__190;
    }
    result_274=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1024, "struct list$1char$ph*"))));
    it_275=self->head;
    while(    it_275!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_274,(char*)come_increment_ref_count((char*)come_memdup(it_275->item, "./comelang.h", 1029, "char*")));
        }
        else {
            list$1char$ph_add(result_274,(char*)come_increment_ref_count((char*)come_memdup(it_275->item, "./comelang.h", 1032, "char*")));
        }
        it_275=it_275->next;
    }
    __result_obj__192 = (struct list$1char$ph*)come_increment_ref_count(result_274);
    /*c*/ come_call_finalizer3(result_274,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value256 = (void*)0;
struct list_item$1char$ph* litem_276;
char* __dec_obj51;
void* __right_value257 = (void*)0;
struct list_item$1char$ph* litem_277;
char* __dec_obj52;
void* __right_value258 = (void*)0;
struct list_item$1char$ph* litem_278;
char* __dec_obj53;
struct list$1char$ph* __result_obj__191;
    if(    self->len==0) {
        litem_276=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value256=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1043, "struct list_item$1char$ph*"))));
        litem_276->prev=((void*)0);
        litem_276->next=((void*)0);
        __dec_obj51=litem_276->item,
        litem_276->item=(char*)come_increment_ref_count(item);
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_276;
        self->head=litem_276;
    }
    else if(    self->len==1) {
        litem_277=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value257=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1053, "struct list_item$1char$ph*"))));
        litem_277->prev=self->head;
        litem_277->next=((void*)0);
        __dec_obj52=litem_277->item,
        litem_277->item=(char*)come_increment_ref_count(item);
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_277;
        self->head->next=litem_277;
    }
    else {
        litem_278=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value258=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1063, "struct list_item$1char$ph*"))));
        litem_278->prev=self->tail;
        litem_278->next=((void*)0);
        __dec_obj53=litem_278->item,
        litem_278->item=(char*)come_increment_ref_count(item);
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_278;
        self->tail=litem_278;
    }
    self->len++;
    __result_obj__191 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__191;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value264 = (void*)0;
struct list_item$1CVALUE$ph* litem_279;
struct CVALUE* __dec_obj57;
void* __right_value265 = (void*)0;
struct list_item$1CVALUE$ph* litem_280;
struct CVALUE* __dec_obj58;
void* __right_value266 = (void*)0;
struct list_item$1CVALUE$ph* litem_281;
struct CVALUE* __dec_obj59;
struct list$1CVALUE$ph* __result_obj__194;
    if(    self->len==0) {
        litem_279=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value264=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj57=litem_279->item,
        litem_279->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj57,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value265=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj58=litem_280->item,
        litem_280->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value266=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj59=litem_281->item,
        litem_281->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj59,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__194 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value267 = (void*)0;
struct sFun* __dec_obj60;
struct sFunNode* __result_obj__196;
    ((struct sNodeBase*)(__right_value267=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value267,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj60=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    /*b*/ come_call_finalizer3(__dec_obj60,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__196 = (struct sFunNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value268 = (void*)0;
char* __result_obj__197;
    __result_obj__197 = (char*)come_increment_ref_count(((char*)(__right_value268=__builtin_string("sFunNode"))));
    (__right_value268 = come_decrement_ref_count(__right_value268, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__197 = come_decrement_ref_count(__result_obj__197, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__197;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_282;
int block_level_283;
void* __right_value269 = (void*)0;
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
            add_come_code(info,((char*)(__right_value269=xsprintf("come_heap_final();\n"))));
            (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mFun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct sBlock* result_284;
int sline_top_285;
int block_level_286;
char* p_saved_287;
int sline_saved_288;
char* sname_saved_289;
void* __right_value272 = (void*)0;
char* __dec_obj61;
char* __dec_obj62;
struct map$2char$phchar$ph* __dec_obj63;
char* p_290;
int sline_291;
void* __right_value273 = (void*)0;
char* sname_292;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* module_name_293;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1char$ph* params_294;
void* __right_value278 = (void*)0;
char* word_295;
void* __right_value279 = (void*)0;
char* __dec_obj64;
void* __right_value280 = (void*)0;
char* __dec_obj65;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result_obj__206;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sClassModule* module_302;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct map$2char$phchar$ph* __dec_obj66;
int i_303;
struct list$1char$ph* o2_saved_304;
char* it_307;
void* __right_value289 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
char* __dec_obj67;
void* __right_value298 = (void*)0;
struct sNode* node_353;
void* __right_value299 = (void*)0;
char* __dec_obj68;
_Bool omit_semicolon_357;
void* __right_value303 = (void*)0;
char* __dec_obj72;
char* head_372;
void* __right_value304 = (void*)0;
struct sNode* value_373;
char* tail_374;
void* __right_value305 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sNode* node_376;
void* __right_value308 = (void*)0;
char* __dec_obj74;
struct sNode* node_377;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value313 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj77;
_Bool omit_semicolon_379;
char* p_380;
char* head_381;
void* __right_value315 = (void*)0;
char* source_382;
void* __right_value316 = (void*)0;
struct sNode* node_383;
struct sBlock* __result_obj__238;
node_377 = (void*)0;
    result_284=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 116, "struct sBlock*"))));
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
        while(        (_Bool)1) {
            if(            p_saved_287) {
                if(                *info->p==0) {
                    info->p=p_saved_287;
                    info->sline=sline_saved_288;
                    __dec_obj61=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_289));
                    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_287=((void*)0);
                    sline_saved_288=0;
                    __dec_obj62=sname_saved_289,
                    sname_saved_289=((void*)0);
                    __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj63=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj63,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_290=info->p;
            sline_291=info->sline;
            sname_292=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_291;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value274=parse_word(info)));
                (__right_value274 = come_decrement_ref_count(__right_value274, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_293=(char*)come_increment_ref_count(parse_word(info));
                params_294=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 172, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while(                    (_Bool)1) {
                        word_295=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_294,(char*)come_increment_ref_count(word_295));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid source end");
                            exit(2);
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_295 = come_decrement_ref_count(word_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        (word_295 = come_decrement_ref_count(word_295, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_287=info->p;
                sline_saved_288=info->sline;
                __dec_obj64=sname_saved_289,
                sname_saved_289=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj65=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_293));
                __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value283=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value282=__builtin_string(module_name_293))))))==((void*)0))),                (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value283,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result_obj__206 = (void*)come_increment_ref_count(((void*)0));
                    (module_name_293 = come_decrement_ref_count(module_name_293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_294,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_292 = come_decrement_ref_count(sname_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_289 = come_decrement_ref_count(sname_saved_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_284,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__206,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__206;
                }
                module_302=((struct sClassModule*)(__right_value286=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value285=__builtin_string(module_name_293))))));
                (__right_value284 = come_decrement_ref_count(__right_value284, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value285 = come_decrement_ref_count(__right_value285, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value286,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_302->mParams)!=list$1char$ph_length(params_294)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj66=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 226, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj66,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_303=0;
                for(                o2_saved_304=(struct list$1char$ph*)come_increment_ref_count((module_302->mParams)),it_307=list$1char$ph_begin((o2_saved_304));                !list$1char$ph_end((o2_saved_304));                it_307=list$1char$ph_next((o2_saved_304))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_307)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value295=list$1char$ph_operator_load_element(params_294,i_303))))));
                    (__right_value295 = come_decrement_ref_count(__right_value295, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_303++;
                }
                /*c*/ come_call_finalizer3(o2_saved_304,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_302->mText;
                info->sline=module_302->mSLine;
                __dec_obj67=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_302->mSName));
                __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_293 = come_decrement_ref_count(module_name_293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_294,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            node_353=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj68=info->sname,
            info->sname=(char*)come_increment_ref_count(node_353->sname(node_353->_protocol_obj));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=node_353->sline(node_353->_protocol_obj);
            if(            node_353==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_353));
            parse_sharp_v5(info);
            if(            node_353->terminated(node_353->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_357=(_Bool)1;
            if(            node_353->terminated(node_353->_protocol_obj)) {
                omit_semicolon_357=(_Bool)0;
            }
            while(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_357=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_284->mOmitSemicolon=omit_semicolon_357;
                if(                omit_semicolon_357&&in_function) {
                    list$1sNode$ph_delete(result_284->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_290;
                    info->sline=sline_291;
                    __dec_obj72=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_292));
                    __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    head_372=info->p;
                    value_373=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_374=info->p;
                    __dec_obj73=value_373,
                    value_373=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_373),info));
                    (__dec_obj73 ? __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    char buf_375[tail_374-head_372+1];
                    memset(&buf_375, 0, sizeof(char)                    *(tail_374-head_372+1)                    );
                    memcpy(buf_375,head_372,tail_374-head_372);
                    buf_375[tail_374-head_372]=0;
                    expected_next_character(125,info);
                    node_376=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_373),(char*)come_increment_ref_count(__builtin_string(buf_375)),info));
                    list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_376));
                    ((value_373) ? value_373 = come_decrement_ref_count(value_373, ((struct sNode*)value_373)->finalize, ((struct sNode*)value_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_376) ? node_376 = come_decrement_ref_count(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_292 = come_decrement_ref_count(sname_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_353) ? node_353 = come_decrement_ref_count(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_373) ? value_373 = come_decrement_ref_count(value_373, ((struct sNode*)value_373)->finalize, ((struct sNode*)value_373)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_376) ? node_376 = come_decrement_ref_count(node_376, ((struct sNode*)node_376)->finalize, ((struct sNode*)node_376)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_292 = come_decrement_ref_count(sname_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_353) ? node_353 = come_decrement_ref_count(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_292 = come_decrement_ref_count(sname_292, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_353) ? node_353 = come_decrement_ref_count(node_353, ((struct sNode*)node_353)->finalize, ((struct sNode*)node_353)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_287) {
            if(            info->p==0) {
                info->p=p_saved_287;
                info->sline=sline_saved_288;
                __dec_obj74=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_289));
                __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 329, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value310=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 329, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj76=node_377,
            node_377=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj76 ? __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value310,sSemicolonNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_377));
        }
        else {
            __dec_obj77=node_377,
            node_377=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_377==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_377->terminated(node_377->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_379=(_Bool)1;
            if(            node_377->terminated(node_377->_protocol_obj)) {
                omit_semicolon_379=(_Bool)0;
            }
            while(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_379=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_284->mOmitSemicolon=omit_semicolon_379;
            list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_377));
        }
        ((node_377) ? node_377 = come_decrement_ref_count(node_377, ((struct sNode*)node_377)->finalize, ((struct sNode*)node_377)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_380=info->p;
        head_381=info->head;
        source_382=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_382;
        info->head=source_382;
        node_383=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_383==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNode$ph_push_back(result_284->mNodes,(struct sNode*)come_increment_ref_count(node_383));
        info->p=p_380;
        info->head=head_381;
        (source_382 = come_decrement_ref_count(source_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_383) ? node_383 = come_decrement_ref_count(node_383, ((struct sNode*)node_383)->finalize, ((struct sNode*)node_383)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_286;
    __result_obj__238 = (struct sBlock*)come_increment_ref_count(result_284);
    /*c*/ come_call_finalizer3(result_284,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__238,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_296;
unsigned int hash_297;
unsigned int it_298;
struct sClassModule* __result_obj__198;
struct sClassModule* __result_obj__199;
struct sClassModule* __result_obj__200;
struct sClassModule* __result_obj__201;
default_value_296 = (void*)0;
    memset(&default_value_296,0,sizeof(struct sClassModule*));
    hash_297=string_get_hash_key(((char*)key))%self->size;
    it_298=hash_297;
    while(    (_Bool)1) {
        if(        self->item_existance[it_298]) {
            if(            string_equals(self->keys[it_298],key)) {
                __result_obj__198 = (struct sClassModule*)come_increment_ref_count(self->items[it_298]);
                /*c*/ come_call_finalizer3(default_value_296,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__198,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__198;
            }
            it_298++;
            if(            it_298>=self->size) {
                it_298=0;
            }
            else if(            it_298==hash_297) {
                __result_obj__199 = (struct sClassModule*)come_increment_ref_count(default_value_296);
                /*c*/ come_call_finalizer3(default_value_296,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__199,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__199;
            }
        }
        else {
            __result_obj__200 = (struct sClassModule*)come_increment_ref_count(default_value_296);
            /*c*/ come_call_finalizer3(default_value_296,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__200,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__200;
        }
    }
    __result_obj__201 = (struct sClassModule*)come_increment_ref_count(default_value_296);
    /*c*/ come_call_finalizer3(default_value_296,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__201,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__201;
}

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_299;
unsigned int hash_300;
unsigned int it_301;
struct sClassModule* __result_obj__202;
struct sClassModule* __result_obj__203;
struct sClassModule* __result_obj__204;
struct sClassModule* __result_obj__205;
default_value_299 = (void*)0;
    memset(&default_value_299,0,sizeof(struct sClassModule*));
    hash_300=string_get_hash_key(((char*)key))%self->size;
    it_301=hash_300;
    while(    (_Bool)1) {
        if(        self->item_existance[it_301]) {
            if(            string_equals(self->keys[it_301],key)) {
                __result_obj__202 = (struct sClassModule*)come_increment_ref_count(self->items[it_301]);
                /*c*/ come_call_finalizer3(default_value_299,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__202,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__202;
            }
            it_301++;
            if(            it_301>=self->size) {
                it_301=0;
            }
            else if(            it_301==hash_300) {
                __result_obj__203 = (struct sClassModule*)come_increment_ref_count(default_value_299);
                /*c*/ come_call_finalizer3(default_value_299,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__203,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__203;
            }
        }
        else {
            __result_obj__204 = (struct sClassModule*)come_increment_ref_count(default_value_299);
            /*c*/ come_call_finalizer3(default_value_299,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__204,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__204;
        }
    }
    __result_obj__205 = (struct sClassModule*)come_increment_ref_count(default_value_299);
    /*c*/ come_call_finalizer3(default_value_299,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__205,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__205;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_305;
char* __result_obj__207;
char* __result_obj__208;
char* result_306;
char* __result_obj__209;
result_305 = (void*)0;
result_306 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_305,0,sizeof(char*));
        __result_obj__207 = result_305;
        return __result_obj__207;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__208 = self->it->item;
        return __result_obj__208;
    }
    memset(&result_306,0,sizeof(char*));
    __result_obj__209 = result_306;
    return __result_obj__209;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_308;
char* __result_obj__210;
char* __result_obj__211;
char* result_309;
char* __result_obj__212;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_308,0,sizeof(char*));
        __result_obj__210 = result_308;
        return __result_obj__210;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__211 = self->it->item;
        return __result_obj__211;
    }
    memset(&result_309,0,sizeof(char*));
    __result_obj__212 = result_309;
    return __result_obj__212;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_327;
unsigned int it_328;
_Bool same_key_exist_345;
char* it2_346;
struct map$2char$phchar$ph* __result_obj__227;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_327=string_get_hash_key(((char*)key))%self->size;
    it_328=hash_327;
    while(    (_Bool)1) {
        if(        self->item_existance[it_328]) {
            if(            string_equals(self->keys[it_328],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_328]);
                    (self->keys[it_328] = come_decrement_ref_count(self->keys[it_328], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_328]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_328]);
                    self->keys[it_328]=key;
                }
                if(                1) {
                    (self->items[it_328] = come_decrement_ref_count(self->items[it_328], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_328]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_328]=item;
                }
                break;
            }
            it_328++;
            if(            it_328>=self->size) {
                it_328=0;
            }
            else if(            it_328==hash_327) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_328]=(_Bool)1;
            if(            1) {
                self->keys[it_328]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_328]=key;
            }
            if(            1) {
                self->items[it_328]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_328]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_345=(_Bool)0;
    for(    it2_346=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_346=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_346,key)) {
            same_key_exist_345=(_Bool)1;
        }
    }
    if(    !same_key_exist_345) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__227 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__227;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_310;
void* __right_value290 = (void*)0;
char** keys_311;
void* __right_value291 = (void*)0;
char** items_312;
void* __right_value292 = (void*)0;
_Bool* item_existance_313;
int len_314;
char* it_317;
char* default_value_320;
void* __right_value293 = (void*)0;
char* it2_321;
unsigned int hash_324;
int n_325;
char* default_value_326;
void* __right_value294 = (void*)0;
default_value_320 = (void*)0;
default_value_326 = (void*)0;
    size_310=self->size*10;
    keys_311=(char**)come_increment_ref_count(((char**)(__right_value290=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_310)), "./comelang.h", 2167, "char**"))));
    items_312=(char**)come_increment_ref_count(((char**)(__right_value291=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_310)), "./comelang.h", 2168, "char**"))));
    item_existance_313=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value292=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_310)), "./comelang.h", 2169, "_Bool*"))));
    len_314=0;
    for(    it_317=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_317=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_320,0,sizeof(char*));
        it2_321=((char*)(__right_value293=map$2char$phchar$ph_at(self,it_317,(char*)come_increment_ref_count(default_value_320))));
        (__right_value293 = come_decrement_ref_count(__right_value293, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_324=string_get_hash_key(((char*)it_317))%size_310;
        n_325=hash_324;
        while(        (_Bool)1) {
            if(            item_existance_313[n_325]) {
                n_325++;
                if(                n_325>=size_310) {
                    n_325=0;
                }
                else if(                n_325==hash_324) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_313[n_325]=(_Bool)1;
                keys_311[n_325]=it_317;
                items_312[n_325]=((char*)(__right_value294=map$2char$phchar$ph_at(self,it_317,(char*)come_increment_ref_count(default_value_326))));
                (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_314++;
                (default_value_326 = come_decrement_ref_count(default_value_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_326 = come_decrement_ref_count(default_value_326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_320 = come_decrement_ref_count(default_value_320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_311;
    self->items=items_312;
    self->item_existance=item_existance_313;
    self->size=size_310;
    self->len=len_314;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_315;
char* __result_obj__213;
char* __result_obj__214;
char* result_316;
char* __result_obj__215;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_315,0,sizeof(char*));
        __result_obj__213 = result_315;
        return __result_obj__213;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__214 = self->key_list->it->item;
        return __result_obj__214;
    }
    memset(&result_316,0,sizeof(char*));
    __result_obj__215 = result_316;
    return __result_obj__215;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_318;
char* __result_obj__216;
char* __result_obj__217;
char* result_319;
char* __result_obj__218;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_318,0,sizeof(char*));
        __result_obj__216 = result_318;
        return __result_obj__216;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__217 = self->key_list->it->item;
        return __result_obj__217;
    }
    memset(&result_319,0,sizeof(char*));
    __result_obj__218 = result_319;
    return __result_obj__218;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_322;
unsigned int it_323;
char* __result_obj__219;
char* __result_obj__220;
char* __result_obj__221;
char* __result_obj__222;
    hash_322=string_get_hash_key(((char*)key))%self->size;
    it_323=hash_322;
    while(    (_Bool)1) {
        if(        self->item_existance[it_323]) {
            if(            string_equals(self->keys[it_323],key)) {
                __result_obj__219 = (char*)come_increment_ref_count(self->items[it_323]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__219;
            }
            it_323++;
            if(            it_323>=self->size) {
                it_323=0;
            }
            else if(            it_323==hash_322) {
                __result_obj__220 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
                (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__220;
            }
        }
        else {
            __result_obj__221 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
            (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__221;
        }
    }
    __result_obj__222 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__222 = come_decrement_ref_count(__result_obj__222, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__222;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_329;
struct list_item$1char$ph* it_330;
struct list$1char$ph* __result_obj__226;
    it2_329=0;
    it_330=self->head;
    while(    it_330!=((void*)0)) {
        if(        string_equals(it_330->item,item)) {
            list$1char$ph_delete(self,it2_329,it2_329+1);
            break;
        }
        it2_329++;
        it_330=it_330->next;
    }
    __result_obj__226 = self;
    return __result_obj__226;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_331;
struct list$1char$ph* __result_obj__223;
struct list_item$1char$ph* it_334;
int i_335;
struct list_item$1char$ph* prev_it_336;
struct list_item$1char$ph* it_337;
int i_338;
struct list_item$1char$ph* prev_it_339;
struct list_item$1char$ph* it_340;
struct list_item$1char$ph* head_prev_it_341;
struct list_item$1char$ph* tail_it_342;
int i_343;
struct list_item$1char$ph* prev_it_344;
struct list$1char$ph* __result_obj__225;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_331=tail;
        tail=head;
        head=tmp_331;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__223 = self;
        return __result_obj__223;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_334=self->head;
        i_335=0;
        while(        it_334!=((void*)0)) {
            if(            i_335<tail) {
                prev_it_336=it_334;
                it_334=it_334->next;
                i_335++;
                /*c*/ come_call_finalizer3(prev_it_336,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_335==tail) {
                self->head=it_334;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_334=it_334->next;
                i_335++;
            }
        }
    }
    else if(    tail==self->len) {
        it_337=self->head;
        i_338=0;
        while(        it_337!=((void*)0)) {
            if(            i_338==head) {
                self->tail=it_337->prev;
                self->tail->next=((void*)0);
            }
            if(            i_338>=head) {
                prev_it_339=it_337;
                it_337=it_337->next;
                i_338++;
                /*c*/ come_call_finalizer3(prev_it_339,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_337=it_337->next;
                i_338++;
            }
        }
    }
    else {
        it_340=self->head;
        head_prev_it_341=((void*)0);
        tail_it_342=((void*)0);
        i_343=0;
        while(        it_340!=((void*)0)) {
            if(            i_343==head) {
                head_prev_it_341=it_340->prev;
            }
            if(            i_343==tail) {
                tail_it_342=it_340;
            }
            if(            i_343>=head&&i_343<tail) {
                prev_it_344=it_340;
                it_340=it_340->next;
                i_343++;
                /*c*/ come_call_finalizer3(prev_it_344,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_340=it_340->next;
                i_343++;
            }
        }
        if(        head_prev_it_341!=((void*)0)) {
            head_prev_it_341->next=tail_it_342;
        }
        if(        tail_it_342!=((void*)0)) {
            tail_it_342->prev=head_prev_it_341;
        }
    }
    __result_obj__225 = self;
    return __result_obj__225;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_332;
struct list_item$1char$ph* prev_it_333;
struct list$1char$ph* __result_obj__224;
    it_332=self->head;
    while(    it_332!=((void*)0)) {
        prev_it_333=it_332;
        it_332=it_332->next;
        /*c*/ come_call_finalizer3(prev_it_333,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__224 = self;
    return __result_obj__224;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_347;
int i_348;
char* __result_obj__228;
char* default_value_349;
char* __result_obj__229;
default_value_349 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_347=self->head;
    i_348=0;
    while(    it_347!=((void*)0)) {
        if(        position==i_348) {
            __result_obj__228 = (char*)come_increment_ref_count(it_347->item);
            (__result_obj__228 = come_decrement_ref_count(__result_obj__228, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__228;
        }
        it_347=it_347->next;
        i_348++;
    }
    memset(&default_value_349,0,sizeof(char*));
    __result_obj__229 = (char*)come_increment_ref_count(default_value_349);
    (default_value_349 = come_decrement_ref_count(default_value_349, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__229 = come_decrement_ref_count(__result_obj__229, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__229;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_350;
int i_351;
char* __result_obj__230;
char* default_value_352;
char* __result_obj__231;
default_value_352 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_350=self->head;
    i_351=0;
    while(    it_350!=((void*)0)) {
        if(        position==i_351) {
            __result_obj__230 = (char*)come_increment_ref_count(it_350->item);
            (__result_obj__230 = come_decrement_ref_count(__result_obj__230, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__230;
        }
        it_350=it_350->next;
        i_351++;
    }
    memset(&default_value_352,0,sizeof(char*));
    __result_obj__231 = (char*)come_increment_ref_count(default_value_352);
    (default_value_352 = come_decrement_ref_count(default_value_352, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 1/* force_delete_*/, (void*)0));
    (__result_obj__231 = come_decrement_ref_count(__result_obj__231, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__231;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value300 = (void*)0;
struct list_item$1sNode$ph* litem_354;
struct sNode* __dec_obj69;
void* __right_value301 = (void*)0;
struct list_item$1sNode$ph* litem_355;
struct sNode* __dec_obj70;
void* __right_value302 = (void*)0;
struct list_item$1sNode$ph* litem_356;
struct sNode* __dec_obj71;
struct list$1sNode$ph* __result_obj__232;
    if(    self->len==0) {
        litem_354=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value300=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1113, "struct list_item$1sNode$ph*"))));
        litem_354->prev=((void*)0);
        litem_354->next=((void*)0);
        __dec_obj69=litem_354->item,
        litem_354->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_354;
        self->head=litem_354;
    }
    else if(    self->len==1) {
        litem_355=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value301=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1123, "struct list_item$1sNode$ph*"))));
        litem_355->prev=self->head;
        litem_355->next=((void*)0);
        __dec_obj70=litem_355->item,
        litem_355->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_355;
        self->head->next=litem_355;
    }
    else {
        litem_356=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value302=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1133, "struct list_item$1sNode$ph*"))));
        litem_356->prev=self->tail;
        litem_356->next=((void*)0);
        __dec_obj71=litem_356->item,
        litem_356->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_356;
        self->tail=litem_356;
    }
    self->len++;
    __result_obj__232 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__232;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_358;
struct list$1sNode$ph* __result_obj__233;
struct list_item$1sNode$ph* it_361;
int i_362;
struct list_item$1sNode$ph* prev_it_363;
struct list_item$1sNode$ph* it_364;
int i_365;
struct list_item$1sNode$ph* prev_it_366;
struct list_item$1sNode$ph* it_367;
struct list_item$1sNode$ph* head_prev_it_368;
struct list_item$1sNode$ph* tail_it_369;
int i_370;
struct list_item$1sNode$ph* prev_it_371;
struct list$1sNode$ph* __result_obj__235;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_358=tail;
        tail=head;
        head=tmp_358;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__233 = self;
        return __result_obj__233;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_361=self->head;
        i_362=0;
        while(        it_361!=((void*)0)) {
            if(            i_362<tail) {
                prev_it_363=it_361;
                it_361=it_361->next;
                i_362++;
                /*c*/ come_call_finalizer3(prev_it_363,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_362==tail) {
                self->head=it_361;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_361=it_361->next;
                i_362++;
            }
        }
    }
    else if(    tail==self->len) {
        it_364=self->head;
        i_365=0;
        while(        it_364!=((void*)0)) {
            if(            i_365==head) {
                self->tail=it_364->prev;
                self->tail->next=((void*)0);
            }
            if(            i_365>=head) {
                prev_it_366=it_364;
                it_364=it_364->next;
                i_365++;
                /*c*/ come_call_finalizer3(prev_it_366,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_364=it_364->next;
                i_365++;
            }
        }
    }
    else {
        it_367=self->head;
        head_prev_it_368=((void*)0);
        tail_it_369=((void*)0);
        i_370=0;
        while(        it_367!=((void*)0)) {
            if(            i_370==head) {
                head_prev_it_368=it_367->prev;
            }
            if(            i_370==tail) {
                tail_it_369=it_367;
            }
            if(            i_370>=head&&i_370<tail) {
                prev_it_371=it_367;
                it_367=it_367->next;
                i_370++;
                /*c*/ come_call_finalizer3(prev_it_371,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_367=it_367->next;
                i_370++;
            }
        }
        if(        head_prev_it_368!=((void*)0)) {
            head_prev_it_368->next=tail_it_369;
        }
        if(        tail_it_369!=((void*)0)) {
            tail_it_369->prev=head_prev_it_368;
        }
    }
    __result_obj__235 = self;
    return __result_obj__235;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_359;
struct list_item$1sNode$ph* prev_it_360;
struct list$1sNode$ph* __result_obj__234;
    it_359=self->head;
    while(    it_359!=((void*)0)) {
        prev_it_360=it_359;
        it_359=it_359->next;
        /*c*/ come_call_finalizer3(prev_it_360,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__234 = self;
    return __result_obj__234;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__236;
void* __right_value311 = (void*)0;
struct sSemicolonNode* result_378;
void* __right_value312 = (void*)0;
char* __dec_obj75;
struct sSemicolonNode* __result_obj__237;
    if(    self==(void*)0) {
        __result_obj__236 = (void*)0;
        return __result_obj__236;
    }
    result_378=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)) {
        result_378->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj75=result_378->sname,
        result_378->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_378->sline_real=self->sline_real;
    }
    __result_obj__237 = result_378;
    /*c*/ come_call_finalizer3(result_378,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__237;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_384;
struct sVarTable* old_table_385;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sVarTable* __dec_obj78;
struct sVarTable* current_loop_vtable_386;
int i_387;
struct list$1char$ph* o2_saved_388;
char* name_389;
void* __right_value319 = (void*)0;
struct sType* type_390;
void* __right_value320 = (void*)0;
int block_level_397;
int i_398;
struct list$1sNode$ph* o2_saved_399;
struct sNode* node_402;
struct list$1sRightValueObject$ph* right_value_objects_405;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj79;
char* __dec_obj80;
char* __dec_obj81;
int stack_num_before_410;
int sline_411;
void* __right_value323 = (void*)0;
char* sname_412;
void* __right_value324 = (void*)0;
char* __dec_obj82;
_Bool Value_413;
void* __right_value325 = (void*)0;
struct CVALUE* come_value_414;
void* __right_value331 = (void*)0;
struct CVALUE* come_value2_415;
void* __right_value332 = (void*)0;
char* __dec_obj87;
void* __right_value333 = (void*)0;
struct CVALUE* come_value2_417;
struct sVar* var__418;
void* __right_value334 = (void*)0;
struct CVALUE* come_value3_419;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sType* __dec_obj88;
void* __right_value337 = (void*)0;
char* c_value_436;
void* __right_value338 = (void*)0;
char* __dec_obj89;
void* __right_value339 = (void*)0;
char* __dec_obj90;
void* __right_value340 = (void*)0;
char* __dec_obj91;
_Bool Value_437;
void* __right_value341 = (void*)0;
char* __dec_obj92;
struct list$1sRightValueObject$ph* __dec_obj93;
void* __if_result__0_440 = (void*)0;
struct list$1sVar$ph* o2_saved_441;
struct sVar* it_444;
void* __right_value342 = (void*)0;
struct list$1sVar$ph* __dec_obj94;
memset(&i_387, 0, sizeof(int));
memset(&i_398, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_384=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_385=info->lv_table;
    if(    !no_var_table) {
        __dec_obj78=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 403, "struct sVarTable*")),(_Bool)0,old_table_385));
        /*b*/ come_call_finalizer3(__dec_obj78,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_386=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_388=(param_names),name_389=list$1char$ph_begin((o2_saved_388));        !list$1char$ph_end((o2_saved_388));        name_389=list$1char$ph_next((o2_saved_388))        ){
            type_390=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_387));
            type_390->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_389,(struct sType*)come_increment_ref_count(sType_clone(type_390)),info,(_Bool)1,(_Bool)0);
            i_387++;
            /*c*/ come_call_finalizer3(type_390,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    block_level_397=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_399=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_402=list$1sNode$ph_begin((o2_saved_399));        !list$1sNode$ph_end((o2_saved_399));        node_402=list$1sNode$ph_next((o2_saved_399))        ){
            right_value_objects_405=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj79=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 433, "struct list$1sRightValueObject$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj79,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj80=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj81=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            stack_num_before_410=list$1CVALUE$ph_length(info->stack);
            sline_411=info->sline;
            sname_412=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_402->sline(node_402->_protocol_obj);
            __dec_obj82=info->sname,
            info->sname=(char*)come_increment_ref_count(node_402->sname(node_402->_protocol_obj));
            __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            i_398==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_413=node_compile(node_402,info);
                if(                !Value_413) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_410+1) {
                    come_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_414->type->mClass->mName,"void")&&come_value_414->type->mPointerNum==0) {
                        come_value2_415=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_414));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_415));
                        __dec_obj87=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_415->c_value));
                        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_415,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        come_value2_417=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_414));
                        var__418=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__418) {
                            come_value3_419=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 468, "struct CVALUE*"));
                            if(                            var__418->mType->mClass=="void"&&var__418->mType->mPointerNum==1) {
                                check_assign_type("invalid if result value",var__418->mType,((struct sType*)(__right_value335=sType_clone(come_value_414->type))),come_value3_419,(_Bool)0,(_Bool)1,(_Bool)1,info);
                                /*c*/ come_call_finalizer3(__right_value335,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                            __dec_obj88=var__418->mType,
                            var__418->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_414->type));
                            /*b*/ come_call_finalizer3(__dec_obj88,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_414->type->mHeap) {
                                c_value_436=(char*)come_increment_ref_count(increment_ref_count_object(come_value_414->type,come_value_414->c_value,info));
                                __dec_obj89=come_value2_417->c_value,
                                come_value2_417->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__418->mCValueName,c_value_436));
                                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                (c_value_436 = come_decrement_ref_count(c_value_436, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj90=come_value2_417->c_value,
                                come_value2_417->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__418->mCValueName,come_value_414->c_value));
                                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            /*c*/ come_call_finalizer3(come_value3_419,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_417));
                        __dec_obj91=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_417->c_value));
                        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_417,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(come_value_414,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            else {
                Value_437=node_compile(node_402,info);
                if(                !Value_437) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_411;
            __dec_obj92=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_412));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_410);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj93=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_405);
            /*b*/ come_call_finalizer3(__dec_obj93,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_398++;
            /*c*/ come_call_finalizer3(right_value_objects_405,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_412 = come_decrement_ref_count(sname_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_399,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_397==0) {
            for(            o2_saved_441=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_444=list$1sVar$ph_begin((o2_saved_441));            !list$1sVar$ph_end((o2_saved_441));            it_444=list$1sVar$ph_next((o2_saved_441))            ){
                free_object(((struct sType*)(__right_value342=sType_clone(it_444->mType))),it_444->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value342,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_441,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj94=info->match_it_var,
            __if_result__0_440=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            /*b*/ come_call_finalizer3(__dec_obj94,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        /*c*/ come_call_finalizer3(__if_result__0_440,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->lv_table=old_table_385;
    info->block_level=block_level_397;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_386;
    info->inhibits_output_code=inhibits_output_code_384;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_391;
int i_392;
struct sType* __result_obj__239;
struct sType* default_value_393;
struct sType* __result_obj__240;
default_value_393 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_391=self->head;
    i_392=0;
    while(    it_391!=((void*)0)) {
        if(        position==i_392) {
            __result_obj__239 = (struct sType*)come_increment_ref_count(it_391->item);
            /*c*/ come_call_finalizer3(__result_obj__239,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__239;
        }
        it_391=it_391->next;
        i_392++;
    }
    memset(&default_value_393,0,sizeof(struct sType*));
    __result_obj__240 = (struct sType*)come_increment_ref_count(default_value_393);
    /*c*/ come_call_finalizer3(default_value_393,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_394;
int i_395;
struct sType* __result_obj__241;
struct sType* default_value_396;
struct sType* __result_obj__242;
default_value_396 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_394=self->head;
    i_395=0;
    while(    it_394!=((void*)0)) {
        if(        position==i_395) {
            __result_obj__241 = (struct sType*)come_increment_ref_count(it_394->item);
            /*c*/ come_call_finalizer3(__result_obj__241,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__241;
        }
        it_394=it_394->next;
        i_395++;
    }
    memset(&default_value_396,0,sizeof(struct sType*));
    __result_obj__242 = (struct sType*)come_increment_ref_count(default_value_396);
    /*c*/ come_call_finalizer3(default_value_396,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__242,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_400;
struct sNode* __result_obj__243;
struct sNode* __result_obj__244;
struct sNode* result_401;
struct sNode* __result_obj__245;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_400,0,sizeof(struct sNode*));
        __result_obj__243 = result_400;
        return __result_obj__243;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__244 = self->it->item;
        return __result_obj__244;
    }
    memset(&result_401,0,sizeof(struct sNode*));
    __result_obj__245 = result_401;
    return __result_obj__245;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_403;
struct sNode* __result_obj__246;
struct sNode* __result_obj__247;
struct sNode* result_404;
struct sNode* __result_obj__248;
result_403 = (void*)0;
result_404 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_403,0,sizeof(struct sNode*));
        __result_obj__246 = result_403;
        return __result_obj__246;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__247 = self->it->item;
        return __result_obj__247;
    }
    memset(&result_404,0,sizeof(struct sNode*));
    __result_obj__248 = result_404;
    return __result_obj__248;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__249;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__249 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_406;
struct list_item$1sRightValueObject$ph* prev_it_407;
    it_406=self->head;
    while(    it_406!=((void*)0)) {
        prev_it_407=it_406;
        it_406=it_406->next;
        /*c*/ come_call_finalizer3(prev_it_407,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_408;
struct list_item$1sRightValueObject$ph* prev_it_409;
    it_408=self->head;
    while(    it_408!=((void*)0)) {
        prev_it_409=it_408;
        it_408=it_408->next;
        /*c*/ come_call_finalizer3(prev_it_409,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__250;
void* __right_value326 = (void*)0;
struct CVALUE* result_416;
void* __right_value327 = (void*)0;
char* __dec_obj83;
void* __right_value328 = (void*)0;
struct sType* __dec_obj84;
void* __right_value329 = (void*)0;
char* __dec_obj85;
void* __right_value330 = (void*)0;
char* __dec_obj86;
struct CVALUE* __result_obj__251;
    if(    self==(void*)0) {
        __result_obj__250 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__250,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__250;
    }
    result_416=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj83=result_416->c_value,
        result_416->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj84=result_416->type,
        result_416->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj84,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_416->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_416->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj85=result_416->c_value_without_right_value_objects,
        result_416->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj86=result_416->c_value_without_cast_object_value,
        result_416->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__251 = (struct CVALUE*)come_increment_ref_count(result_416);
    /*c*/ come_call_finalizer3(result_416,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__251,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_420;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_421;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_420=left->head;
    it2_421=right->head;
    while(    it_420!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_420->item,it2_421->item)) {
            return (_Bool)0;
        }
        it_420=it_420->next;
        it2_421=it2_421->next;
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

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_422;
struct list_item$1sType$ph* it2_423;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_422=left->head;
    it2_423=right->head;
    while(    it_422!=((void*)0)) {
        if(        !sType_equals(it_422->item,it2_423->item)) {
            return (_Bool)0;
        }
        it_422=it_422->next;
        it2_423=it2_423->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_424;
struct list_item$1sNode$ph* it2_425;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_424=left->head;
    it2_425=right->head;
    while(    it_424!=((void*)0)) {
        if(        !sNode_equals(it_424->item,it2_425->item)) {
            return (_Bool)0;
        }
        it_424=it_424->next;
        it2_425=it2_425->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_426;
struct list_item$1char$ph* it2_427;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_426=left->head;
    it2_427=right->head;
    while(    it_426!=((void*)0)) {
        if(        !string_equals(it_426->item,it2_427->item)) {
            return (_Bool)0;
        }
        it_426=it_426->next;
        it2_427=it2_427->next;
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
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
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
    if(    list$1tuple2$2char$phsType$ph$ph_operator_not_equals(left->mFields,right->mFields)) {
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_428;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_429;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_428=left->head;
    it2_429=right->head;
    while(    it_428!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_428->item,it2_429->item))) {
            return (_Bool)0;
        }
        it_428=it_428->next;
        it2_429=it2_429->next;
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
    if(    bool_operator_not_equals(left->mDefferRightValue,right->mDefferRightValue)) {
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
    if(    bool_operator_not_equals(left->mExceptionGenericsType,right->mExceptionGenericsType)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&bool_equals(left->mUniq,right->mUniq)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)&&string_equals(left->mParentClassName,right->mParentClassName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mDynamic,right->mDynamic));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2char$phsType$ph$ph_operator_equals(left->mFields,right->mFields))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mDynamic,right->mDynamic))));
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mChannelType,right->mChannelType)&&list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&sNode_equals(left->mAlignas,right->mAlignas)&&string_equals(left->mTupleName,right->mTupleName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mDefferRightValue,right->mDefferRightValue)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&string_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&string_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)&&list$1char$ph_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs)&&bool_equals(left->mExceptionGenericsType,right->mExceptionGenericsType));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(list$1sType$ph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mDefferRightValue,right->mDefferRightValue))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(list$1sNode$ph_operator_equals(left->mArrayNum,right->mArrayNum))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(list$1sType$ph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1char$ph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))&&(bool_operator_equals(left->mExceptionGenericsType,right->mExceptionGenericsType))));
}

static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_430;
struct list_item$1sType$ph* it2_431;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_430=left->head;
    it2_431=right->head;
    while(    it_430!=((void*)0)) {
        if(        !(sType_operator_equals(it_430->item,it2_431->item))) {
            return (_Bool)0;
        }
        it_430=it_430->next;
        it2_431=it2_431->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_432;
struct list_item$1sNode$ph* it2_433;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_432=left->head;
    it2_433=right->head;
    while(    it_432!=((void*)0)) {
        if(        !(sNode_operator_equals(it_432->item,it2_433->item))) {
            return (_Bool)0;
        }
        it_432=it_432->next;
        it2_433=it2_433->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_434;
struct list_item$1char$ph* it2_435;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_434=left->head;
    it2_435=right->head;
    while(    it_434!=((void*)0)) {
        if(        !(string_operator_equals(it_434->item,it2_435->item))) {
            return (_Bool)0;
        }
        it_434=it_434->next;
        it2_435=it2_435->next;
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

static _Bool list$1tuple2$2char$phsType$ph$ph_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
    return !list$1tuple2$2char$phsType$ph$ph_operator_equals(left,right);
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_438;
struct list_item$1sRightValueObject$ph* prev_it_439;
struct list$1sRightValueObject$ph* __result_obj__252;
    it_438=self->head;
    while(    it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        /*c*/ come_call_finalizer3(prev_it_439,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__252 = self;
    return __result_obj__252;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_442;
struct sVar* __result_obj__253;
struct sVar* __result_obj__254;
struct sVar* result_443;
struct sVar* __result_obj__255;
result_442 = (void*)0;
result_443 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_442,0,sizeof(struct sVar*));
        __result_obj__253 = result_442;
        return __result_obj__253;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__254 = self->it->item;
        return __result_obj__254;
    }
    memset(&result_443,0,sizeof(struct sVar*));
    __result_obj__255 = result_443;
    return __result_obj__255;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_445;
struct sVar* __result_obj__256;
struct sVar* __result_obj__257;
struct sVar* result_446;
struct sVar* __result_obj__258;
result_445 = (void*)0;
result_446 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_445,0,sizeof(struct sVar*));
        __result_obj__256 = result_445;
        return __result_obj__256;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__257 = self->it->item;
        return __result_obj__257;
    }
    memset(&result_446,0,sizeof(struct sVar*));
    __result_obj__258 = result_446;
    return __result_obj__258;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_447;
struct list_item$1sVar$ph* prev_it_448;
    it_447=self->head;
    while(    it_447!=((void*)0)) {
        prev_it_448=it_447;
        it_447=it_447->next;
        /*c*/ come_call_finalizer3(prev_it_448,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_449;
struct list_item$1sVar$ph* prev_it_450;
    it_449=self->head;
    while(    it_449!=((void*)0)) {
        prev_it_450=it_449;
        it_449=it_449->next;
        /*c*/ come_call_finalizer3(prev_it_450,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
char* head_451;
_Bool dquort_452;
_Bool squort_453;
int sline_454;
int nest_455;
char* tail_456;
void* __right_value343 = (void*)0;
char* buf_457;
void* __right_value344 = (void*)0;
char* __result_obj__259;
    head_451=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_452=(_Bool)0;
        squort_453=(_Bool)0;
        sline_454=0;
        nest_455=0;
        while(        1) {
            if(            dquort_452) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_454);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_452=!dquort_452;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_454);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_454);
                        exit(2);
                    }
                }
            }
            else if(            squort_453) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_454);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_453=!squort_453;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_454);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_454);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_454=info->sline;
                info->p++;
                squort_453=!squort_453;
            }
            else if(            *info->p==34) {
                sline_454=info->sline;
                info->p++;
                dquort_452=!dquort_452;
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
                nest_455++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_455==0) {
                    break;
                }
                nest_455--;
            }
            else if(            *info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
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
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_456=info->p;
    buf_457=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail_456-head_451+1)), "05function.c", 682, "char*"));
    memcpy(buf_457,head_451,tail_456-head_451);
    buf_457[tail_456-head_451]=0;
    skip_spaces_and_lf(info);
    __result_obj__259 = (char*)come_increment_ref_count(((char*)(__right_value344=__builtin_string(buf_457))));
    (buf_457 = come_decrement_ref_count(buf_457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value344 = come_decrement_ref_count(__right_value344, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct buffer* asm_fun_name_458;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct buffer* result_459;
char* head_460;
int brace_num_461;
char* tail_462;
char* head_463;
int brace_num_464;
char* tail_465;
char* head_466;
char* tail_467;
char* head_468;
char* tail_469;
int len_470;
_Bool in_dquort_471;
int brace_num_472;
char* head_473;
char* tail_474;
char* head_475;
char* tail_476;
char* head_477;
char* tail_478;
char* head_479;
int nest_480;
char* tail_481;
char* head_482;
int nest_483;
char* tail_484;
char* head_485;
int nest_486;
char* tail_487;
char* head_488;
int nest_489;
char* tail_490;
char* head_491;
int nest_492;
char* tail_493;
char* head_494;
char* tail_495;
char* head_496;
char* tail_497;
char* head_498;
char* tail_499;
char* head_500;
char* tail_501;
char* head_502;
char* tail_503;
char* head_504;
int brace_num_505;
char* tail_506;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__263;
    asm_fun_name_458=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 693, "struct buffer*"))));
    result_459=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 694, "struct buffer*"))));
    while(    (_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_460=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_461=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_461++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_461--;
                        if(                        brace_num_461==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_462=info->p;
            buffer_append(result_459,head_460,tail_462-head_460);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_463=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_464=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_464++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_464--;
                        if(                        brace_num_464==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_465=info->p;
            buffer_append(result_459,head_463,tail_465-head_463);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_466=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_467=info->p;
            buffer_append(result_459,head_466,tail_467-head_466);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_468=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_469=info->p;
            buffer_append(result_459,head_468,tail_469-head_468);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_470=0;
            if(            *info->p==40) {
                in_dquort_471=(_Bool)0;
                brace_num_472=0;
                while(                *info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_471=!in_dquort_471;
                    }
                    else if(                    in_dquort_471) {
                        buffer_append_char(asm_fun_name_458,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_472++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_472--;
                        if(                        brace_num_472==0) {
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
            head_473=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_474=info->p;
            buffer_append(result_459,head_473,tail_474-head_473);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_475=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_476=info->p;
            buffer_append(result_459,head_475,tail_476-head_475);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_477=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_478=info->p;
            buffer_append(result_459,head_477,tail_478-head_477);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_479=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_480=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_480++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_480--;
                        if(                        nest_480==0) {
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
            tail_481=info->p;
            buffer_append(result_459,head_479,tail_481-head_479);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_482=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_483=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_483++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_483--;
                        if(                        nest_483==0) {
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
            tail_484=info->p;
            buffer_append(result_459,head_482,tail_484-head_482);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_485=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_486=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_486++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_486--;
                        if(                        nest_486==0) {
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
            tail_487=info->p;
            buffer_append(result_459,head_485,tail_487-head_485);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_488=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_489=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_489++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_489--;
                        if(                        nest_489==0) {
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
            tail_490=info->p;
            buffer_append(result_459,head_488,tail_490-head_488);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_491=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_492=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_492++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_492--;
                        if(                        nest_492==0) {
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
            tail_493=info->p;
            buffer_append(result_459,head_491,tail_493-head_491);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_494=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_495=info->p;
            buffer_append(result_459,head_494,tail_495-head_494);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_496=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_497=info->p;
            buffer_append(result_459,head_496,tail_497-head_496);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_498=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_499=info->p;
            buffer_append(result_459,head_498,tail_499-head_498);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_500=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_501=info->p;
            buffer_append(result_459,head_500,tail_501-head_500);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_502=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_503=info->p;
            buffer_append(result_459,head_502,tail_503-head_502);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_504=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_505=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_505++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_505--;
                        if(                        brace_num_505==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_506=info->p;
            buffer_append(result_459,head_504,tail_506-head_504);
        }
        else {
            break;
        }
    }
    __result_obj__263 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value355=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1108, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_458)),(char*)come_increment_ref_count(buffer_to_string(result_459))))));
    /*c*/ come_call_finalizer3(asm_fun_name_458,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_459,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value355,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__263,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
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
struct tuple2$2char$phchar$ph* __result_obj__260;
void* __right_value351 = (void*)0;
struct tuple2$2char$phchar$ph* result_507;
void* __right_value352 = (void*)0;
char* __dec_obj95;
void* __right_value353 = (void*)0;
char* __dec_obj96;
struct tuple2$2char$phchar$ph* __result_obj__261;
    if(    self==(void*)0) {
        __result_obj__260 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__260,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__260;
    }
    result_507=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj95=result_507->v1,
        result_507->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phchar$ph_clone", 4, "char*"));
        __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj96=result_507->v2,
        result_507->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2char$phchar$ph_clone", 5, "char*"));
        __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__261 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(result_507);
    /*c*/ come_call_finalizer3(result_507,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__261,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__261;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_508;
    result_508=0;
    result_508+=int_get_hash_key(((int)self->v1));
    result_508+=int_get_hash_key(((int)self->v2));
    return result_508;
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
char* __dec_obj97;
char* __dec_obj98;
struct tuple2$2char$phchar$ph* __result_obj__262;
    __dec_obj97=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj98=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__262 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__262,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
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
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct buffer* asm_fun_name_509;
void* __right_value358 = (void*)0;
char* attribute_510;
int nest_511;
int nest_512;
int nest_513;
int nest_514;
int nest_515;
void* __right_value359 = (void*)0;
char* __dec_obj99;
int len_516;
_Bool in_dquort_517;
int brace_num_518;
int brace_num_519;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__264;
    asm_fun_name_509=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1113, "struct buffer*"))));
    attribute_510=(char*)come_increment_ref_count(xsprintf(""));
    while(    (_Bool)1) {
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
                nest_511=0;
                while(                1) {
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
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_512=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_512++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_512--;
                        if(                        nest_512==0) {
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
                nest_513=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_513++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_513--;
                        if(                        nest_513==0) {
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
                nest_514=0;
                while(                1) {
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
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_515=0;
                while(                1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_515++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_515--;
                        if(                        nest_515==0) {
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
            __dec_obj99=attribute_510,
            attribute_510=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_516=0;
            if(            *info->p==40) {
                in_dquort_517=(_Bool)0;
                brace_num_518=0;
                while(                *info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_517=!in_dquort_517;
                    }
                    else if(                    in_dquort_517) {
                        buffer_append_char(asm_fun_name_509,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_518++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_518--;
                        if(                        brace_num_518==0) {
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
                brace_num_519=0;
                while(                *info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_519++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_519--;
                        if(                        brace_num_519==0) {
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
    __result_obj__264 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value362=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1382, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_509)),(char*)come_increment_ref_count(attribute_510)))));
    /*c*/ come_call_finalizer3(asm_fun_name_509,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute_510 = come_decrement_ref_count(attribute_510, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value362,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__264,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__264;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value363 = (void*)0;
char* __dec_obj100;
char* head_520;
int head_sline_521;
void* __right_value364 = (void*)0;
char* buf_522;
void* __right_value365 = (void*)0;
struct sNode* node_523;
_Bool Value_524;
    while(    *info->p) {
        __dec_obj100=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1388, "char*"));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        head_520=info->p;
        head_sline_521=info->sline;
        buf_522=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_522 = come_decrement_ref_count(buf_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_523=(struct sNode*)come_increment_ref_count(top_level_v99(buf_522,head_520,head_sline_521,info));
        parse_sharp_v5(info);
        while(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_523!=((void*)0)) {
            Value_524=node_compile(node_523,info);
            if(            !Value_524) {
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
            (buf_522 = come_decrement_ref_count(buf_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_523) ? node_523 = come_decrement_ref_count(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_522 = come_decrement_ref_count(buf_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_523) ? node_523 = come_decrement_ref_count(node_523, ((struct sNode*)node_523)->finalize, ((struct sNode*)node_523)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value366 = (void*)0;
char* name_525;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sType* result_type_526;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1sType$ph* param_types_527;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1char$ph* param_names_528;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct list$1char$ph* param_default_parametors_529;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sFun* fun_530;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
char* name_552;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* result_type_553;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct list$1sType$ph* param_types_554;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct list$1char$ph* param_names_555;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct list$1char$ph* param_default_parametors_556;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sFun* fun_557;
void* __right_value400 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_525=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_526=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1438, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_527=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1439, "struct list$1sType$ph*"))));
        param_names_528=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1440, "struct list$1char$ph*"))));
        param_default_parametors_529=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1441, "struct list$1char$ph*"))));
        fun_530=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1442, "struct sFun*")),(char*)come_increment_ref_count(name_525),(struct sType*)come_increment_ref_count(result_type_526),(struct list$1sType$ph*)come_increment_ref_count(param_types_527),(struct list$1char$ph*)come_increment_ref_count(param_names_528),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_529),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_525)),(struct sFun*)come_increment_ref_count(fun_530));
        (name_525 = come_decrement_ref_count(name_525, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_526,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_527,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_528,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_529,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_530,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_552=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_553=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1451, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_554=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1452, "struct list$1sType$ph*"))));
        param_names_555=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1453, "struct list$1char$ph*"))));
        param_default_parametors_556=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1454, "struct list$1char$ph*"))));
        fun_557=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1455, "struct sFun*")),(char*)come_increment_ref_count(name_552),(struct sType*)come_increment_ref_count(result_type_553),(struct list$1sType$ph*)come_increment_ref_count(param_types_554),(struct list$1char$ph*)come_increment_ref_count(param_names_555),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_556),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_552)),(struct sFun*)come_increment_ref_count(fun_557));
        (name_552 = come_decrement_ref_count(name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_553,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_554,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_555,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_556,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_557,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_548;
unsigned int it_549;
_Bool same_key_exist_550;
char* it2_551;
struct map$2char$phsFun$ph* __result_obj__275;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_548=string_get_hash_key(((char*)key))%self->size;
    it_549=hash_548;
    while(    (_Bool)1) {
        if(        self->item_existance[it_549]) {
            if(            string_equals(self->keys[it_549],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_549]);
                    (self->keys[it_549] = come_decrement_ref_count(self->keys[it_549], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_549]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_549]);
                    self->keys[it_549]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_549],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_549]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_549]=item;
                }
                break;
            }
            it_549++;
            if(            it_549>=self->size) {
                it_549=0;
            }
            else if(            it_549==hash_548) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_549]=(_Bool)1;
            if(            1) {
                self->keys[it_549]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_549]=key;
            }
            if(            1) {
                self->items[it_549]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_549]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_550=(_Bool)0;
    for(    it2_551=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_551=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_551,key)) {
            same_key_exist_550=(_Bool)1;
        }
    }
    if(    !same_key_exist_550) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__275 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_531;
void* __right_value380 = (void*)0;
char** keys_532;
void* __right_value381 = (void*)0;
struct sFun** items_533;
void* __right_value382 = (void*)0;
_Bool* item_existance_534;
int len_535;
char* it_538;
struct sFun* default_value_541;
void* __right_value383 = (void*)0;
struct sFun* it2_542;
unsigned int hash_545;
int n_546;
struct sFun* default_value_547;
void* __right_value384 = (void*)0;
default_value_541 = (void*)0;
default_value_547 = (void*)0;
    size_531=self->size*10;
    keys_532=(char**)come_increment_ref_count(((char**)(__right_value380=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_531)), "./comelang.h", 2167, "char**"))));
    items_533=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value381=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_531)), "./comelang.h", 2168, "struct sFun**"))));
    item_existance_534=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value382=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_531)), "./comelang.h", 2169, "_Bool*"))));
    len_535=0;
    for(    it_538=map$2char$phsFun$ph_begin(self);    !map$2char$phsFun$ph_end(self);    it_538=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_541,0,sizeof(struct sFun*));
        it2_542=((struct sFun*)(__right_value383=map$2char$phsFun$ph_at(self,it_538,(struct sFun*)come_increment_ref_count(default_value_541))));
        /*c*/ come_call_finalizer3(__right_value383,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_545=string_get_hash_key(((char*)it_538))%size_531;
        n_546=hash_545;
        while(        (_Bool)1) {
            if(            item_existance_534[n_546]) {
                n_546++;
                if(                n_546>=size_531) {
                    n_546=0;
                }
                else if(                n_546==hash_545) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_534[n_546]=(_Bool)1;
                keys_532[n_546]=it_538;
                items_533[n_546]=((struct sFun*)(__right_value384=map$2char$phsFun$ph_at(self,it_538,(struct sFun*)come_increment_ref_count(default_value_547))));
                /*c*/ come_call_finalizer3(__right_value384,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_535++;
                /*c*/ come_call_finalizer3(default_value_547,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_547,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_541,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_532;
    self->items=items_533;
    self->item_existance=item_existance_534;
    self->size=size_531;
    self->len=len_535;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_536;
char* __result_obj__265;
char* __result_obj__266;
char* result_537;
char* __result_obj__267;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_536,0,sizeof(char*));
        __result_obj__265 = result_536;
        return __result_obj__265;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__266 = self->key_list->it->item;
        return __result_obj__266;
    }
    memset(&result_537,0,sizeof(char*));
    __result_obj__267 = result_537;
    return __result_obj__267;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_539;
char* __result_obj__268;
char* __result_obj__269;
char* result_540;
char* __result_obj__270;
result_539 = (void*)0;
result_540 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_539,0,sizeof(char*));
        __result_obj__268 = result_539;
        return __result_obj__268;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__269 = self->key_list->it->item;
        return __result_obj__269;
    }
    memset(&result_540,0,sizeof(char*));
    __result_obj__270 = result_540;
    return __result_obj__270;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_543;
unsigned int it_544;
struct sFun* __result_obj__271;
struct sFun* __result_obj__272;
struct sFun* __result_obj__273;
struct sFun* __result_obj__274;
    hash_543=string_get_hash_key(((char*)key))%self->size;
    it_544=hash_543;
    while(    (_Bool)1) {
        if(        self->item_existance[it_544]) {
            if(            string_equals(self->keys[it_544],key)) {
                __result_obj__271 = (struct sFun*)come_increment_ref_count(self->items[it_544]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__271,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__271;
            }
            it_544++;
            if(            it_544>=self->size) {
                it_544=0;
            }
            else if(            it_544==hash_543) {
                __result_obj__272 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__272,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__272;
            }
        }
        else {
            __result_obj__273 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__273,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__273;
        }
    }
    __result_obj__274 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_558;
_Bool is_type_name_flag_559;
int sline_560;
_Bool define_struct_nobody_561;
char* p_562;
int sline_563;
void* __right_value401 = (void*)0;
char* word_564;
_Bool uniq_class_565;
char* p_566;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
char* buf2_567;
_Bool define_function_pointer_result_function_568;
_Bool define_variable_between_brace_569;
char* p_570;
void* __right_value404 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var1 = (void*)0;
struct sType* result_type_571=0;
char* fun_name_572=0;
_Bool err_573=0;
void* __right_value405 = (void*)0;
char* word_574;
_Bool define_function_flag_575;
char* p_576;
void* __right_value406 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var2 = (void*)0;
struct sType* result_type_577=0;
char* fun_name_578=0;
_Bool err_579=0;
char* word_580;
void* __right_value407 = (void*)0;
char* __dec_obj101;
void* __right_value408 = (void*)0;
char* __dec_obj102;
char* __dec_obj103;
void* __right_value409 = (void*)0;
char* __dec_obj104;
_Bool define_variable_581;
char* p_582;
void* __right_value410 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var3 = (void*)0;
struct sType* result_type_583=0;
char* fun_name_584=0;
_Bool err_585=0;
void* __right_value411 = (void*)0;
char* word_586;
void* __right_value412 = (void*)0;
char* word_587;
char* p_588;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
char* word_589;
void* __right_value416 = (void*)0;
char* __dec_obj105;
void* __right_value417 = (void*)0;
char* buf2_590;
void* __right_value418 = (void*)0;
struct sNode* __result_obj__276;
void* __right_value419 = (void*)0;
char* word_591;
void* __right_value420 = (void*)0;
char* word_592;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sNode* node_593;
struct sNode* __result_obj__277;
void* __right_value423 = (void*)0;
struct sNode* __result_obj__278;
char* header_head_594;
void* __right_value424 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var4 = (void*)0;
struct sType* result_type_595=0;
char* fun_name_596=0;
_Bool err_597=0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct list$1sType$ph* param_types_598;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1char$ph* param_names_599;
void* __right_value429 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var5 = (void*)0;
struct sType* param_type_600=0;
char* param_name_601=0;
_Bool err_602=0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct list$1sType$ph* param_types2_607;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1char$ph* param_names2_608;
void* __right_value439 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* param_type_609=0;
char* param_name_610=0;
_Bool err_611=0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* header_tail_613;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sType* result_type2_614;
struct sType* __dec_obj109;
void* __right_value445 = (void*)0;
struct list$1sType$ph* __dec_obj110;
void* __right_value446 = (void*)0;
struct list$1char$ph* __dec_obj111;
_Bool var_args_615;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1char$ph* param_default_parametors_616;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sFun* fun_617;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value500 = (void*)0;
struct sNode* result_618;
struct sNode* __result_obj__303;
void* __right_value501 = (void*)0;
struct sNode* node_649;
struct sNode* __result_obj__304;
void* __right_value502 = (void*)0;
struct sNode* node_650;
struct sNode* __result_obj__305;
void* __right_value503 = (void*)0;
struct sNode* node_651;
char* source_tail_652;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct buffer* header_653;
struct sNode* __result_obj__306;
void* __right_value506 = (void*)0;
char* buf2_654;
void* __right_value507 = (void*)0;
struct sNode* __result_obj__307;
    info->in_top_level=(_Bool)1;
    source_head_558=info->p;
    is_type_name_flag_559=is_type_name(buf,info);
    sline_560=info->sline;
    define_struct_nobody_561=(_Bool)0;
    {
        p_562=info->p;
        sline_563=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_564=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_561=(_Bool)1;
                }
                (word_564 = come_decrement_ref_count(word_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_563;
    }
    uniq_class_565=(_Bool)0;
    if(    charp_operator_equals(buf,"uniq")) {
        p_566=info->p;
        info->p=head;
        (void)((char*)(__right_value402=parse_word(info)));
        (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        xisalpha(*info->p)||*info->p==95) {
            buf2_567=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(buf2_567,"class")) {
                uniq_class_565=(_Bool)1;
            }
            (buf2_567 = come_decrement_ref_count(buf2_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_566;
        info->sline=sline_560;
    }
    define_function_pointer_result_function_568=(_Bool)0;
    define_variable_between_brace_569=(_Bool)0;
    if(    is_type_name_flag_559&&!uniq_class_565) {
        p_570=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sType$phchar$phbool$*)(__right_value404=backtrace_parse_type((_Bool)0,info)));
            result_type_571=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_572=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_573=multiple_assign_var1->v3;
            /*c*/ come_call_finalizer3(__right_value404,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_568=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_574=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_574,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_569=(_Bool)1;
                            }
                        }
                        (word_574 = come_decrement_ref_count(word_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            /*c*/ come_call_finalizer3(result_type_571,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_572 = come_decrement_ref_count(fun_name_572, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_560;
    }
    define_function_flag_575=(_Bool)0;
    if(    is_type_name_flag_559&&!define_function_pointer_result_function_568&&charp_operator_not_equals(buf,"__typeof__")&&!uniq_class_565) {
        p_576=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sType$phchar$phbool$*)(__right_value406=backtrace_parse_type((_Bool)0,info)));
            result_type_577=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_578=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_579=multiple_assign_var2->v3;
            /*c*/ come_call_finalizer3(__right_value406,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_577,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_578 = come_decrement_ref_count(fun_name_578, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_580=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj101=word_580,
                word_580=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(word_580,"extern")) {
                    __dec_obj102=word_580,
                    word_580=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj103=word_580,
                word_580=((void*)0);
                __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_580) {
                if(                is_type_name(word_580,info)) {
                    while(                    *info->p==42) {
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
                        __dec_obj104=word_580,
                        word_580=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                }
                if(                strlen(word_580)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_559) {
                        define_function_flag_575=(_Bool)1;
                    }
                }
            }
            (word_580 = come_decrement_ref_count(word_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_576;
        info->sline=sline_560;
    }
    define_variable_581=(_Bool)1;
    if(    is_type_name_flag_559&&!define_function_pointer_result_function_568&&!uniq_class_565) {
        p_582=info->p;
        info->p=head;
        if(        !is_type_name_flag_559) {
            define_variable_581=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sType$phchar$phbool$*)(__right_value410=backtrace_parse_type((_Bool)0,info)));
            result_type_583=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_584=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_585=multiple_assign_var3->v3;
            /*c*/ come_call_finalizer3(__right_value410,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_586=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_581=(_Bool)1;
                            }
                        }
                        (word_586 = come_decrement_ref_count(word_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_587=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_587,info)&&*info->p!=40) {
                            define_variable_581=(_Bool)1;
                        }
                    }
                    (word_587 = come_decrement_ref_count(word_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(result_type_583,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_584 = come_decrement_ref_count(fun_name_584, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_581=(_Bool)0;
        }
        else if(        define_variable_581) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_581=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_581=(_Bool)0;
            }
        }
        info->p=p_582;
        info->sline=sline_560;
    }
    else {
        define_variable_581=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_568) {
        p_588=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value413=parse_struct_attribute(info)));
            (__right_value413 = come_decrement_ref_count(__right_value413, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value414=parse_word(info)));
                (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_589=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj105=word_589,
                        word_589=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_589,"extends")) {
                            define_variable_581=(_Bool)0;
                        }
                    }
                    (word_589 = come_decrement_ref_count(word_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_581=(_Bool)0;
        }
        else if(        define_variable_581) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_581=(_Bool)0;
            }
            while(            xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_581=(_Bool)0;
            }
        }
        info->p=p_588;
        info->sline=sline_560;
    }
    if(    uniq_class_565) {
        info->p=head;
        info->sline=sline_560;
        buf2_590=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__276 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value418=top_level_v98(buf2_590,head,head_sline,info))));
        (buf2_590 = come_decrement_ref_count(buf2_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value418) ? __right_value418 = come_decrement_ref_count(__right_value418, ((struct sNode*)__right_value418)->finalize, ((struct sNode*)__right_value418)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__276) ? __result_obj__276 = come_decrement_ref_count(__result_obj__276, ((struct sNode*)__result_obj__276)->finalize, ((struct sNode*)__result_obj__276)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__276;
        (buf2_590 = come_decrement_ref_count(buf2_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"template")) {
        word_591=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph_reset(info->method_generics_type_names);
            while(            (_Bool)1) {
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
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_592=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_592, "05function.c", 1778, "char*")));
                    (word_592 = come_decrement_ref_count(word_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_593=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__277 = (struct sNode*)come_increment_ref_count(node_593);
            ((node_593) ? node_593 = come_decrement_ref_count(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            (word_591 = come_decrement_ref_count(word_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__277) ? __result_obj__277 = come_decrement_ref_count(__result_obj__277, ((struct sNode*)__result_obj__277)->finalize, ((struct sNode*)__result_obj__277)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__277;
            ((node_593) ? node_593 = come_decrement_ref_count(node_593, ((struct sNode*)node_593)->finalize, ((struct sNode*)node_593)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_591 = come_decrement_ref_count(word_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_561) {
    }
    else if(    define_variable_between_brace_569) {
        info->p=head;
        info->sline=sline_560;
        __result_obj__278 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value423=parse_global_variable(info))));
        ((__right_value423) ? __right_value423 = come_decrement_ref_count(__right_value423, ((struct sNode*)__right_value423)->finalize, ((struct sNode*)__right_value423)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__278) ? __result_obj__278 = come_decrement_ref_count(__result_obj__278, ((struct sNode*)__result_obj__278)->finalize, ((struct sNode*)__result_obj__278)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__278;
    }
    else if(    define_function_pointer_result_function_568) {
        header_head_594=info->p;
        multiple_assign_var4=((struct tuple3$3sType$phchar$phbool$*)(__right_value424=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_595=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_596=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_597=multiple_assign_var4->v3;
        /*c*/ come_call_finalizer3(__right_value424,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_598=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1807, "struct list$1sType$ph*"))));
            param_names_599=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1808, "struct list$1char$ph*"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while(                (_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sType$phchar$phbool$*)(__right_value429=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_600=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_601=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_602=multiple_assign_var5->v3;
                    /*c*/ come_call_finalizer3(__right_value429,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_602) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sType$ph_push_back(param_types_598,(struct sType*)come_increment_ref_count(param_type_600));
                    static int num_function_pointer_result_var_name_a_606=0;
                    list$1char$ph_push_back(param_names_599,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_606)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value434=parse_word(info)));
                        (__right_value434 = come_decrement_ref_count(__right_value434, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*c*/ come_call_finalizer3(param_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_601 = come_decrement_ref_count(param_name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*c*/ come_call_finalizer3(param_type_600,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_601 = come_decrement_ref_count(param_name_601, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_607=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1854, "struct list$1sType$ph*"))));
                param_names2_608=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1855, "struct list$1char$ph*"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while(                    (_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value439=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_609=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_610=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_611=multiple_assign_var6->v3;
                        /*c*/ come_call_finalizer3(__right_value439,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        !err_611) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sType$ph_push_back(param_types2_607,(struct sType*)come_increment_ref_count(param_type_609));
                        static int num_function_pointer_result_var_name_b_612=0;
                        list$1char$ph_push_back(param_names2_608,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_612)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value441=parse_word(info)));
                            (__right_value441 = come_decrement_ref_count(__right_value441, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*c*/ come_call_finalizer3(param_type_609,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (param_name_610 = come_decrement_ref_count(param_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*c*/ come_call_finalizer3(param_type_609,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_610 = come_decrement_ref_count(param_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_613=info->p;
                result_type2_614=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1897, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj109=result_type2_614->mResultType,
                result_type2_614->mResultType=(struct sType*)come_increment_ref_count(result_type_595);
                /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj110=result_type2_614->mParamTypes,
                result_type2_614->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2_607));
                /*b*/ come_call_finalizer3(__dec_obj110,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj111=result_type2_614->mParamNames,
                result_type2_614->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2_608));
                /*b*/ come_call_finalizer3(__dec_obj111,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_614->mVarArgs=(_Bool)0;
                result_type2_614->mStatic=(_Bool)0;
                var_args_615=(_Bool)0;
                param_default_parametors_616=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1907, "struct list$1char$ph*"))));
                fun_617=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1909, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_596)),(struct sType*)come_increment_ref_count(result_type2_614),(struct list$1sType$ph*)come_increment_ref_count(param_types_598),(struct list$1char$ph*)come_increment_ref_count(param_names_599),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_616),(_Bool)1,var_args_615,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_596)),(struct sFun*)come_increment_ref_count(fun_617));
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1921, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value456=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 1921, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_617),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_618=(struct sNode*)come_increment_ref_count(_inf_value2);
                /*c*/ come_call_finalizer3(__right_value456,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__303 = (struct sNode*)come_increment_ref_count(result_618);
                /*c*/ come_call_finalizer3(param_types2_607,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_608,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_614,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_616,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_617,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_618) ? result_618 = come_decrement_ref_count(result_618, ((struct sNode*)result_618)->finalize, ((struct sNode*)result_618)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(param_types_598,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_599,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_595,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_596 = come_decrement_ref_count(fun_name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__303) ? __result_obj__303 = come_decrement_ref_count(__result_obj__303, ((struct sNode*)__result_obj__303)->finalize, ((struct sNode*)__result_obj__303)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__303;
                /*c*/ come_call_finalizer3(param_types2_607,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_608,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_614,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_616,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_617,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_618) ? result_618 = come_decrement_ref_count(result_618, ((struct sNode*)result_618)->finalize, ((struct sNode*)result_618)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*c*/ come_call_finalizer3(param_types_598,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_599,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(result_type_595,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_596 = come_decrement_ref_count(fun_name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_560;
        node_649=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__304 = (struct sNode*)come_increment_ref_count(node_649);
        ((node_649) ? node_649 = come_decrement_ref_count(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__304;
        ((node_649) ? node_649 = come_decrement_ref_count(node_649, ((struct sNode*)node_649)->finalize, ((struct sNode*)node_649)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_575) {
        info->p=head;
        info->sline=sline_560;
        node_650=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__305 = (struct sNode*)come_increment_ref_count(node_650);
        ((node_650) ? node_650 = come_decrement_ref_count(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__305) ? __result_obj__305 = come_decrement_ref_count(__result_obj__305, ((struct sNode*)__result_obj__305)->finalize, ((struct sNode*)__result_obj__305)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__305;
        ((node_650) ? node_650 = come_decrement_ref_count(node_650, ((struct sNode*)node_650)->finalize, ((struct sNode*)node_650)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_581) {
        info->p=head;
        info->sline=sline_560;
        node_651=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_652=info->p;
        header_653=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1955, "struct buffer*"))));
        buffer_append(header_653,source_head_558,source_tail_652-source_head_558);
        __result_obj__306 = (struct sNode*)come_increment_ref_count(node_651);
        ((node_651) ? node_651 = come_decrement_ref_count(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_653,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__result_obj__306) ? __result_obj__306 = come_decrement_ref_count(__result_obj__306, ((struct sNode*)__result_obj__306)->finalize, ((struct sNode*)__result_obj__306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__306;
        ((node_651) ? node_651 = come_decrement_ref_count(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_653,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->p=head;
    info->sline=sline_560;
    buf2_654=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__307 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value507=top_level_v98(buf2_654,head,head_sline,info))));
    (buf2_654 = come_decrement_ref_count(buf2_654, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value507) ? __right_value507 = come_decrement_ref_count(__right_value507, ((struct sNode*)__right_value507)->finalize, ((struct sNode*)__right_value507)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__307) ? __result_obj__307 = come_decrement_ref_count(__result_obj__307, ((struct sNode*)__result_obj__307)->finalize, ((struct sNode*)__result_obj__307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__307;
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
void* __right_value430 = (void*)0;
struct list_item$1sType$ph* litem_603;
struct sType* __dec_obj106;
void* __right_value431 = (void*)0;
struct list_item$1sType$ph* litem_604;
struct sType* __dec_obj107;
void* __right_value432 = (void*)0;
struct list_item$1sType$ph* litem_605;
struct sType* __dec_obj108;
struct list$1sType$ph* __result_obj__279;
    if(    self->len==0) {
        litem_603=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value430=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1113, "struct list_item$1sType$ph*"))));
        litem_603->prev=((void*)0);
        litem_603->next=((void*)0);
        __dec_obj106=litem_603->item,
        litem_603->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_603;
        self->head=litem_603;
    }
    else if(    self->len==1) {
        litem_604=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value431=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1123, "struct list_item$1sType$ph*"))));
        litem_604->prev=self->head;
        litem_604->next=((void*)0);
        __dec_obj107=litem_604->item,
        litem_604->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_604;
        self->head->next=litem_604;
    }
    else {
        litem_605=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value432=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1133, "struct list_item$1sType$ph*"))));
        litem_605->prev=self->tail;
        litem_605->next=((void*)0);
        __dec_obj108=litem_605->item,
        litem_605->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj108,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_605;
        self->tail=litem_605;
    }
    self->len++;
    __result_obj__279 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__279;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__280;
void* __right_value457 = (void*)0;
struct sFunNode* result_619;
void* __right_value458 = (void*)0;
char* __dec_obj112;
void* __right_value499 = (void*)0;
struct sFun* __dec_obj134;
struct sFunNode* __result_obj__302;
    if(    self==(void*)0) {
        __result_obj__280 = (void*)0;
        return __result_obj__280;
    }
    result_619=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)) {
        result_619->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj112=result_619->sname,
        result_619->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_619->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj134=result_619->mFun,
        result_619->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        /*b*/ come_call_finalizer3(__dec_obj134,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__302 = result_619;
    /*c*/ come_call_finalizer3(result_619,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__281;
void* __right_value459 = (void*)0;
struct sFun* result_620;
void* __right_value460 = (void*)0;
char* __dec_obj113;
void* __right_value461 = (void*)0;
struct sType* __dec_obj114;
void* __right_value462 = (void*)0;
struct list$1sType$ph* __dec_obj115;
void* __right_value463 = (void*)0;
struct list$1char$ph* __dec_obj116;
void* __right_value464 = (void*)0;
struct list$1char$ph* __dec_obj117;
void* __right_value465 = (void*)0;
struct sType* __dec_obj118;
void* __right_value492 = (void*)0;
struct sBlock* __dec_obj127;
void* __right_value493 = (void*)0;
struct buffer* __dec_obj128;
void* __right_value494 = (void*)0;
struct buffer* __dec_obj129;
void* __right_value495 = (void*)0;
struct buffer* __dec_obj130;
void* __right_value496 = (void*)0;
struct buffer* __dec_obj131;
void* __right_value497 = (void*)0;
char* __dec_obj132;
void* __right_value498 = (void*)0;
char* __dec_obj133;
struct sFun* __result_obj__301;
    if(    self==(void*)0) {
        __result_obj__281 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__281,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__281;
    }
    result_620=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj113=result_620->mName,
        result_620->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj114=result_620->mResultType,
        result_620->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj115=result_620->mParamTypes,
        result_620->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj115,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj116=result_620->mParamNames,
        result_620->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj116,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj117=result_620->mParamDefaultParametors,
        result_620->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        /*b*/ come_call_finalizer3(__dec_obj117,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj118=result_620->mLambdaType,
        result_620->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj127=result_620->mBlock,
        result_620->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj127,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj128=result_620->mSource,
        result_620->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        /*b*/ come_call_finalizer3(__dec_obj128,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj129=result_620->mSourceHead,
        result_620->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        /*b*/ come_call_finalizer3(__dec_obj129,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj130=result_620->mSourceHead2,
        result_620->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        /*b*/ come_call_finalizer3(__dec_obj130,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj131=result_620->mSourceDefer,
        result_620->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        /*b*/ come_call_finalizer3(__dec_obj131,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_620->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_620->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_620->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_620->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_620->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_620->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_620->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_620->mConstFun=self->mConstFun;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj132=result_620->mAttribute,
        result_620->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 23, "char*"));
        __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj133=result_620->mFunAttribute,
        result_620->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 24, "char*"));
        __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__301 = (struct sFun*)come_increment_ref_count(result_620);
    /*c*/ come_call_finalizer3(result_620,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__301,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__301;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__282;
void* __right_value466 = (void*)0;
struct sBlock* result_621;
void* __right_value467 = (void*)0;
struct list$1sNode$ph* __dec_obj119;
void* __right_value491 = (void*)0;
struct sVarTable* __dec_obj126;
struct sBlock* __result_obj__300;
    if(    self==(void*)0) {
        __result_obj__282 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__282,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__282;
    }
    result_621=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj119=result_621->mNodes,
        result_621->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj119,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj126=result_621->mVarTable,
        result_621->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj126,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_621->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__300 = (struct sBlock*)come_increment_ref_count(result_621);
    /*c*/ come_call_finalizer3(result_621,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__300,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__300;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__283;
void* __right_value468 = (void*)0;
struct sVarTable* result_622;
void* __right_value490 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj125;
struct sVarTable* __result_obj__299;
    if(    self==(void*)0) {
        __result_obj__283 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__283,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__283;
    }
    result_622=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj125=result_622->mVars,
        result_622->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj125,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_622->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_622->mParent=self->mParent;
    }
    __result_obj__299 = (struct sVarTable*)come_increment_ref_count(result_622);
    /*c*/ come_call_finalizer3(result_622,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__299,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__299;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__284;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct map$2char$phsVar$ph* result_623;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1char$ph* __dec_obj120;
char* it_626;
struct sVar* default_value_629;
void* __right_value473 = (void*)0;
struct sVar* it2_632;
void* __right_value479 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__298;
default_value_629 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__284 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__284,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__284;
    }
    result_623=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1999, "struct map$2char$phsVar$ph*"))));
    __dec_obj120=result_623->key_list,
    result_623->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2001, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj120,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_626=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_626=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_629,0,sizeof(struct sVar*));
        it2_632=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_626,(struct sVar*)come_increment_ref_count(default_value_629)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_623,(char*)come_increment_ref_count((char*)come_memdup(it_626, "./comelang.h", 2010, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_632)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_623,(char*)come_increment_ref_count((char*)come_memdup(it_626, "./comelang.h", 2013, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_632)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_623,(char*)come_increment_ref_count(it_626),(struct sVar*)come_increment_ref_count(sVar_clone(it2_632)));
        }
        else {
            map$2char$phsVar$ph_put(result_623,(char*)come_increment_ref_count(it_626),(struct sVar*)come_increment_ref_count(sVar_clone(it2_632)));
        }
        /*c*/ come_call_finalizer3(default_value_629,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_632,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__298 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_623);
    /*c*/ come_call_finalizer3(result_623,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__298,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_624;
char* __result_obj__285;
char* __result_obj__286;
char* result_625;
char* __result_obj__287;
result_624 = (void*)0;
result_625 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_624,0,sizeof(char*));
        __result_obj__285 = result_624;
        return __result_obj__285;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__286 = self->key_list->it->item;
        return __result_obj__286;
    }
    memset(&result_625,0,sizeof(char*));
    __result_obj__287 = result_625;
    return __result_obj__287;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_627;
char* __result_obj__288;
char* __result_obj__289;
char* result_628;
char* __result_obj__290;
result_627 = (void*)0;
result_628 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_627,0,sizeof(char*));
        __result_obj__288 = result_627;
        return __result_obj__288;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__289 = self->key_list->it->item;
        return __result_obj__289;
    }
    memset(&result_628,0,sizeof(char*));
    __result_obj__290 = result_628;
    return __result_obj__290;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_630;
unsigned int it_631;
struct sVar* __result_obj__291;
struct sVar* __result_obj__292;
struct sVar* __result_obj__293;
struct sVar* __result_obj__294;
    hash_630=string_get_hash_key(((char*)key))%self->size;
    it_631=hash_630;
    while(    (_Bool)1) {
        if(        self->item_existance[it_631]) {
            if(            string_equals(self->keys[it_631],key)) {
                __result_obj__291 = (struct sVar*)come_increment_ref_count(self->items[it_631]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__291,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__291;
            }
            it_631++;
            if(            it_631>=self->size) {
                it_631=0;
            }
            else if(            it_631==hash_630) {
                __result_obj__292 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__292,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__292;
            }
        }
        else {
            __result_obj__293 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__293,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__293;
        }
    }
    __result_obj__294 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__294,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__294;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_644;
int it_645;
_Bool same_key_exist_646;
char* it2_647;
struct map$2char$phsVar$ph* __result_obj__295;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_644=string_get_hash_key(((char*)key))%self->size;
    it_645=hash_644;
    while(    (_Bool)1) {
        if(        self->item_existance[it_645]) {
            if(            string_equals(self->keys[it_645],key)) {
                if(                1) {
                    (self->keys[it_645] = come_decrement_ref_count(self->keys[it_645], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_645]);
                    self->keys[it_645]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_645]);
                    self->keys[it_645]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_645],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_645]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_645]=item;
                }
                break;
            }
            it_645++;
            if(            it_645>=self->size) {
                it_645=0;
            }
            else if(            it_645==hash_644) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_645]=(_Bool)1;
            if(            1) {
                self->keys[it_645]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_645]=key;
            }
            if(            1) {
                self->items[it_645]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_645]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_646=(_Bool)0;
    for(    it2_647=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_647=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_647,key)) {
            same_key_exist_646=(_Bool)1;
        }
    }
    if(    !same_key_exist_646) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__295 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__295;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_633;
void* __right_value474 = (void*)0;
char** keys_634;
void* __right_value475 = (void*)0;
struct sVar** items_635;
void* __right_value476 = (void*)0;
_Bool* item_existance_636;
int len_637;
char* it_638;
struct sVar* default_value_639;
void* __right_value477 = (void*)0;
struct sVar* it2_640;
unsigned int hash_641;
int n_642;
struct sVar* default_value_643;
void* __right_value478 = (void*)0;
default_value_639 = (void*)0;
default_value_643 = (void*)0;
    size_633=self->size*10;
    keys_634=(char**)come_increment_ref_count(((char**)(__right_value474=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_633)), "./comelang.h", 2167, "char**"))));
    items_635=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value475=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_633)), "./comelang.h", 2168, "struct sVar**"))));
    item_existance_636=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value476=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_633)), "./comelang.h", 2169, "_Bool*"))));
    len_637=0;
    for(    it_638=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_638=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_639,0,sizeof(struct sVar*));
        it2_640=((struct sVar*)(__right_value477=map$2char$phsVar$ph_at(self,it_638,(struct sVar*)come_increment_ref_count(default_value_639))));
        /*c*/ come_call_finalizer3(__right_value477,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_641=string_get_hash_key(((char*)it_638))%size_633;
        n_642=hash_641;
        while(        (_Bool)1) {
            if(            item_existance_636[n_642]) {
                n_642++;
                if(                n_642>=size_633) {
                    n_642=0;
                }
                else if(                n_642==hash_641) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_636[n_642]=(_Bool)1;
                keys_634[n_642]=it_638;
                items_635[n_642]=((struct sVar*)(__right_value478=map$2char$phsVar$ph_at(self,it_638,(struct sVar*)come_increment_ref_count(default_value_643))));
                /*c*/ come_call_finalizer3(__right_value478,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_637++;
                /*c*/ come_call_finalizer3(default_value_643,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_643,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_639,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_634;
    self->items=items_635;
    self->item_existance=item_existance_636;
    self->size=size_633;
    self->len=len_637;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__296;
void* __right_value480 = (void*)0;
struct sVar* result_648;
void* __right_value481 = (void*)0;
char* __dec_obj121;
void* __right_value482 = (void*)0;
char* __dec_obj122;
void* __right_value483 = (void*)0;
struct sType* __dec_obj123;
void* __right_value484 = (void*)0;
char* __dec_obj124;
struct sVar* __result_obj__297;
    if(    self==(void*)0) {
        __result_obj__296 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__296,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__296;
    }
    result_648=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj121=result_648->mName,
        result_648->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj122=result_648->mCValueName,
        result_648->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj123=result_648->mType,
        result_648->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj123,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_648->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_648->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_648->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)) {
        result_648->mComma=self->mComma;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj124=result_648->mFunName,
        result_648->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 11, "char*"));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__297 = (struct sVar*)come_increment_ref_count(result_648);
    /*c*/ come_call_finalizer3(result_648,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__297,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__297;
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_655;
int caller_line_656;
char* caller_sname_657;
_Bool comma_instead_of_semicolon_658;
_Bool without_semicolon_659;
char* last_code_660;
char* __dec_obj135;
char* last_code2_661;
char* __dec_obj136;
void* __right_value508 = (void*)0;
char* sname_top_662;
int sline_top_663;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sFun* funX_664;
void* __right_value512 = (void*)0;
char* __dec_obj137;
char* __dec_obj138;
char* __dec_obj139;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__319;
void* __right_value517 = (void*)0;
struct sType* result_type_673;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1sType$ph* param_types_674;
struct list$1sType$ph* o2_saved_675;
struct sType* it_678;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sType* param_type_681;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct list$1char$ph* param_names_682;
void* __right_value524 = (void*)0;
struct list$1char$ph* param_default_parametors_683;
char* p_684;
int sline_685;
char* sname_686;
char* head_687;
struct buffer* source_688;
void* __right_value525 = (void*)0;
struct buffer* __dec_obj142;
struct sType* generics_type_saved_689;
void* __right_value526 = (void*)0;
struct sType* __dec_obj143;
struct list$1char$ph* method_generics_type_names_690;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct list$1char$ph* __dec_obj144;
struct list$1char$ph* o2_saved_691;
char* it_692;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1char$ph* __dec_obj145;
char* __dec_obj146;
void* __right_value531 = (void*)0;
struct sBlock* block_693;
struct buffer* __dec_obj147;
char* __dec_obj148;
_Bool const_fun_694;
_Bool var_args_695;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sFun* fun_696;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value539 = (void*)0;
struct sNode* node_697;
_Bool in_generics_fun_698;
_Bool Value_699;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__326;
struct sType* __dec_obj149;
struct list$1char$ph* __dec_obj150;
void* __right_value543 = (void*)0;
char* __dec_obj151;
char* __dec_obj152;
char* __dec_obj153;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__327;
    caller_fun_655=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_656=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_657=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_658=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_659=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_660=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj135=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_661=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj136=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_662=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_663=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_664=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value510=__builtin_string(fun_name)))));
    (__right_value509 = come_decrement_ref_count(__right_value509, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value510 = come_decrement_ref_count(__right_value510, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_664) {
        __dec_obj137=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_662));
        __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_top_663;
        __dec_obj138=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_660);
        __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj139=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_661);
        __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->caller_fun=caller_fun_655;
        info->caller_line=caller_line_656;
        info->caller_sname=caller_sname_657;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_658;
        info->without_semicolon=without_semicolon_659;
        __result_obj__319 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value516=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2007, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_660 = come_decrement_ref_count(last_code_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_661 = come_decrement_ref_count(last_code2_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_662 = come_decrement_ref_count(sname_top_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_664,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value516,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__319,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__319;
    }
    result_type_673=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_674=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2012, "struct list$1sType$ph*"))));
    for(    o2_saved_675=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_678=list$1sType$ph_begin((o2_saved_675));    !list$1sType$ph_end((o2_saved_675));    it_678=list$1sType$ph_next((o2_saved_675))    ){
        param_type_681=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value520=sType_clone(it_678))),generics_type,info));
        /*c*/ come_call_finalizer3(__right_value520,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_674,(struct sType*)come_increment_ref_count(sType_clone(param_type_681)));
        /*c*/ come_call_finalizer3(param_type_681,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_675,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_682=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_683=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_684=info->p;
    sline_685=info->sline;
    sname_686=(char*)come_increment_ref_count(info->sname);
    head_687=info->head;
    source_688=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj142=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj142,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_689=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj143=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    /*b*/ come_call_finalizer3(__dec_obj143,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_690=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj144=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2040, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj144,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_691=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_692=list$1char$ph_begin((o2_saved_691));    !list$1char$ph_end((o2_saved_691));    it_692=list$1char$ph_next((o2_saved_691))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_692, "05function.c", 2042, "char*")));
    }
    /*c*/ come_call_finalizer3(o2_saved_691,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj145=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj145,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj146=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_693=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_687;
    __dec_obj147=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_688);
    /*b*/ come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_684;
    info->sline=sline_685;
    __dec_obj148=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_686);
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_673->mInline=(_Bool)0;
    result_type_673->mStatic=(_Bool)0;
    result_type_673->mUniq=(_Bool)0;
    const_fun_694=generics_fun->mConstFun;
    var_args_695=generics_fun->mVarArgs;
    fun_696=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2066, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_673),(struct list$1sType$ph*)come_increment_ref_count(param_types_674),(struct list$1char$ph*)come_increment_ref_count(param_names_682),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_683),(_Bool)0,var_args_695,(struct sBlock*)come_increment_ref_count(block_693),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_694));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_696));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2073, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value538=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2073, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_696),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_697=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value538,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    in_generics_fun_698=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_699=node_compile(node_697,info);
    if(    !Value_699) {
        __result_obj__326 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value542=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2078, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_660 = come_decrement_ref_count(last_code_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_661 = come_decrement_ref_count(last_code2_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_662 = come_decrement_ref_count(sname_top_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_664,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_673,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_674,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_682,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_683,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_686 = come_decrement_ref_count(sname_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_688,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type_saved_689,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_690,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_693,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_696,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_697) ? node_697 = come_decrement_ref_count(node_697, ((struct sNode*)node_697)->finalize, ((struct sNode*)node_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value542,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__326,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__326;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_698;
    __dec_obj149=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_689);
    /*b*/ come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj150=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_690);
    /*b*/ come_call_finalizer3(__dec_obj150,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj151=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_662));
    __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_663;
    __dec_obj152=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_660);
    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj153=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_661);
    __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_655;
    info->caller_line=caller_line_656;
    info->caller_sname=caller_sname_657;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_658;
    info->without_semicolon=without_semicolon_659;
    __result_obj__327 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value546=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2099, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_660 = come_decrement_ref_count(last_code_660, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_661 = come_decrement_ref_count(last_code2_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_662 = come_decrement_ref_count(sname_top_662, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(funX_664,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_673,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_674,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_682,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_683,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_686 = come_decrement_ref_count(sname_686, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_688,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(generics_type_saved_689,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_690,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_693,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_696,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_697) ? node_697 = come_decrement_ref_count(node_697, ((struct sNode*)node_697)->finalize, ((struct sNode*)node_697)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value546,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__327,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__327;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_665;
unsigned int hash_666;
unsigned int it_667;
struct sFun* __result_obj__308;
struct sFun* __result_obj__309;
struct sFun* __result_obj__310;
struct sFun* __result_obj__311;
default_value_665 = (void*)0;
    memset(&default_value_665,0,sizeof(struct sFun*));
    hash_666=string_get_hash_key(((char*)key))%self->size;
    it_667=hash_666;
    while(    (_Bool)1) {
        if(        self->item_existance[it_667]) {
            if(            string_equals(self->keys[it_667],key)) {
                __result_obj__308 = (struct sFun*)come_increment_ref_count(self->items[it_667]);
                /*c*/ come_call_finalizer3(default_value_665,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__308,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__308;
            }
            it_667++;
            if(            it_667>=self->size) {
                it_667=0;
            }
            else if(            it_667==hash_666) {
                __result_obj__309 = (struct sFun*)come_increment_ref_count(default_value_665);
                /*c*/ come_call_finalizer3(default_value_665,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__309,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__309;
            }
        }
        else {
            __result_obj__310 = (struct sFun*)come_increment_ref_count(default_value_665);
            /*c*/ come_call_finalizer3(default_value_665,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__310,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__310;
        }
    }
    __result_obj__311 = (struct sFun*)come_increment_ref_count(default_value_665);
    /*c*/ come_call_finalizer3(default_value_665,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__311,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__311;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_668;
unsigned int hash_669;
unsigned int it_670;
struct sFun* __result_obj__312;
struct sFun* __result_obj__313;
struct sFun* __result_obj__314;
struct sFun* __result_obj__315;
default_value_668 = (void*)0;
    memset(&default_value_668,0,sizeof(struct sFun*));
    hash_669=string_get_hash_key(((char*)key))%self->size;
    it_670=hash_669;
    while(    (_Bool)1) {
        if(        self->item_existance[it_670]) {
            if(            string_equals(self->keys[it_670],key)) {
                __result_obj__312 = (struct sFun*)come_increment_ref_count(self->items[it_670]);
                /*c*/ come_call_finalizer3(default_value_668,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__312,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__312;
            }
            it_670++;
            if(            it_670>=self->size) {
                it_670=0;
            }
            else if(            it_670==hash_669) {
                __result_obj__313 = (struct sFun*)come_increment_ref_count(default_value_668);
                /*c*/ come_call_finalizer3(default_value_668,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__313,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__313;
            }
        }
        else {
            __result_obj__314 = (struct sFun*)come_increment_ref_count(default_value_668);
            /*c*/ come_call_finalizer3(default_value_668,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__314,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__314;
        }
    }
    __result_obj__315 = (struct sFun*)come_increment_ref_count(default_value_668);
    /*c*/ come_call_finalizer3(default_value_668,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__315,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__316;
void* __right_value513 = (void*)0;
struct tuple2$2char$phbool$* result_671;
void* __right_value514 = (void*)0;
char* __dec_obj140;
struct tuple2$2char$phbool$* __result_obj__317;
    if(    self==(void*)0) {
        __result_obj__316 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__316,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__316;
    }
    result_671=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj140=result_671->v1,
        result_671->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phbool$_clone", 4, "char*"));
        __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_671->v2=self->v2;
    }
    __result_obj__317 = (struct tuple2$2char$phbool$*)come_increment_ref_count(result_671);
    /*c*/ come_call_finalizer3(result_671,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__317,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__317;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_672;
    result_672=0;
    result_672+=int_get_hash_key(((int)self->v1));
    result_672+=int_get_hash_key(((int)self->v2));
    return result_672;
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
char* __dec_obj141;
struct tuple2$2char$phbool$* __result_obj__318;
    __dec_obj141=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__318 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__318,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_676;
struct sType* __result_obj__320;
struct sType* __result_obj__321;
struct sType* result_677;
struct sType* __result_obj__322;
result_676 = (void*)0;
result_677 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_676,0,sizeof(struct sType*));
        __result_obj__320 = result_676;
        return __result_obj__320;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__321 = self->it->item;
        return __result_obj__321;
    }
    memset(&result_677,0,sizeof(struct sType*));
    __result_obj__322 = result_677;
    return __result_obj__322;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_679;
struct sType* __result_obj__323;
struct sType* __result_obj__324;
struct sType* result_680;
struct sType* __result_obj__325;
result_679 = (void*)0;
result_680 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_679,0,sizeof(struct sType*));
        __result_obj__323 = result_679;
        return __result_obj__323;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__324 = self->it->item;
        return __result_obj__324;
    }
    memset(&result_680,0,sizeof(struct sType*));
    __result_obj__325 = result_680;
    return __result_obj__325;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_700;
int caller_line_701;
char* caller_sname_702;
_Bool comma_instead_of_semicolon_703;
_Bool without_semicolon_704;
char* last_code_705;
char* __dec_obj154;
char* last_code2_706;
char* __dec_obj155;
void* __right_value547 = (void*)0;
char* sname_top_707;
int sline_top_708;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sFun* funX_709;
void* __right_value551 = (void*)0;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
_Bool __result_obj__328;
void* __right_value552 = (void*)0;
struct sType* result_type_710;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1sType$ph* param_types_711;
struct list$1sType$ph* o2_saved_712;
struct sType* it_713;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* param_type_714;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1char$ph* param_names_715;
void* __right_value559 = (void*)0;
struct list$1char$ph* param_default_parametors_716;
char* p_717;
int sline_718;
char* sname_719;
char* head_720;
struct buffer* source_721;
void* __right_value560 = (void*)0;
struct buffer* __dec_obj159;
struct list$1char$ph* method_generics_type_names_722;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1char$ph* __dec_obj160;
struct list$1char$ph* o2_saved_723;
char* it_724;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct list$1char$ph* __dec_obj161;
char* __dec_obj162;
void* __right_value565 = (void*)0;
struct sBlock* block_725;
struct buffer* __dec_obj163;
char* __dec_obj164;
_Bool var_args_726;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sFun* fun_727;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value574 = (void*)0;
struct sNode* node_728;
_Bool Value_729;
void* __if_result__1_730 = (void*)0;
_Bool __result_obj__329;
struct list$1char$ph* __dec_obj165;
void* __right_value575 = (void*)0;
char* __dec_obj166;
char* __dec_obj167;
char* __dec_obj168;
_Bool __result_obj__330;
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
    __dec_obj154=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_706=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj155=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_707=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_708=info->sline;
    funX_709=((struct sFun*)(__right_value550=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value549=__builtin_string(fun_name))))));
    (__right_value548 = come_decrement_ref_count(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value549 = come_decrement_ref_count(__right_value549, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value550,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    funX_709) {
        __dec_obj156=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_707));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_top_708;
        __dec_obj157=info->module->mLastCode,
        info->module->mLastCode=(char*)come_increment_ref_count(last_code_705);
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj158=info->module->mLastCode2,
        info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_706);
        __dec_obj158 = come_decrement_ref_count(__dec_obj158, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->caller_fun=caller_fun_700;
        info->caller_line=caller_line_701;
        info->caller_sname=caller_sname_702;
        info->comma_instead_of_semicolon=comma_instead_of_semicolon_703;
        info->without_semicolon=without_semicolon_704;
        __result_obj__328 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_707 = come_decrement_ref_count(sname_top_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__328;
    }
    result_type_710=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_711=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2141, "struct list$1sType$ph*"))));
    for(    o2_saved_712=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_713=list$1sType$ph_begin((o2_saved_712));    !list$1sType$ph_end((o2_saved_712));    it_713=list$1sType$ph_next((o2_saved_712))    ){
        param_type_714=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value555=sType_clone(it_713))),info));
        /*c*/ come_call_finalizer3(__right_value555,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_711,(struct sType*)come_increment_ref_count(sType_clone(param_type_714)));
        /*c*/ come_call_finalizer3(param_type_714,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_712,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_715=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_716=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_717=info->p;
    sline_718=info->sline;
    sname_719=(char*)come_increment_ref_count(info->sname);
    head_720=info->head;
    source_721=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj159=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj159,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_722=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj160=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2163, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj160,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_723=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_724=list$1char$ph_begin((o2_saved_723));    !list$1char$ph_end((o2_saved_723));    it_724=list$1char$ph_next((o2_saved_723))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_724, "05function.c", 2165, "char*")));
    }
    /*c*/ come_call_finalizer3(o2_saved_723,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj161=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj161,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj162=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_725=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_720;
    __dec_obj163=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_721);
    /*b*/ come_call_finalizer3(__dec_obj163,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_717;
    info->sline=sline_718;
    __dec_obj164=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_719);
    __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_710->mInline=(_Bool)0;
    result_type_710->mStatic=(_Bool)0;
    result_type_710->mUniq=(_Bool)0;
    var_args_726=generics_fun->mVarArgs;
    fun_727=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2187, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_710),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_711)),(struct list$1char$ph*)come_increment_ref_count(param_names_715),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_716),(_Bool)0,var_args_726,(struct sBlock*)come_increment_ref_count(block_725),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_727));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2194, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value573=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2194, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_727),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_728=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value573,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_729=node_compile(node_728,info);
    if(    !Value_729) {
        __result_obj__329 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_707 = come_decrement_ref_count(sname_top_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_710,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_711,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_715,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_716,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_719 = come_decrement_ref_count(sname_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_721,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_722,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_725,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_727,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_728) ? node_728 = come_decrement_ref_count(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__329;
    }
    else {
        __if_result__1_730=(void*)(Value_729);
;
    }
    __dec_obj165=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_722);
    /*b*/ come_call_finalizer3(__dec_obj165,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj166=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_707));
    __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_708;
    __dec_obj167=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_705);
    __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj168=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_706);
    __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_700;
    info->caller_line=caller_line_701;
    info->caller_sname=caller_sname_702;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_703;
    __result_obj__330 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_705 = come_decrement_ref_count(last_code_705, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_706 = come_decrement_ref_count(last_code2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_707 = come_decrement_ref_count(sname_top_707, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_710,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_711,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_715,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_716,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_719 = come_decrement_ref_count(sname_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_721,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_722,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_725,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_727,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_728) ? node_728 = come_decrement_ref_count(node_728, ((struct sNode*)node_728)->finalize, ((struct sNode*)node_728)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__330;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_731;
char* source_head_732;
void* __right_value576 = (void*)0;
char* attribute_733;
struct sType* result_type_734;
char* var_name_735;
_Bool constructor__736;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct sType* __dec_obj169;
void* __right_value579 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* result_type2_737=0;
char* var_name2_738=0;
_Bool err_739=0;
struct sType* __dec_obj170;
char* __dec_obj171;
_Bool method_definition_740;
char* p_741;
int sline_742;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct buffer* buf2_743;
char* fun_name_744;
char* base_fun_name_745;
struct sType* obj_type2_746;
void* __right_value582 = (void*)0;
char* __dec_obj172;
void* __right_value583 = (void*)0;
char* __dec_obj173;
void* __right_value584 = (void*)0;
struct sType* __dec_obj174;
void* __right_value585 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var8 = (void*)0;
struct sType* obj_type_747=0;
char* name_748=0;
_Bool err_749=0;
void* __right_value586 = (void*)0;
char* __dec_obj175;
void* __right_value587 = (void*)0;
char* __dec_obj176;
void* __right_value588 = (void*)0;
struct sType* __dec_obj177;
void* __right_value589 = (void*)0;
char* __dec_obj178;
void* __right_value590 = (void*)0;
char* __dec_obj179;
void* __right_value591 = (void*)0;
struct sType* __dec_obj180;
void* __right_value592 = (void*)0;
char* __dec_obj181;
void* __right_value593 = (void*)0;
char* __dec_obj182;
void* __right_value594 = (void*)0;
struct sType* __dec_obj183;
void* __right_value595 = (void*)0;
char* __dec_obj184;
void* __right_value596 = (void*)0;
char* __dec_obj185;
void* __right_value597 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var9 = (void*)0;
struct list$1sType$ph* param_types_750=0;
struct list$1char$ph* param_names_751=0;
struct list$1char$ph* param_default_parametors_752=0;
_Bool var_args_753=0;
char* header_tail_754;
_Bool const_fun_755;
int version_756;
int n_757;
void* __right_value598 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var10 = (void*)0;
char* asm_fun_758=0;
char* fun_attribute_759=0;
void* __right_value599 = (void*)0;
char* __dec_obj186;
_Bool in_top_level_760;
void* __right_value600 = (void*)0;
struct sBlock* block_761;
void* __right_value601 = (void*)0;
char* fun_name_763;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sFun* fun_764;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sFun* fun2_765;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value615 = (void*)0;
struct sNode* __result_obj__333;
void* __right_value616 = (void*)0;
char* none_generics_name_767;
void* __right_value617 = (void*)0;
char* generics_sname_768;
int generics_sline_769;
void* __right_value618 = (void*)0;
char* block_770;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sGenericsFun* fun_771;
void* __right_value625 = (void*)0;
char* fun_name3_772;
void* __right_value631 = (void*)0;
struct sNode* __result_obj__345;
void* __right_value632 = (void*)0;
char* generics_sname_794;
int generics_sline_795;
void* __right_value633 = (void*)0;
char* block_796;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sGenericsFun* fun_797;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sNode* __result_obj__346;
char* source_tail_798;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
char* new_fun_name_799;
void* __right_value644 = (void*)0;
char* __dec_obj188;
void* __right_value645 = (void*)0;
struct sBlock* block_800;
_Bool static_fun_801;
_Bool inline_fun_802;
_Bool uniq_fun_803;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sFun* fun_804;
void* __right_value650 = (void*)0;
char* header_805;
void* __right_value651 = (void*)0;
char* id_806;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value656 = (void*)0;
struct sNode* __result_obj__347;
void* __right_value657 = (void*)0;
char* new_fun_name_807;
void* __right_value658 = (void*)0;
char* __dec_obj189;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sFun* fun_808;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
char* header_809;
void* __right_value664 = (void*)0;
char* id_810;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value667 = (void*)0;
struct sNode* __result_obj__348;
void* __right_value668 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var11 = (void*)0;
char* asm_fun_811=0;
char* fun_attribute2_812=0;
void* __right_value669 = (void*)0;
char* __dec_obj190;
void* __right_value670 = (void*)0;
char* __dec_obj191;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sFun* fun_813;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
char* header_814;
void* __right_value676 = (void*)0;
char* id_815;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value679 = (void*)0;
struct sNode* __result_obj__349;
struct sNode* __result_obj__350;
fun_name_744 = (void*)0;
    header_head_731=info->p;
    source_head_732=info->p;
    attribute_733=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_734=((void*)0);
    var_name_735=((void*)0);
    constructor__736=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value577=parse_word(info)));
        (__right_value577 = come_decrement_ref_count(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj169=result_type_734,
        result_type_734=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_734->mHeap=(_Bool)1;
        constructor__736=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value579=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_737=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_738=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_739=multiple_assign_var7->v3;
        /*c*/ come_call_finalizer3(__right_value579,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj170=result_type_734,
        result_type_734=(struct sType*)come_increment_ref_count(result_type2_737);
        /*b*/ come_call_finalizer3(__dec_obj170,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj171=var_name_735,
        var_name_735=(char*)come_increment_ref_count(var_name2_738);
        __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !err_739) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*c*/ come_call_finalizer3(result_type2_737,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name2_738 = come_decrement_ref_count(var_name2_738, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_740=(_Bool)0;
    {
        p_741=info->p;
        sline_742=info->sline;
        buf2_743=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2255, "struct buffer*"))));
        while(        xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_743,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_743)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_740=(_Bool)1;
        }
        info->p=p_741;
        info->sline=sline_742;
        /*c*/ come_call_finalizer3(buf2_743,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    base_fun_name_745=((void*)0);
    obj_type2_746=((void*)0);
    if(    constructor__736) {
        __dec_obj172=base_fun_name_745,
        base_fun_name_745=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj173=fun_name_744,
        fun_name_744=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_745,info,(_Bool)1));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj174=obj_type2_746,
        obj_type2_746=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_740) {
        multiple_assign_var8=((struct tuple3$3sType$phchar$phbool$*)(__right_value585=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_747=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_748=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_749=multiple_assign_var8->v3;
        /*c*/ come_call_finalizer3(__right_value585,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_749) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj175=base_fun_name_745,
        base_fun_name_745=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj176=fun_name_744,
        fun_name_744=(char*)come_increment_ref_count(create_method_name(obj_type_747,(_Bool)0,base_fun_name_745,info,(_Bool)1));
        __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj177=obj_type2_746,
        obj_type2_746=(struct sType*)come_increment_ref_count(sType_clone(obj_type_747));
        /*b*/ come_call_finalizer3(__dec_obj177,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(obj_type_747,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_748 = come_decrement_ref_count(name_748, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj178=base_fun_name_745,
        base_fun_name_745=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj179=fun_name_744,
        fun_name_744=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_745,info,(_Bool)1));
        __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj180=obj_type2_746,
        obj_type2_746=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        /*b*/ come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj181=base_fun_name_745,
        base_fun_name_745=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj182=fun_name_744,
        fun_name_744=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_745,info,(_Bool)1));
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj183=obj_type2_746,
        obj_type2_746=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj183,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj184=fun_name_744,
        fun_name_744=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj185=base_fun_name_745,
        base_fun_name_745=(char*)come_increment_ref_count(__builtin_string(fun_name_744));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_745,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value597=parse_params(info,constructor__736)));
    param_types_750=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_751=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_752=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_753=multiple_assign_var9->v4;
    /*c*/ come_call_finalizer3(__right_value597,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    header_tail_754=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_745,"initialize")) {
        info->in_class=(_Bool)1;
    }
    const_fun_755=(_Bool)0;
    version_756=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_757=0;
        while(        xisdigit(*info->p)) {
            n_757=n_757*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_756=n_757;
    }
    multiple_assign_var10=((struct tuple2$2char$phchar$ph*)(__right_value598=parse_function_attribute(info)));
    asm_fun_758=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    fun_attribute_759=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    /*c*/ come_call_finalizer3(__right_value598,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(asm_fun_758,"")) {
        __dec_obj186=fun_name_744,
        fun_name_744=(char*)come_increment_ref_count(__builtin_string(asm_fun_758));
        __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    in_top_level_760=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_745,"lambda")) {
        block_761=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_762=0;
        lambda_num_762++;
        fun_name_763=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_762));
        result_type_734->mInline=(_Bool)0;
        result_type_734->mStatic=(_Bool)0;
        result_type_734->mUniq=(_Bool)0;
        fun_764=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2376, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_763)),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1sType$ph*)come_increment_ref_count(param_types_750),(struct list$1char$ph*)come_increment_ref_count(param_names_751),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_752),(_Bool)0,var_args_753,(struct sBlock*)come_increment_ref_count(block_761),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_755));
        fun2_765=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value608=__builtin_string(fun_name_763)))));
        (__right_value607 = come_decrement_ref_count(__right_value607, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value608 = come_decrement_ref_count(__right_value608, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_763)),(struct sFun*)come_increment_ref_count(fun_764));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2386, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value612=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2386, "struct sLambdaNode*")),fun_764,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__333 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value615=_inf_value5)));
        /*c*/ come_call_finalizer3(block_761,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_763 = come_decrement_ref_count(fun_name_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_764,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_765,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_733 = come_decrement_ref_count(attribute_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_734,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_735 = come_decrement_ref_count(var_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_744 = come_decrement_ref_count(fun_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_745 = come_decrement_ref_count(base_fun_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_746,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_751,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_758 = come_decrement_ref_count(asm_fun_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_759 = come_decrement_ref_count(fun_attribute_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value612,sLambdaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value615) ? __right_value615 = come_decrement_ref_count(__right_value615, ((struct sNode*)__right_value615)->finalize, ((struct sNode*)__right_value615)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__333) ? __result_obj__333 = come_decrement_ref_count(__result_obj__333, ((struct sNode*)__result_obj__333)->finalize, ((struct sNode*)__result_obj__333)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__333;
        /*c*/ come_call_finalizer3(block_761,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_763 = come_decrement_ref_count(fun_name_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_764,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_765,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        none_generics_name_767=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_768=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_769=info->sline;
        block_770=(char*)come_increment_ref_count(skip_block(info));
        fun_771=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2396, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value620=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value621=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1sType$ph*)come_increment_ref_count(param_types_750),(struct list$1char$ph*)come_increment_ref_count(param_names_751),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_752),var_args_753,(char*)come_increment_ref_count(block_770),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_768)),generics_sline_769,const_fun_755));
        /*c*/ come_call_finalizer3(__right_value620,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value621,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fun_name3_772=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_767,base_fun_name_745));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_772)),(struct sGenericsFun*)come_increment_ref_count(fun_771));
        __result_obj__345 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_767 = come_decrement_ref_count(none_generics_name_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_768 = come_decrement_ref_count(generics_sname_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_770 = come_decrement_ref_count(block_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_771,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_772 = come_decrement_ref_count(fun_name3_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_733 = come_decrement_ref_count(attribute_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_734,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_735 = come_decrement_ref_count(var_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_744 = come_decrement_ref_count(fun_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_745 = come_decrement_ref_count(base_fun_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_746,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_751,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_758 = come_decrement_ref_count(asm_fun_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_759 = come_decrement_ref_count(fun_attribute_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__345) ? __result_obj__345 = come_decrement_ref_count(__result_obj__345, ((struct sNode*)__result_obj__345)->finalize, ((struct sNode*)__result_obj__345)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__345;
        (none_generics_name_767 = come_decrement_ref_count(none_generics_name_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_768 = come_decrement_ref_count(generics_sname_768, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_770 = come_decrement_ref_count(block_770, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_771,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_772 = come_decrement_ref_count(fun_name3_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0) {
        generics_sname_794=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_795=info->sline;
        block_796=(char*)come_increment_ref_count(skip_block(info));
        fun_797=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2410, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value635=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value636=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1sType$ph*)come_increment_ref_count(param_types_750),(struct list$1char$ph*)come_increment_ref_count(param_names_751),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_752),var_args_753,(char*)come_increment_ref_count(block_796),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_794)),generics_sline_795,const_fun_755));
        /*c*/ come_call_finalizer3(__right_value635,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value636,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        method_definition_740) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sGenericsFun*)come_increment_ref_count(fun_797));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_745)),(struct sGenericsFun*)come_increment_ref_count(fun_797));
        }
        __result_obj__346 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_794 = come_decrement_ref_count(generics_sname_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_796 = come_decrement_ref_count(block_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_797,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_733 = come_decrement_ref_count(attribute_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_734,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_735 = come_decrement_ref_count(var_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_744 = come_decrement_ref_count(fun_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_745 = come_decrement_ref_count(base_fun_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_746,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_751,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_758 = come_decrement_ref_count(asm_fun_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_759 = come_decrement_ref_count(fun_attribute_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__346) ? __result_obj__346 = come_decrement_ref_count(__result_obj__346, ((struct sNode*)__result_obj__346)->finalize, ((struct sNode*)__result_obj__346)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__346;
        (generics_sname_794 = come_decrement_ref_count(generics_sname_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_796 = come_decrement_ref_count(block_796, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_797,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_798=info->p-1;
        if(        version_756>0) {
            new_fun_name_799=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value642=__builtin_string(fun_name_744))),version_756));
            (__right_value642 = come_decrement_ref_count(__right_value642, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj188=fun_name_744,
            fun_name_744=(char*)come_increment_ref_count(__builtin_string(new_fun_name_799));
            __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_799 = come_decrement_ref_count(new_fun_name_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_800=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__736,(_Bool)1));
        static_fun_801=(_Bool)0;
        if(        result_type_734->mStatic) {
            result_type_734->mStatic=(_Bool)0;
            result_type_734->mUniq=(_Bool)0;
            static_fun_801=(_Bool)1;
        }
        inline_fun_802=(_Bool)0;
        if(        result_type_734->mInline) {
            result_type_734->mInline=(_Bool)0;
            result_type_734->mUniq=(_Bool)0;
            inline_fun_802=(_Bool)1;
        }
        uniq_fun_803=(_Bool)0;
        if(        result_type_734->mUniq) {
            result_type_734->mUniq=(_Bool)0;
            result_type_734->mInline=(_Bool)0;
            result_type_734->mStatic=(_Bool)0;
            uniq_fun_803=(_Bool)1;
        }
        if(        result_type_734->mUniq) {
            result_type_734->mUniq=(_Bool)0;
            result_type_734->mInline=(_Bool)0;
            result_type_734->mStatic=(_Bool)0;
        }
        if(        info->defining_class&&info->defining_class->mUniq) {
            uniq_fun_803=(_Bool)1;
        }
        fun_804=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2461, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1sType$ph*)come_increment_ref_count(param_types_750),(struct list$1char$ph*)come_increment_ref_count(param_names_751),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_752),(_Bool)0,var_args_753,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_800)),static_fun_801,info,inline_fun_802,uniq_fun_803,(_Bool)0,(char*)come_increment_ref_count(attribute_733),(char*)come_increment_ref_count(fun_attribute_759),const_fun_755));
        if(        info->output_header_file) {
            if(            !result_type_734->mStatic&&!info->no_output_come_code) {
                header_805=(char*)come_increment_ref_count(make_come_header_function(fun_804,(char*)come_increment_ref_count(base_fun_name_745),(struct sType*)come_increment_ref_count(obj_type2_746),version_756,info));
                id_806=(char*)come_increment_ref_count(__builtin_string(fun_name_744));
                add_come_code_at_come_header(info,id_806,"%s",header_805);
                (header_805 = come_decrement_ref_count(header_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_806 = come_decrement_ref_count(id_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        info->in_class) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sFun*)come_increment_ref_count(fun_804));
        }
        else {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sFun*)come_increment_ref_count(fun_804));
        }
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2487, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value655=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2487, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_804),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__347 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value656=_inf_value6)));
        /*c*/ come_call_finalizer3(block_800,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_804,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_733 = come_decrement_ref_count(attribute_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_734,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_735 = come_decrement_ref_count(var_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_744 = come_decrement_ref_count(fun_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_745 = come_decrement_ref_count(base_fun_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_746,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_751,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_758 = come_decrement_ref_count(asm_fun_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_759 = come_decrement_ref_count(fun_attribute_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value655,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value656) ? __right_value656 = come_decrement_ref_count(__right_value656, ((struct sNode*)__right_value656)->finalize, ((struct sNode*)__right_value656)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__347) ? __result_obj__347 = come_decrement_ref_count(__result_obj__347, ((struct sNode*)__result_obj__347)->finalize, ((struct sNode*)__result_obj__347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__347;
        /*c*/ come_call_finalizer3(block_800,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_804,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_756>0) {
            new_fun_name_807=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_744,version_756));
            __dec_obj189=fun_name_744,
            fun_name_744=(char*)come_increment_ref_count(__builtin_string(new_fun_name_807));
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_807 = come_decrement_ref_count(new_fun_name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_734->mStatic=(_Bool)0;
            result_type_734->mUniq=(_Bool)0;
            result_type_734->mInline=(_Bool)0;
            fun_808=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2503, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1sType$ph*)come_increment_ref_count(param_types_750),(struct list$1char$ph*)come_increment_ref_count(param_names_751),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_752),(_Bool)1,var_args_753,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_733),(char*)come_increment_ref_count(fun_attribute_759),const_fun_755));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sFun*)come_increment_ref_count(fun_808));
            if(            info->output_header_file) {
                if(                !result_type_734->mStatic&&!info->no_output_come_code) {
                    header_809=(char*)come_increment_ref_count(make_come_header_function(fun_808,(char*)come_increment_ref_count(base_fun_name_745),(struct sType*)come_increment_ref_count(obj_type2_746),version_756,info));
                    id_810=(char*)come_increment_ref_count(__builtin_string(fun_name_744));
                    add_come_code_at_come_header(info,id_810,"%s",header_809);
                    (header_809 = come_decrement_ref_count(header_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_810 = come_decrement_ref_count(id_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2523, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value666=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2523, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_808),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__348 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value667=_inf_value7)));
            /*c*/ come_call_finalizer3(fun_808,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_733 = come_decrement_ref_count(attribute_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_734,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_735 = come_decrement_ref_count(var_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_744 = come_decrement_ref_count(fun_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_745 = come_decrement_ref_count(base_fun_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_746,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_751,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_758 = come_decrement_ref_count(asm_fun_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_759 = come_decrement_ref_count(fun_attribute_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value666,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value667) ? __right_value667 = come_decrement_ref_count(__right_value667, ((struct sNode*)__right_value667)->finalize, ((struct sNode*)__right_value667)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__348) ? __result_obj__348 = come_decrement_ref_count(__result_obj__348, ((struct sNode*)__result_obj__348)->finalize, ((struct sNode*)__result_obj__348)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__348;
            /*c*/ come_call_finalizer3(fun_808,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var11=((struct tuple2$2char$phchar$ph*)(__right_value668=parse_function_attribute(info)));
            asm_fun_811=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            fun_attribute2_812=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            /*c*/ come_call_finalizer3(__right_value668,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            string_operator_not_equals(asm_fun_811,"")) {
                __dec_obj190=fun_name_744,
                fun_name_744=(char*)come_increment_ref_count(__builtin_string(asm_fun_811));
                __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            __dec_obj191=fun_attribute_759,
            fun_attribute_759=(char*)come_increment_ref_count(string_operator_add(fun_attribute_759,fun_attribute2_812));
            __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            result_type_734->mStatic=(_Bool)0;
            result_type_734->mUniq=(_Bool)0;
            result_type_734->mInline=(_Bool)0;
            fun_813=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2538, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sType*)come_increment_ref_count(result_type_734),(struct list$1sType$ph*)come_increment_ref_count(param_types_750),(struct list$1char$ph*)come_increment_ref_count(param_names_751),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_752),(_Bool)1,var_args_753,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_733),(char*)come_increment_ref_count(fun_attribute_759),const_fun_755));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_744)),(struct sFun*)come_increment_ref_count(fun_813));
            if(            info->output_header_file) {
                if(                !result_type_734->mStatic&&!info->no_output_come_code) {
                    header_814=(char*)come_increment_ref_count(make_come_header_function(fun_813,(char*)come_increment_ref_count(base_fun_name_745),(struct sType*)come_increment_ref_count(obj_type2_746),version_756,info));
                    id_815=(char*)come_increment_ref_count(__builtin_string(fun_name_744));
                    add_come_code_at_come_header(info,id_815,"%s",header_814);
                    (header_814 = come_decrement_ref_count(header_814, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_815 = come_decrement_ref_count(id_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2559, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value678=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2559, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_813),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__349 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value679=_inf_value8)));
            (asm_fun_811 = come_decrement_ref_count(asm_fun_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_812 = come_decrement_ref_count(fun_attribute2_812, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_813,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_733 = come_decrement_ref_count(attribute_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_734,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_735 = come_decrement_ref_count(var_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_744 = come_decrement_ref_count(fun_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_745 = come_decrement_ref_count(base_fun_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_746,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_751,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_758 = come_decrement_ref_count(asm_fun_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_759 = come_decrement_ref_count(fun_attribute_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value678,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value679) ? __right_value679 = come_decrement_ref_count(__right_value679, ((struct sNode*)__right_value679)->finalize, ((struct sNode*)__right_value679)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__349) ? __result_obj__349 = come_decrement_ref_count(__result_obj__349, ((struct sNode*)__result_obj__349)->finalize, ((struct sNode*)__result_obj__349)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__349;
            (asm_fun_811 = come_decrement_ref_count(asm_fun_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_812 = come_decrement_ref_count(fun_attribute2_812, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_813,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_760;
    __result_obj__350 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_733 = come_decrement_ref_count(attribute_733, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_734,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_735 = come_decrement_ref_count(var_name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_744 = come_decrement_ref_count(fun_name_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_745 = come_decrement_ref_count(base_fun_name_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(obj_type2_746,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_751,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_752,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (asm_fun_758 = come_decrement_ref_count(asm_fun_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute_759 = come_decrement_ref_count(fun_attribute_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__350;
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
struct sLambdaNode* __result_obj__331;
void* __right_value613 = (void*)0;
struct sLambdaNode* result_766;
void* __right_value614 = (void*)0;
char* __dec_obj187;
struct sLambdaNode* __result_obj__332;
    if(    self==(void*)0) {
        __result_obj__331 = (void*)0;
        return __result_obj__331;
    }
    result_766=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)) {
        result_766->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj187=result_766->sname,
        result_766->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_766->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_766->mFun=self->mFun;
    }
    __result_obj__332 = result_766;
    /*c*/ come_call_finalizer3(result_766,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__332;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_790;
unsigned int it_791;
_Bool same_key_exist_792;
char* it2_793;
struct map$2char$phsGenericsFun$ph* __result_obj__344;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_790=string_get_hash_key(((char*)key))%self->size;
    it_791=hash_790;
    while(    (_Bool)1) {
        if(        self->item_existance[it_791]) {
            if(            string_equals(self->keys[it_791],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_791]);
                    (self->keys[it_791] = come_decrement_ref_count(self->keys[it_791], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_791]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_791]);
                    self->keys[it_791]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_791],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_791]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_791]=item;
                }
                break;
            }
            it_791++;
            if(            it_791>=self->size) {
                it_791=0;
            }
            else if(            it_791==hash_790) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_791]=(_Bool)1;
            if(            1) {
                self->keys[it_791]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_791]=key;
            }
            if(            1) {
                self->items[it_791]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_791]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_792=(_Bool)0;
    for(    it2_793=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_793=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_793,key)) {
            same_key_exist_792=(_Bool)1;
        }
    }
    if(    !same_key_exist_792) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__344 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__344;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_773;
void* __right_value626 = (void*)0;
char** keys_774;
void* __right_value627 = (void*)0;
struct sGenericsFun** items_775;
void* __right_value628 = (void*)0;
_Bool* item_existance_776;
int len_777;
char* it_780;
struct sGenericsFun* default_value_783;
void* __right_value629 = (void*)0;
struct sGenericsFun* it2_784;
unsigned int hash_787;
int n_788;
struct sGenericsFun* default_value_789;
void* __right_value630 = (void*)0;
default_value_783 = (void*)0;
default_value_789 = (void*)0;
    size_773=self->size*10;
    keys_774=(char**)come_increment_ref_count(((char**)(__right_value626=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_773)), "./comelang.h", 2167, "char**"))));
    items_775=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value627=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size_773)), "./comelang.h", 2168, "struct sGenericsFun**"))));
    item_existance_776=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value628=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_773)), "./comelang.h", 2169, "_Bool*"))));
    len_777=0;
    for(    it_780=map$2char$phsGenericsFun$ph_begin(self);    !map$2char$phsGenericsFun$ph_end(self);    it_780=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_783,0,sizeof(struct sGenericsFun*));
        it2_784=((struct sGenericsFun*)(__right_value629=map$2char$phsGenericsFun$ph_at(self,it_780,(struct sGenericsFun*)come_increment_ref_count(default_value_783))));
        /*c*/ come_call_finalizer3(__right_value629,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_787=string_get_hash_key(((char*)it_780))%size_773;
        n_788=hash_787;
        while(        (_Bool)1) {
            if(            item_existance_776[n_788]) {
                n_788++;
                if(                n_788>=size_773) {
                    n_788=0;
                }
                else if(                n_788==hash_787) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_776[n_788]=(_Bool)1;
                keys_774[n_788]=it_780;
                items_775[n_788]=((struct sGenericsFun*)(__right_value630=map$2char$phsGenericsFun$ph_at(self,it_780,(struct sGenericsFun*)come_increment_ref_count(default_value_789))));
                /*c*/ come_call_finalizer3(__right_value630,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_777++;
                /*c*/ come_call_finalizer3(default_value_789,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_789,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_783,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_774;
    self->items=items_775;
    self->item_existance=item_existance_776;
    self->size=size_773;
    self->len=len_777;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_778;
char* __result_obj__334;
char* __result_obj__335;
char* result_779;
char* __result_obj__336;
result_778 = (void*)0;
result_779 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_778,0,sizeof(char*));
        __result_obj__334 = result_778;
        return __result_obj__334;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__335 = self->key_list->it->item;
        return __result_obj__335;
    }
    memset(&result_779,0,sizeof(char*));
    __result_obj__336 = result_779;
    return __result_obj__336;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_781;
char* __result_obj__337;
char* __result_obj__338;
char* result_782;
char* __result_obj__339;
result_781 = (void*)0;
result_782 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_781,0,sizeof(char*));
        __result_obj__337 = result_781;
        return __result_obj__337;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__338 = self->key_list->it->item;
        return __result_obj__338;
    }
    memset(&result_782,0,sizeof(char*));
    __result_obj__339 = result_782;
    return __result_obj__339;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_785;
unsigned int it_786;
struct sGenericsFun* __result_obj__340;
struct sGenericsFun* __result_obj__341;
struct sGenericsFun* __result_obj__342;
struct sGenericsFun* __result_obj__343;
    hash_785=string_get_hash_key(((char*)key))%self->size;
    it_786=hash_785;
    while(    (_Bool)1) {
        if(        self->item_existance[it_786]) {
            if(            string_equals(self->keys[it_786],key)) {
                __result_obj__340 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_786]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__340,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__340;
            }
            it_786++;
            if(            it_786>=self->size) {
                it_786=0;
            }
            else if(            it_786==hash_785) {
                __result_obj__341 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__341,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__341;
            }
        }
        else {
            __result_obj__342 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__342,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__342;
        }
    }
    __result_obj__343 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__343,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__343;
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
char* last_code_816;
char* __dec_obj192;
char* last_code2_817;
char* __dec_obj193;
_Bool comma_instead_of_semicolon_818;
struct sClass* current_stack_frame_struct_819;
char* real_fun_name_820;
struct sFun* finalizer_821;
void* __right_value680 = (void*)0;
struct sType* type_before_822;
void* __right_value681 = (void*)0;
struct sType* type2_823;
void* __right_value682 = (void*)0;
char* fun_name2_824;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
char* none_generics_name_825;
void* __right_value685 = (void*)0;
char* generics_fun_name_826;
void* __right_value686 = (void*)0;
struct sGenericsFun* generics_fun_827;
void* __right_value687 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var12 = (void*)0;
char* name_834=0;
_Bool err_835=0;
void* __right_value688 = (void*)0;
char* __dec_obj194;
int i_836;
void* __right_value689 = (void*)0;
char* new_fun_name_837;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
char* __dec_obj195;
void* __right_value692 = (void*)0;
char* __dec_obj196;
void* __right_value693 = (void*)0;
char* __dec_obj197;
void* __right_value694 = (void*)0;
char* user_real_fun_name_838;
void* __right_value695 = (void*)0;
struct sFun* user_finalizer_839;
void* __right_value696 = (void*)0;
struct sType* type2_840;
struct sClass* klass_841;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct buffer* source_842;
void* __right_value699 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_852;
struct tuple2$2char$phsType$ph* it_855;
struct tuple2$2char$phsType$ph* multiple_assign_var13 = (void*)0;
char* name_858=0;
struct sType* field_type_859=0;
char* p_862;
int sline_863;
char* sname_864;
char* head_865;
struct buffer* source3_866;
struct buffer* __dec_obj198;
void* __right_value700 = (void*)0;
char* __dec_obj199;
void* __right_value701 = (void*)0;
struct sBlock* block_867;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sType* result_type_868;
void* __right_value705 = (void*)0;
char* name_869;
void* __right_value706 = (void*)0;
struct sType* self_type_870;
struct sType* __list_values1___872[1];
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1sType$ph* param_types_871;
void* __right_value710 = (void*)0;
char* __list_values2___876[1];
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1char$ph* param_names_880;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1char$ph* param_default_parametors_881;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sFun* fun2_882;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sFun* fun_883;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value726 = (void*)0;
struct sNode* node_884;
_Bool Value_885;
struct buffer* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
char* __dec_obj203;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__384;
memset(&i_836, 0, sizeof(int));
    last_code_816=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj192=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_817=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj193=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_818=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_819=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_820=((void*)0);
    finalizer_821=((void*)0);
    type_before_822=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_823=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_823->mHeap=(_Bool)0;
    fun_name2_824=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        finalizer_821=((struct sFun*)(__right_value683=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_824)));
        /*c*/ come_call_finalizer3(__right_value683,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        finalizer_821==((void*)0)) {
            none_generics_name_825=(char*)come_increment_ref_count(get_none_generics_name(type2_823->mClass->mName));
            generics_fun_name_826=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_825,fun_name));
            generics_fun_827=((struct sGenericsFun*)(__right_value686=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_826)));
            /*c*/ come_call_finalizer3(__right_value686,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_827) {
                multiple_assign_var12=((struct tuple2$2char$phbool$*)(__right_value687=create_generics_fun((char*)come_increment_ref_count(fun_name2_824),generics_fun_827,type,info)));
                name_834=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                err_835=multiple_assign_var12->v2;
                /*c*/ come_call_finalizer3(__right_value687,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_835) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_821=((struct sFun*)(__right_value688=map$2char$phsFun$ph_operator_load_element(info->funcs,name_834)));
                /*c*/ come_call_finalizer3(__right_value688,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_834 = come_decrement_ref_count(name_834, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_825 = come_decrement_ref_count(none_generics_name_825, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_826 = come_decrement_ref_count(generics_fun_name_826, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj194=real_fun_name_820,
        real_fun_name_820=(char*)come_increment_ref_count(fun_name2_824);
        __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        for(        i_836=128-1;        i_836>=1;        i_836--        ){
            new_fun_name_837=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_824,i_836));
            finalizer_821=((struct sFun*)(__right_value690=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_837)));
            /*c*/ come_call_finalizer3(__right_value690,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_821) {
                __dec_obj195=fun_name2_824,
                fun_name2_824=(char*)come_increment_ref_count(__builtin_string(new_fun_name_837));
                __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_837 = come_decrement_ref_count(new_fun_name_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_837 = come_decrement_ref_count(new_fun_name_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_821==((void*)0)) {
            finalizer_821=((struct sFun*)(__right_value692=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_824)));
            /*c*/ come_call_finalizer3(__right_value692,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj196=real_fun_name_820,
        real_fun_name_820=(char*)come_increment_ref_count(fun_name2_824);
        __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    finalizer_821==((void*)0)) {
        type=type_before_822;
        __dec_obj197=real_fun_name_820,
        real_fun_name_820=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        user_real_fun_name_838=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_839=((struct sFun*)(__right_value695=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_838)));
        /*c*/ come_call_finalizer3(__right_value695,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_840=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_840;
        klass_841=type->mClass;
        if(        type->mPointerNum>0&&klass_841->mStruct||type->mAllocaValue) {
            source_842=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2659, "struct buffer*"))));
            buffer_append_char(source_842,123);
            if(            user_finalizer_839) {
                char source2_843[1024];
                memset(&source2_843, 0, sizeof(char)                *(1024)                );
                snprintf(source2_843,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_838);
                buffer_append_str(source_842,source2_843);
            }
            klass_841=((struct sClass*)(__right_value699=map$2char$phsClass$ph_operator_load_element(info->classes,klass_841->mName)));
            /*c*/ come_call_finalizer3(__right_value699,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_852=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_841->mFields)),it_855=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_852));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_852));            it_855=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_852))            ){
                multiple_assign_var13=it_855;
                name_858=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_859=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                field_type_859->mHeap) {
                    char source2_860[1024];
                    memset(&source2_860, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_860,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_858,name_858,name_858,name_858);
                    buffer_append_str(source_842,source2_860);
                }
                else if(                field_type_859->mChannel) {
                    char source2_861[1024];
                    memset(&source2_861, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_861,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_858,name_858);
                    buffer_append_str(source_842,source2_861);
                    snprintf(source2_861,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_858,name_858);
                    buffer_append_str(source_842,source2_861);
                }
                (name_858 = come_decrement_ref_count(name_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_859,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_852,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_char(source_842,125);
            p_862=info->p;
            sline_863=info->sline;
            sname_864=(char*)come_increment_ref_count(info->sname);
            head_865=info->head;
            source3_866=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj198=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_842);
            /*b*/ come_call_finalizer3(__dec_obj198,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_842->buf;
            info->head=source_842->buf;
            __dec_obj199=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_820));
            __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=0;
            block_867=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_868=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2708, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_869=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_820, "05function.c", 2709, "char*"));
            self_type_870=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type_870->mHeap=(_Bool)0;
            if(            self_type_870->mPointerNum==0) {
                self_type_870->mPointerNum=1;
            }
            if(            self_type_870->mPointerNum>1) {
                self_type_870->mPointerNum=1;
            }
            param_types_871=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___872[0]=self_type_870,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2718, "struct list$1sType$ph")),1,__list_values1___872)));
            param_names_880=(struct list$1char$ph*)come_increment_ref_count((__list_values2___876[0]=((char*)(__right_value710=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2719, "struct list$1char$ph")),1,__list_values2___876)));
            (__right_value710 = come_decrement_ref_count(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_881=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2720, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_881,((void*)0));
            result_type_868->mStatic=(_Bool)0;
            result_type_868->mUniq=(_Bool)0;
            result_type_868->mInline=(_Bool)0;
            fun2_882=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value717=__builtin_string(name_869)))));
            (__right_value716 = come_decrement_ref_count(__right_value716, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value717 = come_decrement_ref_count(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_882==((void*)0)||fun2_882->mExternal) {
                fun_883=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2729, "struct sFun*")),(char*)come_increment_ref_count(name_869),(struct sType*)come_increment_ref_count(result_type_868),(struct list$1sType$ph*)come_increment_ref_count(param_types_871),(struct list$1char$ph*)come_increment_ref_count(param_names_880),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_881),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_867),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_869)),(struct sFun*)come_increment_ref_count(fun_883));
                finalizer_821=fun_883;
                _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2739, "struct sNode");
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value725=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2739, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_883),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_884=(struct sNode*)come_increment_ref_count(_inf_value9);
                /*c*/ come_call_finalizer3(__right_value725,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_885=node_compile(node_884,info);
                if(                !Value_885) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                /*c*/ come_call_finalizer3(fun_883,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_884) ? node_884 = come_decrement_ref_count(node_884, ((struct sNode*)node_884)->finalize, ((struct sNode*)node_884)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_821=fun2_882;
            }
            __dec_obj200=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_866);
            /*b*/ come_call_finalizer3(__dec_obj200,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_862;
            info->head=head_865;
            info->sline=sline_863;
            __dec_obj201=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_864);
            __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(source_842,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_864 = come_decrement_ref_count(sname_864, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_866,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(block_867,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_868,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_869 = come_decrement_ref_count(name_869, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(self_type_870,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_871,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_880,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_881,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_882,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (user_real_fun_name_838 = come_decrement_ref_count(user_real_fun_name_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_840,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_819;
    __dec_obj202=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_816);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj203=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_817);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_818;
    __result_obj__384 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value733=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2764, "struct tuple2$2sFun$pchar$ph")),finalizer_821,(char*)come_increment_ref_count(real_fun_name_820)))));
    (last_code_816 = come_decrement_ref_count(last_code_816, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_817 = come_decrement_ref_count(last_code2_817, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_820 = come_decrement_ref_count(real_fun_name_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_822,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_823,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_824 = come_decrement_ref_count(fun_name2_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value733,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__384,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__384;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_828;
unsigned int hash_829;
unsigned int it_830;
struct sGenericsFun* __result_obj__351;
struct sGenericsFun* __result_obj__352;
struct sGenericsFun* __result_obj__353;
struct sGenericsFun* __result_obj__354;
default_value_828 = (void*)0;
    memset(&default_value_828,0,sizeof(struct sGenericsFun*));
    hash_829=string_get_hash_key(((char*)key))%self->size;
    it_830=hash_829;
    while(    (_Bool)1) {
        if(        self->item_existance[it_830]) {
            if(            string_equals(self->keys[it_830],key)) {
                __result_obj__351 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_830]);
                /*c*/ come_call_finalizer3(default_value_828,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__351,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__351;
            }
            it_830++;
            if(            it_830>=self->size) {
                it_830=0;
            }
            else if(            it_830==hash_829) {
                __result_obj__352 = (struct sGenericsFun*)come_increment_ref_count(default_value_828);
                /*c*/ come_call_finalizer3(default_value_828,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__352,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__352;
            }
        }
        else {
            __result_obj__353 = (struct sGenericsFun*)come_increment_ref_count(default_value_828);
            /*c*/ come_call_finalizer3(default_value_828,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__353,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__353;
        }
    }
    __result_obj__354 = (struct sGenericsFun*)come_increment_ref_count(default_value_828);
    /*c*/ come_call_finalizer3(default_value_828,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__354,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__354;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_831;
unsigned int hash_832;
unsigned int it_833;
struct sGenericsFun* __result_obj__355;
struct sGenericsFun* __result_obj__356;
struct sGenericsFun* __result_obj__357;
struct sGenericsFun* __result_obj__358;
default_value_831 = (void*)0;
    memset(&default_value_831,0,sizeof(struct sGenericsFun*));
    hash_832=string_get_hash_key(((char*)key))%self->size;
    it_833=hash_832;
    while(    (_Bool)1) {
        if(        self->item_existance[it_833]) {
            if(            string_equals(self->keys[it_833],key)) {
                __result_obj__355 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_833]);
                /*c*/ come_call_finalizer3(default_value_831,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__355,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__355;
            }
            it_833++;
            if(            it_833>=self->size) {
                it_833=0;
            }
            else if(            it_833==hash_832) {
                __result_obj__356 = (struct sGenericsFun*)come_increment_ref_count(default_value_831);
                /*c*/ come_call_finalizer3(default_value_831,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__356,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__356;
            }
        }
        else {
            __result_obj__357 = (struct sGenericsFun*)come_increment_ref_count(default_value_831);
            /*c*/ come_call_finalizer3(default_value_831,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__357,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__357;
        }
    }
    __result_obj__358 = (struct sGenericsFun*)come_increment_ref_count(default_value_831);
    /*c*/ come_call_finalizer3(default_value_831,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__358,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__358;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_844;
unsigned int hash_845;
unsigned int it_846;
struct sClass* __result_obj__359;
struct sClass* __result_obj__360;
struct sClass* __result_obj__361;
struct sClass* __result_obj__362;
default_value_844 = (void*)0;
    memset(&default_value_844,0,sizeof(struct sClass*));
    hash_845=string_get_hash_key(((char*)key))%self->size;
    it_846=hash_845;
    while(    (_Bool)1) {
        if(        self->item_existance[it_846]) {
            if(            string_equals(self->keys[it_846],key)) {
                __result_obj__359 = (struct sClass*)come_increment_ref_count(self->items[it_846]);
                /*c*/ come_call_finalizer3(default_value_844,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__359,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__359;
            }
            it_846++;
            if(            it_846>=self->size) {
                it_846=0;
            }
            else if(            it_846==hash_845) {
                __result_obj__360 = (struct sClass*)come_increment_ref_count(default_value_844);
                /*c*/ come_call_finalizer3(default_value_844,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__360,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__360;
            }
        }
        else {
            __result_obj__361 = (struct sClass*)come_increment_ref_count(default_value_844);
            /*c*/ come_call_finalizer3(default_value_844,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__361,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__361;
        }
    }
    __result_obj__362 = (struct sClass*)come_increment_ref_count(default_value_844);
    /*c*/ come_call_finalizer3(default_value_844,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__362,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__362;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_847;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_848;
    it_847=self->head;
    while(    it_847!=((void*)0)) {
        prev_it_848=it_847;
        it_847=it_847->next;
        /*c*/ come_call_finalizer3(prev_it_848,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct sClass* default_value_849;
unsigned int hash_850;
unsigned int it_851;
struct sClass* __result_obj__363;
struct sClass* __result_obj__364;
struct sClass* __result_obj__365;
struct sClass* __result_obj__366;
default_value_849 = (void*)0;
    memset(&default_value_849,0,sizeof(struct sClass*));
    hash_850=string_get_hash_key(((char*)key))%self->size;
    it_851=hash_850;
    while(    (_Bool)1) {
        if(        self->item_existance[it_851]) {
            if(            string_equals(self->keys[it_851],key)) {
                __result_obj__363 = (struct sClass*)come_increment_ref_count(self->items[it_851]);
                /*c*/ come_call_finalizer3(default_value_849,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__363,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__363;
            }
            it_851++;
            if(            it_851>=self->size) {
                it_851=0;
            }
            else if(            it_851==hash_850) {
                __result_obj__364 = (struct sClass*)come_increment_ref_count(default_value_849);
                /*c*/ come_call_finalizer3(default_value_849,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__364,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__364;
            }
        }
        else {
            __result_obj__365 = (struct sClass*)come_increment_ref_count(default_value_849);
            /*c*/ come_call_finalizer3(default_value_849,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__365,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__365;
        }
    }
    __result_obj__366 = (struct sClass*)come_increment_ref_count(default_value_849);
    /*c*/ come_call_finalizer3(default_value_849,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__366,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__366;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_853;
struct tuple2$2char$phsType$ph* __result_obj__367;
struct tuple2$2char$phsType$ph* __result_obj__368;
struct tuple2$2char$phsType$ph* result_854;
struct tuple2$2char$phsType$ph* __result_obj__369;
result_853 = (void*)0;
result_854 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_853,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__367 = result_853;
        return __result_obj__367;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__368 = self->it->item;
        return __result_obj__368;
    }
    memset(&result_854,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__369 = result_854;
    return __result_obj__369;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_856;
struct tuple2$2char$phsType$ph* __result_obj__370;
struct tuple2$2char$phsType$ph* __result_obj__371;
struct tuple2$2char$phsType$ph* result_857;
struct tuple2$2char$phsType$ph* __result_obj__372;
result_856 = (void*)0;
result_857 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_856,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__370 = result_856;
        return __result_obj__370;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__371 = self->it->item;
        return __result_obj__371;
    }
    memset(&result_857,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__372 = result_857;
    return __result_obj__372;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_873;
struct list$1sType$ph* __result_obj__373;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_873=0;    i_873<num_value;    i_873++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_873]));
    }
    __result_obj__373 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__373,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__373;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__374;
void* __right_value707 = (void*)0;
struct list$1sType$ph* result_874;
struct list$1sType$ph* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__374 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__374,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__374;
    }
    result_874=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*"));
    if(    self!=((void*)0)) {
        result_874->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_874->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_874->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_874->it=self->it;
    }
    __result_obj__375 = (struct list$1sType$ph*)come_increment_ref_count(result_874);
    /*c*/ come_call_finalizer3(result_874,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__375,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__375;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_875;
    result_875=0;
    result_875+=int_get_hash_key(((int)self->head));
    result_875+=int_get_hash_key(((int)self->tail));
    result_875+=int_get_hash_key(((int)self->len));
    result_875+=int_get_hash_key(((int)self->it));
    return result_875;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_877;
struct list$1char$ph* __result_obj__376;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_877=0;    i_877<num_value;    i_877++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_877]));
    }
    __result_obj__376 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__376,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__376;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__377;
void* __right_value711 = (void*)0;
struct list$1char$ph* result_878;
struct list$1char$ph* __result_obj__378;
    if(    self==(void*)0) {
        __result_obj__377 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__377,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__377;
    }
    result_878=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*"));
    if(    self!=((void*)0)) {
        result_878->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_878->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_878->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_878->it=self->it;
    }
    __result_obj__378 = (struct list$1char$ph*)come_increment_ref_count(result_878);
    /*c*/ come_call_finalizer3(result_878,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__378,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__378;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_879;
    result_879=0;
    result_879+=int_get_hash_key(((int)self->head));
    result_879+=int_get_hash_key(((int)self->tail));
    result_879+=int_get_hash_key(((int)self->len));
    result_879+=int_get_hash_key(((int)self->it));
    return result_879;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__379;
void* __right_value727 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_886;
void* __right_value728 = (void*)0;
char* __dec_obj204;
struct tuple2$2sFun$pchar$ph* __result_obj__380;
    if(    self==(void*)0) {
        __result_obj__379 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__379,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__379;
    }
    result_886=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*"));
    if(    self!=((void*)0)) {
        result_886->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj204=result_886->v2,
        result_886->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2sFun$pchar$ph_clone", 5, "char*"));
        __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__380 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(result_886);
    /*c*/ come_call_finalizer3(result_886,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__380,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__380;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_887;
    result_887=0;
    result_887+=int_get_hash_key(((int)self->v1));
    result_887+=int_get_hash_key(((int)self->v2));
    return result_887;
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
int n_888;
_Bool result_889;
char* it_890;
char* default_value_891;
void* __right_value729 = (void*)0;
char* it2_892;
struct sVar* default_value2_895;
void* __right_value730 = (void*)0;
struct sVar* item_896;
void* __right_value731 = (void*)0;
struct sVar* item2_897;
default_value_891 = (void*)0;
default_value2_895 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_888=0;
    result_889=(_Bool)1;
    for(    it_890=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_890=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_891,0,sizeof(char*));
        it2_892=((char*)(__right_value729=list$1char$ph_item(right->key_list,n_888,default_value_891)));
        (__right_value729 = come_decrement_ref_count(__right_value729, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_890,it2_892)) {
            memset(&default_value2_895,0,sizeof(struct sVar*));
            item_896=((struct sVar*)(__right_value730=map$2char$phsVar$ph_at(left,it_890,(struct sVar*)come_increment_ref_count(default_value2_895))));
            /*c*/ come_call_finalizer3(__right_value730,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_897=((struct sVar*)(__right_value731=map$2char$phsVar$ph_at(right,it2_892,(struct sVar*)come_increment_ref_count(default_value2_895))));
            /*c*/ come_call_finalizer3(__right_value731,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_896,item2_897)) {
                result_889=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_895,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_889=(_Bool)0;
        }
        n_888++;
        (default_value_891 = come_decrement_ref_count(default_value_891, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_889;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_893;
int i_894;
char* __result_obj__381;
char* __result_obj__382;
    if(    position<0) {
        position+=self->len;
    }
    it_893=self->head;
    i_894=0;
    while(    it_893!=((void*)0)) {
        if(        position==i_894) {
            __result_obj__381 = (char*)come_increment_ref_count(it_893->item);
            (__result_obj__381 = come_decrement_ref_count(__result_obj__381, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__381;
        }
        it_893=it_893->next;
        i_894++;
    }
    __result_obj__382 = (char*)come_increment_ref_count(default_value);
    (__result_obj__382 = come_decrement_ref_count(__result_obj__382, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__382;
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

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj205;
struct tuple2$2sFun$pchar$ph* __result_obj__383;
    self->v1=v1;
    __dec_obj205=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__383 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__383,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__383;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_898;
char* __dec_obj206;
char* last_code2_899;
char* __dec_obj207;
_Bool comma_instead_of_semicolon_900;
struct sClass* current_stack_frame_struct_901;
struct sFun* equaler_902;
void* __right_value734 = (void*)0;
char* real_fun_name_903;
void* __right_value735 = (void*)0;
struct sType* type2_904;
struct sClass* klass_905;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct buffer* source_906;
char* name_907;
void* __right_value738 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_909;
struct tuple2$2char$phsType$ph* it_910;
struct tuple2$2char$phsType$ph* multiple_assign_var14 = (void*)0;
char* name_911=0;
struct sType* field_type_912=0;
char* p_914;
int sline_915;
char* sname_916;
char* head_917;
struct buffer* source3_918;
struct buffer* __dec_obj208;
void* __right_value739 = (void*)0;
char* __dec_obj209;
void* __right_value740 = (void*)0;
struct sBlock* block_919;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sType* result_type_920;
void* __right_value744 = (void*)0;
char* name_921;
void* __right_value745 = (void*)0;
struct sType* left_type_922;
void* __right_value746 = (void*)0;
struct sType* right_type_923;
struct sType* __list_values3___925[2];
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct list$1sType$ph* param_types_924;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
char* __list_values4___926[2];
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1char$ph* param_names_927;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct list$1char$ph* param_default_parametors_928;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sFun* fun2_929;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct sFun* fun_930;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value765 = (void*)0;
struct sNode* node_931;
_Bool Value_932;
struct buffer* __dec_obj210;
char* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__385;
    last_code_898=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj206=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_899=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj207=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_900=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_901=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_902=((void*)0);
    real_fun_name_903=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_904=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_904;
    klass_905=type->mClass;
    if(    type->mPointerNum>0&&!klass_905->mNumber) {
        source_906=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2790, "struct buffer*"))));
        buffer_append_char(source_906,123);
        if(        klass_905->mProtocol) {
            name_907="_protocol_obj";
            char source2_908[1024];
            memset(&source2_908, 0, sizeof(char)            *(1024)            );
            snprintf(source2_908,1024,"return left.%s.equals(right.%s);\n",name_907,name_907);
            buffer_append_str(source_906,source2_908);
        }
        else {
            klass_905=((struct sClass*)(__right_value738=map$2char$phsClass$ph_operator_load_element(info->classes,klass_905->mName)));
            /*c*/ come_call_finalizer3(__right_value738,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_909=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_905->mFields)),it_910=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_909));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_909));            it_910=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_909))            ){
                multiple_assign_var14=it_910;
                name_911=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_912=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_913[1024];
                memset(&source2_913, 0, sizeof(char)                *(1024)                );
                snprintf(source2_913,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_911,name_911,name_911);
                buffer_append_str(source_906,source2_913);
                (name_911 = come_decrement_ref_count(name_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_912,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_909,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_906,"return true;");
        buffer_append_char(source_906,125);
        p_914=info->p;
        sline_915=info->sline;
        sname_916=(char*)come_increment_ref_count(info->sname);
        head_917=info->head;
        source3_918=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj208=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_906);
        /*b*/ come_call_finalizer3(__dec_obj208,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_906->buf;
        info->head=source_906->buf;
        __dec_obj209=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_903));
        __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_919=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_920=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2830, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_921=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_903, "05function.c", 2831, "char*"));
        left_type_922=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_922->mHeap=(_Bool)0;
        right_type_923=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_923->mHeap=(_Bool)0;
        param_types_924=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___925[0]=left_type_922,
__list_values3___925[1]=right_type_923,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2836, "struct list$1sType$ph")),2,__list_values3___925)));
        param_names_927=(struct list$1char$ph*)come_increment_ref_count((__list_values4___926[0]=((char*)(__right_value749=__builtin_string("left"))),
__list_values4___926[1]=((char*)(__right_value750=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2837, "struct list$1char$ph")),2,__list_values4___926)));
        (__right_value749 = come_decrement_ref_count(__right_value749, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value750 = come_decrement_ref_count(__right_value750, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_928=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2838, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_928,((void*)0));
        list$1char$ph_push_back(param_default_parametors_928,((void*)0));
        result_type_920->mStatic=(_Bool)0;
        result_type_920->mUniq=(_Bool)0;
        result_type_920->mInline=(_Bool)0;
        fun2_929=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value756=__builtin_string(name_921)))));
        (__right_value755 = come_decrement_ref_count(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value756 = come_decrement_ref_count(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_929==((void*)0)||fun2_929->mExternal) {
            fun_930=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2848, "struct sFun*")),(char*)come_increment_ref_count(name_921),(struct sType*)come_increment_ref_count(result_type_920),(struct list$1sType$ph*)come_increment_ref_count(param_types_924),(struct list$1char$ph*)come_increment_ref_count(param_names_927),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_928),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_919),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_921)),(struct sFun*)come_increment_ref_count(fun_930));
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2856, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value764=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2856, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_930),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_931=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value764,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_932=node_compile(node_931,info);
            if(            !Value_932) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_902=fun_930;
            /*c*/ come_call_finalizer3(fun_930,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_931) ? node_931 = come_decrement_ref_count(node_931, ((struct sNode*)node_931)->finalize, ((struct sNode*)node_931)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_902=fun2_929;
        }
        __dec_obj210=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_918);
        /*b*/ come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_914;
        info->head=head_917;
        info->sline=sline_915;
        __dec_obj211=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_916);
        __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_906,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_916 = come_decrement_ref_count(sname_916, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_918,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_919,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_920,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_921 = come_decrement_ref_count(name_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_922,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_923,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_924,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_927,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_928,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_929,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_901;
    __dec_obj212=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_898);
    __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj213=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_899);
    __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_900;
    __result_obj__385 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value767=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2882, "struct tuple2$2sFun$pchar$ph")),equaler_902,(char*)come_increment_ref_count(real_fun_name_903)))));
    (last_code_898 = come_decrement_ref_count(last_code_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_899 = come_decrement_ref_count(last_code2_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_903 = come_decrement_ref_count(real_fun_name_903, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_904,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value767,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__385,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__385;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_933;
char* __dec_obj214;
char* last_code2_934;
char* __dec_obj215;
_Bool comma_instead_of_semicolon_935;
struct sClass* current_stack_frame_struct_936;
struct sFun* equaler_937;
void* __right_value768 = (void*)0;
char* real_fun_name_938;
void* __right_value769 = (void*)0;
struct sType* type2_939;
struct sClass* klass_940;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
struct buffer* source_941;
char* name_942;
int i_945;
void* __right_value772 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_946;
struct tuple2$2char$phsType$ph* it_947;
struct tuple2$2char$phsType$ph* multiple_assign_var15 = (void*)0;
char* name_948=0;
struct sType* field_type_949=0;
char* p_953;
int sline_954;
char* sname_955;
char* head_956;
struct buffer* source3_957;
struct buffer* __dec_obj216;
void* __right_value773 = (void*)0;
char* __dec_obj217;
void* __right_value774 = (void*)0;
struct sBlock* block_958;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
struct sType* result_type_959;
void* __right_value778 = (void*)0;
char* name_960;
void* __right_value779 = (void*)0;
struct sType* left_type_961;
void* __right_value780 = (void*)0;
struct sType* right_type_962;
struct sType* __list_values5___964[2];
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct list$1sType$ph* param_types_963;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
char* __list_values6___965[2];
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1char$ph* param_names_966;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct list$1char$ph* param_default_parametors_967;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sFun* fun2_968;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sFun* fun_969;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value799 = (void*)0;
struct sNode* node_970;
_Bool Value_971;
struct buffer* __dec_obj218;
char* __dec_obj219;
char* __dec_obj220;
char* __dec_obj221;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__386;
    last_code_933=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj214=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_934=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj215=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        source_941=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2907, "struct buffer*"))));
        buffer_append_char(source_941,123);
        if(        klass_940->mProtocol) {
            name_942="_protocol_obj";
            char source2_943[1024];
            memset(&source2_943, 0, sizeof(char)            *(1024)            );
            snprintf(source2_943,1024,"return left.%s !== right.%s;\n",name_942,name_942);
            buffer_append_str(source_941,source2_943);
        }
        else {
            char source2_944[1024];
            memset(&source2_944, 0, sizeof(char)            *(1024)            );
            snprintf(source2_944,1024,"return !(");
            buffer_append_str(source_941,source2_944);
            snprintf(source2_944,1024,"( ");
            buffer_append_str(source_941,source2_944);
            i_945=0;
            klass_940=((struct sClass*)(__right_value772=map$2char$phsClass$ph_operator_load_element(info->classes,klass_940->mName)));
            /*c*/ come_call_finalizer3(__right_value772,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_946=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_940->mFields)),it_947=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_946));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_946));            it_947=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_946))            ){
                multiple_assign_var15=it_947;
                name_948=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_949=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_950[1024];
                memset(&source2_950, 0, sizeof(char)                *(1024)                );
                snprintf(source2_950,1024,"(left.%s === right.%s)",name_948,name_948,name_948);
                buffer_append_str(source_941,source2_950);
                if(                i_945==list$1tuple2$2char$phsType$ph$ph_length(klass_940->mFields)-1) {
                    char source2_951[1024];
                    memset(&source2_951, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_951,1024,"));");
                    buffer_append_str(source_941,source2_951);
                }
                else {
                    char source2_952[1024];
                    memset(&source2_952, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_952,1024," && ");
                    buffer_append_str(source_941,source2_952);
                }
                i_945++;
                (name_948 = come_decrement_ref_count(name_948, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_949,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_946,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_941,125);
        p_953=info->p;
        sline_954=info->sline;
        sname_955=(char*)come_increment_ref_count(info->sname);
        head_956=info->head;
        source3_957=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj216=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_941);
        /*b*/ come_call_finalizer3(__dec_obj216,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_941->buf;
        info->head=source_941->buf;
        __dec_obj217=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_938));
        __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_958=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_959=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2967, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_960=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_938, "05function.c", 2968, "char*"));
        left_type_961=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_961->mHeap=(_Bool)0;
        right_type_962=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_962->mHeap=(_Bool)0;
        param_types_963=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___964[0]=left_type_961,
__list_values5___964[1]=right_type_962,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2973, "struct list$1sType$ph")),2,__list_values5___964)));
        param_names_966=(struct list$1char$ph*)come_increment_ref_count((__list_values6___965[0]=((char*)(__right_value783=__builtin_string("left"))),
__list_values6___965[1]=((char*)(__right_value784=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2974, "struct list$1char$ph")),2,__list_values6___965)));
        (__right_value783 = come_decrement_ref_count(__right_value783, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value784 = come_decrement_ref_count(__right_value784, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_967=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2975, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_967,((void*)0));
        list$1char$ph_push_back(param_default_parametors_967,((void*)0));
        result_type_959->mStatic=(_Bool)0;
        result_type_959->mUniq=(_Bool)0;
        result_type_959->mInline=(_Bool)0;
        fun2_968=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value790=__builtin_string(name_960)))));
        (__right_value789 = come_decrement_ref_count(__right_value789, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value790 = come_decrement_ref_count(__right_value790, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_968==((void*)0)||fun2_968->mExternal) {
            fun_969=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2985, "struct sFun*")),(char*)come_increment_ref_count(name_960),(struct sType*)come_increment_ref_count(result_type_959),(struct list$1sType$ph*)come_increment_ref_count(param_types_963),(struct list$1char$ph*)come_increment_ref_count(param_names_966),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_967),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_958),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_960)),(struct sFun*)come_increment_ref_count(fun_969));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2993, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value798=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2993, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_969),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_970=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value798,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_971=node_compile(node_970,info);
            if(            !Value_971) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_937=fun_969;
            /*c*/ come_call_finalizer3(fun_969,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_970) ? node_970 = come_decrement_ref_count(node_970, ((struct sNode*)node_970)->finalize, ((struct sNode*)node_970)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_937=fun2_968;
        }
        __dec_obj218=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_957);
        /*b*/ come_call_finalizer3(__dec_obj218,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_953;
        info->head=head_956;
        info->sline=sline_954;
        __dec_obj219=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_955);
        __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_941,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_955 = come_decrement_ref_count(sname_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_957,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_958,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_959,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_960 = come_decrement_ref_count(name_960, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_961,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_962,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_963,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_966,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_967,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_968,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_936;
    __dec_obj220=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_933);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj221=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_934);
    __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_935;
    __result_obj__386 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value801=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3019, "struct tuple2$2sFun$pchar$ph")),equaler_937,(char*)come_increment_ref_count(real_fun_name_938)))));
    (last_code_933 = come_decrement_ref_count(last_code_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_934 = come_decrement_ref_count(last_code2_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_938 = come_decrement_ref_count(real_fun_name_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_939,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value801,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__386,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__386;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_972;
char* __dec_obj222;
char* last_code2_973;
char* __dec_obj223;
_Bool comma_instead_of_semicolon_974;
struct sClass* current_stack_frame_struct_975;
struct sFun* equaler_976;
void* __right_value802 = (void*)0;
char* real_fun_name_977;
void* __right_value803 = (void*)0;
struct sType* type2_978;
struct sClass* klass_979;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct buffer* source_980;
char* name_981;
int i_984;
void* __right_value806 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_985;
struct tuple2$2char$phsType$ph* it_986;
struct tuple2$2char$phsType$ph* multiple_assign_var16 = (void*)0;
char* name_987=0;
struct sType* field_type_988=0;
char* p_992;
int sline_993;
char* sname_994;
char* head_995;
struct buffer* source3_996;
struct buffer* __dec_obj224;
void* __right_value807 = (void*)0;
char* __dec_obj225;
void* __right_value808 = (void*)0;
struct sBlock* block_997;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sType* result_type_998;
void* __right_value812 = (void*)0;
char* name_999;
void* __right_value813 = (void*)0;
struct sType* left_type_1000;
void* __right_value814 = (void*)0;
struct sType* right_type_1001;
struct sType* __list_values7___1003[2];
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct list$1sType$ph* param_types_1002;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
char* __list_values8___1004[2];
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct list$1char$ph* param_names_1005;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct list$1char$ph* param_default_parametors_1006;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct sFun* fun2_1007;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct sFun* fun_1008;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value833 = (void*)0;
struct sNode* node_1009;
_Bool Value_1010;
struct buffer* __dec_obj226;
char* __dec_obj227;
char* __dec_obj228;
char* __dec_obj229;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__387;
    last_code_972=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj222=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_973=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj223=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_974=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_975=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_976=((void*)0);
    real_fun_name_977=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_978=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_978;
    klass_979=type->mClass;
    if(    type->mPointerNum>0&&!klass_979->mNumber) {
        source_980=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3044, "struct buffer*"))));
        buffer_append_char(source_980,123);
        if(        klass_979->mProtocol) {
            name_981="_protocol_obj";
            char source2_982[1024];
            memset(&source2_982, 0, sizeof(char)            *(1024)            );
            snprintf(source2_982,1024,"return !left.%s.equals(right.%s);\n",name_981,name_981);
            buffer_append_str(source_980,source2_982);
        }
        else {
            char source2_983[1024];
            memset(&source2_983, 0, sizeof(char)            *(1024)            );
            snprintf(source2_983,1024,"return !(");
            buffer_append_str(source_980,source2_983);
            i_984=0;
            klass_979=((struct sClass*)(__right_value806=map$2char$phsClass$ph_operator_load_element(info->classes,klass_979->mName)));
            /*c*/ come_call_finalizer3(__right_value806,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_985=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_979->mFields)),it_986=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_985));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_985));            it_986=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_985))            ){
                multiple_assign_var16=it_986;
                name_987=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_988=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_989[1024];
                memset(&source2_989, 0, sizeof(char)                *(1024)                );
                snprintf(source2_989,1024,"left.%s.equals(right.%s)",name_987,name_987);
                buffer_append_str(source_980,source2_989);
                if(                i_984==list$1tuple2$2char$phsType$ph$ph_length(klass_979->mFields)-1) {
                    char source2_990[1024];
                    memset(&source2_990, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_990,1024,");");
                    buffer_append_str(source_980,source2_990);
                }
                else {
                    char source2_991[1024];
                    memset(&source2_991, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_991,1024," && ");
                    buffer_append_str(source_980,source2_991);
                }
                i_984++;
                (name_987 = come_decrement_ref_count(name_987, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_988,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_985,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_980,125);
        p_992=info->p;
        sline_993=info->sline;
        sname_994=(char*)come_increment_ref_count(info->sname);
        head_995=info->head;
        source3_996=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj224=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_980);
        /*b*/ come_call_finalizer3(__dec_obj224,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_980->buf;
        info->head=source_980->buf;
        __dec_obj225=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_977));
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_997=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_998=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3101, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_999=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_977, "05function.c", 3102, "char*"));
        left_type_1000=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1000->mHeap=(_Bool)0;
        right_type_1001=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1001->mHeap=(_Bool)0;
        param_types_1002=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___1003[0]=left_type_1000,
__list_values7___1003[1]=right_type_1001,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3107, "struct list$1sType$ph")),2,__list_values7___1003)));
        param_names_1005=(struct list$1char$ph*)come_increment_ref_count((__list_values8___1004[0]=((char*)(__right_value817=__builtin_string("left"))),
__list_values8___1004[1]=((char*)(__right_value818=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3108, "struct list$1char$ph")),2,__list_values8___1004)));
        (__right_value817 = come_decrement_ref_count(__right_value817, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value818 = come_decrement_ref_count(__right_value818, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1006=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3109, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1006,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1006,((void*)0));
        result_type_998->mStatic=(_Bool)0;
        result_type_998->mUniq=(_Bool)0;
        result_type_998->mInline=(_Bool)0;
        fun2_1007=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value824=__builtin_string(name_999)))));
        (__right_value823 = come_decrement_ref_count(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value824 = come_decrement_ref_count(__right_value824, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1007==((void*)0)||fun2_1007->mExternal) {
            fun_1008=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3119, "struct sFun*")),(char*)come_increment_ref_count(name_999),(struct sType*)come_increment_ref_count(result_type_998),(struct list$1sType$ph*)come_increment_ref_count(param_types_1002),(struct list$1char$ph*)come_increment_ref_count(param_names_1005),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1006),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_997),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_999)),(struct sFun*)come_increment_ref_count(fun_1008));
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3127, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value832=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3127, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1008),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1009=(struct sNode*)come_increment_ref_count(_inf_value12);
            /*c*/ come_call_finalizer3(__right_value832,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1010=node_compile(node_1009,info);
            if(            !Value_1010) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_976=fun_1008;
            /*c*/ come_call_finalizer3(fun_1008,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1009) ? node_1009 = come_decrement_ref_count(node_1009, ((struct sNode*)node_1009)->finalize, ((struct sNode*)node_1009)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_976=fun2_1007;
        }
        __dec_obj226=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_996);
        /*b*/ come_call_finalizer3(__dec_obj226,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_992;
        info->head=head_995;
        info->sline=sline_993;
        __dec_obj227=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_994);
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_980,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_994 = come_decrement_ref_count(sname_994, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_996,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_997,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_998,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_999 = come_decrement_ref_count(name_999, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1000,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1001,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1002,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1005,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1006,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1007,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_975;
    __dec_obj228=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_972);
    __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj229=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_973);
    __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_974;
    __result_obj__387 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value835=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3153, "struct tuple2$2sFun$pchar$ph")),equaler_976,(char*)come_increment_ref_count(real_fun_name_977)))));
    (last_code_972 = come_decrement_ref_count(last_code_972, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_973 = come_decrement_ref_count(last_code2_973, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_977 = come_decrement_ref_count(real_fun_name_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_978,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value835,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__387,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__387;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1011;
char* __dec_obj230;
char* last_code2_1012;
char* __dec_obj231;
_Bool comma_instead_of_semicolon_1013;
struct sClass* current_stack_frame_struct_1014;
struct sFun* equaler_1015;
void* __right_value836 = (void*)0;
char* real_fun_name_1016;
void* __right_value837 = (void*)0;
struct sType* type2_1017;
struct sClass* klass_1018;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct buffer* source_1019;
char* name_1020;
void* __right_value840 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1023;
struct tuple2$2char$phsType$ph* it_1024;
struct tuple2$2char$phsType$ph* multiple_assign_var17 = (void*)0;
char* name_1025=0;
struct sType* field_type_1026=0;
char* p_1028;
int sline_1029;
char* sname_1030;
char* head_1031;
struct buffer* source3_1032;
struct buffer* __dec_obj232;
void* __right_value841 = (void*)0;
char* __dec_obj233;
void* __right_value842 = (void*)0;
struct sBlock* block_1033;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sType* result_type_1034;
void* __right_value846 = (void*)0;
char* name_1035;
void* __right_value847 = (void*)0;
struct sType* left_type_1036;
void* __right_value848 = (void*)0;
struct sType* right_type_1037;
struct sType* __list_values9___1039[2];
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct list$1sType$ph* param_types_1038;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
char* __list_values10___1040[2];
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1char$ph* param_names_1041;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct list$1char$ph* param_default_parametors_1042;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sFun* fun2_1043;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
struct sFun* fun_1044;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value867 = (void*)0;
struct sNode* node_1045;
_Bool Value_1046;
struct buffer* __dec_obj234;
char* __dec_obj235;
char* __dec_obj236;
char* __dec_obj237;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__388;
    last_code_1011=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj230=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1012=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj231=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
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
        source_1019=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3178, "struct buffer*"))));
        buffer_append_char(source_1019,123);
        if(        klass_1018->mProtocol) {
            name_1020="_protocol_obj";
            char source2_1021[1024];
            memset(&source2_1021, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1021,1024,"return left.%s === right.%s;\n",name_1020,name_1020);
            buffer_append_str(source_1019,source2_1021);
        }
        else {
            char source2_1022[1024];
            memset(&source2_1022, 0, sizeof(char)            *(1024)            );
            klass_1018=((struct sClass*)(__right_value840=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1018->mName)));
            /*c*/ come_call_finalizer3(__right_value840,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1023=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1018->mFields)),it_1024=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1023));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1023));            it_1024=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1023))            ){
                multiple_assign_var17=it_1024;
                name_1025=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_1026=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                char source2_1027[1024];
                memset(&source2_1027, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1027,1024,"if(left.%s !== right.%s) { return false; }\n",name_1025,name_1025,name_1025);
                buffer_append_str(source_1019,source2_1027);
                (name_1025 = come_decrement_ref_count(name_1025, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1026,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1023,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_1019,"return true;\n");
        buffer_append_char(source_1019,125);
        p_1028=info->p;
        sline_1029=info->sline;
        sname_1030=(char*)come_increment_ref_count(info->sname);
        head_1031=info->head;
        source3_1032=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj232=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1019);
        /*b*/ come_call_finalizer3(__dec_obj232,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1019->buf;
        info->head=source_1019->buf;
        __dec_obj233=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1016));
        __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1033=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1034=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3220, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1035=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1016, "05function.c", 3221, "char*"));
        left_type_1036=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1036->mHeap=(_Bool)0;
        right_type_1037=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1037->mHeap=(_Bool)0;
        param_types_1038=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___1039[0]=left_type_1036,
__list_values9___1039[1]=right_type_1037,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3226, "struct list$1sType$ph")),2,__list_values9___1039)));
        param_names_1041=(struct list$1char$ph*)come_increment_ref_count((__list_values10___1040[0]=((char*)(__right_value851=__builtin_string("left"))),
__list_values10___1040[1]=((char*)(__right_value852=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3227, "struct list$1char$ph")),2,__list_values10___1040)));
        (__right_value851 = come_decrement_ref_count(__right_value851, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value852 = come_decrement_ref_count(__right_value852, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1042=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3228, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1042,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1042,((void*)0));
        result_type_1034->mStatic=(_Bool)0;
        result_type_1034->mUniq=(_Bool)0;
        result_type_1034->mInline=(_Bool)0;
        fun2_1043=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value858=__builtin_string(name_1035)))));
        (__right_value857 = come_decrement_ref_count(__right_value857, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value858 = come_decrement_ref_count(__right_value858, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1043==((void*)0)||fun2_1043->mExternal) {
            fun_1044=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3238, "struct sFun*")),(char*)come_increment_ref_count(name_1035),(struct sType*)come_increment_ref_count(result_type_1034),(struct list$1sType$ph*)come_increment_ref_count(param_types_1038),(struct list$1char$ph*)come_increment_ref_count(param_names_1041),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1042),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1033),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1035)),(struct sFun*)come_increment_ref_count(fun_1044));
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3246, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value866=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3246, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1044),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1045=(struct sNode*)come_increment_ref_count(_inf_value13);
            /*c*/ come_call_finalizer3(__right_value866,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1046=node_compile(node_1045,info);
            if(            !Value_1046) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1015=fun_1044;
            /*c*/ come_call_finalizer3(fun_1044,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1045) ? node_1045 = come_decrement_ref_count(node_1045, ((struct sNode*)node_1045)->finalize, ((struct sNode*)node_1045)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1015=fun2_1043;
        }
        __dec_obj234=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1032);
        /*b*/ come_call_finalizer3(__dec_obj234,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1028;
        info->head=head_1031;
        info->sline=sline_1029;
        __dec_obj235=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1030);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1019,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1030 = come_decrement_ref_count(sname_1030, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1032,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1033,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1034,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1035 = come_decrement_ref_count(name_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1036,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1037,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1038,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1041,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1042,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1043,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1014;
    __dec_obj236=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1011);
    __dec_obj236 = come_decrement_ref_count(__dec_obj236, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj237=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1012);
    __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1013;
    __result_obj__388 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value869=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3272, "struct tuple2$2sFun$pchar$ph")),equaler_1015,(char*)come_increment_ref_count(real_fun_name_1016)))));
    (last_code_1011 = come_decrement_ref_count(last_code_1011, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1012 = come_decrement_ref_count(last_code2_1012, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1016 = come_decrement_ref_count(real_fun_name_1016, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1017,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value869,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__388,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__388;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__389;
char* last_code_1047;
char* __dec_obj238;
char* last_code2_1048;
char* __dec_obj239;
_Bool comma_instead_of_semicolon_1049;
struct sClass* current_stack_frame_struct_1050;
struct sFun* cloner_1051;
void* __right_value872 = (void*)0;
char* real_fun_name_1052;
void* __right_value873 = (void*)0;
struct sType* type2_1053;
struct sClass* klass_1054;
char* fun_name2_1055;
void* __right_value874 = (void*)0;
char* none_generics_name_1056;
void* __right_value875 = (void*)0;
struct sType* obj_type_1057;
void* __right_value876 = (void*)0;
char* __dec_obj240;
void* __right_value877 = (void*)0;
char* fun_name3_1058;
void* __right_value878 = (void*)0;
struct sGenericsFun* generics_fun_1059;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var18 = (void*)0;
char* name_1060=0;
_Bool err_1061=0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__390;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
char* __dec_obj241;
void* __right_value885 = (void*)0;
char* __dec_obj242;
int i_1062;
void* __right_value886 = (void*)0;
char* new_fun_name_1063;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
char* __dec_obj243;
void* __right_value889 = (void*)0;
char* __dec_obj244;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct buffer* source_1064;
void* __right_value892 = (void*)0;
char* name_1065;
void* __right_value893 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1067;
struct tuple2$2char$phsType$ph* it_1068;
struct tuple2$2char$phsType$ph* multiple_assign_var19 = (void*)0;
char* name_1069=0;
struct sType* field_type_1070=0;
void* __right_value894 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1073;
struct tuple2$2char$phsType$ph* it_1074;
struct tuple2$2char$phsType$ph* multiple_assign_var20 = (void*)0;
char* name_1075=0;
struct sType* field_type_1076=0;
void* __right_value895 = (void*)0;
char* user_real_fun_name_1080;
void* __right_value896 = (void*)0;
struct sFun* user_cloner_1081;
char* p_1083;
int sline_1084;
char* sname_1085;
struct buffer* source3_1086;
char* head_1087;
struct buffer* __dec_obj245;
void* __right_value897 = (void*)0;
char* __dec_obj246;
void* __right_value898 = (void*)0;
struct sBlock* block_1088;
void* __right_value899 = (void*)0;
struct sType* result_type_1089;
void* __right_value900 = (void*)0;
char* name_1090;
void* __right_value901 = (void*)0;
struct sType* self_type_1091;
struct sType* __list_values11___1093[1];
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1sType$ph* param_types_1092;
void* __right_value904 = (void*)0;
char* __list_values12___1094[1];
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct list$1char$ph* param_names_1095;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct list$1char$ph* param_default_parametors_1096;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sFun* fun2_1097;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sFun* fun_1098;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value919 = (void*)0;
struct sNode* node_1099;
_Bool Value_1100;
char* __dec_obj247;
struct buffer* __dec_obj248;
char* __dec_obj249;
char* __dec_obj250;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__391;
fun_name2_1055 = (void*)0;
memset(&i_1062, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__389 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value871=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3278, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        /*c*/ come_call_finalizer3(__right_value871,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__389,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__389;
    }
    last_code_1047=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj238=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1048=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj239=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1049=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1050=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1051=((void*)0);
    real_fun_name_1052=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1053=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1053;
    klass_1054=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1056=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1057=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj240=fun_name2_1055,
        fun_name2_1055=(char*)come_increment_ref_count(create_method_name(obj_type_1057,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1058=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1056,fun_name));
        generics_fun_1059=((struct sGenericsFun*)(__right_value878=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1058,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value878,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1059) {
            multiple_assign_var18=((struct tuple2$2char$phbool$*)(__right_value880=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1055)),generics_fun_1059,obj_type_1057,info)));
            name_1060=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            err_1061=multiple_assign_var18->v2;
            /*c*/ come_call_finalizer3(__right_value880,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1061) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__390 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value882=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3318, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1060 = come_decrement_ref_count(name_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1056 = come_decrement_ref_count(none_generics_name_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(obj_type_1057,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name3_1058 = come_decrement_ref_count(fun_name3_1058, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1047 = come_decrement_ref_count(last_code_1047, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1048 = come_decrement_ref_count(last_code2_1048, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1052 = come_decrement_ref_count(real_fun_name_1052, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_1053,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_1055 = come_decrement_ref_count(fun_name2_1055, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value882,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__390,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__390;
                }
            }
            cloner_1051=((struct sFun*)(__right_value883=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1060)));
            /*c*/ come_call_finalizer3(__right_value883,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1060 = come_decrement_ref_count(name_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1051=((struct sFun*)(__right_value884=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1055)));
            /*c*/ come_call_finalizer3(__right_value884,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj241=real_fun_name_1052,
        real_fun_name_1052=(char*)come_increment_ref_count(fun_name2_1055);
        __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (none_generics_name_1056 = come_decrement_ref_count(none_generics_name_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1057,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1058 = come_decrement_ref_count(fun_name3_1058, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj242=fun_name2_1055,
        fun_name2_1055=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1062=128-1;        i_1062>=1;        i_1062--        ){
            new_fun_name_1063=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1055,i_1062));
            cloner_1051=((struct sFun*)(__right_value887=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1063)));
            /*c*/ come_call_finalizer3(__right_value887,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1051) {
                __dec_obj243=fun_name2_1055,
                fun_name2_1055=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1063));
                __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1063 = come_decrement_ref_count(new_fun_name_1063, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1063 = come_decrement_ref_count(new_fun_name_1063, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1051==((void*)0)) {
            cloner_1051=((struct sFun*)(__right_value889=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1055)));
            /*c*/ come_call_finalizer3(__right_value889,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj244=real_fun_name_1052,
        real_fun_name_1052=(char*)come_increment_ref_count(fun_name2_1055);
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    cloner_1051==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1064=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3353, "struct buffer*"))));
        buffer_append_str(source_1064,"{\n");
        buffer_append_str(source_1064,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1064,"var result = new %s;\n",((char*)(__right_value892=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value892 = come_decrement_ref_count(__right_value892, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1054->mProtocol) {
            name_1065="_protocol_obj";
            char source2_1066[1024];
            memset(&source2_1066, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1066,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1064,source2_1066);
            klass_1054=((struct sClass*)(__right_value893=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1054->mName)));
            /*c*/ come_call_finalizer3(__right_value893,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1067=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1054->mFields)),it_1068=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1067));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1067));            it_1068=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1067))            ){
                multiple_assign_var19=it_1068;
                name_1069=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1070=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                string_operator_equals(name_1069,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph_length(field_type_1070->mArrayNum)>0) {
                    char source2_1071[1024];
                    memset(&source2_1071, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1071,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1069,name_1069,name_1069);
                    buffer_append_str(source_1064,source2_1071);
                }
                else {
                    char source2_1072[1024];
                    memset(&source2_1072, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1072,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1069,name_1069);
                    buffer_append_str(source_1064,source2_1072);
                }
                (name_1069 = come_decrement_ref_count(name_1069, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1070,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1067,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_1054=((struct sClass*)(__right_value894=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1054->mName)));
            /*c*/ come_call_finalizer3(__right_value894,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1073=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1054->mFields)),it_1074=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1073));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1073));            it_1074=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1073))            ){
                multiple_assign_var20=it_1074;
                name_1075=(char*)come_increment_ref_count(multiple_assign_var20->v1);
                field_type_1076=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                field_type_1076->mHeap) {
                    char source2_1077[1024];
                    memset(&source2_1077, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1077,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1075,name_1075,name_1075);
                    buffer_append_str(source_1064,source2_1077);
                }
                else if(                list$1sNode$ph_length(field_type_1076->mArrayNum)>0) {
                    char source2_1078[1024];
                    memset(&source2_1078, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1078,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1075,name_1075,name_1075);
                    buffer_append_str(source_1064,source2_1078);
                }
                else {
                    char source2_1079[1024];
                    memset(&source2_1079, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1079,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1075,name_1075);
                    buffer_append_str(source_1064,source2_1079);
                }
                (name_1075 = come_decrement_ref_count(name_1075, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1076,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1073,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        user_real_fun_name_1080=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1081=((struct sFun*)(__right_value896=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_1080)));
        /*c*/ come_call_finalizer3(__right_value896,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        user_cloner_1081) {
            char source2_1082[1024];
            memset(&source2_1082, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1082,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1080);
            buffer_append_str(source_1064,source2_1082);
        }
        buffer_append_format(source_1064,"return result;");
        buffer_append_char(source_1064,125);
        p_1083=info->p;
        sline_1084=info->sline;
        sname_1085=(char*)come_increment_ref_count(info->sname);
        source3_1086=(struct buffer*)come_increment_ref_count(info->source);
        head_1087=info->head;
        __dec_obj245=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1064);
        /*b*/ come_call_finalizer3(__dec_obj245,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj246=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1052));
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1088=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1089=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1090=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1052, "05function.c", 3441, "char*"));
        self_type_1091=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1091->mHeap=(_Bool)0;
        param_types_1092=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___1093[0]=self_type_1091,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3444, "struct list$1sType$ph")),1,__list_values11___1093)));
        param_names_1095=(struct list$1char$ph*)come_increment_ref_count((__list_values12___1094[0]=((char*)(__right_value904=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3445, "struct list$1char$ph")),1,__list_values12___1094)));
        (__right_value904 = come_decrement_ref_count(__right_value904, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1096=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3446, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1096,((void*)0));
        result_type_1089->mStatic=(_Bool)0;
        result_type_1089->mUniq=(_Bool)0;
        result_type_1089->mInline=(_Bool)0;
        fun2_1097=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value910=__builtin_string(name_1090)))));
        (__right_value909 = come_decrement_ref_count(__right_value909, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value910 = come_decrement_ref_count(__right_value910, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1097==((void*)0)||fun2_1097->mExternal) {
            fun_1098=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3456, "struct sFun*")),(char*)come_increment_ref_count(name_1090),(struct sType*)come_increment_ref_count(result_type_1089),(struct list$1sType$ph*)come_increment_ref_count(param_types_1092),(struct list$1char$ph*)come_increment_ref_count(param_names_1095),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1096),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1088),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1090)),(struct sFun*)come_increment_ref_count(fun_1098));
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3464, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value918=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3464, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1098),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1099=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value918,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1100=node_compile(node_1099,info);
            if(            !Value_1100) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1051=fun_1098;
            /*c*/ come_call_finalizer3(fun_1098,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1099) ? node_1099 = come_decrement_ref_count(node_1099, ((struct sNode*)node_1099)->finalize, ((struct sNode*)node_1099)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1051=fun2_1097;
        }
        __dec_obj247=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1085);
        __dec_obj247 = come_decrement_ref_count(__dec_obj247, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1084;
        __dec_obj248=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1086);
        /*b*/ come_call_finalizer3(__dec_obj248,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1083;
        info->head=head_1087;
        info->sline=sline_1084;
        /*c*/ come_call_finalizer3(source_1064,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (user_real_fun_name_1080 = come_decrement_ref_count(user_real_fun_name_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1085 = come_decrement_ref_count(sname_1085, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1086,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1088,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1089,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1090 = come_decrement_ref_count(name_1090, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1091,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1092,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1095,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1096,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1097,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1050;
    __dec_obj249=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1047);
    __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj250=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1048);
    __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1049;
    __result_obj__391 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value921=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3492, "struct tuple2$2sFun$pchar$ph")),cloner_1051,(char*)come_increment_ref_count(real_fun_name_1052)))));
    (last_code_1047 = come_decrement_ref_count(last_code_1047, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1048 = come_decrement_ref_count(last_code2_1048, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1052 = come_decrement_ref_count(real_fun_name_1052, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1053,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1055 = come_decrement_ref_count(fun_name2_1055, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value921,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__391,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__391;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1135;
char* __dec_obj259;
char* last_code2_1136;
char* __dec_obj260;
_Bool comma_instead_of_semicolon_1137;
struct sClass* current_stack_frame_struct_1138;
struct sFun* to_string_fun_1139;
void* __right_value954 = (void*)0;
char* real_fun_name_1140;
void* __right_value955 = (void*)0;
struct sType* type_before_1141;
void* __right_value956 = (void*)0;
struct sType* type2_1142;
struct sClass* klass_1143;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
char* none_generics_name_1144;
void* __right_value959 = (void*)0;
char* generics_fun_name_1145;
void* __right_value960 = (void*)0;
struct sGenericsFun* generics_fun_1146;
void* __right_value961 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var22 = (void*)0;
char* name_1147=0;
_Bool err_1148=0;
void* __right_value962 = (void*)0;
int i_1149;
void* __right_value963 = (void*)0;
char* new_fun_name_1150;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
char* __dec_obj261;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
struct buffer* source_1151;
int i_1152;
void* __right_value969 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1153;
struct tuple2$2char$phsType$ph* it_1154;
struct tuple2$2char$phsType$ph* multiple_assign_var23 = (void*)0;
char* name_1155=0;
struct sType* field_type_1156=0;
char* p_1160;
int sline_1161;
char* sname_1162;
struct buffer* source3_1163;
char* head_1164;
struct buffer* __dec_obj262;
void* __right_value970 = (void*)0;
char* __dec_obj263;
void* __right_value971 = (void*)0;
struct sBlock* block_1165;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sType* result_type_1166;
void* __right_value975 = (void*)0;
char* name_1167;
void* __right_value976 = (void*)0;
struct sType* self_type_1168;
void* __right_value977 = (void*)0;
struct sType* __dec_obj264;
struct sType* __list_values15___1170[1];
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct list$1sType$ph* param_types_1169;
void* __right_value980 = (void*)0;
char* __list_values16___1171[1];
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct list$1char$ph* param_names_1172;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct list$1char$ph* param_default_parametors_1173;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct sFun* fun2_1174;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sFun* fun_1175;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value995 = (void*)0;
struct sNode* node_1176;
_Bool Value_1177;
char* __dec_obj265;
struct buffer* __dec_obj266;
char* __dec_obj267;
char* __dec_obj268;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__393;
memset(&i_1149, 0, sizeof(int));
    last_code_1135=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj259=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1136=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj260=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj260 = come_decrement_ref_count(__dec_obj260, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1137=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1138=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun_1139=((void*)0);
    real_fun_name_1140=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before_1141=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1142=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1142;
    klass_1143=type->mClass;
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        to_string_fun_1139=((struct sFun*)(__right_value957=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1140)));
        /*c*/ come_call_finalizer3(__right_value957,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        to_string_fun_1139==((void*)0)) {
            none_generics_name_1144=(char*)come_increment_ref_count(get_none_generics_name(type2_1142->mClass->mName));
            generics_fun_name_1145=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1144,fun_name));
            generics_fun_1146=((struct sGenericsFun*)(__right_value960=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_1145)));
            /*c*/ come_call_finalizer3(__right_value960,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1146) {
                multiple_assign_var22=((struct tuple2$2char$phbool$*)(__right_value961=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1140),generics_fun_1146,type,info)));
                name_1147=(char*)come_increment_ref_count(multiple_assign_var22->v1);
                err_1148=multiple_assign_var22->v2;
                /*c*/ come_call_finalizer3(__right_value961,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1148) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun_1139=((struct sFun*)(__right_value962=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1147)));
                /*c*/ come_call_finalizer3(__right_value962,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1147 = come_decrement_ref_count(name_1147, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1144 = come_decrement_ref_count(none_generics_name_1144, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1145 = come_decrement_ref_count(generics_fun_name_1145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1149=128-1;        i_1149>=1;        i_1149--        ){
            new_fun_name_1150=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1140,i_1149));
            to_string_fun_1139=((struct sFun*)(__right_value964=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1150)));
            /*c*/ come_call_finalizer3(__right_value964,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            to_string_fun_1139) {
                __dec_obj261=real_fun_name_1140,
                real_fun_name_1140=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1150));
                __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1150 = come_decrement_ref_count(new_fun_name_1150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1150 = come_decrement_ref_count(new_fun_name_1150, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        to_string_fun_1139==((void*)0)) {
            to_string_fun_1139=((struct sFun*)(__right_value966=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1140)));
            /*c*/ come_call_finalizer3(__right_value966,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    to_string_fun_1139==((void*)0)&&type->mPointerNum>0&&!klass_1143->mNumber) {
        source_1151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3700, "struct buffer*"))));
        buffer_append_str(source_1151,"{\n");
        buffer_append_str(source_1151,"var result = new buffer();\n");
        buffer_append_format(source_1151,"result.append_str(\"%s {\");\n",klass_1143->mName);
        i_1152=0;
        klass_1143=((struct sClass*)(__right_value969=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1143->mName)));
        /*c*/ come_call_finalizer3(__right_value969,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1153=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1143->mFields)),it_1154=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1153));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1153));        it_1154=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1153))        ){
            multiple_assign_var23=it_1154;
            name_1155=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            field_type_1156=(struct sType*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            string_operator_equals(field_type_1156->mClass->mName,"lambda")) {
                char source2_1157[1024];
                memset(&source2_1157, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1157,1024,"result.append_str(\"%s:\");\n",name_1155);
                buffer_append_str(source_1151,source2_1157);
                snprintf(source2_1157,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source_1151,source2_1157);
            }
            else if(            i_1152==list$1tuple2$2char$phsType$ph$ph_length(klass_1143->mFields)-1) {
                char source2_1158[1024];
                memset(&source2_1158, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1158,1024,"result.append_str(\"%s:\");\n",name_1155);
                buffer_append_str(source_1151,source2_1158);
                snprintf(source2_1158,1024,"result.append_str(self.%s.to_string());\n",name_1155);
                buffer_append_str(source_1151,source2_1158);
            }
            else {
                char source2_1159[1024];
                memset(&source2_1159, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1159,1024,"result.append_str(\"%s:\");\n",name_1155);
                buffer_append_str(source_1151,source2_1159);
                snprintf(source2_1159,1024,"result.append_str(self.%s.to_string());\n",name_1155);
                buffer_append_str(source_1151,source2_1159);
                snprintf(source2_1159,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1151,source2_1159);
            }
            i_1152++;
            (name_1155 = come_decrement_ref_count(name_1155, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1156,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1153,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(source_1151,"result.append_str(\"}\");\n");
        buffer_append_format(source_1151,"return result.to_string();\n");
        buffer_append_char(source_1151,125);
        p_1160=info->p;
        sline_1161=info->sline;
        sname_1162=(char*)come_increment_ref_count(info->sname);
        source3_1163=(struct buffer*)come_increment_ref_count(info->source);
        head_1164=info->head;
        __dec_obj262=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1151);
        /*b*/ come_call_finalizer3(__dec_obj262,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj263=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1140));
        __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1165=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1166=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3769, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1166->mHeap=(_Bool)1;
        name_1167=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1140, "05function.c", 3771, "char*"));
        self_type_1168=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj264=self_type_1168,
        self_type_1168=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        /*b*/ come_call_finalizer3(__dec_obj264,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self_type_1168->mHeap=(_Bool)0;
        param_types_1169=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___1170[0]=self_type_1168,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3776, "struct list$1sType$ph")),1,__list_values15___1170)));
        param_names_1172=(struct list$1char$ph*)come_increment_ref_count((__list_values16___1171[0]=((char*)(__right_value980=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3777, "struct list$1char$ph")),1,__list_values16___1171)));
        (__right_value980 = come_decrement_ref_count(__right_value980, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1173=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3778, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1173,((void*)0));
        result_type_1166->mStatic=(_Bool)0;
        result_type_1166->mUniq=(_Bool)0;
        result_type_1166->mInline=(_Bool)0;
        fun2_1174=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value986=__builtin_string(name_1167)))));
        (__right_value985 = come_decrement_ref_count(__right_value985, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value986 = come_decrement_ref_count(__right_value986, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1174==((void*)0)||fun2_1174->mExternal) {
            fun_1175=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3787, "struct sFun*")),(char*)come_increment_ref_count(name_1167),(struct sType*)come_increment_ref_count(result_type_1166),(struct list$1sType$ph*)come_increment_ref_count(param_types_1169),(struct list$1char$ph*)come_increment_ref_count(param_names_1172),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1173),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1165),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1167)),(struct sFun*)come_increment_ref_count(fun_1175));
            to_string_fun_1139=fun_1175;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3797, "struct sNode");
            _inf_obj_value16=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value994=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3797, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1175),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sFunNode_finalize;
            _inf_value16->clone=(void*)sFunNode_clone;
            _inf_value16->compile=(void*)sFunNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sFunNode_kind;
            node_1176=(struct sNode*)come_increment_ref_count(_inf_value16);
            /*c*/ come_call_finalizer3(__right_value994,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1177=node_compile(node_1176,info);
            if(            !Value_1177) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1175,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1176) ? node_1176 = come_decrement_ref_count(node_1176, ((struct sNode*)node_1176)->finalize, ((struct sNode*)node_1176)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            to_string_fun_1139=fun2_1174;
        }
        __dec_obj265=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1162);
        __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1161;
        __dec_obj266=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1163);
        /*b*/ come_call_finalizer3(__dec_obj266,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1160;
        info->head=head_1164;
        info->sline=sline_1161;
        /*c*/ come_call_finalizer3(source_1151,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1162 = come_decrement_ref_count(sname_1162, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1163,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1165,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1166,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1167 = come_decrement_ref_count(name_1167, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1168,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1169,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1172,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1173,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1174,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1138;
    __dec_obj267=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1135);
    __dec_obj267 = come_decrement_ref_count(__dec_obj267, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj268=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1136);
    __dec_obj268 = come_decrement_ref_count(__dec_obj268, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1137;
    __result_obj__393 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value997=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3823, "struct tuple2$2sFun$pchar$ph")),to_string_fun_1139,(char*)come_increment_ref_count(real_fun_name_1140)))));
    (last_code_1135 = come_decrement_ref_count(last_code_1135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1136 = come_decrement_ref_count(last_code2_1136, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1140 = come_decrement_ref_count(real_fun_name_1140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_1141,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_1142,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value997,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__393,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__393;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1178;
char* __dec_obj269;
char* last_code2_1179;
char* __dec_obj270;
_Bool comma_instead_of_semicolon_1180;
struct sClass* current_stack_frame_struct_1181;
struct sFun* get_hash_key_fun_1182;
void* __right_value998 = (void*)0;
char* real_fun_name_1183;
void* __right_value999 = (void*)0;
struct sType* type2_1184;
struct sClass* klass_1185;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
char* none_generics_name_1186;
void* __right_value1002 = (void*)0;
char* generics_fun_name_1187;
void* __right_value1003 = (void*)0;
struct sGenericsFun* generics_fun_1188;
void* __right_value1004 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var24 = (void*)0;
char* name_1189=0;
_Bool err_1190=0;
void* __right_value1005 = (void*)0;
int i_1191;
void* __right_value1006 = (void*)0;
char* new_fun_name_1192;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
char* __dec_obj271;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
struct buffer* source_1193;
int i_1194;
void* __right_value1012 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1195;
struct tuple2$2char$phsType$ph* it_1196;
struct tuple2$2char$phsType$ph* multiple_assign_var25 = (void*)0;
char* name_1197=0;
struct sType* field_type_1198=0;
char* p_1200;
int sline_1201;
char* sname_1202;
struct buffer* source3_1203;
char* head_1204;
struct buffer* __dec_obj272;
void* __right_value1013 = (void*)0;
char* __dec_obj273;
void* __right_value1014 = (void*)0;
struct sBlock* block_1205;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
struct sType* result_type_1206;
void* __right_value1018 = (void*)0;
char* name_1207;
void* __right_value1019 = (void*)0;
struct sType* self_type_1208;
struct sType* __list_values17___1210[1];
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct list$1sType$ph* param_types_1209;
void* __right_value1022 = (void*)0;
char* __list_values18___1211[1];
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct list$1char$ph* param_names_1212;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct list$1char$ph* param_default_parametors_1213;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct sFun* fun2_1214;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct sFun* fun_1215;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1037 = (void*)0;
struct sNode* node_1216;
_Bool Value_1217;
char* __dec_obj274;
struct buffer* __dec_obj275;
char* __dec_obj276;
char* __dec_obj277;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__394;
memset(&i_1191, 0, sizeof(int));
    last_code_1178=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj269=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1179=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj270=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1180=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1181=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1182=((void*)0);
    real_fun_name_1183=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1184=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1184;
    klass_1185=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1182=((struct sFun*)(__right_value1000=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1183)));
        /*c*/ come_call_finalizer3(__right_value1000,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        get_hash_key_fun_1182==((void*)0)) {
            none_generics_name_1186=(char*)come_increment_ref_count(get_none_generics_name(type2_1184->mClass->mName));
            generics_fun_name_1187=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1186,fun_name));
            generics_fun_1188=((struct sGenericsFun*)(__right_value1003=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_1187)));
            /*c*/ come_call_finalizer3(__right_value1003,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1188) {
                multiple_assign_var24=((struct tuple2$2char$phbool$*)(__right_value1004=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1183),generics_fun_1188,type,info)));
                name_1189=(char*)come_increment_ref_count(multiple_assign_var24->v1);
                err_1190=multiple_assign_var24->v2;
                /*c*/ come_call_finalizer3(__right_value1004,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1190) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1182=((struct sFun*)(__right_value1005=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1189)));
                /*c*/ come_call_finalizer3(__right_value1005,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1189 = come_decrement_ref_count(name_1189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1186 = come_decrement_ref_count(none_generics_name_1186, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1187 = come_decrement_ref_count(generics_fun_name_1187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1191=128-1;        i_1191>=1;        i_1191--        ){
            new_fun_name_1192=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1183,i_1191));
            get_hash_key_fun_1182=((struct sFun*)(__right_value1007=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1192)));
            /*c*/ come_call_finalizer3(__right_value1007,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            get_hash_key_fun_1182) {
                __dec_obj271=real_fun_name_1183,
                real_fun_name_1183=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1192));
                __dec_obj271 = come_decrement_ref_count(__dec_obj271, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1192 = come_decrement_ref_count(new_fun_name_1192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1192 = come_decrement_ref_count(new_fun_name_1192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1182==((void*)0)) {
            get_hash_key_fun_1182=((struct sFun*)(__right_value1009=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1183)));
            /*c*/ come_call_finalizer3(__right_value1009,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    get_hash_key_fun_1182==((void*)0)&&type->mPointerNum>0&&!klass_1185->mNumber&&!klass_1185->mProtocol) {
        source_1193=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3893, "struct buffer*"))));
        buffer_append_str(source_1193,"{\n");
        buffer_append_str(source_1193,"unsigned int result = 0;\n");
        i_1194=0;
        klass_1185=((struct sClass*)(__right_value1012=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1185->mName)));
        /*c*/ come_call_finalizer3(__right_value1012,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1195=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1185->mFields)),it_1196=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1195));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1195));        it_1196=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1195))        ){
            multiple_assign_var25=it_1196;
            name_1197=(char*)come_increment_ref_count(multiple_assign_var25->v1);
            field_type_1198=(struct sType*)come_increment_ref_count(multiple_assign_var25->v2);
            char source2_1199[1024];
            memset(&source2_1199, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1199,1024,"result += ((int)self.%s).get_hash_key();\n",name_1197);
            buffer_append_str(source_1193,source2_1199);
            i_1194++;
            (name_1197 = come_decrement_ref_count(name_1197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1198,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1195,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_format(source_1193,"return result;\n");
        buffer_append_char(source_1193,125);
        p_1200=info->p;
        sline_1201=info->sline;
        sname_1202=(char*)come_increment_ref_count(info->sname);
        source3_1203=(struct buffer*)come_increment_ref_count(info->source);
        head_1204=info->head;
        __dec_obj272=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1193);
        /*b*/ come_call_finalizer3(__dec_obj272,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj273=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1183));
        __dec_obj273 = come_decrement_ref_count(__dec_obj273, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1205=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1206=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3930, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1206->mUnsigned=(_Bool)1;
        name_1207=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1183, "05function.c", 3932, "char*"));
        self_type_1208=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1208->mHeap=(_Bool)0;
        param_types_1209=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___1210[0]=self_type_1208,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3935, "struct list$1sType$ph")),1,__list_values17___1210)));
        param_names_1212=(struct list$1char$ph*)come_increment_ref_count((__list_values18___1211[0]=((char*)(__right_value1022=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3936, "struct list$1char$ph")),1,__list_values18___1211)));
        (__right_value1022 = come_decrement_ref_count(__right_value1022, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1213=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3937, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1213,((void*)0));
        result_type_1206->mStatic=(_Bool)0;
        result_type_1206->mUniq=(_Bool)0;
        result_type_1206->mInline=(_Bool)0;
        fun2_1214=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1028=__builtin_string(name_1207)))));
        (__right_value1027 = come_decrement_ref_count(__right_value1027, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1028 = come_decrement_ref_count(__right_value1028, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1214==((void*)0)||fun2_1214->mExternal) {
            fun_1215=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3946, "struct sFun*")),(char*)come_increment_ref_count(name_1207),(struct sType*)come_increment_ref_count(result_type_1206),(struct list$1sType$ph*)come_increment_ref_count(param_types_1209),(struct list$1char$ph*)come_increment_ref_count(param_names_1212),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1213),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1205),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1207)),(struct sFun*)come_increment_ref_count(fun_1215));
            get_hash_key_fun_1182=fun_1215;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3956, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1036=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3956, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1215),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1216=(struct sNode*)come_increment_ref_count(_inf_value17);
            /*c*/ come_call_finalizer3(__right_value1036,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1217=node_compile(node_1216,info);
            if(            !Value_1217) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1215,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1216) ? node_1216 = come_decrement_ref_count(node_1216, ((struct sNode*)node_1216)->finalize, ((struct sNode*)node_1216)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1182=fun2_1214;
        }
        __dec_obj274=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1202);
        __dec_obj274 = come_decrement_ref_count(__dec_obj274, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1201;
        __dec_obj275=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1203);
        /*b*/ come_call_finalizer3(__dec_obj275,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1200;
        info->head=head_1204;
        info->sline=sline_1201;
        /*c*/ come_call_finalizer3(source_1193,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1202 = come_decrement_ref_count(sname_1202, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1203,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1205,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1206,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1207 = come_decrement_ref_count(name_1207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1208,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1209,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1212,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1213,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1214,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1181;
    __dec_obj276=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1178);
    __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj277=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1179);
    __dec_obj277 = come_decrement_ref_count(__dec_obj277, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1180;
    __result_obj__394 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1039=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3982, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_1182,(char*)come_increment_ref_count(real_fun_name_1183)))));
    (last_code_1178 = come_decrement_ref_count(last_code_1178, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1179 = come_decrement_ref_count(last_code2_1179, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1183 = come_decrement_ref_count(real_fun_name_1183, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1184,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value1039,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__394,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__394;
}

