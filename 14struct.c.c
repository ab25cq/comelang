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

struct sStructNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
};

struct sStructNobodyNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
};

struct sNothingNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sClassNode
{
    int sline;
    char* sname;
    int sline_real;
    char* mName;
    struct sClass* mClass;
    struct list$1sNode$ph* mMethods;
};

struct list_item$1sClass$p
{
    struct sClass* item;
    struct list_item$1sClass$p* prev;
    struct list_item$1sClass$p* next;
};

struct list$1sClass$p
{
    struct list_item$1sClass$p* head;
    struct list_item$1sClass$p* tail;
    int len;
    struct list_item$1sClass$p* it;
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
char* get_none_generics_name(char* class_name);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key);
static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item);
static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self);
static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self);
static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self);
static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value);
static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item);
static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail);
static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self);
static char* list$1char$ph_begin(struct list$1char$ph* self);
static _Bool list$1char$ph_end(struct list$1char$ph* self);
static char* list$1char$ph_next(struct list$1char$ph* self);
void output_struct_come_header(struct sClass* klass, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
static int list$1sType$ph_length(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item);
static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self);
static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self);
static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self);
static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
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
static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item);
static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void sStructNode_finalize(struct sStructNode* self);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info);
_Bool sNothingNode_terminated(struct sNothingNode* self);
char* sNothingNode_kind(struct sNothingNode* self);
_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info);
static void sNothingNode_finalize(struct sNothingNode* self);
struct sNode* create_nothing_node(struct sInfo* info);
static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static void sClassNode_finalize(struct sClassNode* self);
static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value);
static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item);
static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self);
static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self);
static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self);
static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self);
struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info);
static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
char* parse_struct_attribute(struct sInfo* info);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self);
static void list$1sClass$p$p_finalize(struct list$1sClass$p* self);
static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item);
static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self);
static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item);
static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self);
static _Bool list$1sClass$p_end(struct list$1sClass$p* self);
static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1char$ph_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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

