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
static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value187 = (void*)0;
struct sSemicolonNode* __result_obj__163;
    ((struct sNodeBase*)(__right_value187=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value187,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__163 = (struct sSemicolonNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__163,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__163;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value188 = (void*)0;
char* __result_obj__164;
    __result_obj__164 = (char*)come_increment_ref_count(((char*)(__right_value188=__builtin_string("sSemicolonNode"))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__164 = come_decrement_ref_count(__result_obj__164, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__164;
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
void* __right_value189 = (void*)0;
struct sLambdaNode* __result_obj__165;
    ((struct sNodeBase*)(__right_value189=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value189,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mFun=fun;
    __result_obj__165 = (struct sLambdaNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__165,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__165;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value190 = (void*)0;
char* __result_obj__166;
    __result_obj__166 = (char*)come_increment_ref_count(((char*)(__right_value190=__builtin_string("sLambdaNode"))));
    (__right_value190 = come_decrement_ref_count(__right_value190, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__166 = come_decrement_ref_count(__result_obj__166, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__166;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_239;
int block_level_240;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct CVALUE* come_value_241;
void* __right_value193 = (void*)0;
char* __dec_obj16;
void* __right_value232 = (void*)0;
struct sType* __dec_obj41;
_Bool __result_obj__183;
    come_fun_239=info->come_fun;
    info->come_fun=self->mFun;
    block_level_240=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_240;
    come_value_241=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj16=come_value_241->c_value,
    come_value_241->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj41=come_value_241->type,
    come_value_241->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_241->var=((void*)0);
    add_come_last_code(info,"%s",come_value_241->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_241));
    info->come_fun=come_fun_239;
    __result_obj__183 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_241,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__167;
void* __right_value194 = (void*)0;
struct sType* result_246;
void* __right_value195 = (void*)0;
struct sType* __dec_obj17;
void* __right_value196 = (void*)0;
struct sType* __dec_obj18;
void* __right_value204 = (void*)0;
struct list$1sType$ph* __dec_obj22;
void* __right_value205 = (void*)0;
struct sType* __dec_obj23;
void* __right_value206 = (void*)0;
struct sType* __dec_obj24;
void* __right_value208 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value209 = (void*)0;
struct sNode* __dec_obj26;
void* __right_value210 = (void*)0;
char* __dec_obj27;
void* __right_value211 = (void*)0;
char* __dec_obj28;
void* __right_value212 = (void*)0;
char* __dec_obj29;
void* __right_value220 = (void*)0;
struct list$1sNode$ph* __dec_obj33;
void* __right_value221 = (void*)0;
char* __dec_obj34;
void* __right_value222 = (void*)0;
struct list$1sType$ph* __dec_obj35;
void* __right_value230 = (void*)0;
struct list$1char$ph* __dec_obj39;
void* __right_value231 = (void*)0;
struct sType* __dec_obj40;
struct sType* __result_obj__181;
    if(    self==(void*)0) {
        __result_obj__167 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__167,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__167;
    }
    result_246=(struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_246->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj17=result_246->mOriginalLoadVarType,
        result_246->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(sType_clone(self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj18=result_246->mChannelType,
        result_246->mChannelType=(struct sType*)come_increment_ref_count(sType_clone(self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj22=result_246->mGenericsTypes,
        result_246->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj22,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj23=result_246->mNoSolvedGenericsType,
        result_246->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(sType_clone(self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_246->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj24=result_246->mAnyOriginalType,
        result_246->mAnyOriginalType=(struct sType*)come_increment_ref_count(sType_clone(self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj25=result_246->mSizeNum,
        result_246->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj26=result_246->mAlignas,
        result_246->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        (__dec_obj26 ? __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj27=result_246->mTupleName,
        result_246->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj28=result_246->mAttribute,
        result_246->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_246->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_246->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_246->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_246->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_246->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_246->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_246->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_246->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_246->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_246->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_246->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_246->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_246->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_246->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_246->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_246->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_246->mDefferRightValue=self->mDefferRightValue;
    }
    if(    self!=((void*)0)) {
        result_246->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_246->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_246->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_246->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_246->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_246->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_246->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj29=result_246->mAsmName,
        result_246->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 39, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_246->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_246->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_246->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj33=result_246->mArrayNum,
        result_246->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj33,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_246->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_246->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_246->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_246->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_246->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj34=result_246->mOriginalTypeName,
        result_246->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 49, "char*"));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_246->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_246->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_246->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_246->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj35=result_246->mParamTypes,
        result_246->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj39=result_246->mParamNames,
        result_246->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj39,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj40=result_246->mResultType,
        result_246->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj40,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_246->mVarArgs=self->mVarArgs;
    }
    __result_obj__181 = (struct sType*)come_increment_ref_count(result_246);
    /*c*/ come_call_finalizer3(result_246,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__181,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__181;
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

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__168;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1sType$ph* result_247;
struct list_item$1sType$ph* it_248;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct list$1sType$ph* __result_obj__171;
    if(    self==((void*)0)) {
        __result_obj__168 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__168,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__168;
    }
    result_247=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1022, "struct list$1sType$ph*"))));
    it_248=self->head;
    while(it_248!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_247,(struct sType*)come_increment_ref_count(sType_clone(it_248->item)));
        }
        else {
            list$1sType$ph_add(result_247,(struct sType*)come_increment_ref_count(sType_clone(it_248->item)));
        }
        it_248=it_248->next;
    }
    __result_obj__171 = (struct list$1sType$ph*)come_increment_ref_count(result_247);
    /*c*/ come_call_finalizer3(result_247,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value199 = (void*)0;
struct list_item$1sType$ph* litem_249;
struct sType* __dec_obj19;
void* __right_value200 = (void*)0;
struct list_item$1sType$ph* litem_250;
struct sType* __dec_obj20;
void* __right_value201 = (void*)0;
struct list_item$1sType$ph* litem_251;
struct sType* __dec_obj21;
struct list$1sType$ph* __result_obj__170;
    if(    self->len==0) {
        litem_249=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value199=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1041, "struct list_item$1sType$ph*"))));
        litem_249->prev=((void*)0);
        litem_249->next=((void*)0);
        __dec_obj19=litem_249->item,
        litem_249->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_249;
        self->head=litem_249;
    }
    else if(    self->len==1) {
        litem_250=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value200=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1051, "struct list_item$1sType$ph*"))));
        litem_250->prev=self->head;
        litem_250->next=((void*)0);
        __dec_obj20=litem_250->item,
        litem_250->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_250;
        self->head->next=litem_250;
    }
    else {
        litem_251=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value201=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1061, "struct list_item$1sType$ph*"))));
        litem_251->prev=self->tail;
        litem_251->next=((void*)0);
        __dec_obj21=litem_251->item,
        litem_251->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_251;
        self->tail=litem_251;
    }
    self->len++;
    __result_obj__170 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__170;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_252;
struct list_item$1sType$ph* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        /*c*/ come_call_finalizer3(prev_it_253,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__172;
void* __right_value207 = (void*)0;
struct sNode* result_254;
struct sNode* __result_obj__173;
    if(    self==(void*)0) {
        __result_obj__172 = (void*)come_increment_ref_count((void*)0);
        ((__result_obj__172) ? __result_obj__172 = come_decrement_ref_count(__result_obj__172, ((struct sNode*)__result_obj__172)->finalize, ((struct sNode*)__result_obj__172)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__172;
    }
    result_254=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc_v2(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_254->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_254->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_254->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_254->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_254->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_254->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_254->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_254->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_254->kind=self->kind;
    }
    __result_obj__173 = (struct sNode*)come_increment_ref_count(result_254);
    ((result_254) ? result_254 = come_decrement_ref_count(result_254, ((struct sNode*)result_254)->finalize, ((struct sNode*)result_254)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__173) ? __result_obj__173 = come_decrement_ref_count(__result_obj__173, ((struct sNode*)__result_obj__173)->finalize, ((struct sNode*)__result_obj__173)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__173;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__174;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sNode$ph* result_255;
struct list_item$1sNode$ph* it_256;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1sNode$ph* __result_obj__177;
    if(    self==((void*)0)) {
        __result_obj__174 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__174,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__174;
    }
    result_255=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc_v2(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1022, "struct list$1sNode$ph*"))));
    it_256=self->head;
    while(it_256!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_255,(struct sNode*)come_increment_ref_count(sNode_clone(it_256->item)));
        }
        else {
            list$1sNode$ph_add(result_255,(struct sNode*)come_increment_ref_count(sNode_clone(it_256->item)));
        }
        it_256=it_256->next;
    }
    __result_obj__177 = (struct list$1sNode$ph*)come_increment_ref_count(result_255);
    /*c*/ come_call_finalizer3(result_255,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
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
void* __right_value215 = (void*)0;
struct list_item$1sNode$ph* litem_257;
struct sNode* __dec_obj30;
void* __right_value216 = (void*)0;
struct list_item$1sNode$ph* litem_258;
struct sNode* __dec_obj31;
void* __right_value217 = (void*)0;
struct list_item$1sNode$ph* litem_259;
struct sNode* __dec_obj32;
struct list$1sNode$ph* __result_obj__176;
    if(    self->len==0) {
        litem_257=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value215=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1041, "struct list_item$1sNode$ph*"))));
        litem_257->prev=((void*)0);
        litem_257->next=((void*)0);
        __dec_obj30=litem_257->item,
        litem_257->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_257;
        self->head=litem_257;
    }
    else if(    self->len==1) {
        litem_258=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value216=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1051, "struct list_item$1sNode$ph*"))));
        litem_258->prev=self->head;
        litem_258->next=((void*)0);
        __dec_obj31=litem_258->item,
        litem_258->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_258;
        self->head->next=litem_258;
    }
    else {
        litem_259=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value217=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1061, "struct list_item$1sNode$ph*"))));
        litem_259->prev=self->tail;
        litem_259->next=((void*)0);
        __dec_obj32=litem_259->item,
        litem_259->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_259;
        self->tail=litem_259;
    }
    self->len++;
    __result_obj__176 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__176;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_260;
struct list_item$1sNode$ph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        /*c*/ come_call_finalizer3(prev_it_261,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1char$ph* result_262;
struct list_item$1char$ph* it_263;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct list$1char$ph* __result_obj__180;
    if(    self==((void*)0)) {
        __result_obj__178 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__178;
    }
    result_262=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1022, "struct list$1char$ph*"))));
    it_263=self->head;
    while(it_263!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_262,(char*)come_increment_ref_count((char*)come_memdup(it_263->item, "./comelang.h", 1027, "char*")));
        }
        else {
            list$1char$ph_add(result_262,(char*)come_increment_ref_count((char*)come_memdup(it_263->item, "./comelang.h", 1030, "char*")));
        }
        it_263=it_263->next;
    }
    __result_obj__180 = (struct list$1char$ph*)come_increment_ref_count(result_262);
    /*c*/ come_call_finalizer3(result_262,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value225 = (void*)0;
struct list_item$1char$ph* litem_264;
char* __dec_obj36;
void* __right_value226 = (void*)0;
struct list_item$1char$ph* litem_265;
char* __dec_obj37;
void* __right_value227 = (void*)0;
struct list_item$1char$ph* litem_266;
char* __dec_obj38;
struct list$1char$ph* __result_obj__179;
    if(    self->len==0) {
        litem_264=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value225=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1041, "struct list_item$1char$ph*"))));
        litem_264->prev=((void*)0);
        litem_264->next=((void*)0);
        __dec_obj36=litem_264->item,
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_264;
        self->head=litem_264;
    }
    else if(    self->len==1) {
        litem_265=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value226=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1051, "struct list_item$1char$ph*"))));
        litem_265->prev=self->head;
        litem_265->next=((void*)0);
        __dec_obj37=litem_265->item,
        litem_265->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_265;
        self->head->next=litem_265;
    }
    else {
        litem_266=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value227=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1061, "struct list_item$1char$ph*"))));
        litem_266->prev=self->tail;
        litem_266->next=((void*)0);
        __dec_obj38=litem_266->item,
        litem_266->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_266;
        self->tail=litem_266;
    }
    self->len++;
    __result_obj__179 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__179;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_267;
