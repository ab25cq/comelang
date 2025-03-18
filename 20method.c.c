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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __right_value186 = (void*)0;
struct sCurrentNode* __result_obj__167;
    ((struct sNodeBase*)(__right_value186=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value186,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__167 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__167,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__167;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __right_value187 = (void*)0;
char* __result_obj__168;
    __result_obj__168 = come_increment_ref_count(((char*)(__right_value187=__builtin_string(self->sname))));
    (__right_value187 = come_decrement_ref_count(__right_value187, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__168 = come_decrement_ref_count(__result_obj__168, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__168;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __right_value188 = (void*)0;
char* __result_obj__169;
    __result_obj__169 = come_increment_ref_count(((char*)(__right_value188=__builtin_string("sCurrentNode"))));
    (__right_value188 = come_decrement_ref_count(__right_value188, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__169 = come_decrement_ref_count(__result_obj__169, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__169;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value189 = (void*)0;
char* class_name_249;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sClass* current_stack_250;
struct sVarTable* vtable_251;
struct map$2char$phsVar$ph* o2_saved_252;
char* it_255;
char* key_258;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
struct sVar* value_259;
void* __right_value232 = (void*)0;
struct sType* type2_267;
void* __right_value233 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct tuple2$2char$phsType$ph* item_291;
void* __right_value239 = (void*)0;
struct sType* type3_302;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct tuple2$2char$phsType$ph* item2_305;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct map$2char$phsVar$ph* o2_saved_354;
char* it_355;
char* key_356;
void* __right_value253 = (void*)0;
struct sVar* value_357;
void* __right_value254 = (void*)0;
struct sType* type2_358;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct tuple2$2char$phsType$ph* item_359;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct CVALUE* come_value_360;
void* __right_value259 = (void*)0;
char* __dec_obj47;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__222;
    info->current_stack_num++;
    class_name_249=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_250=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 424, "struct sClass*")),(char*)come_increment_ref_count(class_name_249),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_251=info->lv_table;
    while(vtable_251) {
        for(        o2_saved_252=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_251->mVars)),it_255=map$2char$phsVar$ph_begin((o2_saved_252));        !map$2char$phsVar$ph_end((o2_saved_252));        it_255=map$2char$phsVar$ph_next((o2_saved_252))        ){
            key_258=it_255;
            value_259=((struct sVar*)(__right_value193=map$2char$phsVar$ph$p_operator_load_element(vtable_251->mVars,((char*)(__right_value192=__builtin_string(key_258))))));
            (__right_value192 = come_decrement_ref_count(__right_value192, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value193,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_267=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_259->mType));
            type2_267->mPointerNum++;
            item_291=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 437, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_259->mCValueName)),(struct sType*)come_increment_ref_count(type2_267)));
            if(            value_259->mCValueName!=((void*)0)) {
                if(                strcmp(value_259->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_259->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_259->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_259->mType->mClass->mName,"va_list")||string_operator_equals(value_259->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNode$ph_length(type2_267->mArrayNum)==1) {
                    type3_302=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_267));
                    list$1sNode$ph_reset(type3_302->mArrayNum);
                    type3_302->mPointerNum=1;
                    type3_302->mOriginIsArray=(_Bool)1;
                    item2_305=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 457, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(__builtin_string(value_259->mCValueName)),(struct sType*)come_increment_ref_count(type3_302)));
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_250->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item2_305)));
                    value_259->mType->mOriginIsArray=(_Bool)1;
                    /*c*/ come_call_finalizer3(type3_302,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(item2_305,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    list$1tuple2$2char$phsType$ph$ph_push_back(current_stack_250->mFields,(struct tuple2$2char$phsType$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsType$ph_clone, item_291)));
                }
            }
            /*c*/ come_call_finalizer3(type2_267,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_291,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_252,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_251=vtable_251->mParent;
    }
    output_struct(current_stack_250,info);
    map$2char$phsClass$ph_insert(info->classes,(char*)come_increment_ref_count(class_name_249),(struct sClass*)come_increment_ref_count(current_stack_250));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_249,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_249);
    vtable_251=info->lv_table;
    while(vtable_251) {
        for(        o2_saved_354=(struct map$2char$phsVar$ph*)come_increment_ref_count((vtable_251->mVars)),it_355=map$2char$phsVar$ph_begin((o2_saved_354));        !map$2char$phsVar$ph_end((o2_saved_354));        it_355=map$2char$phsVar$ph_next((o2_saved_354))        ){
            key_356=it_355;
            value_357=((struct sVar*)(__right_value253=map$2char$phsVar$ph$p_operator_load_element(vtable_251->mVars,key_356)));
            /*c*/ come_call_finalizer3(__right_value253,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            type2_358=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_357->mType));
            item_359=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(tuple2$2char$phsType$ph_initialize((struct tuple2$2char$phsType$ph**)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "common.h", 486, "struct tuple2$2char$phsType$ph")),(char*)come_increment_ref_count(value_357->mCValueName),(struct sType*)come_increment_ref_count(type2_358)));
            if(            value_357->mCValueName!=((void*)0)) {
                if(                strcmp(value_357->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_357->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_357->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_357->mType->mClass->mName,"va_list")||string_operator_equals(value_357->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_358->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_357->mCValueName,value_357->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_357->mCValueName,value_357->mCValueName);
                    }
                }
            }
            /*c*/ come_call_finalizer3(type2_358,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(item_359,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_354,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        vtable_251=vtable_251->mParent;
    }
    come_value_360=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 515, "struct CVALUE*"))));
    __dec_obj47=come_value_360->c_value,
    come_value_360->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_360->type,
    come_value_360->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 518, "struct sType*")),(char*)come_increment_ref_count(class_name_249),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_360->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_360->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_360));
    __result_obj__222 = (_Bool)1;
    (class_name_249 = come_decrement_ref_count(class_name_249, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(current_stack_250,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(come_value_360,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__222;
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
char* result_253;
char* __result_obj__170;
char* __result_obj__171;
char* result_254;
char* __result_obj__172;
result_253 = (void*)0;
result_254 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_253,0,sizeof(char*));
        __result_obj__170 = result_253;
        return __result_obj__170;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__171 = self->key_list->it->item;
        return __result_obj__171;
    }
    memset(&result_254,0,sizeof(char*));
    __result_obj__172 = result_254;
    return __result_obj__172;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_256;
char* __result_obj__173;
char* __result_obj__174;
char* result_257;
char* __result_obj__175;
result_256 = (void*)0;
result_257 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_256,0,sizeof(char*));
        __result_obj__173 = result_256;
        return __result_obj__173;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__174 = self->key_list->it->item;
        return __result_obj__174;
    }
    memset(&result_257,0,sizeof(char*));
    __result_obj__175 = result_257;
    return __result_obj__175;
}

static struct sVar* map$2char$phsVar$ph$p_operator_load_element(struct map$2char$phsVar$ph* self, char* key){
struct sVar* default_value_260;
unsigned int hash_261;
unsigned int it_262;
struct sVar* __result_obj__176;
struct sVar* __result_obj__177;
struct sVar* __result_obj__178;
struct sVar* __result_obj__179;
default_value_260 = (void*)0;
    memset(&default_value_260,0,sizeof(struct sVar*));
    hash_261=string_get_hash_key(((char*)key))%self->size;
    it_262=hash_261;
    while((_Bool)1) {
        if(        self->item_existance[it_262]) {
            if(            string_equals(self->keys[it_262],key)) {
                __result_obj__176 = come_increment_ref_count(self->items[it_262]);
                /*c*/ come_call_finalizer3(default_value_260,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__176,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__176;
            }
            it_262++;
            if(            it_262>=self->size) {
                it_262=0;
            }
            else if(            it_262==hash_261) {
                __result_obj__177 = come_increment_ref_count(default_value_260);
                /*c*/ come_call_finalizer3(default_value_260,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__177,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__177;
            }
        }
        else {
            __result_obj__178 = come_increment_ref_count(default_value_260);
            /*c*/ come_call_finalizer3(default_value_260,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__178,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__178;
        }
    }
    __result_obj__179 = come_increment_ref_count(default_value_260);
    /*c*/ come_call_finalizer3(default_value_260,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__179,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
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
struct list_item$1sType$ph* it_263;
struct list_item$1sType$ph* prev_it_264;
    it_263=self->head;
    while(it_263!=((void*)0)) {
        prev_it_264=it_263;
        it_263=it_263->next;
        /*c*/ come_call_finalizer3(prev_it_264,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_265;
struct list_item$1sNode$ph* prev_it_266;
    it_265=self->head;
    while(it_265!=((void*)0)) {
        prev_it_266=it_265;
        it_265=it_265->next;
        /*c*/ come_call_finalizer3(prev_it_266,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__180;
void* __right_value194 = (void*)0;
struct sType* result_268;
void* __right_value195 = (void*)0;
struct sType* __dec_obj16;
void* __right_value196 = (void*)0;
struct sType* __dec_obj17;
void* __right_value204 = (void*)0;
struct list$1sType$ph* __dec_obj21;
void* __right_value205 = (void*)0;
struct sType* __dec_obj22;
void* __right_value206 = (void*)0;
struct sType* __dec_obj23;
void* __right_value208 = (void*)0;
struct sNode* __dec_obj24;
void* __right_value209 = (void*)0;
struct sNode* __dec_obj25;
void* __right_value210 = (void*)0;
char* __dec_obj26;
void* __right_value211 = (void*)0;
char* __dec_obj27;
void* __right_value212 = (void*)0;
char* __dec_obj28;
void* __right_value220 = (void*)0;
struct list$1sNode$ph* __dec_obj32;
void* __right_value221 = (void*)0;
char* __dec_obj33;
void* __right_value222 = (void*)0;
struct list$1sType$ph* __dec_obj34;
void* __right_value230 = (void*)0;
struct list$1char$ph* __dec_obj38;
void* __right_value231 = (void*)0;
struct sType* __dec_obj39;
struct sType* __result_obj__194;
    if(    self==(void*)0) {
        __result_obj__180 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__180,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__180;
    }
    result_268=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_268->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj16=result_268->mOriginalLoadVarType,
        result_268->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj16,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj17=result_268->mChannelType,
        result_268->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj17,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj21=result_268->mGenericsTypes,
        result_268->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj21,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj22=result_268->mNoSolvedGenericsType,
        result_268->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj22,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj23=result_268->mAnyOriginalType,
        result_268->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj23,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj24=result_268->mSizeNum,
        result_268->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj24 ? __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj25=result_268->mAlignas,
        result_268->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj25 ? __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj26=result_268->mTupleName,
        result_268->mTupleName=(char*)come_increment_ref_count((char*)come_memdup(self->mTupleName, "sType_clone", 13, "char*"));
        __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj27=result_268->mAttribute,
        result_268->mAttribute=(char*)come_increment_ref_count((char*)come_memdup(self->mAttribute, "sType_clone", 14, "char*"));
        __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_268->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_268->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_268->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_268->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_268->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_268->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_268->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_268->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_268->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_268->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_268->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_268->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_268->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_268->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_268->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_268->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_268->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_268->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_268->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_268->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj28=result_268->mAsmName,
        result_268->mAsmName=(char*)come_increment_ref_count((char*)come_memdup(self->mAsmName, "sType_clone", 38, "char*"));
        __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_268->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj32=result_268->mArrayNum,
        result_268->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj32,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_268->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj33=result_268->mOriginalTypeName,
        result_268->mOriginalTypeName=(char*)come_increment_ref_count((char*)come_memdup(self->mOriginalTypeName, "sType_clone", 48, "char*"));
        __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_268->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_268->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj34=result_268->mParamTypes,
        result_268->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj34,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj38=result_268->mParamNames,
        result_268->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj38,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj39=result_268->mResultType,
        result_268->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_268->mVarArgs=self->mVarArgs;
    }
    __result_obj__194 = come_increment_ref_count(result_268);
    /*c*/ come_call_finalizer3(result_268,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__194,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__181;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
struct list$1sType$ph* result_269;
struct list_item$1sType$ph* it_270;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct list$1sType$ph* __result_obj__184;
    if(    self==((void*)0)) {
        __result_obj__181 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__181,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__181;
    }
    result_269=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1138, "struct list$1sType$ph*"))));
    it_270=self->head;
    while(it_270!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_269,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_270->item)));
        }
        else {
            list$1sType$ph_add(result_269,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_270->item)));
        }
        it_270=it_270->next;
    }
    __result_obj__184 = come_increment_ref_count(result_269);
    /*c*/ come_call_finalizer3(result_269,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__184,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__184;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__182;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__182 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__182,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value199 = (void*)0;
struct list_item$1sType$ph* litem_271;
struct sType* __dec_obj18;
void* __right_value200 = (void*)0;
struct list_item$1sType$ph* litem_272;
struct sType* __dec_obj19;
void* __right_value201 = (void*)0;
struct list_item$1sType$ph* litem_273;
struct sType* __dec_obj20;
struct list$1sType$ph* __result_obj__183;
    if(    self->len==0) {
        litem_271=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value199=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1157, "struct list_item$1sType$ph*"))));
        litem_271->prev=((void*)0);
        litem_271->next=((void*)0);
        __dec_obj18=litem_271->item,
        litem_271->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj18,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_271;
        self->head=litem_271;
    }
    else if(    self->len==1) {
        litem_272=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value200=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1167, "struct list_item$1sType$ph*"))));
        litem_272->prev=self->head;
        litem_272->next=((void*)0);
        __dec_obj19=litem_272->item,
        litem_272->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj19,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_272;
        self->head->next=litem_272;
    }
    else {
        litem_273=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value201=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1177, "struct list_item$1sType$ph*"))));
        litem_273->prev=self->tail;
        litem_273->next=((void*)0);
        __dec_obj20=litem_273->item,
        litem_273->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj20,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_273;
        self->tail=litem_273;
    }
    self->len++;
    __result_obj__183 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_274;
struct list_item$1sType$ph* prev_it_275;
    it_274=self->head;
    while(it_274!=((void*)0)) {
        prev_it_275=it_274;
        it_274=it_274->next;
        /*c*/ come_call_finalizer3(prev_it_275,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__185;
void* __right_value207 = (void*)0;
struct sNode* result_276;
struct sNode* __result_obj__186;
    if(    self==(void*)0) {
        __result_obj__185 = come_increment_ref_count((void*)0);
        ((__result_obj__185) ? __result_obj__185 = come_decrement_ref_count(__result_obj__185, ((struct sNode*)__result_obj__185)->finalize, ((struct sNode*)__result_obj__185)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__185;
    }
    result_276=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_276->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_276->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_276->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_276->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_276->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_276->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_276->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_276->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_276->kind=self->kind;
    }
    __result_obj__186 = come_increment_ref_count(result_276);
    ((result_276) ? result_276 = come_decrement_ref_count(result_276, ((struct sNode*)result_276)->finalize, ((struct sNode*)result_276)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__186) ? __result_obj__186 = come_decrement_ref_count(__result_obj__186, ((struct sNode*)__result_obj__186)->finalize, ((struct sNode*)__result_obj__186)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__186;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__187;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct list$1sNode$ph* result_277;
struct list_item$1sNode$ph* it_278;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct list$1sNode$ph* __result_obj__190;
    if(    self==((void*)0)) {
        __result_obj__187 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__187,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__187;
    }
    result_277=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1138, "struct list$1sNode$ph*"))));
    it_278=self->head;
    while(it_278!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_277,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_278->item)));
        }
        else {
            list$1sNode$ph_add(result_277,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_278->item)));
        }
        it_278=it_278->next;
    }
    __result_obj__190 = come_increment_ref_count(result_277);
    /*c*/ come_call_finalizer3(result_277,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__188;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__188 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__188,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value215 = (void*)0;
struct list_item$1sNode$ph* litem_279;
struct sNode* __dec_obj29;
void* __right_value216 = (void*)0;
struct list_item$1sNode$ph* litem_280;
struct sNode* __dec_obj30;
void* __right_value217 = (void*)0;
struct list_item$1sNode$ph* litem_281;
struct sNode* __dec_obj31;
struct list$1sNode$ph* __result_obj__189;
    if(    self->len==0) {
        litem_279=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value215=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1157, "struct list_item$1sNode$ph*"))));
        litem_279->prev=((void*)0);
        litem_279->next=((void*)0);
        __dec_obj29=litem_279->item,
        litem_279->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj29 ? __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_279;
        self->head=litem_279;
    }
    else if(    self->len==1) {
        litem_280=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value216=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1167, "struct list_item$1sNode$ph*"))));
        litem_280->prev=self->head;
        litem_280->next=((void*)0);
        __dec_obj30=litem_280->item,
        litem_280->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj30 ? __dec_obj30 = come_decrement_ref_count(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_280;
        self->head->next=litem_280;
    }
    else {
        litem_281=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value217=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1177, "struct list_item$1sNode$ph*"))));
        litem_281->prev=self->tail;
        litem_281->next=((void*)0);
        __dec_obj31=litem_281->item,
        litem_281->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj31 ? __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_281;
        self->tail=litem_281;
    }
    self->len++;
    __result_obj__189 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__189;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_282;