void output_struct(struct sClass* klass, struct sInfo* info){
char* name_249;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct buffer* buf_250;
_Bool existance_generics_251;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_252;
struct tuple2$2char$phsType$ph* it_255;
struct tuple2$2char$phsType$ph* multiple_assign_var1 = (void*)0;
char* name_258=0;
struct sType* type_259=0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
void* __right_value190 = (void*)0;
_Bool _if_conditional1;
void* __right_value196 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    if(    list$1tuple2$2char$phsType$ph$ph_length(klass->mFields)==0) {
        return;
    }
    name_249=(char*)come_increment_ref_count(klass->mName);
    buf_250=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 14, "struct buffer*"))));
    buffer_append_format(buf_250,"struct %s\n{\n",klass->mName);
    existance_generics_251=(_Bool)0;
    for(    o2_saved_252=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_255=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_252));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_252));    it_255=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_252))    ){
        multiple_assign_var1=it_255;
        name_258=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        type_259=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        is_contained_method_generics_types(type_259,info)||is_contained_generics_types(type_259,info)) {
            existance_generics_251=(_Bool)1;
        }
        type_259->mStatic=(_Bool)0;
        buffer_append_str(buf_250,"    ");
        buffer_append_str(buf_250,((char*)(__right_value188=make_define_var(type_259,name_258,(_Bool)0,info))));
        (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_250,";\n");
        (name_258 = come_decrement_ref_count(name_258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_259,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_252,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_250,"};\n");
    }
    else {
        buffer_append_format(buf_250,"} %s;\n",klass->mAttribute);
    }
    if(    (_if_conditional1=(((struct buffer*)(__right_value190=map$2char$phbuffer$ph$p_operator_load_element(info->struct_definition,((char*)(__right_value189=__builtin_string(name_249))))))==((void*)0)&&!existance_generics_251)),    (__right_value189 = come_decrement_ref_count(__right_value189, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
    /*c*/ come_call_finalizer3(__right_value190,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional1) {
        map$2char$phbuffer$ph_insert(info->struct_definition,(char*)come_increment_ref_count(__builtin_string(name_249)),(struct buffer*)come_increment_ref_count(buf_250));
    }
    (name_249 = come_decrement_ref_count(name_249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_250,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_253;
struct tuple2$2char$phsType$ph* __result_obj__167;
struct tuple2$2char$phsType$ph* __result_obj__168;
struct tuple2$2char$phsType$ph* result_254;
struct tuple2$2char$phsType$ph* __result_obj__169;
result_253 = (void*)0;
result_254 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_253,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__167 = result_253;
        return __result_obj__167;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__168 = self->it->item;
        return __result_obj__168;
    }
    memset(&result_254,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__169 = result_254;
    return __result_obj__169;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_256;
struct tuple2$2char$phsType$ph* __result_obj__170;
struct tuple2$2char$phsType$ph* __result_obj__171;
struct tuple2$2char$phsType$ph* result_257;
struct tuple2$2char$phsType$ph* __result_obj__172;
result_256 = (void*)0;
result_257 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_256,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__170 = result_256;
        return __result_obj__170;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__171 = self->it->item;
        return __result_obj__171;
    }
    memset(&result_257,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__172 = result_257;
    return __result_obj__172;
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
struct list_item$1sType$ph* it_260;
struct list_item$1sType$ph* prev_it_261;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        prev_it_261=it_260;
        it_260=it_260->next;
        /*c*/ come_call_finalizer3(prev_it_261,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_262;
struct list_item$1sNode$ph* prev_it_263;
    it_262=self->head;
    while(it_262!=((void*)0)) {
        prev_it_263=it_262;
        it_262=it_262->next;
        /*c*/ come_call_finalizer3(prev_it_263,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_264;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_265;
    it_264=self->head;
    while(it_264!=((void*)0)) {
        prev_it_265=it_264;
        it_264=it_264->next;
        /*c*/ come_call_finalizer3(prev_it_265,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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

static struct buffer* map$2char$phbuffer$ph$p_operator_load_element(struct map$2char$phbuffer$ph* self, char* key){
struct buffer* default_value_266;
unsigned int hash_267;
unsigned int it_268;
struct buffer* __result_obj__173;
struct buffer* __result_obj__174;
struct buffer* __result_obj__175;
struct buffer* __result_obj__176;
default_value_266 = (void*)0;
    memset(&default_value_266,0,sizeof(struct buffer*));
    hash_267=string_get_hash_key(((char*)key))%self->size;
    it_268=hash_267;
    while((_Bool)1) {
        if(        self->item_existance[it_268]) {
            if(            string_equals(self->keys[it_268],key)) {
                __result_obj__173 = come_increment_ref_count(self->items[it_268]);
                /*c*/ come_call_finalizer3(default_value_266,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__173,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__173;
            }
            it_268++;
            if(            it_268>=self->size) {
                it_268=0;
            }
            else if(            it_268==hash_267) {
                __result_obj__174 = come_increment_ref_count(default_value_266);
                /*c*/ come_call_finalizer3(default_value_266,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__174,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__174;
            }
        }
        else {
            __result_obj__175 = come_increment_ref_count(default_value_266);
            /*c*/ come_call_finalizer3(default_value_266,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__175,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__175;
        }
    }
    __result_obj__176 = come_increment_ref_count(default_value_266);
    /*c*/ come_call_finalizer3(default_value_266,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

static struct map$2char$phbuffer$ph* map$2char$phbuffer$ph_insert(struct map$2char$phbuffer$ph* self, char* key, struct buffer* item){
unsigned int hash_286;
unsigned int it_287;
_Bool same_key_exist_304;
char* it2_307;
struct map$2char$phbuffer$ph* __result_obj__197;
    if(    self->len*10>=self->size) {
        map$2char$phbuffer$ph_rehash(self);
    }
    hash_286=string_get_hash_key(((char*)key))%self->size;
    it_287=hash_286;
    while((_Bool)1) {
        if(        self->item_existance[it_287]) {
            if(            string_equals(self->keys[it_287],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_287]);
                    (self->keys[it_287] = come_decrement_ref_count(self->keys[it_287], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_287]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_287]);
                    self->keys[it_287]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_287],buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_287]=(struct buffer*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_287]=item;
                }
                break;
            }
            it_287++;
            if(            it_287>=self->size) {
                it_287=0;
            }
            else if(            it_287==hash_286) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_287]=(_Bool)1;
            if(            1) {
                self->keys[it_287]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_287]=key;
            }
            if(            1) {
                self->items[it_287]=(struct buffer*)come_increment_ref_count(item);
            }
            else {
                self->items[it_287]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_304=(_Bool)0;
    for(    it2_307=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_307=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_307,key)) {
            same_key_exist_304=(_Bool)1;
        }
    }
    if(    !same_key_exist_304) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__197 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

static void map$2char$phbuffer$ph_rehash(struct map$2char$phbuffer$ph* self){
int size_269;
void* __right_value191 = (void*)0;
char** keys_270;
void* __right_value192 = (void*)0;
struct buffer** items_271;
void* __right_value193 = (void*)0;
_Bool* item_existance_272;
int len_273;
char* it_276;
struct buffer* default_value_279;
void* __right_value194 = (void*)0;
struct buffer* it2_280;
unsigned int hash_283;
int n_284;
struct buffer* default_value_285;
void* __right_value195 = (void*)0;
default_value_279 = (void*)0;
default_value_285 = (void*)0;
    size_269=self->size*10;
    keys_270=(char**)come_increment_ref_count(((char**)(__right_value191=(char**)come_calloc(1, sizeof(char*)*(1*(size_269)), "./comelang.h", 2281, "char**"))));
    items_271=(struct buffer**)come_increment_ref_count(((struct buffer**)(__right_value192=(struct buffer**)come_calloc(1, sizeof(struct buffer*)*(1*(size_269)), "./comelang.h", 2282, "struct buffer**"))));
    item_existance_272=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value193=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_269)), "./comelang.h", 2283, "_Bool*"))));
    len_273=0;
    for(    it_276=map$2char$phbuffer$ph_begin(self);    !map$2char$phbuffer$ph_end(self);    it_276=map$2char$phbuffer$ph_next(self)    ){
        memset(&default_value_279,0,sizeof(struct buffer*));
        it2_280=((struct buffer*)(__right_value194=map$2char$phbuffer$ph_at(self,it_276,(struct buffer*)come_increment_ref_count(default_value_279))));
        /*c*/ come_call_finalizer3(__right_value194,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_283=string_get_hash_key(((char*)it_276))%size_269;
        n_284=hash_283;
        while((_Bool)1) {
            if(            item_existance_272[n_284]) {
                n_284++;
                if(                n_284>=size_269) {
                    n_284=0;
                }
                else if(                n_284==hash_283) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_272[n_284]=(_Bool)1;
                keys_270[n_284]=it_276;
                items_271[n_284]=((struct buffer*)(__right_value195=map$2char$phbuffer$ph_at(self,it_276,(struct buffer*)come_increment_ref_count(default_value_285))));
                /*c*/ come_call_finalizer3(__right_value195,buffer_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_273++;
                /*c*/ come_call_finalizer3(default_value_285,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_285,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_279,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_270;
    self->items=items_271;
    self->item_existance=item_existance_272;
    self->size=size_269;
    self->len=len_273;
}

static char* map$2char$phbuffer$ph_begin(struct map$2char$phbuffer$ph* self){
char* result_274;
char* __result_obj__177;
char* __result_obj__178;
char* result_275;
char* __result_obj__179;
result_274 = (void*)0;
result_275 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_274,0,sizeof(char*));
        __result_obj__177 = result_274;
        return __result_obj__177;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__178 = self->key_list->it->item;
        return __result_obj__178;
    }
    memset(&result_275,0,sizeof(char*));
    __result_obj__179 = result_275;
    return __result_obj__179;
}

static _Bool map$2char$phbuffer$ph_end(struct map$2char$phbuffer$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phbuffer$ph_next(struct map$2char$phbuffer$ph* self){
char* result_277;
char* __result_obj__180;
char* __result_obj__181;
char* result_278;
char* __result_obj__182;
result_277 = (void*)0;
result_278 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_277,0,sizeof(char*));
        __result_obj__180 = result_277;
        return __result_obj__180;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__181 = self->key_list->it->item;
        return __result_obj__181;
    }
    memset(&result_278,0,sizeof(char*));
    __result_obj__182 = result_278;
    return __result_obj__182;
}

static struct buffer* map$2char$phbuffer$ph_at(struct map$2char$phbuffer$ph* self, char* key, struct buffer* default_value){
unsigned int hash_281;
unsigned int it_282;
struct buffer* __result_obj__183;
struct buffer* __result_obj__184;
struct buffer* __result_obj__185;
struct buffer* __result_obj__186;
    hash_281=string_get_hash_key(((char*)key))%self->size;
    it_282=hash_281;
    while((_Bool)1) {
        if(        self->item_existance[it_282]) {
            if(            string_equals(self->keys[it_282],key)) {
                __result_obj__183 = come_increment_ref_count(self->items[it_282]);
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__183,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__183;
            }
            it_282++;
            if(            it_282>=self->size) {
                it_282=0;
            }
            else if(            it_282==hash_281) {
                __result_obj__184 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__184,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__184;
            }
        }
        else {
            __result_obj__185 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__185,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__185;
        }
    }
    __result_obj__186 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__186,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_288;
struct list_item$1char$ph* it_289;
struct list$1char$ph* __result_obj__190;
    it2_288=0;
    it_289=self->head;
    while(it_289!=((void*)0)) {
        if(        string_equals(it_289->item,item)) {
            list$1char$ph_delete(self,it2_288,it2_288+1);
            break;
        }
        it2_288++;
        it_289=it_289->next;
    }
    __result_obj__190 = self;
    return __result_obj__190;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_290;
struct list$1char$ph* __result_obj__187;
struct list_item$1char$ph* it_293;
int i_294;
struct list_item$1char$ph* prev_it_295;
struct list_item$1char$ph* it_296;
int i_297;
struct list_item$1char$ph* prev_it_298;
struct list_item$1char$ph* it_299;
struct list_item$1char$ph* head_prev_it_300;
struct list_item$1char$ph* tail_it_301;
int i_302;
struct list_item$1char$ph* prev_it_303;
struct list$1char$ph* __result_obj__189;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_290=tail;
        tail=head;
        head=tmp_290;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__187 = self;
        return __result_obj__187;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_293=self->head;
        i_294=0;
        while(it_293!=((void*)0)) {
            if(            i_294<tail) {
                prev_it_295=it_293;
                it_293=it_293->next;
                i_294++;
                /*c*/ come_call_finalizer3(prev_it_295,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_294==tail) {
                self->head=it_293;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_293=it_293->next;
                i_294++;
            }
        }
    }
    else if(    tail==self->len) {
        it_296=self->head;
        i_297=0;
        while(it_296!=((void*)0)) {
            if(            i_297==head) {
                self->tail=it_296->prev;
                self->tail->next=((void*)0);
            }
            if(            i_297>=head) {
                prev_it_298=it_296;
                it_296=it_296->next;
                i_297++;
                /*c*/ come_call_finalizer3(prev_it_298,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_296=it_296->next;
                i_297++;
            }
        }
    }
    else {
        it_299=self->head;
        head_prev_it_300=((void*)0);
        tail_it_301=((void*)0);
        i_302=0;
        while(it_299!=((void*)0)) {
            if(            i_302==head) {
                head_prev_it_300=it_299->prev;
            }
            if(            i_302==tail) {
                tail_it_301=it_299;
            }
            if(            i_302>=head&&i_302<tail) {
                prev_it_303=it_299;
                it_299=it_299->next;
                i_302++;
                /*c*/ come_call_finalizer3(prev_it_303,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_299=it_299->next;
                i_302++;
            }
        }
        if(        head_prev_it_300!=((void*)0)) {
            head_prev_it_300->next=tail_it_301;
        }
        if(        tail_it_301!=((void*)0)) {
            tail_it_301->prev=head_prev_it_300;
        }
    }
    __result_obj__189 = self;
    return __result_obj__189;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_291;
struct list_item$1char$ph* prev_it_292;
struct list$1char$ph* __result_obj__188;
    it_291=self->head;
    while(it_291!=((void*)0)) {
        prev_it_292=it_291;
        it_291=it_291->next;
        /*c*/ come_call_finalizer3(prev_it_292,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__188 = self;
    return __result_obj__188;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_305;
char* __result_obj__191;
char* __result_obj__192;
char* result_306;
char* __result_obj__193;
result_305 = (void*)0;
result_306 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_305,0,sizeof(char*));
        __result_obj__191 = result_305;
        return __result_obj__191;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__192 = self->it->item;
        return __result_obj__192;
    }
    memset(&result_306,0,sizeof(char*));
    __result_obj__193 = result_306;
    return __result_obj__193;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_308;
char* __result_obj__194;
char* __result_obj__195;
char* result_309;
char* __result_obj__196;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_308,0,sizeof(char*));
        __result_obj__194 = result_308;
        return __result_obj__194;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__195 = self->it->item;
        return __result_obj__195;
    }
    memset(&result_309,0,sizeof(char*));
    __result_obj__196 = result_309;
    return __result_obj__196;
}

void output_struct_come_header(struct sClass* klass, struct sInfo* info){
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct buffer* buf_310;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_311;
struct tuple2$2char$phsType$ph* it_312;
struct tuple2$2char$phsType$ph* multiple_assign_var2 = (void*)0;
char* name_313=0;
struct sType* type_314=0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
char* id_315;
void* __right_value201 = (void*)0;
    if(    info->no_output_come_code) {
        return;
    }
    buf_310=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 50, "struct buffer*"))));
    if(    klass->mParentClassName) {
        buffer_append_format(buf_310,"struct %s extends %s\n{\n",klass->mName,klass->mParentClassName);
    }
    else {
        buffer_append_format(buf_310,"struct %s\n{\n",klass->mName);
    }
    for(    o2_saved_311=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass->mFields)),it_312=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_311));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_311));    it_312=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_311))    ){
        multiple_assign_var2=it_312;
        name_313=(char*)come_increment_ref_count(multiple_assign_var2->v1);
        type_314=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
        type_314->mStatic=(_Bool)0;
        buffer_append_str(buf_310,"    ");
        buffer_append_str(buf_310,((char*)(__right_value199=make_define_var_no_solved(type_314,name_313,(_Bool)0,(_Bool)1,info))));
        (__right_value199 = come_decrement_ref_count(__right_value199, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        buffer_append_str(buf_310,";\n");
        (name_313 = come_decrement_ref_count(name_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type_314,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_311,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    klass->mAttribute==((void*)0)) {
        buffer_append_str(buf_310,"};\n");
    }
    else {
        buffer_append_format(buf_310,"} %s;\n",klass->mAttribute);
    }
    id_315=(char*)come_increment_ref_count(__builtin_string(klass->mName));
    add_come_code_at_come_struct_header(info,id_315,"%s",((char*)(__right_value201=buffer_to_string(buf_310))));
    (__right_value201 = come_decrement_ref_count(__right_value201, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(buf_310,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (id_315 = come_decrement_ref_count(id_315, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_316;
struct sClass* klass_317;
int i_318;
void* __right_value202 = (void*)0;
_Bool result_319;
    type2_316=type->mNoSolvedGenericsType;
    if(    type2_316&&is_contained_generics_types(type2_316,info)) {
        return (_Bool)1;
    }
    klass_317=type->mClass;
    if(    klass_317->mGenerics) {
        return (_Bool)1;
    }
    for(    i_318=0;    i_318<list$1sType$ph_length(type->mGenericsTypes);    i_318++    ){
        result_319=is_contained_generics_types(((struct sType*)(__right_value202=list$1sType$ph$p_operator_load_element(type->mGenericsTypes,i_318))),info);
        /*c*/ come_call_finalizer3(__right_value202,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        result_319) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_320;
int i_321;
struct sType* __result_obj__198;
struct sType* default_value_322;
struct sType* __result_obj__199;
default_value_322 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_320=self->head;
    i_321=0;
    while(it_320!=((void*)0)) {
        if(        position==i_321) {
            __result_obj__198 = come_increment_ref_count(it_320->item);
            /*c*/ come_call_finalizer3(__result_obj__198,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__198;
        }
        it_320=it_320->next;
        i_321++;
    }
    memset(&default_value_322,0,sizeof(struct sType*));
    __result_obj__199 = come_increment_ref_count(default_value_322);
    /*c*/ come_call_finalizer3(default_value_322,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__199,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_323;
struct sClass* klass_324;
int i_325;
void* __right_value203 = (void*)0;
_Bool result_326;
    type2_323=type->mNoSolvedGenericsType;
    if(    type2_323&&is_contained_method_generics_types(type2_323,info)) {
        return (_Bool)1;
    }
    klass_324=type->mClass;
    if(    klass_324->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_325=0;    i_325<list$1sType$ph_length(type->mGenericsTypes);    i_325++    ){
        result_326=is_contained_method_generics_types(((struct sType*)(__right_value203=list$1sType$ph$p_operator_load_element(type->mGenericsTypes,i_325))),info);
        /*c*/ come_call_finalizer3(__right_value203,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        result_326) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value204 = (void*)0;
char* new_name_327;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
struct sClass* generics_class_330;
void* __right_value207 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c1_334=0;
char* Err_335=0;
_Bool __result_obj__204;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
struct sClass* new_class_357;
int i_358;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_359;
struct tuple2$2char$phsType$ph* it_360;
struct tuple2$2char$phsType$ph* multiple_assign_var4 = (void*)0;
char* name_361=0;
struct sType* type_362=0;
void* __right_value218 = (void*)0;
struct sType* new_type_363;
void* __right_value222 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct sType* __dec_obj47;
void* __right_value268 = (void*)0;
struct sType* __dec_obj48;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
_Bool __result_obj__236;
    new_name_327=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(    !map$2char$phsClass$ph_find(info->classes,new_name_327)) {
        generics_class_330=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph$p_operator_load_element(info->generics_classes,((char*)(__right_value205=__builtin_string(type->mClass->mName)))));
        (__right_value205 = come_decrement_ref_count(__right_value205, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        generics_class_330==((void*)0)) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value207=err_msg(info,"generics_class(%s) is null",type->mClass->mName)));
            come_exception_var_c1_334=multiple_assign_var3->v1;
            Err_335=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_335)?(puts(Err_335),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value207,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__204 = (_Bool)0;
            (Err_335 = come_decrement_ref_count(Err_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(generics_class_330,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (new_name_327 = come_decrement_ref_count(new_name_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__204;
            (Err_335 = come_decrement_ref_count(Err_335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_327)),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 140, "struct sClass*")),(char*)come_increment_ref_count(new_name_327),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
        new_class_357=((struct sClass*)(__right_value217=map$2char$phsClass$ph_at(info->classes,((char*)(__right_value216=__builtin_string(new_name_327))),((void*)0))));
        (__right_value216 = come_decrement_ref_count(__right_value216, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value217,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_358=0;
        for(        o2_saved_359=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((generics_class_330->mFields)),it_360=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_359));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_359));        it_360=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_359))        ){
            multiple_assign_var4=it_360;
            name_361=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            type_362=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
            new_type_363=(struct sType*)come_increment_ref_count(solve_generics(type_362,generics_type,info));
            list$1tuple2$2char$phsType$ph$ph_push_back(new_class_357->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 150, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count((char*)come_memdup(name_361, "14struct.c", 150, "char*")),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, new_type_363)))));
            (name_361 = come_decrement_ref_count(name_361, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_362,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(new_type_363,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_359,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj47=type->mNoSolvedGenericsType,
        type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        type->mClass=new_class_357;
        list$1sType$ph_reset(type->mGenericsTypes);
        output_struct(new_class_357,info);
        /*c*/ come_call_finalizer3(generics_class_330,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        if(        type->mNoSolvedGenericsType==((void*)0)&&list$1sType$ph_length(type->mGenericsTypes)>0) {
            __dec_obj48=type->mNoSolvedGenericsType,
            type->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            type->mNoSolvedGenericsType->mPointerNum=type->mPointerNum;
        }
        type->mClass=((struct sClass*)(__right_value270=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value269=__builtin_string(new_name_327))))));
        (__right_value269 = come_decrement_ref_count(__right_value269, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value270,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_reset(type->mGenericsTypes);
    }
    __result_obj__236 = (_Bool)1;
    (new_name_327 = come_decrement_ref_count(new_name_327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__236;
}

static _Bool map$2char$phsClass$ph_find(struct map$2char$phsClass$ph* self, char* key){
unsigned int hash_328;
int it_329;
    hash_328=string_get_hash_key(((char*)key))%self->size;
    it_329=hash_328;
    while((_Bool)1) {
        if(        self->item_existance[it_329]) {
            if(            string_equals(self->keys[it_329],key)) {
                return (_Bool)1;
            }
            it_329++;
            if(            it_329>=self->size) {
                it_329=0;
            }
            else if(            it_329==hash_328) {
                return (_Bool)0;
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_331;
unsigned int hash_332;
unsigned int it_333;
struct sClass* __result_obj__200;
struct sClass* __result_obj__201;
struct sClass* __result_obj__202;
struct sClass* __result_obj__203;
default_value_331 = (void*)0;
    memset(&default_value_331,0,sizeof(struct sClass*));
    hash_332=string_get_hash_key(((char*)key))%self->size;
    it_333=hash_332;
    while((_Bool)1) {
        if(        self->item_existance[it_333]) {
            if(            string_equals(self->keys[it_333],key)) {
                __result_obj__200 = come_increment_ref_count(self->items[it_333]);
                /*c*/ come_call_finalizer3(default_value_331,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__200,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__200;
            }
            it_333++;
            if(            it_333>=self->size) {
                it_333=0;
            }
            else if(            it_333==hash_332) {
                __result_obj__201 = come_increment_ref_count(default_value_331);
                /*c*/ come_call_finalizer3(default_value_331,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__201,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__201;
            }
        }
        else {
            __result_obj__202 = come_increment_ref_count(default_value_331);
            /*c*/ come_call_finalizer3(default_value_331,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__202,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__202;
        }
    }
    __result_obj__203 = come_increment_ref_count(default_value_331);
    /*c*/ come_call_finalizer3(default_value_331,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__203,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__203;
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

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_353;
unsigned int it_354;
_Bool same_key_exist_355;
char* it2_356;
struct map$2char$phsClass$ph* __result_obj__215;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
    }
    hash_353=string_get_hash_key(((char*)key))%self->size;
    it_354=hash_353;
    while((_Bool)1) {
        if(        self->item_existance[it_354]) {
            if(            string_equals(self->keys[it_354],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_354]);
                    (self->keys[it_354] = come_decrement_ref_count(self->keys[it_354], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_354]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_354]);
                    self->keys[it_354]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_354],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_354]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_354]=item;
                }
                break;
            }
            it_354++;
            if(            it_354>=self->size) {
                it_354=0;
            }
            else if(            it_354==hash_353) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_354]=(_Bool)1;
            if(            1) {
                self->keys[it_354]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_354]=key;
            }
            if(            1) {
                self->items[it_354]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_354]=item;
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
    __result_obj__215 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__215;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_336;
void* __right_value208 = (void*)0;
char** keys_337;
void* __right_value209 = (void*)0;
struct sClass** items_338;
void* __right_value210 = (void*)0;
_Bool* item_existance_339;
int len_340;
char* it_343;
struct sClass* default_value_346;
void* __right_value211 = (void*)0;
struct sClass* it2_347;
unsigned int hash_350;
int n_351;
struct sClass* default_value_352;
void* __right_value212 = (void*)0;
default_value_346 = (void*)0;
default_value_352 = (void*)0;
    size_336=self->size*10;
    keys_337=(char**)come_increment_ref_count(((char**)(__right_value208=(char**)come_calloc(1, sizeof(char*)*(1*(size_336)), "./comelang.h", 2281, "char**"))));
    items_338=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value209=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_336)), "./comelang.h", 2282, "struct sClass**"))));
    item_existance_339=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value210=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_336)), "./comelang.h", 2283, "_Bool*"))));
    len_340=0;
    for(    it_343=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_343=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_346,0,sizeof(struct sClass*));
        it2_347=((struct sClass*)(__right_value211=map$2char$phsClass$ph_at(self,it_343,(struct sClass*)come_increment_ref_count(default_value_346))));
        /*c*/ come_call_finalizer3(__right_value211,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_350=string_get_hash_key(((char*)it_343))%size_336;
        n_351=hash_350;
        while((_Bool)1) {
            if(            item_existance_339[n_351]) {
                n_351++;
                if(                n_351>=size_336) {
                    n_351=0;
                }
                else if(                n_351==hash_350) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_339[n_351]=(_Bool)1;
                keys_337[n_351]=it_343;
                items_338[n_351]=((struct sClass*)(__right_value212=map$2char$phsClass$ph_at(self,it_343,(struct sClass*)come_increment_ref_count(default_value_352))));
                /*c*/ come_call_finalizer3(__right_value212,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_340++;
                /*c*/ come_call_finalizer3(default_value_352,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_352,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
char* __result_obj__205;
char* __result_obj__206;
char* result_342;
char* __result_obj__207;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result_obj__205 = result_341;
        return __result_obj__205;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__206 = self->key_list->it->item;
        return __result_obj__206;
    }
    memset(&result_342,0,sizeof(char*));
    __result_obj__207 = result_342;
    return __result_obj__207;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_344;
char* __result_obj__208;
char* __result_obj__209;
char* result_345;
char* __result_obj__210;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result_obj__208 = result_344;
        return __result_obj__208;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__209 = self->key_list->it->item;
        return __result_obj__209;
    }
    memset(&result_345,0,sizeof(char*));
    __result_obj__210 = result_345;
    return __result_obj__210;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_348;
unsigned int it_349;
struct sClass* __result_obj__211;
struct sClass* __result_obj__212;
struct sClass* __result_obj__213;
struct sClass* __result_obj__214;
    hash_348=string_get_hash_key(((char*)key))%self->size;
    it_349=hash_348;
    while((_Bool)1) {
        if(        self->item_existance[it_349]) {
            if(            string_equals(self->keys[it_349],key)) {
                __result_obj__211 = come_increment_ref_count(self->items[it_349]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__211,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__211;
            }
            it_349++;
            if(            it_349>=self->size) {
                it_349=0;
            }
            else if(            it_349==hash_348) {
                __result_obj__212 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__212,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__212;
            }
        }
        else {
            __result_obj__213 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__213,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__213;
        }
    }
    __result_obj__214 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__214,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__214;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value219 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_364;
struct tuple2$2char$phsType$ph* __dec_obj16;
void* __right_value220 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_365;
struct tuple2$2char$phsType$ph* __dec_obj17;
void* __right_value221 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_366;
struct tuple2$2char$phsType$ph* __dec_obj18;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__216;
    if(    self->len==0) {
        litem_364=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value219=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1227, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_364->prev=((void*)0);
        litem_364->next=((void*)0);
        __dec_obj16=litem_364->item,
        litem_364->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj16,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_364;
        self->head=litem_364;
    }
    else if(    self->len==1) {
        litem_365=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value220=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1237, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_365->prev=self->head;
        litem_365->next=((void*)0);
        __dec_obj17=litem_365->item,
        litem_365->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj17,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_365;
        self->head->next=litem_365;
    }
    else {
        litem_366=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value221=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1247, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_366->prev=self->tail;
        litem_366->next=((void*)0);
        __dec_obj18=litem_366->item,
        litem_366->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj18,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_366;
        self->tail=litem_366;
    }
    self->len++;
    __result_obj__216 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__217;
void* __right_value223 = (void*)0;
struct sType* result_367;
void* __right_value224 = (void*)0;
struct sType* __dec_obj19;
void* __right_value225 = (void*)0;
struct sType* __dec_obj20;
void* __right_value233 = (void*)0;
struct list$1sType$ph* __dec_obj24;
void* __right_value234 = (void*)0;
struct sType* __dec_obj25;
void* __right_value235 = (void*)0;
struct sType* __dec_obj26;
void* __right_value237 = (void*)0;
struct sNode* __dec_obj27;
void* __right_value238 = (void*)0;
struct sNode* __dec_obj28;
void* __right_value239 = (void*)0;
char* __dec_obj29;
void* __right_value240 = (void*)0;
char* __dec_obj30;
void* __right_value241 = (void*)0;
char* __dec_obj31;
void* __right_value249 = (void*)0;
struct list$1sNode$ph* __dec_obj35;
void* __right_value250 = (void*)0;
char* __dec_obj36;
void* __right_value251 = (void*)0;
struct list$1sType$ph* __dec_obj37;
void* __right_value259 = (void*)0;
struct list$1char$ph* __dec_obj41;
void* __right_value260 = (void*)0;
struct sType* __dec_obj42;
struct sType* __result_obj__231;
    if(    self==(void*)0) {
        __result_obj__217 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__217,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__217;
    }
    result_367=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_367->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj19=result_367->mOriginalLoadVarType,
        result_367->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj20=result_367->mChannelType,
        result_367->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj24=result_367->mGenericsTypes,
        result_367->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj24,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj25=result_367->mNoSolvedGenericsType,
        result_367->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj26=result_367->mAnyOriginalType,
        result_367->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj27=result_367->mSizeNum,
        result_367->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj27 ? __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj28=result_367->mAlignas,
        result_367->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj28 ? __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj29=result_367->mTupleName,
        result_367->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj30=result_367->mAttribute,
        result_367->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_367->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_367->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_367->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_367->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_367->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_367->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_367->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_367->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_367->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_367->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_367->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_367->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_367->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_367->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_367->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_367->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_367->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_367->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_367->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_367->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_367->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_367->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj31=result_367->mAsmName,
        result_367->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_367->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_367->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj35=result_367->mArrayNum,
        result_367->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj35,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_367->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_367->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_367->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_367->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj36=result_367->mOriginalTypeName,
        result_367->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_367->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_367->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_367->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj37=result_367->mParamTypes,
        result_367->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj37,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj41=result_367->mParamNames,
        result_367->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj41,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj42=result_367->mResultType,
        result_367->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj42,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_367->mVarArgs=self->mVarArgs;
    }
    __result_obj__231 = come_increment_ref_count(result_367);
    /*c*/ come_call_finalizer3(result_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__231,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__231;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__218;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct list$1sType$ph* result_368;
struct list_item$1sType$ph* it_369;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct list$1sType$ph* __result_obj__221;
    if(    self==((void*)0)) {
        __result_obj__218 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__218,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__218;
    }
    result_368=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_369=self->head;
    while(it_369!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_368,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_369->item)));
        }
        else {
            list$1sType$ph_add(result_368,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_369->item)));
        }
        it_369=it_369->next;
    }
    __result_obj__221 = come_increment_ref_count(result_368);
    /*c*/ come_call_finalizer3(result_368,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__221,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__219;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__219 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__219,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__219;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value228 = (void*)0;
struct list_item$1sType$ph* litem_370;
struct sType* __dec_obj21;
void* __right_value229 = (void*)0;
struct list_item$1sType$ph* litem_371;
struct sType* __dec_obj22;
void* __right_value230 = (void*)0;
struct list_item$1sType$ph* litem_372;
struct sType* __dec_obj23;
struct list$1sType$ph* __result_obj__220;
    if(    self->len==0) {
        litem_370=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value228=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj21=litem_370->item,
        litem_370->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj21,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1) {
        litem_371=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value229=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj22=litem_371->item,
        litem_371->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value230=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj23=litem_372->item,
        litem_372->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result_obj__220 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_373;
struct list_item$1sType$ph* prev_it_374;
    it_373=self->head;
    while(it_373!=((void*)0)) {
        prev_it_374=it_373;
        it_373=it_373->next;
        /*c*/ come_call_finalizer3(prev_it_374,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__222;
void* __right_value236 = (void*)0;
struct sNode* result_375;
struct sNode* __result_obj__223;
    if(    self==(void*)0) {
        __result_obj__222 = come_increment_ref_count((void*)0);
        ((__result_obj__222) ? __result_obj__222 = come_decrement_ref_count(__result_obj__222, ((struct sNode*)__result_obj__222)->finalize, ((struct sNode*)__result_obj__222)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__222;
    }
    result_375=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_375->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_375->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_375->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_375->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_375->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_375->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_375->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_375->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_375->kind=self->kind;
    }
    __result_obj__223 = come_increment_ref_count(result_375);
    ((result_375) ? result_375 = come_decrement_ref_count(result_375, ((struct sNode*)result_375)->finalize, ((struct sNode*)result_375)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__223) ? __result_obj__223 = come_decrement_ref_count(__result_obj__223, ((struct sNode*)__result_obj__223)->finalize, ((struct sNode*)__result_obj__223)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__223;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__224;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
struct list$1sNode$ph* result_376;
struct list_item$1sNode$ph* it_377;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct list$1sNode$ph* __result_obj__227;
    if(    self==((void*)0)) {
        __result_obj__224 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__224,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__224;
    }
    result_376=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_377=self->head;
    while(it_377!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_376,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_377->item)));
        }
        else {
            list$1sNode$ph_add(result_376,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_377->item)));
        }
        it_377=it_377->next;
    }
    __result_obj__227 = come_increment_ref_count(result_376);
    /*c*/ come_call_finalizer3(result_376,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__227,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__227;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__225;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__225 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__225,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__225;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value244 = (void*)0;
struct list_item$1sNode$ph* litem_378;
struct sNode* __dec_obj32;
void* __right_value245 = (void*)0;
struct list_item$1sNode$ph* litem_379;
struct sNode* __dec_obj33;
void* __right_value246 = (void*)0;
struct list_item$1sNode$ph* litem_380;
struct sNode* __dec_obj34;
struct list$1sNode$ph* __result_obj__226;
    if(    self->len==0) {
        litem_378=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value244=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj32=litem_378->item,
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value245=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj33=litem_379->item,
        litem_379->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value246=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj34=litem_380->item,
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj34 ? __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result_obj__226 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__226;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_381;
struct list_item$1sNode$ph* prev_it_382;
    it_381=self->head;
    while(it_381!=((void*)0)) {
        prev_it_382=it_381;
        it_381=it_381->next;
        /*c*/ come_call_finalizer3(prev_it_382,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__228;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct list$1char$ph* result_383;
struct list_item$1char$ph* it_384;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1char$ph* __result_obj__230;
    if(    self==((void*)0)) {
        __result_obj__228 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__228,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__228;
    }
    result_383=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_384=self->head;
    while(it_384!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_383,(char*)come_increment_ref_count((char*)come_memdup(it_384->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_383,(char*)come_increment_ref_count((char*)come_memdup(it_384->item, "./comelang.h", 1146, "char*")));
        }
        it_384=it_384->next;
    }
    __result_obj__230 = come_increment_ref_count(result_383);
    /*c*/ come_call_finalizer3(result_383,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__230,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__230;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value254 = (void*)0;
struct list_item$1char$ph* litem_385;
char* __dec_obj38;
void* __right_value255 = (void*)0;
struct list_item$1char$ph* litem_386;
char* __dec_obj39;
void* __right_value256 = (void*)0;
struct list_item$1char$ph* litem_387;
char* __dec_obj40;
struct list$1char$ph* __result_obj__229;
    if(    self->len==0) {
        litem_385=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value254=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_385->prev=((void*)0);
        litem_385->next=((void*)0);
        __dec_obj38=litem_385->item,
        litem_385->item=(char*)come_increment_ref_count(item);
        __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_385;
        self->head=litem_385;
    }
    else if(    self->len==1) {
        litem_386=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value255=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_386->prev=self->head;
        litem_386->next=((void*)0);
        __dec_obj39=litem_386->item,
        litem_386->item=(char*)come_increment_ref_count(item);
        __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_386;
        self->head->next=litem_386;
    }
    else {
        litem_387=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value256=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_387->prev=self->tail;
        litem_387->next=((void*)0);
        __dec_obj40=litem_387->item,
        litem_387->item=(char*)come_increment_ref_count(item);
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_387;
        self->tail=litem_387;
    }
    self->len++;
    __result_obj__229 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__229;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_388;
struct list_item$1char$ph* prev_it_389;
    it_388=self->head;
    while(it_388!=((void*)0)) {
        prev_it_389=it_388;
        it_388=it_388->next;
        /*c*/ come_call_finalizer3(prev_it_389,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsType$ph* __result_obj__232;
void* __right_value262 = (void*)0;
struct tuple2$2char$phsType$ph* result_390;
void* __right_value263 = (void*)0;
char* __dec_obj43;
void* __right_value264 = (void*)0;
struct sType* __dec_obj44;
struct tuple2$2char$phsType$ph* __result_obj__233;
    if(    self==(void*)0) {
        __result_obj__232 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__232,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__232;
    }
    result_390=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj43=result_390->v1,
        result_390->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj44=result_390->v2,
        result_390->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__233 = come_increment_ref_count(result_390);
    /*c*/ come_call_finalizer3(result_390,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__233,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_391;
    result_391=0;
    result_391+=int_get_hash_key(((int)self->v1));
    result_391+=int_get_hash_key(((int)self->v2));
    return result_391;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_392;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_393;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_392=left->head;
    it2_393=right->head;
    while(it_392!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_392->item,it2_393->item)) {
            return (_Bool)0;
        }
        it_392=it_392->next;
        it2_393=it2_393->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_394;
struct list_item$1sType$ph* it2_395;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_394=left->head;
    it2_395=right->head;
    while(it_394!=((void*)0)) {
        if(        !sType_equals(it_394->item,it2_395->item)) {
            return (_Bool)0;
        }
        it_394=it_394->next;
        it2_395=it2_395->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_396;
struct list_item$1sNode$ph* it2_397;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_396=left->head;
    it2_397=right->head;
    while(it_396!=((void*)0)) {
        if(        !sNode_equals(it_396->item,it2_397->item)) {
            return (_Bool)0;
        }
        it_396=it_396->next;
        it2_397=it2_397->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_398;
struct list_item$1char$ph* it2_399;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_398=left->head;
    it2_399=right->head;
    while(it_398!=((void*)0)) {
        if(        !string_equals(it_398->item,it2_399->item)) {
            return (_Bool)0;
        }
        it_398=it_398->next;
        it2_399=it2_399->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj45;
struct sType* __dec_obj46;
struct tuple2$2char$phsType$ph* __result_obj__234;
    __dec_obj45=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj46=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__234 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__234,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static struct list$1sType$ph* list$1sType$ph_reset(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_400;
struct list_item$1sType$ph* prev_it_401;
struct list$1sType$ph* __result_obj__235;
    it_400=self->head;
    while(it_400!=((void*)0)) {
        prev_it_401=it_400;
        it_400=it_400->next;
        /*c*/ come_call_finalizer3(prev_it_401,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__235 = self;
    return __result_obj__235;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
char* __dec_obj49;
void* __right_value285 = (void*)0;
struct sClass* __dec_obj57;
struct sStructNode* __result_obj__243;
    ((struct sNodeBase*)(__right_value271=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value271,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj49=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj57=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    /*b*/ come_call_finalizer3(__dec_obj57,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__243 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__243,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__243;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __right_value286 = (void*)0;
char* __result_obj__244;
    __result_obj__244 = come_increment_ref_count(((char*)(__right_value286=__builtin_string("sStructNode"))));
    (__right_value286 = come_decrement_ref_count(__right_value286, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__244 = come_decrement_ref_count(__result_obj__244, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__244;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
struct sClass* klass_410;
void* __right_value287 = (void*)0;
char* name_411;
_Bool __result_obj__245;
    klass_410=(struct sClass*)come_increment_ref_count(self->mClass);
    name_411=(char*)come_increment_ref_count(__builtin_string(self->mName));
    output_struct(klass_410,info);
    __result_obj__245 = (_Bool)1;
    /*c*/ come_call_finalizer3(klass_410,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_411 = come_decrement_ref_count(name_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__245;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClass* sClass_clone(struct sClass* self){
struct sClass* __result_obj__237;
void* __right_value273 = (void*)0;
struct sClass* result_402;
void* __right_value274 = (void*)0;
char* __dec_obj50;
void* __right_value282 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj54;
void* __right_value283 = (void*)0;
char* __dec_obj55;
void* __right_value284 = (void*)0;
char* __dec_obj56;
struct sClass* __result_obj__242;
    if(    self==(void*)0) {
        __result_obj__237 = (void*)0;
        return __result_obj__237;
    }
    result_402=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "struct sClass*"));
    if(    self!=((void*)0)) {
        result_402->mStruct=self->mStruct;
    }
    if(    self!=((void*)0)) {
        result_402->mFloat=self->mFloat;
    }
    if(    self!=((void*)0)) {
        result_402->mUnion=self->mUnion;
    }
    if(    self!=((void*)0)) {
        result_402->mGenerics=self->mGenerics;
    }
    if(    self!=((void*)0)) {
        result_402->mMethodGenerics=self->mMethodGenerics;
    }
    if(    self!=((void*)0)) {
        result_402->mEnum=self->mEnum;
    }
    if(    self!=((void*)0)) {
        result_402->mProtocol=self->mProtocol;
    }
    if(    self!=((void*)0)) {
        result_402->mNumber=self->mNumber;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj50=result_402->mName,
        result_402->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClass_clone", 12, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_402->mGenericsNum=self->mGenericsNum;
    }
    if(    self!=((void*)0)) {
        result_402->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj54=result_402->mFields,
        result_402->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsType$ph$ph$p_clone, self->mFields));
        /*b*/ come_call_finalizer3(__dec_obj54,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj55=result_402->mParentClassName,
        result_402->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(self->mParentClassName, "sClass_clone", 16, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj56=result_402->mAttribute,
        result_402->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sClass_clone", 17, "char*"));
        __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_402->mDynamic=self->mDynamic;
    }
    __result_obj__242 = result_402;
    /*c*/ come_call_finalizer3(result_402,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__242;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph$p_clone(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__238;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* result_403;
struct list_item$1tuple2$2char$phsType$ph$ph* it_404;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__241;
    if(    self==((void*)0)) {
        __result_obj__238 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__238,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__238;
    }
    result_403=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsType$ph$ph_initialize((struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple2$2char$phsType$ph$ph*"))));
    it_404=self->head;
    while(it_404!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsType$ph$ph_add(result_403,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_404->item)));
        }
        else {
            list$1tuple2$2char$phsType$ph$ph_add(result_403,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_404->item)));
        }
        it_404=it_404->next;
    }
    __result_obj__241 = come_increment_ref_count(result_403);
    /*c*/ come_call_finalizer3(result_403,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_initialize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__239;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__239 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__239,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__239;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_add(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value277 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_405;
struct tuple2$2char$phsType$ph* __dec_obj51;
void* __right_value278 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_406;
struct tuple2$2char$phsType$ph* __dec_obj52;
void* __right_value279 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_407;
struct tuple2$2char$phsType$ph* __dec_obj53;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__240;
    if(    self->len==0) {
        litem_405=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value277=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_405->prev=((void*)0);
        litem_405->next=((void*)0);
        __dec_obj51=litem_405->item,
        litem_405->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_405;
        self->head=litem_405;
    }
    else if(    self->len==1) {
        litem_406=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value278=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_406->prev=self->head;
        litem_406->next=((void*)0);
        __dec_obj52=litem_406->item,
        litem_406->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj52,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_406;
        self->head->next=litem_406;
    }
    else {
        litem_407=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value279=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_407->prev=self->tail;
        litem_407->next=((void*)0);
        __dec_obj53=litem_407->item,
        litem_407->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj53,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_407;
        self->tail=litem_407;
    }
    self->len++;
    __result_obj__240 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__240;
}

static void list$1tuple2$2char$phsType$ph$ph_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_408;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_409;
    it_408=self->head;
    while(it_408!=((void*)0)) {
        prev_it_409=it_408;
        it_408=it_408->next;
        /*c*/ come_call_finalizer3(prev_it_409,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void sStructNode_finalize(struct sStructNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mClass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sInfo* info){
void* __right_value288 = (void*)0;
char* __dec_obj58;
struct sStructNobodyNode* __result_obj__246;
    ((struct sNodeBase*)(__right_value288=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value288,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj58=self->mName,
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__246 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__246,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__246;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __right_value289 = (void*)0;
char* __result_obj__247;
    __result_obj__247 = come_increment_ref_count(((char*)(__right_value289=__builtin_string("sStructNobodyNode"))));
    (__right_value289 = come_decrement_ref_count(__right_value289, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__247 = come_decrement_ref_count(__result_obj__247, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__247;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
char* name_412;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
_Bool __result_obj__248;
    name_412=(char*)come_increment_ref_count(self->mName);
    map$2char$phbuffer$ph_insert(info->previous_struct_definition,(char*)come_increment_ref_count(__builtin_string(name_412)),(struct buffer*)come_increment_ref_count(charp_to_buffer(((char*)(__right_value291=xsprintf("struct %s;\n",name_412))))));
    (__right_value291 = come_decrement_ref_count(__right_value291, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    __result_obj__248 = (_Bool)1;
    (name_412 = come_decrement_ref_count(name_412, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__248;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNothingNode* sNothingNode_initialize(struct sNothingNode* self, struct sInfo* info){
void* __right_value293 = (void*)0;
struct sNothingNode* __result_obj__249;
    ((struct sNodeBase*)(__right_value293=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value293,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__249 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

_Bool sNothingNode_terminated(struct sNothingNode* self){
    return (_Bool)1;
}

char* sNothingNode_kind(struct sNothingNode* self){
void* __right_value294 = (void*)0;
char* __result_obj__250;
    __result_obj__250 = come_increment_ref_count(((char*)(__right_value294=__builtin_string("sNothingNode"))));
    (__right_value294 = come_decrement_ref_count(__right_value294, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__250 = come_decrement_ref_count(__result_obj__250, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__250;
}

_Bool sNothingNode_compile(struct sNothingNode* self, struct sInfo* info){
    return (_Bool)1;
}

static void sNothingNode_finalize(struct sNothingNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_nothing_node(struct sInfo* info){
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sNode* _inf_value1;
struct sNothingNode* _inf_obj_value1;
void* __right_value299 = (void*)0;
struct sNode* __result_obj__253;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 259, "struct sNode");
    _inf_obj_value1=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value296=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 259, "struct sNothingNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNothingNode_finalize;
    _inf_value1->clone=(void*)sNothingNode_clone;
    _inf_value1->compile=(void*)sNothingNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNothingNode_terminated;
    _inf_value1->kind=(void*)sNothingNode_kind;
    __result_obj__253 = come_increment_ref_count(((struct sNode*)(__right_value299=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value296,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value299) ? __right_value299 = come_decrement_ref_count(__right_value299, ((struct sNode*)__right_value299)->finalize, ((struct sNode*)__right_value299)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__253) ? __result_obj__253 = come_decrement_ref_count(__result_obj__253, ((struct sNode*)__result_obj__253)->finalize, ((struct sNode*)__result_obj__253)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__253;
}

static struct sNothingNode* sNothingNode_clone(struct sNothingNode* self){
struct sNothingNode* __result_obj__251;
void* __right_value297 = (void*)0;
struct sNothingNode* result_413;
void* __right_value298 = (void*)0;
char* __dec_obj59;
struct sNothingNode* __result_obj__252;
    if(    self==(void*)0) {
        __result_obj__251 = (void*)0;
        return __result_obj__251;
    }
    result_413=(struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "sNothingNode_clone", 3, "struct sNothingNode*"));
    if(    self!=((void*)0)) {
        result_413->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj59=result_413->sname,
        result_413->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sNothingNode_clone", 5, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_413->sline_real=self->sline_real;
    }
    __result_obj__252 = result_413;
    /*c*/ come_call_finalizer3(result_413,sNothingNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__252;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNode$ph* methods, struct sInfo* info){
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
char* __dec_obj60;
void* __right_value302 = (void*)0;
struct sClass* __dec_obj61;
struct list$1sNode$ph* __dec_obj62;
struct sClassNode* __result_obj__254;
    ((struct sNodeBase*)(__right_value300=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value300,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj60=self->mName,
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj61=self->mClass,
    self->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass));
    /*b*/ come_call_finalizer3(__dec_obj61,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj62=self->mMethods,
    self->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(methods);
    /*b*/ come_call_finalizer3(__dec_obj62,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__254 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (name = come_decrement_ref_count(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(klass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(methods,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__254,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__254;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __right_value303 = (void*)0;
char* __result_obj__255;
    __result_obj__255 = come_increment_ref_count(((char*)(__right_value303=__builtin_string("sClassNode"))));
    (__right_value303 = come_decrement_ref_count(__right_value303, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__255 = come_decrement_ref_count(__result_obj__255, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__255;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
struct sClass* klass_414;
void* __right_value304 = (void*)0;
char* name_415;
void* __right_value305 = (void*)0;
_Bool _if_conditional2;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
_Bool _if_conditional3;
void* __right_value309 = (void*)0;
struct sClass* klass2_416;
void* __right_value310 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* __dec_obj63;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sType* type_417;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sType* override__418;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1sNode$ph* o2_saved_440;
struct sNode* it_443;
_Bool Value_446;
_Bool __result_obj__273;
_Bool __result_obj__274;
    klass_414=(struct sClass*)come_increment_ref_count(self->mClass);
    name_415=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    (_if_conditional2=(((struct sClass*)(__right_value305=map$2char$phsClass$ph_at(info->classes,name_415,((void*)0))))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value305,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional2) {
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(name_415),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_414)));
    }
    if(    (_if_conditional3=(((struct sClass*)(__right_value307=map$2char$phsClass$ph_at(info->classes,name_415,((void*)0))))&&list$1tuple2$2char$phsType$ph$ph_length(((struct sClass*)(__right_value308=map$2char$phsClass$ph_at(info->classes,name_415,((void*)0))))->mFields)==0)),    /*c*/ come_call_finalizer3(__right_value307,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    /*c*/ come_call_finalizer3(__right_value308,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional3) {
        klass2_416=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,name_415,((void*)0)));
        __dec_obj63=klass2_416->mFields,
        klass2_416->mFields=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsType$ph$ph$p_clone, klass_414->mFields));
        /*b*/ come_call_finalizer3(__dec_obj63,list$1tuple2$2char$phsType$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(klass2_416,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    type_417=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 298, "struct sType*")),(char*)come_increment_ref_count(name_415),(_Bool)0,info));
    override__418=((struct sType*)(__right_value314=map$2char$phsType$ph_at(info->types,((char*)(__right_value313=__builtin_string(name_415))),((void*)0))));
    (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value314,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    override__418) {
        if(        override__418->mTypedef) {
            type_417->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(name_415)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_417)));
    output_struct(klass_414,info);
    for(    o2_saved_440=(struct list$1sNode$ph*)come_increment_ref_count((self->mMethods)),it_443=list$1sNode$ph_begin((o2_saved_440));    !list$1sNode$ph_end((o2_saved_440));    it_443=list$1sNode$ph_next((o2_saved_440))    ){
        Value_446=node_compile(it_443,info);
        if(        !Value_446) {
            __result_obj__273 = (_Bool)0;
            /*c*/ come_call_finalizer3(o2_saved_440,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(klass_414,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_415 = come_decrement_ref_count(name_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type_417,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__273;
        }
        else {
        }
    }
    /*c*/ come_call_finalizer3(o2_saved_440,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    info->output_header_file) {
        output_struct_come_header(klass_414,info);
    }
    __result_obj__274 = (_Bool)1;
    /*c*/ come_call_finalizer3(klass_414,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (name_415 = come_decrement_ref_count(name_415, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_417,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

static void sClassNode_finalize(struct sClassNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mClass,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->mMethods,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* map$2char$phsType$ph_at(struct map$2char$phsType$ph* self, char* key, struct sType* default_value){
unsigned int hash_419;
unsigned int it_420;
struct sType* __result_obj__256;
struct sType* __result_obj__257;
struct sType* __result_obj__258;
struct sType* __result_obj__259;
    hash_419=string_get_hash_key(((char*)key))%self->size;
    it_420=hash_419;
    while((_Bool)1) {
        if(        self->item_existance[it_420]) {
            if(            string_equals(self->keys[it_420],key)) {
                __result_obj__256 = come_increment_ref_count(self->items[it_420]);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__256,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__256;
            }
            it_420++;
            if(            it_420>=self->size) {
                it_420=0;
            }
            else if(            it_420==hash_419) {
                __result_obj__257 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__257,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__257;
            }
        }
        else {
            __result_obj__258 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__258,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__258;
        }
    }
    __result_obj__259 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__259,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__259;
}

static struct map$2char$phsType$ph* map$2char$phsType$ph_insert(struct map$2char$phsType$ph* self, char* key, struct sType* item){
unsigned int hash_436;
unsigned int it_437;
_Bool same_key_exist_438;
char* it2_439;
struct map$2char$phsType$ph* __result_obj__266;
    if(    self->len*10>=self->size) {
        map$2char$phsType$ph_rehash(self);
    }
    hash_436=string_get_hash_key(((char*)key))%self->size;
    it_437=hash_436;
    while((_Bool)1) {
        if(        self->item_existance[it_437]) {
            if(            string_equals(self->keys[it_437],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_437]);
                    (self->keys[it_437] = come_decrement_ref_count(self->keys[it_437], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_437]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_437]);
                    self->keys[it_437]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_437],sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_437]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_437]=item;
                }
                break;
            }
            it_437++;
            if(            it_437>=self->size) {
                it_437=0;
            }
            else if(            it_437==hash_436) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_437]=(_Bool)1;
            if(            1) {
                self->keys[it_437]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_437]=key;
            }
            if(            1) {
                self->items[it_437]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_437]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_438=(_Bool)0;
    for(    it2_439=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_439=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_439,key)) {
            same_key_exist_438=(_Bool)1;
        }
    }
    if(    !same_key_exist_438) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__266 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static void map$2char$phsType$ph_rehash(struct map$2char$phsType$ph* self){
int size_421;
void* __right_value315 = (void*)0;
char** keys_422;
void* __right_value316 = (void*)0;
struct sType** items_423;
void* __right_value317 = (void*)0;
_Bool* item_existance_424;
int len_425;
char* it_428;
struct sType* default_value_431;
void* __right_value318 = (void*)0;
struct sType* it2_432;
unsigned int hash_433;
int n_434;
struct sType* default_value_435;
void* __right_value319 = (void*)0;
default_value_431 = (void*)0;
default_value_435 = (void*)0;
    size_421=self->size*10;
    keys_422=(char**)come_increment_ref_count(((char**)(__right_value315=(char**)come_calloc(1, sizeof(char*)*(1*(size_421)), "./comelang.h", 2281, "char**"))));
    items_423=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value316=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_421)), "./comelang.h", 2282, "struct sType**"))));
    item_existance_424=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value317=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_421)), "./comelang.h", 2283, "_Bool*"))));
    len_425=0;
    for(    it_428=map$2char$phsType$ph_begin(self);    !map$2char$phsType$ph_end(self);    it_428=map$2char$phsType$ph_next(self)    ){
        memset(&default_value_431,0,sizeof(struct sType*));
        it2_432=((struct sType*)(__right_value318=map$2char$phsType$ph_at(self,it_428,(struct sType*)come_increment_ref_count(default_value_431))));
        /*c*/ come_call_finalizer3(__right_value318,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_433=string_get_hash_key(((char*)it_428))%size_421;
        n_434=hash_433;
        while((_Bool)1) {
            if(            item_existance_424[n_434]) {
                n_434++;
                if(                n_434>=size_421) {
                    n_434=0;
                }
                else if(                n_434==hash_433) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_424[n_434]=(_Bool)1;
                keys_422[n_434]=it_428;
                items_423[n_434]=((struct sType*)(__right_value319=map$2char$phsType$ph_at(self,it_428,(struct sType*)come_increment_ref_count(default_value_435))));
                /*c*/ come_call_finalizer3(__right_value319,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_425++;
                /*c*/ come_call_finalizer3(default_value_435,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_435,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_431,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_422;
    self->items=items_423;
    self->item_existance=item_existance_424;
    self->size=size_421;
    self->len=len_425;
}

static char* map$2char$phsType$ph_begin(struct map$2char$phsType$ph* self){
char* result_426;
char* __result_obj__260;
char* __result_obj__261;
char* result_427;
char* __result_obj__262;
result_426 = (void*)0;
result_427 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_426,0,sizeof(char*));
        __result_obj__260 = result_426;
        return __result_obj__260;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__261 = self->key_list->it->item;
        return __result_obj__261;
    }
    memset(&result_427,0,sizeof(char*));
    __result_obj__262 = result_427;
    return __result_obj__262;
}

static _Bool map$2char$phsType$ph_end(struct map$2char$phsType$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsType$ph_next(struct map$2char$phsType$ph* self){
char* result_429;
char* __result_obj__263;
char* __result_obj__264;
char* result_430;
char* __result_obj__265;
result_429 = (void*)0;
result_430 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_429,0,sizeof(char*));
        __result_obj__263 = result_429;
        return __result_obj__263;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__264 = self->key_list->it->item;
        return __result_obj__264;
    }
    memset(&result_430,0,sizeof(char*));
    __result_obj__265 = result_430;
    return __result_obj__265;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_441;
struct sNode* __result_obj__267;
struct sNode* __result_obj__268;
struct sNode* result_442;
struct sNode* __result_obj__269;
result_441 = (void*)0;
result_442 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_441,0,sizeof(struct sNode*));
        __result_obj__267 = result_441;
        return __result_obj__267;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__268 = self->it->item;
        return __result_obj__268;
    }
    memset(&result_442,0,sizeof(struct sNode*));
    __result_obj__269 = result_442;
    return __result_obj__269;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_444;
struct sNode* __result_obj__270;
struct sNode* __result_obj__271;
struct sNode* result_445;
struct sNode* __result_obj__272;
result_444 = (void*)0;
result_445 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_444,0,sizeof(struct sNode*));
        __result_obj__270 = result_444;
        return __result_obj__270;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__271 = self->it->item;
        return __result_obj__271;
    }
    memset(&result_445,0,sizeof(struct sNode*));
    __result_obj__272 = result_445;
    return __result_obj__272;
}

struct sNode* parse_struct(char* type_name, char* struct_attribute, struct sInfo* info){
struct sClass* klass_447;
void* __right_value322 = (void*)0;
_Bool _if_conditional4;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sClass* __dec_obj64;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct sClass* __dec_obj65;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sType* type_450;
void* __right_value330 = (void*)0;
struct sType* override__451;
void* __right_value331 = (void*)0;
struct sClass* parent_class_452;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
char* parent_class_name_453;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c2_454=0;
char* Err_455=0;
struct sNode* __result_obj__276;
_Bool multiple_declare_456;
char* p_457;
int sline_458;
void* __right_value336 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var6 = (void*)0;
struct sType* type_459=0;
char* name_460=0;
_Bool err_461=0;
void* __right_value337 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var7 = (void*)0;
struct sType* base_type_462=0;
char* name_463=0;
_Bool err_464=0;
void* __right_value338 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var8 = (void*)0;
struct sType* type2_465=0;
char* name2_466=0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var9 = (void*)0;
struct sType* type2_467=0;
char* name2_468=0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var10 = (void*)0;
struct sType* type2_469=0;
char* name_470=0;
_Bool err_471=0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* struct_attribute2_472;
void* __right_value348 = (void*)0;
char* __dec_obj66;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* __dec_obj67;
char* __dec_obj68;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* __dec_obj69;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sNode* _inf_value2;
struct sStructNode* _inf_obj_value2;
void* __right_value360 = (void*)0;
struct sNode* node_473;
_Bool Value_475;
struct sNode* __result_obj__279;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value3;
struct sNothingNode* _inf_obj_value3;
void* __right_value363 = (void*)0;
struct sNode* __result_obj__280;
klass_447 = (void*)0;
    if(    (_if_conditional4=(((struct sClass*)(__right_value322=map$2char$phsClass$ph_at(info->classes,type_name,((void*)0))))==((void*)0))),    /*c*/ come_call_finalizer3(__right_value322,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
    _if_conditional4) {
        __dec_obj64=klass_447,
        klass_447=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 327, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        /*b*/ come_call_finalizer3(__dec_obj64,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_447));
    }
    else {
        __dec_obj65=klass_447,
        klass_447=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name,((void*)0)));
        /*b*/ come_call_finalizer3(__dec_obj65,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        list$1tuple2$2char$phsType$ph$ph_reset(klass_447->mFields);
    }
    type_450=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 335, "struct sType*")),(char*)come_increment_ref_count(type_name),(_Bool)0,info));
    override__451=((struct sType*)(__right_value330=map$2char$phsType$ph_at(info->types,type_name,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value330,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    override__451) {
        if(        override__451->mTypedef) {
            type_450->mTypedef=(_Bool)1;
        }
    }
    map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_450)));
    parent_class_452=((void*)0);
    if(    parsecmp("extends",info)) {
        ((char*)(__right_value332=parse_word(info)));
        (__right_value332 = come_decrement_ref_count(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        parent_class_name_453=(char*)come_increment_ref_count(parse_word(info));
        parent_class_452=((struct sClass*)(__right_value334=map$2char$phsClass$ph$p_operator_load_element(info->classes,parent_class_name_453)));
        /*c*/ come_call_finalizer3(__right_value334,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        parent_class_452==((void*)0)) {
            multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value335=err_msg(info,"invalid class name(%s)",parent_class_name_453)));
            come_exception_var_c2_454=multiple_assign_var5->v1;
            Err_455=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            ((Err_455)?(puts(Err_455),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value335,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__276 = come_increment_ref_count(((void*)0));
            (Err_455 = come_decrement_ref_count(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (parent_class_name_453 = come_decrement_ref_count(parent_class_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(klass_447,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__result_obj__276) ? __result_obj__276 = come_decrement_ref_count(__result_obj__276, ((struct sNode*)__result_obj__276)->finalize, ((struct sNode*)__result_obj__276)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__276;
            (Err_455 = come_decrement_ref_count(Err_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (parent_class_name_453 = come_decrement_ref_count(parent_class_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
        multiple_declare_456=(_Bool)0;
        {
            p_457=info->p;
            sline_458=info->sline;
            multiple_assign_var6=((struct tuple3$3sType$phchar$phbool$*)(__right_value336=backtrace_parse_type((_Bool)1,info)));
            type_459=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_460=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_461=multiple_assign_var6->v3;
            /*c*/ come_call_finalizer3(__right_value336,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            err_461&&*info->p==44) {
                multiple_declare_456=(_Bool)1;
            }
            info->p=p_457;
            info->sline=sline_458;
            /*c*/ come_call_finalizer3(type_459,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_460 = come_decrement_ref_count(name_460, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        multiple_declare_456) {
            multiple_assign_var7=((struct tuple3$3sType$phchar$phbool$*)(__right_value337=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_462=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name_463=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            err_464=multiple_assign_var7->v3;
            /*c*/ come_call_finalizer3(__right_value337,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            multiple_assign_var8=((struct tuple2$2sType$phchar$ph*)(__right_value338=parse_variable_name((struct sType*)come_increment_ref_count(base_type_462),(_Bool)1,info)));
            type2_465=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name2_466=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            /*c*/ come_call_finalizer3(__right_value338,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_447->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 391, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_466),(struct sType*)come_increment_ref_count(type2_465))));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var9=((struct tuple2$2sType$phchar$ph*)(__right_value341=parse_variable_name((struct sType*)come_increment_ref_count(base_type_462),(_Bool)0,info)));
                type2_467=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name2_468=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                /*c*/ come_call_finalizer3(__right_value341,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(klass_447->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 399, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_468),(struct sType*)come_increment_ref_count(type2_467))));
                /*c*/ come_call_finalizer3(type2_467,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name2_468 = come_decrement_ref_count(name2_468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(base_type_462,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_463 = come_decrement_ref_count(name_463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type2_465,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name2_466 = come_decrement_ref_count(name2_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var10=((struct tuple3$3sType$phchar$phbool$*)(__right_value344=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_469=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_470=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_471=multiple_assign_var10->v3;
            /*c*/ come_call_finalizer3(__right_value344,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_471) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            list$1tuple2$2char$phsType$ph$ph_push_back(klass_447->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 410, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_470),(struct sType*)come_increment_ref_count(type2_469))));
            /*c*/ come_call_finalizer3(type2_469,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_470 = come_decrement_ref_count(name_470, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    struct_attribute2_472=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    parent_class_452) {
        __dec_obj66=klass_447->mParentClassName,
        klass_447->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_452->mName, "14struct.c", 430, "char*"));
        __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(klass_447->mName)),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, klass_447)));
    }
    if(    string_operator_equals(struct_attribute,"")&&string_operator_equals(struct_attribute2_472,"")) {
    }
    else if(    string_operator_equals(struct_attribute,"")) {
        __dec_obj67=klass_447->mAttribute,
        klass_447->mAttribute=(char*)come_increment_ref_count(struct_attribute2_472);
        __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else if(    string_operator_equals(struct_attribute2_472,"")) {
        __dec_obj68=klass_447->mAttribute,
        klass_447->mAttribute=(char*)come_increment_ref_count(struct_attribute);
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        __dec_obj69=klass_447->mAttribute,
        klass_447->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value351=string_operator_add(struct_attribute," "))),struct_attribute2_472));
        __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (__right_value351 = come_decrement_ref_count(__right_value351, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 446, "struct sNode");
    _inf_obj_value2=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value355=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 446, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name)),klass_447,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sStructNode_finalize;
    _inf_value2->clone=(void*)sStructNode_clone;
    _inf_value2->compile=(void*)sStructNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sStructNode_terminated;
    _inf_value2->kind=(void*)sStructNode_kind;
    node_473=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*c*/ come_call_finalizer3(__right_value355,sStructNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_475=node_compile(node_473,info);
    if(    !Value_475) {
        __result_obj__279 = come_increment_ref_count(((void*)0));
        (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(klass_447,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (struct_attribute2_472 = come_decrement_ref_count(struct_attribute2_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_473) ? node_473 = come_decrement_ref_count(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__279) ? __result_obj__279 = come_decrement_ref_count(__result_obj__279, ((struct sNode*)__result_obj__279)->finalize, ((struct sNode*)__result_obj__279)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__279;
    }
    else {
    }
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 452, "struct sNode");
    _inf_obj_value3=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value362=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 452, "struct sNothingNode*")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNothingNode_finalize;
    _inf_value3->clone=(void*)sNothingNode_clone;
    _inf_value3->compile=(void*)sNothingNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNothingNode_terminated;
    _inf_value3->kind=(void*)sNothingNode_kind;
    __result_obj__280 = come_increment_ref_count(((struct sNode*)(__right_value363=_inf_value3)));
    (type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (struct_attribute = come_decrement_ref_count(struct_attribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(klass_447,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type_450,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (struct_attribute2_472 = come_decrement_ref_count(struct_attribute2_472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((node_473) ? node_473 = come_decrement_ref_count(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value362,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value363) ? __right_value363 = come_decrement_ref_count(__right_value363, ((struct sNode*)__right_value363)->finalize, ((struct sNode*)__right_value363)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__280) ? __result_obj__280 = come_decrement_ref_count(__result_obj__280, ((struct sNode*)__result_obj__280)->finalize, ((struct sNode*)__result_obj__280)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__280;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_reset(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_448;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_449;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__275;
    it_448=self->head;
    while(it_448!=((void*)0)) {
        prev_it_449=it_448;
        it_448=it_448->next;
        /*c*/ come_call_finalizer3(prev_it_449,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__275 = self;
    return __result_obj__275;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void tuple2$2sType$phchar$ph$p_finalize(struct tuple2$2sType$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->v1,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
struct sStructNode* __result_obj__277;
void* __right_value356 = (void*)0;
struct sStructNode* result_474;
void* __right_value357 = (void*)0;
char* __dec_obj70;
void* __right_value358 = (void*)0;
char* __dec_obj71;
void* __right_value359 = (void*)0;
struct sClass* __dec_obj72;
struct sStructNode* __result_obj__278;
    if(    self==(void*)0) {
        __result_obj__277 = (void*)0;
        return __result_obj__277;
    }
    result_474=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "struct sStructNode*"));
    if(    self!=((void*)0)) {
        result_474->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj70=result_474->sname,
        result_474->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNode_clone", 5, "char*"));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_474->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj71=result_474->mName,
        result_474->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNode_clone", 7, "char*"));
        __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj72=result_474->mClass,
        result_474->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        /*b*/ come_call_finalizer3(__dec_obj72,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__278 = result_474;
    /*c*/ come_call_finalizer3(result_474,sStructNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__278;
}

char* parse_struct_attribute(struct sInfo* info){
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct buffer* result_476;
char* head_477;
char* tail_478;
void* __right_value366 = (void*)0;
char* __result_obj__281;
    parse_sharp_v5(info);
    result_476=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 458, "struct buffer*"))));
    while(1) {
        if(        memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
            head_477=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            skip_paren(info);
            tail_478=info->p;
            buffer_append(result_476,head_477,tail_478-head_477);
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result_obj__281 = come_increment_ref_count(((char*)(__right_value366=buffer_to_string(result_476))));
    /*c*/ come_call_finalizer3(result_476,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (__right_value366 = come_decrement_ref_count(__right_value366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__281 = come_decrement_ref_count(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__281;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_479;
void* __right_value367 = (void*)0;
char* struct_attribute_480;
void* __right_value368 = (void*)0;
char* type_name_481;
struct sClass* struct_class_482;
void* __right_value369 = (void*)0;
_Bool _if_conditional5;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct sClass* __dec_obj73;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
struct sClass* __dec_obj74;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sType* type_483;
void* __right_value378 = (void*)0;
struct sType* override__484;
char* source_tail_485;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct buffer* header_486;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
char* id_487;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* _inf_value4;
struct sStructNobodyNode* _inf_obj_value4;
void* __right_value390 = (void*)0;
struct sNode* __result_obj__284;
void* __right_value391 = (void*)0;
char* T_489;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c3_490=0;
char* Err_491=0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
_Bool _if_conditional6;
void* __right_value396 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c4_492=0;
char* Err_493=0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sClass* generics_class_494;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var13 = (void*)0;
struct sType* type2_495=0;
char* name_496=0;
_Bool err_497=0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
char* name2_498;
void* __right_value404 = (void*)0;
struct sType* type3_499;
_Bool no_comma_500;
void* __right_value405 = (void*)0;
struct sNode* node_501;
struct sNode* __dec_obj77;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
char* source_tail_502;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct buffer* header_503;
void* __right_value413 = (void*)0;
char* id_504;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* _inf_value5;
struct sNothingNode* _inf_obj_value5;
void* __right_value417 = (void*)0;
struct sNode* __result_obj__285;
struct sClass* struct_class_505;
void* __right_value418 = (void*)0;
_Bool _if_conditional7;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sClass* __dec_obj78;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sClass* __dec_obj79;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sType* type_506;
void* __right_value426 = (void*)0;
struct sType* override__507;
struct sClass* parent_class_508;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
char* parent_class_name_509;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c5_510=0;
char* Err_511=0;
struct sNode* __result_obj__286;
_Bool multiple_declare_512;
char* p_513;
int sline_514;
void* __right_value431 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var15 = (void*)0;
struct sType* type_515=0;
char* name_516=0;
_Bool err_517=0;
void* __right_value432 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var16 = (void*)0;
struct sType* base_type_518=0;
char* name_519=0;
_Bool err_520=0;
void* __right_value433 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var17 = (void*)0;
struct sType* type2_521=0;
char* name2_522=0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var18 = (void*)0;
struct sType* type2_523=0;
char* name2_524=0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* type2_525=0;
char* name_526=0;
_Bool err_527=0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
char* struct_attribute2_528;
char* source_tail_529;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct buffer* header_530;
void* __right_value445 = (void*)0;
char* id_531;
void* __right_value446 = (void*)0;
char* __dec_obj80;
char* __dec_obj81;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
char* __dec_obj82;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* _inf_value6;
struct sStructNode* _inf_obj_value6;
void* __right_value452 = (void*)0;
struct sNode* __result_obj__287;
char* source_head_532;
void* __right_value453 = (void*)0;
char* type_name_533;
void* __right_value454 = (void*)0;
char* id_534;
struct sClass* parent_class_535;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* parent_class_name_536;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c6_537=0;
char* Err_538=0;
struct sNode* __result_obj__288;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1sClass$p* parent_classes_539;
struct sClass* parent_class2_542;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sClass* struct_class_546;
void* __right_value468 = (void*)0;
char* __dec_obj83;
struct sClass* defining_class_547;
void* __right_value469 = (void*)0;
_Bool _if_conditional8;
void* __right_value470 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1sClass$p* o2_saved_553;
struct sClass* parent_556;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_559;
struct tuple2$2char$phsType$ph* it_560;
void* __right_value477 = (void*)0;
char* head_561;
char* p_saved_562;
int sline_saved_563;
char* sname_saved_564;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1sNode$ph* methods_565;
void* __right_value480 = (void*)0;
char* __dec_obj84;
char* __dec_obj85;
struct map$2char$phchar$ph* __dec_obj86;
_Bool include__568;
_Bool multiple_declare_569;
char* p_570;
int sline_571;
void* __right_value481 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* type_572=0;
char* name_573=0;
_Bool err_574=0;
_Bool define_function_flag_575;
char* p_576;
int sline_577;
_Bool invalid_type_578;
void* __right_value482 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_579=0;
char* fun_name_580=0;
_Bool err_581=0;
char* word_582;
void* __right_value483 = (void*)0;
char* __dec_obj87;
void* __right_value484 = (void*)0;
char* __dec_obj88;
char* __dec_obj89;
void* __right_value485 = (void*)0;
char* __dec_obj90;
char* tail_583;
int pointer_num_584;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sType* __dec_obj91;
void* __right_value488 = (void*)0;
struct sNode* method_585;
struct sType* __dec_obj92;
void* __right_value492 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* base_type_589=0;
char* name_590=0;
_Bool err_591=0;
void* __right_value493 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var24 = (void*)0;
struct sType* type2_592=0;
char* name2_593=0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct tuple2$2sType$phchar$ph* multiple_assign_var25 = (void*)0;
struct sType* type2_594=0;
char* name2_595=0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
char* module_name_596;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1char$ph* params_597;
void* __right_value503 = (void*)0;
char* word_598;
void* __right_value504 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c7_599=0;
char* Err_600=0;
void* __right_value505 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c8_601=0;
char* Err_602=0;
void* __right_value506 = (void*)0;
char* __dec_obj96;
void* __right_value507 = (void*)0;
char* __dec_obj97;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
_Bool _if_conditional9;
void* __right_value510 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c9_606=0;
char* Err_607=0;
struct sNode* __result_obj__304;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sClassModule* module_608;
void* __right_value513 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c10_609=0;
char* Err_610=0;
void* __right_value514 = (void*)0;
void* __right_value520 = (void*)0;
struct map$2char$phchar$ph* __dec_obj99;
int i_614;
struct list$1char$ph* o2_saved_615;
char* it_616;
void* __right_value521 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
char* __dec_obj100;
void* __right_value530 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* type2_641=0;
char* name_642=0;
_Bool err_643=0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
char* __dec_obj101;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* _inf_value7;
struct sClassNode* _inf_obj_value7;
void* __right_value542 = (void*)0;
struct sNode* __result_obj__322;
void* __right_value543 = (void*)0;
struct sNode* __result_obj__323;
struct_class_482 = (void*)0;
struct_class_505 = (void*)0;
    if(    charp_operator_equals(buf,"struct")) {
        source_head_479=head;
        struct_attribute_480=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_481=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional5=(((struct sClass*)(__right_value369=map$2char$phsClass$ph_at(info->classes,type_name_481,((void*)0))))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value369,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional5) {
                __dec_obj73=struct_class_482,
                struct_class_482=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 495, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_481)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj73,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_481),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 497, "struct sClass*")),(char*)come_increment_ref_count(type_name_481),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
            }
            else {
                __dec_obj74=struct_class_482,
                struct_class_482=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_481,((void*)0)));
                /*b*/ come_call_finalizer3(__dec_obj74,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            }
            type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 502, "struct sType*")),(char*)come_increment_ref_count(type_name_481),(_Bool)0,info));
            override__484=((struct sType*)(__right_value378=map$2char$phsType$ph_at(info->types,type_name_481,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value378,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            override__484) {
                if(                override__484->mTypedef) {
                    type_483->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_481),(struct sType*)come_increment_ref_count(type_483));
            source_tail_485=info->p;
            header_486=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 513, "struct buffer*"))));
            buffer_append(header_486,source_head_479,source_tail_485-source_head_479);
            id_487=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value381=__builtin_string(type_name_481))),";"));
            (__right_value381 = come_decrement_ref_count(__right_value381, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            add_come_code_at_come_struct_header(info,id_487,"%s",((char*)(__right_value383=buffer_to_string(header_486))));
            (__right_value383 = come_decrement_ref_count(__right_value383, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 519, "struct sNode");
            _inf_obj_value4=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(__right_value386=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 519, "struct sStructNobodyNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_481)),info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value4->clone=(void*)sStructNobodyNode_clone;
            _inf_value4->compile=(void*)sStructNobodyNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sline_real=(void*)sNodeBase_sline_real;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value4->kind=(void*)sStructNobodyNode_kind;
            __result_obj__284 = come_increment_ref_count(((struct sNode*)(__right_value390=_inf_value4)));
            /*c*/ come_call_finalizer3(struct_class_482,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_486,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_487 = come_decrement_ref_count(id_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_480 = come_decrement_ref_count(struct_attribute_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_481 = come_decrement_ref_count(type_name_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value386,sStructNobodyNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value390) ? __right_value390 = come_decrement_ref_count(__right_value390, ((struct sNode*)__right_value390)->finalize, ((struct sNode*)__right_value390)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__284) ? __result_obj__284 = come_decrement_ref_count(__result_obj__284, ((struct sNode*)__result_obj__284)->finalize, ((struct sNode*)__result_obj__284)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__284;
            /*c*/ come_call_finalizer3(struct_class_482,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_483,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_486,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_487 = come_decrement_ref_count(id_487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        *info->p==60) {
            list$1char$ph_reset(info->generics_type_names);
            info->p++;
            skip_spaces_and_lf(info);
            while((_Bool)1) {
                T_489=(char*)come_increment_ref_count(parse_word(info));
                list$1char$ph_push_back(info->generics_type_names,(char*)come_increment_ref_count((char*)come_memdup(T_489, "14struct.c", 529, "char*")));
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (T_489 = come_decrement_ref_count(T_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value393=err_msg(info,"invalid generics struct definition")));
                    come_exception_var_c3_490=multiple_assign_var11->v1;
                    Err_491=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                    ((Err_491)?(puts(Err_491),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value393,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_491 = come_decrement_ref_count(Err_491, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (T_489 = come_decrement_ref_count(T_489, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            (_if_conditional6=(((struct sClass*)(__right_value395=map$2char$phsClass$ph_at(info->generics_classes,((char*)(__right_value394=__builtin_string(type_name_481))),((void*)0))))!=((void*)0))),            (__right_value394 = come_decrement_ref_count(__right_value394, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            /*c*/ come_call_finalizer3(__right_value395,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value396=err_msg(info,"redefined generics struct(%s)",type_name_481)));
                come_exception_var_c4_492=multiple_assign_var12->v1;
                Err_493=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                ((Err_493)?(puts(Err_493),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value396,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_493 = come_decrement_ref_count(Err_493, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            generics_class_494=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 551, "struct sClass*")),(char*)come_increment_ref_count(type_name_481),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            map$2char$phsClass$ph_insert(info->generics_classes,(char*)come_increment_ref_count(__builtin_string(type_name_481)),(struct sClass*)come_increment_ref_count(generics_class_494));
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_assign_var13=((struct tuple3$3sType$phchar$phbool$*)(__right_value400=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_495=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                name_496=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                err_497=multiple_assign_var13->v3;
                /*c*/ come_call_finalizer3(__right_value400,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_497) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                if(                *info->p==44) {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_494->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 576, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_496),(struct sType*)come_increment_ref_count(type2_495))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        name2_498=(char*)come_increment_ref_count(parse_word(info));
                        type3_499=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_495));
                        if(                        *info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_500=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_501=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_500;
                            __dec_obj77=type3_499->mSizeNum,
                            type3_499->mSizeNum=(struct sNode*)come_increment_ref_count(node_501);
                            (__dec_obj77 ? __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                            ((node_501) ? node_501 = come_decrement_ref_count(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        }
                        list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_494->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 598, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_498),(struct sType*)come_increment_ref_count(type3_499))));
                        (name2_498 = come_decrement_ref_count(name2_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(type3_499,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(generics_class_494->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 602, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_496),(struct sType*)come_increment_ref_count(type2_495))));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*c*/ come_call_finalizer3(type2_495,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_496 = come_decrement_ref_count(name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                parse_sharp_v5(info);
                /*c*/ come_call_finalizer3(type2_495,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_496 = come_decrement_ref_count(name_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            ((struct tuple2$2char$phchar$ph*)(__right_value410=parse_attribute(info,(_Bool)0)));
            /*c*/ come_call_finalizer3(__right_value410,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1char$ph_reset(info->generics_type_names);
            source_tail_502=info->p;
            header_503=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 626, "struct buffer*"))));
            buffer_append_str(header_503,"struct ");
            buffer_append(header_503,source_head_479,source_tail_502-source_head_479);
            id_504=(char*)come_increment_ref_count(__builtin_string(type_name_481));
            add_come_code_at_come_struct_header(info,id_504,"%s;\n",((char*)(__right_value414=buffer_to_string(header_503))));
            (__right_value414 = come_decrement_ref_count(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 633, "struct sNode");
            _inf_obj_value5=(struct sNothingNode*)come_increment_ref_count(((struct sNothingNode*)(__right_value416=sNothingNode_initialize((struct sNothingNode*)come_increment_ref_count((struct sNothingNode*)come_calloc(1, sizeof(struct sNothingNode)*(1), "14struct.c", 633, "struct sNothingNode*")),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNothingNode_finalize;
            _inf_value5->clone=(void*)sNothingNode_clone;
            _inf_value5->compile=(void*)sNothingNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sline_real=(void*)sNodeBase_sline_real;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNothingNode_terminated;
            _inf_value5->kind=(void*)sNothingNode_kind;
            __result_obj__285 = come_increment_ref_count(((struct sNode*)(__right_value417=_inf_value5)));
            /*c*/ come_call_finalizer3(generics_class_494,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_503,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_504 = come_decrement_ref_count(id_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_480 = come_decrement_ref_count(struct_attribute_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_481 = come_decrement_ref_count(type_name_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value416,sNothingNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value417) ? __right_value417 = come_decrement_ref_count(__right_value417, ((struct sNode*)__right_value417)->finalize, ((struct sNode*)__right_value417)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__285) ? __result_obj__285 = come_decrement_ref_count(__result_obj__285, ((struct sNode*)__result_obj__285)->finalize, ((struct sNode*)__result_obj__285)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__285;
            /*c*/ come_call_finalizer3(generics_class_494,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(header_503,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_504 = come_decrement_ref_count(id_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            if(            (_if_conditional7=(((struct sClass*)(__right_value418=map$2char$phsClass$ph_at(info->classes,type_name_481,((void*)0))))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value418,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __dec_obj78=struct_class_505,
                struct_class_505=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 638, "struct sClass*")),(char*)come_increment_ref_count(__builtin_string(type_name_481)),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj78,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name_481)),(struct sClass*)come_increment_ref_count(struct_class_505));
            }
            else {
                __dec_obj79=struct_class_505,
                struct_class_505=(struct sClass*)come_increment_ref_count(map$2char$phsClass$ph_at(info->classes,type_name_481,((void*)0)));
                /*b*/ come_call_finalizer3(__dec_obj79,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                list$1tuple2$2char$phsType$ph$ph_reset(struct_class_505->mFields);
            }
            type_506=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 646, "struct sType*")),(char*)come_increment_ref_count(type_name_481),(_Bool)0,info));
            override__507=((struct sType*)(__right_value426=map$2char$phsType$ph_at(info->types,type_name_481,((void*)0))));
            /*c*/ come_call_finalizer3(__right_value426,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            override__507) {
                if(                override__507->mTypedef) {
                    type_506->mTypedef=(_Bool)1;
                }
            }
            map$2char$phsType$ph_insert(info->types,(char*)come_increment_ref_count(type_name_481),(struct sType*)come_increment_ref_count(type_506));
            parent_class_508=((void*)0);
            if(            parsecmp("extends",info)) {
                ((char*)(__right_value427=parse_word(info)));
                (__right_value427 = come_decrement_ref_count(__right_value427, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                parent_class_name_509=(char*)come_increment_ref_count(parse_word(info));
                parent_class_508=((struct sClass*)(__right_value429=map$2char$phsClass$ph$p_operator_load_element(info->classes,parent_class_name_509)));
                /*c*/ come_call_finalizer3(__right_value429,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                parent_class_508==((void*)0)) {
                    multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value430=err_msg(info,"invalid class name(%s)",parent_class_name_509)));
                    come_exception_var_c5_510=multiple_assign_var14->v1;
                    Err_511=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                    ((Err_511)?(puts(Err_511),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value430,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__286 = come_increment_ref_count(((void*)0));
                    (Err_511 = come_decrement_ref_count(Err_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (parent_class_name_509 = come_decrement_ref_count(parent_class_name_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(struct_class_505,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_506,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (struct_attribute_480 = come_decrement_ref_count(struct_attribute_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (type_name_481 = come_decrement_ref_count(type_name_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((__result_obj__286) ? __result_obj__286 = come_decrement_ref_count(__result_obj__286, ((struct sNode*)__result_obj__286)->finalize, ((struct sNode*)__result_obj__286)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__286;
                    (Err_511 = come_decrement_ref_count(Err_511, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                (parent_class_name_509 = come_decrement_ref_count(parent_class_name_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            expected_next_character(123,info);
            while((_Bool)1) {
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                multiple_declare_512=(_Bool)0;
                {
                    p_513=info->p;
                    sline_514=info->sline;
                    multiple_assign_var15=((struct tuple3$3sType$phchar$phbool$*)(__right_value431=backtrace_parse_type((_Bool)1,info)));
                    type_515=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                    name_516=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                    err_517=multiple_assign_var15->v3;
                    /*c*/ come_call_finalizer3(__right_value431,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    err_517&&*info->p==44) {
                        multiple_declare_512=(_Bool)1;
                    }
                    info->p=p_513;
                    info->sline=sline_514;
                    /*c*/ come_call_finalizer3(type_515,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_516 = come_decrement_ref_count(name_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                multiple_declare_512) {
                    multiple_assign_var16=((struct tuple3$3sType$phchar$phbool$*)(__right_value432=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    base_type_518=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                    name_519=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                    err_520=multiple_assign_var16->v3;
                    /*c*/ come_call_finalizer3(__right_value432,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    multiple_assign_var17=((struct tuple2$2sType$phchar$ph*)(__right_value433=parse_variable_name((struct sType*)come_increment_ref_count(base_type_518),(_Bool)1,info)));
                    type2_521=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                    name2_522=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                    /*c*/ come_call_finalizer3(__right_value433,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_505->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 700, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_522),(struct sType*)come_increment_ref_count(type2_521))));
                    while(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var18=((struct tuple2$2sType$phchar$ph*)(__right_value436=parse_variable_name((struct sType*)come_increment_ref_count(base_type_518),(_Bool)0,info)));
                        type2_523=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name2_524=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        /*c*/ come_call_finalizer3(__right_value436,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_505->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 708, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_524),(struct sType*)come_increment_ref_count(type2_523))));
                        /*c*/ come_call_finalizer3(type2_523,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (name2_524 = come_decrement_ref_count(name2_524, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    /*c*/ come_call_finalizer3(base_type_518,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_519 = come_decrement_ref_count(name_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_521,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name2_522 = come_decrement_ref_count(name2_522, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value439=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_525=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                    name_526=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                    err_527=multiple_assign_var19->v3;
                    /*c*/ come_call_finalizer3(__right_value439,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_527) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_505->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 718, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_526),(struct sType*)come_increment_ref_count(type2_525))));
                    /*c*/ come_call_finalizer3(type2_525,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_526 = come_decrement_ref_count(name_526, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                parse_sharp_v5(info);
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            struct_attribute2_528=(char*)come_increment_ref_count(parse_struct_attribute(info));
            list$1char$ph_reset(info->generics_type_names);
            source_tail_529=info->p;
            header_530=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 743, "struct buffer*"))));
            buffer_append(header_530,source_head_479,source_tail_529-source_head_479);
            id_531=(char*)come_increment_ref_count(__builtin_string(type_name_481));
            add_come_code_at_come_struct_header(info,id_531,"%s;\n",((char*)(__right_value446=buffer_to_string(header_530))));
            (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            string_operator_equals(struct_attribute_480,"")&&string_operator_equals(struct_attribute2_528,"")) {
            }
            else if(            string_operator_equals(struct_attribute_480,"")) {
                __dec_obj80=struct_class_505->mAttribute,
                struct_class_505->mAttribute=(char*)come_increment_ref_count(struct_attribute2_528);
                __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else if(            string_operator_equals(struct_attribute2_528,"")) {
                __dec_obj81=struct_class_505->mAttribute,
                struct_class_505->mAttribute=(char*)come_increment_ref_count(struct_attribute_480);
                __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            else {
                __dec_obj82=struct_class_505->mAttribute,
                struct_class_505->mAttribute=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value447=string_operator_add(struct_attribute_480," "))),struct_attribute2_528));
                __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (__right_value447 = come_decrement_ref_count(__right_value447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 761, "struct sNode");
            _inf_obj_value6=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(__right_value451=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 761, "struct sStructNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_481)),struct_class_505,info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sStructNode_finalize;
            _inf_value6->clone=(void*)sStructNode_clone;
            _inf_value6->compile=(void*)sStructNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sline_real=(void*)sNodeBase_sline_real;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sStructNode_terminated;
            _inf_value6->kind=(void*)sStructNode_kind;
            __result_obj__287 = come_increment_ref_count(((struct sNode*)(__right_value452=_inf_value6)));
            /*c*/ come_call_finalizer3(struct_class_505,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_506,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (struct_attribute2_528 = come_decrement_ref_count(struct_attribute2_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(header_530,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_531 = come_decrement_ref_count(id_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (struct_attribute_480 = come_decrement_ref_count(struct_attribute_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (type_name_481 = come_decrement_ref_count(type_name_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value451,sStructNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value452) ? __right_value452 = come_decrement_ref_count(__right_value452, ((struct sNode*)__right_value452)->finalize, ((struct sNode*)__right_value452)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__287) ? __result_obj__287 = come_decrement_ref_count(__result_obj__287, ((struct sNode*)__result_obj__287)->finalize, ((struct sNode*)__result_obj__287)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__287;
            /*c*/ come_call_finalizer3(struct_class_505,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_506,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (struct_attribute2_528 = come_decrement_ref_count(struct_attribute2_528, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(header_530,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (id_531 = come_decrement_ref_count(id_531, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (struct_attribute_480 = come_decrement_ref_count(struct_attribute_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_481 = come_decrement_ref_count(type_name_481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    !gComeC&&charp_operator_equals(buf,"class")) {
        source_head_532=head;
        type_name_533=(char*)come_increment_ref_count(parse_word(info));
        id_534=(char*)come_increment_ref_count(__builtin_string(type_name_533));
        add_come_code_at_come_struct_header(info,id_534,"struct %s;\n",type_name_533);
        parent_class_535=((void*)0);
        if(        parsecmp("extends",info)) {
            ((char*)(__right_value455=parse_word(info)));
            (__right_value455 = come_decrement_ref_count(__right_value455, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            parent_class_name_536=(char*)come_increment_ref_count(parse_word(info));
            parent_class_535=((struct sClass*)(__right_value457=map$2char$phsClass$ph$p_operator_load_element(info->classes,parent_class_name_536)));
            /*c*/ come_call_finalizer3(__right_value457,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            parent_class_535==((void*)0)) {
                multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value458=err_msg(info,"invalid class name(%s)",parent_class_name_536)));
                come_exception_var_c6_537=multiple_assign_var20->v1;
                Err_538=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                ((Err_538)?(puts(Err_538),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value458,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__288 = come_increment_ref_count(((void*)0));
                (Err_538 = come_decrement_ref_count(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (parent_class_name_536 = come_decrement_ref_count(parent_class_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (type_name_533 = come_decrement_ref_count(type_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_534 = come_decrement_ref_count(id_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__288) ? __result_obj__288 = come_decrement_ref_count(__result_obj__288, ((struct sNode*)__result_obj__288)->finalize, ((struct sNode*)__result_obj__288)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__288;
                (Err_538 = come_decrement_ref_count(Err_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (parent_class_name_536 = come_decrement_ref_count(parent_class_name_536, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        parent_classes_539=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), "14struct.c", 786, "struct list$1sClass$p*"))));
        parent_class2_542=parent_class_535;
        while(parent_class2_542) {
            list$1sClass$p_add(parent_classes_539,parent_class2_542);
            if(            parent_class_535->mParentClassName) {
                parent_class2_542=((struct sClass*)(__right_value465=map$2char$phsClass$ph$p_operator_load_element(info->classes,((char*)(__right_value464=__builtin_string(parent_class_535->mParentClassName))))));
                (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value465,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                parent_class2_542=((void*)0);
            }
        }
        struct_class_546=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 799, "struct sClass*")),(char*)come_increment_ref_count(type_name_533),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        if(        parent_class_535) {
            __dec_obj83=struct_class_546->mParentClassName,
            struct_class_546->mParentClassName=(char*)come_increment_ref_count((char*)come_memdup(parent_class_535->mName, "14struct.c", 802, "char*"));
            __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        defining_class_547=info->defining_class;
        info->defining_class=struct_class_546;
        if(        (_if_conditional8=(((struct sClass*)(__right_value469=map$2char$phsClass$ph_at(info->classes,type_name_533,((void*)0))))==((void*)0))),        /*c*/ come_call_finalizer3(__right_value469,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        _if_conditional8) {
            map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(type_name_533),(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, struct_class_546)));
        }
        for(        o2_saved_553=(struct list$1sClass$p*)come_increment_ref_count((((struct list$1sClass$p*)(__right_value476=list$1sClass$p_reverse(parent_classes_539))))),parent_556=list$1sClass$p_begin((o2_saved_553)) ,        /*c*/ come_call_finalizer3(__right_value476,list$1sClass$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
        0;        !list$1sClass$p_end((o2_saved_553));        parent_556=list$1sClass$p_next((o2_saved_553))        ){
            for(            o2_saved_559=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((parent_556->mFields)),it_560=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_559));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_559));            it_560=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_559))            ){
                list$1tuple2$2char$phsType$ph$ph_add(struct_class_546->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, it_560)));
            }
            /*c*/ come_call_finalizer3(o2_saved_559,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_553,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        expected_next_character(123,info);
        head_561=info->p;
        p_saved_562=((void*)0);
        sline_saved_563=0;
        sname_saved_564=((void*)0);
        methods_565=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "14struct.c", 825, "struct list$1sNode$ph*"))));
        while((_Bool)1) {
            if(            p_saved_562) {
                if(                *info->p==0) {
                    info->p=p_saved_562;
                    info->sline=sline_saved_563;
                    __dec_obj84=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_564));
                    __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_562=((void*)0);
                    sline_saved_563=0;
                    __dec_obj85=sname_saved_564,
                    sname_saved_564=((void*)0);
                    __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj86=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj86,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            include__568=parsecmp("include",info);
            multiple_declare_569=(_Bool)0;
            if(            include__568==(_Bool)0) {
                p_570=info->p;
                sline_571=info->sline;
                if(                memcmp(info->p,"new(",4)!=0) {
                    multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value481=backtrace_parse_type((_Bool)1,info)));
                    type_572=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                    name_573=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    err_574=multiple_assign_var21->v3;
                    /*c*/ come_call_finalizer3(__right_value481,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    err_574&&*info->p==44) {
                        multiple_declare_569=(_Bool)1;
                    }
                    /*c*/ come_call_finalizer3(type_572,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name_573 = come_decrement_ref_count(name_573, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_570;
                info->sline=sline_571;
            }
            define_function_flag_575=(_Bool)0;
            if(            include__568==(_Bool)0) {
                p_576=info->p;
                sline_577=info->sline;
                if(                memcmp(info->p,"new(",4)==0) {
                    define_function_flag_575=(_Bool)1;
                }
                else {
                    invalid_type_578=(_Bool)0;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value482=backtrace_parse_type((_Bool)0,info)));
                        result_type_579=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                        fun_name_580=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                        err_581=multiple_assign_var22->v3;
                        /*c*/ come_call_finalizer3(__right_value482,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type_579,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_580 = come_decrement_ref_count(fun_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    word_582=((void*)0);
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj87=word_582,
                        word_582=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_582,"extern")) {
                            __dec_obj88=word_582,
                            word_582=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        }
                    }
                    else {
                        __dec_obj89=word_582,
                        word_582=((void*)0);
                        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                    info->no_output_err=(_Bool)0;
                    if(                    word_582) {
                        if(                        is_type_name(word_582,info)) {
                            while(*info->p==42) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==91&&*(info->p+1)==93) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            *info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            if(                            xisalnum(*info->p)||*info->p==95) {
                                __dec_obj90=word_582,
                                word_582=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                        }
                        if(                        strlen(word_582)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                            define_function_flag_575=(_Bool)1;
                        }
                    }
                    (word_582 = come_decrement_ref_count(word_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                info->p=p_576;
                info->sline=sline_577;
            }
            if(            define_function_flag_575) {
                tail_583=info->p;
                pointer_num_584=1;
                __dec_obj91=info->class_type,
                info->class_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 935, "struct sType*")),(char*)come_increment_ref_count(type_name_533),(_Bool)0,info));
                /*b*/ come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->class_type->mPointerNum=pointer_num_584;
                info->in_class=(_Bool)1;
                method_585=(struct sNode*)come_increment_ref_count(parse_function(info));
                __dec_obj92=info->class_type,
                info->class_type=((void*)0);
                /*b*/ come_call_finalizer3(__dec_obj92,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                info->in_class=(_Bool)0;
                list$1sNode$ph_push_back(methods_565,(struct sNode*)come_increment_ref_count(method_585));
                ((method_585) ? method_585 = come_decrement_ref_count(method_585, ((struct sNode*)method_585)->finalize, ((struct sNode*)method_585)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else if(            multiple_declare_569) {
                multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value492=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                base_type_589=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                name_590=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                err_591=multiple_assign_var23->v3;
                /*c*/ come_call_finalizer3(__right_value492,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                multiple_assign_var24=((struct tuple2$2sType$phchar$ph*)(__right_value493=parse_variable_name((struct sType*)come_increment_ref_count(base_type_589),(_Bool)1,info)));
                type2_592=(struct sType*)come_increment_ref_count(multiple_assign_var24->v1);
                name2_593=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                /*c*/ come_call_finalizer3(__right_value493,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_546->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 952, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_593),(struct sType*)come_increment_ref_count(type2_592))));
                while(*info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    multiple_assign_var25=((struct tuple2$2sType$phchar$ph*)(__right_value496=parse_variable_name((struct sType*)come_increment_ref_count(base_type_589),(_Bool)0,info)));
                    type2_594=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                    name2_595=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                    /*c*/ come_call_finalizer3(__right_value496,tuple2$2sType$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_546->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 960, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name2_595),(struct sType*)come_increment_ref_count(type2_594))));
                    /*c*/ come_call_finalizer3(type2_594,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (name2_595 = come_decrement_ref_count(name2_595, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                expected_next_character(59,info);
                /*c*/ come_call_finalizer3(base_type_589,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_590 = come_decrement_ref_count(name_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(type2_592,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name2_593 = come_decrement_ref_count(name2_593, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            parsecmp("include",info)) {
                ((char*)(__right_value499=parse_word(info)));
                (__right_value499 = come_decrement_ref_count(__right_value499, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_596=(char*)come_increment_ref_count(parse_word(info));
                params_597=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "14struct.c", 969, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_598=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_597,(char*)come_increment_ref_count(word_598));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value504=err_msg(info,"invalid source end")));
                            come_exception_var_c7_599=multiple_assign_var26->v1;
                            Err_600=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_600)?(puts(Err_600),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value504,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_600 = come_decrement_ref_count(Err_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_598 = come_decrement_ref_count(word_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value505=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c8_601=multiple_assign_var27->v1;
                            Err_602=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_602)?(puts(Err_602),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value505,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_602 = come_decrement_ref_count(Err_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_598 = come_decrement_ref_count(word_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_562=info->p;
                sline_saved_563=info->sline;
                __dec_obj96=sname_saved_564,
                sname_saved_564=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj97=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_596));
                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional9=(((struct sClassModule*)(__right_value509=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value508=__builtin_string(module_name_596))))))==((void*)0))),                (__right_value508 = come_decrement_ref_count(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value509,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional9) {
                    multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value510=err_msg(info,"module not found")));
                    come_exception_var_c9_606=multiple_assign_var28->v1;
                    Err_607=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                    ((Err_607)?(puts(Err_607),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value510,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__304 = come_increment_ref_count(((void*)0));
                    (Err_607 = come_decrement_ref_count(Err_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_596 = come_decrement_ref_count(module_name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_597,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (type_name_533 = come_decrement_ref_count(type_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_534 = come_decrement_ref_count(id_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(parent_classes_539,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(struct_class_546,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_saved_564 = come_decrement_ref_count(sname_saved_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(methods_565,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__result_obj__304) ? __result_obj__304 = come_decrement_ref_count(__result_obj__304, ((struct sNode*)__result_obj__304)->finalize, ((struct sNode*)__result_obj__304)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__304;
                    (Err_607 = come_decrement_ref_count(Err_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_608=((struct sClassModule*)(__right_value512=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value511=__builtin_string(module_name_596))))));
                (__right_value511 = come_decrement_ref_count(__right_value511, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value512,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_608->mParams)!=list$1char$ph_length(params_597)) {
                    multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value513=err_msg(info,"invalid parametor number")));
                    come_exception_var_c10_609=multiple_assign_var29->v1;
                    Err_610=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                    ((Err_610)?(puts(Err_610),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value513,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_610 = come_decrement_ref_count(Err_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj99=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "14struct.c", 1023, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj99,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_614=0;
                for(                o2_saved_615=(struct list$1char$ph*)come_increment_ref_count((module_608->mParams)),it_616=list$1char$ph_begin((o2_saved_615));                !list$1char$ph_end((o2_saved_615));                it_616=list$1char$ph_next((o2_saved_615))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_616)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value527=list$1char$ph$p_operator_load_element(params_597,i_614))))));
                    (__right_value527 = come_decrement_ref_count(__right_value527, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_614++;
                }
                /*c*/ come_call_finalizer3(o2_saved_615,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_608->mText;
                info->sline=module_608->mSLine;
                __dec_obj100=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_608->mSName));
                __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_596 = come_decrement_ref_count(module_name_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_597,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            else {
                multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value530=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                type2_641=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
                name_642=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                err_643=multiple_assign_var30->v3;
                /*c*/ come_call_finalizer3(__right_value530,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_643) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                list$1tuple2$2char$phsType$ph$ph_push_back(struct_class_546->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "14struct.c", 1042, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(name_642),(struct sType*)come_increment_ref_count(type2_641))));
                if(                *info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                /*c*/ come_call_finalizer3(type2_641,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_642 = come_decrement_ref_count(name_642, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
        }
        if(        p_saved_562) {
            if(            info->p==0) {
                info->p=p_saved_562;
                info->sline=sline_saved_563;
                __dec_obj101=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_564));
                __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_562=((void*)0);
                sline_saved_563=0;
            }
        }
        list$1char$ph_reset(info->generics_type_names);
        info->defining_class=defining_class_547;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1076, "struct sNode");
        _inf_obj_value7=(struct sClassNode*)come_increment_ref_count(((struct sClassNode*)(__right_value536=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1076, "struct sClassNode*")),(char*)come_increment_ref_count(__builtin_string(type_name_533)),(struct sClass*)come_increment_ref_count(struct_class_546),(struct list$1sNode$ph*)come_increment_ref_count(methods_565),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sClassNode_finalize;
        _inf_value7->clone=(void*)sClassNode_clone;
        _inf_value7->compile=(void*)sClassNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sClassNode_terminated;
        _inf_value7->kind=(void*)sClassNode_kind;
        __result_obj__322 = come_increment_ref_count(((struct sNode*)(__right_value542=_inf_value7)));
        (type_name_533 = come_decrement_ref_count(type_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_534 = come_decrement_ref_count(id_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(parent_classes_539,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(struct_class_546,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_saved_564 = come_decrement_ref_count(sname_saved_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(methods_565,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value536,sClassNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value542) ? __right_value542 = come_decrement_ref_count(__right_value542, ((struct sNode*)__right_value542)->finalize, ((struct sNode*)__right_value542)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__322) ? __result_obj__322 = come_decrement_ref_count(__result_obj__322, ((struct sNode*)__result_obj__322)->finalize, ((struct sNode*)__result_obj__322)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__322;
        (type_name_533 = come_decrement_ref_count(type_name_533, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (id_534 = come_decrement_ref_count(id_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(parent_classes_539,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(struct_class_546,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_saved_564 = come_decrement_ref_count(sname_saved_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(methods_565,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__323 = come_increment_ref_count(((struct sNode*)(__right_value543=top_level_v97(buf,head,head_sline,info))));
    ((__right_value543) ? __right_value543 = come_decrement_ref_count(__right_value543, ((struct sNode*)__right_value543)->finalize, ((struct sNode*)__right_value543)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__323) ? __result_obj__323 = come_decrement_ref_count(__result_obj__323, ((struct sNode*)__result_obj__323)->finalize, ((struct sNode*)__result_obj__323)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__323;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
struct sStructNobodyNode* __result_obj__282;
void* __right_value387 = (void*)0;
struct sStructNobodyNode* result_488;
void* __right_value388 = (void*)0;
char* __dec_obj75;
void* __right_value389 = (void*)0;
char* __dec_obj76;
struct sStructNobodyNode* __result_obj__283;
    if(    self==(void*)0) {
        __result_obj__282 = (void*)0;
        return __result_obj__282;
    }
    result_488=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "struct sStructNobodyNode*"));
    if(    self!=((void*)0)) {
        result_488->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj75=result_488->sname,
        result_488->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sStructNobodyNode_clone", 5, "char*"));
        __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_488->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj76=result_488->mName,
        result_488->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sStructNobodyNode_clone", 7, "char*"));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__283 = result_488;
    /*c*/ come_call_finalizer3(result_488,sStructNobodyNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__283;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sClass$p* list$1sClass$p_initialize(struct list$1sClass$p* self){
struct list$1sClass$p* __result_obj__289;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__289 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__289,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__289;
}

static void list$1sClass$p$p_finalize(struct list$1sClass$p* self){
struct list_item$1sClass$p* it_540;
struct list_item$1sClass$p* prev_it_541;
    it_540=self->head;
    while(it_540!=((void*)0)) {
        prev_it_541=it_540;
        it_540=it_540->next;
        /*c*/ come_call_finalizer3(prev_it_541,list_item$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sClass$p$p_finalize(struct list_item$1sClass$p* self){
}

static struct list$1sClass$p* list$1sClass$p_add(struct list$1sClass$p* self, struct sClass* item){
void* __right_value461 = (void*)0;
struct list_item$1sClass$p* litem_543;
void* __right_value462 = (void*)0;
struct list_item$1sClass$p* litem_544;
void* __right_value463 = (void*)0;
struct list_item$1sClass$p* litem_545;
struct list$1sClass$p* __result_obj__290;
    if(    self->len==0) {
        litem_543=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value461=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1157, "struct list_item$1sClass$p*"))));
        litem_543->prev=((void*)0);
        litem_543->next=((void*)0);
        litem_543->item=item;
        self->tail=litem_543;
        self->head=litem_543;
    }
    else if(    self->len==1) {
        litem_544=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value462=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1167, "struct list_item$1sClass$p*"))));
        litem_544->prev=self->head;
        litem_544->next=((void*)0);
        litem_544->item=item;
        self->tail=litem_544;
        self->head->next=litem_544;
    }
    else {
        litem_545=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value463=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1177, "struct list_item$1sClass$p*"))));
        litem_545->prev=self->tail;
        litem_545->next=((void*)0);
        litem_545->item=item;
        self->tail->next=litem_545;
        self->tail=litem_545;
    }
    self->len++;
    __result_obj__290 = self;
    return __result_obj__290;
}

static struct list$1sClass$p* list$1sClass$p_reverse(struct list$1sClass$p* self){
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1sClass$p* result_548;
struct list_item$1sClass$p* it_549;
struct list$1sClass$p* __result_obj__292;
    result_548=(struct list$1sClass$p*)come_increment_ref_count(list$1sClass$p_initialize((struct list$1sClass$p*)come_increment_ref_count((struct list$1sClass$p*)come_calloc(1, sizeof(struct list$1sClass$p)*(1), "./comelang.h", 1919, "struct list$1sClass$p*"))));
    it_549=self->tail;
    while(it_549!=((void*)0)) {
        list$1sClass$p_push_back(result_548,it_549->item);
        it_549=it_549->prev;
    }
    __result_obj__292 = come_increment_ref_count(result_548);
    /*c*/ come_call_finalizer3(result_548,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__292,list$1sClass$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static struct list$1sClass$p* list$1sClass$p_push_back(struct list$1sClass$p* self, struct sClass* item){
void* __right_value473 = (void*)0;
struct list_item$1sClass$p* litem_550;
void* __right_value474 = (void*)0;
struct list_item$1sClass$p* litem_551;
void* __right_value475 = (void*)0;
struct list_item$1sClass$p* litem_552;
struct list$1sClass$p* __result_obj__291;
    if(    self->len==0) {
        litem_550=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value473=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1227, "struct list_item$1sClass$p*"))));
        litem_550->prev=((void*)0);
        litem_550->next=((void*)0);
        litem_550->item=item;
        self->tail=litem_550;
        self->head=litem_550;
    }
    else if(    self->len==1) {
        litem_551=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value474=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1237, "struct list_item$1sClass$p*"))));
        litem_551->prev=self->head;
        litem_551->next=((void*)0);
        litem_551->item=item;
        self->tail=litem_551;
        self->head->next=litem_551;
    }
    else {
        litem_552=(struct list_item$1sClass$p*)come_increment_ref_count(((struct list_item$1sClass$p*)(__right_value475=(struct list_item$1sClass$p*)come_calloc(1, sizeof(struct list_item$1sClass$p)*(1), "./comelang.h", 1247, "struct list_item$1sClass$p*"))));
        litem_552->prev=self->tail;
        litem_552->next=((void*)0);
        litem_552->item=item;
        self->tail->next=litem_552;
        self->tail=litem_552;
    }
    self->len++;
    __result_obj__291 = self;
    return __result_obj__291;
}

static struct sClass* list$1sClass$p_begin(struct list$1sClass$p* self){
struct sClass* result_554;
struct sClass* __result_obj__293;
struct sClass* __result_obj__294;
struct sClass* result_555;
struct sClass* __result_obj__295;
result_554 = (void*)0;
result_555 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_554,0,sizeof(struct sClass*));
        __result_obj__293 = result_554;
        return __result_obj__293;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__294 = self->it->item;
        return __result_obj__294;
    }
    memset(&result_555,0,sizeof(struct sClass*));
    __result_obj__295 = result_555;
    return __result_obj__295;
}

static _Bool list$1sClass$p_end(struct list$1sClass$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClass$p_next(struct list$1sClass$p* self){
struct sClass* result_557;
struct sClass* __result_obj__296;
struct sClass* __result_obj__297;
struct sClass* result_558;
struct sClass* __result_obj__298;
result_557 = (void*)0;
result_558 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_557,0,sizeof(struct sClass*));
        __result_obj__296 = result_557;
        return __result_obj__296;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__297 = self->it->item;
        return __result_obj__297;
    }
    memset(&result_558,0,sizeof(struct sClass*));
    __result_obj__298 = result_558;
    return __result_obj__298;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_566;
int i_567;
    for(    i_566=0;    i_566<self->size;    i_566++    ){
        if(        self->item_existance[i_566]) {
            if(            1) {
                (self->items[i_566] = come_decrement_ref_count(self->items[i_566], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_567=0;    i_567<self->size;    i_567++    ){
        if(        self->item_existance[i_567]) {
            if(            1) {
                (self->keys[i_567] = come_decrement_ref_count(self->keys[i_567], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value489 = (void*)0;
struct list_item$1sNode$ph* litem_586;
struct sNode* __dec_obj93;
void* __right_value490 = (void*)0;
struct list_item$1sNode$ph* litem_587;
struct sNode* __dec_obj94;
void* __right_value491 = (void*)0;
struct list_item$1sNode$ph* litem_588;
struct sNode* __dec_obj95;
struct list$1sNode$ph* __result_obj__299;
    if(    self->len==0) {
        litem_586=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value489=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1227, "struct list_item$1sNode$ph*"))));
        litem_586->prev=((void*)0);
        litem_586->next=((void*)0);
        __dec_obj93=litem_586->item,
        litem_586->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj93 ? __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_586;
        self->head=litem_586;
    }
    else if(    self->len==1) {
        litem_587=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value490=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1237, "struct list_item$1sNode$ph*"))));
        litem_587->prev=self->head;
        litem_587->next=((void*)0);
        __dec_obj94=litem_587->item,
        litem_587->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj94 ? __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_587;
        self->head->next=litem_587;
    }
    else {
        litem_588=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value491=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1247, "struct list_item$1sNode$ph*"))));
        litem_588->prev=self->tail;
        litem_588->next=((void*)0);
        __dec_obj95=litem_588->item,
        litem_588->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj95 ? __dec_obj95 = come_decrement_ref_count(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_588;
        self->tail=litem_588;
    }
    self->len++;
    __result_obj__299 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__299;
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_603;
unsigned int hash_604;
unsigned int it_605;
struct sClassModule* __result_obj__300;
struct sClassModule* __result_obj__301;
struct sClassModule* __result_obj__302;
struct sClassModule* __result_obj__303;
default_value_603 = (void*)0;
    memset(&default_value_603,0,sizeof(struct sClassModule*));
    hash_604=string_get_hash_key(((char*)key))%self->size;
    it_605=hash_604;
    while((_Bool)1) {
        if(        self->item_existance[it_605]) {
            if(            string_equals(self->keys[it_605],key)) {
                __result_obj__300 = come_increment_ref_count(self->items[it_605]);
                /*c*/ come_call_finalizer3(default_value_603,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__300,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__300;
            }
            it_605++;
            if(            it_605>=self->size) {
                it_605=0;
            }
            else if(            it_605==hash_604) {
                __result_obj__301 = come_increment_ref_count(default_value_603);
                /*c*/ come_call_finalizer3(default_value_603,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__301,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__301;
            }
        }
        else {
            __result_obj__302 = come_increment_ref_count(default_value_603);
            /*c*/ come_call_finalizer3(default_value_603,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__302,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__302;
        }
    }
    __result_obj__303 = come_increment_ref_count(default_value_603);
    /*c*/ come_call_finalizer3(default_value_603,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__303,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__303;
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
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
int i_611;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
struct list$1char$ph* __dec_obj98;
struct map$2char$phchar$ph* __result_obj__306;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value515=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2042, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value516=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2043, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value517=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2044, "_Bool*"))));
    for(    i_611=0;    i_611<128;    i_611++    ){
        self->item_existance[i_611]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj98=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2054, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj98,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__306 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__306,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__306;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__305;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__305 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__305,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__305;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_612;
int i_613;
    for(    i_612=0;    i_612<self->size;    i_612++    ){
        if(        self->item_existance[i_612]) {
            if(            1) {
                (self->items[i_612] = come_decrement_ref_count(self->items[i_612], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_613=0;    i_613<self->size;    i_613++    ){
        if(        self->item_existance[i_613]) {
            if(            1) {
                (self->keys[i_613] = come_decrement_ref_count(self->keys[i_613], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_634;
unsigned int it_635;
_Bool same_key_exist_636;
char* it2_637;
struct map$2char$phchar$ph* __result_obj__317;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_634=string_get_hash_key(((char*)key))%self->size;
    it_635=hash_634;
    while((_Bool)1) {
        if(        self->item_existance[it_635]) {
            if(            string_equals(self->keys[it_635],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_635]);
                    (self->keys[it_635] = come_decrement_ref_count(self->keys[it_635], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_635]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_635]);
                    self->keys[it_635]=key;
                }
                if(                1) {
                    (self->items[it_635] = come_decrement_ref_count(self->items[it_635], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_635]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_635]=item;
                }
                break;
            }
            it_635++;
            if(            it_635>=self->size) {
                it_635=0;
            }
            else if(            it_635==hash_634) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_635]=(_Bool)1;
            if(            1) {
                self->keys[it_635]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_635]=key;
            }
            if(            1) {
                self->items[it_635]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_635]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_636=(_Bool)0;
    for(    it2_637=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_637=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_637,key)) {
            same_key_exist_636=(_Bool)1;
        }
    }
    if(    !same_key_exist_636) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__317 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__317;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_617;
void* __right_value522 = (void*)0;
char** keys_618;
void* __right_value523 = (void*)0;
char** items_619;
void* __right_value524 = (void*)0;
_Bool* item_existance_620;
int len_621;
char* it_624;
char* default_value_627;
void* __right_value525 = (void*)0;
char* it2_628;
unsigned int hash_631;
int n_632;
char* default_value_633;
void* __right_value526 = (void*)0;
default_value_627 = (void*)0;
default_value_633 = (void*)0;
    size_617=self->size*10;
    keys_618=(char**)come_increment_ref_count(((char**)(__right_value522=(char**)come_calloc(1, sizeof(char*)*(1*(size_617)), "./comelang.h", 2281, "char**"))));
    items_619=(char**)come_increment_ref_count(((char**)(__right_value523=(char**)come_calloc(1, sizeof(char*)*(1*(size_617)), "./comelang.h", 2282, "char**"))));
    item_existance_620=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value524=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_617)), "./comelang.h", 2283, "_Bool*"))));
    len_621=0;
    for(    it_624=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_624=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_627,0,sizeof(char*));
        it2_628=((char*)(__right_value525=map$2char$phchar$ph_at(self,it_624,(char*)come_increment_ref_count(default_value_627))));
        (__right_value525 = come_decrement_ref_count(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_631=string_get_hash_key(((char*)it_624))%size_617;
        n_632=hash_631;
        while((_Bool)1) {
            if(            item_existance_620[n_632]) {
                n_632++;
                if(                n_632>=size_617) {
                    n_632=0;
                }
                else if(                n_632==hash_631) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_620[n_632]=(_Bool)1;
                keys_618[n_632]=it_624;
                items_619[n_632]=((char*)(__right_value526=map$2char$phchar$ph_at(self,it_624,(char*)come_increment_ref_count(default_value_633))));
                (__right_value526 = come_decrement_ref_count(__right_value526, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_621++;
                (default_value_633 = come_decrement_ref_count(default_value_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_633 = come_decrement_ref_count(default_value_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_627 = come_decrement_ref_count(default_value_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_618;
    self->items=items_619;
    self->item_existance=item_existance_620;
    self->size=size_617;
    self->len=len_621;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_622;
char* __result_obj__307;
char* __result_obj__308;
char* result_623;
char* __result_obj__309;
result_622 = (void*)0;
result_623 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_622,0,sizeof(char*));
        __result_obj__307 = result_622;
        return __result_obj__307;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__308 = self->key_list->it->item;
        return __result_obj__308;
    }
    memset(&result_623,0,sizeof(char*));
    __result_obj__309 = result_623;
    return __result_obj__309;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_625;
char* __result_obj__310;
char* __result_obj__311;
char* result_626;
char* __result_obj__312;
result_625 = (void*)0;
result_626 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_625,0,sizeof(char*));
        __result_obj__310 = result_625;
        return __result_obj__310;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__311 = self->key_list->it->item;
        return __result_obj__311;
    }
    memset(&result_626,0,sizeof(char*));
    __result_obj__312 = result_626;
    return __result_obj__312;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_629;
unsigned int it_630;
char* __result_obj__313;
char* __result_obj__314;
char* __result_obj__315;
char* __result_obj__316;
    hash_629=string_get_hash_key(((char*)key))%self->size;
    it_630=hash_629;
    while((_Bool)1) {
        if(        self->item_existance[it_630]) {
            if(            string_equals(self->keys[it_630],key)) {
                __result_obj__313 = come_increment_ref_count(self->items[it_630]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__313 = come_decrement_ref_count(__result_obj__313, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__313;
            }
            it_630++;
            if(            it_630>=self->size) {
                it_630=0;
            }
            else if(            it_630==hash_629) {
                __result_obj__314 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__314 = come_decrement_ref_count(__result_obj__314, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__314;
            }
        }
        else {
            __result_obj__315 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__315 = come_decrement_ref_count(__result_obj__315, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__315;
        }
    }
    __result_obj__316 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__316 = come_decrement_ref_count(__result_obj__316, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__316;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_638;
int i_639;
char* __result_obj__318;
char* default_value_640;
char* __result_obj__319;
default_value_640 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_638=self->head;
    i_639=0;
    while(it_638!=((void*)0)) {
        if(        position==i_639) {
            __result_obj__318 = come_increment_ref_count(it_638->item);
            (__result_obj__318 = come_decrement_ref_count(__result_obj__318, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__318;
        }
        it_638=it_638->next;
        i_639++;
    }
    memset(&default_value_640,0,sizeof(char*));
    __result_obj__319 = come_increment_ref_count(default_value_640);
    (default_value_640 = come_decrement_ref_count(default_value_640, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__319 = come_decrement_ref_count(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__319;
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
struct sClassNode* __result_obj__320;
void* __right_value537 = (void*)0;
struct sClassNode* result_644;
void* __right_value538 = (void*)0;
char* __dec_obj102;
void* __right_value539 = (void*)0;
char* __dec_obj103;
void* __right_value540 = (void*)0;
struct sClass* __dec_obj104;
void* __right_value541 = (void*)0;
struct list$1sNode$ph* __dec_obj105;
struct sClassNode* __result_obj__321;
    if(    self==(void*)0) {
        __result_obj__320 = (void*)0;
        return __result_obj__320;
    }
    result_644=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "struct sClassNode*"));
    if(    self!=((void*)0)) {
        result_644->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj102=result_644->sname,
        result_644->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sClassNode_clone", 5, "char*"));
        __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_644->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj103=result_644->mName,
        result_644->mName=(char*)come_increment_ref_count((char*)come_memdup(self->mName, "sClassNode_clone", 7, "char*"));
        __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj104=result_644->mClass,
        result_644->mClass=(struct sClass*)come_increment_ref_count(come_call_cloner(sClass_clone, self->mClass));
        /*b*/ come_call_finalizer3(__dec_obj104,sClass_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj105=result_644->mMethods,
        result_644->mMethods=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mMethods));
        /*b*/ come_call_finalizer3(__dec_obj105,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__321 = result_644;
    /*c*/ come_call_finalizer3(result_644,sClassNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__321;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
_Bool define_struct_645;
char* p_646;
int sline_647;
void* __right_value544 = (void*)0;
char* type_name_648;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
char* struct_attribute_649;
void* __right_value549 = (void*)0;
char* type_name_650;
void* __right_value550 = (void*)0;
struct sNode* __result_obj__324;
void* __right_value551 = (void*)0;
struct sNode* __result_obj__325;
    define_struct_645=(_Bool)0;
    {
        p_646=info->p;
        sline_647=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                type_name_648=(char*)come_increment_ref_count(parse_word(info));
                if(                parsecmp("extends",info)) {
                    ((char*)(__right_value545=parse_word(info)));
                    (__right_value545 = come_decrement_ref_count(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((char*)(__right_value546=parse_word(info)));
                    (__right_value546 = come_decrement_ref_count(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                *info->p==123) {
                    ((char*)(__right_value547=skip_block(info)));
                    (__right_value547 = come_decrement_ref_count(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    if(                    *info->p==59) {
                        define_struct_645=(_Bool)1;
                    }
                }
                (type_name_648 = come_decrement_ref_count(type_name_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_646;
        info->sline=sline_647;
    }
    if(    define_struct_645) {
        struct_attribute_649=(char*)come_increment_ref_count(parse_struct_attribute(info));
        type_name_650=(char*)come_increment_ref_count(parse_word(info));
        __result_obj__324 = come_increment_ref_count(((struct sNode*)(__right_value550=parse_struct((char*)come_increment_ref_count(type_name_650),(char*)come_increment_ref_count(struct_attribute_649),info))));
        (struct_attribute_649 = come_decrement_ref_count(struct_attribute_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_650 = come_decrement_ref_count(type_name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__right_value550) ? __right_value550 = come_decrement_ref_count(__right_value550, ((struct sNode*)__right_value550)->finalize, ((struct sNode*)__right_value550)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__324) ? __result_obj__324 = come_decrement_ref_count(__result_obj__324, ((struct sNode*)__result_obj__324)->finalize, ((struct sNode*)__result_obj__324)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__324;
        (struct_attribute_649 = come_decrement_ref_count(struct_attribute_649, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (type_name_650 = come_decrement_ref_count(type_name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__325 = come_increment_ref_count(((struct sNode*)(__right_value551=string_node_v13(buf,head,head_sline,info))));
    ((__right_value551) ? __right_value551 = come_decrement_ref_count(__right_value551, ((struct sNode*)__right_value551)->finalize, ((struct sNode*)__right_value551)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__325) ? __result_obj__325 = come_decrement_ref_count(__result_obj__325, ((struct sNode*)__result_obj__325)->finalize, ((struct sNode*)__result_obj__325)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__325;
}