struct list_item$1char$ph* prev_it_268;
    it_267=self->head;
    while(it_267!=((void*)0)) {
        prev_it_268=it_267;
        it_267=it_267->next;
        /*c*/ come_call_finalizer3(prev_it_268,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value233 = (void*)0;
struct list_item$1CVALUE$ph* litem_269;
struct CVALUE* __dec_obj42;
void* __right_value234 = (void*)0;
struct list_item$1CVALUE$ph* litem_270;
struct CVALUE* __dec_obj43;
void* __right_value235 = (void*)0;
struct list_item$1CVALUE$ph* litem_271;
struct CVALUE* __dec_obj44;
struct list$1CVALUE$ph* __result_obj__182;
    if(    self->len==0) {
        litem_269=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value233=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1111, "struct list_item$1CVALUE$ph*"))));
        litem_269->prev=((void*)0);
        litem_269->next=((void*)0);
        __dec_obj42=litem_269->item,
        litem_269->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj42,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_269;
        self->head=litem_269;
    }
    else if(    self->len==1) {
        litem_270=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value234=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1121, "struct list_item$1CVALUE$ph*"))));
        litem_270->prev=self->head;
        litem_270->next=((void*)0);
        __dec_obj43=litem_270->item,
        litem_270->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj43,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_270;
        self->head->next=litem_270;
    }
    else {
        litem_271=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value235=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1131, "struct list_item$1CVALUE$ph*"))));
        litem_271->prev=self->tail;
        litem_271->next=((void*)0);
        __dec_obj44=litem_271->item,
        litem_271->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_271;
        self->tail=litem_271;
    }
    self->len++;
    __result_obj__182 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
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
void* __right_value236 = (void*)0;
struct sFun* __dec_obj45;
struct sFunNode* __result_obj__184;
    ((struct sNodeBase*)(__right_value236=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value236,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj45=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    /*b*/ come_call_finalizer3(__dec_obj45,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__184 = (struct sFunNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__184,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value237 = (void*)0;
char* __result_obj__185;
    __result_obj__185 = (char*)come_increment_ref_count(((char*)(__right_value237=__builtin_string("sFunNode"))));
    (__right_value237 = come_decrement_ref_count(__right_value237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__185 = come_decrement_ref_count(__result_obj__185, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__185;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_272;
int block_level_273;
void* __right_value238 = (void*)0;
    come_fun_272=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_273=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_273;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value238=xsprintf("come_heap_final();\n"))));
            (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_272;
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
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sBlock* result_274;
int sline_top_275;
int block_level_276;
char* p_saved_277;
int sline_saved_278;
char* sname_saved_279;
void* __right_value241 = (void*)0;
char* __dec_obj46;
char* __dec_obj47;
struct map$2char$phchar$ph* __dec_obj48;
char* p_282;
int sline_283;
void* __right_value242 = (void*)0;
char* sname_284;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
char* module_name_285;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct list$1char$ph* params_286;
void* __right_value247 = (void*)0;
char* word_287;
void* __right_value248 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_288=0;
char* Err_289=0;
void* __right_value249 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_290=0;
char* Err_291=0;
void* __right_value250 = (void*)0;
char* __dec_obj49;
void* __right_value251 = (void*)0;
char* __dec_obj50;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
_Bool _if_conditional1;
void* __right_value255 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_298=0;
char* Err_299=0;
struct sBlock* __result_obj__194;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sClassModule* module_300;
void* __right_value259 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_301=0;
char* Err_302=0;
void* __right_value260 = (void*)0;
void* __right_value266 = (void*)0;
struct map$2char$phchar$ph* __dec_obj52;
int i_306;
struct list$1char$ph* o2_saved_307;
char* it_310;
void* __right_value267 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
char* __dec_obj53;
void* __right_value276 = (void*)0;
struct sNode* node_356;
void* __right_value277 = (void*)0;
char* __dec_obj54;
void* __right_value278 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_357=0;
char* Err_358=0;
_Bool omit_semicolon_362;
void* __right_value282 = (void*)0;
char* __dec_obj58;
char* head_377;
void* __right_value283 = (void*)0;
struct sNode* value_378;
char* tail_379;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct sNode* node_381;
void* __right_value287 = (void*)0;
char* __dec_obj60;
struct sNode* node_382;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value292 = (void*)0;
struct sNode* __dec_obj62;
void* __right_value293 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value294 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_384=0;
char* Err_385=0;
_Bool omit_semicolon_386;
char* p_387;
char* head_388;
void* __right_value295 = (void*)0;
char* source_389;
void* __right_value296 = (void*)0;
struct sNode* node_390;
void* __right_value297 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_391=0;
char* Err_392=0;
struct sBlock* __result_obj__228;
node_382 = (void*)0;
    result_274=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "05function.c", 117, "struct sBlock*")),info));
    sline_top_275=info->sline_top;
    info->sline_top=info->sline;
    block_level_276=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_277=((void*)0);
        sline_saved_278=0;
        sname_saved_279=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_277) {
                if(                *info->p==0) {
                    info->p=p_saved_277;
                    info->sline=sline_saved_278;
                    __dec_obj46=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_279));
                    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_277=((void*)0);
                    sline_saved_278=0;
                    __dec_obj47=sname_saved_279,
                    sname_saved_279=((void*)0);
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
            p_282=info->p;
            sline_283=info->sline;
            sname_284=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_283;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value243=parse_word(info)));
                (__right_value243 = come_decrement_ref_count(__right_value243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_285=(char*)come_increment_ref_count(parse_word(info));
                params_286=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 173, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_287=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_286,(char*)come_increment_ref_count(word_287));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value248=err_msg(info,"invalid source end")));
                            come_exception_var_c1_288=multiple_assign_var1->v1;
                            Err_289=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_289)?(puts(Err_289),exit(2)):(0));
                            /*c*/ come_call_finalizer3(__right_value248,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_289 = come_decrement_ref_count(Err_289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_287 = come_decrement_ref_count(word_287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value249=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_290=multiple_assign_var2->v1;
                            Err_291=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_291)?(puts(Err_291),exit(2)):(0));
                            /*c*/ come_call_finalizer3(__right_value249,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_291 = come_decrement_ref_count(Err_291, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_287 = come_decrement_ref_count(word_287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_277=info->p;
                sline_saved_278=info->sline;
                __dec_obj49=sname_saved_279,
                sname_saved_279=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj50=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_285));
                __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value254=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value253=__builtin_string(module_name_285))))))==((void*)0))),                (__right_value252 = come_decrement_ref_count(__right_value252, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value253 = come_decrement_ref_count(__right_value253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value254,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value255=err_msg(info,"module not found")));
                    come_exception_var_c3_298=multiple_assign_var3->v1;
                    Err_299=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_299)?(puts(Err_299),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value255,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__194 = (void*)come_increment_ref_count(((void*)0));
                    (Err_299 = come_decrement_ref_count(Err_299, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_285 = come_decrement_ref_count(module_name_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_286,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_284 = come_decrement_ref_count(sname_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_279 = come_decrement_ref_count(sname_saved_279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_274,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__194,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__194;
                    (Err_299 = come_decrement_ref_count(Err_299, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_300=((struct sClassModule*)(__right_value258=map$2char$phsClassModule$ph_operator_load_element(info->modules,((char*)(__right_value257=__builtin_string(module_name_285))))));
                (__right_value256 = come_decrement_ref_count(__right_value256, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__right_value257 = come_decrement_ref_count(__right_value257, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value258,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_300->mParams)!=list$1char$ph_length(params_286)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value259=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_301=multiple_assign_var4->v1;
                    Err_302=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_302)?(puts(Err_302),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value259,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_302 = come_decrement_ref_count(Err_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj52=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 227, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj52,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_306=0;
                for(                o2_saved_307=(struct list$1char$ph*)come_increment_ref_count((module_300->mParams)),it_310=list$1char$ph_begin((o2_saved_307));                !list$1char$ph_end((o2_saved_307));                it_310=list$1char$ph_next((o2_saved_307))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_310)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value273=list$1char$ph_operator_load_element(params_286,i_306))))));
                    (__right_value273 = come_decrement_ref_count(__right_value273, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_306++;
                }
                /*c*/ come_call_finalizer3(o2_saved_307,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_300->mText;
                info->sline=module_300->mSLine;
                __dec_obj53=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_300->mSName));
                __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_285 = come_decrement_ref_count(module_name_285, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_286,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            node_356=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj54=info->sname,
            info->sname=(char*)come_increment_ref_count(node_356->sname(node_356->_protocol_obj));
            __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=node_356->sline(node_356->_protocol_obj);
            if(            node_356==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value278=err_msg(info,"Invalid expression")));
                come_exception_var_c5_357=multiple_assign_var5->v1;
                Err_358=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_358)?(puts(Err_358),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value278,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_358 = come_decrement_ref_count(Err_358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph_push_back(result_274->mNodes,(struct sNode*)come_increment_ref_count(node_356));
            parse_sharp_v5(info);
            if(            node_356->terminated(node_356->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_362=(_Bool)1;
            if(            node_356->terminated(node_356->_protocol_obj)) {
                omit_semicolon_362=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_362=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_274->mOmitSemicolon=omit_semicolon_362;
                if(                omit_semicolon_362&&in_function) {
                    list$1sNode$ph_delete(result_274->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_282;
                    info->sline=sline_283;
                    __dec_obj58=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_284));
                    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    head_377=info->p;
                    value_378=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_379=info->p;
                    __dec_obj59=value_378,
                    value_378=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_378),info));
                    (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    char buf_380[tail_379-head_377+1];
                    memset(&buf_380, 0, sizeof(char)                    *(tail_379-head_377+1)                    );
                    memcpy(buf_380,head_377,tail_379-head_377);
                    buf_380[tail_379-head_377]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_381=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_378),(char*)come_increment_ref_count(__builtin_string(buf_380)),info));
                    list$1sNode$ph_push_back(result_274->mNodes,(struct sNode*)come_increment_ref_count(node_381));
                    ((value_378) ? value_378 = come_decrement_ref_count(value_378, ((struct sNode*)value_378)->finalize, ((struct sNode*)value_378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_381) ? node_381 = come_decrement_ref_count(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_284 = come_decrement_ref_count(sname_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_356) ? node_356 = come_decrement_ref_count(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_378) ? value_378 = come_decrement_ref_count(value_378, ((struct sNode*)value_378)->finalize, ((struct sNode*)value_378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_381) ? node_381 = come_decrement_ref_count(node_381, ((struct sNode*)node_381)->finalize, ((struct sNode*)node_381)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_284 = come_decrement_ref_count(sname_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_356) ? node_356 = come_decrement_ref_count(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_284 = come_decrement_ref_count(sname_284, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_356) ? node_356 = come_decrement_ref_count(node_356, ((struct sNode*)node_356)->finalize, ((struct sNode*)node_356)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_277) {
            if(            info->p==0) {
                info->p=p_saved_277;
                info->sline=sline_saved_278;
                __dec_obj60=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_279));
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_277=((void*)0);
                sline_saved_278=0;
            }
        }
        (sname_saved_279 = come_decrement_ref_count(sname_saved_279, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 331, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value289=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 331, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj62=node_382,
            node_382=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value289,sSemicolonNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1sNode$ph_push_back(result_274->mNodes,(struct sNode*)come_increment_ref_count(node_382));
        }
        else {
            __dec_obj63=node_382,
            node_382=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_382==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value294=err_msg(info,"Invalid expression")));
                come_exception_var_c6_384=multiple_assign_var6->v1;
                Err_385=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_385)?(puts(Err_385),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value294,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_385 = come_decrement_ref_count(Err_385, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_382->terminated(node_382->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_386=(_Bool)1;
            if(            node_382->terminated(node_382->_protocol_obj)) {
                omit_semicolon_386=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_386=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_274->mOmitSemicolon=omit_semicolon_386;
            list$1sNode$ph_push_back(result_274->mNodes,(struct sNode*)come_increment_ref_count(node_382));
        }
        ((node_382) ? node_382 = come_decrement_ref_count(node_382, ((struct sNode*)node_382)->finalize, ((struct sNode*)node_382)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_387=info->p;
        head_388=info->head;
        source_389=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_389;
        info->head=source_389;
        node_390=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_390==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value297=err_msg(info,"Invalid expression")));
            come_exception_var_c7_391=multiple_assign_var7->v1;
            Err_392=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_392)?(puts(Err_392),exit(2)):(0));
            /*c*/ come_call_finalizer3(__right_value297,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_392 = come_decrement_ref_count(Err_392, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph_push_back(result_274->mNodes,(struct sNode*)come_increment_ref_count(node_390));
        info->p=p_387;
        info->head=head_388;
        (source_389 = come_decrement_ref_count(source_389, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_390) ? node_390 = come_decrement_ref_count(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_276;
    __result_obj__228 = (struct sBlock*)come_increment_ref_count(result_274);
    /*c*/ come_call_finalizer3(result_274,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__228,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_280;
int i_281;
    for(    i_280=0;    i_280<self->size;    i_280++    ){
        if(        self->item_existance[i_280]) {
            if(            1) {
                (self->items[i_280] = come_decrement_ref_count(self->items[i_280], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_281=0;    i_281<self->size;    i_281++    ){
        if(        self->item_existance[i_281]) {
            if(            1) {
                (self->keys[i_281] = come_decrement_ref_count(self->keys[i_281], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_292;
unsigned int hash_293;
unsigned int it_294;
struct sClassModule* __result_obj__186;
struct sClassModule* __result_obj__187;
struct sClassModule* __result_obj__188;
struct sClassModule* __result_obj__189;
default_value_292 = (void*)0;
    memset(&default_value_292,0,sizeof(struct sClassModule*));
    hash_293=string_get_hash_key(((char*)key))%self->size;
    it_294=hash_293;
    while((_Bool)1) {
        if(        self->item_existance[it_294]) {
            if(            string_equals(self->keys[it_294],key)) {
                __result_obj__186 = (struct sClassModule*)come_increment_ref_count(self->items[it_294]);
                /*c*/ come_call_finalizer3(default_value_292,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__186,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__186;
            }
            it_294++;
            if(            it_294>=self->size) {
                it_294=0;
            }
            else if(            it_294==hash_293) {
                __result_obj__187 = (struct sClassModule*)come_increment_ref_count(default_value_292);
                /*c*/ come_call_finalizer3(default_value_292,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__187,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__187;
            }
        }
        else {
            __result_obj__188 = (struct sClassModule*)come_increment_ref_count(default_value_292);
            /*c*/ come_call_finalizer3(default_value_292,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__188,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__188;
        }
    }
    __result_obj__189 = (struct sClassModule*)come_increment_ref_count(default_value_292);
    /*c*/ come_call_finalizer3(default_value_292,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__189,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
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

static struct sClassModule* map$2char$phsClassModule$ph_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_295;
unsigned int hash_296;
unsigned int it_297;
struct sClassModule* __result_obj__190;
struct sClassModule* __result_obj__191;
struct sClassModule* __result_obj__192;
struct sClassModule* __result_obj__193;
default_value_295 = (void*)0;
    memset(&default_value_295,0,sizeof(struct sClassModule*));
    hash_296=string_get_hash_key(((char*)key))%self->size;
    it_297=hash_296;
    while((_Bool)1) {
        if(        self->item_existance[it_297]) {
            if(            string_equals(self->keys[it_297],key)) {
                __result_obj__190 = (struct sClassModule*)come_increment_ref_count(self->items[it_297]);
                /*c*/ come_call_finalizer3(default_value_295,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__190,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__190;
            }
            it_297++;
            if(            it_297>=self->size) {
                it_297=0;
            }
            else if(            it_297==hash_296) {
                __result_obj__191 = (struct sClassModule*)come_increment_ref_count(default_value_295);
                /*c*/ come_call_finalizer3(default_value_295,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__191,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__191;
            }
        }
        else {
            __result_obj__192 = (struct sClassModule*)come_increment_ref_count(default_value_295);
            /*c*/ come_call_finalizer3(default_value_295,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__192,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__192;
        }
    }
    __result_obj__193 = (struct sClassModule*)come_increment_ref_count(default_value_295);
    /*c*/ come_call_finalizer3(default_value_295,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static int list$1char$ph_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self){
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
int i_303;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1char$ph* __dec_obj51;
struct map$2char$phchar$ph* __result_obj__196;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value261=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1926, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value262=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1927, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value263=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1928, "_Bool*"))));
    for(    i_303=0;    i_303<128;    i_303++    ){
        self->item_existance[i_303]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj51=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1938, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj51,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__196 = (struct map$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__195;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__195 = (struct list$1char$p*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__195,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__195;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_304;
int i_305;
    for(    i_304=0;    i_304<self->size;    i_304++    ){
        if(        self->item_existance[i_304]) {
            if(            1) {
                (self->items[i_304] = come_decrement_ref_count(self->items[i_304], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_305=0;    i_305<self->size;    i_305++    ){
        if(        self->item_existance[i_305]) {
            if(            1) {
                (self->keys[i_305] = come_decrement_ref_count(self->keys[i_305], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_308;
char* __result_obj__197;
char* __result_obj__198;
char* result_309;
char* __result_obj__199;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_308,0,sizeof(char*));
        __result_obj__197 = result_308;
        return __result_obj__197;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__198 = self->it->item;
        return __result_obj__198;
    }
    memset(&result_309,0,sizeof(char*));
    __result_obj__199 = result_309;
    return __result_obj__199;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_311;
char* __result_obj__200;
char* __result_obj__201;
char* result_312;
char* __result_obj__202;
result_311 = (void*)0;
result_312 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_311,0,sizeof(char*));
        __result_obj__200 = result_311;
        return __result_obj__200;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__201 = self->it->item;
        return __result_obj__201;
    }
    memset(&result_312,0,sizeof(char*));
    __result_obj__202 = result_312;
    return __result_obj__202;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_330;
unsigned int it_331;
_Bool same_key_exist_348;
char* it2_349;
struct map$2char$phchar$ph* __result_obj__217;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_330=string_get_hash_key(((char*)key))%self->size;
    it_331=hash_330;
    while((_Bool)1) {
        if(        self->item_existance[it_331]) {
            if(            string_equals(self->keys[it_331],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_331]);
                    (self->keys[it_331] = come_decrement_ref_count(self->keys[it_331], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_331]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_331]);
                    self->keys[it_331]=key;
                }
                if(                1) {
                    (self->items[it_331] = come_decrement_ref_count(self->items[it_331], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_331]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_331]=item;
                }
                break;
            }
            it_331++;
            if(            it_331>=self->size) {
                it_331=0;
            }
            else if(            it_331==hash_330) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_331]=(_Bool)1;
            if(            1) {
                self->keys[it_331]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_331]=key;
            }
            if(            1) {
                self->items[it_331]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_331]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_348=(_Bool)0;
    for(    it2_349=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_349=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_349,key)) {
            same_key_exist_348=(_Bool)1;
        }
    }
    if(    !same_key_exist_348) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__217 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__217;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_313;
void* __right_value268 = (void*)0;
char** keys_314;
void* __right_value269 = (void*)0;
char** items_315;
void* __right_value270 = (void*)0;
_Bool* item_existance_316;
int len_317;
char* it_320;
char* default_value_323;
void* __right_value271 = (void*)0;
char* it2_324;
unsigned int hash_327;
int n_328;
char* default_value_329;
void* __right_value272 = (void*)0;
default_value_323 = (void*)0;
default_value_329 = (void*)0;
    size_313=self->size*10;
    keys_314=(char**)come_increment_ref_count(((char**)(__right_value268=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_313)), "./comelang.h", 2165, "char**"))));
    items_315=(char**)come_increment_ref_count(((char**)(__right_value269=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_313)), "./comelang.h", 2166, "char**"))));
    item_existance_316=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value270=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_313)), "./comelang.h", 2167, "_Bool*"))));
    len_317=0;
    for(    it_320=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_320=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_323,0,sizeof(char*));
        it2_324=((char*)(__right_value271=map$2char$phchar$ph_at(self,it_320,(char*)come_increment_ref_count(default_value_323))));
        (__right_value271 = come_decrement_ref_count(__right_value271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_327=string_get_hash_key(((char*)it_320))%size_313;
        n_328=hash_327;
        while((_Bool)1) {
            if(            item_existance_316[n_328]) {
                n_328++;
                if(                n_328>=size_313) {
                    n_328=0;
                }
                else if(                n_328==hash_327) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_316[n_328]=(_Bool)1;
                keys_314[n_328]=it_320;
                items_315[n_328]=((char*)(__right_value272=map$2char$phchar$ph_at(self,it_320,(char*)come_increment_ref_count(default_value_329))));
                (__right_value272 = come_decrement_ref_count(__right_value272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_317++;
                (default_value_329 = come_decrement_ref_count(default_value_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_329 = come_decrement_ref_count(default_value_329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_323 = come_decrement_ref_count(default_value_323, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_314;
    self->items=items_315;
    self->item_existance=item_existance_316;
    self->size=size_313;
    self->len=len_317;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_318;
char* __result_obj__203;
char* __result_obj__204;
char* result_319;
char* __result_obj__205;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_318,0,sizeof(char*));
        __result_obj__203 = result_318;
        return __result_obj__203;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__204 = self->key_list->it->item;
        return __result_obj__204;
    }
    memset(&result_319,0,sizeof(char*));
    __result_obj__205 = result_319;
    return __result_obj__205;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_321;
char* __result_obj__206;
char* __result_obj__207;
char* result_322;
char* __result_obj__208;
result_321 = (void*)0;
result_322 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_321,0,sizeof(char*));
        __result_obj__206 = result_321;
        return __result_obj__206;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__207 = self->key_list->it->item;
        return __result_obj__207;
    }
    memset(&result_322,0,sizeof(char*));
    __result_obj__208 = result_322;
    return __result_obj__208;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_325;
unsigned int it_326;
char* __result_obj__209;
char* __result_obj__210;
char* __result_obj__211;
char* __result_obj__212;
    hash_325=string_get_hash_key(((char*)key))%self->size;
    it_326=hash_325;
    while((_Bool)1) {
        if(        self->item_existance[it_326]) {
            if(            string_equals(self->keys[it_326],key)) {
                __result_obj__209 = (char*)come_increment_ref_count(self->items[it_326]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__209 = come_decrement_ref_count(__result_obj__209, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__209;
            }
            it_326++;
            if(            it_326>=self->size) {
                it_326=0;
            }
            else if(            it_326==hash_325) {
                __result_obj__210 = (char*)come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__210 = come_decrement_ref_count(__result_obj__210, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__210;
            }
        }
        else {
            __result_obj__211 = (char*)come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__211 = come_decrement_ref_count(__result_obj__211, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__211;
        }
    }
    __result_obj__212 = (char*)come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__212;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_332;
struct list_item$1char$ph* it_333;
struct list$1char$ph* __result_obj__216;
    it2_332=0;
    it_333=self->head;
    while(it_333!=((void*)0)) {
        if(        string_equals(it_333->item,item)) {
            list$1char$ph_delete(self,it2_332,it2_332+1);
            break;
        }
        it2_332++;
        it_333=it_333->next;
    }
    __result_obj__216 = self;
    return __result_obj__216;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_334;
struct list$1char$ph* __result_obj__213;
struct list_item$1char$ph* it_337;
int i_338;
struct list_item$1char$ph* prev_it_339;
struct list_item$1char$ph* it_340;
int i_341;
struct list_item$1char$ph* prev_it_342;
struct list_item$1char$ph* it_343;
struct list_item$1char$ph* head_prev_it_344;
struct list_item$1char$ph* tail_it_345;
int i_346;
struct list_item$1char$ph* prev_it_347;
struct list$1char$ph* __result_obj__215;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_334=tail;
        tail=head;
        head=tmp_334;
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
        it_337=self->head;
        i_338=0;
        while(it_337!=((void*)0)) {
            if(            i_338<tail) {
                prev_it_339=it_337;
                it_337=it_337->next;
                i_338++;
                /*c*/ come_call_finalizer3(prev_it_339,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_338==tail) {
                self->head=it_337;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_337=it_337->next;
                i_338++;
            }
        }
    }
    else if(    tail==self->len) {
        it_340=self->head;
        i_341=0;
        while(it_340!=((void*)0)) {
            if(            i_341==head) {
                self->tail=it_340->prev;
                self->tail->next=((void*)0);
            }
            if(            i_341>=head) {
                prev_it_342=it_340;
                it_340=it_340->next;
                i_341++;
                /*c*/ come_call_finalizer3(prev_it_342,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_340=it_340->next;
                i_341++;
            }
        }
    }
    else {
        it_343=self->head;
        head_prev_it_344=((void*)0);
        tail_it_345=((void*)0);
        i_346=0;
        while(it_343!=((void*)0)) {
            if(            i_346==head) {
                head_prev_it_344=it_343->prev;
            }
            if(            i_346==tail) {
                tail_it_345=it_343;
            }
            if(            i_346>=head&&i_346<tail) {
                prev_it_347=it_343;
                it_343=it_343->next;
                i_346++;
                /*c*/ come_call_finalizer3(prev_it_347,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_343=it_343->next;
                i_346++;
            }
        }
        if(        head_prev_it_344!=((void*)0)) {
            head_prev_it_344->next=tail_it_345;
        }
        if(        tail_it_345!=((void*)0)) {
            tail_it_345->prev=head_prev_it_344;
        }
    }
    __result_obj__215 = self;
    return __result_obj__215;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_335;
struct list_item$1char$ph* prev_it_336;
struct list$1char$ph* __result_obj__214;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        /*c*/ come_call_finalizer3(prev_it_336,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__214 = self;
    return __result_obj__214;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_350;
int i_351;
char* __result_obj__218;
char* default_value_352;
char* __result_obj__219;
default_value_352 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_350=self->head;
    i_351=0;
    while(it_350!=((void*)0)) {
        if(        position==i_351) {
            __result_obj__218 = (char*)come_increment_ref_count(it_350->item);
            (__result_obj__218 = come_decrement_ref_count(__result_obj__218, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__218;
        }
        it_350=it_350->next;
        i_351++;
    }
    memset(&default_value_352,0,sizeof(char*));
    __result_obj__219 = (char*)come_increment_ref_count(default_value_352);
    (default_value_352 = come_decrement_ref_count(default_value_352, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__219 = come_decrement_ref_count(__result_obj__219, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__219;
}

static char* list$1char$ph_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_353;
int i_354;
char* __result_obj__220;
char* default_value_355;
char* __result_obj__221;
default_value_355 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_353=self->head;
    i_354=0;
    while(it_353!=((void*)0)) {
        if(        position==i_354) {
            __result_obj__220 = (char*)come_increment_ref_count(it_353->item);
            (__result_obj__220 = come_decrement_ref_count(__result_obj__220, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__220;
        }
        it_353=it_353->next;
        i_354++;
    }
    memset(&default_value_355,0,sizeof(char*));
    __result_obj__221 = (char*)come_increment_ref_count(default_value_355);
    (default_value_355 = come_decrement_ref_count(default_value_355, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__221 = come_decrement_ref_count(__result_obj__221, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__221;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value279 = (void*)0;
struct list_item$1sNode$ph* litem_359;
struct sNode* __dec_obj55;
void* __right_value280 = (void*)0;
struct list_item$1sNode$ph* litem_360;
struct sNode* __dec_obj56;
void* __right_value281 = (void*)0;
struct list_item$1sNode$ph* litem_361;
struct sNode* __dec_obj57;
struct list$1sNode$ph* __result_obj__222;
    if(    self->len==0) {
        litem_359=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value279=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1111, "struct list_item$1sNode$ph*"))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj55=litem_359->item,
        litem_359->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj55 ? __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value280=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1121, "struct list_item$1sNode$ph*"))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj56=litem_360->item,
        litem_360->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value281=(struct list_item$1sNode$ph*)come_calloc_v2(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1131, "struct list_item$1sNode$ph*"))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj57=litem_361->item,
        litem_361->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result_obj__222 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__222;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_363;
struct list$1sNode$ph* __result_obj__223;
struct list_item$1sNode$ph* it_366;
int i_367;
struct list_item$1sNode$ph* prev_it_368;
struct list_item$1sNode$ph* it_369;
int i_370;
struct list_item$1sNode$ph* prev_it_371;
struct list_item$1sNode$ph* it_372;
struct list_item$1sNode$ph* head_prev_it_373;
struct list_item$1sNode$ph* tail_it_374;
int i_375;
struct list_item$1sNode$ph* prev_it_376;
struct list$1sNode$ph* __result_obj__225;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_363=tail;
        tail=head;
        head=tmp_363;
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
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_366=self->head;
        i_367=0;
        while(it_366!=((void*)0)) {
            if(            i_367<tail) {
                prev_it_368=it_366;
                it_366=it_366->next;
                i_367++;
                /*c*/ come_call_finalizer3(prev_it_368,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_367==tail) {
                self->head=it_366;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_366=it_366->next;
                i_367++;
            }
        }
    }
    else if(    tail==self->len) {
        it_369=self->head;
        i_370=0;
        while(it_369!=((void*)0)) {
            if(            i_370==head) {
                self->tail=it_369->prev;
                self->tail->next=((void*)0);
            }
            if(            i_370>=head) {
                prev_it_371=it_369;
                it_369=it_369->next;
                i_370++;
                /*c*/ come_call_finalizer3(prev_it_371,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_369=it_369->next;
                i_370++;
            }
        }
    }
    else {
        it_372=self->head;
        head_prev_it_373=((void*)0);
        tail_it_374=((void*)0);
        i_375=0;
        while(it_372!=((void*)0)) {
            if(            i_375==head) {
                head_prev_it_373=it_372->prev;
            }
            if(            i_375==tail) {
                tail_it_374=it_372;
            }
            if(            i_375>=head&&i_375<tail) {
                prev_it_376=it_372;
                it_372=it_372->next;
                i_375++;
                /*c*/ come_call_finalizer3(prev_it_376,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_372=it_372->next;
                i_375++;
            }
        }
        if(        head_prev_it_373!=((void*)0)) {
            head_prev_it_373->next=tail_it_374;
        }
        if(        tail_it_374!=((void*)0)) {
            tail_it_374->prev=head_prev_it_373;
        }
    }
    __result_obj__225 = self;
    return __result_obj__225;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_364;
struct list_item$1sNode$ph* prev_it_365;
struct list$1sNode$ph* __result_obj__224;
    it_364=self->head;
    while(it_364!=((void*)0)) {
        prev_it_365=it_364;
        it_364=it_364->next;
        /*c*/ come_call_finalizer3(prev_it_365,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__224 = self;
    return __result_obj__224;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__226;
void* __right_value290 = (void*)0;
struct sSemicolonNode* result_383;
void* __right_value291 = (void*)0;
char* __dec_obj61;
struct sSemicolonNode* __result_obj__227;
    if(    self==(void*)0) {
        __result_obj__226 = (void*)0;
        return __result_obj__226;
    }
    result_383=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc_v2(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)) {
        result_383->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj61=result_383->sname,
        result_383->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sSemicolonNode_clone", 5, "char*"));
        __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_383->sline_real=self->sline_real;
    }
    __result_obj__227 = result_383;
    /*c*/ come_call_finalizer3(result_383,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_393;
struct sVarTable* old_table_394;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sVarTable* __dec_obj64;
struct sVarTable* current_loop_vtable_395;
int i_396;
struct list$1char$ph* o2_saved_397;
char* name_398;
void* __right_value300 = (void*)0;
struct sType* type_399;
void* __right_value301 = (void*)0;
int block_level_406;
int i_407;
struct list$1sNode$ph* o2_saved_408;
struct sNode* node_411;
struct list$1sRightValueObject$ph* right_value_objects_414;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
int stack_num_before_419;
int sline_420;
void* __right_value304 = (void*)0;
char* sname_421;
void* __right_value305 = (void*)0;
char* __dec_obj68;
_Bool Value_422;
void* __right_value306 = (void*)0;
struct CVALUE* come_value_423;
void* __right_value312 = (void*)0;
struct CVALUE* come_value2_424;
void* __right_value313 = (void*)0;
char* __dec_obj73;
void* __right_value314 = (void*)0;
struct CVALUE* come_value2_426;
struct sVar* var__427;
void* __right_value315 = (void*)0;
struct CVALUE* come_value3_428;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_445=0;
char* Err_446=0;
_Bool _if_conditional2;
int __result_obj__242;
void* __right_value318 = (void*)0;
struct sType* __dec_obj74;
void* __right_value319 = (void*)0;
char* c_value_447;
void* __right_value320 = (void*)0;
char* __dec_obj75;
void* __right_value321 = (void*)0;
char* __dec_obj76;
void* __right_value322 = (void*)0;
char* __dec_obj77;
_Bool Value_448;
void* __right_value323 = (void*)0;
char* __dec_obj78;
struct list$1sRightValueObject$ph* __dec_obj79;
void* __if_result__0_451 = (void*)0;
struct list$1sVar$ph* o2_saved_452;
struct sVar* it_455;
void* __right_value324 = (void*)0;
struct list$1sVar$ph* __dec_obj80;
memset(&i_396, 0, sizeof(int));
memset(&i_407, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_393=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_394=info->lv_table;
    if(    !no_var_table) {
        __dec_obj64=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "05function.c", 405, "struct sVarTable*")),(_Bool)0,old_table_394));
        /*b*/ come_call_finalizer3(__dec_obj64,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_395=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_397=(param_names),name_398=list$1char$ph_begin((o2_saved_397));        !list$1char$ph_end((o2_saved_397));        name_398=list$1char$ph_next((o2_saved_397))        ){
            type_399=(struct sType*)come_increment_ref_count(list$1sType$ph_operator_load_element(param_types,i_396));
            type_399->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_398,(struct sType*)come_increment_ref_count(sType_clone(type_399)),info,(_Bool)1);
            i_396++;
            /*c*/ come_call_finalizer3(type_399,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    block_level_406=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_408=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_411=list$1sNode$ph_begin((o2_saved_408));        !list$1sNode$ph_end((o2_saved_408));        node_411=list$1sNode$ph_next((o2_saved_408))        ){
            right_value_objects_414=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj65=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc_v2(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 435, "struct list$1sRightValueObject$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj65,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj66=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj67=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            stack_num_before_419=list$1CVALUE$ph_length(info->stack);
            sline_420=info->sline;
            sname_421=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_411->sline(node_411->_protocol_obj);
            __dec_obj68=info->sname,
            info->sname=(char*)come_increment_ref_count(node_411->sname(node_411->_protocol_obj));
            __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            i_407==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_422=node_compile(node_411,info);
                if(                !Value_422) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_419+1) {
                    come_value_423=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_423->type->mClass->mName,"void")&&come_value_423->type->mPointerNum==0) {
                        come_value2_424=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_423));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_424));
                        __dec_obj73=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_424->c_value));
                        __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_424,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        come_value2_426=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_423));
                        var__427=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__427) {
                            come_value3_428=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05function.c", 470, "struct CVALUE*"));
                            if(                            var__427->mType->mClass=="void"&&var__427->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value317=check_assign_type("invalid if result value",var__427->mType,((struct sType*)(__right_value316=sType_clone(come_value_423->type))),come_value3_428,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_445=multiple_assign_var8->v1;
                                Err_446=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_446)),                                /*c*/ come_call_finalizer3(__right_value316,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                /*c*/ come_call_finalizer3(__right_value317,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                _if_conditional2) {
                                    __result_obj__242 = (_Bool)1;
                                    (Err_446 = come_decrement_ref_count(Err_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(come_value3_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value2_426,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value_423,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(right_value_objects_414,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    (sname_421 = come_decrement_ref_count(sname_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(o2_saved_408,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    return __result_obj__242;
                                }
                                else {
                                }
                                (Err_446 = come_decrement_ref_count(Err_446, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj74=var__427->mType,
                            var__427->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_423->type));
                            /*b*/ come_call_finalizer3(__dec_obj74,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_423->type->mHeap) {
                                c_value_447=(char*)come_increment_ref_count(increment_ref_count_object(come_value_423->type,come_value_423->c_value,info));
                                __dec_obj75=come_value2_426->c_value,
                                come_value2_426->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__427->mCValueName,c_value_447));
                                __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                (c_value_447 = come_decrement_ref_count(c_value_447, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj76=come_value2_426->c_value,
                                come_value2_426->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__427->mCValueName,come_value_423->c_value));
                                __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            /*c*/ come_call_finalizer3(come_value3_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_426));
                        __dec_obj77=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_426->c_value));
                        __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_426,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(come_value_423,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            else {
                Value_448=node_compile(node_411,info);
                if(                !Value_448) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_420;
            __dec_obj78=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_421));
            __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_419);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj79=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_414);
            /*b*/ come_call_finalizer3(__dec_obj79,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_407++;
            /*c*/ come_call_finalizer3(right_value_objects_414,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_421 = come_decrement_ref_count(sname_421, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_408,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_406==0) {
            for(            o2_saved_452=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_455=list$1sVar$ph_begin((o2_saved_452));            !list$1sVar$ph_end((o2_saved_452));            it_455=list$1sVar$ph_next((o2_saved_452))            ){
                free_object(((struct sType*)(__right_value324=sType_clone(it_455->mType))),it_455->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value324,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_452,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj80=info->match_it_var,
            __if_result__0_451=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            /*b*/ come_call_finalizer3(__dec_obj80,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        /*c*/ come_call_finalizer3(__if_result__0_451,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->lv_table=old_table_394;
    info->block_level=block_level_406;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_395;
    info->inhibits_output_code=inhibits_output_code_393;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_400;
int i_401;
struct sType* __result_obj__229;
struct sType* default_value_402;
struct sType* __result_obj__230;
default_value_402 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_400=self->head;
    i_401=0;
    while(it_400!=((void*)0)) {
        if(        position==i_401) {
            __result_obj__229 = (struct sType*)come_increment_ref_count(it_400->item);
            /*c*/ come_call_finalizer3(__result_obj__229,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__229;
        }
        it_400=it_400->next;
        i_401++;
    }
    memset(&default_value_402,0,sizeof(struct sType*));
    __result_obj__230 = (struct sType*)come_increment_ref_count(default_value_402);
    /*c*/ come_call_finalizer3(default_value_402,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__230,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__230;
}

static struct sType* list$1sType$ph_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_403;
int i_404;
struct sType* __result_obj__231;
struct sType* default_value_405;
struct sType* __result_obj__232;
default_value_405 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_403=self->head;
    i_404=0;
    while(it_403!=((void*)0)) {
        if(        position==i_404) {
            __result_obj__231 = (struct sType*)come_increment_ref_count(it_403->item);
            /*c*/ come_call_finalizer3(__result_obj__231,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__231;
        }
        it_403=it_403->next;
        i_404++;
    }
    memset(&default_value_405,0,sizeof(struct sType*));
    __result_obj__232 = (struct sType*)come_increment_ref_count(default_value_405);
    /*c*/ come_call_finalizer3(default_value_405,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__232,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__232;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_409;
struct sNode* __result_obj__233;
struct sNode* __result_obj__234;
struct sNode* result_410;
struct sNode* __result_obj__235;
result_409 = (void*)0;
result_410 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_409,0,sizeof(struct sNode*));
        __result_obj__233 = result_409;
        return __result_obj__233;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__234 = self->it->item;
        return __result_obj__234;
    }
    memset(&result_410,0,sizeof(struct sNode*));
    __result_obj__235 = result_410;
    return __result_obj__235;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_412;
struct sNode* __result_obj__236;
struct sNode* __result_obj__237;
struct sNode* result_413;
struct sNode* __result_obj__238;
result_412 = (void*)0;
result_413 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_412,0,sizeof(struct sNode*));
        __result_obj__236 = result_412;
        return __result_obj__236;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__237 = self->it->item;
        return __result_obj__237;
    }
    memset(&result_413,0,sizeof(struct sNode*));
    __result_obj__238 = result_413;
    return __result_obj__238;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__239;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__239 = (struct list$1sRightValueObject$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__239,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_415;
struct list_item$1sRightValueObject$ph* prev_it_416;
    it_415=self->head;
    while(it_415!=((void*)0)) {
        prev_it_416=it_415;
        it_415=it_415->next;
        /*c*/ come_call_finalizer3(prev_it_416,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sRightValueObject$ph* it_417;
struct list_item$1sRightValueObject$ph* prev_it_418;
    it_417=self->head;
    while(it_417!=((void*)0)) {
        prev_it_418=it_417;
        it_417=it_417->next;
        /*c*/ come_call_finalizer3(prev_it_418,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__240;
void* __right_value307 = (void*)0;
struct CVALUE* result_425;
void* __right_value308 = (void*)0;
char* __dec_obj69;
void* __right_value309 = (void*)0;
struct sType* __dec_obj70;
void* __right_value310 = (void*)0;
char* __dec_obj71;
void* __right_value311 = (void*)0;
char* __dec_obj72;
struct CVALUE* __result_obj__241;
    if(    self==(void*)0) {
        __result_obj__240 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__240,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__240;
    }
    result_425=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj69=result_425->c_value,
        result_425->c_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value, "CVALUE_clone", 4, "char*"));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj70=result_425->type,
        result_425->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /*b*/ come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_425->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj71=result_425->c_value_without_right_value_objects,
        result_425->c_value_without_right_value_objects=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_right_value_objects, "CVALUE_clone", 8, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj72=result_425->c_value_without_cast_object_value,
        result_425->c_value_without_cast_object_value=(char*)come_increment_ref_count((char*)come_memdup(self->c_value_without_cast_object_value, "CVALUE_clone", 9, "char*"));
        __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__241 = (struct CVALUE*)come_increment_ref_count(result_425);
    /*c*/ come_call_finalizer3(result_425,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_429;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_430;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_429=left->head;
    it2_430=right->head;
    while(it_429!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_429->item,it2_430->item)) {
            return (_Bool)0;
        }
        it_429=it_429->next;
        it2_430=it2_430->next;
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
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_431;
struct list_item$1sType$ph* it2_432;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_431=left->head;
    it2_432=right->head;
    while(it_431!=((void*)0)) {
        if(        !sType_equals(it_431->item,it2_432->item)) {
            return (_Bool)0;
        }
        it_431=it_431->next;
        it2_432=it2_432->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_433;
struct list_item$1sNode$ph* it2_434;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_433=left->head;
    it2_434=right->head;
    while(it_433!=((void*)0)) {
        if(        !sNode_equals(it_433->item,it2_434->item)) {
            return (_Bool)0;
        }
        it_433=it_433->next;
        it2_434=it2_434->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_435;
struct list_item$1char$ph* it2_436;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_435=left->head;
    it2_436=right->head;
    while(it_435!=((void*)0)) {
        if(        !string_equals(it_435->item,it2_436->item)) {
            return (_Bool)0;
        }
        it_435=it_435->next;
        it2_436=it2_436->next;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_437;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_438;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_437=left->head;
    it2_438=right->head;
    while(it_437!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_437->item,it2_438->item))) {
            return (_Bool)0;
        }
        it_437=it_437->next;
        it2_438=it2_438->next;
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
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2char$phsType$ph$ph_equals(left->mFields,right->mFields)&&string_equals(left->mParentClassName,right->mParentClassName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mDynamic,right->mDynamic));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2char$phsType$ph$ph_operator_equals(left->mFields,right->mFields))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mDynamic,right->mDynamic))));
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mChannelType,right->mChannelType)&&list$1sType$ph_equals(left->mGenericsTypes,right->mGenericsTypes)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&sNode_equals(left->mAlignas,right->mAlignas)&&string_equals(left->mTupleName,right->mTupleName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mDefferRightValue,right->mDefferRightValue)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&string_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&list$1sNode$ph_equals(left->mArrayNum,right->mArrayNum)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&string_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&list$1sType$ph_equals(left->mParamTypes,right->mParamTypes)&&list$1char$ph_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(list$1sType$ph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mDefferRightValue,right->mDefferRightValue))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(list$1sNode$ph_operator_equals(left->mArrayNum,right->mArrayNum))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(list$1sType$ph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1char$ph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))));
}

static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_439;
struct list_item$1sType$ph* it2_440;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_439=left->head;
    it2_440=right->head;
    while(it_439!=((void*)0)) {
        if(        !(sType_operator_equals(it_439->item,it2_440->item))) {
            return (_Bool)0;
        }
        it_439=it_439->next;
        it2_440=it2_440->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_441;
struct list_item$1sNode$ph* it2_442;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_441=left->head;
    it2_442=right->head;
    while(it_441!=((void*)0)) {
        if(        !(sNode_operator_equals(it_441->item,it2_442->item))) {
            return (_Bool)0;
        }
        it_441=it_441->next;
        it2_442=it2_442->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_443;
struct list_item$1char$ph* it2_444;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_443=left->head;
    it2_444=right->head;
    while(it_443!=((void*)0)) {
        if(        !(string_operator_equals(it_443->item,it2_444->item))) {
            return (_Bool)0;
        }
        it_443=it_443->next;
        it2_444=it2_444->next;
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

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_449;
struct list_item$1sRightValueObject$ph* prev_it_450;
struct list$1sRightValueObject$ph* __result_obj__243;
    it_449=self->head;
    while(it_449!=((void*)0)) {
        prev_it_450=it_449;
        it_449=it_449->next;
        /*c*/ come_call_finalizer3(prev_it_450,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__243 = self;
    return __result_obj__243;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_453;
struct sVar* __result_obj__244;
struct sVar* __result_obj__245;
struct sVar* result_454;
struct sVar* __result_obj__246;
result_453 = (void*)0;
result_454 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_453,0,sizeof(struct sVar*));
        __result_obj__244 = result_453;
        return __result_obj__244;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__245 = self->it->item;
        return __result_obj__245;
    }
    memset(&result_454,0,sizeof(struct sVar*));
    __result_obj__246 = result_454;
    return __result_obj__246;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_456;
struct sVar* __result_obj__247;
struct sVar* __result_obj__248;
struct sVar* result_457;
struct sVar* __result_obj__249;
result_456 = (void*)0;
result_457 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_456,0,sizeof(struct sVar*));
        __result_obj__247 = result_456;
        return __result_obj__247;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__248 = self->it->item;
        return __result_obj__248;
    }
    memset(&result_457,0,sizeof(struct sVar*));
    __result_obj__249 = result_457;
    return __result_obj__249;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_458;
struct list_item$1sVar$ph* prev_it_459;
    it_458=self->head;
    while(it_458!=((void*)0)) {
        prev_it_459=it_458;
        it_458=it_458->next;
        /*c*/ come_call_finalizer3(prev_it_459,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sVar$ph* it_460;
struct list_item$1sVar$ph* prev_it_461;
    it_460=self->head;
    while(it_460!=((void*)0)) {
        prev_it_461=it_460;
        it_460=it_460->next;
        /*c*/ come_call_finalizer3(prev_it_461,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
char* head_462;
_Bool dquort_463;
_Bool squort_464;
int sline_465;
int nest_466;
void* __right_value325 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_467=0;
char* Err_468=0;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_469=0;
char* Err_470=0;
void* __right_value327 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_471=0;
char* Err_472=0;
void* __right_value328 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_473=0;
char* Err_474=0;
void* __right_value329 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_475=0;
char* Err_476=0;
void* __right_value330 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_477=0;
char* Err_478=0;
void* __right_value331 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_479=0;
char* Err_480=0;
void* __right_value332 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_481=0;
char* Err_482=0;
char* tail_483;
void* __right_value333 = (void*)0;
char* buf_484;
void* __right_value334 = (void*)0;
char* __result_obj__250;
    head_462=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_463=(_Bool)0;
        squort_464=(_Bool)0;
        sline_465=0;
        nest_466=0;
        while(1) {
            if(            dquort_463) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value325=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465)));
                        come_exception_var_c8_467=multiple_assign_var9->v1;
                        Err_468=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                        ((Err_468)?(puts(Err_468),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value325,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_468 = come_decrement_ref_count(Err_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_463=!dquort_463;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465)));
                        come_exception_var_c9_469=multiple_assign_var10->v1;
                        Err_470=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_470)?(puts(Err_470),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_470 = come_decrement_ref_count(Err_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value327=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465)));
                        come_exception_var_c10_471=multiple_assign_var11->v1;
                        Err_472=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_472)?(puts(Err_472),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value327,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_472 = come_decrement_ref_count(Err_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_464) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value328=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465)));
                        come_exception_var_c11_473=multiple_assign_var12->v1;
                        Err_474=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_474)?(puts(Err_474),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value328,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_474 = come_decrement_ref_count(Err_474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_464=!squort_464;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value329=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465)));
                        come_exception_var_c12_475=multiple_assign_var13->v1;
                        Err_476=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_476)?(puts(Err_476),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value329,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_476 = come_decrement_ref_count(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value330=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_465)));
                        come_exception_var_c13_477=multiple_assign_var14->v1;
                        Err_478=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_478)?(puts(Err_478),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value330,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_478 = come_decrement_ref_count(Err_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_465=info->sline;
                info->p++;
                squort_464=!squort_464;
            }
            else if(            *info->p==34) {
                sline_465=info->sline;
                info->p++;
                dquort_463=!dquort_463;
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
                nest_466++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_466==0) {
                    break;
                }
                nest_466--;
            }
            else if(            *info->p==0) {
                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value331=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c14_479=multiple_assign_var15->v1;
                Err_480=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                ((Err_480)?(puts(Err_480),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value331,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_480 = come_decrement_ref_count(Err_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value332=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c15_481=multiple_assign_var16->v1;
        Err_482=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        ((Err_482)?(puts(Err_482),exit(2)):(0));
        /*c*/ come_call_finalizer3(__right_value332,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (Err_482 = come_decrement_ref_count(Err_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_483=info->p;
    buf_484=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail_483-head_462+1)), "05function.c", 686, "char*"));
    memcpy(buf_484,head_462,tail_483-head_462);
    buf_484[tail_483-head_462]=0;
    skip_spaces_and_lf(info);
    __result_obj__250 = (char*)come_increment_ref_count(((char*)(__right_value334=__builtin_string(buf_484))));
    (buf_484 = come_decrement_ref_count(buf_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value334 = come_decrement_ref_count(__right_value334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__250 = come_decrement_ref_count(__result_obj__250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__250;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct buffer* asm_fun_name_485;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct buffer* result_486;
char* head_487;
int brace_num_488;
char* tail_489;
char* head_490;
int brace_num_491;
char* tail_492;
char* head_493;
char* tail_494;
char* head_495;
char* tail_496;
int len_497;
_Bool in_dquort_498;
int brace_num_499;
char* head_500;
char* tail_501;
char* head_502;
char* tail_503;
char* head_504;
char* tail_505;
char* head_506;
int nest_507;
char* tail_508;
char* head_509;
int nest_510;
char* tail_511;
char* head_512;
int nest_513;
char* tail_514;
char* head_515;
int nest_516;
char* tail_517;
char* head_518;
int nest_519;
char* tail_520;
char* head_521;
char* tail_522;
char* head_523;
char* tail_524;
char* head_525;
char* tail_526;
char* head_527;
char* tail_528;
char* head_529;
char* tail_530;
char* head_531;
int brace_num_532;
char* tail_533;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__254;
    asm_fun_name_485=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 697, "struct buffer*"))));
    result_486=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 698, "struct buffer*"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_487=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_488=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_488++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_488--;
                        if(                        brace_num_488==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_489=info->p;
            buffer_append(result_486,head_487,tail_489-head_487);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_490=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_491=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_491++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_491--;
                        if(                        brace_num_491==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_492=info->p;
            buffer_append(result_486,head_490,tail_492-head_490);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_493=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_494=info->p;
            buffer_append(result_486,head_493,tail_494-head_493);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_495=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_496=info->p;
            buffer_append(result_486,head_495,tail_496-head_495);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_497=0;
            if(            *info->p==40) {
                in_dquort_498=(_Bool)0;
                brace_num_499=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_498=!in_dquort_498;
                    }
                    else if(                    in_dquort_498) {
                        buffer_append_char(asm_fun_name_485,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_499++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_499--;
                        if(                        brace_num_499==0) {
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
            head_500=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_501=info->p;
            buffer_append(result_486,head_500,tail_501-head_500);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_502=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_503=info->p;
            buffer_append(result_486,head_502,tail_503-head_502);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_504=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_505=info->p;
            buffer_append(result_486,head_504,tail_505-head_504);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_506=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_507=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_507++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_507--;
                        if(                        nest_507==0) {
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
            tail_508=info->p;
            buffer_append(result_486,head_506,tail_508-head_506);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_509=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_510=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_510++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_510--;
                        if(                        nest_510==0) {
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
            tail_511=info->p;
            buffer_append(result_486,head_509,tail_511-head_509);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_512=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_513=0;
                while(1) {
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
            tail_514=info->p;
            buffer_append(result_486,head_512,tail_514-head_512);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_515=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_516=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_516++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_516--;
                        if(                        nest_516==0) {
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
            tail_517=info->p;
            buffer_append(result_486,head_515,tail_517-head_515);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_518=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_519=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_519++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_519--;
                        if(                        nest_519==0) {
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
            tail_520=info->p;
            buffer_append(result_486,head_518,tail_520-head_518);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_521=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_522=info->p;
            buffer_append(result_486,head_521,tail_522-head_521);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_523=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_524=info->p;
            buffer_append(result_486,head_523,tail_524-head_523);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_525=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_526=info->p;
            buffer_append(result_486,head_525,tail_526-head_525);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_527=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_528=info->p;
            buffer_append(result_486,head_527,tail_528-head_527);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_529=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_530=info->p;
            buffer_append(result_486,head_529,tail_530-head_529);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_531=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_532=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_532++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_532--;
                        if(                        brace_num_532==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_533=info->p;
            buffer_append(result_486,head_531,tail_533-head_531);
        }
        else {
            break;
        }
    }
    __result_obj__254 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value345=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1112, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_485)),(char*)come_increment_ref_count(buffer_to_string(result_486))))));
    /*c*/ come_call_finalizer3(asm_fun_name_485,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_486,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value345,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__254,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
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
struct tuple2$2char$phchar$ph* __result_obj__251;
void* __right_value341 = (void*)0;
struct tuple2$2char$phchar$ph* result_534;
void* __right_value342 = (void*)0;
char* __dec_obj81;
void* __right_value343 = (void*)0;
char* __dec_obj82;
struct tuple2$2char$phchar$ph* __result_obj__252;
    if(    self==(void*)0) {
        __result_obj__251 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__251,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__251;
    }
    result_534=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj81=result_534->v1,
        result_534->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phchar$ph_clone", 4, "char*"));
        __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj82=result_534->v2,
        result_534->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2char$phchar$ph_clone", 5, "char*"));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__252 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(result_534);
    /*c*/ come_call_finalizer3(result_534,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__252,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_535;
    result_535=0;
    result_535+=int_get_hash_key(((int)self->v1));
    result_535+=int_get_hash_key(((int)self->v2));
    return result_535;
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
struct tuple2$2char$phchar$ph* __result_obj__253;
    __dec_obj83=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj84=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__253 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__253,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__253;
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
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct buffer* asm_fun_name_536;
void* __right_value348 = (void*)0;
char* attribute_537;
int nest_538;
int nest_539;
int nest_540;
int nest_541;
int nest_542;
void* __right_value349 = (void*)0;
char* __dec_obj85;
int len_543;
_Bool in_dquort_544;
int brace_num_545;
int brace_num_546;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__255;
    asm_fun_name_536=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1117, "struct buffer*"))));
    attribute_537=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_538=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_538++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_538--;
                        if(                        nest_538==0) {
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
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
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
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
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
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
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
            __dec_obj85=attribute_537,
            attribute_537=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_543=0;
            if(            *info->p==40) {
                in_dquort_544=(_Bool)0;
                brace_num_545=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_544=!in_dquort_544;
                    }
                    else if(                    in_dquort_544) {
                        buffer_append_char(asm_fun_name_536,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_545++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_545--;
                        if(                        brace_num_545==0) {
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
                brace_num_546=0;
                while(*info->p) {
                    if(                    *info->p==40) {
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
        else {
            break;
        }
    }
    __result_obj__255 = (struct tuple2$2char$phchar$ph*)come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value352=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1386, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_536)),(char*)come_increment_ref_count(attribute_537)))));
    /*c*/ come_call_finalizer3(asm_fun_name_536,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute_537 = come_decrement_ref_count(attribute_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value352,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__255,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__255;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value353 = (void*)0;
char* __dec_obj86;
char* head_547;
int head_sline_548;
void* __right_value354 = (void*)0;
char* buf_549;
void* __right_value355 = (void*)0;
struct sNode* node_550;
_Bool Value_551;
    while(*info->p) {
        __dec_obj86=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count((char*)come_memdup(info->sname, "05function.c", 1392, "char*"));
        __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        head_547=info->p;
        head_sline_548=info->sline;
        buf_549=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_549 = come_decrement_ref_count(buf_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_550=(struct sNode*)come_increment_ref_count(top_level_v99(buf_549,head_547,head_sline_548,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_550!=((void*)0)) {
            Value_551=node_compile(node_550,info);
            if(            !Value_551) {
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
            (buf_549 = come_decrement_ref_count(buf_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_550) ? node_550 = come_decrement_ref_count(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_549 = come_decrement_ref_count(buf_549, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_550) ? node_550 = come_decrement_ref_count(node_550, ((struct sNode*)node_550)->finalize, ((struct sNode*)node_550)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value356 = (void*)0;
char* name_552;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* result_type_553;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1sType$ph* param_types_554;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1char$ph* param_names_555;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1char$ph* param_default_parametors_556;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
struct sFun* fun_557;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
char* name_579;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* result_type_580;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct list$1sType$ph* param_types_581;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1char$ph* param_names_582;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1char$ph* param_default_parametors_583;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sFun* fun_584;
void* __right_value390 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_552=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_553=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1442, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_554=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1443, "struct list$1sType$ph*"))));
        param_names_555=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1444, "struct list$1char$ph*"))));
        param_default_parametors_556=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1445, "struct list$1char$ph*"))));
        fun_557=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1446, "struct sFun*")),(char*)come_increment_ref_count(name_552),(struct sType*)come_increment_ref_count(result_type_553),(struct list$1sType$ph*)come_increment_ref_count(param_types_554),(struct list$1char$ph*)come_increment_ref_count(param_names_555),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_556),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_552)),(struct sFun*)come_increment_ref_count(fun_557));
        (name_552 = come_decrement_ref_count(name_552, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_553,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_554,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_555,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_556,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_557,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_579=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_580=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1455, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_581=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1456, "struct list$1sType$ph*"))));
        param_names_582=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1457, "struct list$1char$ph*"))));
        param_default_parametors_583=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1458, "struct list$1char$ph*"))));
        fun_584=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1459, "struct sFun*")),(char*)come_increment_ref_count(name_579),(struct sType*)come_increment_ref_count(result_type_580),(struct list$1sType$ph*)come_increment_ref_count(param_types_581),(struct list$1char$ph*)come_increment_ref_count(param_names_582),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_583),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_579)),(struct sFun*)come_increment_ref_count(fun_584));
        (name_579 = come_decrement_ref_count(name_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_580,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_581,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_582,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_583,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_584,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_575;
unsigned int it_576;
_Bool same_key_exist_577;
char* it2_578;
struct map$2char$phsFun$ph* __result_obj__266;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_575=string_get_hash_key(((char*)key))%self->size;
    it_576=hash_575;
    while((_Bool)1) {
        if(        self->item_existance[it_576]) {
            if(            string_equals(self->keys[it_576],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_576]);
                    (self->keys[it_576] = come_decrement_ref_count(self->keys[it_576], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_576]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_576]);
                    self->keys[it_576]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_576],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_576]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_576]=item;
                }
                break;
            }
            it_576++;
            if(            it_576>=self->size) {
                it_576=0;
            }
            else if(            it_576==hash_575) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_576]=(_Bool)1;
            if(            1) {
                self->keys[it_576]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_576]=key;
            }
            if(            1) {
                self->items[it_576]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_576]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_577=(_Bool)0;
    for(    it2_578=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_578=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_578,key)) {
            same_key_exist_577=(_Bool)1;
        }
    }
    if(    !same_key_exist_577) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__266 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_558;