struct list_item$1sNode$ph* prev_it_283;
    it_282=self->head;
    while(it_282!=((void*)0)) {
        prev_it_283=it_282;
        it_282=it_282->next;
        /*c*/ come_call_finalizer3(prev_it_283,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__191;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct list$1char$ph* result_284;
struct list_item$1char$ph* it_285;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct list$1char$ph* __result_obj__193;
    if(    self==((void*)0)) {
        __result_obj__191 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__191,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__191;
    }
    result_284=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1138, "struct list$1char$ph*"))));
    it_285=self->head;
    while(it_285!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_284,(char*)come_increment_ref_count((char*)come_memdup(it_285->item, "./comelang.h", 1143, "char*")));
        }
        else {
            list$1char$ph_add(result_284,(char*)come_increment_ref_count((char*)come_memdup(it_285->item, "./comelang.h", 1146, "char*")));
        }
        it_285=it_285->next;
    }
    __result_obj__193 = come_increment_ref_count(result_284);
    /*c*/ come_call_finalizer3(result_284,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__193,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__193;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value225 = (void*)0;
struct list_item$1char$ph* litem_286;
char* __dec_obj35;
void* __right_value226 = (void*)0;
struct list_item$1char$ph* litem_287;
char* __dec_obj36;
void* __right_value227 = (void*)0;
struct list_item$1char$ph* litem_288;
char* __dec_obj37;
struct list$1char$ph* __result_obj__192;
    if(    self->len==0) {
        litem_286=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value225=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1157, "struct list_item$1char$ph*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj35=litem_286->item,
        litem_286->item=(char*)come_increment_ref_count(item);
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value226=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1167, "struct list_item$1char$ph*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj36=litem_287->item,
        litem_287->item=(char*)come_increment_ref_count(item);
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value227=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1177, "struct list_item$1char$ph*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj37=litem_288->item,
        litem_288->item=(char*)come_increment_ref_count(item);
        __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__192 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__192;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_289;
struct list_item$1char$ph* prev_it_290;
    it_289=self->head;
    while(it_289!=((void*)0)) {
        prev_it_290=it_289;
        it_289=it_289->next;
        /*c*/ come_call_finalizer3(prev_it_290,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsType$ph* __result_obj__195;
void* __right_value234 = (void*)0;
struct tuple2$2char$phsType$ph* result_292;
void* __right_value235 = (void*)0;
char* __dec_obj40;
void* __right_value236 = (void*)0;
struct sType* __dec_obj41;
struct tuple2$2char$phsType$ph* __result_obj__196;
    if(    self==(void*)0) {
        __result_obj__195 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__195,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__195;
    }
    result_292=(struct tuple2$2char$phsType$ph*)come_increment_ref_count((struct tuple2$2char$phsType$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsType$ph)*(1), "tuple2$2char$phsType$ph_clone", 3, "struct tuple2$2char$phsType$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj40=result_292->v1,
        result_292->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsType$ph_clone", 4, "char*"));
        __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj41=result_292->v2,
        result_292->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__196 = come_increment_ref_count(result_292);
    /*c*/ come_call_finalizer3(result_292,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

static unsigned int tuple2$2char$phsType$ph_get_hash_key(struct tuple2$2char$phsType$ph* self){
unsigned int result_293;
    result_293=0;
    result_293+=int_get_hash_key(((int)self->v1));
    result_293+=int_get_hash_key(((int)self->v2));
    return result_293;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_294;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_295;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_294=left->head;
    it2_295=right->head;
    while(it_294!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_294->item,it2_295->item)) {
            return (_Bool)0;
        }
        it_294=it_294->next;
        it2_295=it2_295->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_296;
struct list_item$1sType$ph* it2_297;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_296=left->head;
    it2_297=right->head;
    while(it_296!=((void*)0)) {
        if(        !sType_equals(it_296->item,it2_297->item)) {
            return (_Bool)0;
        }
        it_296=it_296->next;
        it2_297=it2_297->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_298;
struct list_item$1sNode$ph* it2_299;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_298=left->head;
    it2_299=right->head;
    while(it_298!=((void*)0)) {
        if(        !sNode_equals(it_298->item,it2_299->item)) {
            return (_Bool)0;
        }
        it_298=it_298->next;
        it2_299=it2_299->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_300;
struct list_item$1char$ph* it2_301;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_300=left->head;
    it2_301=right->head;
    while(it_300!=((void*)0)) {
        if(        !string_equals(it_300->item,it2_301->item)) {
            return (_Bool)0;
        }
        it_300=it_300->next;
        it2_301=it2_301->next;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phsType$ph* tuple2$2char$phsType$ph_initialize(struct tuple2$2char$phsType$ph* self, char* v1, struct sType* v2){
char* __dec_obj42;
struct sType* __dec_obj43;
struct tuple2$2char$phsType$ph* __result_obj__197;
    __dec_obj42=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj43=self->v2,
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /*b*/ come_call_finalizer3(__dec_obj43,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__197 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(v2,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__197,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
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
struct list_item$1sNode$ph* it_303;
struct list_item$1sNode$ph* prev_it_304;
struct list$1sNode$ph* __result_obj__198;
    it_303=self->head;
    while(it_303!=((void*)0)) {
        prev_it_304=it_303;
        it_303=it_303->next;
        /*c*/ come_call_finalizer3(prev_it_304,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__198 = self;
    return __result_obj__198;
}

static struct list$1tuple2$2char$phsType$ph$ph* list$1tuple2$2char$phsType$ph$ph_push_back(struct list$1tuple2$2char$phsType$ph$ph* self, struct tuple2$2char$phsType$ph* item){
void* __right_value243 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_306;
struct tuple2$2char$phsType$ph* __dec_obj44;
void* __right_value244 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_307;
struct tuple2$2char$phsType$ph* __dec_obj45;
void* __right_value245 = (void*)0;
struct list_item$1tuple2$2char$phsType$ph$ph* litem_308;
struct tuple2$2char$phsType$ph* __dec_obj46;
struct list$1tuple2$2char$phsType$ph$ph* __result_obj__199;
    if(    self->len==0) {
        litem_306=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value243=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1227, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_306->prev=((void*)0);
        litem_306->next=((void*)0);
        __dec_obj44=litem_306->item,
        litem_306->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj44,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_306;
        self->head=litem_306;
    }
    else if(    self->len==1) {
        litem_307=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value244=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1237, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_307->prev=self->head;
        litem_307->next=((void*)0);
        __dec_obj45=litem_307->item,
        litem_307->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj45,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_307;
        self->head->next=litem_307;
    }
    else {
        litem_308=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsType$ph$ph*)(__right_value245=(struct list_item$1tuple2$2char$phsType$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsType$ph$ph)*(1), "./comelang.h", 1247, "struct list_item$1tuple2$2char$phsType$ph$ph*"))));
        litem_308->prev=self->tail;
        litem_308->next=((void*)0);
        __dec_obj46=litem_308->item,
        litem_308->item=(struct tuple2$2char$phsType$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj46,tuple2$2char$phsType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_308;
        self->tail=litem_308;
    }
    self->len++;
    __result_obj__199 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_309;
int i_310;
    for(    i_309=0;    i_309<self->size;    i_309++    ){
        if(        self->item_existance[i_309]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_309],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_310=0;    i_310<self->size;    i_310++    ){
        if(        self->item_existance[i_310]) {
            if(            1) {
                (self->keys[i_310] = come_decrement_ref_count(self->keys[i_310], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsClass$ph* map$2char$phsClass$ph_insert(struct map$2char$phsClass$ph* self, char* key, struct sClass* item){
unsigned int hash_330;
unsigned int it_331;
_Bool same_key_exist_348;
char* it2_351;
struct map$2char$phsClass$ph* __result_obj__220;
    if(    self->len*10>=self->size) {
        map$2char$phsClass$ph_rehash(self);
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
                    /*c*/ come_call_finalizer3(self->items[it_331],sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_331]=(struct sClass*)come_increment_ref_count(item);
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
                stackframe();
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
                self->items[it_331]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_331]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_348=(_Bool)0;
    for(    it2_351=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_351=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_351,key)) {
            same_key_exist_348=(_Bool)1;
        }
    }
    if(    !same_key_exist_348) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__220 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__220;
}

static void map$2char$phsClass$ph_rehash(struct map$2char$phsClass$ph* self){
int size_311;
void* __right_value248 = (void*)0;
char** keys_312;
void* __right_value249 = (void*)0;
struct sClass** items_313;
void* __right_value250 = (void*)0;
_Bool* item_existance_314;
int len_315;
char* it_318;
struct sClass* default_value_321;
void* __right_value251 = (void*)0;
struct sClass* it2_322;
unsigned int hash_327;
int n_328;
struct sClass* default_value_329;
void* __right_value252 = (void*)0;
default_value_321 = (void*)0;
default_value_329 = (void*)0;
    size_311=self->size*10;
    keys_312=(char**)come_increment_ref_count(((char**)(__right_value248=(char**)come_calloc(1, sizeof(char*)*(1*(size_311)), "./comelang.h", 2281, "char**"))));
    items_313=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value249=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_311)), "./comelang.h", 2282, "struct sClass**"))));
    item_existance_314=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value250=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_311)), "./comelang.h", 2283, "_Bool*"))));
    len_315=0;
    for(    it_318=map$2char$phsClass$ph_begin(self);    !map$2char$phsClass$ph_end(self);    it_318=map$2char$phsClass$ph_next(self)    ){
        memset(&default_value_321,0,sizeof(struct sClass*));
        it2_322=((struct sClass*)(__right_value251=map$2char$phsClass$ph_at(self,it_318,(struct sClass*)come_increment_ref_count(default_value_321))));
        /*c*/ come_call_finalizer3(__right_value251,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_327=string_get_hash_key(((char*)it_318))%size_311;
        n_328=hash_327;
        while((_Bool)1) {
            if(            item_existance_314[n_328]) {
                n_328++;
                if(                n_328>=size_311) {
                    n_328=0;
                }
                else if(                n_328==hash_327) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_314[n_328]=(_Bool)1;
                keys_312[n_328]=it_318;
                items_313[n_328]=((struct sClass*)(__right_value252=map$2char$phsClass$ph_at(self,it_318,(struct sClass*)come_increment_ref_count(default_value_329))));
                /*c*/ come_call_finalizer3(__right_value252,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_315++;
                /*c*/ come_call_finalizer3(default_value_329,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_329,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_321,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_312;
    self->items=items_313;
    self->item_existance=item_existance_314;
    self->size=size_311;
    self->len=len_315;
}

static char* map$2char$phsClass$ph_begin(struct map$2char$phsClass$ph* self){
char* result_316;
char* __result_obj__200;
char* __result_obj__201;
char* result_317;
char* __result_obj__202;
result_316 = (void*)0;
result_317 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_316,0,sizeof(char*));
        __result_obj__200 = result_316;
        return __result_obj__200;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__201 = self->key_list->it->item;
        return __result_obj__201;
    }
    memset(&result_317,0,sizeof(char*));
    __result_obj__202 = result_317;
    return __result_obj__202;
}

static _Bool map$2char$phsClass$ph_end(struct map$2char$phsClass$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsClass$ph_next(struct map$2char$phsClass$ph* self){
char* result_319;
char* __result_obj__203;
char* __result_obj__204;
char* result_320;
char* __result_obj__205;
result_319 = (void*)0;
result_320 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_319,0,sizeof(char*));
        __result_obj__203 = result_319;
        return __result_obj__203;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__204 = self->key_list->it->item;
        return __result_obj__204;
    }
    memset(&result_320,0,sizeof(char*));
    __result_obj__205 = result_320;
    return __result_obj__205;
}

static struct sClass* map$2char$phsClass$ph_at(struct map$2char$phsClass$ph* self, char* key, struct sClass* default_value){
unsigned int hash_323;
unsigned int it_324;
struct sClass* __result_obj__206;
struct sClass* __result_obj__207;
struct sClass* __result_obj__208;
struct sClass* __result_obj__209;
    hash_323=string_get_hash_key(((char*)key))%self->size;
    it_324=hash_323;
    while((_Bool)1) {
        if(        self->item_existance[it_324]) {
            if(            string_equals(self->keys[it_324],key)) {
                __result_obj__206 = come_increment_ref_count(self->items[it_324]);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__206,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__206;
            }
            it_324++;
            if(            it_324>=self->size) {
                it_324=0;
            }
            else if(            it_324==hash_323) {
                __result_obj__207 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__207,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__207;
            }
        }
        else {
            __result_obj__208 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__208,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__208;
        }
    }
    __result_obj__209 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__209,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_325;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_326;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        prev_it_326=it_325;
        it_325=it_325->next;
        /*c*/ come_call_finalizer3(prev_it_326,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_332;
struct list_item$1char$ph* it_333;
struct list$1char$ph* __result_obj__213;
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
    __result_obj__213 = self;
    return __result_obj__213;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_334;
struct list$1char$ph* __result_obj__210;
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
struct list$1char$ph* __result_obj__212;
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
        __result_obj__210 = self;
        return __result_obj__210;
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
    __result_obj__212 = self;
    return __result_obj__212;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_335;
struct list_item$1char$ph* prev_it_336;
struct list$1char$ph* __result_obj__211;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        /*c*/ come_call_finalizer3(prev_it_336,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__211 = self;
    return __result_obj__211;
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_349;
char* __result_obj__214;
char* __result_obj__215;
char* result_350;
char* __result_obj__216;
result_349 = (void*)0;
result_350 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_349,0,sizeof(char*));
        __result_obj__214 = result_349;
        return __result_obj__214;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__215 = self->it->item;
        return __result_obj__215;
    }
    memset(&result_350,0,sizeof(char*));
    __result_obj__216 = result_350;
    return __result_obj__216;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_352;
char* __result_obj__217;
char* __result_obj__218;
char* result_353;
char* __result_obj__219;
result_352 = (void*)0;
result_353 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_352,0,sizeof(char*));
        __result_obj__217 = result_352;
        return __result_obj__217;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__218 = self->it->item;
        return __result_obj__218;
    }
    memset(&result_353,0,sizeof(char*));
    __result_obj__219 = result_353;
    return __result_obj__219;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value262 = (void*)0;
struct list_item$1CVALUE$ph* litem_361;
struct CVALUE* __dec_obj49;
void* __right_value263 = (void*)0;
struct list_item$1CVALUE$ph* litem_362;
struct CVALUE* __dec_obj50;
void* __right_value264 = (void*)0;
struct list_item$1CVALUE$ph* litem_363;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__221;
    if(    self->len==0) {
        litem_361=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value262=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1227, "struct list_item$1CVALUE$ph*"))));
        litem_361->prev=((void*)0);
        litem_361->next=((void*)0);
        __dec_obj49=litem_361->item,
        litem_361->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_361;
        self->head=litem_361;
    }
    else if(    self->len==1) {
        litem_362=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value263=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1237, "struct list_item$1CVALUE$ph*"))));
        litem_362->prev=self->head;
        litem_362->next=((void*)0);
        __dec_obj50=litem_362->item,
        litem_362->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_362;
        self->head->next=litem_362;
    }
    else {
        litem_363=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value264=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1247, "struct list_item$1CVALUE$ph*"))));
        litem_363->prev=self->tail;
        litem_363->next=((void*)0);
        __dec_obj51=litem_363->item,
        litem_363->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_363;
        self->tail=litem_363;
    }
    self->len++;
    __result_obj__221 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__221;
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
void* __right_value265 = (void*)0;
char* none_generics_name_364;
void* __right_value266 = (void*)0;
char* fun_name2_365;
void* __right_value267 = (void*)0;
char* fun_name3_366;
void* __right_value268 = (void*)0;
struct sType* no_solved_type_367;
void* __right_value269 = (void*)0;
struct sGenericsFun* generics_fun_368;
struct sType* type2_371;
void* __right_value270 = (void*)0;
struct sType* type_before_372;
void* __right_value271 = (void*)0;
char* __dec_obj52;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var1 = (void*)0;
char* name_373=0;
_Bool err_374=0;
void* __right_value274 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c1_375=0;
char* Err_376=0;
void* __right_value275 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__230;
void* __right_value280 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__234;
    none_generics_name_364=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_365=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_366=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_364,fun_name));
    no_solved_type_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    generics_fun_368=((struct sGenericsFun*)(__right_value269=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_366,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value269,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_368) {
        type2_371=(struct sType*)come_increment_ref_count(no_solved_type_367);
        type_before_372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        __dec_obj52=fun_name2_365,
        fun_name2_365=(char*)come_increment_ref_count(create_method_name(type2_371,(_Bool)0,fun_name,info,array_equal_pointer));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        multiple_assign_var1=((struct tuple2$2char$phbool$*)(__right_value273=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_365)),generics_fun_368,type2_371,info)));
        name_373=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        err_374=multiple_assign_var1->v2;
        /*c*/ come_call_finalizer3(__right_value273,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_374) {
            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value274=err_msg(info,"%s not found",fun_name3_366)));
            come_exception_var_c1_375=multiple_assign_var2->v1;
            Err_376=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            ((Err_376)?(puts(Err_376),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value274,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__230 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value279=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 29, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_376 = come_decrement_ref_count(Err_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(type2_371,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(type_before_372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_373 = come_decrement_ref_count(name_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (none_generics_name_364 = come_decrement_ref_count(none_generics_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name2_365 = come_decrement_ref_count(fun_name2_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name3_366 = come_decrement_ref_count(fun_name3_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(no_solved_type_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value279,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__230,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__230;
            (Err_376 = come_decrement_ref_count(Err_376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        type=type_before_372;
        /*c*/ come_call_finalizer3(type2_371,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_before_372,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_373 = come_decrement_ref_count(name_373, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__234 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value284=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 35, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name2_365, "20method.c", 35, "char*")),generics_fun_368))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (none_generics_name_364 = come_decrement_ref_count(none_generics_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name2_365 = come_decrement_ref_count(fun_name2_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name3_366 = come_decrement_ref_count(fun_name3_366, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(no_solved_type_367,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value284,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__234,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__234;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_369;
unsigned int it_370;
struct sGenericsFun* __result_obj__223;
struct sGenericsFun* __result_obj__224;
struct sGenericsFun* __result_obj__225;
struct sGenericsFun* __result_obj__226;
    hash_369=string_get_hash_key(((char*)key))%self->size;
    it_370=hash_369;
    while((_Bool)1) {
        if(        self->item_existance[it_370]) {
            if(            string_equals(self->keys[it_370],key)) {
                __result_obj__223 = come_increment_ref_count(self->items[it_370]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__223,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__223;
            }
            it_370++;
            if(            it_370>=self->size) {
                it_370=0;
            }
            else if(            it_370==hash_369) {
                __result_obj__224 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__224,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__224;
            }
        }
        else {
            __result_obj__225 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__225,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__225;
        }
    }
    __result_obj__226 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__226,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__226;
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
struct tuple2$2char$phvoid$p* __result_obj__227;
void* __right_value276 = (void*)0;
struct tuple2$2char$phvoid$p* result_377;
void* __right_value277 = (void*)0;
char* __dec_obj53;
struct tuple2$2char$phvoid$p* __result_obj__228;
    if(    self==(void*)0) {
        __result_obj__227 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__227,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__227;
    }
    result_377=(struct tuple2$2char$phvoid$p*)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "tuple2$2char$phvoid$p_clone", 3, "struct tuple2$2char$phvoid$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj53=result_377->v1,
        result_377->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phvoid$p_clone", 4, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_377->v2=self->v2;
    }
    __result_obj__228 = come_increment_ref_count(result_377);
    /*c*/ come_call_finalizer3(result_377,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__228,tuple2$2char$phvoid$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__228;
}

static unsigned int tuple2$2char$phvoid$p_get_hash_key(struct tuple2$2char$phvoid$p* self){
unsigned int result_378;
    result_378=0;
    result_378+=int_get_hash_key(((int)self->v1));
    result_378+=int_get_hash_key(((int)self->v2));
    return result_378;
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
char* __dec_obj54;
struct tuple2$2char$phvoid$p* __result_obj__229;
    __dec_obj54=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__229 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__229,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__229;
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
struct tuple2$2char$phsGenericsFun$p* __result_obj__231;
void* __right_value281 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* result_379;
void* __right_value282 = (void*)0;
char* __dec_obj55;
struct tuple2$2char$phsGenericsFun$p* __result_obj__232;
    if(    self==(void*)0) {
        __result_obj__231 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__231,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__231;
    }
    result_379=(struct tuple2$2char$phsGenericsFun$p*)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "tuple2$2char$phsGenericsFun$p_clone", 3, "struct tuple2$2char$phsGenericsFun$p*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj55=result_379->v1,
        result_379->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsGenericsFun$p_clone", 4, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_379->v2=self->v2;
    }
    __result_obj__232 = come_increment_ref_count(result_379);
    /*c*/ come_call_finalizer3(result_379,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__232,tuple2$2char$phsGenericsFun$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__232;
}

static unsigned int tuple2$2char$phsGenericsFun$p_get_hash_key(struct tuple2$2char$phsGenericsFun$p* self){
unsigned int result_380;
    result_380=0;
    result_380+=int_get_hash_key(((int)self->v1));
    result_380+=int_get_hash_key(((int)self->v2));
    return result_380;
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
char* __dec_obj56;
struct tuple2$2char$phsGenericsFun$p* __result_obj__233;
    __dec_obj56=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__233 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__233,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__233;
}

struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value285 = (void*)0;
char* fun_name3_382;
struct list$1sType$ph* method_generics_types_before_383;
struct list$1sType$ph* __dec_obj57;
void* __right_value286 = (void*)0;
struct sGenericsFun* generics_fun_384;
void* __right_value287 = (void*)0;
_Bool _if_conditional1;
void* __right_value288 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c2_385=0;
char* Err_386=0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__235;
struct list$1sType$ph* __dec_obj58;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* __result_obj__236;
    static int num_method_generics_381=0;
    fun_name3_382=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_381++));
    method_generics_types_before_383=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj57=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj57,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    generics_fun_384=((struct sGenericsFun*)(__right_value286=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name,((void*)0))));
    /*c*/ come_call_finalizer3(__right_value286,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    generics_fun_384) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_382)),generics_fun_384,info))),        _if_conditional1) {
            multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value288=err_msg(info,"%s not found",fun_name3_382)));
            come_exception_var_c2_385=multiple_assign_var3->v1;
            Err_386=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            ((Err_386)?(puts(Err_386),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value288,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __result_obj__235 = come_increment_ref_count(((struct tuple2$2char$phvoid$p*)(__right_value291=tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 51, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(__builtin_string("")),((void*)0)))));
            (Err_386 = come_decrement_ref_count(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name3_382 = come_decrement_ref_count(fun_name3_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(method_generics_types_before_383,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__right_value291,tuple2$2char$phvoid$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__235,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__235;
            (Err_386 = come_decrement_ref_count(Err_386, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    __dec_obj58=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_383);
    /*b*/ come_call_finalizer3(__dec_obj58,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__236 = come_increment_ref_count(((struct tuple2$2char$phsGenericsFun$p*)(__right_value294=tuple2$2char$phsGenericsFun$p_initialize((struct tuple2$2char$phsGenericsFun$p**)come_increment_ref_count((struct tuple2$2char$phsGenericsFun$p*)come_calloc(1, sizeof(struct tuple2$2char$phsGenericsFun$p)*(1), "20method.c", 57, "struct tuple2$2char$phsGenericsFun$p")),(char*)come_increment_ref_count((char*)come_memdup(fun_name3_382, "20method.c", 57, "char*")),generics_fun_384))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name3_382 = come_decrement_ref_count(fun_name3_382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(method_generics_types_before_383,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value294,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__236,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__236;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value299 = (void*)0;
struct sNode* current_stack_frame_node_387;
_Bool Value_389;
_Bool __result_obj__239;
void* __right_value300 = (void*)0;
struct CVALUE* come_value_392;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct buffer* method_block2_393;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* method_block_type_394;
void* __right_value305 = (void*)0;
char* class_name_398;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sClass* current_stack_frame_struct_402;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c3_403=0;
char* Err_404=0;
_Bool __result_obj__246;
void* __right_value310 = (void*)0;
struct sType* result_type_405;
struct list$1sType$ph* param_types_406;
struct list$1char$ph* param_names_407;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct buffer* all_alhabet_sname_408;
char* p_409;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
int i_410;
struct list$1sType$ph* o2_saved_411;
struct sType* it_414;
struct sType* param_type_417;
void* __right_value315 = (void*)0;
char* param_name_418;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* param_name_419;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* param_name_420;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct buffer* source3_421;
char* p_422;
char* head_423;
int sline_424;
struct buffer* __dec_obj60;
void* __right_value322 = (void*)0;
struct sNode* node_425;
_Bool Value_426;
_Bool __result_obj__253;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* method_block_name_427;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct CVALUE* come_value2_428;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sFun* fun2_429;
void* __right_value329 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c4_432=0;
char* Err_433=0;
_Bool __result_obj__258;
struct sType* method_block_type2_434;
void* __right_value330 = (void*)0;
char* __dec_obj61;
void* __right_value331 = (void*)0;
struct sType* __dec_obj62;
struct buffer* __dec_obj63;
void* __right_value332 = (void*)0;
struct sType* __dec_obj64;
_Bool contained_method_generics_method_block_435;
struct list$1sType$ph* o2_saved_436;
struct sType* it_437;
void* __right_value333 = (void*)0;
_Bool __result_obj__260;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 62, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value296=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 62, "struct sCurrentNode*")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_387=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*c*/ come_call_finalizer3(__right_value296,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_389=node_compile(current_stack_frame_node_387,info);
    if(    !Value_389) {
        __result_obj__239 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_387) ? current_stack_frame_node_387 = come_decrement_ref_count(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__239;
    }
    else {
    }
    come_value_392=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_392));
    method_block2_393=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 71, "struct buffer*"))));
    method_block_type_394=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value303=list$1sType$ph$p_operator_load_element(fun->mParamTypes,-1)))));
    /*c*/ come_call_finalizer3(__right_value303,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    class_name_398=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value306=list$1sType$ph$p_operator_load_element(method_block_type_394->mParamTypes,0)))->mClass=((struct sClass*)(__right_value307=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_398)));
    /*c*/ come_call_finalizer3(__right_value306,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value307,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    current_stack_frame_struct_402=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value308=map$2char$phsClass$ph$p_operator_load_element(info->classes,class_name_398)));
    /*c*/ come_call_finalizer3(__right_value308,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_394->mClass->mName,"lambda")) {
        multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value309=err_msg(info,"This function does not have method block(%s)",fun_name)));
        come_exception_var_c3_403=multiple_assign_var4->v1;
        Err_404=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        ((Err_404)?(puts(Err_404),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value309,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__246 = (_Bool)0;
        (Err_404 = come_decrement_ref_count(Err_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_387) ? current_stack_frame_node_387 = come_decrement_ref_count(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_392,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_393,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_394,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__246;
        (Err_404 = come_decrement_ref_count(Err_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    result_type_405=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_394->mResultType));
    result_type_405->mStatic=(_Bool)0;
    param_types_406=method_block_type_394->mParamTypes;
    param_names_407=method_block_type_394->mParamNames;
    all_alhabet_sname_408=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 92, "struct buffer*"))));
    {
        p_409=info->sname;
        while(*p_409) {
            if(            xisalnum(*p_409)) {
                buffer_append_char(all_alhabet_sname_408,*p_409++);
            }
            else {
                p_409++;
            }
        }
    }
    buffer_append_format(method_block2_393,"%s method_block%d_%s(",((char*)(__right_value313=make_type_name_string(result_type_405,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value314=buffer_to_string(all_alhabet_sname_408))));
    (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    i_410=0;
    for(    o2_saved_411=(param_types_406),it_414=list$1sType$ph_begin((o2_saved_411));    !list$1sType$ph_end((o2_saved_411));    it_414=list$1sType$ph_next((o2_saved_411))    ){
        param_type_417=it_414;
        if(        i_410==0) {
            param_name_418=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_393,"%s",((char*)(__right_value316=make_define_var(param_type_417,param_name_418,(_Bool)0,info))));
            (__right_value316 = come_decrement_ref_count(__right_value316, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_418 = come_decrement_ref_count(param_name_418, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else if(        i_410==1) {
            param_name_419=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_393,"%s",((char*)(__right_value318=make_define_var_no_solved(param_type_417,param_name_419,(_Bool)0,(_Bool)0,info))));
            (__right_value318 = come_decrement_ref_count(__right_value318, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_419 = come_decrement_ref_count(param_name_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            param_name_420=(char*)come_increment_ref_count(xsprintf("it%d",i_410));
            buffer_append_format(method_block2_393,"%s",((char*)(__right_value320=make_define_var_no_solved(param_type_417,param_name_420,(_Bool)0,(_Bool)0,info))));
            (__right_value320 = come_decrement_ref_count(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (param_name_420 = come_decrement_ref_count(param_name_420, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        i_410!=list$1sType$ph_length(param_types_406)-1) {
            buffer_append_str(method_block2_393,",");
        }
        i_410++;
    }
    buffer_append_str(method_block2_393,")\n");
    buffer_append_str(method_block2_393,((char*)(__right_value321=buffer_to_string(method_block))));
    (__right_value321 = come_decrement_ref_count(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source3_421=(struct buffer*)come_increment_ref_count(info->source);
    p_422=info->p;
    head_423=info->head;
    sline_424=info->sline;
    __dec_obj60=info->source,
    info->source=(struct buffer*)come_increment_ref_count(method_block2_393);
    /*b*/ come_call_finalizer3(__dec_obj60,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_425=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_426=node_compile(node_425,info);
    if(    !Value_426) {
        __result_obj__253 = (_Bool)0;
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_387) ? current_stack_frame_node_387 = come_decrement_ref_count(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_392,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_393,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_394,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_405,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_408,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_421,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_425) ? node_425 = come_decrement_ref_count(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__253;
    }
    else {
    }
    method_block_name_427=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value323=buffer_to_string(all_alhabet_sname_408)))));
    (__right_value323 = come_decrement_ref_count(__right_value323, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_428=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 157, "struct CVALUE*"))));
    fun2_429=((struct sFun*)(__right_value328=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value327=__builtin_string(method_block_name_427))),((void*)0))));
    (__right_value327 = come_decrement_ref_count(__right_value327, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value328,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    fun2_429==((void*)0)) {
        multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value329=err_msg(info,"method block function not found(%s)",method_block_name_427)));
        come_exception_var_c4_432=multiple_assign_var5->v1;
        Err_433=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        ((Err_433)?(puts(Err_433),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value329,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __result_obj__258 = (_Bool)1;
        (Err_433 = come_decrement_ref_count(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((current_stack_frame_node_387) ? current_stack_frame_node_387 = come_decrement_ref_count(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(come_value_392,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block2_393,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_block_type_394,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_405,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(all_alhabet_sname_408,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(source3_421,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_425) ? node_425 = come_decrement_ref_count(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (method_block_name_427 = come_decrement_ref_count(method_block_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(come_value2_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__258;
        (Err_433 = come_decrement_ref_count(Err_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_block_type2_434=fun2_429->mLambdaType;
    __dec_obj61=come_value2_428->c_value,
    come_value2_428->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_427));
    __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj62=come_value2_428->type,
    come_value2_428->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_434));
    /*b*/ come_call_finalizer3(__dec_obj62,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_428->var=((void*)0);
    list$1CVALUE$ph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_428));
    __dec_obj63=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source3_421);
    /*b*/ come_call_finalizer3(__dec_obj63,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_422;
    info->head=head_423;
    info->sline=sline_424;
    info->current_stack_frame_struct=current_stack_frame_struct_402;
    __dec_obj64=info->come_method_block_function_result_type,
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    /*b*/ come_call_finalizer3(__dec_obj64,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    contained_method_generics_method_block_435=(_Bool)0;
    for(    o2_saved_436=(param_types_406),it_437=list$1sType$ph_begin((o2_saved_436));    !list$1sType$ph_end((o2_saved_436));    it_437=list$1sType$ph_next((o2_saved_436))    ){
        if(        is_contained_method_generics_types(it_437,info)) {
            contained_method_generics_method_block_435=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_405,info)) {
        contained_method_generics_method_block_435=(_Bool)1;
    }
    if(    contained_method_generics_method_block_435) {
        map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value333=__builtin_string(method_block_name_427))));
        (__right_value333 = come_decrement_ref_count(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    __result_obj__260 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_params,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((current_stack_frame_node_387) ? current_stack_frame_node_387 = come_decrement_ref_count(current_stack_frame_node_387, ((struct sNode*)current_stack_frame_node_387)->finalize, ((struct sNode*)current_stack_frame_node_387)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(come_value_392,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block2_393,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_type_394,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (class_name_398 = come_decrement_ref_count(class_name_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_405,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(all_alhabet_sname_408,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(source3_421,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_425) ? node_425 = come_decrement_ref_count(node_425, ((struct sNode*)node_425)->finalize, ((struct sNode*)node_425)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (method_block_name_427 = come_decrement_ref_count(method_block_name_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(come_value2_428,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
struct sCurrentNode* __result_obj__237;
void* __right_value297 = (void*)0;
struct sCurrentNode* result_388;
void* __right_value298 = (void*)0;
char* __dec_obj59;
struct sCurrentNode* __result_obj__238;
    if(    self==(void*)0) {
        __result_obj__237 = (void*)0;
        return __result_obj__237;
    }
    result_388=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode*"));
    if(    self!=((void*)0)) {
        result_388->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj59=result_388->sname,
        result_388->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sCurrentNode_clone", 5, "char*"));
        __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_388->sline_real=self->sline_real;
    }
    __result_obj__238 = result_388;
    /*c*/ come_call_finalizer3(result_388,sCurrentNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__238;
}

static void list$1CVALUE$ph$p_finalize(struct list$1CVALUE$ph* self){
struct list_item$1CVALUE$ph* it_390;
struct list_item$1CVALUE$ph* prev_it_391;
    it_390=self->head;
    while(it_390!=((void*)0)) {
        prev_it_391=it_390;
        it_390=it_390->next;
        /*c*/ come_call_finalizer3(prev_it_391,list_item$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1CVALUE$ph$p_finalize(struct list_item$1CVALUE$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_395;
int i_396;
struct sType* __result_obj__240;
struct sType* default_value_397;
struct sType* __result_obj__241;
default_value_397 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_395=self->head;
    i_396=0;
    while(it_395!=((void*)0)) {
        if(        position==i_396) {
            __result_obj__240 = come_increment_ref_count(it_395->item);
            /*c*/ come_call_finalizer3(__result_obj__240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__240;
        }
        it_395=it_395->next;
        i_396++;
    }
    memset(&default_value_397,0,sizeof(struct sType*));
    __result_obj__241 = come_increment_ref_count(default_value_397);
    /*c*/ come_call_finalizer3(default_value_397,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__241,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__241;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_399;
unsigned int hash_400;
unsigned int it_401;
struct sClass* __result_obj__242;
struct sClass* __result_obj__243;
struct sClass* __result_obj__244;
struct sClass* __result_obj__245;
default_value_399 = (void*)0;
    memset(&default_value_399,0,sizeof(struct sClass*));
    hash_400=string_get_hash_key(((char*)key))%self->size;
    it_401=hash_400;
    while((_Bool)1) {
        if(        self->item_existance[it_401]) {
            if(            string_equals(self->keys[it_401],key)) {
                __result_obj__242 = come_increment_ref_count(self->items[it_401]);
                /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__242,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__242;
            }
            it_401++;
            if(            it_401>=self->size) {
                it_401=0;
            }
            else if(            it_401==hash_400) {
                __result_obj__243 = come_increment_ref_count(default_value_399);
                /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__243,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__243;
            }
        }
        else {
            __result_obj__244 = come_increment_ref_count(default_value_399);
            /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__244,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__244;
        }
    }
    __result_obj__245 = come_increment_ref_count(default_value_399);
    /*c*/ come_call_finalizer3(default_value_399,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__245,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__245;
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_412;
struct sType* __result_obj__247;
struct sType* __result_obj__248;
struct sType* result_413;
struct sType* __result_obj__249;
result_412 = (void*)0;
result_413 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_412,0,sizeof(struct sType*));
        __result_obj__247 = result_412;
        return __result_obj__247;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__248 = self->it->item;
        return __result_obj__248;
    }
    memset(&result_413,0,sizeof(struct sType*));
    __result_obj__249 = result_413;
    return __result_obj__249;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_415;
struct sType* __result_obj__250;
struct sType* __result_obj__251;
struct sType* result_416;
struct sType* __result_obj__252;
result_415 = (void*)0;
result_416 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_415,0,sizeof(struct sType*));
        __result_obj__250 = result_415;
        return __result_obj__250;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__251 = self->it->item;
        return __result_obj__251;
    }
    memset(&result_416,0,sizeof(struct sType*));
    __result_obj__252 = result_416;
    return __result_obj__252;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_430;
unsigned int it_431;
struct sFun* __result_obj__254;
struct sFun* __result_obj__255;
struct sFun* __result_obj__256;
struct sFun* __result_obj__257;
    hash_430=string_get_hash_key(((char*)key))%self->size;
    it_431=hash_430;
    while((_Bool)1) {
        if(        self->item_existance[it_431]) {
            if(            string_equals(self->keys[it_431],key)) {
                __result_obj__254 = come_increment_ref_count(self->items[it_431]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__254,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__254;
            }
            it_431++;
            if(            it_431>=self->size) {
                it_431=0;
            }
            else if(            it_431==hash_430) {
                __result_obj__255 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__255,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__255;
            }
        }
        else {
            __result_obj__256 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__256,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__256;
        }
    }
    __result_obj__257 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__257,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__257;
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
unsigned int hash_438;
unsigned int it_439;
struct map$2char$phsFun$ph* __result_obj__259;
    hash_438=string_get_hash_key(((char*)key))%self->size;
    it_439=hash_438;
    while((_Bool)1) {
        if(        self->item_existance[it_439]) {
            if(            string_equals(self->keys[it_439],key)) {
                list$1char$ph_remove(self->key_list,self->keys[it_439]);
                self->item_existance[it_439]=(_Bool)0;
                if(                1) {
                    (self->keys[it_439] = come_decrement_ref_count(self->keys[it_439], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                self->keys[it_439]=((void*)0);
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_439],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                self->items[it_439]=((void*)0);
                self->len--;
                break;
            }
            it_439++;
            if(            it_439>=self->size) {
                it_439=0;
            }
            else if(            it_439==hash_438) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result_obj__259 = self;
    return __result_obj__259;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj65;
void* __right_value336 = (void*)0;
char* __dec_obj66;
void* __right_value347 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj72;
void* __right_value348 = (void*)0;
struct buffer* __dec_obj73;
void* __right_value349 = (void*)0;
struct list$1sType$ph* __dec_obj74;
struct sMethodCallNode* __result_obj__267;
    ((struct sNodeBase*)(__right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value334,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj65=self->obj,
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __dec_obj66=self->fun_name,
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj72=self->params,
    self->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, params));
    /*b*/ come_call_finalizer3(__dec_obj72,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj73=self->method_block,
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    /*b*/ come_call_finalizer3(__dec_obj73,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj74=self->method_generics_types,
    self->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj74,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result_obj__267 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__267,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__267;
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
void* __right_value350 = (void*)0;
char* __result_obj__268;
    __result_obj__268 = come_increment_ref_count(((char*)(__right_value350=__builtin_string("sMethodCallNode"))));
    (__right_value350 = come_decrement_ref_count(__right_value350, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__268 = come_decrement_ref_count(__result_obj__268, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__268;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_450;
struct list$1tuple2$2char$phsNode$ph$ph* params_451;
struct sNode* obj_452;
struct buffer* method_block_453;
int method_block_sline_454;
_Bool no_infference_method_generics_455;
struct list$1sType$ph* method_generics_types_456;
_Bool recursive_457;
struct list$1sType$ph* method_generics_types_before_458;
struct list$1sType$ph* __dec_obj75;
void* __right_value351 = (void*)0;
struct list$1sType$ph* __dec_obj76;
_Bool Value_459;
_Bool __result_obj__269;
void* __right_value352 = (void*)0;
struct CVALUE* obj_value_460;
void* __right_value353 = (void*)0;
struct sType* obj_type_461;
_Bool no_output_come_code_462;
struct sType* type_463;
void* __right_value354 = (void*)0;
char* none_generics_name_464;
void* __right_value355 = (void*)0;
char* fun_name2_465;
void* __right_value356 = (void*)0;
char* fun_name3_466;
void* __right_value357 = (void*)0;
struct sGenericsFun* generics_fun_467;
_Bool method_generics_468;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var6 = (void*)0;
char* name_469=0;
struct sGenericsFun* gfun_470=0;
char* generics_fun_name_471;
void* __right_value360 = (void*)0;
struct sFun* fun_472;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1CVALUE$ph* come_params_473;
_Bool no_output_come_code_474;
_Bool __result_obj__271;
void* __right_value363 = (void*)0;
struct CVALUE* method_block_node_475;
void* __right_value364 = (void*)0;
struct sType* method_block_lambda_type_479;
void* __right_value365 = (void*)0;
struct sType* method_block_result_type_480;
void* __right_value366 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_481;
struct sType* generics_fun_method_block_result_type_482;
int method_generics_num_483;
void* __right_value370 = (void*)0;
int n_492;
struct list$1sType$ph* o2_saved_493;
struct sType* it_494;
int method_generics_num_495;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct list$1CVALUE$ph* come_params_496;
int i_497;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_498;
struct tuple2$2char$phsNode$ph* it_501;
struct tuple2$2char$phsNode$ph* multiple_assign_var7 = (void*)0;
char* label_504=0;
struct sNode* node_505=0;
_Bool Value_506;
_Bool __result_obj__283;
void* __right_value375 = (void*)0;
struct CVALUE* come_value_507;
int method_generics_num_508;
void* __right_value376 = (void*)0;
struct list$1sType$ph* o2_saved_509;
struct sType* it_510;
int method_generics_num_511;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1CVALUE$ph* come_params_512;
int i_513;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_514;
struct tuple2$2char$phsNode$ph* it_515;
struct tuple2$2char$phsNode$ph* multiple_assign_var8 = (void*)0;
char* label_516=0;
struct sNode* node_517=0;
_Bool Value_518;
_Bool __result_obj__284;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_519;
int method_generics_num_520;
void* __right_value382 = (void*)0;
int n_521;
struct list$1sType$ph* o2_saved_522;
struct sType* it_523;
int method_generics_num_524;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sClass* klass_525;
_Bool calling_dynamic_method_526;
struct sType* lambda_type_527;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_528;
struct tuple2$2char$phsType$ph* it_531;
struct tuple2$2char$phsType$ph* multiple_assign_var9 = (void*)0;
char* field_name_534=0;
struct sType* field_type_535=0;
void* __right_value385 = (void*)0;
struct sType* result_type_536;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct list$1CVALUE$ph* come_params_537;
int i_538;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_539;
struct tuple2$2char$phsNode$ph* it_540;
struct tuple2$2char$phsNode$ph* multiple_assign_var10 = (void*)0;
char* label_541=0;
struct sNode* node_542=0;
_Bool Value_543;
_Bool __result_obj__291;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_544;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var11 = (void*)0;
_Bool come_exception_var_1_545=0;
char* Err_546=0;
_Bool _if_conditional2;
_Bool __result_obj__292;
void* __right_value394 = (void*)0;
_Bool _if_conditional3;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct buffer* buf_547;
int j_548;
struct list$1CVALUE$ph* o2_saved_549;
struct CVALUE* it_552;
void* __right_value398 = (void*)0;
char* __dec_obj81;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct CVALUE* come_value2_555;
void* __right_value401 = (void*)0;
char* __dec_obj82;
void* __right_value402 = (void*)0;
struct sType* result_type2_556;
void* __right_value403 = (void*)0;
struct sType* __dec_obj83;
struct list$1sType$ph* __dec_obj84;
struct sGenericsFun* generics_fun_557;
char* generics_fun_name_558;
struct sFun* fun_559;
void* __right_value404 = (void*)0;
char* __dec_obj85;
struct sClass* klass_560;
void* __right_value405 = (void*)0;
_Bool _while_condtional1;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
char* __dec_obj86;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var12 = (void*)0;
char* name_561=0;
struct sGenericsFun* gfun_562=0;
char* __dec_obj87;
void* __right_value412 = (void*)0;
char* none_generics_name_563;
void* __right_value413 = (void*)0;
char* fun_name3_564;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var13 = (void*)0;
char* name_565=0;
struct sGenericsFun* gfun_566=0;
char* __dec_obj88;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct tuple2$2char$phsGenericsFun$p* multiple_assign_var14 = (void*)0;
char* name_567=0;
struct sGenericsFun* gfun_568=0;
char* __dec_obj89;
int i_569;
void* __right_value418 = (void*)0;
char* new_fun_name_570;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj90;
struct sType* obj_array_type_574;
void* __right_value422 = (void*)0;
char* array_method_name_575;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
char* __dec_obj91;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
char* __dec_obj92;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_2_576=0;
char* Err_577=0;
_Bool _if_conditional4;
_Bool __result_obj__303;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __dec_obj93;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct sClass* klass_578;
void* __right_value439 = (void*)0;
_Bool _while_condtional2;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* __dec_obj94;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var16 = (void*)0;
struct sFun* fun2_579=0;
char* real_fun_name_580=0;
char* __dec_obj95;
void* __right_value445 = (void*)0;
struct tuple2$2sFun$pchar$ph* multiple_assign_var17 = (void*)0;
struct sFun* fun2_581=0;
char* real_fun_name_582=0;
char* __dec_obj96;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* original_obj_type_fun_name_583;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* __dec_obj97;
void* __right_value450 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var18 = (void*)0;
int come_exception_var_3_584=0;
char* Err_585=0;
_Bool _if_conditional5;
_Bool __result_obj__304;
void* __right_value451 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var19 = (void*)0;
int come_exception_var_4_586=0;
char* Err_587=0;
_Bool _if_conditional6;
_Bool __result_obj__305;
void* __right_value452 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_5_588=0;
char* Err_589=0;
_Bool _if_conditional7;
_Bool __result_obj__306;
void* __right_value453 = (void*)0;
struct sType* result_type_590;
_Bool in_exception_value_591;
void* __right_value461 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sNode* new_node_592;
_Bool Value_594;
_Bool __result_obj__309;
_Bool __result_obj__310;
_Bool in_exception_value_595;
void* __right_value464 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sNode* new_node_596;
_Bool Value_597;
_Bool __result_obj__311;
_Bool __result_obj__312;
void* __right_value467 = (void*)0;
struct sType* result_type2_598;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1sType$ph* param_types_599;
struct list$1sType$ph* o2_saved_600;
struct sType* it_601;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* it2_602;
struct sType* no_solved_obj_type_603;
void* __right_value472 = (void*)0;
struct sType* it3_604;
void* __right_value473 = (void*)0;
struct list$1sType$ph* type_checking_param_types_605;
int n_606;
struct list$1sType$ph* o2_saved_607;
struct sType* it_608;
struct sType* no_solved_obj_type_609;
void* __right_value474 = (void*)0;
struct sType* it3_610;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1CVALUE$ph* come_params_611;
int i_612;
_Bool first_param_616;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_617;
struct tuple2$2char$phsNode$ph* it_618;
struct tuple2$2char$phsNode$ph* multiple_assign_var21 = (void*)0;
char* label_619=0;
struct sNode* node_620=0;
int n_621;
struct list$1char$ph* o2_saved_622;
char* it_623;
_Bool Value_624;
_Bool __result_obj__314;
void* __right_value480 = (void*)0;
struct CVALUE* come_value_625;
void* __right_value481 = (void*)0;
_Bool _if_conditional8;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var22 = (void*)0;
_Bool come_exception_var_6_626=0;
char* Err_627=0;
_Bool _if_conditional9;
_Bool __result_obj__315;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
_Bool _if_conditional10;
void* __right_value489 = (void*)0;
int i_633;
struct list$1tuple2$2char$phsNode$ph$ph* o2_saved_634;
struct tuple2$2char$phsNode$ph* it_635;
struct tuple2$2char$phsNode$ph* multiple_assign_var23 = (void*)0;
char* label_636=0;
struct sNode* node_637=0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var24 = (void*)0;
_Bool come_exception_var_7_638=0;
char* Err_639=0;
_Bool _if_conditional11;
_Bool __result_obj__318;
void* __right_value495 = (void*)0;
_Bool _if_conditional12;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
_Bool _elif_conditional1;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_8_643=0;
char* Err_644=0;
_Bool _if_conditional13;
_Bool __result_obj__321;
void* __right_value500 = (void*)0;
_Bool _if_conditional14;
_Bool Value_645;
_Bool __result_obj__322;
void* __right_value501 = (void*)0;
struct CVALUE* come_value_646;
void* __right_value502 = (void*)0;
_Bool _if_conditional15;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var26 = (void*)0;
_Bool come_exception_var_9_647=0;
char* Err_648=0;
_Bool _if_conditional16;
_Bool __result_obj__323;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
_Bool _if_conditional17;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
_Bool _if_conditional18;
struct sType* obj_array_type_649;
void* __right_value512 = (void*)0;
char* array_method_name_650;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct buffer* buf_651;
int i_652;
struct list$1sNode$ph* o2_saved_653;
struct sNode* it_656;
_Bool Value_659;
void* __right_value515 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_10_660=0;
char* Err_661=0;
_Bool _if_conditional19;
_Bool __result_obj__330;
void* __right_value516 = (void*)0;
struct CVALUE* come_value_662;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct CVALUE* come_value_663;
void* __right_value519 = (void*)0;
char* __dec_obj108;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sType* __dec_obj109;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct buffer* buf_667;
int i_668;
struct list$1sNode$ph* o2_saved_669;
struct sNode* it_670;
_Bool Value_671;
void* __right_value531 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_11_672=0;
char* Err_673=0;
_Bool _if_conditional20;
_Bool __result_obj__332;
void* __right_value532 = (void*)0;
struct CVALUE* come_value_674;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct CVALUE* come_value_675;
void* __right_value535 = (void*)0;
char* __dec_obj113;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj114;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct buffer* buf_676;
int i_677;
struct list$1sNode$ph* o2_saved_678;
struct sNode* it_679;
_Bool Value_680;
void* __right_value544 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_12_681=0;
char* Err_682=0;
_Bool _if_conditional21;
_Bool __result_obj__333;
void* __right_value545 = (void*)0;
struct CVALUE* come_value_683;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct CVALUE* come_value_684;
void* __right_value548 = (void*)0;
char* __dec_obj115;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __dec_obj116;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct buffer* buf_685;
int i_686;
struct list$1sNode$ph* o2_saved_687;
struct sNode* it_688;
_Bool Value_689;
void* __right_value557 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var30 = (void*)0;
int come_exception_var_13_690=0;
char* Err_691=0;
_Bool _if_conditional22;
_Bool __result_obj__334;
void* __right_value558 = (void*)0;
struct CVALUE* come_value_692;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct CVALUE* come_value_693;
void* __right_value561 = (void*)0;
char* __dec_obj117;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sType* __dec_obj118;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
char* default_param_694;
void* __right_value570 = (void*)0;
char* param_name_695;
void* __right_value571 = (void*)0;
_Bool _if_conditional23;
struct buffer* source_696;
char* p_697;
char* head_698;
int sline_699;
void* __right_value572 = (void*)0;
struct buffer* __dec_obj119;
void* __right_value573 = (void*)0;
struct sNode* node_700;
_Bool Value_701;
_Bool __result_obj__335;
struct buffer* __dec_obj120;
void* __right_value574 = (void*)0;
struct CVALUE* come_value_702;
void* __right_value575 = (void*)0;
_Bool _if_conditional24;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var31 = (void*)0;
_Bool come_exception_var_14_703=0;
char* Err_704=0;
_Bool _if_conditional25;
_Bool __result_obj__336;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
_Bool _if_conditional26;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
_Bool _if_conditional27;
void* __right_value585 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var32 = (void*)0;
int come_exception_var_15_705=0;
char* Err_706=0;
_Bool _if_conditional28;
_Bool __result_obj__337;
_Bool __result_obj__338;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct buffer* buf_707;
int j_708;
struct list$1CVALUE$ph* o2_saved_709;
struct CVALUE* it_710;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct CVALUE* come_value2_711;
void* __right_value590 = (void*)0;
char* __dec_obj121;
void* __right_value591 = (void*)0;
struct sType* __dec_obj122;
void* __right_value592 = (void*)0;
char* __dec_obj123;
void* __right_value593 = (void*)0;
struct list$1sType$ph* __dec_obj124;
_Bool __result_obj__339;
    fun_name_450=(char*)come_increment_ref_count(self->fun_name);
    params_451=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(self->params);
    obj_452=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_453=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_454=self->method_block_sline;
    no_infference_method_generics_455=self->no_infference_method_generics;
    method_generics_types_456=(struct list$1sType$ph*)come_increment_ref_count(self->method_generics_types);
    recursive_457=self->recursive;
    method_generics_types_before_458=((void*)0);
    __dec_obj75=method_generics_types_before_458,
    method_generics_types_before_458=(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types);
    /*b*/ come_call_finalizer3(__dec_obj75,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj76=info->method_generics_types,
    info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
    /*b*/ come_call_finalizer3(__dec_obj76,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    Value_459=node_compile(obj_452,info);
    if(    !Value_459) {
        __result_obj__269 = (_Bool)0;
        (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__269;
    }
    else {
    }
    obj_value_460=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    obj_type_461=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_460->type));
    if(    !no_infference_method_generics_455) {
        no_output_come_code_462=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_463=(struct sType*)come_increment_ref_count(obj_type_461);
        none_generics_name_464=(char*)come_increment_ref_count(get_none_generics_name(type_463->mClass->mName));
        fun_name2_465=(char*)come_increment_ref_count(create_method_name(type_463,(_Bool)0,fun_name_450,info,(_Bool)1));
        fun_name3_466=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_464,fun_name_450));
        generics_fun_467=((struct sGenericsFun*)(__right_value357=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_466,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value357,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_467) {
            method_generics_468=list$1char$ph_length(generics_fun_467->mMethodGenericsTypeNames)>0;
            if(            method_generics_468&&list$1sType$ph_length(info->method_generics_types)==0) {
                multiple_assign_var6=((struct tuple2$2char$phsGenericsFun$p*)(__right_value359=make_generics_function(obj_type_461,(char*)come_increment_ref_count(__builtin_string(fun_name_450)),info,(_Bool)1)));
                name_469=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                gfun_470=multiple_assign_var6->v2;
                /*c*/ come_call_finalizer3(__right_value359,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                generics_fun_name_471=(char*)come_increment_ref_count(name_469);
                fun_472=((struct sFun*)(__right_value360=map$2char$phsFun$ph_at(info->funcs,generics_fun_name_471,((void*)0))));
                /*c*/ come_call_finalizer3(__right_value360,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                come_params_473=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 290, "struct list$1CVALUE$ph*"))));
                if(                method_block_453) {
                    no_output_come_code_474=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_453,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_473),fun_472,fun_name3_466,method_block_sline_454,info,(_Bool)1)) {
                        __result_obj__271 = (_Bool)0;
                        (name_469 = come_decrement_ref_count(name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_471 = come_decrement_ref_count(generics_fun_name_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_params_473,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_463,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (none_generics_name_464 = come_decrement_ref_count(none_generics_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name2_465 = come_decrement_ref_count(fun_name2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name3_466 = come_decrement_ref_count(fun_name3_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__271;
                    }
                    info->no_output_come_code=no_output_come_code_474;
                    method_block_node_475=((struct CVALUE*)(__right_value363=list$1CVALUE$ph$p_operator_load_element(come_params_473,-1)));
                    /*c*/ come_call_finalizer3(__right_value363,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    method_block_lambda_type_479=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_475->type));
                    method_block_result_type_480=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_481=((struct sType*)(__right_value366=list$1sType$ph$p_operator_load_element(generics_fun_467->mParamTypes,-1)));
                    /*c*/ come_call_finalizer3(__right_value366,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    generics_fun_method_block_result_type_482=generics_fun_method_block_lambda_type_481->mResultType;
                    if(                    generics_fun_method_block_result_type_482->mClass->mMethodGenerics) {
                        method_generics_num_483=generics_fun_method_block_result_type_482->mClass->mMethodGenericsNum;
                        list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_483,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_480)));
                    }
                    n_492=0;
                    for(                    o2_saved_493=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_method_block_lambda_type_481->mParamTypes)),it_494=list$1sType$ph_begin((o2_saved_493));                    !list$1sType$ph_end((o2_saved_493));                    it_494=list$1sType$ph_next((o2_saved_493))                    ){
                        if(                        it_494->mClass->mMethodGenerics) {
                            method_generics_num_495=it_494->mClass->mMethodGenericsNum;
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_495,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value371=list$1sType$ph$p_operator_load_element(method_block_lambda_type_479->mParamTypes,n_492))))));
                            /*c*/ come_call_finalizer3(__right_value371,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        n_492++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_493,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_params_496=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 319, "struct list$1CVALUE$ph*"))));
                    i_497=0;
                    for(                    o2_saved_498=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_451)),it_501=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_498));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_498));                    it_501=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_498))                    ){
                        multiple_assign_var7=it_501;
                        label_504=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                        node_505=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
                        if(                        i_497==0) {
                            list$1CVALUE$ph_push_back(come_params_496,(struct CVALUE*)come_increment_ref_count(obj_value_460));
                            i_497++;
                        }
                        else {
                            Value_506=node_compile(node_505,info);
                            if(                            !Value_506) {
                                __result_obj__283 = (_Bool)0;
                                (label_504 = come_decrement_ref_count(label_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_505) ? node_505 = come_decrement_ref_count(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_498,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_lambda_type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_block_result_type_480,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_496,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_469 = come_decrement_ref_count(name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_471 = come_decrement_ref_count(generics_fun_name_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_473,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_463,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_464 = come_decrement_ref_count(none_generics_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_465 = come_decrement_ref_count(fun_name2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_466 = come_decrement_ref_count(fun_name3_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__283;
                            }
                            else {
                            }
                            come_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            list$1CVALUE$ph_push_back(come_params_496,(struct CVALUE*)come_increment_ref_count(come_value_507));
                            /*c*/ come_call_finalizer3(come_value_507,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_504 = come_decrement_ref_count(label_504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_505) ? node_505 = come_decrement_ref_count(node_505, ((struct sNode*)node_505)->finalize, ((struct sNode*)node_505)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_498,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_467->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_508=generics_fun_467->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_508,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_492=0;
                    for(                    o2_saved_509=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_467->mParamTypes)),it_510=list$1sType$ph_begin((o2_saved_509));                    !list$1sType$ph_end((o2_saved_509));                    it_510=list$1sType$ph_next((o2_saved_509))                    ){
                        if(                        it_510->mClass->mMethodGenerics) {
                            method_generics_num_511=it_510->mClass->mMethodGenericsNum;
                            if(                            n_492<list$1CVALUE$ph_length(come_params_496)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_511,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value377=list$1CVALUE$ph$p_operator_load_element(come_params_496,n_492)))->type)));
                                /*c*/ come_call_finalizer3(__right_value377,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_492++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_509,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_lambda_type_479,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_block_result_type_480,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_496,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    come_params_512=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 357, "struct list$1CVALUE$ph*"))));
                    i_513=0;
                    for(                    o2_saved_514=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_451)),it_515=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_514));                    !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_514));                    it_515=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_514))                    ){
                        multiple_assign_var8=it_515;
                        label_516=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                        node_517=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
                        if(                        i_513==0) {
                            list$1CVALUE$ph_push_back(come_params_512,(struct CVALUE*)come_increment_ref_count(obj_value_460));
                            i_513++;
                        }
                        else {
                            Value_518=node_compile(node_517,info);
                            if(                            !Value_518) {
                                __result_obj__284 = (_Bool)0;
                                (label_516 = come_decrement_ref_count(label_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                ((node_517) ? node_517 = come_decrement_ref_count(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(o2_saved_514,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_512,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (name_469 = come_decrement_ref_count(name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_471 = come_decrement_ref_count(generics_fun_name_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(come_params_473,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_463,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (none_generics_name_464 = come_decrement_ref_count(none_generics_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name2_465 = come_decrement_ref_count(fun_name2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name3_466 = come_decrement_ref_count(fun_name3_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__284;
                            }
                            else {
                            }
                            come_value_519=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            list$1CVALUE$ph_push_back(come_params_512,(struct CVALUE*)come_increment_ref_count(come_value_519));
                            /*c*/ come_call_finalizer3(come_value_519,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        (label_516 = come_decrement_ref_count(label_516, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_517) ? node_517 = come_decrement_ref_count(node_517, ((struct sNode*)node_517)->finalize, ((struct sNode*)node_517)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_514,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    generics_fun_467->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_520=generics_fun_467->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_520,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_521=0;
                    for(                    o2_saved_522=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_467->mParamTypes)),it_523=list$1sType$ph_begin((o2_saved_522));                    !list$1sType$ph_end((o2_saved_522));                    it_523=list$1sType$ph_next((o2_saved_522))                    ){
                        if(                        it_523->mClass->mMethodGenerics) {
                            method_generics_num_524=it_523->mClass->mMethodGenericsNum;
                            if(                            n_521<list$1CVALUE$ph_length(come_params_512)) {
                                list$1sType$ph$p_operator_store_element(info->method_generics_types,method_generics_num_524,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value383=list$1CVALUE$ph$p_operator_load_element(come_params_512,n_521)))->type)));
                                /*c*/ come_call_finalizer3(__right_value383,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            }
                        }
                        n_521++;
                    }
                    /*c*/ come_call_finalizer3(o2_saved_522,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_512,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                map$2char$phsFun$ph_remove(info->funcs,generics_fun_name_471);
                (name_469 = come_decrement_ref_count(name_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_471 = come_decrement_ref_count(generics_fun_name_471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(come_params_473,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_462;
        /*c*/ come_call_finalizer3(type_463,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (none_generics_name_464 = come_decrement_ref_count(none_generics_name_464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name2_465 = come_decrement_ref_count(fun_name2_465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name3_466 = come_decrement_ref_count(fun_name3_466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    klass_525=obj_type_461->mClass;
    calling_dynamic_method_526=(_Bool)0;
    lambda_type_527=((void*)0);
    for(    o2_saved_528=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_525->mFields)),it_531=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_528));    !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_528));    it_531=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_528))    ){
        multiple_assign_var9=it_531;
        field_name_534=(char*)come_increment_ref_count(multiple_assign_var9->v1);
        field_type_535=(struct sType*)come_increment_ref_count(multiple_assign_var9->v2);
        if(        string_operator_equals(field_name_534,fun_name_450)&&string_operator_equals(field_type_535->mClass->mName,"lambda")) {
            calling_dynamic_method_526=(_Bool)1;
            lambda_type_527=field_type_535;
            (field_name_534 = come_decrement_ref_count(field_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_535,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            break;
        }
        (field_name_534 = come_decrement_ref_count(field_name_534, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(field_type_535,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_528,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    calling_dynamic_method_526) {
        result_type_536=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_527->mResultType));
        result_type_536->mStatic=(_Bool)0;
        come_params_537=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 419, "struct list$1CVALUE$ph*"))));
        i_538=0;
        for(        o2_saved_539=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_451)),it_540=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_539));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_539));        it_540=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_539))        ){
            multiple_assign_var10=it_540;
            label_541=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            node_542=(struct sNode*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            i_538==0) {
                list$1CVALUE$ph_push_back(come_params_537,(struct CVALUE*)come_increment_ref_count(obj_value_460));
                i_538++;
            }
            else {
                Value_543=node_compile(node_542,info);
                if(                !Value_543) {
                    __result_obj__291 = (_Bool)0;
                    (label_541 = come_decrement_ref_count(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_542) ? node_542 = come_decrement_ref_count(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_539,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_537,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__291;
                }
                else {
                }
                come_value_544=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                multiple_assign_var11=((struct tuple2$2bool$char$ph*)(__right_value393=check_assign_type(((char*)(__right_value391=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value389=string_to_string(fun_name_450))),((char*)(__right_value390=int_to_string(i_538)))))),((struct sType*)(__right_value392=list$1sType$ph$p_operator_load_element(lambda_type_527->mParamTypes,i_538-1))),come_value_544->type,come_value_544,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_1_545=multiple_assign_var11->v1;
                Err_546=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                if(                (_if_conditional2=(Err_546)),                (__right_value389 = come_decrement_ref_count(__right_value389, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value390 = come_decrement_ref_count(__right_value390, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value391 = come_decrement_ref_count(__right_value391, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value392,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value393,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional2) {
                    __result_obj__292 = (_Bool)1;
                    /*c*/ come_call_finalizer3(come_value_544,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (Err_546 = come_decrement_ref_count(Err_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_541 = come_decrement_ref_count(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_542) ? node_542 = come_decrement_ref_count(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_539,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_537,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__292;
                }
                else {
                }
                if(                (_if_conditional3=(((struct sType*)(__right_value394=list$1sType$ph$p_operator_load_element(lambda_type_527->mParamTypes,i_538-1)))->mHeap&&come_value_544->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value394,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional3) {
                    std_move(((struct sType*)(__right_value395=list$1sType$ph$p_operator_load_element(lambda_type_527->mParamTypes,i_538-1))),come_value_544->type,come_value_544,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value395,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_push_back(come_params_537,(struct CVALUE*)come_increment_ref_count(come_value_544));
                i_538++;
                /*c*/ come_call_finalizer3(come_value_544,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (Err_546 = come_decrement_ref_count(Err_546, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (label_541 = come_decrement_ref_count(label_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_542) ? node_542 = come_decrement_ref_count(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_539,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buf_547=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 450, "struct buffer*"))));
        buffer_append_format(buf_547,"%s->%s",obj_value_460->c_value,fun_name_450);
        buffer_append_str(buf_547,"(");
        j_548=0;
        for(        o2_saved_549=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_537)),it_552=list$1CVALUE$ph_begin((o2_saved_549));        !list$1CVALUE$ph_end((o2_saved_549));        it_552=list$1CVALUE$ph_next((o2_saved_549))        ){
            if(            j_548==0) {
                __dec_obj81=it_552->c_value,
                it_552->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_552->c_value));
                __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            buffer_append_str(buf_547,it_552->c_value);
            if(            j_548!=list$1CVALUE$ph_length(come_params_537)-1) {
                buffer_append_str(buf_547,",");
            }
            j_548++;
        }
        /*c*/ come_call_finalizer3(o2_saved_549,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_547,")");
        come_value2_555=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 470, "struct CVALUE*"))));
        __dec_obj82=come_value2_555->c_value,
        come_value2_555->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_547));
        __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        result_type2_556=(struct sType*)come_increment_ref_count(solve_generics(result_type_536,info->generics_type,info));
        __dec_obj83=come_value2_555->type,
        come_value2_555->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_556));
        /*b*/ come_call_finalizer3(__dec_obj83,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_555->type->mStatic=(_Bool)0;
        come_value2_555->var=((void*)0);
        if(        result_type2_556->mHeap) {
            append_object_to_right_values2(come_value2_555,(struct sType*)come_increment_ref_count(result_type2_556),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_555->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_555));
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj84=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_458);
        /*b*/ come_call_finalizer3(__dec_obj84,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=((void*)0);
        /*c*/ come_call_finalizer3(result_type_536,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_537,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_547,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_555,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_556,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else {
        generics_fun_557=((void*)0);
        generics_fun_name_558=((void*)0);
        fun_559=((void*)0);
        if(        string_operator_equals(fun_name_450,"super")) {
            __dec_obj85=fun_name_450,
            fun_name_450=(char*)come_increment_ref_count(create_non_method_name(obj_type_461,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            klass_560=obj_type_461->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value405=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_560->mParentClassName))))),            /*c*/ come_call_finalizer3(__right_value405,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _while_condtional1) {
                klass_560=((struct sClass*)(__right_value406=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_560->mParentClassName)));
                /*c*/ come_call_finalizer3(__right_value406,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj86=generics_fun_name_558,
                generics_fun_name_558=(char*)come_increment_ref_count(create_method_name_using_class(klass_560,(_Bool)0,fun_name_450,info,(_Bool)1));
                __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                fun_559=((struct sFun*)(__right_value409=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value408=__builtin_string(generics_fun_name_558))),((void*)0))));
                (__right_value408 = come_decrement_ref_count(__right_value408, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value409,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_559) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_461&&obj_type_461->mNoSolvedGenericsType&&list$1sType$ph_length(obj_type_461->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var12=((struct tuple2$2char$phsGenericsFun$p*)(__right_value411=make_generics_function(obj_type_461,(char*)come_increment_ref_count(__builtin_string(fun_name_450)),info,(_Bool)1)));
                name_561=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                gfun_562=multiple_assign_var12->v2;
                /*c*/ come_call_finalizer3(__right_value411,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj87=generics_fun_name_558,
                generics_fun_name_558=(char*)come_increment_ref_count(name_561);
                __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_557=gfun_562;
                (name_561 = come_decrement_ref_count(name_561, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            list$1sType$ph_length(info->method_generics_types)>0) {
                none_generics_name_563=(char*)come_increment_ref_count(get_none_generics_name(obj_type_461->mClass->mName));
                fun_name3_564=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_563,fun_name_450));
                multiple_assign_var13=((struct tuple2$2char$phsGenericsFun$p*)(__right_value415=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_564)),(struct list$1sType$ph*)come_increment_ref_count(info->method_generics_types),info)));
                name_565=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                gfun_566=multiple_assign_var13->v2;
                /*c*/ come_call_finalizer3(__right_value415,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj88=generics_fun_name_558,
                generics_fun_name_558=(char*)come_increment_ref_count(name_565);
                __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_557=gfun_566;
                (none_generics_name_563 = come_decrement_ref_count(none_generics_name_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name3_564 = come_decrement_ref_count(fun_name3_564, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (name_565 = come_decrement_ref_count(name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                multiple_assign_var14=((struct tuple2$2char$phsGenericsFun$p*)(__right_value417=make_generics_function(obj_type_461,(char*)come_increment_ref_count(__builtin_string(fun_name_450)),info,(_Bool)1)));
                name_567=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                gfun_568=multiple_assign_var14->v2;
                /*c*/ come_call_finalizer3(__right_value417,tuple2$2char$phsGenericsFun$p$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __dec_obj89=generics_fun_name_558,
                generics_fun_name_558=(char*)come_increment_ref_count(name_567);
                __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                generics_fun_557=gfun_568;
                (name_567 = come_decrement_ref_count(name_567, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            for(            i_569=128;            i_569>=1;            i_569--            ){
                new_fun_name_570=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_558,i_569));
                fun_559=((struct sFun*)(__right_value420=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value419=__builtin_string(new_fun_name_570))))));
                (__right_value419 = come_decrement_ref_count(__right_value419, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value420,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                fun_559!=((void*)0)) {
                    __dec_obj90=generics_fun_name_558,
                    generics_fun_name_558=(char*)come_increment_ref_count(__builtin_string(new_fun_name_570));
                    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    (new_fun_name_570 = come_decrement_ref_count(new_fun_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    break;
                }
                (new_fun_name_570 = come_decrement_ref_count(new_fun_name_570, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            if(            fun_559==((void*)0)) {
                obj_array_type_574=obj_type_461->mOriginalLoadVarType;
                if(                obj_array_type_574&&list$1sNode$ph_length(obj_array_type_574->mArrayNum)>0) {
                    array_method_name_575=(char*)come_increment_ref_count(create_method_name(obj_array_type_574,(_Bool)0,fun_name_450,info,(_Bool)0));
                    fun_559=((struct sFun*)(__right_value424=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value423=__builtin_string(array_method_name_575))),((void*)0))));
                    (__right_value423 = come_decrement_ref_count(__right_value423, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value424,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_559) {
                        __dec_obj91=generics_fun_name_558,
                        generics_fun_name_558=(char*)come_increment_ref_count(__builtin_string(array_method_name_575));
                        __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                    else {
                        fun_559=((struct sFun*)(__right_value427=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value426=__builtin_string(generics_fun_name_558))),((void*)0))));
                        (__right_value426 = come_decrement_ref_count(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value427,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_559==((void*)0)) {
                            __dec_obj92=generics_fun_name_558,
                            generics_fun_name_558=(char*)come_increment_ref_count(create_method_name(obj_type_461,(_Bool)0,((char*)(__right_value428=__builtin_string(fun_name_450))),info,(_Bool)1));
                            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (__right_value428 = come_decrement_ref_count(__right_value428, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_559=((struct sFun*)(__right_value431=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value430=__builtin_string(generics_fun_name_558))),((void*)0))));
                            (__right_value430 = come_decrement_ref_count(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value431,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            if(                            fun_559==((void*)0)) {
                                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value432=err_msg(info,"function not found(%s) at method(%s)(Z1)",generics_fun_name_558,info->come_fun->mName)));
                                come_exception_var_2_576=multiple_assign_var15->v1;
                                Err_577=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                                if(                                (_if_conditional4=(Err_577)),                                /*c*/ come_call_finalizer3(__right_value432,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                _if_conditional4) {
                                    __result_obj__303 = (_Bool)1;
                                    (Err_577 = come_decrement_ref_count(Err_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (array_method_name_575 = come_decrement_ref_count(array_method_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                    /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    return __result_obj__303;
                                }
                                else {
                                }
                                (Err_577 = come_decrement_ref_count(Err_577, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                        }
                    }
                    (array_method_name_575 = come_decrement_ref_count(array_method_name_575, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    fun_559=((struct sFun*)(__right_value434=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value433=__builtin_string(generics_fun_name_558))),((void*)0))));
                    (__right_value433 = come_decrement_ref_count(__right_value433, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value434,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    fun_559==((void*)0)) {
                        __dec_obj93=generics_fun_name_558,
                        generics_fun_name_558=(char*)come_increment_ref_count(create_method_name(obj_type_461,(_Bool)0,((char*)(__right_value435=__builtin_string(fun_name_450))),info,(_Bool)1));
                        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        (__right_value435 = come_decrement_ref_count(__right_value435, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        fun_559=((struct sFun*)(__right_value438=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value437=__builtin_string(generics_fun_name_558))),((void*)0))));
                        (__right_value437 = come_decrement_ref_count(__right_value437, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(__right_value438,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        fun_559==((void*)0)) {
                            klass_578=obj_type_461->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value439=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_578->mParentClassName))))),                            /*c*/ come_call_finalizer3(__right_value439,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _while_condtional2) {
                                klass_578=((struct sClass*)(__right_value440=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_578->mParentClassName)));
                                /*c*/ come_call_finalizer3(__right_value440,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                __dec_obj94=generics_fun_name_558,
                                generics_fun_name_558=(char*)come_increment_ref_count(create_method_name_using_class(klass_578,(_Bool)0,fun_name_450,info,(_Bool)1));
                                __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                fun_559=((struct sFun*)(__right_value443=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value442=__builtin_string(generics_fun_name_558))),((void*)0))));
                                (__right_value442 = come_decrement_ref_count(__right_value442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(__right_value443,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                if(                                fun_559) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_559==((void*)0)&&string_operator_equals(fun_name_450,"to_string")) {
                            multiple_assign_var16=((struct tuple2$2sFun$pchar$ph*)(__right_value444=create_to_string_automatically(obj_type_461,fun_name_450,info)));
                            fun2_579=multiple_assign_var16->v1;
                            real_fun_name_580=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                            /*c*/ come_call_finalizer3(__right_value444,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            fun_559=fun2_579;
                            __dec_obj95=generics_fun_name_558,
                            generics_fun_name_558=(char*)come_increment_ref_count(real_fun_name_580);
                            __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (real_fun_name_580 = come_decrement_ref_count(real_fun_name_580, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_559==((void*)0)&&string_operator_equals(fun_name_450,"equals")) {
                            multiple_assign_var17=((struct tuple2$2sFun$pchar$ph*)(__right_value445=create_equals_automatically(obj_type_461,fun_name_450,info)));
                            fun2_581=multiple_assign_var17->v1;
                            real_fun_name_582=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            /*c*/ come_call_finalizer3(__right_value445,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            fun_559=fun2_581;
                            __dec_obj96=generics_fun_name_558,
                            generics_fun_name_558=(char*)come_increment_ref_count(real_fun_name_582);
                            __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            (real_fun_name_582 = come_decrement_ref_count(real_fun_name_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_559==((void*)0)) {
                            original_obj_type_fun_name_583=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_461,(_Bool)0,((char*)(__right_value446=__builtin_string(fun_name_450))),info,(_Bool)1));
                            (__right_value446 = come_decrement_ref_count(__right_value446, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            fun_559=((struct sFun*)(__right_value449=map$2char$phsFun$ph_at(info->funcs,((char*)(__right_value448=__builtin_string(original_obj_type_fun_name_583))),((void*)0))));
                            (__right_value448 = come_decrement_ref_count(__right_value448, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(__right_value449,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            if(                            fun_559) {
                                __dec_obj97=generics_fun_name_558,
                                generics_fun_name_558=(char*)come_increment_ref_count(original_obj_type_fun_name_583);
                                __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            (original_obj_type_fun_name_583 = come_decrement_ref_count(original_obj_type_fun_name_583, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        fun_559==((void*)0)) {
                            multiple_assign_var18=((struct tuple2$2int$char$ph*)(__right_value450=err_msg(info,"function not found(%s) at method(%s)(Z2n)",generics_fun_name_558,info->come_fun->mName)));
                            come_exception_var_3_584=multiple_assign_var18->v1;
                            Err_585=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                            if(                            (_if_conditional5=(Err_585)),                            /*c*/ come_call_finalizer3(__right_value450,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional5) {
                                __result_obj__304 = (_Bool)1;
                                (Err_585 = come_decrement_ref_count(Err_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__304;
                            }
                            else {
                            }
                            (Err_585 = come_decrement_ref_count(Err_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                    }
                }
            }
        }
        if(        fun_559==((void*)0)) {
            multiple_assign_var19=((struct tuple2$2int$char$ph*)(__right_value451=err_msg(info,"function not found(%s) at method(%s)(ZY)",generics_fun_name_558,info->come_fun->mName)));
            come_exception_var_4_586=multiple_assign_var19->v1;
            Err_587=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            if(            (_if_conditional6=(Err_587)),            /*c*/ come_call_finalizer3(__right_value451,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional6) {
                __result_obj__305 = (_Bool)1;
                (Err_587 = come_decrement_ref_count(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__305;
            }
            else {
            }
            (Err_587 = come_decrement_ref_count(Err_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sType$ph_length(fun_559->mParamTypes)==0) {
            multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value452=err_msg(info,"Method require function parametor")));
            come_exception_var_5_588=multiple_assign_var20->v1;
            Err_589=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            (_if_conditional7=(Err_589)),            /*c*/ come_call_finalizer3(__right_value452,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional7) {
                __result_obj__306 = (_Bool)1;
                (Err_589 = come_decrement_ref_count(Err_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__306;
            }
            else {
            }
            (Err_589 = come_decrement_ref_count(Err_589, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        result_type_590=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_559->mResultType));
        if(        info->come_fun->mResultType->mException&&result_type_590->mException&&!info->in_exception_value) {
            in_exception_value_591=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 638, "struct sNode");
            _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value461=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMethodCallNode_finalize;
            _inf_value2->clone=(void*)sMethodCallNode_clone;
            _inf_value2->compile=(void*)sMethodCallNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sline_real=(void*)sNodeBase_sline_real;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sMethodCallNode_terminated;
            _inf_value2->kind=(void*)sMethodCallNode_kind;
            new_node_592=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(_inf_value2),info));
            /*c*/ come_call_finalizer3(__right_value461,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_594=node_compile(new_node_592,info);
            if(            !Value_594) {
                __result_obj__309 = (_Bool)0;
                ((new_node_592) ? new_node_592 = come_decrement_ref_count(new_node_592, ((struct sNode*)new_node_592)->finalize, ((struct sNode*)new_node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__309;
            }
            else {
            }
            info->in_exception_value=in_exception_value_591;
            __result_obj__310 = (_Bool)1;
            ((new_node_592) ? new_node_592 = come_decrement_ref_count(new_node_592, ((struct sNode*)new_node_592)->finalize, ((struct sNode*)new_node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__310;
            ((new_node_592) ? new_node_592 = come_decrement_ref_count(new_node_592, ((struct sNode*)new_node_592)->finalize, ((struct sNode*)new_node_592)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else if(        result_type_590->mException&&!info->in_exception_value) {
            in_exception_value_595=info->in_exception_value;
            info->in_exception_value=(_Bool)1;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 650, "struct sNode");
            _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count((((struct sMethodCallNode*)(__right_value464=come_call_cloner(sMethodCallNode_clone, self)))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMethodCallNode_finalize;
            _inf_value3->clone=(void*)sMethodCallNode_clone;
            _inf_value3->compile=(void*)sMethodCallNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sline_real=(void*)sNodeBase_sline_real;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sMethodCallNode_terminated;
            _inf_value3->kind=(void*)sMethodCallNode_kind;
            new_node_596=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(_inf_value3),info));
            /*c*/ come_call_finalizer3(__right_value464,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_597=node_compile(new_node_596,info);
            if(            !Value_597) {
                __result_obj__311 = (_Bool)0;
                ((new_node_596) ? new_node_596 = come_decrement_ref_count(new_node_596, ((struct sNode*)new_node_596)->finalize, ((struct sNode*)new_node_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__311;
            }
            else {
            }
            info->in_exception_value=in_exception_value_595;
            __result_obj__312 = (_Bool)1;
            ((new_node_596) ? new_node_596 = come_decrement_ref_count(new_node_596, ((struct sNode*)new_node_596)->finalize, ((struct sNode*)new_node_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__312;
            ((new_node_596) ? new_node_596 = come_decrement_ref_count(new_node_596, ((struct sNode*)new_node_596)->finalize, ((struct sNode*)new_node_596)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        result_type_590->mStatic=(_Bool)0;
        result_type2_598=(struct sType*)come_increment_ref_count(solve_generics(result_type_590,info->generics_type,info));
        param_types_599=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 665, "struct list$1sType$ph*"))));
        for(        o2_saved_600=(struct list$1sType$ph*)come_increment_ref_count((fun_559->mParamTypes)),it_601=list$1sType$ph_begin((o2_saved_600));        !list$1sType$ph_end((o2_saved_600));        it_601=list$1sType$ph_next((o2_saved_600))        ){
            if(            it_601==((void*)0)) {
                list$1sType$ph_push_back(param_types_599,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_601)));
            }
            else {
                it2_602=(struct sType*)come_increment_ref_count(solve_generics(it_601,info->generics_type,info));
                no_solved_obj_type_603=(struct sType*)come_increment_ref_count(obj_type_461->mNoSolvedGenericsType);
                it3_604=(struct sType*)come_increment_ref_count(solve_generics(it_601,no_solved_obj_type_603,info));
                list$1sType$ph_push_back(param_types_599,(struct sType*)come_increment_ref_count(it2_602));
                /*c*/ come_call_finalizer3(it2_602,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(no_solved_obj_type_603,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(it3_604,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(o2_saved_600,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type_checking_param_types_605=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_599));
        if(        generics_fun_557) {
            n_606=0;
            for(            o2_saved_607=(struct list$1sType$ph*)come_increment_ref_count((generics_fun_557->mParamTypes)),it_608=list$1sType$ph_begin((o2_saved_607));            !list$1sType$ph_end((o2_saved_607));            it_608=list$1sType$ph_next((o2_saved_607))            ){
                if(                it_608==((void*)0)) {
                }
                else {
                    no_solved_obj_type_609=(struct sType*)come_increment_ref_count(obj_type_461->mNoSolvedGenericsType);
                    it3_610=(struct sType*)come_increment_ref_count(solve_generics(it_608,no_solved_obj_type_609,info));
                    /*c*/ come_call_finalizer3(no_solved_obj_type_609,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(it3_610,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                n_606++;
            }
            /*c*/ come_call_finalizer3(o2_saved_607,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        come_params_611=(struct list$1CVALUE$ph*)come_increment_ref_count(list$1CVALUE$ph_initialize((struct list$1CVALUE$ph*)come_increment_ref_count((struct list$1CVALUE$ph*)come_calloc(1, sizeof(struct list$1CVALUE$ph)*(1), "20method.c", 695, "struct list$1CVALUE$ph*"))));
        for(        i_612=0;        i_612<list$1sType$ph_length(fun_559->mParamTypes)-(((method_block_453)?(2):(0)));        i_612++        ){
            list$1CVALUE$ph_add(come_params_611,((void*)0));
        }
        first_param_616=(_Bool)1;
        for(        o2_saved_617=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_451)),it_618=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_617));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_617));        it_618=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_617))        ){
            multiple_assign_var21=it_618;
            label_619=(char*)come_increment_ref_count(multiple_assign_var21->v1);
            node_620=(struct sNode*)come_increment_ref_count(multiple_assign_var21->v2);
            if(            first_param_616) {
                first_param_616=(_Bool)0;
            }
            else if(            label_619) {
                n_621=0;
                for(                o2_saved_622=(struct list$1char$ph*)come_increment_ref_count((fun_559->mParamNames)),it_623=list$1char$ph_begin((o2_saved_622));                !list$1char$ph_end((o2_saved_622));                it_623=list$1char$ph_next((o2_saved_622))                ){
                    if(                    string_operator_equals(label_619,it_623)) {
                        break;
                    }
                    n_621++;
                }
                /*c*/ come_call_finalizer3(o2_saved_622,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_624=node_compile(node_620,info);
                if(                !Value_624) {
                    __result_obj__314 = (_Bool)0;
                    (label_619 = come_decrement_ref_count(label_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_620) ? node_620 = come_decrement_ref_count(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_617,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__314;
                }
                else {
                }
                come_value_625=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional8=(((struct sType*)(__right_value481=list$1sType$ph$p_operator_load_element(param_types_599,n_621))))),                /*c*/ come_call_finalizer3(__right_value481,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional8) {
                    multiple_assign_var22=((struct tuple2$2bool$char$ph*)(__right_value486=check_assign_type(((char*)(__right_value484=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value482=string_to_string(fun_name_450))),((char*)(__right_value483=int_to_string(n_621)))))),((struct sType*)(__right_value485=list$1sType$ph$p_operator_load_element(type_checking_param_types_605,n_621))),come_value_625->type,come_value_625,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_6_626=multiple_assign_var22->v1;
                    Err_627=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    if(                    (_if_conditional9=(Err_627)),                    (__right_value482 = come_decrement_ref_count(__right_value482, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value483 = come_decrement_ref_count(__right_value483, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value484 = come_decrement_ref_count(__right_value484, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value485,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value486,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional9) {
                        __result_obj__315 = (_Bool)1;
                        (Err_627 = come_decrement_ref_count(Err_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_625,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (label_619 = come_decrement_ref_count(label_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_620) ? node_620 = come_decrement_ref_count(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(o2_saved_617,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__315;
                    }
                    else {
                    }
                    (Err_627 = come_decrement_ref_count(Err_627, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional10=(((struct sType*)(__right_value487=list$1sType$ph$p_operator_load_element(param_types_599,n_621)))&&((struct sType*)(__right_value488=list$1sType$ph$p_operator_load_element(param_types_599,n_621)))->mHeap&&come_value_625->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value487,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value488,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional10) {
                    std_move(((struct sType*)(__right_value489=list$1sType$ph$p_operator_load_element(param_types_599,n_621))),come_value_625->type,come_value_625,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value489,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_611,n_621,(struct CVALUE*)come_increment_ref_count(come_value_625));
                /*c*/ come_call_finalizer3(come_value_625,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_619 = come_decrement_ref_count(label_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_620) ? node_620 = come_decrement_ref_count(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_617,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        i_633=0;
        for(        o2_saved_634=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((params_451)),it_635=list$1tuple2$2char$phsNode$ph$ph_begin((o2_saved_634));        !list$1tuple2$2char$phsNode$ph$ph_end((o2_saved_634));        it_635=list$1tuple2$2char$phsNode$ph$ph_next((o2_saved_634))        ){
            multiple_assign_var23=it_635;
            label_636=(char*)come_increment_ref_count(multiple_assign_var23->v1);
            node_637=(struct sNode*)come_increment_ref_count(multiple_assign_var23->v2);
            if(            i_633==0) {
                multiple_assign_var24=((struct tuple2$2bool$char$ph*)(__right_value494=check_assign_type(((char*)(__right_value492=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value490=string_to_string(fun_name_450))),((char*)(__right_value491=int_to_string(i_633)))))),((struct sType*)(__right_value493=list$1sType$ph$p_operator_load_element(type_checking_param_types_605,i_633))),obj_value_460->type,obj_value_460,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                come_exception_var_7_638=multiple_assign_var24->v1;
                Err_639=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                if(                (_if_conditional11=(Err_639)),                (__right_value490 = come_decrement_ref_count(__right_value490, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value491 = come_decrement_ref_count(__right_value491, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                (__right_value492 = come_decrement_ref_count(__right_value492, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value493,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value494,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional11) {
                    __result_obj__318 = (_Bool)1;
                    (Err_639 = come_decrement_ref_count(Err_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (label_636 = come_decrement_ref_count(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_637) ? node_637 = come_decrement_ref_count(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_634,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__318;
                }
                else {
                }
                if(                (_if_conditional12=(((struct sType*)(__right_value495=list$1sType$ph$p_operator_load_element(param_types_599,i_633)))->mHeap&&obj_value_460->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value495,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional12) {
                    std_move(((struct sType*)(__right_value496=list$1sType$ph$p_operator_load_element(param_types_599,i_633))),obj_value_460->type,obj_value_460,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value496,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value497=list$1sType$ph$p_operator_load_element(param_types_599,i_633)))->mHeap&&!obj_value_460->type->mHeap&&!gComeGC)),                /*c*/ come_call_finalizer3(__right_value497,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _elif_conditional1) {
                    multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value499=err_msg(info,"require heap parametor(%s)",((char*)(__right_value498=list$1char$ph$p_operator_load_element(fun_559->mParamNames,i_633))))));
                    come_exception_var_8_643=multiple_assign_var25->v1;
                    Err_644=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                    if(                    (_if_conditional13=(Err_644)),                    (__right_value498 = come_decrement_ref_count(__right_value498, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value499,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional13) {
                        __result_obj__321 = (_Bool)1;
                        (Err_644 = come_decrement_ref_count(Err_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (Err_639 = come_decrement_ref_count(Err_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (label_636 = come_decrement_ref_count(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_637) ? node_637 = come_decrement_ref_count(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(o2_saved_634,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__321;
                    }
                    else {
                    }
                    (Err_644 = come_decrement_ref_count(Err_644, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1CVALUE$ph_replace(come_params_611,i_633,(struct CVALUE*)come_increment_ref_count(obj_value_460));
                i_633++;
                (Err_639 = come_decrement_ref_count(Err_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            label_636) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional14=(((struct CVALUE*)(__right_value500=list$1CVALUE$ph$p_operator_load_element(come_params_611,i_633)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value500,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional14) {
                        break;
                    }
                    else {
                        i_633++;
                    }
                }
                Value_645=node_compile(node_637,info);
                if(                !Value_645) {
                    __result_obj__322 = (_Bool)0;
                    (label_636 = come_decrement_ref_count(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_637) ? node_637 = come_decrement_ref_count(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(o2_saved_634,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__322;
                }
                else {
                }
                come_value_646=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                if(                (_if_conditional15=(((struct sType*)(__right_value502=list$1sType$ph$p_operator_load_element(param_types_599,i_633))))),                /*c*/ come_call_finalizer3(__right_value502,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional15) {
                    multiple_assign_var26=((struct tuple2$2bool$char$ph*)(__right_value507=check_assign_type(((char*)(__right_value505=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value503=string_to_string(fun_name_450))),((char*)(__right_value504=int_to_string(i_633)))))),((struct sType*)(__right_value506=list$1sType$ph$p_operator_load_element(type_checking_param_types_605,i_633))),come_value_646->type,come_value_646,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                    come_exception_var_9_647=multiple_assign_var26->v1;
                    Err_648=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                    if(                    (_if_conditional16=(Err_648)),                    (__right_value503 = come_decrement_ref_count(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value504 = come_decrement_ref_count(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    (__right_value505 = come_decrement_ref_count(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                    /*c*/ come_call_finalizer3(__right_value506,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value507,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional16) {
                        __result_obj__323 = (_Bool)1;
                        (Err_648 = come_decrement_ref_count(Err_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(come_value_646,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (label_636 = come_decrement_ref_count(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        ((node_637) ? node_637 = come_decrement_ref_count(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(o2_saved_634,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__323;
                    }
                    else {
                    }
                    (Err_648 = come_decrement_ref_count(Err_648, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                if(                (_if_conditional17=(((struct sType*)(__right_value508=list$1sType$ph$p_operator_load_element(param_types_599,i_633)))&&((struct sType*)(__right_value509=list$1sType$ph$p_operator_load_element(param_types_599,i_633)))->mHeap&&come_value_646->type->mHeap)),                /*c*/ come_call_finalizer3(__right_value508,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                /*c*/ come_call_finalizer3(__right_value509,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional17) {
                    std_move(((struct sType*)(__right_value510=list$1sType$ph$p_operator_load_element(param_types_599,i_633))),come_value_646->type,come_value_646,info,(_Bool)1);
                    /*c*/ come_call_finalizer3(__right_value510,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                list$1CVALUE$ph_replace(come_params_611,i_633,(struct CVALUE*)come_increment_ref_count(come_value_646));
                i_633++;
                /*c*/ come_call_finalizer3(come_value_646,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            (label_636 = come_decrement_ref_count(label_636, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_637) ? node_637 = come_decrement_ref_count(node_637, ((struct sNode*)node_637)->finalize, ((struct sNode*)node_637)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_634,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional18=(((struct CVALUE*)(__right_value511=list$1CVALUE$ph$p_operator_load_element(come_params_611,i_633)))==((void*)0))),            /*c*/ come_call_finalizer3(__right_value511,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
            _if_conditional18) {
                break;
            }
            else {
                i_633++;
            }
        }
        obj_array_type_649=obj_type_461->mOriginalLoadVarType;
        if(        obj_array_type_649&&list$1sNode$ph_length(obj_array_type_649->mArrayNum)>0) {
            array_method_name_650=(char*)come_increment_ref_count(create_method_name(obj_array_type_649,(_Bool)0,fun_name_450,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_558,array_method_name_650)) {
                if(                string_operator_equals(fun_name_450,"to_pointer")) {
                    buf_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 806, "struct buffer*"))));
                    i_652=0;
                    for(                    o2_saved_653=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_649->mArrayNum)),it_656=list$1sNode$ph_begin((o2_saved_653));                    !list$1sNode$ph_end((o2_saved_653));                    it_656=list$1sNode$ph_next((o2_saved_653))                    ){
                        Value_659=node_compile(it_656,info);
                        if(                        !Value_659) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value515=err_msg(info,"invalid array num")));
                            come_exception_var_10_660=multiple_assign_var27->v1;
                            Err_661=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            if(                            (_if_conditional19=(Err_661)),                            /*c*/ come_call_finalizer3(__right_value515,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional19) {
                                __result_obj__330 = (_Bool)1;
                                (Err_661 = come_decrement_ref_count(Err_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_653,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_651,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_650 = come_decrement_ref_count(array_method_name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__330;
                            }
                            else {
                            }
                            (Err_661 = come_decrement_ref_count(Err_661, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_662=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_651,"%s",come_value_662->c_value);
                        if(                        i_652!=list$1sNode$ph_length(obj_array_type_649->mArrayNum)-1) {
                            buffer_append_str(buf_651,"*");
                        }
                        i_652++;
                        /*c*/ come_call_finalizer3(come_value_662,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_653,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_663=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 826, "struct CVALUE*"))));
                    __dec_obj108=come_value_663->c_value,
                    come_value_663->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_651));
                    __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_663->var=((void*)0);
                    __dec_obj109=come_value_663->type,
                    come_value_663->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 830, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj109,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_611,1,(struct CVALUE*)come_increment_ref_count(come_value_663));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_451,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 833, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_651,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_663,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                string_operator_equals(fun_name_450,"length")) {
                    buf_667=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 836, "struct buffer*"))));
                    i_668=0;
                    for(                    o2_saved_669=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_649->mArrayNum)),it_670=list$1sNode$ph_begin((o2_saved_669));                    !list$1sNode$ph_end((o2_saved_669));                    it_670=list$1sNode$ph_next((o2_saved_669))                    ){
                        Value_671=node_compile(it_670,info);
                        if(                        !Value_671) {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value531=err_msg(info,"invalid array num")));
                            come_exception_var_11_672=multiple_assign_var28->v1;
                            Err_673=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            if(                            (_if_conditional20=(Err_673)),                            /*c*/ come_call_finalizer3(__right_value531,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional20) {
                                __result_obj__332 = (_Bool)1;
                                (Err_673 = come_decrement_ref_count(Err_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_669,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_667,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_650 = come_decrement_ref_count(array_method_name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__332;
                            }
                            else {
                            }
                            (Err_673 = come_decrement_ref_count(Err_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_674=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_667,"%s",come_value_674->c_value);
                        if(                        i_668!=list$1sNode$ph_length(obj_array_type_649->mArrayNum)-1) {
                            buffer_append_str(buf_667,"*");
                        }
                        i_668++;
                        /*c*/ come_call_finalizer3(come_value_674,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_669,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_675=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 855, "struct CVALUE*"))));
                    __dec_obj113=come_value_675->c_value,
                    come_value_675->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_667));
                    __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_675->var=((void*)0);
                    __dec_obj114=come_value_675->type,
                    come_value_675->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 859, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_611,1,(struct CVALUE*)come_increment_ref_count(come_value_675));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_451,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 862, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_667,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_675,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                string_operator_equals(fun_name_450,"to_buffer")) {
                    buf_676=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 865, "struct buffer*"))));
                    i_677=0;
                    for(                    o2_saved_678=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_649->mArrayNum)),it_679=list$1sNode$ph_begin((o2_saved_678));                    !list$1sNode$ph_end((o2_saved_678));                    it_679=list$1sNode$ph_next((o2_saved_678))                    ){
                        Value_680=node_compile(it_679,info);
                        if(                        !Value_680) {
                            multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value544=err_msg(info,"invalid array num")));
                            come_exception_var_12_681=multiple_assign_var29->v1;
                            Err_682=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                            if(                            (_if_conditional21=(Err_682)),                            /*c*/ come_call_finalizer3(__right_value544,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional21) {
                                __result_obj__333 = (_Bool)1;
                                (Err_682 = come_decrement_ref_count(Err_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_678,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_650 = come_decrement_ref_count(array_method_name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__333;
                            }
                            else {
                            }
                            (Err_682 = come_decrement_ref_count(Err_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_683=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_676,"%s",come_value_683->c_value);
                        if(                        i_677!=list$1sNode$ph_length(obj_array_type_649->mArrayNum)-1) {
                            buffer_append_str(buf_676,"*");
                        }
                        i_677++;
                        /*c*/ come_call_finalizer3(come_value_683,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_678,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_684=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 884, "struct CVALUE*"))));
                    __dec_obj115=come_value_684->c_value,
                    come_value_684->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_676));
                    __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_684->var=((void*)0);
                    __dec_obj116=come_value_684->type,
                    come_value_684->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 888, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_611,1,(struct CVALUE*)come_increment_ref_count(come_value_684));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_451,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 891, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_676,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_684,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else if(                string_operator_equals(fun_name_450,"to_list")) {
                    buf_685=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 894, "struct buffer*"))));
                    i_686=0;
                    for(                    o2_saved_687=(struct list$1sNode$ph*)come_increment_ref_count((obj_array_type_649->mArrayNum)),it_688=list$1sNode$ph_begin((o2_saved_687));                    !list$1sNode$ph_end((o2_saved_687));                    it_688=list$1sNode$ph_next((o2_saved_687))                    ){
                        Value_689=node_compile(it_688,info);
                        if(                        !Value_689) {
                            multiple_assign_var30=((struct tuple2$2int$char$ph*)(__right_value557=err_msg(info,"invalid array num")));
                            come_exception_var_13_690=multiple_assign_var30->v1;
                            Err_691=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                            if(                            (_if_conditional22=(Err_691)),                            /*c*/ come_call_finalizer3(__right_value557,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                            _if_conditional22) {
                                __result_obj__334 = (_Bool)1;
                                (Err_691 = come_decrement_ref_count(Err_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(o2_saved_687,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(buf_685,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (array_method_name_650 = come_decrement_ref_count(array_method_name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                return __result_obj__334;
                            }
                            else {
                            }
                            (Err_691 = come_decrement_ref_count(Err_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else {
                        }
                        come_value_692=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        buffer_append_format(buf_685,"%s",come_value_692->c_value);
                        if(                        i_686!=list$1sNode$ph_length(obj_array_type_649->mArrayNum)-1) {
                            buffer_append_str(buf_685,"*");
                        }
                        i_686++;
                        /*c*/ come_call_finalizer3(come_value_692,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(o2_saved_687,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    come_value_693=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 913, "struct CVALUE*"))));
                    __dec_obj117=come_value_693->c_value,
                    come_value_693->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_685));
                    __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    come_value_693->var=((void*)0);
                    __dec_obj118=come_value_693->type,
                    come_value_693->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 917, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
                    /*b*/ come_call_finalizer3(__dec_obj118,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    list$1CVALUE$ph_replace(come_params_611,1,(struct CVALUE*)come_increment_ref_count(come_value_693));
                    list$1tuple2$2char$phsNode$ph$ph_push_back(params_451,(struct tuple2$2char$phvoid$p*)come_increment_ref_count(tuple2$2char$phvoid$p_initialize((struct tuple2$2char$phvoid$p**)come_increment_ref_count((struct tuple2$2char$phvoid$p*)come_calloc(1, sizeof(struct tuple2$2char$phvoid$p)*(1), "20method.c", 920, "struct tuple2$2char$phvoid$p")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    /*c*/ come_call_finalizer3(buf_685,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(come_value_693,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            (array_method_name_650 = come_decrement_ref_count(array_method_name_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1tuple2$2char$phsNode$ph$ph_length(params_451)<list$1sType$ph_length(fun_559->mParamTypes)+(((method_block_453)?(-2):(0)))) {
            for(            ;            i_633<list$1sType$ph_length(fun_559->mParamTypes)+(((method_block_453)?(-2):(0)));            i_633++            ){
                default_param_694=(char*)come_increment_ref_count((char*)come_memdup(((char*)(__right_value568=list$1char$ph$p_operator_load_element(fun_559->mParamDefaultParametors,i_633))), "20method.c", 928, "char*"));
                (__right_value568 = come_decrement_ref_count(__right_value568, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                param_name_695=((char*)(__right_value570=list$1char$ph$p_operator_load_element(fun_559->mParamNames,i_633)));
                (__right_value570 = come_decrement_ref_count(__right_value570, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                (_if_conditional23=(default_param_694&&string_operator_not_equals(default_param_694,"")&&((struct CVALUE*)(__right_value571=list$1CVALUE$ph$p_operator_load_element(come_params_611,i_633)))==((void*)0))),                /*c*/ come_call_finalizer3(__right_value571,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional23) {
                    source_696=(struct buffer*)come_increment_ref_count(info->source);
                    p_697=info->p;
                    head_698=info->head;
                    sline_699=info->sline;
                    __dec_obj119=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_694));
                    /*b*/ come_call_finalizer3(__dec_obj119,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_700=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_701=node_compile(node_700,info);
                    if(                    !Value_701) {
                        __result_obj__335 = (_Bool)0;
                        /*c*/ come_call_finalizer3(source_696,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((node_700) ? node_700 = come_decrement_ref_count(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        (default_param_694 = come_decrement_ref_count(default_param_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                        /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        return __result_obj__335;
                    }
                    else {
                    }
                    __dec_obj120=info->source,
                    info->source=(struct buffer*)come_increment_ref_count(source_696);
                    /*b*/ come_call_finalizer3(__dec_obj120,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                    info->p=p_697;
                    info->head=head_698;
                    info->sline=sline_699;
                    come_value_702=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional24=(((struct sType*)(__right_value575=list$1sType$ph$p_operator_load_element(param_types_599,i_633))))),                    /*c*/ come_call_finalizer3(__right_value575,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional24) {
                        multiple_assign_var31=((struct tuple2$2bool$char$ph*)(__right_value580=check_assign_type(((char*)(__right_value578=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value576=string_to_string(fun_name_450))),((char*)(__right_value577=int_to_string(i_633)))))),((struct sType*)(__right_value579=list$1sType$ph$p_operator_load_element(type_checking_param_types_605,i_633))),come_value_702->type,come_value_702,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                        come_exception_var_14_703=multiple_assign_var31->v1;
                        Err_704=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        if(                        (_if_conditional25=(Err_704)),                        (__right_value576 = come_decrement_ref_count(__right_value576, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value577 = come_decrement_ref_count(__right_value577, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        (__right_value578 = come_decrement_ref_count(__right_value578, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                        /*c*/ come_call_finalizer3(__right_value579,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        /*c*/ come_call_finalizer3(__right_value580,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional25) {
                            __result_obj__336 = (_Bool)1;
                            (Err_704 = come_decrement_ref_count(Err_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(source_696,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            ((node_700) ? node_700 = come_decrement_ref_count(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(come_value_702,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (default_param_694 = come_decrement_ref_count(default_param_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__336;
                        }
                        else {
                        }
                        (Err_704 = come_decrement_ref_count(Err_704, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    (_if_conditional26=(((struct sType*)(__right_value581=list$1sType$ph$p_operator_load_element(param_types_599,i_633)))&&((struct sType*)(__right_value582=list$1sType$ph$p_operator_load_element(param_types_599,i_633)))->mHeap&&come_value_702->type->mHeap)),                    /*c*/ come_call_finalizer3(__right_value581,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    /*c*/ come_call_finalizer3(__right_value582,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional26) {
                        std_move(((struct sType*)(__right_value583=list$1sType$ph$p_operator_load_element(param_types_599,i_633))),come_value_702->type,come_value_702,info,(_Bool)1);
                        /*c*/ come_call_finalizer3(__right_value583,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    list$1CVALUE$ph_replace(come_params_611,i_633,(struct CVALUE*)come_increment_ref_count(come_value_702));
                    /*c*/ come_call_finalizer3(source_696,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((node_700) ? node_700 = come_decrement_ref_count(node_700, ((struct sNode*)node_700)->finalize, ((struct sNode*)node_700)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    /*c*/ come_call_finalizer3(come_value_702,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
                else {
                    if(                    (_if_conditional27=(((struct CVALUE*)(__right_value584=list$1CVALUE$ph$p_operator_load_element(come_params_611,i_633)))==((void*)0))),                    /*c*/ come_call_finalizer3(__right_value584,CVALUE_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                    _if_conditional27) {
                        multiple_assign_var32=((struct tuple2$2int$char$ph*)(__right_value585=err_msg(info,"require parametor(%s) %d",fun_559->mName,i_633)));
                        come_exception_var_15_705=multiple_assign_var32->v1;
                        Err_706=(char*)come_increment_ref_count(multiple_assign_var32->v2);
                        if(                        (_if_conditional28=(Err_706)),                        /*c*/ come_call_finalizer3(__right_value585,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                        _if_conditional28) {
                            __result_obj__337 = (_Bool)1;
                            (Err_706 = come_decrement_ref_count(Err_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (default_param_694 = come_decrement_ref_count(default_param_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                            /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            return __result_obj__337;
                        }
                        else {
                        }
                        (Err_706 = come_decrement_ref_count(Err_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                (default_param_694 = come_decrement_ref_count(default_param_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        method_block_453) {
            if(            !compile_method_block(method_block_453,(struct list$1CVALUE$ph*)come_increment_ref_count(come_params_611),fun_559,fun_name_450,method_block_sline_454,info,(_Bool)0)) {
                __result_obj__338 = (_Bool)0;
                (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__338;
            }
        }
        buf_707=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 979, "struct buffer*"))));
        buffer_append_str(buf_707,generics_fun_name_558);
        buffer_append_str(buf_707,"(");
        j_708=0;
        for(        o2_saved_709=(struct list$1CVALUE$ph*)come_increment_ref_count((come_params_611)),it_710=list$1CVALUE$ph_begin((o2_saved_709));        !list$1CVALUE$ph_end((o2_saved_709));        it_710=list$1CVALUE$ph_next((o2_saved_709))        ){
            buffer_append_str(buf_707,it_710->c_value);
            if(            j_708!=list$1CVALUE$ph_length(come_params_611)-1) {
                buffer_append_str(buf_707,",");
            }
            j_708++;
        }
        /*c*/ come_call_finalizer3(o2_saved_709,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(buf_707,")");
        come_value2_711=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 998, "struct CVALUE*"))));
        come_value2_711->var=((void*)0);
        __dec_obj121=come_value2_711->c_value,
        come_value2_711->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_707));
        __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj122=come_value2_711->type,
        come_value2_711->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_598));
        /*b*/ come_call_finalizer3(__dec_obj122,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_711->type->mStatic=(_Bool)0;
        if(        result_type2_598->mHeap) {
            append_object_to_right_values2(come_value2_711,(struct sType*)come_increment_ref_count(result_type2_598),info,(_Bool)0);
        }
        __dec_obj123=come_value2_711->c_value,
        come_value2_711->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_711->c_value,come_value2_711->type,info));
        __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        add_come_last_code(info,"%s",come_value2_711->c_value);
        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_711));
        if(        is_contained_method_generics_types(obj_type_461,info)&&generics_fun_name_558) {
            map$2char$phsFun$ph_remove(info->funcs,((char*)(__right_value593=__builtin_string(generics_fun_name_558))));
            (__right_value593 = come_decrement_ref_count(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(info->method_generics_types,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj124=info->method_generics_types,
        info->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(method_generics_types_before_458);
        /*b*/ come_call_finalizer3(__dec_obj124,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->calling_fun=fun_559;
        (generics_fun_name_558 = come_decrement_ref_count(generics_fun_name_558, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_590,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type2_598,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_599,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(type_checking_param_types_605,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_params_611,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(buf_707,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(come_value2_711,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__339 = (_Bool)1;
    (fun_name_450 = come_decrement_ref_count(fun_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_451,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((obj_452) ? obj_452 = come_decrement_ref_count(obj_452, ((struct sNode*)obj_452)->finalize, ((struct sNode*)obj_452)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(method_block_453,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_456,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_before_458,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_value_460,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(obj_type_461,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__339;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph$p_clone(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__261;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* result_442;
struct list_item$1tuple2$2char$phsNode$ph$ph* it_443;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__266;
    if(    self==((void*)0)) {
        __result_obj__261 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__261,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__261;
    }
    result_442=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1138, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    it_443=self->head;
    while(it_443!=((void*)0)) {
        if(        1) {
            list$1tuple2$2char$phsNode$ph$ph_add(result_442,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_443->item)));
        }
        else {
            list$1tuple2$2char$phsNode$ph$ph_add(result_442,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(come_call_cloner(tuple2$2char$phsNode$ph_clone, it_443->item)));
        }
        it_443=it_443->next;
    }
    __result_obj__266 = come_increment_ref_count(result_442);
    /*c*/ come_call_finalizer3(result_442,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__266,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__266;
}

static void list$1tuple2$2char$phsNode$ph$ph$p_finalize(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct list_item$1tuple2$2char$phsNode$ph$ph* it_440;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_441;
    it_440=self->head;
    while(it_440!=((void*)0)) {
        prev_it_441=it_440;
        it_440=it_440->next;
        /*c*/ come_call_finalizer3(prev_it_441,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__262;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__262 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__262,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__262;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_add(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value339 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_444;
struct tuple2$2char$phsNode$ph* __dec_obj67;
void* __right_value340 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_445;
struct tuple2$2char$phsNode$ph* __dec_obj68;
void* __right_value341 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_446;
struct tuple2$2char$phsNode$ph* __dec_obj69;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__263;
    if(    self->len==0) {
        litem_444=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value339=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1157, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_444->prev=((void*)0);
        litem_444->next=((void*)0);
        __dec_obj67=litem_444->item,
        litem_444->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj67,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_444;
        self->head=litem_444;
    }
    else if(    self->len==1) {
        litem_445=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value340=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1167, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_445->prev=self->head;
        litem_445->next=((void*)0);
        __dec_obj68=litem_445->item,
        litem_445->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj68,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_445;
        self->head->next=litem_445;
    }
    else {
        litem_446=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value341=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1177, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_446->prev=self->tail;
        litem_446->next=((void*)0);
        __dec_obj69=litem_446->item,
        litem_446->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj69,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_446;
        self->tail=litem_446;
    }
    self->len++;
    __result_obj__263 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__263;
}

static struct tuple2$2char$phsNode$ph* tuple2$2char$phsNode$ph_clone(struct tuple2$2char$phsNode$ph* self){
struct tuple2$2char$phsNode$ph* __result_obj__264;
void* __right_value342 = (void*)0;
struct tuple2$2char$phsNode$ph* result_447;
void* __right_value343 = (void*)0;
char* __dec_obj70;
void* __right_value344 = (void*)0;
struct sNode* __dec_obj71;
struct tuple2$2char$phsNode$ph* __result_obj__265;
    if(    self==(void*)0) {
        __result_obj__264 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__264,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__264;
    }
    result_447=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "tuple2$2char$phsNode$ph_clone", 3, "struct tuple2$2char$phsNode$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj70=result_447->v1,
        result_447->v1=(char*)come_increment_ref_count((char*)come_memdup(self->v1, "tuple2$2char$phsNode$ph_clone", 4, "char*"));
        __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj71=result_447->v2,
        result_447->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        (__dec_obj71 ? __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    __result_obj__265 = come_increment_ref_count(result_447);
    /*c*/ come_call_finalizer3(result_447,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__265,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__265;
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
struct list_item$1tuple2$2char$phsNode$ph$ph* it_448;
struct list_item$1tuple2$2char$phsNode$ph$ph* prev_it_449;
    it_448=self->head;
    while(it_448!=((void*)0)) {
        prev_it_449=it_448;
        it_448=it_448->next;
        /*c*/ come_call_finalizer3(prev_it_449,list_item$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list$1CVALUE$ph* __result_obj__270;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__270 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__270,list$1CVALUE$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__270;
}

static struct CVALUE* list$1CVALUE$ph$p_operator_load_element(struct list$1CVALUE$ph* self, int position){
struct list_item$1CVALUE$ph* it_476;
int i_477;
struct CVALUE* __result_obj__272;
struct CVALUE* default_value_478;
struct CVALUE* __result_obj__273;
default_value_478 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_476=self->head;
    i_477=0;
    while(it_476!=((void*)0)) {
        if(        position==i_477) {
            __result_obj__272 = come_increment_ref_count(it_476->item);
            /*c*/ come_call_finalizer3(__result_obj__272,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__272;
        }
        it_476=it_476->next;
        i_477++;
    }
    memset(&default_value_478,0,sizeof(struct CVALUE*));
    __result_obj__273 = come_increment_ref_count(default_value_478);
    /*c*/ come_call_finalizer3(default_value_478,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
}

static void list$1sType$ph$p_operator_store_element(struct list$1sType$ph* self, int position, struct sType* item){
    list$1sType$ph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
}

static struct list$1sType$ph* list$1sType$ph_replace(struct list$1sType$ph* self, int position, struct sType* item){
int len_484;
int i_485;
struct sType* default_value_486;
struct list$1sType$ph* __result_obj__275;
struct list_item$1sType$ph* it_490;
int i_491;
struct sType* __dec_obj80;
struct list$1sType$ph* __result_obj__276;
default_value_486 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_484=self->len;
        for(        i_485=0;        i_485<position-len_484;        i_485++        ){
            memset(&default_value_486,0,sizeof(struct sType*));
            list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(default_value_486));
            /*c*/ come_call_finalizer3(default_value_486,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result_obj__275 = self;
        /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__275;
    }
    it_490=self->head;
    i_491=0;
    while(it_490!=((void*)0)) {
        if(        position==i_491) {
            __dec_obj80=it_490->item,
            it_490->item=(struct sType*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_490=it_490->next;
        i_491++;
    }
    __result_obj__276 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__276;
}

static struct list$1sType$ph* list$1sType$ph_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value367 = (void*)0;
struct list_item$1sType$ph* litem_487;
struct sType* __dec_obj77;
void* __right_value368 = (void*)0;
struct list_item$1sType$ph* litem_488;
struct sType* __dec_obj78;
void* __right_value369 = (void*)0;
struct list_item$1sType$ph* litem_489;
struct sType* __dec_obj79;
struct list$1sType$ph* __result_obj__274;
    if(    self->len==0) {
        litem_487=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value367=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1227, "struct list_item$1sType$ph*"))));
        litem_487->prev=((void*)0);
        litem_487->next=((void*)0);
        __dec_obj77=litem_487->item,
        litem_487->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_487;
        self->head=litem_487;
    }
    else if(    self->len==1) {
        litem_488=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value368=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1237, "struct list_item$1sType$ph*"))));
        litem_488->prev=self->head;
        litem_488->next=((void*)0);
        __dec_obj78=litem_488->item,
        litem_488->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj78,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_488;
        self->head->next=litem_488;
    }
    else {
        litem_489=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value369=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1247, "struct list_item$1sType$ph*"))));
        litem_489->prev=self->tail;
        litem_489->next=((void*)0);
        __dec_obj79=litem_489->item,
        litem_489->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj79,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_489;
        self->tail=litem_489;
    }
    self->len++;
    __result_obj__274 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_begin(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_499;
struct tuple2$2char$phsNode$ph* __result_obj__277;
struct tuple2$2char$phsNode$ph* __result_obj__278;
struct tuple2$2char$phsNode$ph* result_500;
struct tuple2$2char$phsNode$ph* __result_obj__279;
result_499 = (void*)0;
result_500 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_499,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__277 = result_499;
        return __result_obj__277;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__278 = self->it->item;
        return __result_obj__278;
    }
    memset(&result_500,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__279 = result_500;
    return __result_obj__279;
}

static _Bool list$1tuple2$2char$phsNode$ph$ph_end(struct list$1tuple2$2char$phsNode$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsNode$ph* list$1tuple2$2char$phsNode$ph$ph_next(struct list$1tuple2$2char$phsNode$ph$ph* self){
struct tuple2$2char$phsNode$ph* result_502;
struct tuple2$2char$phsNode$ph* __result_obj__280;
struct tuple2$2char$phsNode$ph* __result_obj__281;
struct tuple2$2char$phsNode$ph* result_503;
struct tuple2$2char$phsNode$ph* __result_obj__282;
result_502 = (void*)0;
result_503 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_502,0,sizeof(struct tuple2$2char$phsNode$ph*));
        __result_obj__280 = result_502;
        return __result_obj__280;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__281 = self->it->item;
        return __result_obj__281;
    }
    memset(&result_503,0,sizeof(struct tuple2$2char$phsNode$ph*));
    __result_obj__282 = result_503;
    return __result_obj__282;
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_529;
struct tuple2$2char$phsType$ph* __result_obj__285;
struct tuple2$2char$phsType$ph* __result_obj__286;
struct tuple2$2char$phsType$ph* result_530;
struct tuple2$2char$phsType$ph* __result_obj__287;
result_529 = (void*)0;
result_530 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_529,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__285 = result_529;
        return __result_obj__285;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__286 = self->it->item;
        return __result_obj__286;
    }
    memset(&result_530,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__287 = result_530;
    return __result_obj__287;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_532;
struct tuple2$2char$phsType$ph* __result_obj__288;
struct tuple2$2char$phsType$ph* __result_obj__289;
struct tuple2$2char$phsType$ph* result_533;
struct tuple2$2char$phsType$ph* __result_obj__290;
result_532 = (void*)0;
result_533 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_532,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__288 = result_532;
        return __result_obj__288;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__289 = self->it->item;
        return __result_obj__289;
    }
    memset(&result_533,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__290 = result_533;
    return __result_obj__290;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct CVALUE* list$1CVALUE$ph_begin(struct list$1CVALUE$ph* self){
struct CVALUE* result_550;
struct CVALUE* __result_obj__293;
struct CVALUE* __result_obj__294;
struct CVALUE* result_551;
struct CVALUE* __result_obj__295;
result_550 = (void*)0;
result_551 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_550,0,sizeof(struct CVALUE*));
        __result_obj__293 = result_550;
        return __result_obj__293;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__294 = self->it->item;
        return __result_obj__294;
    }
    memset(&result_551,0,sizeof(struct CVALUE*));
    __result_obj__295 = result_551;
    return __result_obj__295;
}

static _Bool list$1CVALUE$ph_end(struct list$1CVALUE$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUE$ph_next(struct list$1CVALUE$ph* self){
struct CVALUE* result_553;
struct CVALUE* __result_obj__296;
struct CVALUE* __result_obj__297;
struct CVALUE* result_554;
struct CVALUE* __result_obj__298;
result_553 = (void*)0;
result_554 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_553,0,sizeof(struct CVALUE*));
        __result_obj__296 = result_553;
        return __result_obj__296;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__297 = self->it->item;
        return __result_obj__297;
    }
    memset(&result_554,0,sizeof(struct CVALUE*));
    __result_obj__298 = result_554;
    return __result_obj__298;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_571;
unsigned int hash_572;
unsigned int it_573;
struct sFun* __result_obj__299;
struct sFun* __result_obj__300;
struct sFun* __result_obj__301;
struct sFun* __result_obj__302;
default_value_571 = (void*)0;
    memset(&default_value_571,0,sizeof(struct sFun*));
    hash_572=string_get_hash_key(((char*)key))%self->size;
    it_573=hash_572;
    while((_Bool)1) {
        if(        self->item_existance[it_573]) {
            if(            string_equals(self->keys[it_573],key)) {
                __result_obj__299 = come_increment_ref_count(self->items[it_573]);
                /*c*/ come_call_finalizer3(default_value_571,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__299,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__299;
            }
            it_573++;
            if(            it_573>=self->size) {
                it_573=0;
            }
            else if(            it_573==hash_572) {
                __result_obj__300 = come_increment_ref_count(default_value_571);
                /*c*/ come_call_finalizer3(default_value_571,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__300,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__300;
            }
        }
        else {
            __result_obj__301 = come_increment_ref_count(default_value_571);
            /*c*/ come_call_finalizer3(default_value_571,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__301,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__301;
        }
    }
    __result_obj__302 = come_increment_ref_count(default_value_571);
    /*c*/ come_call_finalizer3(default_value_571,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__302,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__302;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
struct sMethodCallNode* __result_obj__307;
void* __right_value454 = (void*)0;
struct sMethodCallNode* result_593;
void* __right_value455 = (void*)0;
char* __dec_obj98;
void* __right_value456 = (void*)0;
struct sNode* __dec_obj99;
void* __right_value457 = (void*)0;
char* __dec_obj100;
void* __right_value458 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* __dec_obj101;
void* __right_value459 = (void*)0;
struct buffer* __dec_obj102;
void* __right_value460 = (void*)0;
struct list$1sType$ph* __dec_obj103;
struct sMethodCallNode* __result_obj__308;
    if(    self==(void*)0) {
        __result_obj__307 = (void*)0;
        return __result_obj__307;
    }
    result_593=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode*"));
    if(    self!=((void*)0)) {
        result_593->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj98=result_593->sname,
        result_593->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sMethodCallNode_clone", 5, "char*"));
        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_593->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj99=result_593->obj,
        result_593->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        (__dec_obj99 ? __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj100=result_593->fun_name,
        result_593->fun_name=(char*)come_increment_ref_count((char*)come_memdup(self->fun_name, "sMethodCallNode_clone", 8, "char*"));
        __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj101=result_593->params,
        result_593->params=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2char$phsNode$ph$ph$p_clone, self->params));
        /*b*/ come_call_finalizer3(__dec_obj101,list$1tuple2$2char$phsNode$ph$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj102=result_593->method_block,
        result_593->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        /*b*/ come_call_finalizer3(__dec_obj102,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_593->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj103=result_593->method_generics_types,
        result_593->method_generics_types=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->method_generics_types));
        /*b*/ come_call_finalizer3(__dec_obj103,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_593->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_593->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_593->fun=self->fun;
    }
    __result_obj__308 = result_593;
    /*c*/ come_call_finalizer3(result_593,sMethodCallNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_add(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value477 = (void*)0;
struct list_item$1CVALUE$ph* litem_613;
struct CVALUE* __dec_obj104;
void* __right_value478 = (void*)0;
struct list_item$1CVALUE$ph* litem_614;
struct CVALUE* __dec_obj105;
void* __right_value479 = (void*)0;
struct list_item$1CVALUE$ph* litem_615;
struct CVALUE* __dec_obj106;
struct list$1CVALUE$ph* __result_obj__313;
    if(    self->len==0) {
        litem_613=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value477=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1157, "struct list_item$1CVALUE$ph*"))));
        litem_613->prev=((void*)0);
        litem_613->next=((void*)0);
        __dec_obj104=litem_613->item,
        litem_613->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj104,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_613;
        self->head=litem_613;
    }
    else if(    self->len==1) {
        litem_614=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value478=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1167, "struct list_item$1CVALUE$ph*"))));
        litem_614->prev=self->head;
        litem_614->next=((void*)0);
        __dec_obj105=litem_614->item,
        litem_614->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_614;
        self->head->next=litem_614;
    }
    else {
        litem_615=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value479=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1177, "struct list_item$1CVALUE$ph*"))));
        litem_615->prev=self->tail;
        litem_615->next=((void*)0);
        __dec_obj106=litem_615->item,
        litem_615->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_615;
        self->tail=litem_615;
    }
    self->len++;
    __result_obj__313 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_replace(struct list$1CVALUE$ph* self, int position, struct CVALUE* item){
int len_628;
int i_629;
struct CVALUE* default_value_630;
struct list$1CVALUE$ph* __result_obj__316;
struct list_item$1CVALUE$ph* it_631;
int i_632;
struct CVALUE* __dec_obj107;
struct list$1CVALUE$ph* __result_obj__317;
default_value_630 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_628=self->len;
        for(        i_629=0;        i_629<position-len_628;        i_629++        ){
            memset(&default_value_630,0,sizeof(struct CVALUE*));
            list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_630));
            /*c*/ come_call_finalizer3(default_value_630,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        list$1CVALUE$ph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result_obj__316 = self;
        /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__316;
    }
    it_631=self->head;
    i_632=0;
    while(it_631!=((void*)0)) {
        if(        position==i_632) {
            __dec_obj107=it_631->item,
            it_631->item=(struct CVALUE*)come_increment_ref_count(item);
            /*b*/ come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            break;
        }
        it_631=it_631->next;
        i_632++;
    }
    __result_obj__317 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__317;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_640;
int i_641;
char* __result_obj__319;
char* default_value_642;
char* __result_obj__320;
default_value_642 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_640=self->head;
    i_641=0;
    while(it_640!=((void*)0)) {
        if(        position==i_641) {
            __result_obj__319 = come_increment_ref_count(it_640->item);
            (__result_obj__319 = come_decrement_ref_count(__result_obj__319, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__319;
        }
        it_640=it_640->next;
        i_641++;
    }
    memset(&default_value_642,0,sizeof(char*));
    __result_obj__320 = come_increment_ref_count(default_value_642);
    (default_value_642 = come_decrement_ref_count(default_value_642, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__320 = come_decrement_ref_count(__result_obj__320, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__320;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_654;
struct sNode* __result_obj__324;
struct sNode* __result_obj__325;
struct sNode* result_655;
struct sNode* __result_obj__326;
result_654 = (void*)0;
result_655 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_654,0,sizeof(struct sNode*));
        __result_obj__324 = result_654;
        return __result_obj__324;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__325 = self->it->item;
        return __result_obj__325;
    }
    memset(&result_655,0,sizeof(struct sNode*));
    __result_obj__326 = result_655;
    return __result_obj__326;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_657;
struct sNode* __result_obj__327;
struct sNode* __result_obj__328;
struct sNode* result_658;
struct sNode* __result_obj__329;
result_657 = (void*)0;
result_658 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_657,0,sizeof(struct sNode*));
        __result_obj__327 = result_657;
        return __result_obj__327;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__328 = self->it->item;
        return __result_obj__328;
    }
    memset(&result_658,0,sizeof(struct sNode*));
    __result_obj__329 = result_658;
    return __result_obj__329;
}

static struct list$1tuple2$2char$phsNode$ph$ph* list$1tuple2$2char$phsNode$ph$ph_push_back(struct list$1tuple2$2char$phsNode$ph$ph* self, struct tuple2$2char$phsNode$ph* item){
void* __right_value523 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_664;
struct tuple2$2char$phsNode$ph* __dec_obj110;
void* __right_value524 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_665;
struct tuple2$2char$phsNode$ph* __dec_obj111;
void* __right_value525 = (void*)0;
struct list_item$1tuple2$2char$phsNode$ph$ph* litem_666;
struct tuple2$2char$phsNode$ph* __dec_obj112;
struct list$1tuple2$2char$phsNode$ph$ph* __result_obj__331;
    if(    self->len==0) {
        litem_664=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value523=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1227, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_664->prev=((void*)0);
        litem_664->next=((void*)0);
        __dec_obj110=litem_664->item,
        litem_664->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj110,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_664;
        self->head=litem_664;
    }
    else if(    self->len==1) {
        litem_665=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value524=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1237, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_665->prev=self->head;
        litem_665->next=((void*)0);
        __dec_obj111=litem_665->item,
        litem_665->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj111,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_665;
        self->head->next=litem_665;
    }
    else {
        litem_666=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(((struct list_item$1tuple2$2char$phsNode$ph$ph*)(__right_value525=(struct list_item$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list_item$1tuple2$2char$phsNode$ph$ph)*(1), "./comelang.h", 1247, "struct list_item$1tuple2$2char$phsNode$ph$ph*"))));
        litem_666->prev=self->tail;
        litem_666->next=((void*)0);
        __dec_obj112=litem_666->item,
        litem_666->item=(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj112,tuple2$2char$phsNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_666;
        self->tail=litem_666;
    }
    self->len++;
    __result_obj__331 = self;
    /*c*/ come_call_finalizer3(item,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__331;
}

static int list$1tuple2$2char$phsNode$ph$ph_length(struct list$1tuple2$2char$phsNode$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info){
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sNode* _inf_value4;
struct sMethodCallNode* _inf_obj_value4;
void* __right_value596 = (void*)0;
struct sNode* node_712;
void* __right_value597 = (void*)0;
struct sNode* __dec_obj125;
struct sNode* __result_obj__340;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1032, "struct sNode");
    _inf_obj_value4=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value595=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1032, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMethodCallNode_finalize;
    _inf_value4->clone=(void*)sMethodCallNode_clone;
    _inf_value4->compile=(void*)sMethodCallNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMethodCallNode_terminated;
    _inf_value4->kind=(void*)sMethodCallNode_kind;
    node_712=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value595,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj125=node_712,
    node_712=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_712),info));
    (__dec_obj125 ? __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__340 = come_increment_ref_count(node_712);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(params,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_712) ? node_712 = come_decrement_ref_count(node_712, ((struct sNode*)node_712)->finalize, ((struct sNode*)node_712)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__340) ? __result_obj__340 = come_decrement_ref_count(__result_obj__340, ((struct sNode*)__result_obj__340)->finalize, ((struct sNode*)__result_obj__340)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__340;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1tuple2$2char$phsNode$ph$ph* params_713;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
_Bool parse_method_generics_type_715;
char* p_716;
int sline_717;
void* __right_value603 = (void*)0;
char* word_718;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct list$1sType$ph* method_generics_types_719;
void* __right_value606 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var33 = (void*)0;
int come_exception_var_c5_720=0;
char* Err_721=0;
void* __right_value607 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var34 = (void*)0;
struct sType* type_722=0;
char* name_723=0;
_Bool err_724=0;
void* __right_value608 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var35 = (void*)0;
int come_exception_var_c6_725=0;
char* Err_726=0;
void* __right_value609 = (void*)0;
char* p_727;
int sline_728;
_Bool err_flag_729;
void* __right_value610 = (void*)0;
char* label_730;
void* __right_value611 = (void*)0;
char* __dec_obj128;
char* __dec_obj129;
_Bool no_comma_731;
_Bool in_fun_param_732;
void* __right_value612 = (void*)0;
struct sNode* node_733;
void* __right_value613 = (void*)0;
struct sNode* __dec_obj130;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct buffer* method_block_734;
int method_block_sline_735;
char* head_736;
void* __right_value616 = (void*)0;
char* tail_737;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct buffer* __dec_obj131;
int len_738;
void* __right_value619 = (void*)0;
char* mem_739;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* _inf_value5;
struct sMethodCallNode* _inf_obj_value5;
void* __right_value623 = (void*)0;
struct sNode* node_740;
void* __right_value624 = (void*)0;
struct sNode* __dec_obj132;
struct sNode* __result_obj__342;
    params_713=(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(list$1tuple2$2char$phsNode$ph$ph_initialize((struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count((struct list$1tuple2$2char$phsNode$ph$ph*)come_calloc(1, sizeof(struct list$1tuple2$2char$phsNode$ph$ph)*(1), "20method.c", 1041, "struct list$1tuple2$2char$phsNode$ph$ph*"))));
    list$1tuple2$2char$phsNode$ph$ph_push_back(params_713,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1042, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_715=(_Bool)0;
    {
        p_716=info->p;
        sline_717=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_718=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_718,info)) {
                    parse_method_generics_type_715=(_Bool)1;
                }
                (word_718 = come_decrement_ref_count(word_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=p_716;
        info->sline=sline_717;
    }
    method_generics_types_719=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "20method.c", 1072, "struct list$1sType$ph*"))));
    if(    parse_method_generics_type_715&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                multiple_assign_var33=((struct tuple2$2int$char$ph*)(__right_value606=err_msg(info,"unexpected source end")));
                come_exception_var_c5_720=multiple_assign_var33->v1;
                Err_721=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_721)?(puts(Err_721),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value606,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_721 = come_decrement_ref_count(Err_721, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
                multiple_assign_var34=((struct tuple3$3sType$phchar$phbool$*)(__right_value607=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_722=(struct sType*)come_increment_ref_count(multiple_assign_var34->v1);
                name_723=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                err_724=multiple_assign_var34->v3;
                /*c*/ come_call_finalizer3(__right_value607,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_724) {
                    multiple_assign_var35=((struct tuple2$2int$char$ph*)(__right_value608=err_msg(info,"invalid method generics paramtor type")));
                    come_exception_var_c6_725=multiple_assign_var35->v1;
                    Err_726=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                    ((Err_726)?(puts(Err_726),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value608,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_726 = come_decrement_ref_count(Err_726, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                list$1sType$ph_push_back(method_generics_types_719,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_722)));
                /*c*/ come_call_finalizer3(type_722,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_723 = come_decrement_ref_count(name_723, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
            p_727=info->p;
            sline_728=info->sline;
            err_flag_729=(_Bool)0;
            label_730=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj128=label_730,
                label_730=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                err_flag_729=(_Bool)1;
            }
            if(            err_flag_729==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj129=label_730,
                label_730=((void*)0);
                __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->p=p_727;
                info->sline=sline_728;
            }
            no_comma_731=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_732=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_733=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj130=node_733,
            node_733=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_733),info));
            (__dec_obj130 ? __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            info->in_fun_param=in_fun_param_732;
            info->no_comma=no_comma_731;
            list$1tuple2$2char$phsNode$ph$ph_push_back(params_713,(struct tuple2$2char$phsNode$ph*)come_increment_ref_count(tuple2$2char$phsNode$ph_initialize((struct tuple2$2char$phsNode$ph**)come_increment_ref_count((struct tuple2$2char$phsNode$ph*)come_calloc(1, sizeof(struct tuple2$2char$phsNode$ph)*(1), "20method.c", 1148, "struct tuple2$2char$phsNode$ph")),(char*)come_increment_ref_count(label_730),(struct sNode*)come_increment_ref_count(node_733))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                (label_730 = come_decrement_ref_count(label_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_733) ? node_733 = come_decrement_ref_count(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                break;
            }
            (label_730 = come_decrement_ref_count(label_730, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_733) ? node_733 = come_decrement_ref_count(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    method_block_734=((void*)0);
    method_block_sline_735=0;
    if(    *info->p==123) {
        head_736=info->p;
        method_block_sline_735=info->sline;
        ((char*)(__right_value616=skip_block(info)));
        (__right_value616 = come_decrement_ref_count(__right_value616, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        tail_737=info->p;
        __dec_obj131=method_block_734,
        method_block_734=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1172, "struct buffer*"))));
        /*b*/ come_call_finalizer3(__dec_obj131,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        len_738=tail_737-head_736;
        mem_739=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_738+1)), "20method.c", 1175, "char*"));
        memcpy(mem_739,head_736,len_738);
        mem_739[len_738]=0;
        buffer_append_str(method_block_734,mem_739);
        buffer_append_str(method_block_734,"\n");
        (mem_739 = come_decrement_ref_count(mem_739, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1187, "struct sNode");
    _inf_obj_value5=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value622=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1187, "struct sMethodCallNode*")),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2char$phsNode$ph$ph*)come_increment_ref_count(params_713),method_block_734,method_block_sline_735,method_generics_types_719,(_Bool)0,(_Bool)1,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sMethodCallNode_finalize;
    _inf_value5->clone=(void*)sMethodCallNode_clone;
    _inf_value5->compile=(void*)sMethodCallNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sMethodCallNode_terminated;
    _inf_value5->kind=(void*)sMethodCallNode_kind;
    node_740=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*c*/ come_call_finalizer3(__right_value622,sMethodCallNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj132=node_740,
    node_740=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_740),info));
    (__dec_obj132 ? __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__342 = come_increment_ref_count(node_740);
    ((obj) ? obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(params_713,list$1tuple2$2char$phsNode$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_types_719,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_block_734,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_740) ? node_740 = come_decrement_ref_count(node_740, ((struct sNode*)node_740)->finalize, ((struct sNode*)node_740)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__342) ? __result_obj__342 = come_decrement_ref_count(__result_obj__342, ((struct sNode*)__result_obj__342)->finalize, ((struct sNode*)__result_obj__342)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__342;
}

static unsigned int tuple2$2char$phsNode$ph_get_hash_key(struct tuple2$2char$phsNode$ph* self){
unsigned int result_714;
    result_714=0;
    result_714+=int_get_hash_key(((int)self->v1));
    result_714+=int_get_hash_key(((int)self->v2));
    return result_714;
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
char* __dec_obj126;
struct sNode* __dec_obj127;
struct tuple2$2char$phsNode$ph* __result_obj__341;
    __dec_obj126=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj127=self->v2,
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    (__dec_obj127 ? __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    __result_obj__341 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__result_obj__341,tuple2$2char$phsNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__341;
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
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sNode* _inf_value6;
struct sCurrentNode* _inf_obj_value6;
void* __right_value627 = (void*)0;
struct sNode* __result_obj__343;
void* __right_value628 = (void*)0;
struct sNode* __result_obj__344;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1197, "struct sNode");
        _inf_obj_value6=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value626=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1197, "struct sCurrentNode*")),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sCurrentNode_finalize;
        _inf_value6->clone=(void*)sCurrentNode_clone;
        _inf_value6->compile=(void*)sCurrentNode_compile;
        _inf_value6->sline=(void*)sCurrentNode_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sCurrentNode_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sCurrentNode_kind;
        __result_obj__343 = come_increment_ref_count(((struct sNode*)(__right_value627=_inf_value6)));
        /*c*/ come_call_finalizer3(__right_value626,sCurrentNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value627) ? __right_value627 = come_decrement_ref_count(__right_value627, ((struct sNode*)__right_value627)->finalize, ((struct sNode*)__right_value627)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__343) ? __result_obj__343 = come_decrement_ref_count(__result_obj__343, ((struct sNode*)__result_obj__343)->finalize, ((struct sNode*)__result_obj__343)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__343;
    }
    __result_obj__344 = come_increment_ref_count(((struct sNode*)(__right_value628=string_node_v17(buf,head,head_sline,info))));
    ((__right_value628) ? __right_value628 = come_decrement_ref_count(__right_value628, ((struct sNode*)__right_value628)->finalize, ((struct sNode*)__right_value628)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__344) ? __result_obj__344 = come_decrement_ref_count(__result_obj__344, ((struct sNode*)__result_obj__344)->finalize, ((struct sNode*)__result_obj__344)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__344;
}