void* __right_value370 = (void*)0;
char** keys_559;
void* __right_value371 = (void*)0;
struct sFun** items_560;
void* __right_value372 = (void*)0;
_Bool* item_existance_561;
int len_562;
char* it_565;
struct sFun* default_value_568;
void* __right_value373 = (void*)0;
struct sFun* it2_569;
unsigned int hash_572;
int n_573;
struct sFun* default_value_574;
void* __right_value374 = (void*)0;
default_value_568 = (void*)0;
default_value_574 = (void*)0;
    size_558=self->size*10;
    keys_559=(char**)come_increment_ref_count(((char**)(__right_value370=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_558)), "./comelang.h", 2165, "char**"))));
    items_560=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value371=(struct sFun**)come_calloc_v2(1, sizeof(struct sFun*)*(1*(size_558)), "./comelang.h", 2166, "struct sFun**"))));
    item_existance_561=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value372=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_558)), "./comelang.h", 2167, "_Bool*"))));
    len_562=0;
    for(    it_565=map$2char$phsFun$ph_begin(self);    !map$2char$phsFun$ph_end(self);    it_565=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_568,0,sizeof(struct sFun*));
        it2_569=((struct sFun*)(__right_value373=map$2char$phsFun$ph_at(self,it_565,(struct sFun*)come_increment_ref_count(default_value_568))));
        /*c*/ come_call_finalizer3(__right_value373,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_572=string_get_hash_key(((char*)it_565))%size_558;
        n_573=hash_572;
        while((_Bool)1) {
            if(            item_existance_561[n_573]) {
                n_573++;
                if(                n_573>=size_558) {
                    n_573=0;
                }
                else if(                n_573==hash_572) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_561[n_573]=(_Bool)1;
                keys_559[n_573]=it_565;
                items_560[n_573]=((struct sFun*)(__right_value374=map$2char$phsFun$ph_at(self,it_565,(struct sFun*)come_increment_ref_count(default_value_574))));
                /*c*/ come_call_finalizer3(__right_value374,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_562++;
                /*c*/ come_call_finalizer3(default_value_574,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_574,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_568,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_559;
    self->items=items_560;
    self->item_existance=item_existance_561;
    self->size=size_558;
    self->len=len_562;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_563;
char* __result_obj__256;
char* __result_obj__257;
char* result_564;
char* __result_obj__258;
result_563 = (void*)0;
result_564 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_563,0,sizeof(char*));
        __result_obj__256 = result_563;
        return __result_obj__256;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__257 = self->key_list->it->item;
        return __result_obj__257;
    }
    memset(&result_564,0,sizeof(char*));
    __result_obj__258 = result_564;
    return __result_obj__258;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_566;
char* __result_obj__259;
char* __result_obj__260;
char* result_567;
char* __result_obj__261;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_566,0,sizeof(char*));
        __result_obj__259 = result_566;
        return __result_obj__259;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__260 = self->key_list->it->item;
        return __result_obj__260;
    }
    memset(&result_567,0,sizeof(char*));
    __result_obj__261 = result_567;
    return __result_obj__261;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_570;
unsigned int it_571;
struct sFun* __result_obj__262;
struct sFun* __result_obj__263;
struct sFun* __result_obj__264;
struct sFun* __result_obj__265;
    hash_570=string_get_hash_key(((char*)key))%self->size;
    it_571=hash_570;
    while((_Bool)1) {
        if(        self->item_existance[it_571]) {
            if(            string_equals(self->keys[it_571],key)) {
                __result_obj__262 = (struct sFun*)come_increment_ref_count(self->items[it_571]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__262,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__262;
            }
            it_571++;
            if(            it_571>=self->size) {
                it_571=0;
            }
            else if(            it_571==hash_570) {
                __result_obj__263 = (struct sFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__263,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__263;
            }
        }
        else {
            __result_obj__264 = (struct sFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__264,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__264;
        }
    }
    __result_obj__265 = (struct sFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_585;
_Bool is_type_name_flag_586;
int sline_587;
_Bool define_struct_nobody_588;
char* p_589;
int sline_590;
void* __right_value391 = (void*)0;
char* word_591;
_Bool define_function_pointer_result_function_592;
_Bool define_variable_between_brace_593;
char* p_594;
void* __right_value392 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* result_type_595=0;
char* fun_name_596=0;
_Bool err_597=0;
void* __right_value393 = (void*)0;
char* word_598;
_Bool define_function_flag_599;
char* p_600;
void* __right_value394 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_601=0;
char* fun_name_602=0;
_Bool err_603=0;
char* word_604;
void* __right_value395 = (void*)0;
char* __dec_obj87;
void* __right_value396 = (void*)0;
char* __dec_obj88;
char* __dec_obj89;
void* __right_value397 = (void*)0;
char* __dec_obj90;
_Bool define_variable_605;
char* p_606;
void* __right_value398 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_607=0;
char* fun_name_608=0;
_Bool err_609=0;
void* __right_value399 = (void*)0;
char* word_610;
void* __right_value400 = (void*)0;
char* word_611;
char* p_612;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
char* word_613;
void* __right_value404 = (void*)0;
char* __dec_obj91;
void* __right_value405 = (void*)0;
char* word_614;
void* __right_value406 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c16_615=0;
char* Err_616=0;
void* __right_value407 = (void*)0;
char* word_617;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* node_618;
struct sNode* __result_obj__267;
void* __right_value410 = (void*)0;
struct sNode* __result_obj__268;
char* header_head_619;
void* __right_value411 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* result_type_620=0;
char* fun_name_621=0;
_Bool err_622=0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1sType$ph* param_types_623;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct list$1char$ph* param_names_624;
void* __right_value416 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* param_type_625=0;
char* param_name_626=0;
_Bool err_627=0;
void* __right_value417 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_c17_628=0;
char* Err_629=0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_634=0;
char* Err_635=0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1sType$ph* param_types2_636;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1char$ph* param_names2_637;
void* __right_value428 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var25 = (void*)0;
struct sType* param_type_638=0;
char* param_name_639=0;
_Bool err_640=0;
void* __right_value429 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c19_641=0;
char* Err_642=0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_644=0;
char* Err_645=0;
char* header_tail_646;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* result_type2_647;
struct sType* __dec_obj95;
void* __right_value436 = (void*)0;
struct list$1sType$ph* __dec_obj96;
void* __right_value437 = (void*)0;
struct list$1char$ph* __dec_obj97;
_Bool var_args_648;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1char$ph* param_default_parametors_649;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sFun* fun_650;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value496 = (void*)0;
struct sNode* result_651;
struct sNode* __result_obj__294;
void* __right_value497 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_687=0;
char* Err_688=0;
void* __right_value498 = (void*)0;
struct sNode* node_689;
struct sNode* __result_obj__295;
void* __right_value499 = (void*)0;
struct sNode* node_690;
struct sNode* __result_obj__296;
void* __right_value500 = (void*)0;
struct sNode* node_691;
char* source_tail_692;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct buffer* header_693;
struct sNode* __result_obj__297;
void* __right_value503 = (void*)0;
char* buf2_694;
void* __right_value504 = (void*)0;
struct sNode* __result_obj__298;
    info->in_top_level=(_Bool)1;
    source_head_585=info->p;
    is_type_name_flag_586=is_type_name(buf,info);
    sline_587=info->sline;
    define_struct_nobody_588=(_Bool)0;
    {
        p_589=info->p;
        sline_590=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_591=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_588=(_Bool)1;
                }
                (word_591 = come_decrement_ref_count(word_591, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_590;
    }
    define_function_pointer_result_function_592=(_Bool)0;
    define_variable_between_brace_593=(_Bool)0;
    if(    is_type_name_flag_586) {
        p_594=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value392=backtrace_parse_type((_Bool)0,info)));
            result_type_595=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            fun_name_596=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_597=multiple_assign_var17->v3;
            /*c*/ come_call_finalizer3(__right_value392,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_592=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_598=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_598,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_593=(_Bool)1;
                            }
                        }
                        (word_598 = come_decrement_ref_count(word_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            /*c*/ come_call_finalizer3(result_type_595,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_596 = come_decrement_ref_count(fun_name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_587;
    }
    define_function_flag_599=(_Bool)0;
    if(    is_type_name_flag_586&&!define_function_pointer_result_function_592&&charp_operator_not_equals(buf,"__typeof__")) {
        p_600=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value394=backtrace_parse_type((_Bool)0,info)));
            result_type_601=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_602=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_603=multiple_assign_var18->v3;
            /*c*/ come_call_finalizer3(__right_value394,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_601,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_602 = come_decrement_ref_count(fun_name_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_604=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj87=word_604,
                word_604=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(word_604,"extern")) {
                    __dec_obj88=word_604,
                    word_604=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj89=word_604,
                word_604=((void*)0);
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_604) {
                if(                is_type_name(word_604,info)) {
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
                        __dec_obj90=word_604,
                        word_604=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                }
                if(                strlen(word_604)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_586) {
                        define_function_flag_599=(_Bool)1;
                    }
                }
            }
            (word_604 = come_decrement_ref_count(word_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_600;
        info->sline=sline_587;
    }
    define_variable_605=(_Bool)1;
    if(    is_type_name_flag_586&&!define_function_pointer_result_function_592) {
        p_606=info->p;
        info->p=head;
        if(        !is_type_name_flag_586) {
            define_variable_605=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value398=backtrace_parse_type((_Bool)0,info)));
            result_type_607=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_608=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_609=multiple_assign_var19->v3;
            /*c*/ come_call_finalizer3(__right_value398,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_610=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_605=(_Bool)1;
                            }
                        }
                        (word_610 = come_decrement_ref_count(word_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_611=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_611,info)&&*info->p!=40) {
                            define_variable_605=(_Bool)1;
                        }
                    }
                    (word_611 = come_decrement_ref_count(word_611, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(result_type_607,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_608 = come_decrement_ref_count(fun_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_605=(_Bool)0;
        }
        else if(        define_variable_605) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_605=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_605=(_Bool)0;
            }
        }
        info->p=p_606;
        info->sline=sline_587;
    }
    else {
        define_variable_605=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_592) {
        p_612=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value401=parse_struct_attribute(info)));
            (__right_value401 = come_decrement_ref_count(__right_value401, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value402=parse_word(info)));
                (__right_value402 = come_decrement_ref_count(__right_value402, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_613=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj91=word_613,
                        word_613=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_613,"extends")) {
                            define_variable_605=(_Bool)0;
                        }
                    }
                    (word_613 = come_decrement_ref_count(word_613, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_605=(_Bool)0;
        }
        else if(        define_variable_605) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_605=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_605=(_Bool)0;
            }
        }
        info->p=p_612;
        info->sline=sline_587;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_614=(char*)come_increment_ref_count(parse_word(info));
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
                    multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value406=err_msg(info,"unexpected source end")));
                    come_exception_var_c16_615=multiple_assign_var20->v1;
                    Err_616=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                    ((Err_616)?(puts(Err_616),exit(2)):(0));
                    /*c*/ come_call_finalizer3(__right_value406,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_616 = come_decrement_ref_count(Err_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_617=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(word_617, "05function.c", 1754, "char*")));
                    (word_617 = come_decrement_ref_count(word_617, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_618=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__267 = (struct sNode*)come_increment_ref_count(node_618);
            ((node_618) ? node_618 = come_decrement_ref_count(node_618, ((struct sNode*)node_618)->finalize, ((struct sNode*)node_618)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_614 = come_decrement_ref_count(word_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__267) ? __result_obj__267 = come_decrement_ref_count(__result_obj__267, ((struct sNode*)__result_obj__267)->finalize, ((struct sNode*)__result_obj__267)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__267;
            ((node_618) ? node_618 = come_decrement_ref_count(node_618, ((struct sNode*)node_618)->finalize, ((struct sNode*)node_618)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_614 = come_decrement_ref_count(word_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_588) {
    }
    else if(    define_variable_between_brace_593) {
        info->p=head;
        info->sline=sline_587;
        __result_obj__268 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value410=parse_global_variable(info))));
        ((__right_value410) ? __right_value410 = come_decrement_ref_count(__right_value410, ((struct sNode*)__right_value410)->finalize, ((struct sNode*)__right_value410)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__268) ? __result_obj__268 = come_decrement_ref_count(__result_obj__268, ((struct sNode*)__result_obj__268)->finalize, ((struct sNode*)__result_obj__268)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__268;
    }
    else if(    define_function_pointer_result_function_592) {
        header_head_619=info->p;
        multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value411=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_620=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
        fun_name_621=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        err_622=multiple_assign_var21->v3;
        /*c*/ come_call_finalizer3(__right_value411,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_623=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1783, "struct list$1sType$ph*"))));
            param_names_624=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1784, "struct list$1char$ph*"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value416=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_625=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                    param_name_626=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    err_627=multiple_assign_var22->v3;
                    /*c*/ come_call_finalizer3(__right_value416,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_627) {
                        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value417=err_msg(info,"parse_type is failed")));
                        come_exception_var_c17_628=multiple_assign_var23->v1;
                        Err_629=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                        ((Err_629)?(puts(Err_629),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value417,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_629 = come_decrement_ref_count(Err_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph_push_back(param_types_623,(struct sType*)come_increment_ref_count(param_type_625));
                    static int num_function_pointer_result_var_name_a_633=0;
                    list$1char$ph_push_back(param_names_624,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_633)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value422=parse_word(info)));
                        (__right_value422 = come_decrement_ref_count(__right_value422, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*c*/ come_call_finalizer3(param_type_625,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_626 = come_decrement_ref_count(param_name_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value423=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c18_634=multiple_assign_var24->v1;
                        Err_635=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_635)?(puts(Err_635),exit(2)):(0));
                        /*c*/ come_call_finalizer3(__right_value423,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_635 = come_decrement_ref_count(Err_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    /*c*/ come_call_finalizer3(param_type_625,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_626 = come_decrement_ref_count(param_name_626, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_636=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1830, "struct list$1sType$ph*"))));
                param_names2_637=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1831, "struct list$1char$ph*"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var25=((struct tuple3$3sType$phchar$phbool$*)(__right_value428=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_638=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                        param_name_639=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        err_640=multiple_assign_var25->v3;
                        /*c*/ come_call_finalizer3(__right_value428,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        !err_640) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value429=err_msg(info,"parse_type is failed")));
                            come_exception_var_c19_641=multiple_assign_var26->v1;
                            Err_642=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_642)?(puts(Err_642),exit(2)):(0));
                            /*c*/ come_call_finalizer3(__right_value429,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_642 = come_decrement_ref_count(Err_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph_push_back(param_types2_636,(struct sType*)come_increment_ref_count(param_type_638));
                        static int num_function_pointer_result_var_name_b_643=0;
                        list$1char$ph_push_back(param_names2_637,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_643)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value431=parse_word(info)));
                            (__right_value431 = come_decrement_ref_count(__right_value431, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*c*/ come_call_finalizer3(param_type_638,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (param_name_639 = come_decrement_ref_count(param_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value432=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c20_644=multiple_assign_var27->v1;
                            Err_645=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_645)?(puts(Err_645),exit(2)):(0));
                            /*c*/ come_call_finalizer3(__right_value432,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_645 = come_decrement_ref_count(Err_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        /*c*/ come_call_finalizer3(param_type_638,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_639 = come_decrement_ref_count(param_name_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_646=info->p;
                result_type2_647=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 1873, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj95=result_type2_647->mResultType,
                result_type2_647->mResultType=(struct sType*)come_increment_ref_count(result_type_620);
                /*b*/ come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj96=result_type2_647->mParamTypes,
                result_type2_647->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types2_636));
                /*b*/ come_call_finalizer3(__dec_obj96,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj97=result_type2_647->mParamNames,
                result_type2_647->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(param_names2_637));
                /*b*/ come_call_finalizer3(__dec_obj97,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_647->mVarArgs=(_Bool)0;
                result_type2_647->mStatic=(_Bool)0;
                var_args_648=(_Bool)0;
                param_default_parametors_649=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1883, "struct list$1char$ph*"))));
                fun_650=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 1885, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_621)),(struct sType*)come_increment_ref_count(result_type2_647),(struct list$1sType$ph*)come_increment_ref_count(param_types_623),(struct list$1char$ph*)come_increment_ref_count(param_names_624),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_649),(_Bool)1,var_args_648,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_621)),(struct sFun*)come_increment_ref_count(fun_650));
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 1897, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value447=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 1897, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_650),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_651=(struct sNode*)come_increment_ref_count(_inf_value2);
                /*c*/ come_call_finalizer3(__right_value447,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__294 = (struct sNode*)come_increment_ref_count(result_651);
                /*c*/ come_call_finalizer3(param_types2_636,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_637,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_649,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_650,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_651) ? result_651 = come_decrement_ref_count(result_651, ((struct sNode*)result_651)->finalize, ((struct sNode*)result_651)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(param_types_623,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_624,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_620,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_621 = come_decrement_ref_count(fun_name_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__294) ? __result_obj__294 = come_decrement_ref_count(__result_obj__294, ((struct sNode*)__result_obj__294)->finalize, ((struct sNode*)__result_obj__294)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__294;
                /*c*/ come_call_finalizer3(param_types2_636,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_637,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_647,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_649,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_650,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_651) ? result_651 = come_decrement_ref_count(result_651, ((struct sNode*)result_651)->finalize, ((struct sNode*)result_651)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value497=err_msg(info,"require (")));
                come_exception_var_c21_687=multiple_assign_var28->v1;
                Err_688=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_688)?(puts(Err_688),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value497,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_688 = come_decrement_ref_count(Err_688, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(param_types_623,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_624,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(result_type_620,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_621 = come_decrement_ref_count(fun_name_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_587;
        node_689=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__295 = (struct sNode*)come_increment_ref_count(node_689);
        ((node_689) ? node_689 = come_decrement_ref_count(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__295) ? __result_obj__295 = come_decrement_ref_count(__result_obj__295, ((struct sNode*)__result_obj__295)->finalize, ((struct sNode*)__result_obj__295)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__295;
        ((node_689) ? node_689 = come_decrement_ref_count(node_689, ((struct sNode*)node_689)->finalize, ((struct sNode*)node_689)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_599) {
        info->p=head;
        info->sline=sline_587;
        node_690=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__296 = (struct sNode*)come_increment_ref_count(node_690);
        ((node_690) ? node_690 = come_decrement_ref_count(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__296) ? __result_obj__296 = come_decrement_ref_count(__result_obj__296, ((struct sNode*)__result_obj__296)->finalize, ((struct sNode*)__result_obj__296)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__296;
        ((node_690) ? node_690 = come_decrement_ref_count(node_690, ((struct sNode*)node_690)->finalize, ((struct sNode*)node_690)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_605) {
        info->p=head;
        info->sline=sline_587;
        node_691=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_692=info->p;
        header_693=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 1931, "struct buffer*"))));
        buffer_append(header_693,source_head_585,source_tail_692-source_head_585);
        __result_obj__297 = (struct sNode*)come_increment_ref_count(node_691);
        ((node_691) ? node_691 = come_decrement_ref_count(node_691, ((struct sNode*)node_691)->finalize, ((struct sNode*)node_691)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_693,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__result_obj__297) ? __result_obj__297 = come_decrement_ref_count(__result_obj__297, ((struct sNode*)__result_obj__297)->finalize, ((struct sNode*)__result_obj__297)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__297;
        ((node_691) ? node_691 = come_decrement_ref_count(node_691, ((struct sNode*)node_691)->finalize, ((struct sNode*)node_691)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_693,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->p=head;
    info->sline=sline_587;
    buf2_694=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__298 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value504=top_level_v98(buf2_694,head,head_sline,info))));
    (buf2_694 = come_decrement_ref_count(buf2_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value504) ? __right_value504 = come_decrement_ref_count(__right_value504, ((struct sNode*)__right_value504)->finalize, ((struct sNode*)__right_value504)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
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
void* __right_value418 = (void*)0;
struct list_item$1sType$ph* litem_630;
struct sType* __dec_obj92;
void* __right_value419 = (void*)0;
struct list_item$1sType$ph* litem_631;
struct sType* __dec_obj93;
void* __right_value420 = (void*)0;
struct list_item$1sType$ph* litem_632;
struct sType* __dec_obj94;
struct list$1sType$ph* __result_obj__269;
    if(    self->len==0) {
        litem_630=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value418=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1111, "struct list_item$1sType$ph*"))));
        litem_630->prev=((void*)0);
        litem_630->next=((void*)0);
        __dec_obj92=litem_630->item,
        litem_630->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_630;
        self->head=litem_630;
    }
    else if(    self->len==1) {
        litem_631=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value419=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1121, "struct list_item$1sType$ph*"))));
        litem_631->prev=self->head;
        litem_631->next=((void*)0);
        __dec_obj93=litem_631->item,
        litem_631->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_631;
        self->head->next=litem_631;
    }
    else {
        litem_632=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value420=(struct list_item$1sType$ph*)come_calloc_v2(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1131, "struct list_item$1sType$ph*"))));
        litem_632->prev=self->tail;
        litem_632->next=((void*)0);
        __dec_obj94=litem_632->item,
        litem_632->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj94,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_632;
        self->tail=litem_632;
    }
    self->len++;
    __result_obj__269 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__269;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__270;
void* __right_value448 = (void*)0;
struct sFunNode* result_652;
void* __right_value449 = (void*)0;
char* __dec_obj98;
void* __right_value495 = (void*)0;
struct sFun* __dec_obj121;
struct sFunNode* __result_obj__293;
    if(    self==(void*)0) {
        __result_obj__270 = (void*)0;
        return __result_obj__270;
    }
    result_652=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)) {
        result_652->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj98=result_652->sname,
        result_652->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFunNode_clone", 5, "char*"));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_652->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj121=result_652->mFun,
        result_652->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        /*b*/ come_call_finalizer3(__dec_obj121,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__293 = result_652;
    /*c*/ come_call_finalizer3(result_652,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__293;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__271;
void* __right_value450 = (void*)0;
struct sFun* result_653;
void* __right_value451 = (void*)0;
char* __dec_obj99;
void* __right_value452 = (void*)0;
struct sType* __dec_obj100;
void* __right_value453 = (void*)0;
struct list$1sType$ph* __dec_obj101;
void* __right_value454 = (void*)0;
struct list$1char$ph* __dec_obj102;
void* __right_value455 = (void*)0;
struct list$1char$ph* __dec_obj103;
void* __right_value456 = (void*)0;
struct sType* __dec_obj104;
void* __right_value488 = (void*)0;
struct sBlock* __dec_obj114;
void* __right_value489 = (void*)0;
struct buffer* __dec_obj115;
void* __right_value490 = (void*)0;
struct buffer* __dec_obj116;
void* __right_value491 = (void*)0;
struct buffer* __dec_obj117;
void* __right_value492 = (void*)0;
struct buffer* __dec_obj118;
void* __right_value493 = (void*)0;
char* __dec_obj119;
void* __right_value494 = (void*)0;
char* __dec_obj120;
struct sFun* __result_obj__292;
    if(    self==(void*)0) {
        __result_obj__271 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__271,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__271;
    }
    result_653=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj99=result_653->mName,
        result_653->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sFun_clone", 4, "char*"));
        __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj100=result_653->mResultType,
        result_653->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj101=result_653->mParamTypes,
        result_653->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj101,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj102=result_653->mParamNames,
        result_653->mParamNames=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj102,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj103=result_653->mParamDefaultParametors,
        result_653->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(self->mParamDefaultParametors));
        /*b*/ come_call_finalizer3(__dec_obj103,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj104=result_653->mLambdaType,
        result_653->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        /*b*/ come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj114=result_653->mBlock,
        result_653->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj114,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj115=result_653->mSource,
        result_653->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        /*b*/ come_call_finalizer3(__dec_obj115,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj116=result_653->mSourceHead,
        result_653->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        /*b*/ come_call_finalizer3(__dec_obj116,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj117=result_653->mSourceHead2,
        result_653->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        /*b*/ come_call_finalizer3(__dec_obj117,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj118=result_653->mSourceDefer,
        result_653->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        /*b*/ come_call_finalizer3(__dec_obj118,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_653->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_653->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_653->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_653->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_653->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_653->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_653->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_653->mConstFun=self->mConstFun;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj119=result_653->mAttribute,
        result_653->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sFun_clone", 23, "char*"));
        __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj120=result_653->mFunAttribute,
        result_653->mFunAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mFunAttribute, "sFun_clone", 24, "char*"));
        __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__292 = (struct sFun*)come_increment_ref_count(result_653);
    /*c*/ come_call_finalizer3(result_653,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__292,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__272;
void* __right_value457 = (void*)0;
struct sBlock* result_654;
void* __right_value458 = (void*)0;
struct list$1sNode$ph* __dec_obj105;
void* __right_value487 = (void*)0;
struct sVarTable* __dec_obj113;
struct sBlock* __result_obj__291;
    if(    self==(void*)0) {
        __result_obj__272 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__272,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__272;
    }
    result_654=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc_v2(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj105=result_654->mNodes,
        result_654->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_clone(self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj105,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj113=result_654->mVarTable,
        result_654->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj113,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_654->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__291 = (struct sBlock*)come_increment_ref_count(result_654);
    /*c*/ come_call_finalizer3(result_654,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__291,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__291;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__273;
void* __right_value459 = (void*)0;
struct sVarTable* result_655;
void* __right_value486 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj112;
struct sVarTable* __result_obj__290;
    if(    self==(void*)0) {
        __result_obj__273 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__273,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__273;
    }
    result_655=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc_v2(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj112=result_655->mVars,
        result_655->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_clone(self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj112,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_655->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_655->mParent=self->mParent;
    }
    __result_obj__290 = (struct sVarTable*)come_increment_ref_count(result_655);
    /*c*/ come_call_finalizer3(result_655,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__290,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__290;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__274;
void* __right_value460 = (void*)0;
void* __right_value466 = (void*)0;
struct map$2char$phsVar$ph* result_659;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1char$ph* __dec_obj107;
char* it_662;
struct sVar* default_value_665;
void* __right_value469 = (void*)0;
struct sVar* it2_668;
void* __right_value475 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__289;
default_value_665 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__274 = (void*)come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__274,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__274;
    }
    result_659=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc_v2(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 1997, "struct map$2char$phsVar$ph*"))));
    __dec_obj107=result_659->key_list,
    result_659->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1999, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj107,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_662=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_662=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_665,0,sizeof(struct sVar*));
        it2_668=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_662,(struct sVar*)come_increment_ref_count(default_value_665)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_659,(char*)come_increment_ref_count((char*)come_memdup(it_662, "./comelang.h", 2008, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_668)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_659,(char*)come_increment_ref_count((char*)come_memdup(it_662, "./comelang.h", 2011, "char*")),(struct sVar*)come_increment_ref_count(sVar_clone(it2_668)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_659,(char*)come_increment_ref_count(it_662),(struct sVar*)come_increment_ref_count(sVar_clone(it2_668)));
        }
        else {
            map$2char$phsVar$ph_put(result_659,(char*)come_increment_ref_count(it_662),(struct sVar*)come_increment_ref_count(sVar_clone(it2_668)));
        }
        /*c*/ come_call_finalizer3(default_value_665,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_668,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__289 = (struct map$2char$phsVar$ph*)come_increment_ref_count(result_659);
    /*c*/ come_call_finalizer3(result_659,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__289,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_656;
int i_657;
    for(    i_656=0;    i_656<self->size;    i_656++    ){
        if(        self->item_existance[i_656]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_656],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_657=0;    i_657<self->size;    i_657++    ){
        if(        self->item_existance[i_657]) {
            if(            1) {
                (self->keys[i_657] = come_decrement_ref_count(self->keys[i_657], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
int i_658;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct list$1char$ph* __dec_obj106;
struct map$2char$phsVar$ph* __result_obj__275;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value461=(char**)come_calloc_v2(1, sizeof(char*)*(1*(128)), "./comelang.h", 1926, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value462=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1927, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value463=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1928, "_Bool*"))));
    for(    i_658=0;    i_658<128;    i_658++    ){
        self->item_existance[i_658]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj106=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 1938, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj106,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__275 = (struct map$2char$phsVar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__275,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__275;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_660;
char* __result_obj__276;
char* __result_obj__277;
char* result_661;
char* __result_obj__278;
result_660 = (void*)0;
result_661 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_660,0,sizeof(char*));
        __result_obj__276 = result_660;
        return __result_obj__276;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__277 = self->key_list->it->item;
        return __result_obj__277;
    }
    memset(&result_661,0,sizeof(char*));
    __result_obj__278 = result_661;
    return __result_obj__278;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_663;
char* __result_obj__279;
char* __result_obj__280;
char* result_664;
char* __result_obj__281;
result_663 = (void*)0;
result_664 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_663,0,sizeof(char*));
        __result_obj__279 = result_663;
        return __result_obj__279;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__280 = self->key_list->it->item;
        return __result_obj__280;
    }
    memset(&result_664,0,sizeof(char*));
    __result_obj__281 = result_664;
    return __result_obj__281;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_666;
unsigned int it_667;
struct sVar* __result_obj__282;
struct sVar* __result_obj__283;
struct sVar* __result_obj__284;
struct sVar* __result_obj__285;
    hash_666=string_get_hash_key(((char*)key))%self->size;
    it_667=hash_666;
    while((_Bool)1) {
        if(        self->item_existance[it_667]) {
            if(            string_equals(self->keys[it_667],key)) {
                __result_obj__282 = (struct sVar*)come_increment_ref_count(self->items[it_667]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__282,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__282;
            }
            it_667++;
            if(            it_667>=self->size) {
                it_667=0;
            }
            else if(            it_667==hash_666) {
                __result_obj__283 = (struct sVar*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__283,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__283;
            }
        }
        else {
            __result_obj__284 = (struct sVar*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__284,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__284;
        }
    }
    __result_obj__285 = (struct sVar*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__285,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_680;
int it_681;
_Bool same_key_exist_682;
char* it2_683;
struct map$2char$phsVar$ph* __result_obj__286;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_680=string_get_hash_key(((char*)key))%self->size;
    it_681=hash_680;
    while((_Bool)1) {
        if(        self->item_existance[it_681]) {
            if(            string_equals(self->keys[it_681],key)) {
                if(                1) {
                    (self->keys[it_681] = come_decrement_ref_count(self->keys[it_681], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_681]);
                    self->keys[it_681]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_681]);
                    self->keys[it_681]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_681],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_681]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_681]=item;
                }
                break;
            }
            it_681++;
            if(            it_681>=self->size) {
                it_681=0;
            }
            else if(            it_681==hash_680) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_681]=(_Bool)1;
            if(            1) {
                self->keys[it_681]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_681]=key;
            }
            if(            1) {
                self->items[it_681]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_681]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_682=(_Bool)0;
    for(    it2_683=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_683=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_683,key)) {
            same_key_exist_682=(_Bool)1;
        }
    }
    if(    !same_key_exist_682) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__286 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__286;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_669;
void* __right_value470 = (void*)0;
char** keys_670;
void* __right_value471 = (void*)0;
struct sVar** items_671;
void* __right_value472 = (void*)0;
_Bool* item_existance_672;
int len_673;
char* it_674;
struct sVar* default_value_675;
void* __right_value473 = (void*)0;
struct sVar* it2_676;
unsigned int hash_677;
int n_678;
struct sVar* default_value_679;
void* __right_value474 = (void*)0;
default_value_675 = (void*)0;
default_value_679 = (void*)0;
    size_669=self->size*10;
    keys_670=(char**)come_increment_ref_count(((char**)(__right_value470=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_669)), "./comelang.h", 2165, "char**"))));
    items_671=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value471=(struct sVar**)come_calloc_v2(1, sizeof(struct sVar*)*(1*(size_669)), "./comelang.h", 2166, "struct sVar**"))));
    item_existance_672=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value472=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_669)), "./comelang.h", 2167, "_Bool*"))));
    len_673=0;
    for(    it_674=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_674=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_675,0,sizeof(struct sVar*));
        it2_676=((struct sVar*)(__right_value473=map$2char$phsVar$ph_at(self,it_674,(struct sVar*)come_increment_ref_count(default_value_675))));
        /*c*/ come_call_finalizer3(__right_value473,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_677=string_get_hash_key(((char*)it_674))%size_669;
        n_678=hash_677;
        while((_Bool)1) {
            if(            item_existance_672[n_678]) {
                n_678++;
                if(                n_678>=size_669) {
                    n_678=0;
                }
                else if(                n_678==hash_677) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_672[n_678]=(_Bool)1;
                keys_670[n_678]=it_674;
                items_671[n_678]=((struct sVar*)(__right_value474=map$2char$phsVar$ph_at(self,it_674,(struct sVar*)come_increment_ref_count(default_value_679))));
                /*c*/ come_call_finalizer3(__right_value474,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_673++;
                /*c*/ come_call_finalizer3(default_value_679,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_679,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_675,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_670;
    self->items=items_671;
    self->item_existance=item_existance_672;
    self->size=size_669;
    self->len=len_673;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__287;
void* __right_value476 = (void*)0;
struct sVar* result_684;
void* __right_value477 = (void*)0;
char* __dec_obj108;
void* __right_value478 = (void*)0;
char* __dec_obj109;
void* __right_value479 = (void*)0;
struct sType* __dec_obj110;
void* __right_value480 = (void*)0;
char* __dec_obj111;
struct sVar* __result_obj__288;
    if(    self==(void*)0) {
        __result_obj__287 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__287,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__287;
    }
    result_684=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc_v2(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj108=result_684->mName,
        result_684->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sVar_clone", 4, "char*"));
        __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj109=result_684->mCValueName,
        result_684->mCValueName=(char*)come_increment_ref_count((char*)come_memdup(self->mCValueName, "sVar_clone", 5, "char*"));
        __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj110=result_684->mType,
        result_684->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        /*b*/ come_call_finalizer3(__dec_obj110,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_684->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_684->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_684->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj111=result_684->mFunName,
        result_684->mFunName=(char*)come_increment_ref_count((char*)come_memdup(self->mFunName, "sVar_clone", 10, "char*"));
        __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__288 = (struct sVar*)come_increment_ref_count(result_684);
    /*c*/ come_call_finalizer3(result_684,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__288,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_685;
int i_686;
    for(    i_685=0;    i_685<self->size;    i_685++    ){
        if(        self->item_existance[i_685]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_685],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free_v2((char*)self->items);
    for(    i_686=0;    i_686<self->size;    i_686++    ){
        if(        self->item_existance[i_686]) {
            if(            1) {
                (self->keys[i_686] = come_decrement_ref_count(self->keys[i_686], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free_v2((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_695;
int caller_line_696;
char* caller_sname_697;
_Bool comma_instead_of_semicolon_698;
_Bool without_semicolon_699;
char* last_code_700;
char* __dec_obj122;
char* last_code2_701;
char* __dec_obj123;
void* __right_value505 = (void*)0;
char* sname_top_702;
int sline_top_703;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sFun* funX_704;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__310;
void* __right_value513 = (void*)0;
struct sType* result_type_713;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct list$1sType$ph* param_types_714;
struct list$1sType$ph* o2_saved_715;
struct sType* it_718;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct sType* param_type_721;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1char$ph* param_names_722;
void* __right_value520 = (void*)0;
struct list$1char$ph* param_default_parametors_723;
char* p_724;
int sline_725;
char* sname_726;
char* head_727;
struct buffer* source_728;
void* __right_value521 = (void*)0;
struct buffer* __dec_obj126;
struct sType* generics_type_saved_729;
void* __right_value522 = (void*)0;
struct sType* __dec_obj127;
struct list$1char$ph* method_generics_type_names_730;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1char$ph* __dec_obj128;
struct list$1char$ph* o2_saved_731;
char* it_732;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1char$ph* __dec_obj129;
char* __dec_obj130;
void* __right_value527 = (void*)0;
struct sBlock* block_733;
struct buffer* __dec_obj131;
char* __dec_obj132;
_Bool const_fun_734;
_Bool var_args_735;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sFun* fun_736;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value535 = (void*)0;
struct sNode* node_737;
_Bool in_generics_fun_738;
_Bool Value_739;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__317;
struct sType* __dec_obj133;
struct list$1char$ph* __dec_obj134;
void* __right_value539 = (void*)0;
char* __dec_obj135;
char* __dec_obj136;
char* __dec_obj137;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__318;
    caller_fun_695=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_696=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_697=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_698=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_699=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_700=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj122=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_701=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj123=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_702=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_703=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_704=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value507=__builtin_string(fun_name)))));
    (__right_value506 = come_decrement_ref_count(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value507 = come_decrement_ref_count(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_704) {
        __result_obj__310 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value512=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1972, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_700 = come_decrement_ref_count(last_code_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_701 = come_decrement_ref_count(last_code2_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_702 = come_decrement_ref_count(sname_top_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_704,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value512,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__310,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__310;
    }
    result_type_713=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info,(_Bool)0));
    param_types_714=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1978, "struct list$1sType$ph*"))));
    for(    o2_saved_715=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_718=list$1sType$ph_begin((o2_saved_715));    !list$1sType$ph_end((o2_saved_715));    it_718=list$1sType$ph_next((o2_saved_715))    ){
        param_type_721=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value516=sType_clone(it_718))),generics_type,info,(_Bool)0));
        /*c*/ come_call_finalizer3(__right_value516,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_714,(struct sType*)come_increment_ref_count(sType_clone(param_type_721)));
        /*c*/ come_call_finalizer3(param_type_721,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_715,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_722=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_723=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_724=info->p;
    sline_725=info->sline;
    sname_726=(char*)come_increment_ref_count(info->sname);
    head_727=info->head;
    source_728=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj126=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_729=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj127=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    /*b*/ come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_730=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj128=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2006, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj128,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_731=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_732=list$1char$ph_begin((o2_saved_731));    !list$1char$ph_end((o2_saved_731));    it_732=list$1char$ph_next((o2_saved_731))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_732, "05function.c", 2008, "char*")));
    }
    /*c*/ come_call_finalizer3(o2_saved_731,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj129=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj129,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj130=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_733=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_727;
    __dec_obj131=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_728);
    /*b*/ come_call_finalizer3(__dec_obj131,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_724;
    info->sline=sline_725;
    __dec_obj132=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_726);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_713->mInline=(_Bool)0;
    result_type_713->mStatic=(_Bool)0;
    result_type_713->mUniq=(_Bool)0;
    const_fun_734=generics_fun->mConstFun;
    var_args_735=generics_fun->mVarArgs;
    fun_736=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2032, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_713),(struct list$1sType$ph*)come_increment_ref_count(param_types_714),(struct list$1char$ph*)come_increment_ref_count(param_names_722),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_723),(_Bool)0,var_args_735,(struct sBlock*)come_increment_ref_count(block_733),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_734));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_736));
    _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2039, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value534=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2039, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_736),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_737=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value534,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    in_generics_fun_738=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_739=node_compile(node_737,info);
    if(    !Value_739) {
        __result_obj__317 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value538=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2044, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_700 = come_decrement_ref_count(last_code_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_701 = come_decrement_ref_count(last_code2_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_702 = come_decrement_ref_count(sname_top_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_704,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_713,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_714,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_722,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_723,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_726 = come_decrement_ref_count(sname_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_728,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type_saved_729,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_730,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_733,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_736,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_737) ? node_737 = come_decrement_ref_count(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value538,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__317,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__317;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_738;
    __dec_obj133=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_729);
    /*b*/ come_call_finalizer3(__dec_obj133,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj134=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_730);
    /*b*/ come_call_finalizer3(__dec_obj134,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj135=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_702));
    __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_703;
    __dec_obj136=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_700);
    __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj137=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_701);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_695;
    info->caller_line=caller_line_696;
    info->caller_sname=caller_sname_697;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_698;
    info->without_semicolon=without_semicolon_699;
    __result_obj__318 = (struct tuple2$2char$phbool$*)come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value542=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2065, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_700 = come_decrement_ref_count(last_code_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_701 = come_decrement_ref_count(last_code2_701, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_702 = come_decrement_ref_count(sname_top_702, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(funX_704,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_713,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_714,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_722,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_723,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_726 = come_decrement_ref_count(sname_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_728,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(generics_type_saved_729,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_730,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_733,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_736,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_737) ? node_737 = come_decrement_ref_count(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value542,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__318,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__318;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_705;
unsigned int hash_706;
unsigned int it_707;
struct sFun* __result_obj__299;
struct sFun* __result_obj__300;
struct sFun* __result_obj__301;
struct sFun* __result_obj__302;
default_value_705 = (void*)0;
    memset(&default_value_705,0,sizeof(struct sFun*));
    hash_706=string_get_hash_key(((char*)key))%self->size;
    it_707=hash_706;
    while((_Bool)1) {
        if(        self->item_existance[it_707]) {
            if(            string_equals(self->keys[it_707],key)) {
                __result_obj__299 = (struct sFun*)come_increment_ref_count(self->items[it_707]);
                /*c*/ come_call_finalizer3(default_value_705,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__299,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__299;
            }
            it_707++;
            if(            it_707>=self->size) {
                it_707=0;
            }
            else if(            it_707==hash_706) {
                __result_obj__300 = (struct sFun*)come_increment_ref_count(default_value_705);
                /*c*/ come_call_finalizer3(default_value_705,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__300,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__300;
            }
        }
        else {
            __result_obj__301 = (struct sFun*)come_increment_ref_count(default_value_705);
            /*c*/ come_call_finalizer3(default_value_705,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__301,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__301;
        }
    }
    __result_obj__302 = (struct sFun*)come_increment_ref_count(default_value_705);
    /*c*/ come_call_finalizer3(default_value_705,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__302,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static struct sFun* map$2char$phsFun$ph_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_708;
unsigned int hash_709;
unsigned int it_710;
struct sFun* __result_obj__303;
struct sFun* __result_obj__304;
struct sFun* __result_obj__305;
struct sFun* __result_obj__306;
default_value_708 = (void*)0;
    memset(&default_value_708,0,sizeof(struct sFun*));
    hash_709=string_get_hash_key(((char*)key))%self->size;
    it_710=hash_709;
    while((_Bool)1) {
        if(        self->item_existance[it_710]) {
            if(            string_equals(self->keys[it_710],key)) {
                __result_obj__303 = (struct sFun*)come_increment_ref_count(self->items[it_710]);
                /*c*/ come_call_finalizer3(default_value_708,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__303,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__303;
            }
            it_710++;
            if(            it_710>=self->size) {
                it_710=0;
            }
            else if(            it_710==hash_709) {
                __result_obj__304 = (struct sFun*)come_increment_ref_count(default_value_708);
                /*c*/ come_call_finalizer3(default_value_708,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__304,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__304;
            }
        }
        else {
            __result_obj__305 = (struct sFun*)come_increment_ref_count(default_value_708);
            /*c*/ come_call_finalizer3(default_value_708,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__305,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__305;
        }
    }
    __result_obj__306 = (struct sFun*)come_increment_ref_count(default_value_708);
    /*c*/ come_call_finalizer3(default_value_708,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__306,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__307;
void* __right_value509 = (void*)0;
struct tuple2$2char$phbool$* result_711;
void* __right_value510 = (void*)0;
char* __dec_obj124;
struct tuple2$2char$phbool$* __result_obj__308;
    if(    self==(void*)0) {
        __result_obj__307 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__307,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__307;
    }
    result_711=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc_v2(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj124=result_711->v1,
        result_711->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phbool$_clone", 4, "char*"));
        __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_711->v2=self->v2;
    }
    __result_obj__308 = (struct tuple2$2char$phbool$*)come_increment_ref_count(result_711);
    /*c*/ come_call_finalizer3(result_711,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__308,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_712;
    result_712=0;
    result_712+=int_get_hash_key(((int)self->v1));
    result_712+=int_get_hash_key(((int)self->v2));
    return result_712;
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
struct tuple2$2char$phbool$* __result_obj__309;
    __dec_obj125=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__309 = (struct tuple2$2char$phbool$*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__309,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_716;
struct sType* __result_obj__311;
struct sType* __result_obj__312;
struct sType* result_717;
struct sType* __result_obj__313;
result_716 = (void*)0;
result_717 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_716,0,sizeof(struct sType*));
        __result_obj__311 = result_716;
        return __result_obj__311;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__312 = self->it->item;
        return __result_obj__312;
    }
    memset(&result_717,0,sizeof(struct sType*));
    __result_obj__313 = result_717;
    return __result_obj__313;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_719;
struct sType* __result_obj__314;
struct sType* __result_obj__315;
struct sType* result_720;
struct sType* __result_obj__316;
result_719 = (void*)0;
result_720 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_719,0,sizeof(struct sType*));
        __result_obj__314 = result_719;
        return __result_obj__314;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__315 = self->it->item;
        return __result_obj__315;
    }
    memset(&result_720,0,sizeof(struct sType*));
    __result_obj__316 = result_720;
    return __result_obj__316;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_740;
int caller_line_741;
char* caller_sname_742;
_Bool comma_instead_of_semicolon_743;
char* last_code_744;
char* __dec_obj138;
char* last_code2_745;
char* __dec_obj139;
void* __right_value543 = (void*)0;
char* sname_top_746;
int sline_top_747;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sFun* funX_748;
_Bool __result_obj__319;
void* __right_value547 = (void*)0;
struct sType* result_type_749;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1sType$ph* param_types_750;
struct list$1sType$ph* o2_saved_751;
struct sType* it_752;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* param_type_753;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct list$1char$ph* param_names_754;
void* __right_value554 = (void*)0;
struct list$1char$ph* param_default_parametors_755;
char* p_756;
int sline_757;
char* sname_758;
char* head_759;
struct buffer* source_760;
void* __right_value555 = (void*)0;
struct buffer* __dec_obj140;
struct list$1char$ph* method_generics_type_names_761;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1char$ph* __dec_obj141;
struct list$1char$ph* o2_saved_762;
char* it_763;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1char$ph* __dec_obj142;
char* __dec_obj143;
void* __right_value560 = (void*)0;
struct sBlock* block_764;
struct buffer* __dec_obj144;
char* __dec_obj145;
_Bool var_args_765;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct sFun* fun_766;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value569 = (void*)0;
struct sNode* node_767;
_Bool Value_768;
void* __if_result__1_769 = (void*)0;
_Bool __result_obj__320;
struct list$1char$ph* __dec_obj146;
void* __right_value570 = (void*)0;
char* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
_Bool __result_obj__321;
    caller_fun_740=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_741=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_742=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_743=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_744=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj138=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_745=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj139=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_746=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_747=info->sline;
    funX_748=((struct sFun*)(__right_value546=map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value545=__builtin_string(fun_name))))));
    (__right_value544 = come_decrement_ref_count(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value546,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    funX_748) {
        __result_obj__319 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_744 = come_decrement_ref_count(last_code_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_745 = come_decrement_ref_count(last_code2_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_746 = come_decrement_ref_count(sname_top_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__319;
    }
    result_type_749=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_750=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2094, "struct list$1sType$ph*"))));
    for(    o2_saved_751=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_752=list$1sType$ph_begin((o2_saved_751));    !list$1sType$ph_end((o2_saved_751));    it_752=list$1sType$ph_next((o2_saved_751))    ){
        param_type_753=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value550=sType_clone(it_752))),info));
        /*c*/ come_call_finalizer3(__right_value550,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_750,(struct sType*)come_increment_ref_count(sType_clone(param_type_753)));
        /*c*/ come_call_finalizer3(param_type_753,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_751,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_754=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamNames));
    param_default_parametors_755=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mParamDefaultParametors));
    p_756=info->p;
    sline_757=info->sline;
    sname_758=(char*)come_increment_ref_count(info->sname);
    head_759=info->head;
    source_760=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj140=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj140,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_761=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj141=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2116, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj141,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_762=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_763=list$1char$ph_begin((o2_saved_762));    !list$1char$ph_end((o2_saved_762));    it_763=list$1char$ph_next((o2_saved_762))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(it_763, "05function.c", 2118, "char*")));
    }
    /*c*/ come_call_finalizer3(o2_saved_762,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj142=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_clone(generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj142,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj143=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_764=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_759;
    __dec_obj144=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_760);
    /*b*/ come_call_finalizer3(__dec_obj144,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_756;
    info->sline=sline_757;
    __dec_obj145=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_758);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_749->mInline=(_Bool)0;
    result_type_749->mStatic=(_Bool)0;
    result_type_749->mUniq=(_Bool)0;
    var_args_765=generics_fun->mVarArgs;
    fun_766=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2140, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_749),(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_clone(param_types_750)),(struct list$1char$ph*)come_increment_ref_count(param_names_754),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_755),(_Bool)0,var_args_765,(struct sBlock*)come_increment_ref_count(block_764),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_766));
    _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2147, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value568=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2147, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_766),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_767=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value568,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_768=node_compile(node_767,info);
    if(    !Value_768) {
        __result_obj__320 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_744 = come_decrement_ref_count(last_code_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_745 = come_decrement_ref_count(last_code2_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_746 = come_decrement_ref_count(sname_top_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_749,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_754,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_755,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_758 = come_decrement_ref_count(sname_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_760,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_761,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_764,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_766,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_767) ? node_767 = come_decrement_ref_count(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__320;
    }
    else {
        __if_result__1_769=(void*)(Value_768);
;
    }
    __dec_obj146=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_761);
    /*b*/ come_call_finalizer3(__dec_obj146,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj147=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_746));
    __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_747;
    __dec_obj148=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_744);
    __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj149=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_745);
    __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_740;
    info->caller_line=caller_line_741;
    info->caller_sname=caller_sname_742;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_743;
    __result_obj__321 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_744 = come_decrement_ref_count(last_code_744, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_745 = come_decrement_ref_count(last_code2_745, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_746 = come_decrement_ref_count(sname_top_746, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_749,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_750,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_754,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_755,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_758 = come_decrement_ref_count(sname_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_760,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_761,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_764,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_766,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_767) ? node_767 = come_decrement_ref_count(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__321;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_770;
char* source_head_771;
void* __right_value571 = (void*)0;
char* attribute_772;
struct sType* result_type_773;
char* var_name_774;
_Bool constructor__775;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj150;
void* __right_value574 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* result_type2_776=0;
char* var_name2_777=0;
_Bool err_778=0;
struct sType* __dec_obj151;
char* __dec_obj152;
_Bool method_definition_779;
char* p_780;
int sline_781;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct buffer* buf2_782;
char* fun_name_783;
char* base_fun_name_784;
struct sType* obj_type2_785;
void* __right_value577 = (void*)0;
char* __dec_obj153;
void* __right_value578 = (void*)0;
char* __dec_obj154;
void* __right_value579 = (void*)0;
struct sType* __dec_obj155;
void* __right_value580 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* obj_type_786=0;
char* name_787=0;
_Bool err_788=0;
void* __right_value581 = (void*)0;
char* __dec_obj156;
void* __right_value582 = (void*)0;
char* __dec_obj157;
void* __right_value583 = (void*)0;
struct sType* __dec_obj158;
void* __right_value584 = (void*)0;
char* __dec_obj159;
void* __right_value585 = (void*)0;
char* __dec_obj160;
void* __right_value586 = (void*)0;
struct sType* __dec_obj161;
void* __right_value587 = (void*)0;
char* __dec_obj162;
void* __right_value588 = (void*)0;
char* __dec_obj163;
void* __right_value589 = (void*)0;
struct sType* __dec_obj164;
void* __right_value590 = (void*)0;
char* __dec_obj165;
void* __right_value591 = (void*)0;
char* __dec_obj166;
void* __right_value592 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var31 = (void*)0;
struct list$1sType$ph* param_types_789=0;
struct list$1char$ph* param_names_790=0;
struct list$1char$ph* param_default_parametors_791=0;
_Bool var_args_792=0;
char* header_tail_793;
_Bool const_fun_794;
int version_795;
int n_796;
void* __right_value593 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var32 = (void*)0;
char* asm_fun_797=0;
char* fun_attribute_798=0;
void* __right_value594 = (void*)0;
char* __dec_obj167;
_Bool in_top_level_799;
void* __right_value595 = (void*)0;
struct sBlock* block_800;
void* __right_value596 = (void*)0;
char* fun_name_802;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct sFun* fun_803;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sFun* fun2_804;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value610 = (void*)0;
struct sNode* __result_obj__324;
void* __right_value611 = (void*)0;
char* none_generics_name_806;
void* __right_value612 = (void*)0;
char* generics_sname_807;
int generics_sline_808;
void* __right_value613 = (void*)0;
char* block_809;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sGenericsFun* fun_810;
void* __right_value620 = (void*)0;
char* fun_name3_811;
void* __right_value626 = (void*)0;
struct sNode* __result_obj__336;
void* __right_value627 = (void*)0;
char* generics_sname_833;
int generics_sline_834;
void* __right_value628 = (void*)0;
char* block_835;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sGenericsFun* fun_836;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sNode* __result_obj__337;
char* source_tail_837;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
char* new_fun_name_838;
void* __right_value639 = (void*)0;
char* __dec_obj169;
void* __right_value640 = (void*)0;
struct sBlock* block_839;
_Bool static_fun_840;
_Bool inline_fun_841;
_Bool uniq_fun_842;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sFun* fun_843;
void* __right_value645 = (void*)0;
char* header_844;
void* __right_value646 = (void*)0;
char* id_845;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value651 = (void*)0;
struct sNode* __result_obj__338;
void* __right_value652 = (void*)0;
char* new_fun_name_846;
void* __right_value653 = (void*)0;
char* __dec_obj170;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sFun* fun_847;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
char* header_848;
void* __right_value659 = (void*)0;
char* id_849;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value662 = (void*)0;
struct sNode* __result_obj__339;
void* __right_value663 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_850=0;
char* fun_attribute2_851=0;
void* __right_value664 = (void*)0;
char* __dec_obj171;
void* __right_value665 = (void*)0;
char* __dec_obj172;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sFun* fun_852;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
char* header_853;
void* __right_value671 = (void*)0;
char* id_854;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value674 = (void*)0;
struct sNode* __result_obj__340;
void* __right_value675 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c22_855=0;
char* Err_856=0;
struct sNode* __result_obj__341;
fun_name_783 = (void*)0;
    header_head_770=info->p;
    source_head_771=info->p;
    attribute_772=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_773=((void*)0);
    var_name_774=((void*)0);
    constructor__775=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value572=parse_word(info)));
        (__right_value572 = come_decrement_ref_count(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj150=result_type_773,
        result_type_773=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_773->mHeap=(_Bool)1;
        constructor__775=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value574=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_776=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
        var_name2_777=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        err_778=multiple_assign_var29->v3;
        /*c*/ come_call_finalizer3(__right_value574,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj151=result_type_773,
        result_type_773=(struct sType*)come_increment_ref_count(result_type2_776);
        /*b*/ come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj152=var_name_774,
        var_name_774=(char*)come_increment_ref_count(var_name2_777);
        __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !err_778) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*c*/ come_call_finalizer3(result_type2_776,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name2_777 = come_decrement_ref_count(var_name2_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_779=(_Bool)0;
    {
        p_780=info->p;
        sline_781=info->sline;
        buf2_782=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2208, "struct buffer*"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_782,*info->p);
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
        if(        buffer_length(buf2_782)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_779=(_Bool)1;
        }
        info->p=p_780;
        info->sline=sline_781;
        /*c*/ come_call_finalizer3(buf2_782,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    base_fun_name_784=((void*)0);
    obj_type2_785=((void*)0);
    if(    constructor__775) {
        __dec_obj153=base_fun_name_784,
        base_fun_name_784=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj154=fun_name_783,
        fun_name_783=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_784,info,(_Bool)1));
        __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj155=obj_type2_785,
        obj_type2_785=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj155,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_779) {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value580=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_786=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        name_787=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_788=multiple_assign_var30->v3;
        /*c*/ come_call_finalizer3(__right_value580,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_788) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj156=base_fun_name_784,
        base_fun_name_784=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj157=fun_name_783,
        fun_name_783=(char*)come_increment_ref_count(create_method_name(obj_type_786,(_Bool)0,base_fun_name_784,info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj158=obj_type2_785,
        obj_type2_785=(struct sType*)come_increment_ref_count(sType_clone(obj_type_786));
        /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(obj_type_786,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_787 = come_decrement_ref_count(name_787, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj159=base_fun_name_784,
        base_fun_name_784=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj160=fun_name_783,
        fun_name_783=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_784,info,(_Bool)1));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj161=obj_type2_785,
        obj_type2_785=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        /*b*/ come_call_finalizer3(__dec_obj161,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj162=base_fun_name_784,
        base_fun_name_784=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj163=fun_name_783,
        fun_name_783=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_784,info,(_Bool)1));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj164=obj_type2_785,
        obj_type2_785=(struct sType*)come_increment_ref_count(sType_clone(info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj164,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj165=fun_name_783,
        fun_name_783=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj166=base_fun_name_784,
        base_fun_name_784=(char*)come_increment_ref_count(__builtin_string(fun_name_783));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_784,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var31=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value592=parse_params(info,constructor__775)));
    param_types_789=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var31->v1);
    param_names_790=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v2);
    param_default_parametors_791=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v3);
    var_args_792=multiple_assign_var31->v4;
    /*c*/ come_call_finalizer3(__right_value592,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    header_tail_793=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_784,"initialize")) {
        info->in_class=(_Bool)1;
    }
    const_fun_794=(_Bool)0;
    version_795=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_796=0;
        while(xisdigit(*info->p)) {
            n_796=n_796*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_795=n_796;
    }
    multiple_assign_var32=((struct tuple2$2char$phchar$ph*)(__right_value593=parse_function_attribute(info)));
    asm_fun_797=(char*)come_increment_ref_count(multiple_assign_var32->v1);
    fun_attribute_798=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    /*c*/ come_call_finalizer3(__right_value593,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(asm_fun_797,"")) {
        __dec_obj167=fun_name_783,
        fun_name_783=(char*)come_increment_ref_count(__builtin_string(asm_fun_797));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    in_top_level_799=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_784,"lambda")) {
        block_800=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_801=0;
        lambda_num_801++;
        fun_name_802=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_801));
        result_type_773->mInline=(_Bool)0;
        result_type_773->mStatic=(_Bool)0;
        result_type_773->mUniq=(_Bool)0;
        fun_803=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2329, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_802)),(struct sType*)come_increment_ref_count(result_type_773),(struct list$1sType$ph*)come_increment_ref_count(param_types_789),(struct list$1char$ph*)come_increment_ref_count(param_names_790),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_791),(_Bool)0,var_args_792,(struct sBlock*)come_increment_ref_count(block_800),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),const_fun_794));
        fun2_804=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value603=__builtin_string(fun_name_802)))));
        (__right_value602 = come_decrement_ref_count(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value603 = come_decrement_ref_count(__right_value603, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_802)),(struct sFun*)come_increment_ref_count(fun_803));
        _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2339, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value607=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2339, "struct sLambdaNode*")),fun_803,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__324 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value610=_inf_value5)));
        /*c*/ come_call_finalizer3(block_800,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_802 = come_decrement_ref_count(fun_name_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_803,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_804,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_772 = come_decrement_ref_count(attribute_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_774 = come_decrement_ref_count(var_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_783 = come_decrement_ref_count(fun_name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_784 = come_decrement_ref_count(base_fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_789,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_790,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_791,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_797 = come_decrement_ref_count(asm_fun_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_798 = come_decrement_ref_count(fun_attribute_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value607,sLambdaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value610) ? __right_value610 = come_decrement_ref_count(__right_value610, ((struct sNode*)__right_value610)->finalize, ((struct sNode*)__right_value610)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__324;
        /*c*/ come_call_finalizer3(block_800,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_802 = come_decrement_ref_count(fun_name_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_803,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_804,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        none_generics_name_806=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_807=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_808=info->sline;
        block_809=(char*)come_increment_ref_count(skip_block(info));
        fun_810=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2349, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value615=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value616=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sType*)come_increment_ref_count(result_type_773),(struct list$1sType$ph*)come_increment_ref_count(param_types_789),(struct list$1char$ph*)come_increment_ref_count(param_names_790),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_791),var_args_792,(char*)come_increment_ref_count(block_809),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_807)),generics_sline_808,const_fun_794));
        /*c*/ come_call_finalizer3(__right_value615,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value616,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fun_name3_811=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_806,base_fun_name_784));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_811)),(struct sGenericsFun*)come_increment_ref_count(fun_810));
        __result_obj__336 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_806 = come_decrement_ref_count(none_generics_name_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_807 = come_decrement_ref_count(generics_sname_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_809 = come_decrement_ref_count(block_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_810,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_811 = come_decrement_ref_count(fun_name3_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_772 = come_decrement_ref_count(attribute_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_774 = come_decrement_ref_count(var_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_783 = come_decrement_ref_count(fun_name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_784 = come_decrement_ref_count(base_fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_789,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_790,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_791,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_797 = come_decrement_ref_count(asm_fun_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_798 = come_decrement_ref_count(fun_attribute_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__336) ? __result_obj__336 = come_decrement_ref_count(__result_obj__336, ((struct sNode*)__result_obj__336)->finalize, ((struct sNode*)__result_obj__336)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__336;
        (none_generics_name_806 = come_decrement_ref_count(none_generics_name_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_807 = come_decrement_ref_count(generics_sname_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_809 = come_decrement_ref_count(block_809, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_810,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_811 = come_decrement_ref_count(fun_name3_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0) {
        generics_sname_833=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_834=info->sline;
        block_835=(char*)come_increment_ref_count(skip_block(info));
        fun_836=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc_v2(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2363, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value630=list$1char$ph$p_clone(info->generics_type_names))),((struct list$1char$ph*)(__right_value631=list$1char$ph$p_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sType*)come_increment_ref_count(result_type_773),(struct list$1sType$ph*)come_increment_ref_count(param_types_789),(struct list$1char$ph*)come_increment_ref_count(param_names_790),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_791),var_args_792,(char*)come_increment_ref_count(block_835),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_833)),generics_sline_834,const_fun_794));
        /*c*/ come_call_finalizer3(__right_value630,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value631,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        method_definition_779) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sGenericsFun*)come_increment_ref_count(fun_836));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_784)),(struct sGenericsFun*)come_increment_ref_count(fun_836));
        }
        __result_obj__337 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_833 = come_decrement_ref_count(generics_sname_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_835 = come_decrement_ref_count(block_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_836,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_772 = come_decrement_ref_count(attribute_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_774 = come_decrement_ref_count(var_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_783 = come_decrement_ref_count(fun_name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_784 = come_decrement_ref_count(base_fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_789,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_790,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_791,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_797 = come_decrement_ref_count(asm_fun_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_798 = come_decrement_ref_count(fun_attribute_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__337) ? __result_obj__337 = come_decrement_ref_count(__result_obj__337, ((struct sNode*)__result_obj__337)->finalize, ((struct sNode*)__result_obj__337)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__337;
        (generics_sname_833 = come_decrement_ref_count(generics_sname_833, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_835 = come_decrement_ref_count(block_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_836,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_837=info->p-1;
        if(        version_795>0) {
            new_fun_name_838=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value637=__builtin_string(fun_name_783))),version_795));
            (__right_value637 = come_decrement_ref_count(__right_value637, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj169=fun_name_783,
            fun_name_783=(char*)come_increment_ref_count(__builtin_string(new_fun_name_838));
            __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_838 = come_decrement_ref_count(new_fun_name_838, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_839=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__775,(_Bool)1));
        static_fun_840=(_Bool)0;
        if(        result_type_773->mStatic) {
            result_type_773->mStatic=(_Bool)0;
            result_type_773->mUniq=(_Bool)0;
            static_fun_840=(_Bool)1;
        }
        inline_fun_841=(_Bool)0;
        if(        result_type_773->mInline) {
            result_type_773->mInline=(_Bool)0;
            result_type_773->mUniq=(_Bool)0;
            inline_fun_841=(_Bool)1;
        }
        uniq_fun_842=(_Bool)0;
        if(        result_type_773->mUniq) {
            result_type_773->mUniq=(_Bool)0;
            result_type_773->mInline=(_Bool)0;
            result_type_773->mStatic=(_Bool)0;
            uniq_fun_842=(_Bool)1;
        }
        if(        result_type_773->mUniq) {
            result_type_773->mUniq=(_Bool)0;
            result_type_773->mInline=(_Bool)0;
            result_type_773->mStatic=(_Bool)0;
        }
        fun_843=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2411, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sType*)come_increment_ref_count(result_type_773),(struct list$1sType$ph*)come_increment_ref_count(param_types_789),(struct list$1char$ph*)come_increment_ref_count(param_names_790),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_791),(_Bool)0,var_args_792,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_839)),static_fun_840,info,inline_fun_841,uniq_fun_842,(_Bool)0,(char*)come_increment_ref_count(attribute_772),(char*)come_increment_ref_count(fun_attribute_798),const_fun_794));
        if(        info->output_header_file) {
            if(            !result_type_773->mStatic&&!info->no_output_come_code) {
                header_844=(char*)come_increment_ref_count(make_come_header_function(fun_843,(char*)come_increment_ref_count(base_fun_name_784),(struct sType*)come_increment_ref_count(obj_type2_785),version_795,info));
                id_845=(char*)come_increment_ref_count(__builtin_string(fun_name_783));
                add_come_code_at_come_header(info,id_845,"%s",header_844);
                (header_844 = come_decrement_ref_count(header_844, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_845 = come_decrement_ref_count(id_845, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        info->in_class) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sFun*)come_increment_ref_count(fun_843));
        }
        else {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sFun*)come_increment_ref_count(fun_843));
        }
        _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2437, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value650=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2437, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_843),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__338 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value651=_inf_value6)));
        /*c*/ come_call_finalizer3(block_839,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_843,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_772 = come_decrement_ref_count(attribute_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_774 = come_decrement_ref_count(var_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_783 = come_decrement_ref_count(fun_name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_784 = come_decrement_ref_count(base_fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_789,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_790,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_791,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_797 = come_decrement_ref_count(asm_fun_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_798 = come_decrement_ref_count(fun_attribute_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value650,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value651) ? __right_value651 = come_decrement_ref_count(__right_value651, ((struct sNode*)__right_value651)->finalize, ((struct sNode*)__right_value651)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__338) ? __result_obj__338 = come_decrement_ref_count(__result_obj__338, ((struct sNode*)__result_obj__338)->finalize, ((struct sNode*)__result_obj__338)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__338;
        /*c*/ come_call_finalizer3(block_839,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_843,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_795>0) {
            new_fun_name_846=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_783,version_795));
            __dec_obj170=fun_name_783,
            fun_name_783=(char*)come_increment_ref_count(__builtin_string(new_fun_name_846));
            __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_846 = come_decrement_ref_count(new_fun_name_846, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_773->mStatic=(_Bool)0;
            result_type_773->mUniq=(_Bool)0;
            result_type_773->mInline=(_Bool)0;
            fun_847=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2453, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sType*)come_increment_ref_count(result_type_773),(struct list$1sType$ph*)come_increment_ref_count(param_types_789),(struct list$1char$ph*)come_increment_ref_count(param_names_790),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_791),(_Bool)1,var_args_792,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_772),(char*)come_increment_ref_count(fun_attribute_798),const_fun_794));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sFun*)come_increment_ref_count(fun_847));
            if(            info->output_header_file) {
                if(                !result_type_773->mStatic&&!info->no_output_come_code) {
                    header_848=(char*)come_increment_ref_count(make_come_header_function(fun_847,(char*)come_increment_ref_count(base_fun_name_784),(struct sType*)come_increment_ref_count(obj_type2_785),version_795,info));
                    id_849=(char*)come_increment_ref_count(__builtin_string(fun_name_783));
                    add_come_code_at_come_header(info,id_849,"%s",header_848);
                    (header_848 = come_decrement_ref_count(header_848, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_849 = come_decrement_ref_count(id_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2473, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value661=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2473, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_847),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__339 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value662=_inf_value7)));
            /*c*/ come_call_finalizer3(fun_847,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_772 = come_decrement_ref_count(attribute_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_774 = come_decrement_ref_count(var_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_783 = come_decrement_ref_count(fun_name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_784 = come_decrement_ref_count(base_fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_789,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_790,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_791,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_797 = come_decrement_ref_count(asm_fun_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_798 = come_decrement_ref_count(fun_attribute_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value661,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value662) ? __right_value662 = come_decrement_ref_count(__right_value662, ((struct sNode*)__right_value662)->finalize, ((struct sNode*)__right_value662)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__339) ? __result_obj__339 = come_decrement_ref_count(__result_obj__339, ((struct sNode*)__result_obj__339)->finalize, ((struct sNode*)__result_obj__339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__339;
            /*c*/ come_call_finalizer3(fun_847,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value663=parse_function_attribute(info)));
            asm_fun_850=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute2_851=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            /*c*/ come_call_finalizer3(__right_value663,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            string_operator_not_equals(asm_fun_850,"")) {
                __dec_obj171=fun_name_783,
                fun_name_783=(char*)come_increment_ref_count(__builtin_string(asm_fun_850));
                __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            __dec_obj172=fun_attribute_798,
            fun_attribute_798=(char*)come_increment_ref_count(string_operator_add(fun_attribute_798,fun_attribute2_851));
            __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            result_type_773->mStatic=(_Bool)0;
            result_type_773->mUniq=(_Bool)0;
            result_type_773->mInline=(_Bool)0;
            fun_852=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2488, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sType*)come_increment_ref_count(result_type_773),(struct list$1sType$ph*)come_increment_ref_count(param_types_789),(struct list$1char$ph*)come_increment_ref_count(param_names_790),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_791),(_Bool)1,var_args_792,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_772),(char*)come_increment_ref_count(fun_attribute_798),const_fun_794));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_783)),(struct sFun*)come_increment_ref_count(fun_852));
            if(            info->output_header_file) {
                if(                !result_type_773->mStatic&&!info->no_output_come_code) {
                    header_853=(char*)come_increment_ref_count(make_come_header_function(fun_852,(char*)come_increment_ref_count(base_fun_name_784),(struct sType*)come_increment_ref_count(obj_type2_785),version_795,info));
                    id_854=(char*)come_increment_ref_count(__builtin_string(fun_name_783));
                    add_come_code_at_come_header(info,id_854,"%s",header_853);
                    (header_853 = come_decrement_ref_count(header_853, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_854 = come_decrement_ref_count(id_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2509, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value673=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2509, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_852),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__340 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value674=_inf_value8)));
            (asm_fun_850 = come_decrement_ref_count(asm_fun_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_851 = come_decrement_ref_count(fun_attribute2_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_852,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_772 = come_decrement_ref_count(attribute_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_774 = come_decrement_ref_count(var_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_783 = come_decrement_ref_count(fun_name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_784 = come_decrement_ref_count(base_fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_789,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_790,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_791,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_797 = come_decrement_ref_count(asm_fun_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_798 = come_decrement_ref_count(fun_attribute_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value673,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value674) ? __right_value674 = come_decrement_ref_count(__right_value674, ((struct sNode*)__right_value674)->finalize, ((struct sNode*)__right_value674)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__340;
            (asm_fun_850 = come_decrement_ref_count(asm_fun_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_851 = come_decrement_ref_count(fun_attribute2_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_852,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value675=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_exception_var_c22_855=multiple_assign_var34->v1;
        Err_856=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_856)?(puts(Err_856),exit(2)):(0));
        /*c*/ come_call_finalizer3(__right_value675,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
        (Err_856 = come_decrement_ref_count(Err_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_799;
    __result_obj__341 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_772 = come_decrement_ref_count(attribute_772, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_773,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_774 = come_decrement_ref_count(var_name_774, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_783 = come_decrement_ref_count(fun_name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_784 = come_decrement_ref_count(base_fun_name_784, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(obj_type2_785,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_789,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_790,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_791,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (asm_fun_797 = come_decrement_ref_count(asm_fun_797, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute_798 = come_decrement_ref_count(fun_attribute_798, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__341) ? __result_obj__341 = come_decrement_ref_count(__result_obj__341, ((struct sNode*)__result_obj__341)->finalize, ((struct sNode*)__result_obj__341)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__341;
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
struct sLambdaNode* __result_obj__322;
void* __right_value608 = (void*)0;
struct sLambdaNode* result_805;
void* __right_value609 = (void*)0;
char* __dec_obj168;
struct sLambdaNode* __result_obj__323;
    if(    self==(void*)0) {
        __result_obj__322 = (void*)0;
        return __result_obj__322;
    }
    result_805=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc_v2(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)) {
        result_805->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj168=result_805->sname,
        result_805->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLambdaNode_clone", 5, "char*"));
        __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_805->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_805->mFun=self->mFun;
    }
    __result_obj__323 = result_805;
    /*c*/ come_call_finalizer3(result_805,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__323;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_829;
unsigned int it_830;
_Bool same_key_exist_831;
char* it2_832;
struct map$2char$phsGenericsFun$ph* __result_obj__335;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_829=string_get_hash_key(((char*)key))%self->size;
    it_830=hash_829;
    while((_Bool)1) {
        if(        self->item_existance[it_830]) {
            if(            string_equals(self->keys[it_830],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_830]);
                    (self->keys[it_830] = come_decrement_ref_count(self->keys[it_830], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_830]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_830]);
                    self->keys[it_830]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_830],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_830]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_830]=item;
                }
                break;
            }
            it_830++;
            if(            it_830>=self->size) {
                it_830=0;
            }
            else if(            it_830==hash_829) {
                printf("unexpected error in map.insert\n");
                stackframe_v2();
                exit(2);
            }
        }
        else {
            self->item_existance[it_830]=(_Bool)1;
            if(            1) {
                self->keys[it_830]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_830]=key;
            }
            if(            1) {
                self->items[it_830]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_830]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_831=(_Bool)0;
    for(    it2_832=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_832=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_832,key)) {
            same_key_exist_831=(_Bool)1;
        }
    }
    if(    !same_key_exist_831) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__335 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__335;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_812;
void* __right_value621 = (void*)0;
char** keys_813;
void* __right_value622 = (void*)0;
struct sGenericsFun** items_814;
void* __right_value623 = (void*)0;
_Bool* item_existance_815;
int len_816;
char* it_819;
struct sGenericsFun* default_value_822;
void* __right_value624 = (void*)0;
struct sGenericsFun* it2_823;
unsigned int hash_826;
int n_827;
struct sGenericsFun* default_value_828;
void* __right_value625 = (void*)0;
default_value_822 = (void*)0;
default_value_828 = (void*)0;
    size_812=self->size*10;
    keys_813=(char**)come_increment_ref_count(((char**)(__right_value621=(char**)come_calloc_v2(1, sizeof(char*)*(1*(size_812)), "./comelang.h", 2165, "char**"))));
    items_814=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value622=(struct sGenericsFun**)come_calloc_v2(1, sizeof(struct sGenericsFun*)*(1*(size_812)), "./comelang.h", 2166, "struct sGenericsFun**"))));
    item_existance_815=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value623=(_Bool*)come_calloc_v2(1, sizeof(_Bool)*(1*(size_812)), "./comelang.h", 2167, "_Bool*"))));
    len_816=0;
    for(    it_819=map$2char$phsGenericsFun$ph_begin(self);    !map$2char$phsGenericsFun$ph_end(self);    it_819=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_822,0,sizeof(struct sGenericsFun*));
        it2_823=((struct sGenericsFun*)(__right_value624=map$2char$phsGenericsFun$ph_at(self,it_819,(struct sGenericsFun*)come_increment_ref_count(default_value_822))));
        /*c*/ come_call_finalizer3(__right_value624,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_826=string_get_hash_key(((char*)it_819))%size_812;
        n_827=hash_826;
        while((_Bool)1) {
            if(            item_existance_815[n_827]) {
                n_827++;
                if(                n_827>=size_812) {
                    n_827=0;
                }
                else if(                n_827==hash_826) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe_v2();
                    exit(2);
                }
            }
            else {
                item_existance_815[n_827]=(_Bool)1;
                keys_813[n_827]=it_819;
                items_814[n_827]=((struct sGenericsFun*)(__right_value625=map$2char$phsGenericsFun$ph_at(self,it_819,(struct sGenericsFun*)come_increment_ref_count(default_value_828))));
                /*c*/ come_call_finalizer3(__right_value625,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_816++;
                /*c*/ come_call_finalizer3(default_value_828,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_828,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_822,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free_v2((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free_v2((char*)self->keys);
    self->keys=keys_813;
    self->items=items_814;
    self->item_existance=item_existance_815;
    self->size=size_812;
    self->len=len_816;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_817;
char* __result_obj__325;
char* __result_obj__326;
char* result_818;
char* __result_obj__327;
result_817 = (void*)0;
result_818 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_817,0,sizeof(char*));
        __result_obj__325 = result_817;
        return __result_obj__325;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__326 = self->key_list->it->item;
        return __result_obj__326;
    }
    memset(&result_818,0,sizeof(char*));
    __result_obj__327 = result_818;
    return __result_obj__327;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_820;
char* __result_obj__328;
char* __result_obj__329;
char* result_821;
char* __result_obj__330;
result_820 = (void*)0;
result_821 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_820,0,sizeof(char*));
        __result_obj__328 = result_820;
        return __result_obj__328;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__329 = self->key_list->it->item;
        return __result_obj__329;
    }
    memset(&result_821,0,sizeof(char*));
    __result_obj__330 = result_821;
    return __result_obj__330;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_824;
unsigned int it_825;
struct sGenericsFun* __result_obj__331;
struct sGenericsFun* __result_obj__332;
struct sGenericsFun* __result_obj__333;
struct sGenericsFun* __result_obj__334;
    hash_824=string_get_hash_key(((char*)key))%self->size;
    it_825=hash_824;
    while((_Bool)1) {
        if(        self->item_existance[it_825]) {
            if(            string_equals(self->keys[it_825],key)) {
                __result_obj__331 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_825]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__331,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__331;
            }
            it_825++;
            if(            it_825>=self->size) {
                it_825=0;
            }
            else if(            it_825==hash_824) {
                __result_obj__332 = (struct sGenericsFun*)come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__332,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__332;
            }
        }
        else {
            __result_obj__333 = (struct sGenericsFun*)come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__333,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__333;
        }
    }
    __result_obj__334 = (struct sGenericsFun*)come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__334,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__334;
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
void* __right_value676 = (void*)0;
struct sType* type_before_863;
void* __right_value677 = (void*)0;
struct sType* type2_864;
void* __right_value678 = (void*)0;
char* fun_name2_865;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
char* none_generics_name_866;
void* __right_value681 = (void*)0;
char* generics_fun_name_867;
void* __right_value682 = (void*)0;
struct sGenericsFun* generics_fun_868;
void* __right_value683 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_875=0;
_Bool err_876=0;
void* __right_value684 = (void*)0;
char* __dec_obj175;
int i_877;
void* __right_value685 = (void*)0;
char* new_fun_name_878;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
char* __dec_obj176;
void* __right_value688 = (void*)0;
char* __dec_obj177;
void* __right_value689 = (void*)0;
char* __dec_obj178;
void* __right_value690 = (void*)0;
char* user_real_fun_name_879;
void* __right_value691 = (void*)0;
struct sFun* user_finalizer_880;
void* __right_value692 = (void*)0;
struct sType* type2_881;
struct sClass* klass_882;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct buffer* source_883;
void* __right_value695 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_893;
struct tuple2$2char$phsType$ph* it_896;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_899=0;
struct sType* field_type_900=0;
char* p_903;
int sline_904;
char* sname_905;
char* head_906;
struct buffer* source3_907;
struct buffer* __dec_obj179;
void* __right_value696 = (void*)0;
char* __dec_obj180;
void* __right_value697 = (void*)0;
struct sBlock* block_908;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct sType* result_type_909;
void* __right_value701 = (void*)0;
char* name_910;
void* __right_value702 = (void*)0;
struct sType* self_type_911;
struct sType* __list_values1___913[1];
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct list$1sType$ph* param_types_912;
void* __right_value706 = (void*)0;
char* __list_values2___917[1];
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1char$ph* param_names_921;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct list$1char$ph* param_default_parametors_922;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct sFun* fun2_923;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sFun* fun_924;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value722 = (void*)0;
struct sNode* node_925;
_Bool Value_926;
struct buffer* __dec_obj181;
char* __dec_obj182;
char* __dec_obj183;
char* __dec_obj184;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__375;
memset(&i_877, 0, sizeof(int));
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
    type_before_863=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_864=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_864->mHeap=(_Bool)0;
    fun_name2_865=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        finalizer_862=((struct sFun*)(__right_value679=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_865)));
        /*c*/ come_call_finalizer3(__right_value679,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        finalizer_862==((void*)0)) {
            none_generics_name_866=(char*)come_increment_ref_count(get_none_generics_name(type2_864->mClass->mName));
            generics_fun_name_867=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_866,fun_name));
            generics_fun_868=((struct sGenericsFun*)(__right_value682=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_867)));
            /*c*/ come_call_finalizer3(__right_value682,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_868) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value683=create_generics_fun((char*)come_increment_ref_count(fun_name2_865),generics_fun_868,type,info)));
                name_875=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_876=multiple_assign_var35->v2;
                /*c*/ come_call_finalizer3(__right_value683,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_876) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_862=((struct sFun*)(__right_value684=map$2char$phsFun$ph_operator_load_element(info->funcs,name_875)));
                /*c*/ come_call_finalizer3(__right_value684,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_875 = come_decrement_ref_count(name_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_866 = come_decrement_ref_count(none_generics_name_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_867 = come_decrement_ref_count(generics_fun_name_867, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj175=real_fun_name_861,
        real_fun_name_861=(char*)come_increment_ref_count(fun_name2_865);
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        for(        i_877=128-1;        i_877>=1;        i_877--        ){
            new_fun_name_878=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_865,i_877));
            finalizer_862=((struct sFun*)(__right_value686=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_878)));
            /*c*/ come_call_finalizer3(__right_value686,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_862) {
                __dec_obj176=fun_name2_865,
                fun_name2_865=(char*)come_increment_ref_count(__builtin_string(new_fun_name_878));
                __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_878 = come_decrement_ref_count(new_fun_name_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_878 = come_decrement_ref_count(new_fun_name_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_862==((void*)0)) {
            finalizer_862=((struct sFun*)(__right_value688=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_865)));
            /*c*/ come_call_finalizer3(__right_value688,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
        user_real_fun_name_879=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_880=((struct sFun*)(__right_value691=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_879)));
        /*c*/ come_call_finalizer3(__right_value691,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_881=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
        type=type2_881;
        klass_882=type->mClass;
        if(        type->mPointerNum>0&&klass_882->mStruct||type->mAllocaValue) {
            source_883=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2609, "struct buffer*"))));
            buffer_append_char(source_883,123);
            if(            user_finalizer_880) {
                char source2_884[1024];
                memset(&source2_884, 0, sizeof(char)                *(1024)                );
                snprintf(source2_884,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_879);
                buffer_append_str(source_883,source2_884);
            }
            klass_882=((struct sClass*)(__right_value695=map$2char$phsClass$ph_operator_load_element(info->classes,klass_882->mName)));
            /*c*/ come_call_finalizer3(__right_value695,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_893=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_882->mFields)),it_896=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_893));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_893));            it_896=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_893))            ){
                multiple_assign_var36=it_896;
                name_899=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_900=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_900->mHeap) {
                    char source2_901[1024];
                    memset(&source2_901, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_901,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_899,name_899,name_899,name_899);
                    buffer_append_str(source_883,source2_901);
                }
                else if(                field_type_900->mChannel) {
                    char source2_902[1024];
                    memset(&source2_902, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_902,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_899,name_899);
                    buffer_append_str(source_883,source2_902);
                    snprintf(source2_902,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_899,name_899);
                    buffer_append_str(source_883,source2_902);
                }
                (name_899 = come_decrement_ref_count(name_899, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_900,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_893,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_char(source_883,125);
            p_903=info->p;
            sline_904=info->sline;
            sname_905=(char*)come_increment_ref_count(info->sname);
            head_906=info->head;
            source3_907=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj179=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_883);
            /*b*/ come_call_finalizer3(__dec_obj179,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_883->buf;
            info->head=source_883->buf;
            __dec_obj180=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_861));
            __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=0;
            block_908=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_909=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2658, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_910=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_861, "05function.c", 2659, "char*"));
            self_type_911=(struct sType*)come_increment_ref_count(sType_clone(type));
            self_type_911->mHeap=(_Bool)0;
            if(            self_type_911->mPointerNum==0) {
                self_type_911->mPointerNum=1;
            }
            if(            self_type_911->mPointerNum>1) {
                self_type_911->mPointerNum=1;
            }
            param_types_912=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___913[0]=self_type_911,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2668, "struct list$1sType$ph")),1,__list_values1___913)));
            param_names_921=(struct list$1char$ph*)come_increment_ref_count((__list_values2___917[0]=((char*)(__right_value706=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2669, "struct list$1char$ph")),1,__list_values2___917)));
            (__right_value706 = come_decrement_ref_count(__right_value706, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_922=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2670, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_922,((void*)0));
            result_type_909->mStatic=(_Bool)0;
            result_type_909->mUniq=(_Bool)0;
            result_type_909->mInline=(_Bool)0;
            fun2_923=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value713=__builtin_string(name_910)))));
            (__right_value712 = come_decrement_ref_count(__right_value712, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__right_value713 = come_decrement_ref_count(__right_value713, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_923==((void*)0)||fun2_923->mExternal) {
                fun_924=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2679, "struct sFun*")),(char*)come_increment_ref_count(name_910),(struct sType*)come_increment_ref_count(result_type_909),(struct list$1sType$ph*)come_increment_ref_count(param_types_912),(struct list$1char$ph*)come_increment_ref_count(param_names_921),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_922),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_908),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_910)),(struct sFun*)come_increment_ref_count(fun_924));
                finalizer_862=fun_924;
                _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2689, "struct sNode");
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value721=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2689, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_924),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_925=(struct sNode*)come_increment_ref_count(_inf_value9);
                /*c*/ come_call_finalizer3(__right_value721,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_926=node_compile(node_925,info);
                if(                !Value_926) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                /*c*/ come_call_finalizer3(fun_924,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_925) ? node_925 = come_decrement_ref_count(node_925, ((struct sNode*)node_925)->finalize, ((struct sNode*)node_925)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_862=fun2_923;
            }
            __dec_obj181=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_907);
            /*b*/ come_call_finalizer3(__dec_obj181,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_903;
            info->head=head_906;
            info->sline=sline_904;
            __dec_obj182=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_905);
            __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(source_883,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_905 = come_decrement_ref_count(sname_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_907,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(block_908,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_909,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_910 = come_decrement_ref_count(name_910, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(self_type_911,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_912,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_921,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_922,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_923,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (user_real_fun_name_879 = come_decrement_ref_count(user_real_fun_name_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_881,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_860;
    __dec_obj183=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_857);
    __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj184=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_858);
    __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_859;
    __result_obj__375 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value729=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2714, "struct tuple2$2sFun$pchar$ph")),finalizer_862,(char*)come_increment_ref_count(real_fun_name_861)))));
    (last_code_857 = come_decrement_ref_count(last_code_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_858 = come_decrement_ref_count(last_code2_858, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_861 = come_decrement_ref_count(real_fun_name_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_863,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_864,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_865 = come_decrement_ref_count(fun_name2_865, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value729,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__375,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__375;
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
struct sGenericsFun* __result_obj__342;
struct sGenericsFun* __result_obj__343;
struct sGenericsFun* __result_obj__344;
struct sGenericsFun* __result_obj__345;
default_value_869 = (void*)0;
    memset(&default_value_869,0,sizeof(struct sGenericsFun*));
    hash_870=string_get_hash_key(((char*)key))%self->size;
    it_871=hash_870;
    while((_Bool)1) {
        if(        self->item_existance[it_871]) {
            if(            string_equals(self->keys[it_871],key)) {
                __result_obj__342 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_871]);
                /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__342,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__342;
            }
            it_871++;
            if(            it_871>=self->size) {
                it_871=0;
            }
            else if(            it_871==hash_870) {
                __result_obj__343 = (struct sGenericsFun*)come_increment_ref_count(default_value_869);
                /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__343,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__343;
            }
        }
        else {
            __result_obj__344 = (struct sGenericsFun*)come_increment_ref_count(default_value_869);
            /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__344,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__344;
        }
    }
    __result_obj__345 = (struct sGenericsFun*)come_increment_ref_count(default_value_869);
    /*c*/ come_call_finalizer3(default_value_869,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__345,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__345;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_872;
unsigned int hash_873;
unsigned int it_874;
struct sGenericsFun* __result_obj__346;
struct sGenericsFun* __result_obj__347;
struct sGenericsFun* __result_obj__348;
struct sGenericsFun* __result_obj__349;
default_value_872 = (void*)0;
    memset(&default_value_872,0,sizeof(struct sGenericsFun*));
    hash_873=string_get_hash_key(((char*)key))%self->size;
    it_874=hash_873;
    while((_Bool)1) {
        if(        self->item_existance[it_874]) {
            if(            string_equals(self->keys[it_874],key)) {
                __result_obj__346 = (struct sGenericsFun*)come_increment_ref_count(self->items[it_874]);
                /*c*/ come_call_finalizer3(default_value_872,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__346,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__346;
            }
            it_874++;
            if(            it_874>=self->size) {
                it_874=0;
            }
            else if(            it_874==hash_873) {
                __result_obj__347 = (struct sGenericsFun*)come_increment_ref_count(default_value_872);
                /*c*/ come_call_finalizer3(default_value_872,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__347,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__347;
            }
        }
        else {
            __result_obj__348 = (struct sGenericsFun*)come_increment_ref_count(default_value_872);
            /*c*/ come_call_finalizer3(default_value_872,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__348,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__348;
        }
    }
    __result_obj__349 = (struct sGenericsFun*)come_increment_ref_count(default_value_872);
    /*c*/ come_call_finalizer3(default_value_872,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__349,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__349;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_885;
unsigned int hash_886;
unsigned int it_887;
struct sClass* __result_obj__350;
struct sClass* __result_obj__351;
struct sClass* __result_obj__352;
struct sClass* __result_obj__353;
default_value_885 = (void*)0;
    memset(&default_value_885,0,sizeof(struct sClass*));
    hash_886=string_get_hash_key(((char*)key))%self->size;
    it_887=hash_886;
    while((_Bool)1) {
        if(        self->item_existance[it_887]) {
            if(            string_equals(self->keys[it_887],key)) {
                __result_obj__350 = (struct sClass*)come_increment_ref_count(self->items[it_887]);
                /*c*/ come_call_finalizer3(default_value_885,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__350,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__350;
            }
            it_887++;
            if(            it_887>=self->size) {
                it_887=0;
            }
            else if(            it_887==hash_886) {
                __result_obj__351 = (struct sClass*)come_increment_ref_count(default_value_885);
                /*c*/ come_call_finalizer3(default_value_885,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__351,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__351;
            }
        }
        else {
            __result_obj__352 = (struct sClass*)come_increment_ref_count(default_value_885);
            /*c*/ come_call_finalizer3(default_value_885,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__352,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__352;
        }
    }
    __result_obj__353 = (struct sClass*)come_increment_ref_count(default_value_885);
    /*c*/ come_call_finalizer3(default_value_885,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__353,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__353;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_888;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_889;
    it_888=self->head;
    while(it_888!=((void*)0)) {
        prev_it_889=it_888;
        it_888=it_888->next;
        /*c*/ come_call_finalizer3(prev_it_889,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct sClass* default_value_890;
unsigned int hash_891;
unsigned int it_892;
struct sClass* __result_obj__354;
struct sClass* __result_obj__355;
struct sClass* __result_obj__356;
struct sClass* __result_obj__357;
default_value_890 = (void*)0;
    memset(&default_value_890,0,sizeof(struct sClass*));
    hash_891=string_get_hash_key(((char*)key))%self->size;
    it_892=hash_891;
    while((_Bool)1) {
        if(        self->item_existance[it_892]) {
            if(            string_equals(self->keys[it_892],key)) {
                __result_obj__354 = (struct sClass*)come_increment_ref_count(self->items[it_892]);
                /*c*/ come_call_finalizer3(default_value_890,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__354,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__354;
            }
            it_892++;
            if(            it_892>=self->size) {
                it_892=0;
            }
            else if(            it_892==hash_891) {
                __result_obj__355 = (struct sClass*)come_increment_ref_count(default_value_890);
                /*c*/ come_call_finalizer3(default_value_890,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__355,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__355;
            }
        }
        else {
            __result_obj__356 = (struct sClass*)come_increment_ref_count(default_value_890);
            /*c*/ come_call_finalizer3(default_value_890,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__356,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__356;
        }
    }
    __result_obj__357 = (struct sClass*)come_increment_ref_count(default_value_890);
    /*c*/ come_call_finalizer3(default_value_890,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__357,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__357;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_894;
struct tuple2$2char$phsType$ph* __result_obj__358;
struct tuple2$2char$phsType$ph* __result_obj__359;
struct tuple2$2char$phsType$ph* result_895;
struct tuple2$2char$phsType$ph* __result_obj__360;
result_894 = (void*)0;
result_895 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_894,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__358 = result_894;
        return __result_obj__358;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__359 = self->it->item;
        return __result_obj__359;
    }
    memset(&result_895,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__360 = result_895;
    return __result_obj__360;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_897;
struct tuple2$2char$phsType$ph* __result_obj__361;
struct tuple2$2char$phsType$ph* __result_obj__362;
struct tuple2$2char$phsType$ph* result_898;
struct tuple2$2char$phsType$ph* __result_obj__363;
result_897 = (void*)0;
result_898 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_897,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__361 = result_897;
        return __result_obj__361;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__362 = self->it->item;
        return __result_obj__362;
    }
    memset(&result_898,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__363 = result_898;
    return __result_obj__363;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_914;
struct list$1sType$ph* __result_obj__364;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_914=0;    i_914<num_value;    i_914++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_914]));
    }
    __result_obj__364 = (struct list$1sType$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__364,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__364;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__365;
void* __right_value703 = (void*)0;
struct list$1sType$ph* result_915;
struct list$1sType$ph* __result_obj__366;
    if(    self==(void*)0) {
        __result_obj__365 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__365,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__365;
    }
    result_915=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*"));
    if(    self!=((void*)0)) {
        result_915->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_915->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_915->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_915->it=self->it;
    }
    __result_obj__366 = (struct list$1sType$ph*)come_increment_ref_count(result_915);
    /*c*/ come_call_finalizer3(result_915,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__366,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__366;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_916;
    result_916=0;
    result_916+=int_get_hash_key(((int)self->head));
    result_916+=int_get_hash_key(((int)self->tail));
    result_916+=int_get_hash_key(((int)self->len));
    result_916+=int_get_hash_key(((int)self->it));
    return result_916;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_918;
struct list$1char$ph* __result_obj__367;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_918=0;    i_918<num_value;    i_918++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_918]));
    }
    __result_obj__367 = (struct list$1char$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__367,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__367;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__368;
void* __right_value707 = (void*)0;
struct list$1char$ph* result_919;
struct list$1char$ph* __result_obj__369;
    if(    self==(void*)0) {
        __result_obj__368 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__368,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__368;
    }
    result_919=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*"));
    if(    self!=((void*)0)) {
        result_919->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_919->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_919->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_919->it=self->it;
    }
    __result_obj__369 = (struct list$1char$ph*)come_increment_ref_count(result_919);
    /*c*/ come_call_finalizer3(result_919,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__369,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__369;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_920;
    result_920=0;
    result_920+=int_get_hash_key(((int)self->head));
    result_920+=int_get_hash_key(((int)self->tail));
    result_920+=int_get_hash_key(((int)self->len));
    result_920+=int_get_hash_key(((int)self->it));
    return result_920;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__370;
void* __right_value723 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_927;
void* __right_value724 = (void*)0;
char* __dec_obj185;
struct tuple2$2sFun$pchar$ph* __result_obj__371;
    if(    self==(void*)0) {
        __result_obj__370 = (void*)come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__370,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__370;
    }
    result_927=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*"));
    if(    self!=((void*)0)) {
        result_927->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj185=result_927->v2,
        result_927->v2=(char*)come_increment_ref_count((char*)come_memdup(self->v2, "tuple2$2sFun$pchar$ph_clone", 5, "char*"));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__371 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(result_927);
    /*c*/ come_call_finalizer3(result_927,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__371,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_928;
    result_928=0;
    result_928+=int_get_hash_key(((int)self->v1));
    result_928+=int_get_hash_key(((int)self->v2));
    return result_928;
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
int n_929;
_Bool result_930;
char* it_931;
char* default_value_932;
void* __right_value725 = (void*)0;
char* it2_933;
struct sVar* default_value2_936;
void* __right_value726 = (void*)0;
struct sVar* item_937;
void* __right_value727 = (void*)0;
struct sVar* item2_938;
default_value_932 = (void*)0;
default_value2_936 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_929=0;
    result_930=(_Bool)1;
    for(    it_931=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_931=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_932,0,sizeof(char*));
        it2_933=((char*)(__right_value725=list$1char$ph_item(right->key_list,n_929,default_value_932)));
        (__right_value725 = come_decrement_ref_count(__right_value725, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_931,it2_933)) {
            memset(&default_value2_936,0,sizeof(struct sVar*));
            item_937=((struct sVar*)(__right_value726=map$2char$phsVar$ph_at(left,it_931,(struct sVar*)come_increment_ref_count(default_value2_936))));
            /*c*/ come_call_finalizer3(__right_value726,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_938=((struct sVar*)(__right_value727=map$2char$phsVar$ph_at(right,it2_933,(struct sVar*)come_increment_ref_count(default_value2_936))));
            /*c*/ come_call_finalizer3(__right_value727,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_937,item2_938)) {
                result_930=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_936,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_930=(_Bool)0;
        }
        n_929++;
        (default_value_932 = come_decrement_ref_count(default_value_932, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_930;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_934;
int i_935;
char* __result_obj__372;
char* __result_obj__373;
    if(    position<0) {
        position+=self->len;
    }
    it_934=self->head;
    i_935=0;
    while(it_934!=((void*)0)) {
        if(        position==i_935) {
            __result_obj__372 = (char*)come_increment_ref_count(it_934->item);
            (__result_obj__372 = come_decrement_ref_count(__result_obj__372, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__372;
        }
        it_934=it_934->next;
        i_935++;
    }
    __result_obj__373 = (char*)come_increment_ref_count(default_value);
    (__result_obj__373 = come_decrement_ref_count(__result_obj__373, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__373;
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
struct tuple2$2sFun$pchar$ph* __result_obj__374;
    self->v1=v1;
    __dec_obj186=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__374 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__374,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__374;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_939;
char* __dec_obj187;
char* last_code2_940;
char* __dec_obj188;
_Bool comma_instead_of_semicolon_941;
struct sClass* current_stack_frame_struct_942;
struct sFun* equaler_943;
void* __right_value730 = (void*)0;
char* real_fun_name_944;
void* __right_value731 = (void*)0;
struct sType* type2_945;
struct sClass* klass_946;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
struct buffer* source_947;
char* name_948;
void* __right_value734 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_950;
struct tuple2$2char$phsType$ph* it_951;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_952=0;
struct sType* field_type_953=0;
char* p_955;
int sline_956;
char* sname_957;
char* head_958;
struct buffer* source3_959;
struct buffer* __dec_obj189;
void* __right_value735 = (void*)0;
char* __dec_obj190;
void* __right_value736 = (void*)0;
struct sBlock* block_960;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sType* result_type_961;
void* __right_value740 = (void*)0;
char* name_962;
void* __right_value741 = (void*)0;
struct sType* left_type_963;
void* __right_value742 = (void*)0;
struct sType* right_type_964;
struct sType* __list_values3___966[2];
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
struct list$1sType$ph* param_types_965;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
char* __list_values4___967[2];
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct list$1char$ph* param_names_968;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
struct list$1char$ph* param_default_parametors_969;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
struct sFun* fun2_970;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sFun* fun_971;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value761 = (void*)0;
struct sNode* node_972;
_Bool Value_973;
void* __right_value762 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c23_974=0;
char* Err_975=0;
struct buffer* __dec_obj191;
char* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__376;
    last_code_939=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj187=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_940=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj188=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_941=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_942=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_943=((void*)0);
    real_fun_name_944=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_945=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
    type=type2_945;
    klass_946=type->mClass;
    if(    type->mPointerNum>0&&!klass_946->mNumber) {
        source_947=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2740, "struct buffer*"))));
        buffer_append_char(source_947,123);
        if(        klass_946->mProtocol) {
            name_948="_protocol_obj";
            char source2_949[1024];
            memset(&source2_949, 0, sizeof(char)            *(1024)            );
            snprintf(source2_949,1024,"return left.%s.equals(right.%s);\n",name_948,name_948);
            buffer_append_str(source_947,source2_949);
        }
        else {
            klass_946=((struct sClass*)(__right_value734=map$2char$phsClass$ph_operator_load_element(info->classes,klass_946->mName)));
            /*c*/ come_call_finalizer3(__right_value734,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_950=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_946->mFields)),it_951=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_950));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_950));            it_951=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_950))            ){
                multiple_assign_var37=it_951;
                name_952=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_953=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_954[1024];
                memset(&source2_954, 0, sizeof(char)                *(1024)                );
                snprintf(source2_954,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_952,name_952,name_952);
                buffer_append_str(source_947,source2_954);
                (name_952 = come_decrement_ref_count(name_952, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_953,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_950,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_947,"return true;");
        buffer_append_char(source_947,125);
        p_955=info->p;
        sline_956=info->sline;
        sname_957=(char*)come_increment_ref_count(info->sname);
        head_958=info->head;
        source3_959=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj189=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_947);
        /*b*/ come_call_finalizer3(__dec_obj189,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_947->buf;
        info->head=source_947->buf;
        __dec_obj190=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_944));
        __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_960=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_961=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2780, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_962=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_944, "05function.c", 2781, "char*"));
        left_type_963=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_963->mHeap=(_Bool)0;
        right_type_964=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_964->mHeap=(_Bool)0;
        param_types_965=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___966[0]=left_type_963,
__list_values3___966[1]=right_type_964,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2786, "struct list$1sType$ph")),2,__list_values3___966)));
        param_names_968=(struct list$1char$ph*)come_increment_ref_count((__list_values4___967[0]=((char*)(__right_value745=__builtin_string("left"))),
__list_values4___967[1]=((char*)(__right_value746=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2787, "struct list$1char$ph")),2,__list_values4___967)));
        (__right_value745 = come_decrement_ref_count(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value746 = come_decrement_ref_count(__right_value746, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_969=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2788, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_969,((void*)0));
        list$1char$ph_push_back(param_default_parametors_969,((void*)0));
        result_type_961->mStatic=(_Bool)0;
        result_type_961->mUniq=(_Bool)0;
        result_type_961->mInline=(_Bool)0;
        fun2_970=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value752=__builtin_string(name_962)))));
        (__right_value751 = come_decrement_ref_count(__right_value751, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value752 = come_decrement_ref_count(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_970==((void*)0)||fun2_970->mExternal) {
            fun_971=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2798, "struct sFun*")),(char*)come_increment_ref_count(name_962),(struct sType*)come_increment_ref_count(result_type_961),(struct list$1sType$ph*)come_increment_ref_count(param_types_965),(struct list$1char$ph*)come_increment_ref_count(param_names_968),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_969),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_960),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_962)),(struct sFun*)come_increment_ref_count(fun_971));
            _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2806, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value760=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2806, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_971),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_972=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value760,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_973=node_compile(node_972,info);
            if(            !Value_973) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value762=err_msg(info,"compiling error")));
                come_exception_var_c23_974=multiple_assign_var38->v1;
                Err_975=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_975)?(puts(Err_975),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value762,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_975 = come_decrement_ref_count(Err_975, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_943=fun_971;
            /*c*/ come_call_finalizer3(fun_971,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_972) ? node_972 = come_decrement_ref_count(node_972, ((struct sNode*)node_972)->finalize, ((struct sNode*)node_972)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_943=fun2_970;
        }
        __dec_obj191=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_959);
        /*b*/ come_call_finalizer3(__dec_obj191,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_955;
        info->head=head_958;
        info->sline=sline_956;
        __dec_obj192=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_957);
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_947,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_957 = come_decrement_ref_count(sname_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_959,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_960,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_961,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_962 = come_decrement_ref_count(name_962, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_963,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_964,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_965,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_968,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_969,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_970,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_942;
    __dec_obj193=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_939);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj194=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_940);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_941;
    __result_obj__376 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value764=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2832, "struct tuple2$2sFun$pchar$ph")),equaler_943,(char*)come_increment_ref_count(real_fun_name_944)))));
    (last_code_939 = come_decrement_ref_count(last_code_939, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_940 = come_decrement_ref_count(last_code2_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_944 = come_decrement_ref_count(real_fun_name_944, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_945,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value764,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__376,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__376;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_976;
char* __dec_obj195;
char* last_code2_977;
char* __dec_obj196;
_Bool comma_instead_of_semicolon_978;
struct sClass* current_stack_frame_struct_979;
struct sFun* equaler_980;
void* __right_value765 = (void*)0;
char* real_fun_name_981;
void* __right_value766 = (void*)0;
struct sType* type2_982;
struct sClass* klass_983;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct buffer* source_984;
char* name_985;
int i_988;
void* __right_value769 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_989;
struct tuple2$2char$phsType$ph* it_990;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_991=0;
struct sType* field_type_992=0;
char* p_996;
int sline_997;
char* sname_998;
char* head_999;
struct buffer* source3_1000;
struct buffer* __dec_obj197;
void* __right_value770 = (void*)0;
char* __dec_obj198;
void* __right_value771 = (void*)0;
struct sBlock* block_1001;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct sType* result_type_1002;
void* __right_value775 = (void*)0;
char* name_1003;
void* __right_value776 = (void*)0;
struct sType* left_type_1004;
void* __right_value777 = (void*)0;
struct sType* right_type_1005;
struct sType* __list_values5___1007[2];
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct list$1sType$ph* param_types_1006;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
char* __list_values6___1008[2];
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct list$1char$ph* param_names_1009;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct list$1char$ph* param_default_parametors_1010;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct sFun* fun2_1011;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct sFun* fun_1012;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value796 = (void*)0;
struct sNode* node_1013;
_Bool Value_1014;
void* __right_value797 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c24_1015=0;
char* Err_1016=0;
struct buffer* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__377;
    last_code_976=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj195=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_977=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj196=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj196 = come_decrement_ref_count(__dec_obj196, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_978=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_979=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_980=((void*)0);
    real_fun_name_981=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_982=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
    type=type2_982;
    klass_983=type->mClass;
    if(    type->mPointerNum>0&&!klass_983->mNumber) {
        source_984=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2857, "struct buffer*"))));
        buffer_append_char(source_984,123);
        if(        klass_983->mProtocol) {
            name_985="_protocol_obj";
            char source2_986[1024];
            memset(&source2_986, 0, sizeof(char)            *(1024)            );
            snprintf(source2_986,1024,"return left.%s !== right.%s;\n",name_985,name_985);
            buffer_append_str(source_984,source2_986);
        }
        else {
            char source2_987[1024];
            memset(&source2_987, 0, sizeof(char)            *(1024)            );
            snprintf(source2_987,1024,"return !(");
            buffer_append_str(source_984,source2_987);
            snprintf(source2_987,1024,"( ");
            buffer_append_str(source_984,source2_987);
            i_988=0;
            klass_983=((struct sClass*)(__right_value769=map$2char$phsClass$ph_operator_load_element(info->classes,klass_983->mName)));
            /*c*/ come_call_finalizer3(__right_value769,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_989=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_983->mFields)),it_990=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_989));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_989));            it_990=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_989))            ){
                multiple_assign_var39=it_990;
                name_991=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_992=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_993[1024];
                memset(&source2_993, 0, sizeof(char)                *(1024)                );
                snprintf(source2_993,1024,"(left.%s === right.%s)",name_991,name_991,name_991);
                buffer_append_str(source_984,source2_993);
                if(                i_988==list$1tuple2$2char$phsType$ph$ph_length(klass_983->mFields)-1) {
                    char source2_994[1024];
                    memset(&source2_994, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_994,1024,"));");
                    buffer_append_str(source_984,source2_994);
                }
                else {
                    char source2_995[1024];
                    memset(&source2_995, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_995,1024," && ");
                    buffer_append_str(source_984,source2_995);
                }
                i_988++;
                (name_991 = come_decrement_ref_count(name_991, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_992,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_989,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_984,125);
        p_996=info->p;
        sline_997=info->sline;
        sname_998=(char*)come_increment_ref_count(info->sname);
        head_999=info->head;
        source3_1000=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj197=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_984);
        /*b*/ come_call_finalizer3(__dec_obj197,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_984->buf;
        info->head=source_984->buf;
        __dec_obj198=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_981));
        __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1001=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1002=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 2917, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1003=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_981, "05function.c", 2918, "char*"));
        left_type_1004=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1004->mHeap=(_Bool)0;
        right_type_1005=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1005->mHeap=(_Bool)0;
        param_types_1006=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___1007[0]=left_type_1004,
__list_values5___1007[1]=right_type_1005,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2923, "struct list$1sType$ph")),2,__list_values5___1007)));
        param_names_1009=(struct list$1char$ph*)come_increment_ref_count((__list_values6___1008[0]=((char*)(__right_value780=__builtin_string("left"))),
__list_values6___1008[1]=((char*)(__right_value781=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2924, "struct list$1char$ph")),2,__list_values6___1008)));
        (__right_value780 = come_decrement_ref_count(__right_value780, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value781 = come_decrement_ref_count(__right_value781, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1010=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2925, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1010,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1010,((void*)0));
        result_type_1002->mStatic=(_Bool)0;
        result_type_1002->mUniq=(_Bool)0;
        result_type_1002->mInline=(_Bool)0;
        fun2_1011=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value787=__builtin_string(name_1003)))));
        (__right_value786 = come_decrement_ref_count(__right_value786, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value787 = come_decrement_ref_count(__right_value787, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1011==((void*)0)||fun2_1011->mExternal) {
            fun_1012=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 2935, "struct sFun*")),(char*)come_increment_ref_count(name_1003),(struct sType*)come_increment_ref_count(result_type_1002),(struct list$1sType$ph*)come_increment_ref_count(param_types_1006),(struct list$1char$ph*)come_increment_ref_count(param_names_1009),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1010),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1001),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1003)),(struct sFun*)come_increment_ref_count(fun_1012));
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 2943, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value795=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 2943, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1012),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1013=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value795,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1014=node_compile(node_1013,info);
            if(            !Value_1014) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value797=err_msg(info,"compiling error")));
                come_exception_var_c24_1015=multiple_assign_var40->v1;
                Err_1016=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1016)?(puts(Err_1016),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value797,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1016 = come_decrement_ref_count(Err_1016, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_980=fun_1012;
            /*c*/ come_call_finalizer3(fun_1012,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1013) ? node_1013 = come_decrement_ref_count(node_1013, ((struct sNode*)node_1013)->finalize, ((struct sNode*)node_1013)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_980=fun2_1011;
        }
        __dec_obj199=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1000);
        /*b*/ come_call_finalizer3(__dec_obj199,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_996;
        info->head=head_999;
        info->sline=sline_997;
        __dec_obj200=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_998);
        __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_984,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_998 = come_decrement_ref_count(sname_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1000,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1001,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1002,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1003 = come_decrement_ref_count(name_1003, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1004,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1005,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1006,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1009,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1010,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1011,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_979;
    __dec_obj201=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_976);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj202=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_977);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_978;
    __result_obj__377 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value799=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2969, "struct tuple2$2sFun$pchar$ph")),equaler_980,(char*)come_increment_ref_count(real_fun_name_981)))));
    (last_code_976 = come_decrement_ref_count(last_code_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_977 = come_decrement_ref_count(last_code2_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_981 = come_decrement_ref_count(real_fun_name_981, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_982,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value799,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__377,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__377;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1017;
char* __dec_obj203;
char* last_code2_1018;
char* __dec_obj204;
_Bool comma_instead_of_semicolon_1019;
struct sClass* current_stack_frame_struct_1020;
struct sFun* equaler_1021;
void* __right_value800 = (void*)0;
char* real_fun_name_1022;
void* __right_value801 = (void*)0;
struct sType* type2_1023;
struct sClass* klass_1024;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
struct buffer* source_1025;
char* name_1026;
int i_1029;
void* __right_value804 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1030;
struct tuple2$2char$phsType$ph* it_1031;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1032=0;
struct sType* field_type_1033=0;
char* p_1037;
int sline_1038;
char* sname_1039;
char* head_1040;
struct buffer* source3_1041;
struct buffer* __dec_obj205;
void* __right_value805 = (void*)0;
char* __dec_obj206;
void* __right_value806 = (void*)0;
struct sBlock* block_1042;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sType* result_type_1043;
void* __right_value810 = (void*)0;
char* name_1044;
void* __right_value811 = (void*)0;
struct sType* left_type_1045;
void* __right_value812 = (void*)0;
struct sType* right_type_1046;
struct sType* __list_values7___1048[2];
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct list$1sType$ph* param_types_1047;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
char* __list_values8___1049[2];
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct list$1char$ph* param_names_1050;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct list$1char$ph* param_default_parametors_1051;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct sFun* fun2_1052;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct sFun* fun_1053;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value831 = (void*)0;
struct sNode* node_1054;
_Bool Value_1055;
void* __right_value832 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c25_1056=0;
char* Err_1057=0;
struct buffer* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
char* __dec_obj210;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__378;
    last_code_1017=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj203=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1018=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj204=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1019=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1020=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1021=((void*)0);
    real_fun_name_1022=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1023=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
    type=type2_1023;
    klass_1024=type->mClass;
    if(    type->mPointerNum>0&&!klass_1024->mNumber) {
        source_1025=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 2994, "struct buffer*"))));
        buffer_append_char(source_1025,123);
        if(        klass_1024->mProtocol) {
            name_1026="_protocol_obj";
            char source2_1027[1024];
            memset(&source2_1027, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1027,1024,"return !left.%s.equals(right.%s);\n",name_1026,name_1026);
            buffer_append_str(source_1025,source2_1027);
        }
        else {
            char source2_1028[1024];
            memset(&source2_1028, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1028,1024,"return !(");
            buffer_append_str(source_1025,source2_1028);
            i_1029=0;
            klass_1024=((struct sClass*)(__right_value804=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1024->mName)));
            /*c*/ come_call_finalizer3(__right_value804,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1030=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1024->mFields)),it_1031=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1030));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1030));            it_1031=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1030))            ){
                multiple_assign_var41=it_1031;
                name_1032=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1033=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1034[1024];
                memset(&source2_1034, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1034,1024,"left.%s.equals(right.%s)",name_1032,name_1032);
                buffer_append_str(source_1025,source2_1034);
                if(                i_1029==list$1tuple2$2char$phsType$ph$ph_length(klass_1024->mFields)-1) {
                    char source2_1035[1024];
                    memset(&source2_1035, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1035,1024,");");
                    buffer_append_str(source_1025,source2_1035);
                }
                else {
                    char source2_1036[1024];
                    memset(&source2_1036, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1036,1024," && ");
                    buffer_append_str(source_1025,source2_1036);
                }
                i_1029++;
                (name_1032 = come_decrement_ref_count(name_1032, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1033,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1030,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_1025,125);
        p_1037=info->p;
        sline_1038=info->sline;
        sname_1039=(char*)come_increment_ref_count(info->sname);
        head_1040=info->head;
        source3_1041=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj205=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1025);
        /*b*/ come_call_finalizer3(__dec_obj205,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1025->buf;
        info->head=source_1025->buf;
        __dec_obj206=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1022));
        __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1042=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1043=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3051, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1044=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1022, "05function.c", 3052, "char*"));
        left_type_1045=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1045->mHeap=(_Bool)0;
        right_type_1046=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1046->mHeap=(_Bool)0;
        param_types_1047=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___1048[0]=left_type_1045,
__list_values7___1048[1]=right_type_1046,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3057, "struct list$1sType$ph")),2,__list_values7___1048)));
        param_names_1050=(struct list$1char$ph*)come_increment_ref_count((__list_values8___1049[0]=((char*)(__right_value815=__builtin_string("left"))),
__list_values8___1049[1]=((char*)(__right_value816=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3058, "struct list$1char$ph")),2,__list_values8___1049)));
        (__right_value815 = come_decrement_ref_count(__right_value815, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value816 = come_decrement_ref_count(__right_value816, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1051=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3059, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1051,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1051,((void*)0));
        result_type_1043->mStatic=(_Bool)0;
        result_type_1043->mUniq=(_Bool)0;
        result_type_1043->mInline=(_Bool)0;
        fun2_1052=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value822=__builtin_string(name_1044)))));
        (__right_value821 = come_decrement_ref_count(__right_value821, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value822 = come_decrement_ref_count(__right_value822, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1052==((void*)0)||fun2_1052->mExternal) {
            fun_1053=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3069, "struct sFun*")),(char*)come_increment_ref_count(name_1044),(struct sType*)come_increment_ref_count(result_type_1043),(struct list$1sType$ph*)come_increment_ref_count(param_types_1047),(struct list$1char$ph*)come_increment_ref_count(param_names_1050),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1051),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1042),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1044)),(struct sFun*)come_increment_ref_count(fun_1053));
            _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3077, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value830=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3077, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1053),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1054=(struct sNode*)come_increment_ref_count(_inf_value12);
            /*c*/ come_call_finalizer3(__right_value830,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1055=node_compile(node_1054,info);
            if(            !Value_1055) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value832=err_msg(info,"compiling error")));
                come_exception_var_c25_1056=multiple_assign_var42->v1;
                Err_1057=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1057)?(puts(Err_1057),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value832,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1057 = come_decrement_ref_count(Err_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1021=fun_1053;
            /*c*/ come_call_finalizer3(fun_1053,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1054) ? node_1054 = come_decrement_ref_count(node_1054, ((struct sNode*)node_1054)->finalize, ((struct sNode*)node_1054)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1021=fun2_1052;
        }
        __dec_obj207=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1041);
        /*b*/ come_call_finalizer3(__dec_obj207,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1037;
        info->head=head_1040;
        info->sline=sline_1038;
        __dec_obj208=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1039);
        __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1025,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1039 = come_decrement_ref_count(sname_1039, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1041,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1042,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1043,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1044 = come_decrement_ref_count(name_1044, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1045,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1046,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1047,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1050,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1051,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1052,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1020;
    __dec_obj209=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1017);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj210=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1018);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1019;
    __result_obj__378 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value834=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3103, "struct tuple2$2sFun$pchar$ph")),equaler_1021,(char*)come_increment_ref_count(real_fun_name_1022)))));
    (last_code_1017 = come_decrement_ref_count(last_code_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1018 = come_decrement_ref_count(last_code2_1018, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1022 = come_decrement_ref_count(real_fun_name_1022, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1023,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value834,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__378,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__378;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1058;
char* __dec_obj211;
char* last_code2_1059;
char* __dec_obj212;
_Bool comma_instead_of_semicolon_1060;
struct sClass* current_stack_frame_struct_1061;
struct sFun* equaler_1062;
void* __right_value835 = (void*)0;
char* real_fun_name_1063;
void* __right_value836 = (void*)0;
struct sType* type2_1064;
struct sClass* klass_1065;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct buffer* source_1066;
char* name_1067;
void* __right_value839 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1070;
struct tuple2$2char$phsType$ph* it_1071;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1072=0;
struct sType* field_type_1073=0;
char* p_1075;
int sline_1076;
char* sname_1077;
char* head_1078;
struct buffer* source3_1079;
struct buffer* __dec_obj213;
void* __right_value840 = (void*)0;
char* __dec_obj214;
void* __right_value841 = (void*)0;
struct sBlock* block_1080;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
struct sType* result_type_1081;
void* __right_value845 = (void*)0;
char* name_1082;
void* __right_value846 = (void*)0;
struct sType* left_type_1083;
void* __right_value847 = (void*)0;
struct sType* right_type_1084;
struct sType* __list_values9___1086[2];
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct list$1sType$ph* param_types_1085;
void* __right_value850 = (void*)0;
void* __right_value851 = (void*)0;
char* __list_values10___1087[2];
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct list$1char$ph* param_names_1088;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct list$1char$ph* param_default_parametors_1089;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct sFun* fun2_1090;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct sFun* fun_1091;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value866 = (void*)0;
struct sNode* node_1092;
_Bool Value_1093;
void* __right_value867 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c26_1094=0;
char* Err_1095=0;
struct buffer* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
char* __dec_obj218;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__379;
    last_code_1058=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj211=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1059=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj212=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1060=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1061=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1062=((void*)0);
    real_fun_name_1063=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1064=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
    type=type2_1064;
    klass_1065=type->mClass;
    if(    type->mPointerNum>0&&!klass_1065->mNumber) {
        source_1066=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3128, "struct buffer*"))));
        buffer_append_char(source_1066,123);
        if(        klass_1065->mProtocol) {
            name_1067="_protocol_obj";
            char source2_1068[1024];
            memset(&source2_1068, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1068,1024,"return left.%s === right.%s;\n",name_1067,name_1067);
            buffer_append_str(source_1066,source2_1068);
        }
        else {
            char source2_1069[1024];
            memset(&source2_1069, 0, sizeof(char)            *(1024)            );
            klass_1065=((struct sClass*)(__right_value839=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1065->mName)));
            /*c*/ come_call_finalizer3(__right_value839,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1070=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1065->mFields)),it_1071=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1070));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1070));            it_1071=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1070))            ){
                multiple_assign_var43=it_1071;
                name_1072=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1073=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1074[1024];
                memset(&source2_1074, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1074,1024,"if(left.%s !== right.%s) { return false; }\n",name_1072,name_1072,name_1072);
                buffer_append_str(source_1066,source2_1074);
                (name_1072 = come_decrement_ref_count(name_1072, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1073,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1070,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_1066,"return true;\n");
        buffer_append_char(source_1066,125);
        p_1075=info->p;
        sline_1076=info->sline;
        sname_1077=(char*)come_increment_ref_count(info->sname);
        head_1078=info->head;
        source3_1079=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj213=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1066);
        /*b*/ come_call_finalizer3(__dec_obj213,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1066->buf;
        info->head=source_1066->buf;
        __dec_obj214=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1063));
        __dec_obj214 = come_decrement_ref_count(__dec_obj214, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1080=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1081=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3170, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1082=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1063, "05function.c", 3171, "char*"));
        left_type_1083=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_1083->mHeap=(_Bool)0;
        right_type_1084=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_1084->mHeap=(_Bool)0;
        param_types_1085=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___1086[0]=left_type_1083,
__list_values9___1086[1]=right_type_1084,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3176, "struct list$1sType$ph")),2,__list_values9___1086)));
        param_names_1088=(struct list$1char$ph*)come_increment_ref_count((__list_values10___1087[0]=((char*)(__right_value850=__builtin_string("left"))),
__list_values10___1087[1]=((char*)(__right_value851=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3177, "struct list$1char$ph")),2,__list_values10___1087)));
        (__right_value850 = come_decrement_ref_count(__right_value850, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value851 = come_decrement_ref_count(__right_value851, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1089=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3178, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1089,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1089,((void*)0));
        result_type_1081->mStatic=(_Bool)0;
        result_type_1081->mUniq=(_Bool)0;
        result_type_1081->mInline=(_Bool)0;
        fun2_1090=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value857=__builtin_string(name_1082)))));
        (__right_value856 = come_decrement_ref_count(__right_value856, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value857 = come_decrement_ref_count(__right_value857, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1090==((void*)0)||fun2_1090->mExternal) {
            fun_1091=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3188, "struct sFun*")),(char*)come_increment_ref_count(name_1082),(struct sType*)come_increment_ref_count(result_type_1081),(struct list$1sType$ph*)come_increment_ref_count(param_types_1085),(struct list$1char$ph*)come_increment_ref_count(param_names_1088),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1089),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1080),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1082)),(struct sFun*)come_increment_ref_count(fun_1091));
            _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3196, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value865=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3196, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1091),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1092=(struct sNode*)come_increment_ref_count(_inf_value13);
            /*c*/ come_call_finalizer3(__right_value865,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1093=node_compile(node_1092,info);
            if(            !Value_1093) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value867=err_msg(info,"compiling error(X)")));
                come_exception_var_c26_1094=multiple_assign_var44->v1;
                Err_1095=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1095)?(puts(Err_1095),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value867,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1095 = come_decrement_ref_count(Err_1095, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1062=fun_1091;
            /*c*/ come_call_finalizer3(fun_1091,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1092) ? node_1092 = come_decrement_ref_count(node_1092, ((struct sNode*)node_1092)->finalize, ((struct sNode*)node_1092)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1062=fun2_1090;
        }
        __dec_obj215=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1079);
        /*b*/ come_call_finalizer3(__dec_obj215,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1075;
        info->head=head_1078;
        info->sline=sline_1076;
        __dec_obj216=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1077);
        __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1066,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1077 = come_decrement_ref_count(sname_1077, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1079,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1080,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1081,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1082 = come_decrement_ref_count(name_1082, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1083,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1084,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1085,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1088,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1089,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1090,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1061;
    __dec_obj217=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1058);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj218=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1059);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1060;
    __result_obj__379 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value869=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3222, "struct tuple2$2sFun$pchar$ph")),equaler_1062,(char*)come_increment_ref_count(real_fun_name_1063)))));
    (last_code_1058 = come_decrement_ref_count(last_code_1058, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1059 = come_decrement_ref_count(last_code2_1059, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1063 = come_decrement_ref_count(real_fun_name_1063, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1064,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value869,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__379,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__379;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__380;
char* last_code_1096;
char* __dec_obj219;
char* last_code2_1097;
char* __dec_obj220;
_Bool comma_instead_of_semicolon_1098;
struct sClass* current_stack_frame_struct_1099;
struct sFun* cloner_1100;
void* __right_value872 = (void*)0;
char* real_fun_name_1101;
void* __right_value873 = (void*)0;
struct sType* type2_1102;
struct sClass* klass_1103;
char* fun_name2_1104;
void* __right_value874 = (void*)0;
char* none_generics_name_1105;
void* __right_value875 = (void*)0;
struct sType* obj_type_1106;
void* __right_value876 = (void*)0;
char* __dec_obj221;
void* __right_value877 = (void*)0;
char* fun_name3_1107;
void* __right_value878 = (void*)0;
struct sGenericsFun* generics_fun_1108;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1109=0;
_Bool err_1110=0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__381;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
char* __dec_obj222;
void* __right_value885 = (void*)0;
char* __dec_obj223;
int i_1111;
void* __right_value886 = (void*)0;
char* new_fun_name_1112;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
char* __dec_obj224;
void* __right_value889 = (void*)0;
char* __dec_obj225;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct buffer* source_1113;
void* __right_value892 = (void*)0;
char* name_1114;
void* __right_value893 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1116;
struct tuple2$2char$phsType$ph* it_1117;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1118=0;
struct sType* field_type_1119=0;
void* __right_value894 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1122;
struct tuple2$2char$phsType$ph* it_1123;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1124=0;
struct sType* field_type_1125=0;
void* __right_value895 = (void*)0;
char* user_real_fun_name_1129;
void* __right_value896 = (void*)0;
struct sFun* user_cloner_1130;
char* p_1132;
int sline_1133;
char* sname_1134;
struct buffer* source3_1135;
char* head_1136;
struct buffer* __dec_obj226;
void* __right_value897 = (void*)0;
char* __dec_obj227;
void* __right_value898 = (void*)0;
struct sBlock* block_1137;
void* __right_value899 = (void*)0;
struct sType* result_type_1138;
void* __right_value900 = (void*)0;
char* name_1139;
void* __right_value901 = (void*)0;
struct sType* self_type_1140;
struct sType* __list_values11___1142[1];
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1sType$ph* param_types_1141;
void* __right_value904 = (void*)0;
char* __list_values12___1143[1];
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct list$1char$ph* param_names_1144;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct list$1char$ph* param_default_parametors_1145;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sFun* fun2_1146;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sFun* fun_1147;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value919 = (void*)0;
struct sNode* node_1148;
_Bool Value_1149;
void* __right_value920 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c27_1150=0;
char* Err_1151=0;
char* __dec_obj228;
struct buffer* __dec_obj229;
char* __dec_obj230;
char* __dec_obj231;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__382;
fun_name2_1104 = (void*)0;
memset(&i_1111, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__380 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value871=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3228, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        /*c*/ come_call_finalizer3(__right_value871,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__380,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__380;
    }
    last_code_1096=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj219=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1097=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj220=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj220 = come_decrement_ref_count(__dec_obj220, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1098=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1099=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1100=((void*)0);
    real_fun_name_1101=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1102=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
    type=type2_1102;
    klass_1103=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1105=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1106=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info,(_Bool)0));
        __dec_obj221=fun_name2_1104,
        fun_name2_1104=(char*)come_increment_ref_count(create_method_name(obj_type_1106,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1107=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1105,fun_name));
        generics_fun_1108=((struct sGenericsFun*)(__right_value878=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1107,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value878,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1108) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value880=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1104)),generics_fun_1108,obj_type_1106,info)));
            name_1109=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1110=multiple_assign_var45->v2;
            /*c*/ come_call_finalizer3(__right_value880,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1110) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__381 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value882=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3268, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1109 = come_decrement_ref_count(name_1109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1105 = come_decrement_ref_count(none_generics_name_1105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(obj_type_1106,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name3_1107 = come_decrement_ref_count(fun_name3_1107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1096 = come_decrement_ref_count(last_code_1096, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1097 = come_decrement_ref_count(last_code2_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1101 = come_decrement_ref_count(real_fun_name_1101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_1102,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_1104 = come_decrement_ref_count(fun_name2_1104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value882,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__381,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__381;
                }
            }
            cloner_1100=((struct sFun*)(__right_value883=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1109)));
            /*c*/ come_call_finalizer3(__right_value883,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1109 = come_decrement_ref_count(name_1109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1100=((struct sFun*)(__right_value884=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1104)));
            /*c*/ come_call_finalizer3(__right_value884,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj222=real_fun_name_1101,
        real_fun_name_1101=(char*)come_increment_ref_count(fun_name2_1104);
        __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (none_generics_name_1105 = come_decrement_ref_count(none_generics_name_1105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1106,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1107 = come_decrement_ref_count(fun_name3_1107, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj223=fun_name2_1104,
        fun_name2_1104=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1111=128-1;        i_1111>=1;        i_1111--        ){
            new_fun_name_1112=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1104,i_1111));
            cloner_1100=((struct sFun*)(__right_value887=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1112)));
            /*c*/ come_call_finalizer3(__right_value887,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1100) {
                __dec_obj224=fun_name2_1104,
                fun_name2_1104=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1112));
                __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1112 = come_decrement_ref_count(new_fun_name_1112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1112 = come_decrement_ref_count(new_fun_name_1112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1100==((void*)0)) {
            cloner_1100=((struct sFun*)(__right_value889=map$2char$phsFun$ph_operator_load_element(info->funcs,fun_name2_1104)));
            /*c*/ come_call_finalizer3(__right_value889,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj225=real_fun_name_1101,
        real_fun_name_1101=(char*)come_increment_ref_count(fun_name2_1104);
        __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    cloner_1100==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3303, "struct buffer*"))));
        buffer_append_str(source_1113,"{\n");
        buffer_append_str(source_1113,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1113,"var result = new %s;\n",((char*)(__right_value892=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value892 = come_decrement_ref_count(__right_value892, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1103->mProtocol) {
            name_1114="_protocol_obj";
            char source2_1115[1024];
            memset(&source2_1115, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1115,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1113,source2_1115);
            klass_1103=((struct sClass*)(__right_value893=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1103->mName)));
            /*c*/ come_call_finalizer3(__right_value893,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1116=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1103->mFields)),it_1117=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1116));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1116));            it_1117=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1116))            ){
                multiple_assign_var46=it_1117;
                name_1118=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1119=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1118,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph_length(field_type_1119->mArrayNum)>0) {
                    char source2_1120[1024];
                    memset(&source2_1120, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1120,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1118,name_1118,name_1118);
                    buffer_append_str(source_1113,source2_1120);
                }
                else {
                    char source2_1121[1024];
                    memset(&source2_1121, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1121,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1118,name_1118);
                    buffer_append_str(source_1113,source2_1121);
                }
                (name_1118 = come_decrement_ref_count(name_1118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1119,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1116,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_1103=((struct sClass*)(__right_value894=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1103->mName)));
            /*c*/ come_call_finalizer3(__right_value894,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1122=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1103->mFields)),it_1123=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1122));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1122));            it_1123=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1122))            ){
                multiple_assign_var47=it_1123;
                name_1124=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1125=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1125->mHeap) {
                    char source2_1126[1024];
                    memset(&source2_1126, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1126,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1124,name_1124,name_1124);
                    buffer_append_str(source_1113,source2_1126);
                }
                else if(                list$1sNode$ph_length(field_type_1125->mArrayNum)>0) {
                    char source2_1127[1024];
                    memset(&source2_1127, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1127,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1124,name_1124,name_1124);
                    buffer_append_str(source_1113,source2_1127);
                }
                else {
                    char source2_1128[1024];
                    memset(&source2_1128, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1128,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1124,name_1124);
                    buffer_append_str(source_1113,source2_1128);
                }
                (name_1124 = come_decrement_ref_count(name_1124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1125,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1122,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        user_real_fun_name_1129=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1130=((struct sFun*)(__right_value896=map$2char$phsFun$ph_operator_load_element(info->funcs,user_real_fun_name_1129)));
        /*c*/ come_call_finalizer3(__right_value896,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        user_cloner_1130) {
            char source2_1131[1024];
            memset(&source2_1131, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1131,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1129);
            buffer_append_str(source_1113,source2_1131);
        }
        buffer_append_format(source_1113,"return result;");
        buffer_append_char(source_1113,125);
        p_1132=info->p;
        sline_1133=info->sline;
        sname_1134=(char*)come_increment_ref_count(info->sname);
        source3_1135=(struct buffer*)come_increment_ref_count(info->source);
        head_1136=info->head;
        __dec_obj226=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1113);
        /*b*/ come_call_finalizer3(__dec_obj226,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj227=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1101));
        __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1137=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1138=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_1139=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1101, "05function.c", 3391, "char*"));
        self_type_1140=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1140->mHeap=(_Bool)0;
        param_types_1141=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___1142[0]=self_type_1140,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3394, "struct list$1sType$ph")),1,__list_values11___1142)));
        param_names_1144=(struct list$1char$ph*)come_increment_ref_count((__list_values12___1143[0]=((char*)(__right_value904=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3395, "struct list$1char$ph")),1,__list_values12___1143)));
        (__right_value904 = come_decrement_ref_count(__right_value904, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1145=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3396, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1145,((void*)0));
        result_type_1138->mStatic=(_Bool)0;
        result_type_1138->mUniq=(_Bool)0;
        result_type_1138->mInline=(_Bool)0;
        fun2_1146=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value910=__builtin_string(name_1139)))));
        (__right_value909 = come_decrement_ref_count(__right_value909, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value910 = come_decrement_ref_count(__right_value910, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1146==((void*)0)||fun2_1146->mExternal) {
            fun_1147=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3406, "struct sFun*")),(char*)come_increment_ref_count(name_1139),(struct sType*)come_increment_ref_count(result_type_1138),(struct list$1sType$ph*)come_increment_ref_count(param_types_1141),(struct list$1char$ph*)come_increment_ref_count(param_names_1144),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1145),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1137),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1139)),(struct sFun*)come_increment_ref_count(fun_1147));
            _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3414, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value918=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3414, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1147),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1148=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value918,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1149=node_compile(node_1148,info);
            if(            !Value_1149) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value920=err_msg(info,"compiling error(Y)")));
                come_exception_var_c27_1150=multiple_assign_var48->v1;
                Err_1151=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1151)?(puts(Err_1151),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value920,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1151 = come_decrement_ref_count(Err_1151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1100=fun_1147;
            /*c*/ come_call_finalizer3(fun_1147,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1148) ? node_1148 = come_decrement_ref_count(node_1148, ((struct sNode*)node_1148)->finalize, ((struct sNode*)node_1148)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1100=fun2_1146;
        }
        __dec_obj228=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1134);
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1133;
        __dec_obj229=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1135);
        /*b*/ come_call_finalizer3(__dec_obj229,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1132;
        info->head=head_1136;
        info->sline=sline_1133;
        /*c*/ come_call_finalizer3(source_1113,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (user_real_fun_name_1129 = come_decrement_ref_count(user_real_fun_name_1129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1134 = come_decrement_ref_count(sname_1134, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1135,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1137,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1138,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1139 = come_decrement_ref_count(name_1139, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1140,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1141,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1144,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1145,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1146,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1099;
    __dec_obj230=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1096);
    __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj231=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1097);
    __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1098;
    __result_obj__382 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value922=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3442, "struct tuple2$2sFun$pchar$ph")),cloner_1100,(char*)come_increment_ref_count(real_fun_name_1101)))));
    (last_code_1096 = come_decrement_ref_count(last_code_1096, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1097 = come_decrement_ref_count(last_code2_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1101 = come_decrement_ref_count(real_fun_name_1101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1102,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1104 = come_decrement_ref_count(fun_name2_1104, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value922,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__382,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__382;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1188;
char* __dec_obj240;
char* last_code2_1189;
char* __dec_obj241;
_Bool comma_instead_of_semicolon_1190;
struct sClass* current_stack_frame_struct_1191;
struct sFun* to_string_fun_1192;
void* __right_value956 = (void*)0;
char* real_fun_name_1193;
void* __right_value957 = (void*)0;
struct sType* type_before_1194;
void* __right_value958 = (void*)0;
struct sType* type2_1195;
struct sClass* klass_1196;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
char* none_generics_name_1197;
void* __right_value961 = (void*)0;
char* generics_fun_name_1198;
void* __right_value962 = (void*)0;
struct sGenericsFun* generics_fun_1199;
void* __right_value963 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var51 = (void*)0;
char* name_1200=0;
_Bool err_1201=0;
void* __right_value964 = (void*)0;
int i_1202;
void* __right_value965 = (void*)0;
char* new_fun_name_1203;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
char* __dec_obj242;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct buffer* source_1204;
int i_1205;
void* __right_value971 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1206;
struct tuple2$2char$phsType$ph* it_1207;
struct tuple2$2char$phsType$ph* multiple_assign_var52 = (void*)0;
char* name_1208=0;
struct sType* field_type_1209=0;
char* p_1213;
int sline_1214;
char* sname_1215;
struct buffer* source3_1216;
char* head_1217;
struct buffer* __dec_obj243;
void* __right_value972 = (void*)0;
char* __dec_obj244;
void* __right_value973 = (void*)0;
struct sBlock* block_1218;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sType* result_type_1219;
void* __right_value977 = (void*)0;
char* name_1220;
void* __right_value978 = (void*)0;
struct sType* self_type_1221;
void* __right_value979 = (void*)0;
struct sType* __dec_obj245;
struct sType* __list_values15___1223[1];
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct list$1sType$ph* param_types_1222;
void* __right_value982 = (void*)0;
char* __list_values16___1224[1];
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct list$1char$ph* param_names_1225;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
struct list$1char$ph* param_default_parametors_1226;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sFun* fun2_1227;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
struct sFun* fun_1228;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value997 = (void*)0;
struct sNode* node_1229;
_Bool Value_1230;
void* __right_value998 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var53 = (void*)0;
int come_exception_var_c29_1231=0;
char* Err_1232=0;
char* __dec_obj246;
struct buffer* __dec_obj247;
char* __dec_obj248;
char* __dec_obj249;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__384;
memset(&i_1202, 0, sizeof(int));
    last_code_1188=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj240=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1189=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj241=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj241 = come_decrement_ref_count(__dec_obj241, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1190=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1191=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    to_string_fun_1192=((void*)0);
    real_fun_name_1193=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type_before_1194=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_1195=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
    type=type2_1195;
    klass_1196=type->mClass;
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        to_string_fun_1192=((struct sFun*)(__right_value959=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1193)));
        /*c*/ come_call_finalizer3(__right_value959,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        to_string_fun_1192==((void*)0)) {
            none_generics_name_1197=(char*)come_increment_ref_count(get_none_generics_name(type2_1195->mClass->mName));
            generics_fun_name_1198=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1197,fun_name));
            generics_fun_1199=((struct sGenericsFun*)(__right_value962=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_1198)));
            /*c*/ come_call_finalizer3(__right_value962,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1199) {
                multiple_assign_var51=((struct tuple2$2char$phbool$*)(__right_value963=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1193),generics_fun_1199,type,info)));
                name_1200=(char*)come_increment_ref_count(multiple_assign_var51->v1);
                err_1201=multiple_assign_var51->v2;
                /*c*/ come_call_finalizer3(__right_value963,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1201) {
                    printf("%s %d: can't create generics to_string_fun\n",info->sname,info->sline);
                    exit(2);
                }
                to_string_fun_1192=((struct sFun*)(__right_value964=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1200)));
                /*c*/ come_call_finalizer3(__right_value964,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1200 = come_decrement_ref_count(name_1200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1197 = come_decrement_ref_count(none_generics_name_1197, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1198 = come_decrement_ref_count(generics_fun_name_1198, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1202=128-1;        i_1202>=1;        i_1202--        ){
            new_fun_name_1203=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1193,i_1202));
            to_string_fun_1192=((struct sFun*)(__right_value966=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1203)));
            /*c*/ come_call_finalizer3(__right_value966,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            to_string_fun_1192) {
                __dec_obj242=real_fun_name_1193,
                real_fun_name_1193=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1203));
                __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1203 = come_decrement_ref_count(new_fun_name_1203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1203 = come_decrement_ref_count(new_fun_name_1203, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        to_string_fun_1192==((void*)0)) {
            to_string_fun_1192=((struct sFun*)(__right_value968=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1193)));
            /*c*/ come_call_finalizer3(__right_value968,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    to_string_fun_1192==((void*)0)&&type->mPointerNum>0&&!klass_1196->mNumber) {
        source_1204=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3650, "struct buffer*"))));
        buffer_append_str(source_1204,"{\n");
        buffer_append_str(source_1204,"var result = new buffer();\n");
        buffer_append_format(source_1204,"result.append_str(\"%s {\");\n",klass_1196->mName);
        i_1205=0;
        klass_1196=((struct sClass*)(__right_value971=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1196->mName)));
        /*c*/ come_call_finalizer3(__right_value971,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1206=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1196->mFields)),it_1207=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1206));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1206));        it_1207=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1206))        ){
            multiple_assign_var52=it_1207;
            name_1208=(char*)come_increment_ref_count(multiple_assign_var52->v1);
            field_type_1209=(struct sType*)come_increment_ref_count(multiple_assign_var52->v2);
            if(            string_operator_equals(field_type_1209->mClass->mName,"lambda")) {
                char source2_1210[1024];
                memset(&source2_1210, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1210,1024,"result.append_str(\"%s:\");\n",name_1208);
                buffer_append_str(source_1204,source2_1210);
                snprintf(source2_1210,1024,"result.append_str(\"lambda\");\n");
                buffer_append_str(source_1204,source2_1210);
            }
            else if(            i_1205==list$1tuple2$2char$phsType$ph$ph_length(klass_1196->mFields)-1) {
                char source2_1211[1024];
                memset(&source2_1211, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1211,1024,"result.append_str(\"%s:\");\n",name_1208);
                buffer_append_str(source_1204,source2_1211);
                snprintf(source2_1211,1024,"result.append_str(self.%s.to_string());\n",name_1208);
                buffer_append_str(source_1204,source2_1211);
            }
            else {
                char source2_1212[1024];
                memset(&source2_1212, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1212,1024,"result.append_str(\"%s:\");\n",name_1208);
                buffer_append_str(source_1204,source2_1212);
                snprintf(source2_1212,1024,"result.append_str(self.%s.to_string());\n",name_1208);
                buffer_append_str(source_1204,source2_1212);
                snprintf(source2_1212,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1204,source2_1212);
            }
            i_1205++;
            (name_1208 = come_decrement_ref_count(name_1208, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1209,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1206,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(source_1204,"result.append_str(\"}\");\n");
        buffer_append_format(source_1204,"return result.to_string();\n");
        buffer_append_char(source_1204,125);
        p_1213=info->p;
        sline_1214=info->sline;
        sname_1215=(char*)come_increment_ref_count(info->sname);
        source3_1216=(struct buffer*)come_increment_ref_count(info->source);
        head_1217=info->head;
        __dec_obj243=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1204);
        /*b*/ come_call_finalizer3(__dec_obj243,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj244=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1193));
        __dec_obj244 = come_decrement_ref_count(__dec_obj244, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1218=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1219=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3719, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1219->mHeap=(_Bool)1;
        name_1220=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1193, "05function.c", 3721, "char*"));
        self_type_1221=(struct sType*)come_increment_ref_count(sType_clone(type));
        __dec_obj245=self_type_1221,
        self_type_1221=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
        /*b*/ come_call_finalizer3(__dec_obj245,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self_type_1221->mHeap=(_Bool)0;
        param_types_1222=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___1223[0]=self_type_1221,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3726, "struct list$1sType$ph")),1,__list_values15___1223)));
        param_names_1225=(struct list$1char$ph*)come_increment_ref_count((__list_values16___1224[0]=((char*)(__right_value982=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3727, "struct list$1char$ph")),1,__list_values16___1224)));
        (__right_value982 = come_decrement_ref_count(__right_value982, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1226=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3728, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1226,((void*)0));
        result_type_1219->mStatic=(_Bool)0;
        result_type_1219->mUniq=(_Bool)0;
        result_type_1219->mInline=(_Bool)0;
        fun2_1227=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value988=__builtin_string(name_1220)))));
        (__right_value987 = come_decrement_ref_count(__right_value987, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value988 = come_decrement_ref_count(__right_value988, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1227==((void*)0)||fun2_1227->mExternal) {
            fun_1228=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3737, "struct sFun*")),(char*)come_increment_ref_count(name_1220),(struct sType*)come_increment_ref_count(result_type_1219),(struct list$1sType$ph*)come_increment_ref_count(param_types_1222),(struct list$1char$ph*)come_increment_ref_count(param_names_1225),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1226),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1218),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1220)),(struct sFun*)come_increment_ref_count(fun_1228));
            to_string_fun_1192=fun_1228;
            _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3747, "struct sNode");
            _inf_obj_value16=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value996=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3747, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1228),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sFunNode_finalize;
            _inf_value16->clone=(void*)sFunNode_clone;
            _inf_value16->compile=(void*)sFunNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sFunNode_kind;
            node_1229=(struct sNode*)come_increment_ref_count(_inf_value16);
            /*c*/ come_call_finalizer3(__right_value996,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1230=node_compile(node_1229,info);
            if(            !Value_1230) {
                multiple_assign_var53=((struct tuple2$2int$char$ph*)(__right_value998=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1231=multiple_assign_var53->v1;
                Err_1232=(char*)come_increment_ref_count(multiple_assign_var53->v2);
                ((Err_1232)?(puts(Err_1232),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value998,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1232 = come_decrement_ref_count(Err_1232, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1228,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1229) ? node_1229 = come_decrement_ref_count(node_1229, ((struct sNode*)node_1229)->finalize, ((struct sNode*)node_1229)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            to_string_fun_1192=fun2_1227;
        }
        __dec_obj246=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1215);
        __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1214;
        __dec_obj247=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1216);
        /*b*/ come_call_finalizer3(__dec_obj247,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1213;
        info->head=head_1217;
        info->sline=sline_1214;
        /*c*/ come_call_finalizer3(source_1204,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1215 = come_decrement_ref_count(sname_1215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1216,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1218,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1219,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1220 = come_decrement_ref_count(name_1220, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1221,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1222,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1225,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1226,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1227,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1191;
    __dec_obj248=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1188);
    __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj249=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1189);
    __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1190;
    __result_obj__384 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1000=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3773, "struct tuple2$2sFun$pchar$ph")),to_string_fun_1192,(char*)come_increment_ref_count(real_fun_name_1193)))));
    (last_code_1188 = come_decrement_ref_count(last_code_1188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1189 = come_decrement_ref_count(last_code2_1189, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1193 = come_decrement_ref_count(real_fun_name_1193, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_1194,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_1195,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value1000,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__384,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__384;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1233;
char* __dec_obj250;
char* last_code2_1234;
char* __dec_obj251;
_Bool comma_instead_of_semicolon_1235;
struct sClass* current_stack_frame_struct_1236;
struct sFun* get_hash_key_fun_1237;
void* __right_value1001 = (void*)0;
char* real_fun_name_1238;
void* __right_value1002 = (void*)0;
struct sType* type2_1239;
struct sClass* klass_1240;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
char* none_generics_name_1241;
void* __right_value1005 = (void*)0;
char* generics_fun_name_1242;
void* __right_value1006 = (void*)0;
struct sGenericsFun* generics_fun_1243;
void* __right_value1007 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1244=0;
_Bool err_1245=0;
void* __right_value1008 = (void*)0;
int i_1246;
void* __right_value1009 = (void*)0;
char* new_fun_name_1247;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
char* __dec_obj252;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct buffer* source_1248;
int i_1249;
void* __right_value1015 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1250;
struct tuple2$2char$phsType$ph* it_1251;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1252=0;
struct sType* field_type_1253=0;
char* p_1255;
int sline_1256;
char* sname_1257;
struct buffer* source3_1258;
char* head_1259;
struct buffer* __dec_obj253;
void* __right_value1016 = (void*)0;
char* __dec_obj254;
void* __right_value1017 = (void*)0;
struct sBlock* block_1260;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct sType* result_type_1261;
void* __right_value1021 = (void*)0;
char* name_1262;
void* __right_value1022 = (void*)0;
struct sType* self_type_1263;
struct sType* __list_values17___1265[1];
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct list$1sType$ph* param_types_1264;
void* __right_value1025 = (void*)0;
char* __list_values18___1266[1];
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct list$1char$ph* param_names_1267;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct list$1char$ph* param_default_parametors_1268;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct sFun* fun2_1269;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct sFun* fun_1270;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1040 = (void*)0;
struct sNode* node_1271;
_Bool Value_1272;
void* __right_value1041 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c30_1273=0;
char* Err_1274=0;
char* __dec_obj255;
struct buffer* __dec_obj256;
char* __dec_obj257;
char* __dec_obj258;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__385;
memset(&i_1246, 0, sizeof(int));
    last_code_1233=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj250=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj250 = come_decrement_ref_count(__dec_obj250, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1234=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj251=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1235=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1236=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1237=((void*)0);
    real_fun_name_1238=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1239=(struct sType*)come_increment_ref_count(solve_generics(type,type,info,(_Bool)0));
    type=type2_1239;
    klass_1240=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1237=((struct sFun*)(__right_value1003=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1238)));
        /*c*/ come_call_finalizer3(__right_value1003,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        get_hash_key_fun_1237==((void*)0)) {
            none_generics_name_1241=(char*)come_increment_ref_count(get_none_generics_name(type2_1239->mClass->mName));
            generics_fun_name_1242=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1241,fun_name));
            generics_fun_1243=((struct sGenericsFun*)(__right_value1006=map$2char$phsGenericsFun$ph_operator_load_element(info->generics_funcs,generics_fun_name_1242)));
            /*c*/ come_call_finalizer3(__right_value1006,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1243) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1007=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1238),generics_fun_1243,type,info)));
                name_1244=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1245=multiple_assign_var54->v2;
                /*c*/ come_call_finalizer3(__right_value1007,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1245) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1237=((struct sFun*)(__right_value1008=map$2char$phsFun$ph_operator_load_element(info->funcs,name_1244)));
                /*c*/ come_call_finalizer3(__right_value1008,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1244 = come_decrement_ref_count(name_1244, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1241 = come_decrement_ref_count(none_generics_name_1241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1242 = come_decrement_ref_count(generics_fun_name_1242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1246=128-1;        i_1246>=1;        i_1246--        ){
            new_fun_name_1247=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1238,i_1246));
            get_hash_key_fun_1237=((struct sFun*)(__right_value1010=map$2char$phsFun$ph_operator_load_element(info->funcs,new_fun_name_1247)));
            /*c*/ come_call_finalizer3(__right_value1010,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            get_hash_key_fun_1237) {
                __dec_obj252=real_fun_name_1238,
                real_fun_name_1238=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1247));
                __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1247 = come_decrement_ref_count(new_fun_name_1247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1247 = come_decrement_ref_count(new_fun_name_1247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1237==((void*)0)) {
            get_hash_key_fun_1237=((struct sFun*)(__right_value1012=map$2char$phsFun$ph_operator_load_element(info->funcs,real_fun_name_1238)));
            /*c*/ come_call_finalizer3(__right_value1012,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    get_hash_key_fun_1237==((void*)0)&&type->mPointerNum>0&&!klass_1240->mNumber&&!klass_1240->mProtocol) {
        source_1248=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc_v2(1, sizeof(struct buffer)*(1), "05function.c", 3843, "struct buffer*"))));
        buffer_append_str(source_1248,"{\n");
        buffer_append_str(source_1248,"unsigned int result = 0;\n");
        i_1249=0;
        klass_1240=((struct sClass*)(__right_value1015=map$2char$phsClass$ph_operator_load_element(info->classes,klass_1240->mName)));
        /*c*/ come_call_finalizer3(__right_value1015,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1250=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1240->mFields)),it_1251=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1250));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1250));        it_1251=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1250))        ){
            multiple_assign_var55=it_1251;
            name_1252=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1253=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1254[1024];
            memset(&source2_1254, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1254,1024,"result += ((int)self.%s).get_hash_key();\n",name_1252);
            buffer_append_str(source_1248,source2_1254);
            i_1249++;
            (name_1252 = come_decrement_ref_count(name_1252, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1253,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1250,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_format(source_1248,"return result;\n");
        buffer_append_char(source_1248,125);
        p_1255=info->p;
        sline_1256=info->sline;
        sname_1257=(char*)come_increment_ref_count(info->sname);
        source3_1258=(struct buffer*)come_increment_ref_count(info->source);
        head_1259=info->head;
        __dec_obj253=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1248);
        /*b*/ come_call_finalizer3(__dec_obj253,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj254=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1238));
        __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1260=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1261=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05function.c", 3880, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1261->mUnsigned=(_Bool)1;
        name_1262=(char*)come_increment_ref_count((char*)come_memdup(real_fun_name_1238, "05function.c", 3882, "char*"));
        self_type_1263=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_1263->mHeap=(_Bool)0;
        param_types_1264=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___1265[0]=self_type_1263,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc_v2(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3885, "struct list$1sType$ph")),1,__list_values17___1265)));
        param_names_1267=(struct list$1char$ph*)come_increment_ref_count((__list_values18___1266[0]=((char*)(__right_value1025=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3886, "struct list$1char$ph")),1,__list_values18___1266)));
        (__right_value1025 = come_decrement_ref_count(__right_value1025, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1268=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3887, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1268,((void*)0));
        result_type_1261->mStatic=(_Bool)0;
        result_type_1261->mUniq=(_Bool)0;
        result_type_1261->mInline=(_Bool)0;
        fun2_1269=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph_operator_load_element(info->funcs,((char*)(__right_value1031=__builtin_string(name_1262)))));
        (__right_value1030 = come_decrement_ref_count(__right_value1030, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1031 = come_decrement_ref_count(__right_value1031, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1269==((void*)0)||fun2_1269->mExternal) {
            fun_1270=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc_v2(1, sizeof(struct sFun)*(1), "05function.c", 3896, "struct sFun*")),(char*)come_increment_ref_count(name_1262),(struct sType*)come_increment_ref_count(result_type_1261),(struct list$1sType$ph*)come_increment_ref_count(param_types_1264),(struct list$1char$ph*)come_increment_ref_count(param_names_1267),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1268),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1260),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1262)),(struct sFun*)come_increment_ref_count(fun_1270));
            get_hash_key_fun_1237=fun_1270;
            _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05function.c", 3906, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1039=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc_v2(1, sizeof(struct sFunNode)*(1), "05function.c", 3906, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1270),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1271=(struct sNode*)come_increment_ref_count(_inf_value17);
            /*c*/ come_call_finalizer3(__right_value1039,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1272=node_compile(node_1271,info);
            if(            !Value_1272) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1041=err_msg(info,"compiling error(Y)")));
                come_exception_var_c30_1273=multiple_assign_var56->v1;
                Err_1274=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1274)?(puts(Err_1274),exit(2)):(0));
                /*c*/ come_call_finalizer3(__right_value1041,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1274 = come_decrement_ref_count(Err_1274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1270,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1271) ? node_1271 = come_decrement_ref_count(node_1271, ((struct sNode*)node_1271)->finalize, ((struct sNode*)node_1271)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1237=fun2_1269;
        }
        __dec_obj255=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1257);
        __dec_obj255 = come_decrement_ref_count(__dec_obj255, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1256;
        __dec_obj256=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1258);
        /*b*/ come_call_finalizer3(__dec_obj256,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1255;
        info->head=head_1259;
        info->sline=sline_1256;
        /*c*/ come_call_finalizer3(source_1248,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1257 = come_decrement_ref_count(sname_1257, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1258,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1260,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1261,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1262 = come_decrement_ref_count(name_1262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1263,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1264,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1267,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1268,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1269,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1236;
    __dec_obj257=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1233);
    __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj258=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1234);
    __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1235;
    __result_obj__385 = (struct tuple2$2sFun$pchar$ph*)come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1043=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc_v2(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3932, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_1237,(char*)come_increment_ref_count(real_fun_name_1238)))));
    (last_code_1233 = come_decrement_ref_count(last_code_1233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1234 = come_decrement_ref_count(last_code2_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1238 = come_decrement_ref_count(real_fun_name_1238, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1239,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value1043,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__385,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__385;
}

