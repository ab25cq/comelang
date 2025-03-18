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
        litem_140=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1234, "struct list_item$1char$*"))));
        litem_140->prev=((void*)0);
        litem_140->next=((void*)0);
        litem_140->item=item;
        self->tail=litem_140;
        self->head=litem_140;
    }
    else if(    self->len==1) {
        litem_141=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1244, "struct list_item$1char$*"))));
        litem_141->prev=self->head;
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head->next=litem_141;
    }
    else {
        litem_142=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1254, "struct list_item$1char$*"))));
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
        litem_146=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1234, "struct list_item$1char$p*"))));
        litem_146->prev=((void*)0);
        litem_146->next=((void*)0);
        litem_146->item=item;
        self->tail=litem_146;
        self->head=litem_146;
    }
    else if(    self->len==1) {
        litem_147=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1244, "struct list_item$1char$p*"))));
        litem_147->prev=self->head;
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head->next=litem_147;
    }
    else {
        litem_148=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1254, "struct list_item$1char$p*"))));
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
        litem_152=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1234, "struct list_item$1short$*"))));
        litem_152->prev=((void*)0);
        litem_152->next=((void*)0);
        litem_152->item=item;
        self->tail=litem_152;
        self->head=litem_152;
    }
    else if(    self->len==1) {
        litem_153=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1244, "struct list_item$1short$*"))));
        litem_153->prev=self->head;
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head->next=litem_153;
    }
    else {
        litem_154=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1254, "struct list_item$1short$*"))));
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
        litem_158=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1234, "struct list_item$1int$*"))));
        litem_158->prev=((void*)0);
        litem_158->next=((void*)0);
        litem_158->item=item;
        self->tail=litem_158;
        self->head=litem_158;
    }
    else if(    self->len==1) {
        litem_159=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1244, "struct list_item$1int$*"))));
        litem_159->prev=self->head;
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head->next=litem_159;
    }
    else {
        litem_160=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1254, "struct list_item$1int$*"))));
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
        litem_164=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1234, "struct list_item$1long$*"))));
        litem_164->prev=((void*)0);
        litem_164->next=((void*)0);
        litem_164->item=item;
        self->tail=litem_164;
        self->head=litem_164;
    }
    else if(    self->len==1) {
        litem_165=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1244, "struct list_item$1long$*"))));
        litem_165->prev=self->head;
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head->next=litem_165;
    }
    else {
        litem_166=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1254, "struct list_item$1long$*"))));
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
        litem_170=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1234, "struct list_item$1float$*"))));
        litem_170->prev=((void*)0);
        litem_170->next=((void*)0);
        litem_170->item=item;
        self->tail=litem_170;
        self->head=litem_170;
    }
    else if(    self->len==1) {
        litem_171=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1244, "struct list_item$1float$*"))));
        litem_171->prev=self->head;
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head->next=litem_171;
    }
    else {
        litem_172=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1254, "struct list_item$1float$*"))));
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
        litem_176=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1234, "struct list_item$1double$*"))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1244, "struct list_item$1double$*"))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1254, "struct list_item$1double$*"))));
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
        litem_219=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value173=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1234, "struct list_item$1char$ph*"))));
        litem_219->prev=((void*)0);
        litem_219->next=((void*)0);
        __dec_obj20=litem_219->item,
        litem_219->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_219;
        self->head=litem_219;
    }
    else if(    self->len==1) {
        litem_220=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value174=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1244, "struct list_item$1char$ph*"))));
        litem_220->prev=self->head;
        litem_220->next=((void*)0);
        __dec_obj21=litem_220->item,
        litem_220->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_220;
        self->head->next=litem_220;
    }
    else {
        litem_221=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value175=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1254, "struct list_item$1char$ph*"))));
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

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value231 = (void*)0;
struct sSemicolonNode* __result_obj__190;
    ((struct sNodeBase*)(__right_value231=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value231,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __result_obj__190 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__190,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__190;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value232 = (void*)0;
char* __result_obj__191;
    __result_obj__191 = come_increment_ref_count(((char*)(__right_value232=__builtin_string("sSemicolonNode"))));
    (__right_value232 = come_decrement_ref_count(__right_value232, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__191 = come_decrement_ref_count(__result_obj__191, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__191;
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
void* __right_value233 = (void*)0;
struct sLambdaNode* __result_obj__192;
    ((struct sNodeBase*)(__right_value233=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value233,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->mFun=fun;
    __result_obj__192 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__192,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value234 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = come_increment_ref_count(((char*)(__right_value234=__builtin_string("sLambdaNode"))));
    (__right_value234 = come_decrement_ref_count(__right_value234, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__193;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_256;
int block_level_257;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct CVALUE* come_value_258;
void* __right_value237 = (void*)0;
char* __dec_obj23;
void* __right_value276 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__210;
    come_fun_256=info->come_fun;
    info->come_fun=self->mFun;
    block_level_257=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_257;
    come_value_258=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*"))));
    __dec_obj23=come_value_258->c_value,
    come_value_258->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj48=come_value_258->type,
    come_value_258->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    /*b*/ come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_258->var=((void*)0);
    add_come_last_code(info,"%s",come_value_258->c_value);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_258));
    info->come_fun=come_fun_256;
    __result_obj__210 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_258,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__210;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__194;
void* __right_value238 = (void*)0;
struct sType* result_263;
void* __right_value239 = (void*)0;
struct sType* __dec_obj24;
void* __right_value240 = (void*)0;
struct sType* __dec_obj25;
void* __right_value248 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value249 = (void*)0;
struct sType* __dec_obj30;
void* __right_value250 = (void*)0;
struct sType* __dec_obj31;
void* __right_value252 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value253 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value254 = (void*)0;
char* __dec_obj34;
void* __right_value255 = (void*)0;
char* __dec_obj35;
void* __right_value256 = (void*)0;
char* __dec_obj36;
void* __right_value264 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value265 = (void*)0;
char* __dec_obj41;
void* __right_value266 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value274 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value275 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__208;
    if(    self==(void*)0) {
        __result_obj__194 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__194,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__194;
    }
    result_263=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*"));
    if(    self!=((void*)0)) {
        result_263->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_263->mOriginalLoadVarType,
        result_263->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        /*b*/ come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_263->mChannelType,
        result_263->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        /*b*/ come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_263->mGenericsTypes,
        result_263->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        /*b*/ come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_263->mNoSolvedGenericsType,
        result_263->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        /*b*/ come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_263->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_263->mAnyOriginalType,
        result_263->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        /*b*/ come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_263->mSizeNum,
        result_263->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        (__dec_obj32 ? __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_263->mAlignas,
        result_263->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        (__dec_obj33 ? __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_263->mTupleName,
        result_263->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_263->mAttribute,
        result_263->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_263->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_263->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_263->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_263->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_263->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_263->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_263->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_263->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_263->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_263->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_263->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_263->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_263->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_263->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_263->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_263->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_263->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_263->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_263->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_263->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_263->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_263->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_263->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_263->mAsmName,
        result_263->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_263->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_263->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_263->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_263->mArrayNum,
        result_263->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        /*b*/ come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_263->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_263->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_263->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_263->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_263->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_263->mOriginalTypeName,
        result_263->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_263->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_263->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_263->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_263->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_263->mParamTypes,
        result_263->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_263->mParamNames,
        result_263->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_263->mResultType,
        result_263->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_263->mVarArgs=self->mVarArgs;
    }
    __result_obj__208 = come_increment_ref_count(result_263);
    /*c*/ come_call_finalizer3(result_263,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__208,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__208;
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
struct list_item$1sType$ph* it_259;
struct list_item$1sType$ph* prev_it_260;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*c*/ come_call_finalizer3(prev_it_260,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        /*c*/ come_call_finalizer3(self->item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_261;
struct list_item$1sNode$ph* prev_it_262;
    it_261=self->head;
    while(it_261!=((void*)0)) {
        prev_it_262=it_261;
        it_261=it_261->next;
        /*c*/ come_call_finalizer3(prev_it_262,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__195;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct list$1sType$ph* result_264;
struct list_item$1sType$ph* it_265;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
struct list$1sType$ph* __result_obj__198;
    if(    self==((void*)0)) {
        __result_obj__195 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__195,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__195;
    }
    result_264=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1145, "struct list$1sType$ph*"))));
    it_265=self->head;
    while(it_265!=((void*)0)) {
        if(        1) {
            list$1sType$ph_add(result_264,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_265->item)));
        }
        else {
            list$1sType$ph_add(result_264,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_265->item)));
        }
        it_265=it_265->next;
    }
    __result_obj__198 = come_increment_ref_count(result_264);
    /*c*/ come_call_finalizer3(result_264,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__198,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__198;
}

static struct list$1sType$ph* list$1sType$ph_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__196;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__196 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__196,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__196;
}

static struct list$1sType$ph* list$1sType$ph_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value243 = (void*)0;
struct list_item$1sType$ph* litem_266;
struct sType* __dec_obj26;
void* __right_value244 = (void*)0;
struct list_item$1sType$ph* litem_267;
struct sType* __dec_obj27;
void* __right_value245 = (void*)0;
struct list_item$1sType$ph* litem_268;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__197;
    if(    self->len==0) {
        litem_266=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value243=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1164, "struct list_item$1sType$ph*"))));
        litem_266->prev=((void*)0);
        litem_266->next=((void*)0);
        __dec_obj26=litem_266->item,
        litem_266->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_266;
        self->head=litem_266;
    }
    else if(    self->len==1) {
        litem_267=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value244=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1174, "struct list_item$1sType$ph*"))));
        litem_267->prev=self->head;
        litem_267->next=((void*)0);
        __dec_obj27=litem_267->item,
        litem_267->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_267;
        self->head->next=litem_267;
    }
    else {
        litem_268=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value245=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1184, "struct list_item$1sType$ph*"))));
        litem_268->prev=self->tail;
        litem_268->next=((void*)0);
        __dec_obj28=litem_268->item,
        litem_268->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_268;
        self->tail=litem_268;
    }
    self->len++;
    __result_obj__197 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__197;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_269;
struct list_item$1sType$ph* prev_it_270;
    it_269=self->head;
    while(it_269!=((void*)0)) {
        prev_it_270=it_269;
        it_269=it_269->next;
        /*c*/ come_call_finalizer3(prev_it_270,list_item$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__199;
void* __right_value251 = (void*)0;
struct sNode* result_271;
struct sNode* __result_obj__200;
    if(    self==(void*)0) {
        __result_obj__199 = come_increment_ref_count((void*)0);
        ((__result_obj__199) ? __result_obj__199 = come_decrement_ref_count(__result_obj__199, ((struct sNode*)__result_obj__199)->finalize, ((struct sNode*)__result_obj__199)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__199;
    }
    result_271=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_271->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_271->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_271->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_271->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_271->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_271->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_271->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_271->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_271->kind=self->kind;
    }
    __result_obj__200 = come_increment_ref_count(result_271);
    ((result_271) ? result_271 = come_decrement_ref_count(result_271, ((struct sNode*)result_271)->finalize, ((struct sNode*)result_271)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__200) ? __result_obj__200 = come_decrement_ref_count(__result_obj__200, ((struct sNode*)__result_obj__200)->finalize, ((struct sNode*)__result_obj__200)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__200;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__201;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1sNode$ph* result_272;
struct list_item$1sNode$ph* it_273;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1sNode$ph* __result_obj__204;
    if(    self==((void*)0)) {
        __result_obj__201 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__201,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__201;
    }
    result_272=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1145, "struct list$1sNode$ph*"))));
    it_273=self->head;
    while(it_273!=((void*)0)) {
        if(        1) {
            list$1sNode$ph_add(result_272,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_273->item)));
        }
        else {
            list$1sNode$ph_add(result_272,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_273->item)));
        }
        it_273=it_273->next;
    }
    __result_obj__204 = come_increment_ref_count(result_272);
    /*c*/ come_call_finalizer3(result_272,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__204,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__204;
}

static struct list$1sNode$ph* list$1sNode$ph_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__202;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__202 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__202,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static struct list$1sNode$ph* list$1sNode$ph_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value259 = (void*)0;
struct list_item$1sNode$ph* litem_274;
struct sNode* __dec_obj37;
void* __right_value260 = (void*)0;
struct list_item$1sNode$ph* litem_275;
struct sNode* __dec_obj38;
void* __right_value261 = (void*)0;
struct list_item$1sNode$ph* litem_276;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__203;
    if(    self->len==0) {
        litem_274=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value259=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1164, "struct list_item$1sNode$ph*"))));
        litem_274->prev=((void*)0);
        litem_274->next=((void*)0);
        __dec_obj37=litem_274->item,
        litem_274->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj37 ? __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_274;
        self->head=litem_274;
    }
    else if(    self->len==1) {
        litem_275=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value260=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1174, "struct list_item$1sNode$ph*"))));
        litem_275->prev=self->head;
        litem_275->next=((void*)0);
        __dec_obj38=litem_275->item,
        litem_275->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj38 ? __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_275;
        self->head->next=litem_275;
    }
    else {
        litem_276=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value261=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1184, "struct list_item$1sNode$ph*"))));
        litem_276->prev=self->tail;
        litem_276->next=((void*)0);
        __dec_obj39=litem_276->item,
        litem_276->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj39 ? __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_276;
        self->tail=litem_276;
    }
    self->len++;
    __result_obj__203 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__203;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_277;
struct list_item$1sNode$ph* prev_it_278;
    it_277=self->head;
    while(it_277!=((void*)0)) {
        prev_it_278=it_277;
        it_277=it_277->next;
        /*c*/ come_call_finalizer3(prev_it_278,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__205;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1char$ph* result_279;
struct list_item$1char$ph* it_280;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1char$ph* __result_obj__207;
    if(    self==((void*)0)) {
        __result_obj__205 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__205,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__205;
    }
    result_279=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1145, "struct list$1char$ph*"))));
    it_280=self->head;
    while(it_280!=((void*)0)) {
        if(        1) {
            list$1char$ph_add(result_279,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_280->item)));
        }
        else {
            list$1char$ph_add(result_279,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_280->item)));
        }
        it_280=it_280->next;
    }
    __result_obj__207 = come_increment_ref_count(result_279);
    /*c*/ come_call_finalizer3(result_279,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__207,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__207;
}

static struct list$1char$ph* list$1char$ph_add(struct list$1char$ph* self, char* item){
void* __right_value269 = (void*)0;
struct list_item$1char$ph* litem_281;
char* __dec_obj43;
void* __right_value270 = (void*)0;
struct list_item$1char$ph* litem_282;
char* __dec_obj44;
void* __right_value271 = (void*)0;
struct list_item$1char$ph* litem_283;
char* __dec_obj45;
struct list$1char$ph* __result_obj__206;
    if(    self->len==0) {
        litem_281=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value269=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1164, "struct list_item$1char$ph*"))));
        litem_281->prev=((void*)0);
        litem_281->next=((void*)0);
        __dec_obj43=litem_281->item,
        litem_281->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_281;
        self->head=litem_281;
    }
    else if(    self->len==1) {
        litem_282=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value270=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1174, "struct list_item$1char$ph*"))));
        litem_282->prev=self->head;
        litem_282->next=((void*)0);
        __dec_obj44=litem_282->item,
        litem_282->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail=litem_282;
        self->head->next=litem_282;
    }
    else {
        litem_283=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value271=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1184, "struct list_item$1char$ph*"))));
        litem_283->prev=self->tail;
        litem_283->next=((void*)0);
        __dec_obj45=litem_283->item,
        litem_283->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        self->tail->next=litem_283;
        self->tail=litem_283;
    }
    self->len++;
    __result_obj__206 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__206;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_284;
struct list_item$1char$ph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        /*c*/ come_call_finalizer3(prev_it_285,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value277 = (void*)0;
struct list_item$1CVALUE$ph* litem_286;
struct CVALUE* __dec_obj49;
void* __right_value278 = (void*)0;
struct list_item$1CVALUE$ph* litem_287;
struct CVALUE* __dec_obj50;
void* __right_value279 = (void*)0;
struct list_item$1CVALUE$ph* litem_288;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__209;
    if(    self->len==0) {
        litem_286=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value277=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1234, "struct list_item$1CVALUE$ph*"))));
        litem_286->prev=((void*)0);
        litem_286->next=((void*)0);
        __dec_obj49=litem_286->item,
        litem_286->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_286;
        self->head=litem_286;
    }
    else if(    self->len==1) {
        litem_287=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value278=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1244, "struct list_item$1CVALUE$ph*"))));
        litem_287->prev=self->head;
        litem_287->next=((void*)0);
        __dec_obj50=litem_287->item,
        litem_287->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_287;
        self->head->next=litem_287;
    }
    else {
        litem_288=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value279=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1254, "struct list_item$1CVALUE$ph*"))));
        litem_288->prev=self->tail;
        litem_288->next=((void*)0);
        __dec_obj51=litem_288->item,
        litem_288->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_288;
        self->tail=litem_288;
    }
    self->len++;
    __result_obj__209 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__209;
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
void* __right_value280 = (void*)0;
struct sFun* __dec_obj52;
struct sFunNode* __result_obj__211;
    ((struct sNodeBase*)(__right_value280=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value280,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj52=self->mFun,
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    /*b*/ come_call_finalizer3(__dec_obj52,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__211 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__211,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__211;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value281 = (void*)0;
char* __result_obj__212;
    __result_obj__212 = come_increment_ref_count(((char*)(__right_value281=__builtin_string("sFunNode"))));
    (__right_value281 = come_decrement_ref_count(__right_value281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__212 = come_decrement_ref_count(__result_obj__212, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__212;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_289;
int block_level_290;
void* __right_value282 = (void*)0;
    come_fun_289=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_290=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_290;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value282=xsprintf("come_heap_final();\n"))));
            (__right_value282 = come_decrement_ref_count(__right_value282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_289;
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
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sBlock* result_291;
int sline_top_292;
int block_level_293;
char* p_saved_294;
int sline_saved_295;
char* sname_saved_296;
void* __right_value285 = (void*)0;
char* __dec_obj53;
char* __dec_obj54;
struct map$2char$phchar$ph* __dec_obj55;
char* p_299;
int sline_300;
void* __right_value286 = (void*)0;
char* sname_301;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* module_name_302;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct list$1char$ph* params_303;
void* __right_value291 = (void*)0;
char* word_304;
void* __right_value292 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_305=0;
char* Err_306=0;
void* __right_value293 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_307=0;
char* Err_308=0;
void* __right_value294 = (void*)0;
char* __dec_obj56;
void* __right_value295 = (void*)0;
char* __dec_obj57;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
_Bool _if_conditional1;
void* __right_value298 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_312=0;
char* Err_313=0;
struct sBlock* __result_obj__217;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sClassModule* module_314;
void* __right_value301 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_315=0;
char* Err_316=0;
void* __right_value302 = (void*)0;
void* __right_value308 = (void*)0;
struct map$2char$phchar$ph* __dec_obj59;
int i_320;
struct list$1char$ph* o2_saved_321;
char* it_324;
void* __right_value309 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __dec_obj60;
void* __right_value318 = (void*)0;
struct sNode* node_367;
void* __right_value319 = (void*)0;
char* __dec_obj61;
void* __right_value320 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_368=0;
char* Err_369=0;
_Bool omit_semicolon_373;
void* __right_value324 = (void*)0;
char* __dec_obj65;
char* head_388;
void* __right_value325 = (void*)0;
struct sNode* value_389;
char* tail_390;
void* __right_value326 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sNode* node_392;
void* __right_value329 = (void*)0;
char* __dec_obj67;
struct sNode* node_393;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value334 = (void*)0;
struct sNode* __dec_obj69;
void* __right_value335 = (void*)0;
struct sNode* __dec_obj70;
void* __right_value336 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_395=0;
char* Err_396=0;
_Bool omit_semicolon_397;
char* p_398;
char* head_399;
void* __right_value337 = (void*)0;
char* source_400;
void* __right_value338 = (void*)0;
struct sNode* node_401;
void* __right_value339 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_402=0;
char* Err_403=0;
struct sBlock* __result_obj__249;
node_393 = (void*)0;
    result_291=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 117, "struct sBlock*")),info));
    sline_top_292=info->sline_top;
    info->sline_top=info->sline;
    block_level_293=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_294=((void*)0);
        sline_saved_295=0;
        sname_saved_296=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_294) {
                if(                *info->p==0) {
                    info->p=p_saved_294;
                    info->sline=sline_saved_295;
                    __dec_obj53=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_296));
                    __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    p_saved_294=((void*)0);
                    sline_saved_295=0;
                    __dec_obj54=sname_saved_296,
                    sname_saved_296=((void*)0);
                    __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    __dec_obj55=info->module_params,
                    info->module_params=((void*)0);
                    /*b*/ come_call_finalizer3(__dec_obj55,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            p_299=info->p;
            sline_300=info->sline;
            sname_301=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_300;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value287=parse_word(info)));
                (__right_value287 = come_decrement_ref_count(__right_value287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_302=(char*)come_increment_ref_count(parse_word(info));
                params_303=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 173, "struct list$1char$ph*"))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_304=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph_add(params_303,(char*)come_increment_ref_count(word_304));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value292=err_msg(info,"invalid source end")));
                            come_exception_var_c1_305=multiple_assign_var1->v1;
                            Err_306=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_306)?(puts(Err_306),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value292,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_306 = come_decrement_ref_count(Err_306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_304 = come_decrement_ref_count(word_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value293=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_307=multiple_assign_var2->v1;
                            Err_308=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_308)?(puts(Err_308),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value293,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_308 = come_decrement_ref_count(Err_308, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_304 = come_decrement_ref_count(word_304, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_294=info->p;
                sline_saved_295=info->sline;
                __dec_obj56=sname_saved_296,
                sname_saved_296=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                __dec_obj57=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_302));
                __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value297=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value296=__builtin_string(module_name_302))))))==((void*)0))),                (__right_value296 = come_decrement_ref_count(__right_value296, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                /*c*/ come_call_finalizer3(__right_value297,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value298=err_msg(info,"module not found")));
                    come_exception_var_c3_312=multiple_assign_var3->v1;
                    Err_313=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_313)?(puts(Err_313),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value298,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    __result_obj__217 = come_increment_ref_count(((void*)0));
                    (Err_313 = come_decrement_ref_count(Err_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_302 = come_decrement_ref_count(module_name_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(params_303,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (sname_301 = come_decrement_ref_count(sname_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_296 = come_decrement_ref_count(sname_saved_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(result_291,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__217,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__217;
                    (Err_313 = come_decrement_ref_count(Err_313, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_314=((struct sClassModule*)(__right_value300=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value299=__builtin_string(module_name_302))))));
                (__right_value299 = come_decrement_ref_count(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(__right_value300,sClassModule_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                list$1char$ph_length(module_314->mParams)!=list$1char$ph_length(params_303)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value301=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_315=multiple_assign_var4->v1;
                    Err_316=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_316)?(puts(Err_316),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value301,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(1);
                    (Err_316 = come_decrement_ref_count(Err_316, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj59=info->module_params,
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 227, "struct map$2char$phchar$ph*"))));
                /*b*/ come_call_finalizer3(__dec_obj59,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_320=0;
                for(                o2_saved_321=(struct list$1char$ph*)come_increment_ref_count((module_314->mParams)),it_324=list$1char$ph_begin((o2_saved_321));                !list$1char$ph_end((o2_saved_321));                it_324=list$1char$ph_next((o2_saved_321))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_324)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value315=list$1char$ph$p_operator_load_element(params_303,i_320))))));
                    (__right_value315 = come_decrement_ref_count(__right_value315, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_320++;
                }
                /*c*/ come_call_finalizer3(o2_saved_321,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                info->p=module_314->mText;
                info->sline=module_314->mSLine;
                __dec_obj60=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_314->mSName));
                __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (module_name_302 = come_decrement_ref_count(module_name_302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(params_303,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            node_367=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj61=info->sname,
            info->sname=(char*)come_increment_ref_count(node_367->sname(node_367->_protocol_obj));
            __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=node_367->sline(node_367->_protocol_obj);
            if(            node_367==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value320=err_msg(info,"Invalid expression")));
                come_exception_var_c5_368=multiple_assign_var5->v1;
                Err_369=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_369)?(puts(Err_369),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value320,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_369 = come_decrement_ref_count(Err_369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph_push_back(result_291->mNodes,(struct sNode*)come_increment_ref_count(node_367));
            parse_sharp_v5(info);
            if(            node_367->terminated(node_367->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_373=(_Bool)1;
            if(            node_367->terminated(node_367->_protocol_obj)) {
                omit_semicolon_373=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_373=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_291->mOmitSemicolon=omit_semicolon_373;
                if(                omit_semicolon_373&&in_function) {
                    list$1sNode$ph_delete(result_291->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_299;
                    info->sline=sline_300;
                    __dec_obj65=info->sname,
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_301));
                    __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    head_388=info->p;
                    value_389=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_390=info->p;
                    __dec_obj66=value_389,
                    value_389=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_389),info));
                    (__dec_obj66 ? __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
                    char buf_391[tail_390-head_388+1];
                    memset(&buf_391, 0, sizeof(char)                    *(tail_390-head_388+1)                    );
                    memcpy(buf_391,head_388,tail_390-head_388);
                    buf_391[tail_390-head_388]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_392=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_389),(char*)come_increment_ref_count(__builtin_string(buf_391)),info));
                    list$1sNode$ph_push_back(result_291->mNodes,(struct sNode*)come_increment_ref_count(node_392));
                    ((value_389) ? value_389 = come_decrement_ref_count(value_389, ((struct sNode*)value_389)->finalize, ((struct sNode*)value_389)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_392) ? node_392 = come_decrement_ref_count(node_392, ((struct sNode*)node_392)->finalize, ((struct sNode*)node_392)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_301 = come_decrement_ref_count(sname_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_367) ? node_367 = come_decrement_ref_count(node_367, ((struct sNode*)node_367)->finalize, ((struct sNode*)node_367)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_389) ? value_389 = come_decrement_ref_count(value_389, ((struct sNode*)value_389)->finalize, ((struct sNode*)value_389)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_392) ? node_392 = come_decrement_ref_count(node_392, ((struct sNode*)node_392)->finalize, ((struct sNode*)node_392)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_301 = come_decrement_ref_count(sname_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_367) ? node_367 = come_decrement_ref_count(node_367, ((struct sNode*)node_367)->finalize, ((struct sNode*)node_367)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_301 = come_decrement_ref_count(sname_301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_367) ? node_367 = come_decrement_ref_count(node_367, ((struct sNode*)node_367)->finalize, ((struct sNode*)node_367)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_294) {
            if(            info->p==0) {
                info->p=p_saved_294;
                info->sline=sline_saved_295;
                __dec_obj67=info->sname,
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_296));
                __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                p_saved_294=((void*)0);
                sline_saved_295=0;
            }
        }
        (sname_saved_296 = come_decrement_ref_count(sname_saved_296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 331, "struct sNode");
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value331=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 331, "struct sSemicolonNode*")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj69=node_393,
            node_393=(struct sNode*)come_increment_ref_count(_inf_value1);
            (__dec_obj69 ? __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            /*c*/ come_call_finalizer3(__right_value331,sSemicolonNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            list$1sNode$ph_push_back(result_291->mNodes,(struct sNode*)come_increment_ref_count(node_393));
        }
        else {
            __dec_obj70=node_393,
            node_393=(struct sNode*)come_increment_ref_count(expression_v13(info));
            (__dec_obj70 ? __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            parse_sharp_v5(info);
            if(            node_393==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value336=err_msg(info,"Invalid expression")));
                come_exception_var_c6_395=multiple_assign_var6->v1;
                Err_396=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_396)?(puts(Err_396),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value336,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(1);
                (Err_396 = come_decrement_ref_count(Err_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_393->terminated(node_393->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_397=(_Bool)1;
            if(            node_393->terminated(node_393->_protocol_obj)) {
                omit_semicolon_397=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_397=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_291->mOmitSemicolon=omit_semicolon_397;
            list$1sNode$ph_push_back(result_291->mNodes,(struct sNode*)come_increment_ref_count(node_393));
        }
        ((node_393) ? node_393 = come_decrement_ref_count(node_393, ((struct sNode*)node_393)->finalize, ((struct sNode*)node_393)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_398=info->p;
        head_399=info->head;
        source_400=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_400;
        info->head=source_400;
        node_401=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_401==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value339=err_msg(info,"Invalid expression")));
            come_exception_var_c7_402=multiple_assign_var7->v1;
            Err_403=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_403)?(puts(Err_403),exit(0)):(0));
            /*c*/ come_call_finalizer3(__right_value339,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            exit(1);
            (Err_403 = come_decrement_ref_count(Err_403, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph_push_back(result_291->mNodes,(struct sNode*)come_increment_ref_count(node_401));
        info->p=p_398;
        info->head=head_399;
        (source_400 = come_decrement_ref_count(source_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_401) ? node_401 = come_decrement_ref_count(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_293;
    __result_obj__249 = come_increment_ref_count(result_291);
    /*c*/ come_call_finalizer3(result_291,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__249,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__249;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_297;
int i_298;
    for(    i_297=0;    i_297<self->size;    i_297++    ){
        if(        self->item_existance[i_297]) {
            if(            1) {
                (self->items[i_297] = come_decrement_ref_count(self->items[i_297], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_298=0;    i_298<self->size;    i_298++    ){
        if(        self->item_existance[i_298]) {
            if(            1) {
                (self->keys[i_298] = come_decrement_ref_count(self->keys[i_298], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sClassModule* default_value_309;
unsigned int hash_310;
unsigned int it_311;
struct sClassModule* __result_obj__213;
struct sClassModule* __result_obj__214;
struct sClassModule* __result_obj__215;
struct sClassModule* __result_obj__216;
default_value_309 = (void*)0;
    memset(&default_value_309,0,sizeof(struct sClassModule*));
    hash_310=string_get_hash_key(((char*)key))%self->size;
    it_311=hash_310;
    while((_Bool)1) {
        if(        self->item_existance[it_311]) {
            if(            string_equals(self->keys[it_311],key)) {
                __result_obj__213 = come_increment_ref_count(self->items[it_311]);
                /*c*/ come_call_finalizer3(default_value_309,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__213,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__213;
            }
            it_311++;
            if(            it_311>=self->size) {
                it_311=0;
            }
            else if(            it_311==hash_310) {
                __result_obj__214 = come_increment_ref_count(default_value_309);
                /*c*/ come_call_finalizer3(default_value_309,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__214,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__214;
            }
        }
        else {
            __result_obj__215 = come_increment_ref_count(default_value_309);
            /*c*/ come_call_finalizer3(default_value_309,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__215,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__215;
        }
    }
    __result_obj__216 = come_increment_ref_count(default_value_309);
    /*c*/ come_call_finalizer3(default_value_309,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__216,sClassModule_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__216;
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
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
int i_317;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1char$ph* __dec_obj58;
struct map$2char$phchar$ph* __result_obj__219;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value303=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2049, "char**"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value304=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2050, "char**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value305=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2051, "_Bool*"))));
    for(    i_317=0;    i_317<128;    i_317++    ){
        self->item_existance[i_317]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj58=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2061, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj58,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__219 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__219,map$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__219;
}

static struct list$1char$p* list$1char$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__218;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__218 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__218,list$1char$p$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__218;
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_318;
int i_319;
    for(    i_318=0;    i_318<self->size;    i_318++    ){
        if(        self->item_existance[i_318]) {
            if(            1) {
                (self->items[i_318] = come_decrement_ref_count(self->items[i_318], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_319=0;    i_319<self->size;    i_319++    ){
        if(        self->item_existance[i_319]) {
            if(            1) {
                (self->keys[i_319] = come_decrement_ref_count(self->keys[i_319], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph_begin(struct list$1char$ph* self){
char* result_322;
char* __result_obj__220;
char* __result_obj__221;
char* result_323;
char* __result_obj__222;
result_322 = (void*)0;
result_323 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_322,0,sizeof(char*));
        __result_obj__220 = result_322;
        return __result_obj__220;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__221 = self->it->item;
        return __result_obj__221;
    }
    memset(&result_323,0,sizeof(char*));
    __result_obj__222 = result_323;
    return __result_obj__222;
}

static _Bool list$1char$ph_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph_next(struct list$1char$ph* self){
char* result_325;
char* __result_obj__223;
char* __result_obj__224;
char* result_326;
char* __result_obj__225;
result_325 = (void*)0;
result_326 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_325,0,sizeof(char*));
        __result_obj__223 = result_325;
        return __result_obj__223;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__224 = self->it->item;
        return __result_obj__224;
    }
    memset(&result_326,0,sizeof(char*));
    __result_obj__225 = result_326;
    return __result_obj__225;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_344;
unsigned int it_345;
_Bool same_key_exist_362;
char* it2_363;
struct map$2char$phchar$ph* __result_obj__240;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph_rehash(self);
    }
    hash_344=string_get_hash_key(((char*)key))%self->size;
    it_345=hash_344;
    while((_Bool)1) {
        if(        self->item_existance[it_345]) {
            if(            string_equals(self->keys[it_345],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_345]);
                    (self->keys[it_345] = come_decrement_ref_count(self->keys[it_345], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_345]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_345]);
                    self->keys[it_345]=key;
                }
                if(                1) {
                    (self->items[it_345] = come_decrement_ref_count(self->items[it_345], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_345]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_345]=item;
                }
                break;
            }
            it_345++;
            if(            it_345>=self->size) {
                it_345=0;
            }
            else if(            it_345==hash_344) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_345]=(_Bool)1;
            if(            1) {
                self->keys[it_345]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_345]=key;
            }
            if(            1) {
                self->items[it_345]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_345]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_362=(_Bool)0;
    for(    it2_363=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_363=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_363,key)) {
            same_key_exist_362=(_Bool)1;
        }
    }
    if(    !same_key_exist_362) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__240 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__240;
}

static void map$2char$phchar$ph_rehash(struct map$2char$phchar$ph* self){
int size_327;
void* __right_value310 = (void*)0;
char** keys_328;
void* __right_value311 = (void*)0;
char** items_329;
void* __right_value312 = (void*)0;
_Bool* item_existance_330;
int len_331;
char* it_334;
char* default_value_337;
void* __right_value313 = (void*)0;
char* it2_338;
unsigned int hash_341;
int n_342;
char* default_value_343;
void* __right_value314 = (void*)0;
default_value_337 = (void*)0;
default_value_343 = (void*)0;
    size_327=self->size*10;
    keys_328=(char**)come_increment_ref_count(((char**)(__right_value310=(char**)come_calloc(1, sizeof(char*)*(1*(size_327)), "./comelang.h", 2288, "char**"))));
    items_329=(char**)come_increment_ref_count(((char**)(__right_value311=(char**)come_calloc(1, sizeof(char*)*(1*(size_327)), "./comelang.h", 2289, "char**"))));
    item_existance_330=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value312=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_327)), "./comelang.h", 2290, "_Bool*"))));
    len_331=0;
    for(    it_334=map$2char$phchar$ph_begin(self);    !map$2char$phchar$ph_end(self);    it_334=map$2char$phchar$ph_next(self)    ){
        memset(&default_value_337,0,sizeof(char*));
        it2_338=((char*)(__right_value313=map$2char$phchar$ph_at(self,it_334,(char*)come_increment_ref_count(default_value_337))));
        (__right_value313 = come_decrement_ref_count(__right_value313, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_341=string_get_hash_key(((char*)it_334))%size_327;
        n_342=hash_341;
        while((_Bool)1) {
            if(            item_existance_330[n_342]) {
                n_342++;
                if(                n_342>=size_327) {
                    n_342=0;
                }
                else if(                n_342==hash_341) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_330[n_342]=(_Bool)1;
                keys_328[n_342]=it_334;
                items_329[n_342]=((char*)(__right_value314=map$2char$phchar$ph_at(self,it_334,(char*)come_increment_ref_count(default_value_343))));
                (__right_value314 = come_decrement_ref_count(__right_value314, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_331++;
                (default_value_343 = come_decrement_ref_count(default_value_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_343 = come_decrement_ref_count(default_value_343, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_337 = come_decrement_ref_count(default_value_337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_328;
    self->items=items_329;
    self->item_existance=item_existance_330;
    self->size=size_327;
    self->len=len_331;
}

static char* map$2char$phchar$ph_begin(struct map$2char$phchar$ph* self){
char* result_332;
char* __result_obj__226;
char* __result_obj__227;
char* result_333;
char* __result_obj__228;
result_332 = (void*)0;
result_333 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_332,0,sizeof(char*));
        __result_obj__226 = result_332;
        return __result_obj__226;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__227 = self->key_list->it->item;
        return __result_obj__227;
    }
    memset(&result_333,0,sizeof(char*));
    __result_obj__228 = result_333;
    return __result_obj__228;
}

static _Bool map$2char$phchar$ph_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph_next(struct map$2char$phchar$ph* self){
char* result_335;
char* __result_obj__229;
char* __result_obj__230;
char* result_336;
char* __result_obj__231;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_335,0,sizeof(char*));
        __result_obj__229 = result_335;
        return __result_obj__229;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__230 = self->key_list->it->item;
        return __result_obj__230;
    }
    memset(&result_336,0,sizeof(char*));
    __result_obj__231 = result_336;
    return __result_obj__231;
}

static char* map$2char$phchar$ph_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_339;
unsigned int it_340;
char* __result_obj__232;
char* __result_obj__233;
char* __result_obj__234;
char* __result_obj__235;
    hash_339=string_get_hash_key(((char*)key))%self->size;
    it_340=hash_339;
    while((_Bool)1) {
        if(        self->item_existance[it_340]) {
            if(            string_equals(self->keys[it_340],key)) {
                __result_obj__232 = come_increment_ref_count(self->items[it_340]);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__232 = come_decrement_ref_count(__result_obj__232, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__232;
            }
            it_340++;
            if(            it_340>=self->size) {
                it_340=0;
            }
            else if(            it_340==hash_339) {
                __result_obj__233 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__233 = come_decrement_ref_count(__result_obj__233, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__233;
            }
        }
        else {
            __result_obj__234 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__234 = come_decrement_ref_count(__result_obj__234, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__234;
        }
    }
    __result_obj__235 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__235 = come_decrement_ref_count(__result_obj__235, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__235;
}

static struct list$1char$ph* list$1char$ph_remove(struct list$1char$ph* self, char* item){
int it2_346;
struct list_item$1char$ph* it_347;
struct list$1char$ph* __result_obj__239;
    it2_346=0;
    it_347=self->head;
    while(it_347!=((void*)0)) {
        if(        string_equals(it_347->item,item)) {
            list$1char$ph_delete(self,it2_346,it2_346+1);
            break;
        }
        it2_346++;
        it_347=it_347->next;
    }
    __result_obj__239 = self;
    return __result_obj__239;
}

static struct list$1char$ph* list$1char$ph_delete(struct list$1char$ph* self, int head, int tail){
int tmp_348;
struct list$1char$ph* __result_obj__236;
struct list_item$1char$ph* it_351;
int i_352;
struct list_item$1char$ph* prev_it_353;
struct list_item$1char$ph* it_354;
int i_355;
struct list_item$1char$ph* prev_it_356;
struct list_item$1char$ph* it_357;
struct list_item$1char$ph* head_prev_it_358;
struct list_item$1char$ph* tail_it_359;
int i_360;
struct list_item$1char$ph* prev_it_361;
struct list$1char$ph* __result_obj__238;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_348=tail;
        tail=head;
        head=tmp_348;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__236 = self;
        return __result_obj__236;
    }
    if(    head==0&&tail==self->len) {
        list$1char$ph_reset(self);
    }
    else if(    head==0) {
        it_351=self->head;
        i_352=0;
        while(it_351!=((void*)0)) {
            if(            i_352<tail) {
                prev_it_353=it_351;
                it_351=it_351->next;
                i_352++;
                /*c*/ come_call_finalizer3(prev_it_353,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_352==tail) {
                self->head=it_351;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_351=it_351->next;
                i_352++;
            }
        }
    }
    else if(    tail==self->len) {
        it_354=self->head;
        i_355=0;
        while(it_354!=((void*)0)) {
            if(            i_355==head) {
                self->tail=it_354->prev;
                self->tail->next=((void*)0);
            }
            if(            i_355>=head) {
                prev_it_356=it_354;
                it_354=it_354->next;
                i_355++;
                /*c*/ come_call_finalizer3(prev_it_356,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_354=it_354->next;
                i_355++;
            }
        }
    }
    else {
        it_357=self->head;
        head_prev_it_358=((void*)0);
        tail_it_359=((void*)0);
        i_360=0;
        while(it_357!=((void*)0)) {
            if(            i_360==head) {
                head_prev_it_358=it_357->prev;
            }
            if(            i_360==tail) {
                tail_it_359=it_357;
            }
            if(            i_360>=head&&i_360<tail) {
                prev_it_361=it_357;
                it_357=it_357->next;
                i_360++;
                /*c*/ come_call_finalizer3(prev_it_361,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_357=it_357->next;
                i_360++;
            }
        }
        if(        head_prev_it_358!=((void*)0)) {
            head_prev_it_358->next=tail_it_359;
        }
        if(        tail_it_359!=((void*)0)) {
            tail_it_359->prev=head_prev_it_358;
        }
    }
    __result_obj__238 = self;
    return __result_obj__238;
}

static struct list$1char$ph* list$1char$ph_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_349;
struct list_item$1char$ph* prev_it_350;
struct list$1char$ph* __result_obj__237;
    it_349=self->head;
    while(it_349!=((void*)0)) {
        prev_it_350=it_349;
        it_349=it_349->next;
        /*c*/ come_call_finalizer3(prev_it_350,list_item$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__237 = self;
    return __result_obj__237;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_364;
int i_365;
char* __result_obj__241;
char* default_value_366;
char* __result_obj__242;
default_value_366 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_364=self->head;
    i_365=0;
    while(it_364!=((void*)0)) {
        if(        position==i_365) {
            __result_obj__241 = come_increment_ref_count(it_364->item);
            (__result_obj__241 = come_decrement_ref_count(__result_obj__241, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__241;
        }
        it_364=it_364->next;
        i_365++;
    }
    memset(&default_value_366,0,sizeof(char*));
    __result_obj__242 = come_increment_ref_count(default_value_366);
    (default_value_366 = come_decrement_ref_count(default_value_366, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__242 = come_decrement_ref_count(__result_obj__242, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__242;
}

static struct list$1sNode$ph* list$1sNode$ph_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value321 = (void*)0;
struct list_item$1sNode$ph* litem_370;
struct sNode* __dec_obj62;
void* __right_value322 = (void*)0;
struct list_item$1sNode$ph* litem_371;
struct sNode* __dec_obj63;
void* __right_value323 = (void*)0;
struct list_item$1sNode$ph* litem_372;
struct sNode* __dec_obj64;
struct list$1sNode$ph* __result_obj__243;
    if(    self->len==0) {
        litem_370=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value321=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1234, "struct list_item$1sNode$ph*"))));
        litem_370->prev=((void*)0);
        litem_370->next=((void*)0);
        __dec_obj62=litem_370->item,
        litem_370->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_370;
        self->head=litem_370;
    }
    else if(    self->len==1) {
        litem_371=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value322=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1244, "struct list_item$1sNode$ph*"))));
        litem_371->prev=self->head;
        litem_371->next=((void*)0);
        __dec_obj63=litem_371->item,
        litem_371->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail=litem_371;
        self->head->next=litem_371;
    }
    else {
        litem_372=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value323=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1254, "struct list_item$1sNode$ph*"))));
        litem_372->prev=self->tail;
        litem_372->next=((void*)0);
        __dec_obj64=litem_372->item,
        litem_372->item=(struct sNode*)come_increment_ref_count(item);
        (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        self->tail->next=litem_372;
        self->tail=litem_372;
    }
    self->len++;
    __result_obj__243 = self;
    ((item) ? item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__243;
}

static struct list$1sNode$ph* list$1sNode$ph_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_374;
struct list$1sNode$ph* __result_obj__244;
struct list_item$1sNode$ph* it_377;
int i_378;
struct list_item$1sNode$ph* prev_it_379;
struct list_item$1sNode$ph* it_380;
int i_381;
struct list_item$1sNode$ph* prev_it_382;
struct list_item$1sNode$ph* it_383;
struct list_item$1sNode$ph* head_prev_it_384;
struct list_item$1sNode$ph* tail_it_385;
int i_386;
struct list_item$1sNode$ph* prev_it_387;
struct list$1sNode$ph* __result_obj__246;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_374=tail;
        tail=head;
        head=tmp_374;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__244 = self;
        return __result_obj__244;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph_reset(self);
    }
    else if(    head==0) {
        it_377=self->head;
        i_378=0;
        while(it_377!=((void*)0)) {
            if(            i_378<tail) {
                prev_it_379=it_377;
                it_377=it_377->next;
                i_378++;
                /*c*/ come_call_finalizer3(prev_it_379,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else if(            i_378==tail) {
                self->head=it_377;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_377=it_377->next;
                i_378++;
            }
        }
    }
    else if(    tail==self->len) {
        it_380=self->head;
        i_381=0;
        while(it_380!=((void*)0)) {
            if(            i_381==head) {
                self->tail=it_380->prev;
                self->tail->next=((void*)0);
            }
            if(            i_381>=head) {
                prev_it_382=it_380;
                it_380=it_380->next;
                i_381++;
                /*c*/ come_call_finalizer3(prev_it_382,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_380=it_380->next;
                i_381++;
            }
        }
    }
    else {
        it_383=self->head;
        head_prev_it_384=((void*)0);
        tail_it_385=((void*)0);
        i_386=0;
        while(it_383!=((void*)0)) {
            if(            i_386==head) {
                head_prev_it_384=it_383->prev;
            }
            if(            i_386==tail) {
                tail_it_385=it_383;
            }
            if(            i_386>=head&&i_386<tail) {
                prev_it_387=it_383;
                it_383=it_383->next;
                i_386++;
                /*c*/ come_call_finalizer3(prev_it_387,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                self->len--;
            }
            else {
                it_383=it_383->next;
                i_386++;
            }
        }
        if(        head_prev_it_384!=((void*)0)) {
            head_prev_it_384->next=tail_it_385;
        }
        if(        tail_it_385!=((void*)0)) {
            tail_it_385->prev=head_prev_it_384;
        }
    }
    __result_obj__246 = self;
    return __result_obj__246;
}

static struct list$1sNode$ph* list$1sNode$ph_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_375;
struct list_item$1sNode$ph* prev_it_376;
struct list$1sNode$ph* __result_obj__245;
    it_375=self->head;
    while(it_375!=((void*)0)) {
        prev_it_376=it_375;
        it_375=it_375->next;
        /*c*/ come_call_finalizer3(prev_it_376,list_item$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__245 = self;
    return __result_obj__245;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__247;
void* __right_value332 = (void*)0;
struct sSemicolonNode* result_394;
void* __right_value333 = (void*)0;
char* __dec_obj68;
struct sSemicolonNode* __result_obj__248;
    if(    self==(void*)0) {
        __result_obj__247 = (void*)0;
        return __result_obj__247;
    }
    result_394=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*"));
    if(    self!=((void*)0)) {
        result_394->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj68=result_394->sname,
        result_394->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->sline_real=self->sline_real;
    }
    __result_obj__248 = result_394;
    /*c*/ come_call_finalizer3(result_394,sSemicolonNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__248;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_404;
struct sVarTable* old_table_405;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sVarTable* __dec_obj71;
struct sVarTable* current_loop_vtable_406;
int i_407;
struct list$1char$ph* o2_saved_408;
char* name_409;
void* __right_value342 = (void*)0;
struct sType* type_410;
void* __right_value343 = (void*)0;
int block_level_414;
int i_415;
struct list$1sNode$ph* o2_saved_416;
struct sNode* node_419;
struct list$1sRightValueObject$ph* right_value_objects_422;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj72;
char* __dec_obj73;
char* __dec_obj74;
int stack_num_before_427;
int sline_428;
void* __right_value346 = (void*)0;
char* sname_429;
void* __right_value347 = (void*)0;
char* __dec_obj75;
_Bool Value_430;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_431;
void* __right_value354 = (void*)0;
struct CVALUE* come_value2_432;
void* __right_value355 = (void*)0;
char* __dec_obj80;
void* __right_value356 = (void*)0;
struct CVALUE* come_value2_434;
struct sVar* var__435;
void* __right_value357 = (void*)0;
struct CVALUE* come_value3_436;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_453=0;
char* Err_454=0;
_Bool _if_conditional2;
int __result_obj__261;
void* __right_value360 = (void*)0;
struct sType* __dec_obj81;
void* __right_value361 = (void*)0;
char* c_value_455;
void* __right_value362 = (void*)0;
char* __dec_obj82;
void* __right_value363 = (void*)0;
char* __dec_obj83;
void* __right_value364 = (void*)0;
char* __dec_obj84;
_Bool Value_456;
void* __right_value365 = (void*)0;
char* __dec_obj85;
struct list$1sRightValueObject$ph* __dec_obj86;
void* __if_result__0_459 = (void*)0;
struct list$1sVar$ph* o2_saved_460;
struct sVar* it_463;
void* __right_value366 = (void*)0;
struct list$1sVar$ph* __dec_obj87;
memset(&i_407, 0, sizeof(int));
memset(&i_415, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_404=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_405=info->lv_table;
    if(    !no_var_table) {
        __dec_obj71=block->mVarTable,
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 405, "struct sVarTable*")),(_Bool)0,old_table_405));
        /*b*/ come_call_finalizer3(__dec_obj71,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_406=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_408=(param_names),name_409=list$1char$ph_begin((o2_saved_408));        !list$1char$ph_end((o2_saved_408));        name_409=list$1char$ph_next((o2_saved_408))        ){
            type_410=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types,i_407));
            type_410->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_409,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_410)),info,(_Bool)1);
            i_407++;
            /*c*/ come_call_finalizer3(type_410,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    block_level_414=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_416=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_419=list$1sNode$ph_begin((o2_saved_416));        !list$1sNode$ph_end((o2_saved_416));        node_419=list$1sNode$ph_next((o2_saved_416))        ){
            right_value_objects_422=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj72=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 435, "struct list$1sRightValueObject$ph*"))));
            /*b*/ come_call_finalizer3(__dec_obj72,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj73=info->module->mLastCode,
            info->module->mLastCode=((void*)0);
            __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            __dec_obj74=info->module->mLastCode2,
            info->module->mLastCode2=((void*)0);
            __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            stack_num_before_427=list$1CVALUE$ph_length(info->stack);
            sline_428=info->sline;
            sname_429=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_419->sline(node_419->_protocol_obj);
            __dec_obj75=info->sname,
            info->sname=(char*)come_increment_ref_count(node_419->sname(node_419->_protocol_obj));
            __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            i_415==list$1sNode$ph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_430=node_compile(node_419,info);
                if(                !Value_430) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph_length(info->stack)==stack_num_before_427+1) {
                    come_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    string_operator_equals(come_value_431->type->mClass->mName,"void")&&come_value_431->type->mPointerNum==0) {
                        come_value2_432=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_431));
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_432));
                        __dec_obj80=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_432->c_value));
                        __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_432,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    else {
                        come_value2_434=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_431));
                        var__435=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__435) {
                            come_value3_436=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 470, "struct CVALUE*"));
                            if(                            var__435->mType->mClass=="void"&&var__435->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value359=check_assign_type("invalid if result value",var__435->mType,((struct sType*)(__right_value358=come_call_cloner(sType_clone, come_value_431->type))),come_value3_436,(_Bool)0,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_453=multiple_assign_var8->v1;
                                Err_454=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_454)),                                /*c*/ come_call_finalizer3(__right_value358,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                /*c*/ come_call_finalizer3(__right_value359,tuple2$2bool$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0),
                                _if_conditional2) {
                                    __result_obj__261 = (_Bool)1;
                                    (Err_454 = come_decrement_ref_count(Err_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(come_value3_436,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value2_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(come_value_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    /*c*/ come_call_finalizer3(right_value_objects_422,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    (sname_429 = come_decrement_ref_count(sname_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    /*c*/ come_call_finalizer3(o2_saved_416,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                                    return __result_obj__261;
                                }
                                else {
                                }
                                (Err_454 = come_decrement_ref_count(Err_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj81=var__435->mType,
                            var__435->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_431->type));
                            /*b*/ come_call_finalizer3(__dec_obj81,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_431->type->mHeap) {
                                c_value_455=(char*)come_increment_ref_count(increment_ref_count_object(come_value_431->type,come_value_431->c_value,info));
                                __dec_obj82=come_value2_434->c_value,
                                come_value2_434->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__435->mCValueName,c_value_455));
                                __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                                (c_value_455 = come_decrement_ref_count(c_value_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj83=come_value2_434->c_value,
                                come_value2_434->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__435->mCValueName,come_value_431->c_value));
                                __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                            }
                            /*c*/ come_call_finalizer3(come_value3_436,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        }
                        list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_434));
                        __dec_obj84=info->module->mLastCode,
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_434->c_value));
                        __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        /*c*/ come_call_finalizer3(come_value2_434,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    }
                    /*c*/ come_call_finalizer3(come_value_431,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                }
            }
            else {
                Value_456=node_compile(node_419,info);
                if(                !Value_456) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_428;
            __dec_obj85=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_429));
            __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_427);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph_reset(info->right_value_objects);
            }
            __dec_obj86=info->right_value_objects,
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_422);
            /*b*/ come_call_finalizer3(__dec_obj86,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_415++;
            /*c*/ come_call_finalizer3(right_value_objects_422,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_429 = come_decrement_ref_count(sname_429, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        /*c*/ come_call_finalizer3(o2_saved_416,list$1sNode$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_414==0) {
            for(            o2_saved_460=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_463=list$1sVar$ph_begin((o2_saved_460));            !list$1sVar$ph_end((o2_saved_460));            it_463=list$1sVar$ph_next((o2_saved_460))            ){
                free_object(((struct sType*)(__right_value366=come_call_cloner(sType_clone, it_463->mType))),it_463->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                /*c*/ come_call_finalizer3(__right_value366,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_460,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            __dec_obj87=info->match_it_var,
            __if_result__0_459=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            /*b*/ come_call_finalizer3(__dec_obj87,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        /*c*/ come_call_finalizer3(__if_result__0_459,list$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->lv_table=old_table_405;
    info->block_level=block_level_414;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_406;
    info->inhibits_output_code=inhibits_output_code_404;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_411;
int i_412;
struct sType* __result_obj__250;
struct sType* default_value_413;
struct sType* __result_obj__251;
default_value_413 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_411=self->head;
    i_412=0;
    while(it_411!=((void*)0)) {
        if(        position==i_412) {
            __result_obj__250 = come_increment_ref_count(it_411->item);
            /*c*/ come_call_finalizer3(__result_obj__250,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__250;
        }
        it_411=it_411->next;
        i_412++;
    }
    memset(&default_value_413,0,sizeof(struct sType*));
    __result_obj__251 = come_increment_ref_count(default_value_413);
    /*c*/ come_call_finalizer3(default_value_413,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__251,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__251;
}

static int list$1sNode$ph_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph_begin(struct list$1sNode$ph* self){
struct sNode* result_417;
struct sNode* __result_obj__252;
struct sNode* __result_obj__253;
struct sNode* result_418;
struct sNode* __result_obj__254;
result_417 = (void*)0;
result_418 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_417,0,sizeof(struct sNode*));
        __result_obj__252 = result_417;
        return __result_obj__252;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__253 = self->it->item;
        return __result_obj__253;
    }
    memset(&result_418,0,sizeof(struct sNode*));
    __result_obj__254 = result_418;
    return __result_obj__254;
}

static _Bool list$1sNode$ph_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph_next(struct list$1sNode$ph* self){
struct sNode* result_420;
struct sNode* __result_obj__255;
struct sNode* __result_obj__256;
struct sNode* result_421;
struct sNode* __result_obj__257;
result_420 = (void*)0;
result_421 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_420,0,sizeof(struct sNode*));
        __result_obj__255 = result_420;
        return __result_obj__255;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__256 = self->it->item;
        return __result_obj__256;
    }
    memset(&result_421,0,sizeof(struct sNode*));
    __result_obj__257 = result_421;
    return __result_obj__257;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__258;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__258 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__258,list$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__258;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_423;
struct list_item$1sRightValueObject$ph* prev_it_424;
    it_423=self->head;
    while(it_423!=((void*)0)) {
        prev_it_424=it_423;
        it_423=it_423->next;
        /*c*/ come_call_finalizer3(prev_it_424,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sRightValueObject$ph* it_425;
struct list_item$1sRightValueObject$ph* prev_it_426;
    it_425=self->head;
    while(it_425!=((void*)0)) {
        prev_it_426=it_425;
        it_425=it_425->next;
        /*c*/ come_call_finalizer3(prev_it_426,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
}

static int list$1CVALUE$ph_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__259;
void* __right_value349 = (void*)0;
struct CVALUE* result_433;
void* __right_value350 = (void*)0;
char* __dec_obj76;
void* __right_value351 = (void*)0;
struct sType* __dec_obj77;
void* __right_value352 = (void*)0;
char* __dec_obj78;
void* __right_value353 = (void*)0;
char* __dec_obj79;
struct CVALUE* __result_obj__260;
    if(    self==(void*)0) {
        __result_obj__259 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__259,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__259;
    }
    result_433=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj76=result_433->c_value,
        result_433->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj77=result_433->type,
        result_433->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        /*b*/ come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_433->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_433->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj78=result_433->c_value_without_right_value_objects,
        result_433->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj79=result_433->c_value_without_cast_object_value,
        result_433->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__260 = come_increment_ref_count(result_433);
    /*c*/ come_call_finalizer3(result_433,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__260,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__260;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_437;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_438;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_437=left->head;
    it2_438=right->head;
    while(it_437!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph_equals(it_437->item,it2_438->item)) {
            return (_Bool)0;
        }
        it_437=it_437->next;
        it2_438=it2_438->next;
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
struct list_item$1sType$ph* it_439;
struct list_item$1sType$ph* it2_440;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_439=left->head;
    it2_440=right->head;
    while(it_439!=((void*)0)) {
        if(        !sType_equals(it_439->item,it2_440->item)) {
            return (_Bool)0;
        }
        it_439=it_439->next;
        it2_440=it2_440->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_441;
struct list_item$1sNode$ph* it2_442;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_441=left->head;
    it2_442=right->head;
    while(it_441!=((void*)0)) {
        if(        !sNode_equals(it_441->item,it2_442->item)) {
            return (_Bool)0;
        }
        it_441=it_441->next;
        it2_442=it2_442->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_443;
struct list_item$1char$ph* it2_444;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_443=left->head;
    it2_444=right->head;
    while(it_443!=((void*)0)) {
        if(        !string_equals(it_443->item,it2_444->item)) {
            return (_Bool)0;
        }
        it_443=it_443->next;
        it2_444=it2_444->next;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_445;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_446;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_445=left->head;
    it2_446=right->head;
    while(it_445!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_445->item,it2_446->item))) {
            return (_Bool)0;
        }
        it_445=it_445->next;
        it2_446=it2_446->next;
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
struct list_item$1sType$ph* it_447;
struct list_item$1sType$ph* it2_448;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_447=left->head;
    it2_448=right->head;
    while(it_447!=((void*)0)) {
        if(        !(sType_operator_equals(it_447->item,it2_448->item))) {
            return (_Bool)0;
        }
        it_447=it_447->next;
        it2_448=it2_448->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_449;
struct list_item$1sNode$ph* it2_450;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_449=left->head;
    it2_450=right->head;
    while(it_449!=((void*)0)) {
        if(        !(sNode_operator_equals(it_449->item,it2_450->item))) {
            return (_Bool)0;
        }
        it_449=it_449->next;
        it2_450=it2_450->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_451;
struct list_item$1char$ph* it2_452;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_451=left->head;
    it2_452=right->head;
    while(it_451!=((void*)0)) {
        if(        !(string_operator_equals(it_451->item,it2_452->item))) {
            return (_Bool)0;
        }
        it_451=it_451->next;
        it2_452=it2_452->next;
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
struct list_item$1sRightValueObject$ph* it_457;
struct list_item$1sRightValueObject$ph* prev_it_458;
struct list$1sRightValueObject$ph* __result_obj__262;
    it_457=self->head;
    while(it_457!=((void*)0)) {
        prev_it_458=it_457;
        it_457=it_457->next;
        /*c*/ come_call_finalizer3(prev_it_458,list_item$1sRightValueObject$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__262 = self;
    return __result_obj__262;
}

static struct sVar* list$1sVar$ph_begin(struct list$1sVar$ph* self){
struct sVar* result_461;
struct sVar* __result_obj__263;
struct sVar* __result_obj__264;
struct sVar* result_462;
struct sVar* __result_obj__265;
result_461 = (void*)0;
result_462 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_461,0,sizeof(struct sVar*));
        __result_obj__263 = result_461;
        return __result_obj__263;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__264 = self->it->item;
        return __result_obj__264;
    }
    memset(&result_462,0,sizeof(struct sVar*));
    __result_obj__265 = result_462;
    return __result_obj__265;
}

static _Bool list$1sVar$ph_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph_next(struct list$1sVar$ph* self){
struct sVar* result_464;
struct sVar* __result_obj__266;
struct sVar* __result_obj__267;
struct sVar* result_465;
struct sVar* __result_obj__268;
result_464 = (void*)0;
result_465 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_464,0,sizeof(struct sVar*));
        __result_obj__266 = result_464;
        return __result_obj__266;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__267 = self->it->item;
        return __result_obj__267;
    }
    memset(&result_465,0,sizeof(struct sVar*));
    __result_obj__268 = result_465;
    return __result_obj__268;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_466;
struct list_item$1sVar$ph* prev_it_467;
    it_466=self->head;
    while(it_466!=((void*)0)) {
        prev_it_467=it_466;
        it_466=it_466->next;
        /*c*/ come_call_finalizer3(prev_it_467,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct list_item$1sVar$ph* it_468;
struct list_item$1sVar$ph* prev_it_469;
    it_468=self->head;
    while(it_468!=((void*)0)) {
        prev_it_469=it_468;
        it_468=it_468->next;
        /*c*/ come_call_finalizer3(prev_it_469,list_item$1sVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
char* head_470;
_Bool dquort_471;
_Bool squort_472;
int sline_473;
int nest_474;
void* __right_value367 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_475=0;
char* Err_476=0;
void* __right_value368 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_477=0;
char* Err_478=0;
void* __right_value369 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_479=0;
char* Err_480=0;
void* __right_value370 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_481=0;
char* Err_482=0;
void* __right_value371 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_483=0;
char* Err_484=0;
void* __right_value372 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_485=0;
char* Err_486=0;
void* __right_value373 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_487=0;
char* Err_488=0;
void* __right_value374 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_489=0;
char* Err_490=0;
char* tail_491;
void* __right_value375 = (void*)0;
char* buf_492;
void* __right_value376 = (void*)0;
char* __result_obj__269;
    head_470=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_471=(_Bool)0;
        squort_472=(_Bool)0;
        sline_473=0;
        nest_474=0;
        while(1) {
            if(            dquort_471) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value367=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_473)));
                        come_exception_var_c8_475=multiple_assign_var9->v1;
                        Err_476=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                        ((Err_476)?(puts(Err_476),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value367,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_476 = come_decrement_ref_count(Err_476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_471=!dquort_471;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value368=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_473)));
                        come_exception_var_c9_477=multiple_assign_var10->v1;
                        Err_478=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_478)?(puts(Err_478),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value368,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_478 = come_decrement_ref_count(Err_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value369=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_473)));
                        come_exception_var_c10_479=multiple_assign_var11->v1;
                        Err_480=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_480)?(puts(Err_480),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value369,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_480 = come_decrement_ref_count(Err_480, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_472) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value370=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_473)));
                        come_exception_var_c11_481=multiple_assign_var12->v1;
                        Err_482=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_482)?(puts(Err_482),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value370,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_482 = come_decrement_ref_count(Err_482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_472=!squort_472;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value371=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_473)));
                        come_exception_var_c12_483=multiple_assign_var13->v1;
                        Err_484=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_484)?(puts(Err_484),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value371,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_484 = come_decrement_ref_count(Err_484, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value372=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_473)));
                        come_exception_var_c13_485=multiple_assign_var14->v1;
                        Err_486=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_486)?(puts(Err_486),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value372,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_486 = come_decrement_ref_count(Err_486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_473=info->sline;
                info->p++;
                squort_472=!squort_472;
            }
            else if(            *info->p==34) {
                sline_473=info->sline;
                info->p++;
                dquort_471=!dquort_471;
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
                nest_474++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_474==0) {
                    break;
                }
                nest_474--;
            }
            else if(            *info->p==0) {
                multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value373=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c14_487=multiple_assign_var15->v1;
                Err_488=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                ((Err_488)?(puts(Err_488),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value373,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_488 = come_decrement_ref_count(Err_488, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value374=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c15_489=multiple_assign_var16->v1;
        Err_490=(char*)come_increment_ref_count(multiple_assign_var16->v2);
        ((Err_490)?(puts(Err_490),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value374,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (Err_490 = come_decrement_ref_count(Err_490, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_491=info->p;
    buf_492=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_491-head_470+1)), "05function.c", 686, "char*"));
    memcpy(buf_492,head_470,tail_491-head_470);
    buf_492[tail_491-head_470]=0;
    skip_spaces_and_lf(info);
    __result_obj__269 = come_increment_ref_count(((char*)(__right_value376=__builtin_string(buf_492))));
    (buf_492 = come_decrement_ref_count(buf_492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value376 = come_decrement_ref_count(__right_value376, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__269 = come_decrement_ref_count(__result_obj__269, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__269;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct buffer* asm_fun_name_493;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct buffer* result_494;
char* head_495;
int brace_num_496;
char* tail_497;
char* head_498;
int brace_num_499;
char* tail_500;
char* head_501;
char* tail_502;
char* head_503;
char* tail_504;
int len_505;
_Bool in_dquort_506;
int brace_num_507;
char* head_508;
char* tail_509;
char* head_510;
char* tail_511;
char* head_512;
char* tail_513;
char* head_514;
int nest_515;
char* tail_516;
char* head_517;
int nest_518;
char* tail_519;
char* head_520;
int nest_521;
char* tail_522;
char* head_523;
int nest_524;
char* tail_525;
char* head_526;
int nest_527;
char* tail_528;
char* head_529;
char* tail_530;
char* head_531;
char* tail_532;
char* head_533;
char* tail_534;
char* head_535;
char* tail_536;
char* head_537;
char* tail_538;
char* head_539;
int brace_num_540;
char* tail_541;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__273;
    asm_fun_name_493=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 697, "struct buffer*"))));
    result_494=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 698, "struct buffer*"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_495=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_496=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_496++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_496--;
                        if(                        brace_num_496==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_497=info->p;
            buffer_append(result_494,head_495,tail_497-head_495);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_498=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_499=0;
                while(*info->p) {
                    if(                    *info->p==40) {
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
            tail_500=info->p;
            buffer_append(result_494,head_498,tail_500-head_498);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_501=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_502=info->p;
            buffer_append(result_494,head_501,tail_502-head_501);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_503=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_504=info->p;
            buffer_append(result_494,head_503,tail_504-head_503);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_505=0;
            if(            *info->p==40) {
                in_dquort_506=(_Bool)0;
                brace_num_507=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_506=!in_dquort_506;
                    }
                    else if(                    in_dquort_506) {
                        buffer_append_char(asm_fun_name_493,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_507++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_507--;
                        if(                        brace_num_507==0) {
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
            head_508=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_509=info->p;
            buffer_append(result_494,head_508,tail_509-head_508);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_510=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_511=info->p;
            buffer_append(result_494,head_510,tail_511-head_510);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_512=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_513=info->p;
            buffer_append(result_494,head_512,tail_513-head_512);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_514=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_515=0;
                while(1) {
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
            tail_516=info->p;
            buffer_append(result_494,head_514,tail_516-head_514);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_517=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_518=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_518++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_518--;
                        if(                        nest_518==0) {
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
            tail_519=info->p;
            buffer_append(result_494,head_517,tail_519-head_517);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_520=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_521=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_521--;
                        if(                        nest_521==0) {
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
            tail_522=info->p;
            buffer_append(result_494,head_520,tail_522-head_520);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_523=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_524=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_524--;
                        if(                        nest_524==0) {
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
            tail_525=info->p;
            buffer_append(result_494,head_523,tail_525-head_523);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_526=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_527=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_527++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_527--;
                        if(                        nest_527==0) {
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
            tail_528=info->p;
            buffer_append(result_494,head_526,tail_528-head_526);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_529=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_530=info->p;
            buffer_append(result_494,head_529,tail_530-head_529);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_531=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_532=info->p;
            buffer_append(result_494,head_531,tail_532-head_531);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_533=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_534=info->p;
            buffer_append(result_494,head_533,tail_534-head_533);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_535=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_536=info->p;
            buffer_append(result_494,head_535,tail_536-head_535);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_537=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_538=info->p;
            buffer_append(result_494,head_537,tail_538-head_537);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_539=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_540=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_540++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_540--;
                        if(                        brace_num_540==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_541=info->p;
            buffer_append(result_494,head_539,tail_541-head_539);
        }
        else {
            break;
        }
    }
    __result_obj__273 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value387=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1112, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_493)),(char*)come_increment_ref_count(buffer_to_string(result_494))))));
    /*c*/ come_call_finalizer3(asm_fun_name_493,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_494,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value387,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__273,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__273;
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
struct tuple2$2char$phchar$ph* __result_obj__270;
void* __right_value383 = (void*)0;
struct tuple2$2char$phchar$ph* result_542;
void* __right_value384 = (void*)0;
char* __dec_obj88;
void* __right_value385 = (void*)0;
char* __dec_obj89;
struct tuple2$2char$phchar$ph* __result_obj__271;
    if(    self==(void*)0) {
        __result_obj__270 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__270,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__270;
    }
    result_542=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj88=result_542->v1,
        result_542->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj89=result_542->v2,
        result_542->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__271 = come_increment_ref_count(result_542);
    /*c*/ come_call_finalizer3(result_542,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__271,tuple2$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__271;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_543;
    result_543=0;
    result_543+=int_get_hash_key(((int)self->v1));
    result_543+=int_get_hash_key(((int)self->v2));
    return result_543;
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
char* __dec_obj90;
char* __dec_obj91;
struct tuple2$2char$phchar$ph* __result_obj__272;
    __dec_obj90=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj91=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__272 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__272,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__272;
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
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct buffer* asm_fun_name_544;
void* __right_value390 = (void*)0;
char* attribute_545;
int nest_546;
int nest_547;
int nest_548;
int nest_549;
int nest_550;
void* __right_value391 = (void*)0;
char* __dec_obj92;
int len_551;
_Bool in_dquort_552;
int brace_num_553;
int brace_num_554;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__274;
    asm_fun_name_544=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1117, "struct buffer*"))));
    attribute_545=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_546=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_546++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_546--;
                        if(                        nest_546==0) {
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
                nest_547=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547--;
                        if(                        nest_547==0) {
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
                nest_548=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_548++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_548--;
                        if(                        nest_548==0) {
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
                nest_549=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549--;
                        if(                        nest_549==0) {
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
                nest_550=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_550--;
                        if(                        nest_550==0) {
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
            __dec_obj92=attribute_545,
            attribute_545=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_551=0;
            if(            *info->p==40) {
                in_dquort_552=(_Bool)0;
                brace_num_553=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_552=!in_dquort_552;
                    }
                    else if(                    in_dquort_552) {
                        buffer_append_char(asm_fun_name_544,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_553++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_553--;
                        if(                        brace_num_553==0) {
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
                brace_num_554=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_554++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_554--;
                        if(                        brace_num_554==0) {
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
    __result_obj__274 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value394=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1386, "struct tuple2$2char$phchar$ph")),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_544)),(char*)come_increment_ref_count(attribute_545)))));
    /*c*/ come_call_finalizer3(asm_fun_name_544,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (attribute_545 = come_decrement_ref_count(attribute_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value394,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__274,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__274;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value395 = (void*)0;
char* __dec_obj93;
char* head_555;
int head_sline_556;
void* __right_value396 = (void*)0;
char* buf_557;
void* __right_value397 = (void*)0;
struct sNode* node_558;
_Bool Value_559;
    while(*info->p) {
        __dec_obj93=info->sname_at_head,
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        parse_sharp_v5(info);
        head_555=info->p;
        head_sline_556=info->sline;
        buf_557=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_557 = come_decrement_ref_count(buf_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_558=(struct sNode*)come_increment_ref_count(top_level_v99(buf_557,head_555,head_sline_556,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_558!=((void*)0)) {
            Value_559=node_compile(node_558,info);
            if(            !Value_559) {
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
            (buf_557 = come_decrement_ref_count(buf_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_558) ? node_558 = come_decrement_ref_count(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_557 = come_decrement_ref_count(buf_557, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_558) ? node_558 = come_decrement_ref_count(node_558, ((struct sNode*)node_558)->finalize, ((struct sNode*)node_558)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile(struct sInfo* info){
void* __right_value398 = (void*)0;
char* name_560;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* result_type_561;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1sType$ph* param_types_562;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1char$ph* param_names_563;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1char$ph* param_default_parametors_564;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct sFun* fun_565;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* name_587;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sType* result_type_588;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct list$1sType$ph* param_types_589;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1char$ph* param_names_590;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1char$ph* param_default_parametors_591;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sFun* fun_592;
void* __right_value432 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_560=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_561=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1442, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_562=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1443, "struct list$1sType$ph*"))));
        param_names_563=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1444, "struct list$1char$ph*"))));
        param_default_parametors_564=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1445, "struct list$1char$ph*"))));
        fun_565=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1446, "struct sFun*")),(char*)come_increment_ref_count(name_560),(struct sType*)come_increment_ref_count(result_type_561),(struct list$1sType$ph*)come_increment_ref_count(param_types_562),(struct list$1char$ph*)come_increment_ref_count(param_names_563),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_564),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_560)),(struct sFun*)come_increment_ref_count(fun_565));
        (name_560 = come_decrement_ref_count(name_560, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_561,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_562,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_563,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_564,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_565,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    {
        name_587=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_588=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_589=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1456, "struct list$1sType$ph*"))));
        param_names_590=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1457, "struct list$1char$ph*"))));
        param_default_parametors_591=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1458, "struct list$1char$ph*"))));
        fun_592=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1459, "struct sFun*")),(char*)come_increment_ref_count(name_587),(struct sType*)come_increment_ref_count(result_type_588),(struct list$1sType$ph*)come_increment_ref_count(param_types_589),(struct list$1char$ph*)come_increment_ref_count(param_names_590),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_591),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_587)),(struct sFun*)come_increment_ref_count(fun_592));
        (name_587 = come_decrement_ref_count(name_587, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_588,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_589,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_590,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_591,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_592,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_583;
unsigned int it_584;
_Bool same_key_exist_585;
char* it2_586;
struct map$2char$phsFun$ph* __result_obj__285;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph_rehash(self);
    }
    hash_583=string_get_hash_key(((char*)key))%self->size;
    it_584=hash_583;
    while((_Bool)1) {
        if(        self->item_existance[it_584]) {
            if(            string_equals(self->keys[it_584],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_584]);
                    (self->keys[it_584] = come_decrement_ref_count(self->keys[it_584], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_584]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_584]);
                    self->keys[it_584]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_584],sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_584]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_584]=item;
                }
                break;
            }
            it_584++;
            if(            it_584>=self->size) {
                it_584=0;
            }
            else if(            it_584==hash_583) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_584]=(_Bool)1;
            if(            1) {
                self->keys[it_584]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_584]=key;
            }
            if(            1) {
                self->items[it_584]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_584]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_585=(_Bool)0;
    for(    it2_586=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_586=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_586,key)) {
            same_key_exist_585=(_Bool)1;
        }
    }
    if(    !same_key_exist_585) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__285 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__285;
}

static void map$2char$phsFun$ph_rehash(struct map$2char$phsFun$ph* self){
int size_566;
void* __right_value412 = (void*)0;
char** keys_567;
void* __right_value413 = (void*)0;
struct sFun** items_568;
void* __right_value414 = (void*)0;
_Bool* item_existance_569;
int len_570;
char* it_573;
struct sFun* default_value_576;
void* __right_value415 = (void*)0;
struct sFun* it2_577;
unsigned int hash_580;
int n_581;
struct sFun* default_value_582;
void* __right_value416 = (void*)0;
default_value_576 = (void*)0;
default_value_582 = (void*)0;
    size_566=self->size*10;
    keys_567=(char**)come_increment_ref_count(((char**)(__right_value412=(char**)come_calloc(1, sizeof(char*)*(1*(size_566)), "./comelang.h", 2288, "char**"))));
    items_568=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value413=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_566)), "./comelang.h", 2289, "struct sFun**"))));
    item_existance_569=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value414=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_566)), "./comelang.h", 2290, "_Bool*"))));
    len_570=0;
    for(    it_573=map$2char$phsFun$ph_begin(self);    !map$2char$phsFun$ph_end(self);    it_573=map$2char$phsFun$ph_next(self)    ){
        memset(&default_value_576,0,sizeof(struct sFun*));
        it2_577=((struct sFun*)(__right_value415=map$2char$phsFun$ph_at(self,it_573,(struct sFun*)come_increment_ref_count(default_value_576))));
        /*c*/ come_call_finalizer3(__right_value415,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_580=string_get_hash_key(((char*)it_573))%size_566;
        n_581=hash_580;
        while((_Bool)1) {
            if(            item_existance_569[n_581]) {
                n_581++;
                if(                n_581>=size_566) {
                    n_581=0;
                }
                else if(                n_581==hash_580) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_569[n_581]=(_Bool)1;
                keys_567[n_581]=it_573;
                items_568[n_581]=((struct sFun*)(__right_value416=map$2char$phsFun$ph_at(self,it_573,(struct sFun*)come_increment_ref_count(default_value_582))));
                /*c*/ come_call_finalizer3(__right_value416,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_570++;
                /*c*/ come_call_finalizer3(default_value_582,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_582,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_576,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_567;
    self->items=items_568;
    self->item_existance=item_existance_569;
    self->size=size_566;
    self->len=len_570;
}

static char* map$2char$phsFun$ph_begin(struct map$2char$phsFun$ph* self){
char* result_571;
char* __result_obj__275;
char* __result_obj__276;
char* result_572;
char* __result_obj__277;
result_571 = (void*)0;
result_572 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_571,0,sizeof(char*));
        __result_obj__275 = result_571;
        return __result_obj__275;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__276 = self->key_list->it->item;
        return __result_obj__276;
    }
    memset(&result_572,0,sizeof(char*));
    __result_obj__277 = result_572;
    return __result_obj__277;
}

static _Bool map$2char$phsFun$ph_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph_next(struct map$2char$phsFun$ph* self){
char* result_574;
char* __result_obj__278;
char* __result_obj__279;
char* result_575;
char* __result_obj__280;
result_574 = (void*)0;
result_575 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_574,0,sizeof(char*));
        __result_obj__278 = result_574;
        return __result_obj__278;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__279 = self->key_list->it->item;
        return __result_obj__279;
    }
    memset(&result_575,0,sizeof(char*));
    __result_obj__280 = result_575;
    return __result_obj__280;
}

static struct sFun* map$2char$phsFun$ph_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_578;
unsigned int it_579;
struct sFun* __result_obj__281;
struct sFun* __result_obj__282;
struct sFun* __result_obj__283;
struct sFun* __result_obj__284;
    hash_578=string_get_hash_key(((char*)key))%self->size;
    it_579=hash_578;
    while((_Bool)1) {
        if(        self->item_existance[it_579]) {
            if(            string_equals(self->keys[it_579],key)) {
                __result_obj__281 = come_increment_ref_count(self->items[it_579]);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__281,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__281;
            }
            it_579++;
            if(            it_579>=self->size) {
                it_579=0;
            }
            else if(            it_579==hash_578) {
                __result_obj__282 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__282,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__282;
            }
        }
        else {
            __result_obj__283 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__283,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__283;
        }
    }
    __result_obj__284 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__284,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__284;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_593;
_Bool is_type_name_flag_594;
int sline_595;
_Bool define_struct_nobody_596;
char* p_597;
int sline_598;
void* __right_value433 = (void*)0;
char* word_599;
_Bool define_function_pointer_result_function_600;
_Bool define_variable_between_brace_601;
char* p_602;
void* __right_value434 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var17 = (void*)0;
struct sType* result_type_603=0;
char* fun_name_604=0;
_Bool err_605=0;
void* __right_value435 = (void*)0;
char* word_606;
_Bool define_function_flag_607;
char* p_608;
void* __right_value436 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_609=0;
char* fun_name_610=0;
_Bool err_611=0;
char* word_612;
void* __right_value437 = (void*)0;
char* __dec_obj94;
void* __right_value438 = (void*)0;
char* __dec_obj95;
char* __dec_obj96;
void* __right_value439 = (void*)0;
char* __dec_obj97;
_Bool define_variable_613;
char* p_614;
void* __right_value440 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_615=0;
char* fun_name_616=0;
_Bool err_617=0;
void* __right_value441 = (void*)0;
char* word_618;
void* __right_value442 = (void*)0;
char* word_619;
char* p_620;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* word_621;
void* __right_value446 = (void*)0;
char* __dec_obj98;
void* __right_value447 = (void*)0;
char* word_622;
void* __right_value448 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var20 = (void*)0;
int come_exception_var_c16_623=0;
char* Err_624=0;
void* __right_value449 = (void*)0;
char* word_625;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* node_626;
struct sNode* __result_obj__286;
void* __right_value452 = (void*)0;
struct sNode* __result_obj__287;
char* header_head_627;
void* __right_value453 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var21 = (void*)0;
struct sType* result_type_628=0;
char* fun_name_629=0;
_Bool err_630=0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct list$1sType$ph* param_types_631;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct list$1char$ph* param_names_632;
void* __right_value458 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* param_type_633=0;
char* param_name_634=0;
_Bool err_635=0;
void* __right_value459 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var23 = (void*)0;
int come_exception_var_c17_636=0;
char* Err_637=0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_642=0;
char* Err_643=0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1sType$ph* param_types2_644;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1char$ph* param_names2_645;
void* __right_value470 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var25 = (void*)0;
struct sType* param_type_646=0;
char* param_name_647=0;
_Bool err_648=0;
void* __right_value471 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var26 = (void*)0;
int come_exception_var_c19_649=0;
char* Err_650=0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_652=0;
char* Err_653=0;
char* header_tail_654;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sType* result_type2_655;
struct sType* __dec_obj102;
void* __right_value478 = (void*)0;
struct list$1sType$ph* __dec_obj103;
void* __right_value479 = (void*)0;
struct list$1char$ph* __dec_obj104;
_Bool var_args_656;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct list$1char$ph* param_default_parametors_657;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sFun* fun_658;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sFun* fun2_662;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value540 = (void*)0;
struct sNode* result_663;
struct sNode* __result_obj__317;
void* __right_value541 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_699=0;
char* Err_700=0;
void* __right_value542 = (void*)0;
struct sNode* node_701;
struct sNode* __result_obj__318;
void* __right_value543 = (void*)0;
struct sNode* node_702;
struct sNode* __result_obj__319;
void* __right_value544 = (void*)0;
struct sNode* node_703;
char* source_tail_704;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct buffer* header_705;
struct sNode* __result_obj__320;
void* __right_value547 = (void*)0;
char* buf2_706;
void* __right_value548 = (void*)0;
struct sNode* __result_obj__321;
    info->in_top_level=(_Bool)1;
    source_head_593=info->p;
    is_type_name_flag_594=is_type_name(buf,info);
    sline_595=info->sline;
    define_struct_nobody_596=(_Bool)0;
    {
        p_597=info->p;
        sline_598=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_599=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_596=(_Bool)1;
                }
                (word_599 = come_decrement_ref_count(word_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_598;
    }
    define_function_pointer_result_function_600=(_Bool)0;
    define_variable_between_brace_601=(_Bool)0;
    if(    is_type_name_flag_594) {
        p_602=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var17=((struct tuple3$3sType$phchar$phbool$*)(__right_value434=backtrace_parse_type((_Bool)0,info)));
            result_type_603=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
            fun_name_604=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            err_605=multiple_assign_var17->v3;
            /*c*/ come_call_finalizer3(__right_value434,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_600=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_606=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_606,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_601=(_Bool)1;
                            }
                        }
                        (word_606 = come_decrement_ref_count(word_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            /*c*/ come_call_finalizer3(result_type_603,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_604 = come_decrement_ref_count(fun_name_604, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_595;
    }
    define_function_flag_607=(_Bool)0;
    if(    is_type_name_flag_594&&!define_function_pointer_result_function_600&&charp_operator_not_equals(buf,"__typeof__")) {
        p_608=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value436=backtrace_parse_type((_Bool)0,info)));
            result_type_609=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_610=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_611=multiple_assign_var18->v3;
            /*c*/ come_call_finalizer3(__right_value436,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_609,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_610 = come_decrement_ref_count(fun_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_612=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj94=word_612,
                word_612=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                if(                string_operator_equals(word_612,"extern")) {
                    __dec_obj95=word_612,
                    word_612=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                }
            }
            else {
                __dec_obj96=word_612,
                word_612=((void*)0);
                __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_612) {
                if(                is_type_name(word_612,info)) {
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
                        __dec_obj97=word_612,
                        word_612=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                    }
                }
                if(                strlen(word_612)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_594) {
                        define_function_flag_607=(_Bool)1;
                    }
                }
            }
            (word_612 = come_decrement_ref_count(word_612, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_608;
        info->sline=sline_595;
    }
    define_variable_613=(_Bool)1;
    if(    is_type_name_flag_594&&!define_function_pointer_result_function_600) {
        p_614=info->p;
        info->p=head;
        if(        !is_type_name_flag_594) {
            define_variable_613=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value440=backtrace_parse_type((_Bool)0,info)));
            result_type_615=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_616=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_617=multiple_assign_var19->v3;
            /*c*/ come_call_finalizer3(__right_value440,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_618=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_613=(_Bool)1;
                            }
                        }
                        (word_618 = come_decrement_ref_count(word_618, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_619=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_619,info)&&*info->p!=40) {
                            define_variable_613=(_Bool)1;
                        }
                    }
                    (word_619 = come_decrement_ref_count(word_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            /*c*/ come_call_finalizer3(result_type_615,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (fun_name_616 = come_decrement_ref_count(fun_name_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_613=(_Bool)0;
        }
        else if(        define_variable_613) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_613=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_613=(_Bool)0;
            }
        }
        info->p=p_614;
        info->sline=sline_595;
    }
    else {
        define_variable_613=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_600) {
        p_620=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value443=parse_struct_attribute(info)));
            (__right_value443 = come_decrement_ref_count(__right_value443, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value444=parse_word(info)));
                (__right_value444 = come_decrement_ref_count(__right_value444, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_621=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj98=word_621,
                        word_621=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                        if(                        string_operator_equals(word_621,"extends")) {
                            define_variable_613=(_Bool)0;
                        }
                    }
                    (word_621 = come_decrement_ref_count(word_621, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_613=(_Bool)0;
        }
        else if(        define_variable_613) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_613=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_613=(_Bool)0;
            }
        }
        info->p=p_620;
        info->sline=sline_595;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_622=(char*)come_increment_ref_count(parse_word(info));
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
                    multiple_assign_var20=((struct tuple2$2int$char$ph*)(__right_value448=err_msg(info,"unexpected source end")));
                    come_exception_var_c16_623=multiple_assign_var20->v1;
                    Err_624=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                    ((Err_624)?(puts(Err_624),exit(0)):(0));
                    /*c*/ come_call_finalizer3(__right_value448,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    exit(2);
                    (Err_624 = come_decrement_ref_count(Err_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_625=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_625)));
                    (word_625 = come_decrement_ref_count(word_625, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_626=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph_reset(info->method_generics_type_names);
            __result_obj__286 = come_increment_ref_count(node_626);
            ((node_626) ? node_626 = come_decrement_ref_count(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_622 = come_decrement_ref_count(word_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__286) ? __result_obj__286 = come_decrement_ref_count(__result_obj__286, ((struct sNode*)__result_obj__286)->finalize, ((struct sNode*)__result_obj__286)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__286;
            ((node_626) ? node_626 = come_decrement_ref_count(node_626, ((struct sNode*)node_626)->finalize, ((struct sNode*)node_626)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_622 = come_decrement_ref_count(word_622, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_596) {
    }
    else if(    define_variable_between_brace_601) {
        info->p=head;
        info->sline=sline_595;
        __result_obj__287 = come_increment_ref_count(((struct sNode*)(__right_value452=parse_global_variable(info))));
        ((__right_value452) ? __right_value452 = come_decrement_ref_count(__right_value452, ((struct sNode*)__right_value452)->finalize, ((struct sNode*)__right_value452)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__287) ? __result_obj__287 = come_decrement_ref_count(__result_obj__287, ((struct sNode*)__result_obj__287)->finalize, ((struct sNode*)__result_obj__287)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__287;
    }
    else if(    define_function_pointer_result_function_600) {
        header_head_627=info->p;
        multiple_assign_var21=((struct tuple3$3sType$phchar$phbool$*)(__right_value453=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_628=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
        fun_name_629=(char*)come_increment_ref_count(multiple_assign_var21->v2);
        err_630=multiple_assign_var21->v3;
        /*c*/ come_call_finalizer3(__right_value453,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_631=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1783, "struct list$1sType$ph*"))));
            param_names_632=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1784, "struct list$1char$ph*"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value458=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_633=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
                    param_name_634=(char*)come_increment_ref_count(multiple_assign_var22->v2);
                    err_635=multiple_assign_var22->v3;
                    /*c*/ come_call_finalizer3(__right_value458,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    if(                    !err_635) {
                        multiple_assign_var23=((struct tuple2$2int$char$ph*)(__right_value459=err_msg(info,"parse_type is failed")));
                        come_exception_var_c17_636=multiple_assign_var23->v1;
                        Err_637=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                        ((Err_637)?(puts(Err_637),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value459,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_637 = come_decrement_ref_count(Err_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph_push_back(param_types_631,(struct sType*)come_increment_ref_count(param_type_633));
                    static int num_function_pointer_result_var_name_a_641=0;
                    list$1char$ph_push_back(param_names_632,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_641)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value464=parse_word(info)));
                        (__right_value464 = come_decrement_ref_count(__right_value464, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*c*/ come_call_finalizer3(param_type_633,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_634 = come_decrement_ref_count(param_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value465=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c18_642=multiple_assign_var24->v1;
                        Err_643=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_643)?(puts(Err_643),exit(0)):(0));
                        /*c*/ come_call_finalizer3(__right_value465,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        exit(2);
                        (Err_643 = come_decrement_ref_count(Err_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    /*c*/ come_call_finalizer3(param_type_633,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (param_name_634 = come_decrement_ref_count(param_name_634, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_644=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1830, "struct list$1sType$ph*"))));
                param_names2_645=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1831, "struct list$1char$ph*"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var25=((struct tuple3$3sType$phchar$phbool$*)(__right_value470=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_646=(struct sType*)come_increment_ref_count(multiple_assign_var25->v1);
                        param_name_647=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        err_648=multiple_assign_var25->v3;
                        /*c*/ come_call_finalizer3(__right_value470,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        if(                        !err_648) {
                            multiple_assign_var26=((struct tuple2$2int$char$ph*)(__right_value471=err_msg(info,"parse_type is failed")));
                            come_exception_var_c19_649=multiple_assign_var26->v1;
                            Err_650=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                            ((Err_650)?(puts(Err_650),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value471,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_650 = come_decrement_ref_count(Err_650, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph_push_back(param_types2_644,(struct sType*)come_increment_ref_count(param_type_646));
                        static int num_function_pointer_result_var_name_b_651=0;
                        list$1char$ph_push_back(param_names2_645,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_651)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value473=parse_word(info)));
                            (__right_value473 = come_decrement_ref_count(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*c*/ come_call_finalizer3(param_type_646,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            (param_name_647 = come_decrement_ref_count(param_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value474=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c20_652=multiple_assign_var27->v1;
                            Err_653=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_653)?(puts(Err_653),exit(0)):(0));
                            /*c*/ come_call_finalizer3(__right_value474,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                            exit(2);
                            (Err_653 = come_decrement_ref_count(Err_653, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        /*c*/ come_call_finalizer3(param_type_646,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                        (param_name_647 = come_decrement_ref_count(param_name_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_654=info->p;
                result_type2_655=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1873, "struct sType*")),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj102=result_type2_655->mResultType,
                result_type2_655->mResultType=(struct sType*)come_increment_ref_count(result_type_628);
                /*b*/ come_call_finalizer3(__dec_obj102,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj103=result_type2_655->mParamTypes,
                result_type2_655->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types2_644));
                /*b*/ come_call_finalizer3(__dec_obj103,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj104=result_type2_655->mParamNames,
                result_type2_655->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_645));
                /*b*/ come_call_finalizer3(__dec_obj104,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_655->mVarArgs=(_Bool)0;
                result_type2_655->mStatic=(_Bool)0;
                var_args_656=(_Bool)0;
                param_default_parametors_657=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1883, "struct list$1char$ph*"))));
                fun_658=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1885, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_629)),(struct sType*)come_increment_ref_count(result_type2_655),(struct list$1sType$ph*)come_increment_ref_count(param_types_631),(struct list$1char$ph*)come_increment_ref_count(param_names_632),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_657),(_Bool)1,var_args_656,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_662=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value487=__builtin_string(fun_name_629)))));
                (__right_value487 = come_decrement_ref_count(__right_value487, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_662==((void*)0)||fun2_662->mExternal) {
                    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_629)),(struct sFun*)come_increment_ref_count(fun_658));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1898, "struct sNode");
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value491=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1898, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_658),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_663=(struct sNode*)come_increment_ref_count(_inf_value2);
                /*c*/ come_call_finalizer3(__right_value491,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                __result_obj__317 = come_increment_ref_count(result_663);
                /*c*/ come_call_finalizer3(param_types2_644,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_645,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_655,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_657,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_658,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun2_662,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_663) ? result_663 = come_decrement_ref_count(result_663, ((struct sNode*)result_663)->finalize, ((struct sNode*)result_663)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                /*c*/ come_call_finalizer3(param_types_631,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names_632,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type_628,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (fun_name_629 = come_decrement_ref_count(fun_name_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__317) ? __result_obj__317 = come_decrement_ref_count(__result_obj__317, ((struct sNode*)__result_obj__317)->finalize, ((struct sNode*)__result_obj__317)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__317;
                /*c*/ come_call_finalizer3(param_types2_644,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_names2_645,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(result_type2_655,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(param_default_parametors_657,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun_658,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(fun2_662,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((result_663) ? result_663 = come_decrement_ref_count(result_663, ((struct sNode*)result_663)->finalize, ((struct sNode*)result_663)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value541=err_msg(info,"require (")));
                come_exception_var_c21_699=multiple_assign_var28->v1;
                Err_700=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_700)?(puts(Err_700),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value541,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_700 = come_decrement_ref_count(Err_700, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            /*c*/ come_call_finalizer3(param_types_631,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_632,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(result_type_628,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_629 = come_decrement_ref_count(fun_name_629, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_595;
        node_701=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__318 = come_increment_ref_count(node_701);
        ((node_701) ? node_701 = come_decrement_ref_count(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__318) ? __result_obj__318 = come_decrement_ref_count(__result_obj__318, ((struct sNode*)__result_obj__318)->finalize, ((struct sNode*)__result_obj__318)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__318;
        ((node_701) ? node_701 = come_decrement_ref_count(node_701, ((struct sNode*)node_701)->finalize, ((struct sNode*)node_701)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_607) {
        info->p=head;
        info->sline=sline_595;
        node_702=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__319 = come_increment_ref_count(node_702);
        ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__319) ? __result_obj__319 = come_decrement_ref_count(__result_obj__319, ((struct sNode*)__result_obj__319)->finalize, ((struct sNode*)__result_obj__319)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__319;
        ((node_702) ? node_702 = come_decrement_ref_count(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_613) {
        info->p=head;
        info->sline=sline_595;
        node_703=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_704=info->p;
        header_705=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1932, "struct buffer*"))));
        buffer_append(header_705,source_head_593,source_tail_704-source_head_593);
        __result_obj__320 = come_increment_ref_count(node_703);
        ((node_703) ? node_703 = come_decrement_ref_count(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_705,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__result_obj__320) ? __result_obj__320 = come_decrement_ref_count(__result_obj__320, ((struct sNode*)__result_obj__320)->finalize, ((struct sNode*)__result_obj__320)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__320;
        ((node_703) ? node_703 = come_decrement_ref_count(node_703, ((struct sNode*)node_703)->finalize, ((struct sNode*)node_703)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(header_705,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->p=head;
    info->sline=sline_595;
    buf2_706=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__321 = come_increment_ref_count(((struct sNode*)(__right_value548=top_level_v98(buf2_706,head,head_sline,info))));
    (buf2_706 = come_decrement_ref_count(buf2_706, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value548) ? __right_value548 = come_decrement_ref_count(__right_value548, ((struct sNode*)__right_value548)->finalize, ((struct sNode*)__right_value548)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__321) ? __result_obj__321 = come_decrement_ref_count(__result_obj__321, ((struct sNode*)__result_obj__321)->finalize, ((struct sNode*)__result_obj__321)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__321;
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
void* __right_value460 = (void*)0;
struct list_item$1sType$ph* litem_638;
struct sType* __dec_obj99;
void* __right_value461 = (void*)0;
struct list_item$1sType$ph* litem_639;
struct sType* __dec_obj100;
void* __right_value462 = (void*)0;
struct list_item$1sType$ph* litem_640;
struct sType* __dec_obj101;
struct list$1sType$ph* __result_obj__288;
    if(    self->len==0) {
        litem_638=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value460=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1234, "struct list_item$1sType$ph*"))));
        litem_638->prev=((void*)0);
        litem_638->next=((void*)0);
        __dec_obj99=litem_638->item,
        litem_638->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_638;
        self->head=litem_638;
    }
    else if(    self->len==1) {
        litem_639=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value461=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1244, "struct list_item$1sType$ph*"))));
        litem_639->prev=self->head;
        litem_639->next=((void*)0);
        __dec_obj100=litem_639->item,
        litem_639->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj100,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_639;
        self->head->next=litem_639;
    }
    else {
        litem_640=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value462=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1254, "struct list_item$1sType$ph*"))));
        litem_640->prev=self->tail;
        litem_640->next=((void*)0);
        __dec_obj101=litem_640->item,
        litem_640->item=(struct sType*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj101,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_640;
        self->tail=litem_640;
    }
    self->len++;
    __result_obj__288 = self;
    /*c*/ come_call_finalizer3(item,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__288;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_659;
unsigned int hash_660;
unsigned int it_661;
struct sFun* __result_obj__289;
struct sFun* __result_obj__290;
struct sFun* __result_obj__291;
struct sFun* __result_obj__292;
default_value_659 = (void*)0;
    memset(&default_value_659,0,sizeof(struct sFun*));
    hash_660=string_get_hash_key(((char*)key))%self->size;
    it_661=hash_660;
    while((_Bool)1) {
        if(        self->item_existance[it_661]) {
            if(            string_equals(self->keys[it_661],key)) {
                __result_obj__289 = come_increment_ref_count(self->items[it_661]);
                /*c*/ come_call_finalizer3(default_value_659,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__289,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__289;
            }
            it_661++;
            if(            it_661>=self->size) {
                it_661=0;
            }
            else if(            it_661==hash_660) {
                __result_obj__290 = come_increment_ref_count(default_value_659);
                /*c*/ come_call_finalizer3(default_value_659,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__290,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__290;
            }
        }
        else {
            __result_obj__291 = come_increment_ref_count(default_value_659);
            /*c*/ come_call_finalizer3(default_value_659,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__291,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__291;
        }
    }
    __result_obj__292 = come_increment_ref_count(default_value_659);
    /*c*/ come_call_finalizer3(default_value_659,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__292,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__292;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__293;
void* __right_value492 = (void*)0;
struct sFunNode* result_664;
void* __right_value493 = (void*)0;
char* __dec_obj105;
void* __right_value539 = (void*)0;
struct sFun* __dec_obj128;
struct sFunNode* __result_obj__316;
    if(    self==(void*)0) {
        __result_obj__293 = (void*)0;
        return __result_obj__293;
    }
    result_664=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*"));
    if(    self!=((void*)0)) {
        result_664->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj105=result_664->sname,
        result_664->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_664->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj128=result_664->mFun,
        result_664->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        /*b*/ come_call_finalizer3(__dec_obj128,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__316 = result_664;
    /*c*/ come_call_finalizer3(result_664,sFunNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__316;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__294;
void* __right_value494 = (void*)0;
struct sFun* result_665;
void* __right_value495 = (void*)0;
char* __dec_obj106;
void* __right_value496 = (void*)0;
struct sType* __dec_obj107;
void* __right_value497 = (void*)0;
struct list$1sType$ph* __dec_obj108;
void* __right_value498 = (void*)0;
struct list$1char$ph* __dec_obj109;
void* __right_value499 = (void*)0;
struct list$1char$ph* __dec_obj110;
void* __right_value500 = (void*)0;
struct sType* __dec_obj111;
void* __right_value532 = (void*)0;
struct sBlock* __dec_obj121;
void* __right_value533 = (void*)0;
struct buffer* __dec_obj122;
void* __right_value534 = (void*)0;
struct buffer* __dec_obj123;
void* __right_value535 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value536 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value537 = (void*)0;
char* __dec_obj126;
void* __right_value538 = (void*)0;
char* __dec_obj127;
struct sFun* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__294 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__294,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__294;
    }
    result_665=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj106=result_665->mName,
        result_665->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj107=result_665->mResultType,
        result_665->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        /*b*/ come_call_finalizer3(__dec_obj107,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj108=result_665->mParamTypes,
        result_665->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        /*b*/ come_call_finalizer3(__dec_obj108,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj109=result_665->mParamNames,
        result_665->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        /*b*/ come_call_finalizer3(__dec_obj109,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj110=result_665->mParamDefaultParametors,
        result_665->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        /*b*/ come_call_finalizer3(__dec_obj110,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj111=result_665->mLambdaType,
        result_665->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        /*b*/ come_call_finalizer3(__dec_obj111,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj121=result_665->mBlock,
        result_665->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        /*b*/ come_call_finalizer3(__dec_obj121,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj122=result_665->mSource,
        result_665->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        /*b*/ come_call_finalizer3(__dec_obj122,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj123=result_665->mSourceHead,
        result_665->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        /*b*/ come_call_finalizer3(__dec_obj123,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj124=result_665->mSourceHead2,
        result_665->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        /*b*/ come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj125=result_665->mSourceDefer,
        result_665->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        /*b*/ come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_665->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_665->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_665->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_665->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_665->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_665->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_665->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj126=result_665->mAttribute,
        result_665->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj127=result_665->mFunAttribute,
        result_665->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__315 = come_increment_ref_count(result_665);
    /*c*/ come_call_finalizer3(result_665,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__315,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__315;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__295;
void* __right_value501 = (void*)0;
struct sBlock* result_666;
void* __right_value502 = (void*)0;
struct list$1sNode$ph* __dec_obj112;
void* __right_value531 = (void*)0;
struct sVarTable* __dec_obj120;
struct sBlock* __result_obj__314;
    if(    self==(void*)0) {
        __result_obj__295 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__295,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__295;
    }
    result_666=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj112=result_666->mNodes,
        result_666->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        /*b*/ come_call_finalizer3(__dec_obj112,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj120=result_666->mVarTable,
        result_666->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        /*b*/ come_call_finalizer3(__dec_obj120,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_666->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__314 = come_increment_ref_count(result_666);
    /*c*/ come_call_finalizer3(result_666,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__314,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__314;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__296;
void* __right_value503 = (void*)0;
struct sVarTable* result_667;
void* __right_value530 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj119;
struct sVarTable* __result_obj__313;
    if(    self==(void*)0) {
        __result_obj__296 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__296,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__296;
    }
    result_667=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj119=result_667->mVars,
        result_667->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        /*b*/ come_call_finalizer3(__dec_obj119,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_667->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_667->mParent=self->mParent;
    }
    __result_obj__313 = come_increment_ref_count(result_667);
    /*c*/ come_call_finalizer3(result_667,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__313,sVarTable_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__313;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__297;
void* __right_value504 = (void*)0;
void* __right_value510 = (void*)0;
struct map$2char$phsVar$ph* result_671;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1char$ph* __dec_obj114;
char* it_674;
struct sVar* default_value_677;
void* __right_value513 = (void*)0;
struct sVar* it2_680;
void* __right_value519 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__312;
default_value_677 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__297 = come_increment_ref_count(((void*)0));
        /*c*/ come_call_finalizer3(__result_obj__297,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__297;
    }
    result_671=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2120, "struct map$2char$phsVar$ph*"))));
    __dec_obj114=result_671->key_list,
    result_671->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2122, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj114,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_674=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_674=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_677,0,sizeof(struct sVar*));
        it2_680=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph_at(self,it_674,(struct sVar*)come_increment_ref_count(default_value_677)));
        if(        1&&1) {
            map$2char$phsVar$ph_put(result_671,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_674)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_680)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_671,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_674)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_680)));
        }
        else if(        1) {
            map$2char$phsVar$ph_put(result_671,(char*)come_increment_ref_count(it_674),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_680)));
        }
        else {
            map$2char$phsVar$ph_put(result_671,(char*)come_increment_ref_count(it_674),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_680)));
        }
        /*c*/ come_call_finalizer3(default_value_677,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(it2_680,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    __result_obj__312 = come_increment_ref_count(result_671);
    /*c*/ come_call_finalizer3(result_671,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__312,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__312;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_668;
int i_669;
    for(    i_668=0;    i_668<self->size;    i_668++    ){
        if(        self->item_existance[i_668]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_668],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_669=0;    i_669<self->size;    i_669++    ){
        if(        self->item_existance[i_669]) {
            if(            1) {
                (self->keys[i_669] = come_decrement_ref_count(self->keys[i_669], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_initialize(struct map$2char$phsVar$ph* self){
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
int i_670;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1char$ph* __dec_obj113;
struct map$2char$phsVar$ph* __result_obj__298;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value505=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2049, "char**"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value506=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2050, "struct sVar**"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value507=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2051, "_Bool*"))));
    for(    i_670=0;    i_670<128;    i_670++    ){
        self->item_existance[i_670]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj113=self->key_list,
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2061, "struct list$1char$p*"))));
    /*b*/ come_call_finalizer3(__dec_obj113,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__298 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__298,map$2char$phsVar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__298;
}

static char* map$2char$phsVar$ph_begin(struct map$2char$phsVar$ph* self){
char* result_672;
char* __result_obj__299;
char* __result_obj__300;
char* result_673;
char* __result_obj__301;
result_672 = (void*)0;
result_673 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_672,0,sizeof(char*));
        __result_obj__299 = result_672;
        return __result_obj__299;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__300 = self->key_list->it->item;
        return __result_obj__300;
    }
    memset(&result_673,0,sizeof(char*));
    __result_obj__301 = result_673;
    return __result_obj__301;
}

static _Bool map$2char$phsVar$ph_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph_next(struct map$2char$phsVar$ph* self){
char* result_675;
char* __result_obj__302;
char* __result_obj__303;
char* result_676;
char* __result_obj__304;
result_675 = (void*)0;
result_676 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_675,0,sizeof(char*));
        __result_obj__302 = result_675;
        return __result_obj__302;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__303 = self->key_list->it->item;
        return __result_obj__303;
    }
    memset(&result_676,0,sizeof(char*));
    __result_obj__304 = result_676;
    return __result_obj__304;
}

static struct sVar* map$2char$phsVar$ph_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_678;
unsigned int it_679;
struct sVar* __result_obj__305;
struct sVar* __result_obj__306;
struct sVar* __result_obj__307;
struct sVar* __result_obj__308;
    hash_678=string_get_hash_key(((char*)key))%self->size;
    it_679=hash_678;
    while((_Bool)1) {
        if(        self->item_existance[it_679]) {
            if(            string_equals(self->keys[it_679],key)) {
                __result_obj__305 = come_increment_ref_count(self->items[it_679]);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__305,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__305;
            }
            it_679++;
            if(            it_679>=self->size) {
                it_679=0;
            }
            else if(            it_679==hash_678) {
                __result_obj__306 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__306,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__306;
            }
        }
        else {
            __result_obj__307 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__307,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__307;
        }
    }
    __result_obj__308 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__308,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__308;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_692;
int it_693;
_Bool same_key_exist_694;
char* it2_695;
struct map$2char$phsVar$ph* __result_obj__309;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph_rehash(self);
    }
    hash_692=string_get_hash_key(((char*)key))%self->size;
    it_693=hash_692;
    while((_Bool)1) {
        if(        self->item_existance[it_693]) {
            if(            string_equals(self->keys[it_693],key)) {
                if(                1) {
                    (self->keys[it_693] = come_decrement_ref_count(self->keys[it_693], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$ph_remove(self->key_list,self->keys[it_693]);
                    self->keys[it_693]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_693]);
                    self->keys[it_693]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_693],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_693]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_693]=item;
                }
                break;
            }
            it_693++;
            if(            it_693>=self->size) {
                it_693=0;
            }
            else if(            it_693==hash_692) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_693]=(_Bool)1;
            if(            1) {
                self->keys[it_693]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_693]=key;
            }
            if(            1) {
                self->items[it_693]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_693]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_694=(_Bool)0;
    for(    it2_695=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_695=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_695,key)) {
            same_key_exist_694=(_Bool)1;
        }
    }
    if(    !same_key_exist_694) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__309 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__309;
}

static void map$2char$phsVar$ph_rehash(struct map$2char$phsVar$ph* self){
int size_681;
void* __right_value514 = (void*)0;
char** keys_682;
void* __right_value515 = (void*)0;
struct sVar** items_683;
void* __right_value516 = (void*)0;
_Bool* item_existance_684;
int len_685;
char* it_686;
struct sVar* default_value_687;
void* __right_value517 = (void*)0;
struct sVar* it2_688;
unsigned int hash_689;
int n_690;
struct sVar* default_value_691;
void* __right_value518 = (void*)0;
default_value_687 = (void*)0;
default_value_691 = (void*)0;
    size_681=self->size*10;
    keys_682=(char**)come_increment_ref_count(((char**)(__right_value514=(char**)come_calloc(1, sizeof(char*)*(1*(size_681)), "./comelang.h", 2288, "char**"))));
    items_683=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value515=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_681)), "./comelang.h", 2289, "struct sVar**"))));
    item_existance_684=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value516=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_681)), "./comelang.h", 2290, "_Bool*"))));
    len_685=0;
    for(    it_686=map$2char$phsVar$ph_begin(self);    !map$2char$phsVar$ph_end(self);    it_686=map$2char$phsVar$ph_next(self)    ){
        memset(&default_value_687,0,sizeof(struct sVar*));
        it2_688=((struct sVar*)(__right_value517=map$2char$phsVar$ph_at(self,it_686,(struct sVar*)come_increment_ref_count(default_value_687))));
        /*c*/ come_call_finalizer3(__right_value517,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_689=string_get_hash_key(((char*)it_686))%size_681;
        n_690=hash_689;
        while((_Bool)1) {
            if(            item_existance_684[n_690]) {
                n_690++;
                if(                n_690>=size_681) {
                    n_690=0;
                }
                else if(                n_690==hash_689) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_684[n_690]=(_Bool)1;
                keys_682[n_690]=it_686;
                items_683[n_690]=((struct sVar*)(__right_value518=map$2char$phsVar$ph_at(self,it_686,(struct sVar*)come_increment_ref_count(default_value_691))));
                /*c*/ come_call_finalizer3(__right_value518,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_685++;
                /*c*/ come_call_finalizer3(default_value_691,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_691,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_687,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_682;
    self->items=items_683;
    self->item_existance=item_existance_684;
    self->size=size_681;
    self->len=len_685;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__310;
void* __right_value520 = (void*)0;
struct sVar* result_696;
void* __right_value521 = (void*)0;
char* __dec_obj115;
void* __right_value522 = (void*)0;
char* __dec_obj116;
void* __right_value523 = (void*)0;
struct sType* __dec_obj117;
void* __right_value524 = (void*)0;
char* __dec_obj118;
struct sVar* __result_obj__311;
    if(    self==(void*)0) {
        __result_obj__310 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__310,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__310;
    }
    result_696=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_696->mName,
        result_696->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj116=result_696->mCValueName,
        result_696->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj117=result_696->mType,
        result_696->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        /*b*/ come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_696->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_696->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_696->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj118=result_696->mFunName,
        result_696->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__311 = come_increment_ref_count(result_696);
    /*c*/ come_call_finalizer3(result_696,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__311,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__311;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_697;
int i_698;
    for(    i_697=0;    i_697<self->size;    i_697++    ){
        if(        self->item_existance[i_697]) {
            if(            1) {
                /*c*/ come_call_finalizer3(self->items[i_697],sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_698=0;    i_698<self->size;    i_698++    ){
        if(        self->item_existance[i_698]) {
            if(            1) {
                (self->keys[i_698] = come_decrement_ref_count(self->keys[i_698], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    /*c*/ come_call_finalizer3(self->key_list,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_707;
int caller_line_708;
char* caller_sname_709;
_Bool comma_instead_of_semicolon_710;
_Bool without_semicolon_711;
char* last_code_712;
char* __dec_obj129;
char* last_code2_713;
char* __dec_obj130;
void* __right_value549 = (void*)0;
char* sname_top_714;
int sline_top_715;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sFun* funX_716;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__325;
void* __right_value556 = (void*)0;
struct sType* result_type_719;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1sType$ph* param_types_720;
struct list$1sType$ph* o2_saved_721;
struct sType* it_724;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sType* param_type_727;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct list$1char$ph* param_names_728;
void* __right_value563 = (void*)0;
struct list$1char$ph* param_default_parametors_729;
char* p_730;
int sline_731;
char* sname_732;
char* head_733;
struct buffer* source_734;
void* __right_value564 = (void*)0;
struct buffer* __dec_obj133;
struct sType* generics_type_saved_735;
void* __right_value565 = (void*)0;
struct sType* __dec_obj134;
struct list$1char$ph* method_generics_type_names_736;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct list$1char$ph* __dec_obj135;
struct list$1char$ph* o2_saved_737;
char* it_738;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
struct list$1char$ph* __dec_obj136;
char* __dec_obj137;
void* __right_value570 = (void*)0;
struct sBlock* block_739;
struct buffer* __dec_obj138;
char* __dec_obj139;
_Bool var_args_740;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct sFun* fun_741;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value578 = (void*)0;
struct sNode* node_742;
_Bool in_generics_fun_743;
_Bool Value_744;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__332;
struct sType* __dec_obj140;
struct list$1char$ph* __dec_obj141;
void* __right_value582 = (void*)0;
char* __dec_obj142;
char* __dec_obj143;
char* __dec_obj144;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__333;
    caller_fun_707=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_708=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_709=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_710=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    without_semicolon_711=info->without_semicolon;
    info->without_semicolon=(_Bool)0;
    last_code_712=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj129=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_713=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj130=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_714=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_715=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_716=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value550=__builtin_string(fun_name)))));
    (__right_value550 = come_decrement_ref_count(__right_value550, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_716) {
        __result_obj__325 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value555=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 1973, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_712 = come_decrement_ref_count(last_code_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_713 = come_decrement_ref_count(last_code2_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_714 = come_decrement_ref_count(sname_top_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_716,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value555,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__325,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__325;
    }
    result_type_719=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_720=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1979, "struct list$1sType$ph*"))));
    for(    o2_saved_721=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_724=list$1sType$ph_begin((o2_saved_721));    !list$1sType$ph_end((o2_saved_721));    it_724=list$1sType$ph_next((o2_saved_721))    ){
        param_type_727=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value559=come_call_cloner(sType_clone, it_724))),generics_type,info));
        /*c*/ come_call_finalizer3(__right_value559,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_720,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_727)));
        /*c*/ come_call_finalizer3(param_type_727,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_721,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_728=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_729=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_730=info->p;
    sline_731=info->sline;
    sname_732=(char*)come_increment_ref_count(info->sname);
    head_733=info->head;
    source_734=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj133=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj133,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_735=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj134=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    /*b*/ come_call_finalizer3(__dec_obj134,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_736=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj135=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2007, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj135,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_737=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_738=list$1char$ph_begin((o2_saved_737));    !list$1char$ph_end((o2_saved_737));    it_738=list$1char$ph_next((o2_saved_737))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_738)));
    }
    /*c*/ come_call_finalizer3(o2_saved_737,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj136=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj136,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj137=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_739=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_733;
    __dec_obj138=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_734);
    /*b*/ come_call_finalizer3(__dec_obj138,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_730;
    info->sline=sline_731;
    __dec_obj139=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_732);
    __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_719->mInline=(_Bool)0;
    result_type_719->mStatic=(_Bool)0;
    result_type_719->mUniq=(_Bool)0;
    var_args_740=generics_fun->mVarArgs;
    fun_741=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2031, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_719),(struct list$1sType$ph*)come_increment_ref_count(param_types_720),(struct list$1char$ph*)come_increment_ref_count(param_names_728),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_729),(_Bool)0,var_args_740,(struct sBlock*)come_increment_ref_count(block_739),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_741));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2038, "struct sNode");
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value577=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2038, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_741),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_742=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*c*/ come_call_finalizer3(__right_value577,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    in_generics_fun_743=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_744=node_compile(node_742,info);
    if(    !Value_744) {
        __result_obj__332 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value581=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2043, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_712 = come_decrement_ref_count(last_code_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_713 = come_decrement_ref_count(last_code2_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_714 = come_decrement_ref_count(sname_top_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(funX_716,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_719,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_720,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_728,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_729,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_732 = come_decrement_ref_count(sname_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_734,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(generics_type_saved_735,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_736,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_739,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_741,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_742) ? node_742 = come_decrement_ref_count(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        /*c*/ come_call_finalizer3(__right_value581,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__332,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__332;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_743;
    __dec_obj140=info->generics_type,
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_735);
    /*b*/ come_call_finalizer3(__dec_obj140,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj141=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_736);
    /*b*/ come_call_finalizer3(__dec_obj141,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj142=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_714));
    __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_715;
    __dec_obj143=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_712);
    __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj144=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_713);
    __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_707;
    info->caller_line=caller_line_708;
    info->caller_sname=caller_sname_709;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_710;
    info->without_semicolon=without_semicolon_711;
    __result_obj__333 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value585=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2064, "struct tuple2$2char$phbool$")),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_712 = come_decrement_ref_count(last_code_712, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_713 = come_decrement_ref_count(last_code2_713, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_714 = come_decrement_ref_count(sname_top_714, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(funX_716,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(result_type_719,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_720,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_728,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_729,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_732 = come_decrement_ref_count(sname_732, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_734,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(generics_type_saved_735,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_736,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_739,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_741,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_742) ? node_742 = come_decrement_ref_count(node_742, ((struct sNode*)node_742)->finalize, ((struct sNode*)node_742)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    /*c*/ come_call_finalizer3(__right_value585,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__333,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__333;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__322;
void* __right_value552 = (void*)0;
struct tuple2$2char$phbool$* result_717;
void* __right_value553 = (void*)0;
char* __dec_obj131;
struct tuple2$2char$phbool$* __result_obj__323;
    if(    self==(void*)0) {
        __result_obj__322 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__322,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__322;
    }
    result_717=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj131=result_717->v1,
        result_717->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_717->v2=self->v2;
    }
    __result_obj__323 = come_increment_ref_count(result_717);
    /*c*/ come_call_finalizer3(result_717,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__323,tuple2$2char$phbool$_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__323;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_718;
    result_718=0;
    result_718+=int_get_hash_key(((int)self->v1));
    result_718+=int_get_hash_key(((int)self->v2));
    return result_718;
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
char* __dec_obj132;
struct tuple2$2char$phbool$* __result_obj__324;
    __dec_obj132=self->v1,
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    self->v2=v2;
    __result_obj__324 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__324,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__324;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph_begin(struct list$1sType$ph* self){
struct sType* result_722;
struct sType* __result_obj__326;
struct sType* __result_obj__327;
struct sType* result_723;
struct sType* __result_obj__328;
result_722 = (void*)0;
result_723 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_722,0,sizeof(struct sType*));
        __result_obj__326 = result_722;
        return __result_obj__326;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__327 = self->it->item;
        return __result_obj__327;
    }
    memset(&result_723,0,sizeof(struct sType*));
    __result_obj__328 = result_723;
    return __result_obj__328;
}

static _Bool list$1sType$ph_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph_next(struct list$1sType$ph* self){
struct sType* result_725;
struct sType* __result_obj__329;
struct sType* __result_obj__330;
struct sType* result_726;
struct sType* __result_obj__331;
result_725 = (void*)0;
result_726 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_725,0,sizeof(struct sType*));
        __result_obj__329 = result_725;
        return __result_obj__329;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__330 = self->it->item;
        return __result_obj__330;
    }
    memset(&result_726,0,sizeof(struct sType*));
    __result_obj__331 = result_726;
    return __result_obj__331;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_745;
int caller_line_746;
char* caller_sname_747;
_Bool comma_instead_of_semicolon_748;
char* last_code_749;
char* __dec_obj145;
char* last_code2_750;
char* __dec_obj146;
void* __right_value586 = (void*)0;
char* sname_top_751;
int sline_top_752;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sFun* funX_753;
_Bool __result_obj__334;
void* __right_value589 = (void*)0;
struct sType* result_type_754;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1sType$ph* param_types_755;
struct list$1sType$ph* o2_saved_756;
struct sType* it_757;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct sType* param_type_758;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct list$1char$ph* param_names_759;
void* __right_value596 = (void*)0;
struct list$1char$ph* param_default_parametors_760;
char* p_761;
int sline_762;
char* sname_763;
char* head_764;
struct buffer* source_765;
void* __right_value597 = (void*)0;
struct buffer* __dec_obj147;
struct list$1char$ph* method_generics_type_names_766;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct list$1char$ph* __dec_obj148;
struct list$1char$ph* o2_saved_767;
char* it_768;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1char$ph* __dec_obj149;
char* __dec_obj150;
void* __right_value602 = (void*)0;
struct sBlock* block_769;
struct buffer* __dec_obj151;
char* __dec_obj152;
_Bool var_args_770;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct sFun* fun_771;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value611 = (void*)0;
struct sNode* node_772;
_Bool Value_773;
void* __if_result__1_774 = (void*)0;
_Bool __result_obj__335;
struct list$1char$ph* __dec_obj153;
void* __right_value612 = (void*)0;
char* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
_Bool __result_obj__336;
    caller_fun_745=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_746=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_747=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_748=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_749=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj145=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_750=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj146=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    sname_top_751=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_752=info->sline;
    funX_753=((struct sFun*)(__right_value588=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value587=__builtin_string(fun_name))))));
    (__right_value587 = come_decrement_ref_count(__right_value587, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value588,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    funX_753) {
        __result_obj__334 = (_Bool)1;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_749 = come_decrement_ref_count(last_code_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_750 = come_decrement_ref_count(last_code2_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_751 = come_decrement_ref_count(sname_top_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__334;
    }
    result_type_754=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_755=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2093, "struct list$1sType$ph*"))));
    for(    o2_saved_756=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_757=list$1sType$ph_begin((o2_saved_756));    !list$1sType$ph_end((o2_saved_756));    it_757=list$1sType$ph_next((o2_saved_756))    ){
        param_type_758=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value592=come_call_cloner(sType_clone, it_757))),info));
        /*c*/ come_call_finalizer3(__right_value592,sType_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        list$1sType$ph_add(param_types_755,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_758)));
        /*c*/ come_call_finalizer3(param_type_758,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    /*c*/ come_call_finalizer3(o2_saved_756,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    param_names_759=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_760=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_761=info->p;
    sline_762=info->sline;
    sname_763=(char*)come_increment_ref_count(info->sname);
    head_764=info->head;
    source_765=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj147=info->source,
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    /*b*/ come_call_finalizer3(__dec_obj147,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_766=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj148=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2115, "struct list$1char$ph*"))));
    /*b*/ come_call_finalizer3(__dec_obj148,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_767=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_768=list$1char$ph_begin((o2_saved_767));    !list$1char$ph_end((o2_saved_767));    it_768=list$1char$ph_next((o2_saved_767))    ){
        list$1char$ph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_768)));
    }
    /*c*/ come_call_finalizer3(o2_saved_767,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj149=info->generics_type_names,
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    /*b*/ come_call_finalizer3(__dec_obj149,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj150=info->sname,
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    block_769=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_764;
    __dec_obj151=info->source,
    info->source=(struct buffer*)come_increment_ref_count(source_765);
    /*b*/ come_call_finalizer3(__dec_obj151,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_761;
    info->sline=sline_762;
    __dec_obj152=info->sname,
    info->sname=(char*)come_increment_ref_count(sname_763);
    __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    result_type_754->mInline=(_Bool)0;
    result_type_754->mStatic=(_Bool)0;
    result_type_754->mUniq=(_Bool)0;
    var_args_770=generics_fun->mVarArgs;
    fun_771=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2139, "struct sFun*")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_754),(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_755)),(struct list$1char$ph*)come_increment_ref_count(param_names_759),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_760),(_Bool)0,var_args_770,(struct sBlock*)come_increment_ref_count(block_769),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_771));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2146, "struct sNode");
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value610=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2146, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_771),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_772=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*c*/ come_call_finalizer3(__right_value610,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    Value_773=node_compile(node_772,info);
    if(    !Value_773) {
        __result_obj__335 = (_Bool)0;
        (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_749 = come_decrement_ref_count(last_code_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_750 = come_decrement_ref_count(last_code2_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_751 = come_decrement_ref_count(sname_top_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_754,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_755,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_759,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_760,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_763 = come_decrement_ref_count(sname_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source_765,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(method_generics_type_names_766,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_769,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_771,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((node_772) ? node_772 = come_decrement_ref_count(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__335;
    }
    else {
        __if_result__1_774=(void*)(Value_773);
;
    }
    __dec_obj153=info->method_generics_type_names,
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_766);
    /*b*/ come_call_finalizer3(__dec_obj153,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph_reset(info->generics_type_names);
    __dec_obj154=info->sname,
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_751));
    __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->sline=sline_top_752;
    __dec_obj155=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_749);
    __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj156=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_750);
    __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->caller_fun=caller_fun_745;
    info->caller_line=caller_line_746;
    info->caller_sname=caller_sname_747;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_748;
    __result_obj__336 = (_Bool)1;
    (fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_749 = come_decrement_ref_count(last_code_749, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_750 = come_decrement_ref_count(last_code2_750, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_751 = come_decrement_ref_count(sname_top_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_754,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_755,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_759,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_760,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (sname_763 = come_decrement_ref_count(sname_763, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(source_765,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(method_generics_type_names_766,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(block_769,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(fun_771,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((node_772) ? node_772 = come_decrement_ref_count(node_772, ((struct sNode*)node_772)->finalize, ((struct sNode*)node_772)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__336;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_775;
char* source_head_776;
void* __right_value613 = (void*)0;
char* attribute_777;
struct sType* result_type_778;
char* var_name_779;
_Bool constructor__780;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* __dec_obj157;
void* __right_value616 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var29 = (void*)0;
struct sType* result_type2_781=0;
char* var_name2_782=0;
_Bool err_783=0;
struct sType* __dec_obj158;
char* __dec_obj159;
_Bool method_definition_784;
char* p_785;
int sline_786;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct buffer* buf2_787;
char* fun_name_788;
char* base_fun_name_789;
struct sType* obj_type2_790;
void* __right_value619 = (void*)0;
char* __dec_obj160;
void* __right_value620 = (void*)0;
char* __dec_obj161;
void* __right_value621 = (void*)0;
struct sType* __dec_obj162;
void* __right_value622 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* obj_type_791=0;
char* name_792=0;
_Bool err_793=0;
void* __right_value623 = (void*)0;
char* __dec_obj163;
void* __right_value624 = (void*)0;
char* __dec_obj164;
void* __right_value625 = (void*)0;
struct sType* __dec_obj165;
void* __right_value626 = (void*)0;
char* __dec_obj166;
void* __right_value627 = (void*)0;
char* __dec_obj167;
void* __right_value628 = (void*)0;
struct sType* __dec_obj168;
void* __right_value629 = (void*)0;
char* __dec_obj169;
void* __right_value630 = (void*)0;
char* __dec_obj170;
void* __right_value631 = (void*)0;
struct sType* __dec_obj171;
void* __right_value632 = (void*)0;
char* __dec_obj172;
void* __right_value633 = (void*)0;
char* __dec_obj173;
void* __right_value634 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var31 = (void*)0;
struct list$1sType$ph* param_types_794=0;
struct list$1char$ph* param_names_795=0;
struct list$1char$ph* param_default_parametors_796=0;
_Bool var_args_797=0;
char* header_tail_798;
int version_799;
int n_800;
void* __right_value635 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var32 = (void*)0;
char* asm_fun_801=0;
char* fun_attribute_802=0;
void* __right_value636 = (void*)0;
char* __dec_obj174;
_Bool in_top_level_803;
void* __right_value637 = (void*)0;
struct sBlock* block_804;
void* __right_value638 = (void*)0;
char* fun_name_806;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sFun* fun_807;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sFun* fun2_808;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value651 = (void*)0;
struct sNode* __result_obj__339;
void* __right_value652 = (void*)0;
char* none_generics_name_810;
void* __right_value653 = (void*)0;
char* generics_sname_811;
int generics_sline_812;
void* __right_value654 = (void*)0;
char* block_813;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sGenericsFun* fun_814;
void* __right_value661 = (void*)0;
char* fun_name3_815;
void* __right_value667 = (void*)0;
struct sNode* __result_obj__351;
void* __right_value668 = (void*)0;
char* generics_sname_837;
int generics_sline_838;
void* __right_value669 = (void*)0;
char* block_839;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sGenericsFun* fun_840;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct sNode* __result_obj__352;
char* source_tail_841;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
char* new_fun_name_842;
void* __right_value680 = (void*)0;
char* __dec_obj176;
void* __right_value681 = (void*)0;
struct sBlock* block_843;
_Bool static_fun_844;
_Bool inline_fun_845;
_Bool uniq_fun_846;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sFun* fun_847;
void* __right_value686 = (void*)0;
char* header_848;
void* __right_value687 = (void*)0;
char* id_849;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sFun* fun2_850;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value694 = (void*)0;
struct sNode* __result_obj__353;
void* __right_value695 = (void*)0;
char* new_fun_name_851;
void* __right_value696 = (void*)0;
char* __dec_obj177;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sFun* fun_852;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sFun* fun2_853;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
char* header_854;
void* __right_value704 = (void*)0;
char* id_855;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value707 = (void*)0;
struct sNode* __result_obj__354;
void* __right_value708 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_856=0;
char* fun_attribute2_857=0;
void* __right_value709 = (void*)0;
char* __dec_obj178;
void* __right_value710 = (void*)0;
char* __dec_obj179;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sFun* fun_858;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sFun* fun2_859;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* header_860;
void* __right_value718 = (void*)0;
char* id_861;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value721 = (void*)0;
struct sNode* __result_obj__355;
void* __right_value722 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c22_862=0;
char* Err_863=0;
struct sNode* __result_obj__356;
fun_name_788 = (void*)0;
    header_head_775=info->p;
    source_head_776=info->p;
    attribute_777=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_778=((void*)0);
    var_name_779=((void*)0);
    constructor__780=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value614=parse_word(info)));
        (__right_value614 = come_decrement_ref_count(__right_value614, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj157=result_type_778,
        result_type_778=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj157,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_778->mHeap=(_Bool)1;
        constructor__780=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var29=((struct tuple3$3sType$phchar$phbool$*)(__right_value616=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_781=(struct sType*)come_increment_ref_count(multiple_assign_var29->v1);
        var_name2_782=(char*)come_increment_ref_count(multiple_assign_var29->v2);
        err_783=multiple_assign_var29->v3;
        /*c*/ come_call_finalizer3(__right_value616,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        __dec_obj158=result_type_778,
        result_type_778=(struct sType*)come_increment_ref_count(result_type2_781);
        /*b*/ come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj159=var_name_779,
        var_name_779=(char*)come_increment_ref_count(var_name2_782);
        __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        if(        !err_783) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*c*/ come_call_finalizer3(result_type2_781,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name2_782 = come_decrement_ref_count(var_name2_782, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_784=(_Bool)0;
    {
        p_785=info->p;
        sline_786=info->sline;
        buf2_787=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2207, "struct buffer*"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_787,*info->p);
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
        if(        buffer_length(buf2_787)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_784=(_Bool)1;
        }
        info->p=p_785;
        info->sline=sline_786;
        /*c*/ come_call_finalizer3(buf2_787,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    base_fun_name_789=((void*)0);
    obj_type2_790=((void*)0);
    if(    constructor__780) {
        __dec_obj160=base_fun_name_789,
        base_fun_name_789=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj161=fun_name_788,
        fun_name_788=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_789,info,(_Bool)1));
        __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj162=obj_type2_790,
        obj_type2_790=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj162,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    method_definition_784) {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value622=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_791=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        name_792=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_793=multiple_assign_var30->v3;
        /*c*/ come_call_finalizer3(__right_value622,tuple3$3sType$phchar$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        !err_793) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj163=base_fun_name_789,
        base_fun_name_789=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj164=fun_name_788,
        fun_name_788=(char*)come_increment_ref_count(create_method_name(obj_type_791,(_Bool)0,base_fun_name_789,info,(_Bool)1));
        __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj165=obj_type2_790,
        obj_type2_790=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_type_791));
        /*b*/ come_call_finalizer3(__dec_obj165,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        /*c*/ come_call_finalizer3(obj_type_791,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_792 = come_decrement_ref_count(name_792, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj166=base_fun_name_789,
        base_fun_name_789=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj167=fun_name_788,
        fun_name_788=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_789,info,(_Bool)1));
        __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj168=obj_type2_790,
        obj_type2_790=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        /*b*/ come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj169=base_fun_name_789,
        base_fun_name_789=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj169 = come_decrement_ref_count(__dec_obj169, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj170=fun_name_788,
        fun_name_788=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_789,info,(_Bool)1));
        __dec_obj170 = come_decrement_ref_count(__dec_obj170, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj171=obj_type2_790,
        obj_type2_790=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        /*b*/ come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    else {
        __dec_obj172=fun_name_788,
        fun_name_788=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        __dec_obj173=base_fun_name_789,
        base_fun_name_789=(char*)come_increment_ref_count(__builtin_string(fun_name_788));
        __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_789,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var31=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value634=parse_params(info,constructor__780)));
    param_types_794=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var31->v1);
    param_names_795=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v2);
    param_default_parametors_796=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var31->v3);
    var_args_797=multiple_assign_var31->v4;
    /*c*/ come_call_finalizer3(__right_value634,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    header_tail_798=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_789,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_799=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_800=0;
        while(xisdigit(*info->p)) {
            n_800=n_800*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_799=n_800;
    }
    multiple_assign_var32=((struct tuple2$2char$phchar$ph*)(__right_value635=parse_function_attribute(info)));
    asm_fun_801=(char*)come_increment_ref_count(multiple_assign_var32->v1);
    fun_attribute_802=(char*)come_increment_ref_count(multiple_assign_var32->v2);
    /*c*/ come_call_finalizer3(__right_value635,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    if(    string_operator_not_equals(asm_fun_801,"")) {
        __dec_obj174=fun_name_788,
        fun_name_788=(char*)come_increment_ref_count(__builtin_string(asm_fun_801));
        __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    in_top_level_803=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_789,"lambda")) {
        block_804=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_805=0;
        lambda_num_805++;
        fun_name_806=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_805));
        result_type_778->mInline=(_Bool)0;
        result_type_778->mStatic=(_Bool)0;
        result_type_778->mUniq=(_Bool)0;
        fun_807=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2326, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_806)),(struct sType*)come_increment_ref_count(result_type_778),(struct list$1sType$ph*)come_increment_ref_count(param_types_794),(struct list$1char$ph*)come_increment_ref_count(param_names_795),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_796),(_Bool)0,var_args_797,(struct sBlock*)come_increment_ref_count(block_804),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_808=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value644=__builtin_string(fun_name_806)))));
        (__right_value644 = come_decrement_ref_count(__right_value644, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_808==((void*)0)||fun2_808->mExternal) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_806)),(struct sFun*)come_increment_ref_count(fun_807));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2336, "struct sNode");
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value648=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2336, "struct sLambdaNode*")),fun_807,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__339 = come_increment_ref_count(((struct sNode*)(__right_value651=_inf_value5)));
        /*c*/ come_call_finalizer3(block_804,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_806 = come_decrement_ref_count(fun_name_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_807,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_808,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_777 = come_decrement_ref_count(attribute_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_778,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_779 = come_decrement_ref_count(var_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_788 = come_decrement_ref_count(fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_789 = come_decrement_ref_count(base_fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_795,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_796,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_801 = come_decrement_ref_count(asm_fun_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_802 = come_decrement_ref_count(fun_attribute_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value648,sLambdaNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value651) ? __right_value651 = come_decrement_ref_count(__right_value651, ((struct sNode*)__right_value651)->finalize, ((struct sNode*)__right_value651)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__339) ? __result_obj__339 = come_decrement_ref_count(__result_obj__339, ((struct sNode*)__result_obj__339)->finalize, ((struct sNode*)__result_obj__339)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__339;
        /*c*/ come_call_finalizer3(block_804,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name_806 = come_decrement_ref_count(fun_name_806, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_807,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_808,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph_length(info->generics_type_names)>0) {
        none_generics_name_810=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_811=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_812=info->sline;
        block_813=(char*)come_increment_ref_count(skip_block(info));
        fun_814=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2346, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value656=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value657=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sType*)come_increment_ref_count(result_type_778),(struct list$1sType$ph*)come_increment_ref_count(param_types_794),(struct list$1char$ph*)come_increment_ref_count(param_names_795),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_796),var_args_797,(char*)come_increment_ref_count(block_813),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_811)),generics_sline_812));
        /*c*/ come_call_finalizer3(__right_value656,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value657,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        fun_name3_815=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_810,base_fun_name_789));
        map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_815)),(struct sGenericsFun*)come_increment_ref_count(fun_814));
        __result_obj__351 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_810 = come_decrement_ref_count(none_generics_name_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_811 = come_decrement_ref_count(generics_sname_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_813 = come_decrement_ref_count(block_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_814,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_815 = come_decrement_ref_count(fun_name3_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_777 = come_decrement_ref_count(attribute_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_778,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_779 = come_decrement_ref_count(var_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_788 = come_decrement_ref_count(fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_789 = come_decrement_ref_count(base_fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_795,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_796,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_801 = come_decrement_ref_count(asm_fun_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_802 = come_decrement_ref_count(fun_attribute_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__351) ? __result_obj__351 = come_decrement_ref_count(__result_obj__351, ((struct sNode*)__result_obj__351)->finalize, ((struct sNode*)__result_obj__351)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__351;
        (none_generics_name_810 = come_decrement_ref_count(none_generics_name_810, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_811 = come_decrement_ref_count(generics_sname_811, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_813 = come_decrement_ref_count(block_813, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_814,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_815 = come_decrement_ref_count(fun_name3_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph_length(info->method_generics_type_names)>0) {
        generics_sname_837=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_838=info->sline;
        block_839=(char*)come_increment_ref_count(skip_block(info));
        fun_840=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2360, "struct sGenericsFun*")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value671=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value672=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sType*)come_increment_ref_count(result_type_778),(struct list$1sType$ph*)come_increment_ref_count(param_types_794),(struct list$1char$ph*)come_increment_ref_count(param_names_795),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_796),var_args_797,(char*)come_increment_ref_count(block_839),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_837)),generics_sline_838));
        /*c*/ come_call_finalizer3(__right_value671,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__right_value672,list$1char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        method_definition_784) {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sGenericsFun*)come_increment_ref_count(fun_840));
        }
        else {
            map$2char$phsGenericsFun$ph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(base_fun_name_789)),(struct sGenericsFun*)come_increment_ref_count(fun_840));
        }
        __result_obj__352 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_837 = come_decrement_ref_count(generics_sname_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_839 = come_decrement_ref_count(block_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_840,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_777 = come_decrement_ref_count(attribute_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_778,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_779 = come_decrement_ref_count(var_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_788 = come_decrement_ref_count(fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_789 = come_decrement_ref_count(base_fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_795,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_796,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_801 = come_decrement_ref_count(asm_fun_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_802 = come_decrement_ref_count(fun_attribute_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((__result_obj__352) ? __result_obj__352 = come_decrement_ref_count(__result_obj__352, ((struct sNode*)__result_obj__352)->finalize, ((struct sNode*)__result_obj__352)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__352;
        (generics_sname_837 = come_decrement_ref_count(generics_sname_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_839 = come_decrement_ref_count(block_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(fun_840,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_841=info->p-1;
        if(        version_799>0) {
            new_fun_name_842=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value678=__builtin_string(fun_name_788))),version_799));
            (__right_value678 = come_decrement_ref_count(__right_value678, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj176=fun_name_788,
            fun_name_788=(char*)come_increment_ref_count(__builtin_string(new_fun_name_842));
            __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_842 = come_decrement_ref_count(new_fun_name_842, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        block_843=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__780,(_Bool)1));
        static_fun_844=(_Bool)0;
        if(        result_type_778->mStatic) {
            result_type_778->mStatic=(_Bool)0;
            result_type_778->mUniq=(_Bool)0;
            static_fun_844=(_Bool)1;
        }
        inline_fun_845=(_Bool)0;
        if(        result_type_778->mInline) {
            result_type_778->mInline=(_Bool)0;
            result_type_778->mUniq=(_Bool)0;
            inline_fun_845=(_Bool)1;
        }
        uniq_fun_846=(_Bool)0;
        if(        result_type_778->mUniq) {
            result_type_778->mUniq=(_Bool)0;
            result_type_778->mInline=(_Bool)0;
            result_type_778->mStatic=(_Bool)0;
            uniq_fun_846=(_Bool)1;
        }
        if(        result_type_778->mUniq) {
            result_type_778->mUniq=(_Bool)0;
            result_type_778->mInline=(_Bool)0;
            result_type_778->mStatic=(_Bool)0;
        }
        fun_847=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2408, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sType*)come_increment_ref_count(result_type_778),(struct list$1sType$ph*)come_increment_ref_count(param_types_794),(struct list$1char$ph*)come_increment_ref_count(param_names_795),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_796),(_Bool)0,var_args_797,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_843)),static_fun_844,info,inline_fun_845,uniq_fun_846,(_Bool)0,(char*)come_increment_ref_count(attribute_777),(char*)come_increment_ref_count(fun_attribute_802)));
        if(        info->output_header_file) {
            if(            !result_type_778->mStatic&&!info->no_output_come_code) {
                header_848=(char*)come_increment_ref_count(make_come_header_function(fun_847,(char*)come_increment_ref_count(base_fun_name_789),(struct sType*)come_increment_ref_count(obj_type2_790),version_799,info));
                id_849=(char*)come_increment_ref_count(__builtin_string(fun_name_788));
                add_come_code_at_come_header(info,id_849,"%s",header_848);
                (header_848 = come_decrement_ref_count(header_848, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (id_849 = come_decrement_ref_count(id_849, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        if(        info->in_class) {
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sFun*)come_increment_ref_count(fun_847));
        }
        else {
            fun2_850=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value689=__builtin_string(fun_name_788)))));
            (__right_value689 = come_decrement_ref_count(__right_value689, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_850==((void*)0)||fun2_850->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sFun*)come_increment_ref_count(fun_847));
            }
            /*c*/ come_call_finalizer3(fun2_850,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2434, "struct sNode");
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value693=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2434, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_847),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result_obj__353 = come_increment_ref_count(((struct sNode*)(__right_value694=_inf_value6)));
        /*c*/ come_call_finalizer3(block_843,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_847,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (attribute_777 = come_decrement_ref_count(attribute_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(result_type_778,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (var_name_779 = come_decrement_ref_count(var_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_788 = come_decrement_ref_count(fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_789 = come_decrement_ref_count(base_fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type2_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_795,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_796,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (asm_fun_801 = come_decrement_ref_count(asm_fun_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_attribute_802 = come_decrement_ref_count(fun_attribute_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(__right_value693,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value694) ? __right_value694 = come_decrement_ref_count(__right_value694, ((struct sNode*)__right_value694)->finalize, ((struct sNode*)__right_value694)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__353) ? __result_obj__353 = come_decrement_ref_count(__result_obj__353, ((struct sNode*)__result_obj__353)->finalize, ((struct sNode*)__result_obj__353)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__353;
        /*c*/ come_call_finalizer3(block_843,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun_847,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_799>0) {
            new_fun_name_851=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_788,version_799));
            __dec_obj177=fun_name_788,
            fun_name_788=(char*)come_increment_ref_count(__builtin_string(new_fun_name_851));
            __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            (new_fun_name_851 = come_decrement_ref_count(new_fun_name_851, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_778->mStatic=(_Bool)0;
            result_type_778->mUniq=(_Bool)0;
            result_type_778->mInline=(_Bool)0;
            fun_852=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2450, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sType*)come_increment_ref_count(result_type_778),(struct list$1sType$ph*)come_increment_ref_count(param_types_794),(struct list$1char$ph*)come_increment_ref_count(param_names_795),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_796),(_Bool)1,var_args_797,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_777),(char*)come_increment_ref_count(fun_attribute_802)));
            fun2_853=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value700=__builtin_string(fun_name_788)))));
            (__right_value700 = come_decrement_ref_count(__right_value700, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_853==((void*)0)||fun2_853->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sFun*)come_increment_ref_count(fun_852));
            }
            if(            info->output_header_file) {
                if(                !result_type_778->mStatic&&!info->no_output_come_code) {
                    header_854=(char*)come_increment_ref_count(make_come_header_function(fun_852,(char*)come_increment_ref_count(base_fun_name_789),(struct sType*)come_increment_ref_count(obj_type2_790),version_799,info));
                    id_855=(char*)come_increment_ref_count(__builtin_string(fun_name_788));
                    add_come_code_at_come_header(info,id_855,"%s",header_854);
                    (header_854 = come_decrement_ref_count(header_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_855 = come_decrement_ref_count(id_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2470, "struct sNode");
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value706=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2470, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_852),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result_obj__354 = come_increment_ref_count(((struct sNode*)(__right_value707=_inf_value7)));
            /*c*/ come_call_finalizer3(fun_852,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_853,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_777 = come_decrement_ref_count(attribute_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_778,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_779 = come_decrement_ref_count(var_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_788 = come_decrement_ref_count(fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_789 = come_decrement_ref_count(base_fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_795,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_796,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_801 = come_decrement_ref_count(asm_fun_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_802 = come_decrement_ref_count(fun_attribute_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value706,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value707) ? __right_value707 = come_decrement_ref_count(__right_value707, ((struct sNode*)__right_value707)->finalize, ((struct sNode*)__right_value707)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__354) ? __result_obj__354 = come_decrement_ref_count(__result_obj__354, ((struct sNode*)__result_obj__354)->finalize, ((struct sNode*)__result_obj__354)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__354;
            /*c*/ come_call_finalizer3(fun_852,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_853,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value708=parse_function_attribute(info)));
            asm_fun_856=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute2_857=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            /*c*/ come_call_finalizer3(__right_value708,tuple2$2char$phchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            string_operator_not_equals(asm_fun_856,"")) {
                __dec_obj178=fun_name_788,
                fun_name_788=(char*)come_increment_ref_count(__builtin_string(asm_fun_856));
                __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            }
            __dec_obj179=fun_attribute_802,
            fun_attribute_802=(char*)come_increment_ref_count(string_operator_add(fun_attribute_802,fun_attribute2_857));
            __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            result_type_778->mStatic=(_Bool)0;
            result_type_778->mUniq=(_Bool)0;
            result_type_778->mInline=(_Bool)0;
            fun_858=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun*")),(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sType*)come_increment_ref_count(result_type_778),(struct list$1sType$ph*)come_increment_ref_count(param_types_794),(struct list$1char$ph*)come_increment_ref_count(param_names_795),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_796),(_Bool)1,var_args_797,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_777),(char*)come_increment_ref_count(fun_attribute_802)));
            fun2_859=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value714=__builtin_string(fun_name_788)))));
            (__right_value714 = come_decrement_ref_count(__right_value714, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_859==((void*)0)||fun2_859->mExternal) {
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_788)),(struct sFun*)come_increment_ref_count(fun_858));
            }
            if(            info->output_header_file) {
                if(                !result_type_778->mStatic&&!info->no_output_come_code) {
                    header_860=(char*)come_increment_ref_count(make_come_header_function(fun_858,(char*)come_increment_ref_count(base_fun_name_789),(struct sType*)come_increment_ref_count(obj_type2_790),version_799,info));
                    id_861=(char*)come_increment_ref_count(__builtin_string(fun_name_788));
                    add_come_code_at_come_header(info,id_861,"%s",header_860);
                    (header_860 = come_decrement_ref_count(header_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_861 = come_decrement_ref_count(id_861, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2507, "struct sNode");
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value720=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2507, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_858),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result_obj__355 = come_increment_ref_count(((struct sNode*)(__right_value721=_inf_value8)));
            (asm_fun_856 = come_decrement_ref_count(asm_fun_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_857 = come_decrement_ref_count(fun_attribute2_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_858,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_859,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (attribute_777 = come_decrement_ref_count(attribute_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(result_type_778,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (var_name_779 = come_decrement_ref_count(var_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_788 = come_decrement_ref_count(fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_789 = come_decrement_ref_count(base_fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(obj_type2_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_795,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_796,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (asm_fun_801 = come_decrement_ref_count(asm_fun_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_802 = come_decrement_ref_count(fun_attribute_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(__right_value720,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value721) ? __right_value721 = come_decrement_ref_count(__right_value721, ((struct sNode*)__right_value721)->finalize, ((struct sNode*)__right_value721)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__355) ? __result_obj__355 = come_decrement_ref_count(__result_obj__355, ((struct sNode*)__result_obj__355)->finalize, ((struct sNode*)__result_obj__355)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__355;
            (asm_fun_856 = come_decrement_ref_count(asm_fun_856, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute2_857 = come_decrement_ref_count(fun_attribute2_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(fun_858,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_859,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value722=err_msg(info,"invalid character(2)(%c)",*info->p)));
        come_exception_var_c22_862=multiple_assign_var34->v1;
        Err_863=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_863)?(puts(Err_863),exit(0)):(0));
        /*c*/ come_call_finalizer3(__right_value722,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        exit(2);
        (Err_863 = come_decrement_ref_count(Err_863, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_803;
    __result_obj__356 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_777 = come_decrement_ref_count(attribute_777, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(result_type_778,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (var_name_779 = come_decrement_ref_count(var_name_779, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_788 = come_decrement_ref_count(fun_name_788, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_789 = come_decrement_ref_count(base_fun_name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(obj_type2_790,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_names_795,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(param_default_parametors_796,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (asm_fun_801 = come_decrement_ref_count(asm_fun_801, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_attribute_802 = come_decrement_ref_count(fun_attribute_802, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__result_obj__356) ? __result_obj__356 = come_decrement_ref_count(__result_obj__356, ((struct sNode*)__result_obj__356)->finalize, ((struct sNode*)__result_obj__356)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__356;
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
struct sLambdaNode* __result_obj__337;
void* __right_value649 = (void*)0;
struct sLambdaNode* result_809;
void* __right_value650 = (void*)0;
char* __dec_obj175;
struct sLambdaNode* __result_obj__338;
    if(    self==(void*)0) {
        __result_obj__337 = (void*)0;
        return __result_obj__337;
    }
    result_809=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*"));
    if(    self!=((void*)0)) {
        result_809->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj175=result_809->sname,
        result_809->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj175 = come_decrement_ref_count(__dec_obj175, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_809->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_809->mFun=self->mFun;
    }
    __result_obj__338 = result_809;
    /*c*/ come_call_finalizer3(result_809,sLambdaNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__338;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_833;
unsigned int it_834;
_Bool same_key_exist_835;
char* it2_836;
struct map$2char$phsGenericsFun$ph* __result_obj__350;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph_rehash(self);
    }
    hash_833=string_get_hash_key(((char*)key))%self->size;
    it_834=hash_833;
    while((_Bool)1) {
        if(        self->item_existance[it_834]) {
            if(            string_equals(self->keys[it_834],key)) {
                if(                1) {
                    list$1char$ph_remove(self->key_list,self->keys[it_834]);
                    (self->keys[it_834] = come_decrement_ref_count(self->keys[it_834], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_834]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$ph_remove(self->key_list,self->keys[it_834]);
                    self->keys[it_834]=key;
                }
                if(                1) {
                    /*c*/ come_call_finalizer3(self->items[it_834],sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    self->items[it_834]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_834]=item;
                }
                break;
            }
            it_834++;
            if(            it_834>=self->size) {
                it_834=0;
            }
            else if(            it_834==hash_833) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_834]=(_Bool)1;
            if(            1) {
                self->keys[it_834]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_834]=key;
            }
            if(            1) {
                self->items[it_834]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_834]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_835=(_Bool)0;
    for(    it2_836=list$1char$ph_begin(self->key_list);    !list$1char$ph_end(self->key_list);    it2_836=list$1char$ph_next(self->key_list)    ){
        if(        string_equals(it2_836,key)) {
            same_key_exist_835=(_Bool)1;
        }
    }
    if(    !same_key_exist_835) {
        list$1char$ph_push_back(self->key_list,(char*)come_increment_ref_count(key));
    }
    __result_obj__350 = self;
    (key = come_decrement_ref_count(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(item,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__350;
}

static void map$2char$phsGenericsFun$ph_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_816;
void* __right_value662 = (void*)0;
char** keys_817;
void* __right_value663 = (void*)0;
struct sGenericsFun** items_818;
void* __right_value664 = (void*)0;
_Bool* item_existance_819;
int len_820;
char* it_823;
struct sGenericsFun* default_value_826;
void* __right_value665 = (void*)0;
struct sGenericsFun* it2_827;
unsigned int hash_830;
int n_831;
struct sGenericsFun* default_value_832;
void* __right_value666 = (void*)0;
default_value_826 = (void*)0;
default_value_832 = (void*)0;
    size_816=self->size*10;
    keys_817=(char**)come_increment_ref_count(((char**)(__right_value662=(char**)come_calloc(1, sizeof(char*)*(1*(size_816)), "./comelang.h", 2288, "char**"))));
    items_818=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value663=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_816)), "./comelang.h", 2289, "struct sGenericsFun**"))));
    item_existance_819=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value664=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_816)), "./comelang.h", 2290, "_Bool*"))));
    len_820=0;
    for(    it_823=map$2char$phsGenericsFun$ph_begin(self);    !map$2char$phsGenericsFun$ph_end(self);    it_823=map$2char$phsGenericsFun$ph_next(self)    ){
        memset(&default_value_826,0,sizeof(struct sGenericsFun*));
        it2_827=((struct sGenericsFun*)(__right_value665=map$2char$phsGenericsFun$ph_at(self,it_823,(struct sGenericsFun*)come_increment_ref_count(default_value_826))));
        /*c*/ come_call_finalizer3(__right_value665,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        hash_830=string_get_hash_key(((char*)it_823))%size_816;
        n_831=hash_830;
        while((_Bool)1) {
            if(            item_existance_819[n_831]) {
                n_831++;
                if(                n_831>=size_816) {
                    n_831=0;
                }
                else if(                n_831==hash_830) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_819[n_831]=(_Bool)1;
                keys_817[n_831]=it_823;
                items_818[n_831]=((struct sGenericsFun*)(__right_value666=map$2char$phsGenericsFun$ph_at(self,it_823,(struct sGenericsFun*)come_increment_ref_count(default_value_832))));
                /*c*/ come_call_finalizer3(__right_value666,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                len_820++;
                /*c*/ come_call_finalizer3(default_value_832,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                break;
                /*c*/ come_call_finalizer3(default_value_832,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
        }
        /*c*/ come_call_finalizer3(default_value_826,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_817;
    self->items=items_818;
    self->item_existance=item_existance_819;
    self->size=size_816;
    self->len=len_820;
}

static char* map$2char$phsGenericsFun$ph_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_821;
char* __result_obj__340;
char* __result_obj__341;
char* result_822;
char* __result_obj__342;
result_821 = (void*)0;
result_822 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_821,0,sizeof(char*));
        __result_obj__340 = result_821;
        return __result_obj__340;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__341 = self->key_list->it->item;
        return __result_obj__341;
    }
    memset(&result_822,0,sizeof(char*));
    __result_obj__342 = result_822;
    return __result_obj__342;
}

static _Bool map$2char$phsGenericsFun$ph_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph_next(struct map$2char$phsGenericsFun$ph* self){
char* result_824;
char* __result_obj__343;
char* __result_obj__344;
char* result_825;
char* __result_obj__345;
result_824 = (void*)0;
result_825 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_824,0,sizeof(char*));
        __result_obj__343 = result_824;
        return __result_obj__343;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__344 = self->key_list->it->item;
        return __result_obj__344;
    }
    memset(&result_825,0,sizeof(char*));
    __result_obj__345 = result_825;
    return __result_obj__345;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_828;
unsigned int it_829;
struct sGenericsFun* __result_obj__346;
struct sGenericsFun* __result_obj__347;
struct sGenericsFun* __result_obj__348;
struct sGenericsFun* __result_obj__349;
    hash_828=string_get_hash_key(((char*)key))%self->size;
    it_829=hash_828;
    while((_Bool)1) {
        if(        self->item_existance[it_829]) {
            if(            string_equals(self->keys[it_829],key)) {
                __result_obj__346 = come_increment_ref_count(self->items[it_829]);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__346,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__346;
            }
            it_829++;
            if(            it_829>=self->size) {
                it_829=0;
            }
            else if(            it_829==hash_828) {
                __result_obj__347 = come_increment_ref_count(default_value);
                /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__347,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__347;
            }
        }
        else {
            __result_obj__348 = come_increment_ref_count(default_value);
            /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__348,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__348;
        }
    }
    __result_obj__349 = come_increment_ref_count(default_value);
    /*c*/ come_call_finalizer3(default_value,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__349,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__349;
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
char* last_code_864;
char* __dec_obj180;
char* last_code2_865;
char* __dec_obj181;
_Bool comma_instead_of_semicolon_866;
struct sClass* current_stack_frame_struct_867;
char* real_fun_name_868;
struct sFun* finalizer_869;
void* __right_value723 = (void*)0;
struct sType* type_before_870;
void* __right_value724 = (void*)0;
struct sType* type2_871;
void* __right_value725 = (void*)0;
char* fun_name2_872;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
char* none_generics_name_873;
void* __right_value728 = (void*)0;
char* generics_fun_name_874;
void* __right_value729 = (void*)0;
struct sGenericsFun* generics_fun_875;
void* __right_value730 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_879=0;
_Bool err_880=0;
void* __right_value731 = (void*)0;
char* __dec_obj182;
int i_881;
void* __right_value732 = (void*)0;
char* new_fun_name_882;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
char* __dec_obj183;
void* __right_value735 = (void*)0;
char* __dec_obj184;
void* __right_value736 = (void*)0;
char* __dec_obj185;
void* __right_value737 = (void*)0;
char* user_real_fun_name_883;
void* __right_value738 = (void*)0;
struct sFun* user_finalizer_884;
void* __right_value739 = (void*)0;
struct sType* type2_885;
struct sClass* klass_886;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct buffer* source_887;
void* __right_value742 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_894;
struct tuple2$2char$phsType$ph* it_897;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_900=0;
struct sType* field_type_901=0;
char* p_904;
int sline_905;
char* sname_906;
char* head_907;
struct buffer* source3_908;
struct buffer* __dec_obj186;
void* __right_value743 = (void*)0;
char* __dec_obj187;
void* __right_value744 = (void*)0;
struct sBlock* block_909;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sType* result_type_910;
void* __right_value748 = (void*)0;
char* name_911;
void* __right_value749 = (void*)0;
struct sType* self_type_912;
struct sType* __list_values1___914[1];
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct list$1sType$ph* param_types_913;
void* __right_value753 = (void*)0;
char* __list_values2___918[1];
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
struct list$1char$ph* param_names_922;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct list$1char$ph* param_default_parametors_923;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sFun* fun2_924;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct sFun* fun_925;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value768 = (void*)0;
struct sNode* node_926;
_Bool Value_927;
struct buffer* __dec_obj188;
char* __dec_obj189;
char* __dec_obj190;
char* __dec_obj191;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__382;
memset(&i_881, 0, sizeof(int));
    last_code_864=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj180=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_865=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj181=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj181 = come_decrement_ref_count(__dec_obj181, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_866=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_867=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_868=((void*)0);
    finalizer_869=((void*)0);
    type_before_870=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_871=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_871->mHeap=(_Bool)0;
    fun_name2_872=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        finalizer_869=((struct sFun*)(__right_value726=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_872)));
        /*c*/ come_call_finalizer3(__right_value726,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        finalizer_869==((void*)0)) {
            none_generics_name_873=(char*)come_increment_ref_count(get_none_generics_name(type2_871->mClass->mName));
            generics_fun_name_874=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_873,fun_name));
            generics_fun_875=((struct sGenericsFun*)(__right_value729=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_874)));
            /*c*/ come_call_finalizer3(__right_value729,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_875) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value730=create_generics_fun((char*)come_increment_ref_count(fun_name2_872),generics_fun_875,type,info)));
                name_879=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_880=multiple_assign_var35->v2;
                /*c*/ come_call_finalizer3(__right_value730,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_880) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_869=((struct sFun*)(__right_value731=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_879)));
                /*c*/ come_call_finalizer3(__right_value731,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_879 = come_decrement_ref_count(name_879, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_873 = come_decrement_ref_count(none_generics_name_873, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_874 = come_decrement_ref_count(generics_fun_name_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj182=real_fun_name_868,
        real_fun_name_868=(char*)come_increment_ref_count(fun_name2_872);
        __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    else {
        for(        i_881=128-1;        i_881>=1;        i_881--        ){
            new_fun_name_882=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_872,i_881));
            finalizer_869=((struct sFun*)(__right_value733=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_882)));
            /*c*/ come_call_finalizer3(__right_value733,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            finalizer_869) {
                __dec_obj183=fun_name2_872,
                fun_name2_872=(char*)come_increment_ref_count(__builtin_string(new_fun_name_882));
                __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_882 = come_decrement_ref_count(new_fun_name_882, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_882 = come_decrement_ref_count(new_fun_name_882, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_869==((void*)0)) {
            finalizer_869=((struct sFun*)(__right_value735=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_872)));
            /*c*/ come_call_finalizer3(__right_value735,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj184=real_fun_name_868,
        real_fun_name_868=(char*)come_increment_ref_count(fun_name2_872);
        __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    finalizer_869==((void*)0)) {
        type=type_before_870;
        __dec_obj185=real_fun_name_868,
        real_fun_name_868=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        user_real_fun_name_883=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_884=((struct sFun*)(__right_value738=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_883)));
        /*c*/ come_call_finalizer3(__right_value738,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        type2_885=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_885;
        klass_886=type->mClass;
        if(        type->mPointerNum>0&&klass_886->mStruct||type->mAllocaValue) {
            source_887=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2607, "struct buffer*"))));
            buffer_append_char(source_887,123);
            if(            user_finalizer_884) {
                char source2_888[1024];
                memset(&source2_888, 0, sizeof(char)                *(1024)                );
                snprintf(source2_888,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_883);
                buffer_append_str(source_887,source2_888);
            }
            klass_886=((struct sClass*)(__right_value742=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_886->mName)));
            /*c*/ come_call_finalizer3(__right_value742,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_894=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_886->mFields)),it_897=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_894));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_894));            it_897=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_894))            ){
                multiple_assign_var36=it_897;
                name_900=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_901=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_901->mHeap) {
                    char source2_902[1024];
                    memset(&source2_902, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_902,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_900,name_900,name_900,name_900);
                    buffer_append_str(source_887,source2_902);
                }
                else if(                field_type_901->mChannel) {
                    char source2_903[1024];
                    memset(&source2_903, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_903,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_900,name_900);
                    buffer_append_str(source_887,source2_903);
                    snprintf(source2_903,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_900,name_900);
                    buffer_append_str(source_887,source2_903);
                }
                (name_900 = come_decrement_ref_count(name_900, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_901,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_894,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            buffer_append_char(source_887,125);
            p_904=info->p;
            sline_905=info->sline;
            sname_906=(char*)come_increment_ref_count(info->sname);
            head_907=info->head;
            source3_908=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj186=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source_887);
            /*b*/ come_call_finalizer3(__dec_obj186,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_887->buf;
            info->head=source_887->buf;
            __dec_obj187=info->sname,
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_868));
            __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            info->sline=0;
            block_909=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_910=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2656, "struct sType*")),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_911=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_868));
            self_type_912=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_912->mHeap=(_Bool)0;
            if(            self_type_912->mPointerNum==0) {
                self_type_912->mPointerNum=1;
            }
            if(            self_type_912->mPointerNum>1) {
                self_type_912->mPointerNum=1;
            }
            param_types_913=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___914[0]=self_type_912,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2666, "struct list$1sType$ph")),1,__list_values1___914)));
            param_names_922=(struct list$1char$ph*)come_increment_ref_count((__list_values2___918[0]=((char*)(__right_value753=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2667, "struct list$1char$ph")),1,__list_values2___918)));
            (__right_value753 = come_decrement_ref_count(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_923=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2668, "struct list$1char$ph*"))));
            list$1char$ph_push_back(param_default_parametors_923,((void*)0));
            result_type_910->mStatic=(_Bool)0;
            result_type_910->mUniq=(_Bool)0;
            result_type_910->mInline=(_Bool)0;
            fun2_924=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value759=__builtin_string(name_911)))));
            (__right_value759 = come_decrement_ref_count(__right_value759, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_924==((void*)0)||fun2_924->mExternal) {
                fun_925=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2677, "struct sFun*")),(char*)come_increment_ref_count(name_911),(struct sType*)come_increment_ref_count(result_type_910),(struct list$1sType$ph*)come_increment_ref_count(param_types_913),(struct list$1char$ph*)come_increment_ref_count(param_names_922),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_923),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_909),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_911)),(struct sFun*)come_increment_ref_count(fun_925));
                finalizer_869=fun_925;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2687, "struct sNode");
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value767=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2687, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_925),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_926=(struct sNode*)come_increment_ref_count(_inf_value9);
                /*c*/ come_call_finalizer3(__right_value767,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                Value_927=node_compile(node_926,info);
                if(                !Value_927) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                /*c*/ come_call_finalizer3(fun_925,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((node_926) ? node_926 = come_decrement_ref_count(node_926, ((struct sNode*)node_926)->finalize, ((struct sNode*)node_926)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_869=fun2_924;
            }
            __dec_obj188=info->source,
            info->source=(struct buffer*)come_increment_ref_count(source3_908);
            /*b*/ come_call_finalizer3(__dec_obj188,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_904;
            info->head=head_907;
            info->sline=sline_905;
            __dec_obj189=info->sname,
            info->sname=(char*)come_increment_ref_count(sname_906);
            __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
            /*c*/ come_call_finalizer3(source_887,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (sname_906 = come_decrement_ref_count(sname_906, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(source3_908,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(block_909,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(result_type_910,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_911 = come_decrement_ref_count(name_911, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(self_type_912,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_types_913,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_names_922,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(param_default_parametors_923,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(fun2_924,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        (user_real_fun_name_883 = come_decrement_ref_count(user_real_fun_name_883, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(type2_885,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_867;
    __dec_obj190=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_864);
    __dec_obj190 = come_decrement_ref_count(__dec_obj190, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj191=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_865);
    __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_866;
    __result_obj__382 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value775=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2712, "struct tuple2$2sFun$pchar$ph")),finalizer_869,(char*)come_increment_ref_count(real_fun_name_868)))));
    (last_code_864 = come_decrement_ref_count(last_code_864, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_865 = come_decrement_ref_count(last_code2_865, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_868 = come_decrement_ref_count(real_fun_name_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type_before_870,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(type2_871,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_872 = come_decrement_ref_count(fun_name2_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value775,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__382,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__382;
}

static int list$1sType$ph_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_876;
unsigned int hash_877;
unsigned int it_878;
struct sGenericsFun* __result_obj__357;
struct sGenericsFun* __result_obj__358;
struct sGenericsFun* __result_obj__359;
struct sGenericsFun* __result_obj__360;
default_value_876 = (void*)0;
    memset(&default_value_876,0,sizeof(struct sGenericsFun*));
    hash_877=string_get_hash_key(((char*)key))%self->size;
    it_878=hash_877;
    while((_Bool)1) {
        if(        self->item_existance[it_878]) {
            if(            string_equals(self->keys[it_878],key)) {
                __result_obj__357 = come_increment_ref_count(self->items[it_878]);
                /*c*/ come_call_finalizer3(default_value_876,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__357,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__357;
            }
            it_878++;
            if(            it_878>=self->size) {
                it_878=0;
            }
            else if(            it_878==hash_877) {
                __result_obj__358 = come_increment_ref_count(default_value_876);
                /*c*/ come_call_finalizer3(default_value_876,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__358,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__358;
            }
        }
        else {
            __result_obj__359 = come_increment_ref_count(default_value_876);
            /*c*/ come_call_finalizer3(default_value_876,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__359,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__359;
        }
    }
    __result_obj__360 = come_increment_ref_count(default_value_876);
    /*c*/ come_call_finalizer3(default_value_876,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__360,sGenericsFun_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__360;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_889;
unsigned int hash_890;
unsigned int it_891;
struct sClass* __result_obj__361;
struct sClass* __result_obj__362;
struct sClass* __result_obj__363;
struct sClass* __result_obj__364;
default_value_889 = (void*)0;
    memset(&default_value_889,0,sizeof(struct sClass*));
    hash_890=string_get_hash_key(((char*)key))%self->size;
    it_891=hash_890;
    while((_Bool)1) {
        if(        self->item_existance[it_891]) {
            if(            string_equals(self->keys[it_891],key)) {
                __result_obj__361 = come_increment_ref_count(self->items[it_891]);
                /*c*/ come_call_finalizer3(default_value_889,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__361,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__361;
            }
            it_891++;
            if(            it_891>=self->size) {
                it_891=0;
            }
            else if(            it_891==hash_890) {
                __result_obj__362 = come_increment_ref_count(default_value_889);
                /*c*/ come_call_finalizer3(default_value_889,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                /*c*/ come_call_finalizer3(__result_obj__362,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                return __result_obj__362;
            }
        }
        else {
            __result_obj__363 = come_increment_ref_count(default_value_889);
            /*c*/ come_call_finalizer3(default_value_889,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            /*c*/ come_call_finalizer3(__result_obj__363,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
            return __result_obj__363;
        }
    }
    __result_obj__364 = come_increment_ref_count(default_value_889);
    /*c*/ come_call_finalizer3(default_value_889,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__364,sClass_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__364;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_892;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_893;
    it_892=self->head;
    while(it_892!=((void*)0)) {
        prev_it_893=it_892;
        it_892=it_892->next;
        /*c*/ come_call_finalizer3(prev_it_893,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
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
struct tuple2$2char$phsType$ph* result_895;
struct tuple2$2char$phsType$ph* __result_obj__365;
struct tuple2$2char$phsType$ph* __result_obj__366;
struct tuple2$2char$phsType$ph* result_896;
struct tuple2$2char$phsType$ph* __result_obj__367;
result_895 = (void*)0;
result_896 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_895,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__365 = result_895;
        return __result_obj__365;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__366 = self->it->item;
        return __result_obj__366;
    }
    memset(&result_896,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__367 = result_896;
    return __result_obj__367;
}

static _Bool list$1tuple2$2char$phsType$ph$ph_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_898;
struct tuple2$2char$phsType$ph* __result_obj__368;
struct tuple2$2char$phsType$ph* __result_obj__369;
struct tuple2$2char$phsType$ph* result_899;
struct tuple2$2char$phsType$ph* __result_obj__370;
result_898 = (void*)0;
result_899 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_898,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__368 = result_898;
        return __result_obj__368;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__369 = self->it->item;
        return __result_obj__369;
    }
    memset(&result_899,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__370 = result_899;
    return __result_obj__370;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_915;
struct list$1sType$ph* __result_obj__371;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_915=0;    i_915<num_value;    i_915++    ){
        list$1sType$ph_push_back(self,(struct sType*)come_increment_ref_count(values[i_915]));
    }
    __result_obj__371 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__371,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__371;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__372;
void* __right_value750 = (void*)0;
struct list$1sType$ph* result_916;
struct list$1sType$ph* __result_obj__373;
    if(    self==(void*)0) {
        __result_obj__372 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__372,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__372;
    }
    result_916=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*"));
    if(    self!=((void*)0)) {
        result_916->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_916->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_916->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_916->it=self->it;
    }
    __result_obj__373 = come_increment_ref_count(result_916);
    /*c*/ come_call_finalizer3(result_916,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__373,list$1sType$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__373;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_917;
    result_917=0;
    result_917+=int_get_hash_key(((int)self->head));
    result_917+=int_get_hash_key(((int)self->tail));
    result_917+=int_get_hash_key(((int)self->len));
    result_917+=int_get_hash_key(((int)self->it));
    return result_917;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_919;
struct list$1char$ph* __result_obj__374;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_919=0;    i_919<num_value;    i_919++    ){
        list$1char$ph_push_back(self,(char*)come_increment_ref_count(values[i_919]));
    }
    __result_obj__374 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__374,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__374;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__375;
void* __right_value754 = (void*)0;
struct list$1char$ph* result_920;
struct list$1char$ph* __result_obj__376;
    if(    self==(void*)0) {
        __result_obj__375 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__375,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__375;
    }
    result_920=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*"));
    if(    self!=((void*)0)) {
        result_920->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_920->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_920->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_920->it=self->it;
    }
    __result_obj__376 = come_increment_ref_count(result_920);
    /*c*/ come_call_finalizer3(result_920,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__376,list$1char$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__376;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_921;
    result_921=0;
    result_921+=int_get_hash_key(((int)self->head));
    result_921+=int_get_hash_key(((int)self->tail));
    result_921+=int_get_hash_key(((int)self->len));
    result_921+=int_get_hash_key(((int)self->it));
    return result_921;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__377;
void* __right_value769 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_928;
void* __right_value770 = (void*)0;
char* __dec_obj192;
struct tuple2$2sFun$pchar$ph* __result_obj__378;
    if(    self==(void*)0) {
        __result_obj__377 = come_increment_ref_count((void*)0);
        /*c*/ come_call_finalizer3(__result_obj__377,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__377;
    }
    result_928=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*"));
    if(    self!=((void*)0)) {
        result_928->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj192=result_928->v2,
        result_928->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__378 = come_increment_ref_count(result_928);
    /*c*/ come_call_finalizer3(result_928,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__378,tuple2$2sFun$pchar$ph_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__378;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_929;
    result_929=0;
    result_929+=int_get_hash_key(((int)self->v1));
    result_929+=int_get_hash_key(((int)self->v2));
    return result_929;
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
int n_930;
_Bool result_931;
char* it_932;
char* default_value_933;
void* __right_value771 = (void*)0;
char* it2_934;
struct sVar* default_value2_937;
void* __right_value772 = (void*)0;
struct sVar* item_938;
void* __right_value773 = (void*)0;
struct sVar* item2_939;
default_value_933 = (void*)0;
default_value2_937 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_930=0;
    result_931=(_Bool)1;
    for(    it_932=list$1char$ph_begin(left->key_list);    !list$1char$ph_end(left->key_list);    it_932=list$1char$ph_next(left->key_list)    ){
        memset(&default_value_933,0,sizeof(char*));
        it2_934=((char*)(__right_value771=list$1char$ph_item(right->key_list,n_930,default_value_933)));
        (__right_value771 = come_decrement_ref_count(__right_value771, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        string_equals(it_932,it2_934)) {
            memset(&default_value2_937,0,sizeof(struct sVar*));
            item_938=((struct sVar*)(__right_value772=map$2char$phsVar$ph_at(left,it_932,(struct sVar*)come_increment_ref_count(default_value2_937))));
            /*c*/ come_call_finalizer3(__right_value772,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            item2_939=((struct sVar*)(__right_value773=map$2char$phsVar$ph_at(right,it2_934,(struct sVar*)come_increment_ref_count(default_value2_937))));
            /*c*/ come_call_finalizer3(__right_value773,sVar_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !sVar_equals(item_938,item2_939)) {
                result_931=(_Bool)0;
            }
            /*c*/ come_call_finalizer3(default_value2_937,sVar_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            result_931=(_Bool)0;
        }
        n_930++;
        (default_value_933 = come_decrement_ref_count(default_value_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_931;
}

static char* list$1char$ph_item(struct list$1char$ph* self, int position, char* default_value){
struct list_item$1char$ph* it_935;
int i_936;
char* __result_obj__379;
char* __result_obj__380;
    if(    position<0) {
        position+=self->len;
    }
    it_935=self->head;
    i_936=0;
    while(it_935!=((void*)0)) {
        if(        position==i_936) {
            __result_obj__379 = come_increment_ref_count(it_935->item);
            (__result_obj__379 = come_decrement_ref_count(__result_obj__379, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__379;
        }
        it_935=it_935->next;
        i_936++;
    }
    __result_obj__380 = come_increment_ref_count(default_value);
    (__result_obj__380 = come_decrement_ref_count(__result_obj__380, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__380;
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
char* __dec_obj193;
struct tuple2$2sFun$pchar$ph* __result_obj__381;
    self->v1=v1;
    __dec_obj193=self->v2,
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj193 = come_decrement_ref_count(__dec_obj193, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__381 = come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    (v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__381,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__381;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_940;
char* __dec_obj194;
char* last_code2_941;
char* __dec_obj195;
_Bool comma_instead_of_semicolon_942;
struct sClass* current_stack_frame_struct_943;
struct sFun* equaler_944;
void* __right_value776 = (void*)0;
char* real_fun_name_945;
void* __right_value777 = (void*)0;
struct sType* type2_946;
struct sClass* klass_947;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
struct buffer* source_948;
char* name_949;
void* __right_value780 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_951;
struct tuple2$2char$phsType$ph* it_952;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_953=0;
struct sType* field_type_954=0;
char* p_956;
int sline_957;
char* sname_958;
char* head_959;
struct buffer* source3_960;
struct buffer* __dec_obj196;
void* __right_value781 = (void*)0;
char* __dec_obj197;
void* __right_value782 = (void*)0;
struct sBlock* block_961;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sType* result_type_962;
void* __right_value786 = (void*)0;
char* name_963;
void* __right_value787 = (void*)0;
struct sType* left_type_964;
void* __right_value788 = (void*)0;
struct sType* right_type_965;
struct sType* __list_values3___967[2];
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct list$1sType$ph* param_types_966;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
char* __list_values4___968[2];
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct list$1char$ph* param_names_969;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
struct list$1char$ph* param_default_parametors_970;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sFun* fun2_971;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sFun* fun_972;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value806 = (void*)0;
struct sNode* node_973;
_Bool Value_974;
void* __right_value807 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c23_975=0;
char* Err_976=0;
struct buffer* __dec_obj198;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__383;
    last_code_940=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj194=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_941=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj195=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_942=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_943=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_944=((void*)0);
    real_fun_name_945=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_946=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_946;
    klass_947=type->mClass;
    if(    type->mPointerNum>0&&!klass_947->mNumber) {
        source_948=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2738, "struct buffer*"))));
        buffer_append_char(source_948,123);
        if(        klass_947->mProtocol) {
            name_949="_protocol_obj";
            char source2_950[1024];
            memset(&source2_950, 0, sizeof(char)            *(1024)            );
            snprintf(source2_950,1024,"return left.%s.equals(right.%s);\n",name_949,name_949);
            buffer_append_str(source_948,source2_950);
        }
        else {
            klass_947=((struct sClass*)(__right_value780=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_947->mName)));
            /*c*/ come_call_finalizer3(__right_value780,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_951=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_947->mFields)),it_952=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_951));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_951));            it_952=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_951))            ){
                multiple_assign_var37=it_952;
                name_953=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_954=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_955[1024];
                memset(&source2_955, 0, sizeof(char)                *(1024)                );
                snprintf(source2_955,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_953,name_953,name_953);
                buffer_append_str(source_948,source2_955);
                (name_953 = come_decrement_ref_count(name_953, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_954,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_951,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_948,"return true;");
        buffer_append_char(source_948,125);
        p_956=info->p;
        sline_957=info->sline;
        sname_958=(char*)come_increment_ref_count(info->sname);
        head_959=info->head;
        source3_960=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj196=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_948);
        /*b*/ come_call_finalizer3(__dec_obj196,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_948->buf;
        info->head=source_948->buf;
        __dec_obj197=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_945));
        __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_961=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_962=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2778, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_963=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_945));
        left_type_964=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_964->mHeap=(_Bool)0;
        right_type_965=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_965->mHeap=(_Bool)0;
        param_types_966=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___967[0]=left_type_964,
__list_values3___967[1]=right_type_965,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2784, "struct list$1sType$ph")),2,__list_values3___967)));
        param_names_969=(struct list$1char$ph*)come_increment_ref_count((__list_values4___968[0]=((char*)(__right_value791=__builtin_string("left"))),
__list_values4___968[1]=((char*)(__right_value792=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2785, "struct list$1char$ph")),2,__list_values4___968)));
        (__right_value791 = come_decrement_ref_count(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value792 = come_decrement_ref_count(__right_value792, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_970=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2786, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_970,((void*)0));
        list$1char$ph_push_back(param_default_parametors_970,((void*)0));
        result_type_962->mStatic=(_Bool)0;
        result_type_962->mUniq=(_Bool)0;
        result_type_962->mInline=(_Bool)0;
        fun2_971=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value797=__builtin_string(name_963)))));
        (__right_value797 = come_decrement_ref_count(__right_value797, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_971==((void*)0)||fun2_971->mExternal) {
            fun_972=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2796, "struct sFun*")),(char*)come_increment_ref_count(name_963),(struct sType*)come_increment_ref_count(result_type_962),(struct list$1sType$ph*)come_increment_ref_count(param_types_966),(struct list$1char$ph*)come_increment_ref_count(param_names_969),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_970),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_961),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_963)),(struct sFun*)come_increment_ref_count(fun_972));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2804, "struct sNode");
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value805=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2804, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_972),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_973=(struct sNode*)come_increment_ref_count(_inf_value10);
            /*c*/ come_call_finalizer3(__right_value805,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_974=node_compile(node_973,info);
            if(            !Value_974) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value807=err_msg(info,"compiling error")));
                come_exception_var_c23_975=multiple_assign_var38->v1;
                Err_976=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_976)?(puts(Err_976),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value807,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_976 = come_decrement_ref_count(Err_976, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_944=fun_972;
            /*c*/ come_call_finalizer3(fun_972,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_973) ? node_973 = come_decrement_ref_count(node_973, ((struct sNode*)node_973)->finalize, ((struct sNode*)node_973)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_944=fun2_971;
        }
        __dec_obj198=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_960);
        /*b*/ come_call_finalizer3(__dec_obj198,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_956;
        info->head=head_959;
        info->sline=sline_957;
        __dec_obj199=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_958);
        __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_948,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_958 = come_decrement_ref_count(sname_958, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_960,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_961,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_962,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_963 = come_decrement_ref_count(name_963, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_964,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_965,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_966,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_969,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_970,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_971,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_943;
    __dec_obj200=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_940);
    __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj201=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_941);
    __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_942;
    __result_obj__383 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value809=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2830, "struct tuple2$2sFun$pchar$ph")),equaler_944,(char*)come_increment_ref_count(real_fun_name_945)))));
    (last_code_940 = come_decrement_ref_count(last_code_940, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_941 = come_decrement_ref_count(last_code2_941, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_945 = come_decrement_ref_count(real_fun_name_945, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_946,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value809,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__383,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__383;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_977;
char* __dec_obj202;
char* last_code2_978;
char* __dec_obj203;
_Bool comma_instead_of_semicolon_979;
struct sClass* current_stack_frame_struct_980;
struct sFun* equaler_981;
void* __right_value810 = (void*)0;
char* real_fun_name_982;
void* __right_value811 = (void*)0;
struct sType* type2_983;
struct sClass* klass_984;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct buffer* source_985;
char* name_986;
int i_989;
void* __right_value814 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_990;
struct tuple2$2char$phsType$ph* it_991;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_992=0;
struct sType* field_type_993=0;
char* p_997;
int sline_998;
char* sname_999;
char* head_1000;
struct buffer* source3_1001;
struct buffer* __dec_obj204;
void* __right_value815 = (void*)0;
char* __dec_obj205;
void* __right_value816 = (void*)0;
struct sBlock* block_1002;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct sType* result_type_1003;
void* __right_value820 = (void*)0;
char* name_1004;
void* __right_value821 = (void*)0;
struct sType* left_type_1005;
void* __right_value822 = (void*)0;
struct sType* right_type_1006;
struct sType* __list_values5___1008[2];
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct list$1sType$ph* param_types_1007;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
char* __list_values6___1009[2];
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1char$ph* param_names_1010;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
struct list$1char$ph* param_default_parametors_1011;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sFun* fun2_1012;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sFun* fun_1013;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value840 = (void*)0;
struct sNode* node_1014;
_Bool Value_1015;
void* __right_value841 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c24_1016=0;
char* Err_1017=0;
struct buffer* __dec_obj206;
char* __dec_obj207;
char* __dec_obj208;
char* __dec_obj209;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__384;
    last_code_977=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj202=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj202 = come_decrement_ref_count(__dec_obj202, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_978=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj203=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_979=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_980=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_981=((void*)0);
    real_fun_name_982=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_983=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_983;
    klass_984=type->mClass;
    if(    type->mPointerNum>0&&!klass_984->mNumber) {
        source_985=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2855, "struct buffer*"))));
        buffer_append_char(source_985,123);
        if(        klass_984->mProtocol) {
            name_986="_protocol_obj";
            char source2_987[1024];
            memset(&source2_987, 0, sizeof(char)            *(1024)            );
            snprintf(source2_987,1024,"return left.%s !== right.%s;\n",name_986,name_986);
            buffer_append_str(source_985,source2_987);
        }
        else {
            char source2_988[1024];
            memset(&source2_988, 0, sizeof(char)            *(1024)            );
            snprintf(source2_988,1024,"return !(");
            buffer_append_str(source_985,source2_988);
            snprintf(source2_988,1024,"( ");
            buffer_append_str(source_985,source2_988);
            i_989=0;
            klass_984=((struct sClass*)(__right_value814=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_984->mName)));
            /*c*/ come_call_finalizer3(__right_value814,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_990=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_984->mFields)),it_991=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_990));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_990));            it_991=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_990))            ){
                multiple_assign_var39=it_991;
                name_992=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_993=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_994[1024];
                memset(&source2_994, 0, sizeof(char)                *(1024)                );
                snprintf(source2_994,1024,"(left.%s === right.%s)",name_992,name_992,name_992);
                buffer_append_str(source_985,source2_994);
                if(                i_989==list$1tuple2$2char$phsType$ph$ph_length(klass_984->mFields)-1) {
                    char source2_995[1024];
                    memset(&source2_995, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_995,1024,"));");
                    buffer_append_str(source_985,source2_995);
                }
                else {
                    char source2_996[1024];
                    memset(&source2_996, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_996,1024," && ");
                    buffer_append_str(source_985,source2_996);
                }
                i_989++;
                (name_992 = come_decrement_ref_count(name_992, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_993,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_990,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_985,125);
        p_997=info->p;
        sline_998=info->sline;
        sname_999=(char*)come_increment_ref_count(info->sname);
        head_1000=info->head;
        source3_1001=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj204=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_985);
        /*b*/ come_call_finalizer3(__dec_obj204,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_985->buf;
        info->head=source_985->buf;
        __dec_obj205=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_982));
        __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1002=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1003=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2915, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1004=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_982));
        left_type_1005=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1005->mHeap=(_Bool)0;
        right_type_1006=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1006->mHeap=(_Bool)0;
        param_types_1007=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___1008[0]=left_type_1005,
__list_values5___1008[1]=right_type_1006,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2921, "struct list$1sType$ph")),2,__list_values5___1008)));
        param_names_1010=(struct list$1char$ph*)come_increment_ref_count((__list_values6___1009[0]=((char*)(__right_value825=__builtin_string("left"))),
__list_values6___1009[1]=((char*)(__right_value826=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2922, "struct list$1char$ph")),2,__list_values6___1009)));
        (__right_value825 = come_decrement_ref_count(__right_value825, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value826 = come_decrement_ref_count(__right_value826, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1011=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2923, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1011,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1011,((void*)0));
        result_type_1003->mStatic=(_Bool)0;
        result_type_1003->mUniq=(_Bool)0;
        result_type_1003->mInline=(_Bool)0;
        fun2_1012=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value831=__builtin_string(name_1004)))));
        (__right_value831 = come_decrement_ref_count(__right_value831, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1012==((void*)0)||fun2_1012->mExternal) {
            fun_1013=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2933, "struct sFun*")),(char*)come_increment_ref_count(name_1004),(struct sType*)come_increment_ref_count(result_type_1003),(struct list$1sType$ph*)come_increment_ref_count(param_types_1007),(struct list$1char$ph*)come_increment_ref_count(param_names_1010),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1011),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1002),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1004)),(struct sFun*)come_increment_ref_count(fun_1013));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2941, "struct sNode");
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value839=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2941, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1013),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1014=(struct sNode*)come_increment_ref_count(_inf_value11);
            /*c*/ come_call_finalizer3(__right_value839,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1015=node_compile(node_1014,info);
            if(            !Value_1015) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value841=err_msg(info,"compiling error")));
                come_exception_var_c24_1016=multiple_assign_var40->v1;
                Err_1017=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1017)?(puts(Err_1017),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value841,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1017 = come_decrement_ref_count(Err_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_981=fun_1013;
            /*c*/ come_call_finalizer3(fun_1013,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1014) ? node_1014 = come_decrement_ref_count(node_1014, ((struct sNode*)node_1014)->finalize, ((struct sNode*)node_1014)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_981=fun2_1012;
        }
        __dec_obj206=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1001);
        /*b*/ come_call_finalizer3(__dec_obj206,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_997;
        info->head=head_1000;
        info->sline=sline_998;
        __dec_obj207=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_999);
        __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_985,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_999 = come_decrement_ref_count(sname_999, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1001,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1002,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1003,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1004 = come_decrement_ref_count(name_1004, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1005,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1006,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1007,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1010,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1011,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1012,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_980;
    __dec_obj208=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_977);
    __dec_obj208 = come_decrement_ref_count(__dec_obj208, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj209=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_978);
    __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_979;
    __result_obj__384 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value843=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 2967, "struct tuple2$2sFun$pchar$ph")),equaler_981,(char*)come_increment_ref_count(real_fun_name_982)))));
    (last_code_977 = come_decrement_ref_count(last_code_977, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_978 = come_decrement_ref_count(last_code2_978, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_982 = come_decrement_ref_count(real_fun_name_982, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_983,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value843,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__384,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__384;
}

static int list$1tuple2$2char$phsType$ph$ph_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1018;
char* __dec_obj210;
char* last_code2_1019;
char* __dec_obj211;
_Bool comma_instead_of_semicolon_1020;
struct sClass* current_stack_frame_struct_1021;
struct sFun* equaler_1022;
void* __right_value844 = (void*)0;
char* real_fun_name_1023;
void* __right_value845 = (void*)0;
struct sType* type2_1024;
struct sClass* klass_1025;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct buffer* source_1026;
char* name_1027;
int i_1030;
void* __right_value848 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1031;
struct tuple2$2char$phsType$ph* it_1032;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1033=0;
struct sType* field_type_1034=0;
char* p_1038;
int sline_1039;
char* sname_1040;
char* head_1041;
struct buffer* source3_1042;
struct buffer* __dec_obj212;
void* __right_value849 = (void*)0;
char* __dec_obj213;
void* __right_value850 = (void*)0;
struct sBlock* block_1043;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct sType* result_type_1044;
void* __right_value854 = (void*)0;
char* name_1045;
void* __right_value855 = (void*)0;
struct sType* left_type_1046;
void* __right_value856 = (void*)0;
struct sType* right_type_1047;
struct sType* __list_values7___1049[2];
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct list$1sType$ph* param_types_1048;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
char* __list_values8___1050[2];
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1char$ph* param_names_1051;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1char$ph* param_default_parametors_1052;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sFun* fun2_1053;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sFun* fun_1054;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value874 = (void*)0;
struct sNode* node_1055;
_Bool Value_1056;
void* __right_value875 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c25_1057=0;
char* Err_1058=0;
struct buffer* __dec_obj214;
char* __dec_obj215;
char* __dec_obj216;
char* __dec_obj217;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__385;
    last_code_1018=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj210=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj210 = come_decrement_ref_count(__dec_obj210, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1019=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj211=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1020=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1021=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1022=((void*)0);
    real_fun_name_1023=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1024=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1024;
    klass_1025=type->mClass;
    if(    type->mPointerNum>0&&!klass_1025->mNumber) {
        source_1026=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2992, "struct buffer*"))));
        buffer_append_char(source_1026,123);
        if(        klass_1025->mProtocol) {
            name_1027="_protocol_obj";
            char source2_1028[1024];
            memset(&source2_1028, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1028,1024,"return !left.%s.equals(right.%s);\n",name_1027,name_1027);
            buffer_append_str(source_1026,source2_1028);
        }
        else {
            char source2_1029[1024];
            memset(&source2_1029, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1029,1024,"return !(");
            buffer_append_str(source_1026,source2_1029);
            i_1030=0;
            klass_1025=((struct sClass*)(__right_value848=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1025->mName)));
            /*c*/ come_call_finalizer3(__right_value848,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1031=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1025->mFields)),it_1032=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1031));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1031));            it_1032=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1031))            ){
                multiple_assign_var41=it_1032;
                name_1033=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1034=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1035[1024];
                memset(&source2_1035, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1035,1024,"left.%s.equals(right.%s)",name_1033,name_1033);
                buffer_append_str(source_1026,source2_1035);
                if(                i_1030==list$1tuple2$2char$phsType$ph$ph_length(klass_1025->mFields)-1) {
                    char source2_1036[1024];
                    memset(&source2_1036, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1036,1024,");");
                    buffer_append_str(source_1026,source2_1036);
                }
                else {
                    char source2_1037[1024];
                    memset(&source2_1037, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1037,1024," && ");
                    buffer_append_str(source_1026,source2_1037);
                }
                i_1030++;
                (name_1033 = come_decrement_ref_count(name_1033, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1034,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1031,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_char(source_1026,125);
        p_1038=info->p;
        sline_1039=info->sline;
        sname_1040=(char*)come_increment_ref_count(info->sname);
        head_1041=info->head;
        source3_1042=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj212=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1026);
        /*b*/ come_call_finalizer3(__dec_obj212,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1026->buf;
        info->head=source_1026->buf;
        __dec_obj213=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1023));
        __dec_obj213 = come_decrement_ref_count(__dec_obj213, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1043=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1044=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3049, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1045=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1023));
        left_type_1046=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1046->mHeap=(_Bool)0;
        right_type_1047=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1047->mHeap=(_Bool)0;
        param_types_1048=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___1049[0]=left_type_1046,
__list_values7___1049[1]=right_type_1047,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3055, "struct list$1sType$ph")),2,__list_values7___1049)));
        param_names_1051=(struct list$1char$ph*)come_increment_ref_count((__list_values8___1050[0]=((char*)(__right_value859=__builtin_string("left"))),
__list_values8___1050[1]=((char*)(__right_value860=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3056, "struct list$1char$ph")),2,__list_values8___1050)));
        (__right_value859 = come_decrement_ref_count(__right_value859, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value860 = come_decrement_ref_count(__right_value860, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1052=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3057, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1052,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1052,((void*)0));
        result_type_1044->mStatic=(_Bool)0;
        result_type_1044->mUniq=(_Bool)0;
        result_type_1044->mInline=(_Bool)0;
        fun2_1053=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value865=__builtin_string(name_1045)))));
        (__right_value865 = come_decrement_ref_count(__right_value865, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1053==((void*)0)||fun2_1053->mExternal) {
            fun_1054=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3067, "struct sFun*")),(char*)come_increment_ref_count(name_1045),(struct sType*)come_increment_ref_count(result_type_1044),(struct list$1sType$ph*)come_increment_ref_count(param_types_1048),(struct list$1char$ph*)come_increment_ref_count(param_names_1051),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1052),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1043),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1045)),(struct sFun*)come_increment_ref_count(fun_1054));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3075, "struct sNode");
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value873=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3075, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1054),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1055=(struct sNode*)come_increment_ref_count(_inf_value12);
            /*c*/ come_call_finalizer3(__right_value873,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1056=node_compile(node_1055,info);
            if(            !Value_1056) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value875=err_msg(info,"compiling error")));
                come_exception_var_c25_1057=multiple_assign_var42->v1;
                Err_1058=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1058)?(puts(Err_1058),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value875,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1058 = come_decrement_ref_count(Err_1058, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1022=fun_1054;
            /*c*/ come_call_finalizer3(fun_1054,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1055) ? node_1055 = come_decrement_ref_count(node_1055, ((struct sNode*)node_1055)->finalize, ((struct sNode*)node_1055)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1022=fun2_1053;
        }
        __dec_obj214=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1042);
        /*b*/ come_call_finalizer3(__dec_obj214,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1038;
        info->head=head_1041;
        info->sline=sline_1039;
        __dec_obj215=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1040);
        __dec_obj215 = come_decrement_ref_count(__dec_obj215, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1026,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1040 = come_decrement_ref_count(sname_1040, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1042,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1043,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1044,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1045 = come_decrement_ref_count(name_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1046,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1047,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1048,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1051,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1052,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1053,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1021;
    __dec_obj216=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1018);
    __dec_obj216 = come_decrement_ref_count(__dec_obj216, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj217=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1019);
    __dec_obj217 = come_decrement_ref_count(__dec_obj217, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1020;
    __result_obj__385 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value877=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3101, "struct tuple2$2sFun$pchar$ph")),equaler_1022,(char*)come_increment_ref_count(real_fun_name_1023)))));
    (last_code_1018 = come_decrement_ref_count(last_code_1018, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1019 = come_decrement_ref_count(last_code2_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1023 = come_decrement_ref_count(real_fun_name_1023, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1024,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value877,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__385,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__385;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1059;
char* __dec_obj218;
char* last_code2_1060;
char* __dec_obj219;
_Bool comma_instead_of_semicolon_1061;
struct sClass* current_stack_frame_struct_1062;
struct sFun* equaler_1063;
void* __right_value878 = (void*)0;
char* real_fun_name_1064;
void* __right_value879 = (void*)0;
struct sType* type2_1065;
struct sClass* klass_1066;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct buffer* source_1067;
char* name_1068;
void* __right_value882 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1071;
struct tuple2$2char$phsType$ph* it_1072;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1073=0;
struct sType* field_type_1074=0;
char* p_1076;
int sline_1077;
char* sname_1078;
char* head_1079;
struct buffer* source3_1080;
struct buffer* __dec_obj220;
void* __right_value883 = (void*)0;
char* __dec_obj221;
void* __right_value884 = (void*)0;
struct sBlock* block_1081;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sType* result_type_1082;
void* __right_value888 = (void*)0;
char* name_1083;
void* __right_value889 = (void*)0;
struct sType* left_type_1084;
void* __right_value890 = (void*)0;
struct sType* right_type_1085;
struct sType* __list_values9___1087[2];
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct list$1sType$ph* param_types_1086;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
char* __list_values10___1088[2];
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct list$1char$ph* param_names_1089;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1char$ph* param_default_parametors_1090;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
struct sFun* fun2_1091;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sFun* fun_1092;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value908 = (void*)0;
struct sNode* node_1093;
_Bool Value_1094;
void* __right_value909 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c26_1095=0;
char* Err_1096=0;
struct buffer* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
char* __dec_obj225;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__386;
    last_code_1059=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj218=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1060=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj219=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1061=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1062=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1063=((void*)0);
    real_fun_name_1064=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1065=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1065;
    klass_1066=type->mClass;
    if(    type->mPointerNum>0&&!klass_1066->mNumber) {
        source_1067=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3126, "struct buffer*"))));
        buffer_append_char(source_1067,123);
        if(        klass_1066->mProtocol) {
            name_1068="_protocol_obj";
            char source2_1069[1024];
            memset(&source2_1069, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1069,1024,"return left.%s === right.%s;\n",name_1068,name_1068);
            buffer_append_str(source_1067,source2_1069);
        }
        else {
            char source2_1070[1024];
            memset(&source2_1070, 0, sizeof(char)            *(1024)            );
            klass_1066=((struct sClass*)(__right_value882=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1066->mName)));
            /*c*/ come_call_finalizer3(__right_value882,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1071=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1066->mFields)),it_1072=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1071));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1071));            it_1072=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1071))            ){
                multiple_assign_var43=it_1072;
                name_1073=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1074=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1075[1024];
                memset(&source2_1075, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1075,1024,"if(left.%s !== right.%s) { return false; }\n",name_1073,name_1073,name_1073);
                buffer_append_str(source_1067,source2_1075);
                (name_1073 = come_decrement_ref_count(name_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1074,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1071,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        buffer_append_str(source_1067,"return true;\n");
        buffer_append_char(source_1067,125);
        p_1076=info->p;
        sline_1077=info->sline;
        sname_1078=(char*)come_increment_ref_count(info->sname);
        head_1079=info->head;
        source3_1080=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj220=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1067);
        /*b*/ come_call_finalizer3(__dec_obj220,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1067->buf;
        info->head=source_1067->buf;
        __dec_obj221=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1064));
        __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=0;
        block_1081=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1082=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3168, "struct sType*")),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1083=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1064));
        left_type_1084=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1084->mHeap=(_Bool)0;
        right_type_1085=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1085->mHeap=(_Bool)0;
        param_types_1086=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___1087[0]=left_type_1084,
__list_values9___1087[1]=right_type_1085,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3174, "struct list$1sType$ph")),2,__list_values9___1087)));
        param_names_1089=(struct list$1char$ph*)come_increment_ref_count((__list_values10___1088[0]=((char*)(__right_value893=__builtin_string("left"))),
__list_values10___1088[1]=((char*)(__right_value894=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3175, "struct list$1char$ph")),2,__list_values10___1088)));
        (__right_value893 = come_decrement_ref_count(__right_value893, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value894 = come_decrement_ref_count(__right_value894, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1090=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3176, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1090,((void*)0));
        list$1char$ph_push_back(param_default_parametors_1090,((void*)0));
        result_type_1082->mStatic=(_Bool)0;
        result_type_1082->mUniq=(_Bool)0;
        result_type_1082->mInline=(_Bool)0;
        fun2_1091=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value899=__builtin_string(name_1083)))));
        (__right_value899 = come_decrement_ref_count(__right_value899, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1091==((void*)0)||fun2_1091->mExternal) {
            fun_1092=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3186, "struct sFun*")),(char*)come_increment_ref_count(name_1083),(struct sType*)come_increment_ref_count(result_type_1082),(struct list$1sType$ph*)come_increment_ref_count(param_types_1086),(struct list$1char$ph*)come_increment_ref_count(param_names_1089),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1090),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1081),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1083)),(struct sFun*)come_increment_ref_count(fun_1092));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3194, "struct sNode");
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value907=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3194, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1092),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1093=(struct sNode*)come_increment_ref_count(_inf_value13);
            /*c*/ come_call_finalizer3(__right_value907,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1094=node_compile(node_1093,info);
            if(            !Value_1094) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value909=err_msg(info,"compiling error(X)")));
                come_exception_var_c26_1095=multiple_assign_var44->v1;
                Err_1096=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1096)?(puts(Err_1096),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value909,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1096 = come_decrement_ref_count(Err_1096, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1063=fun_1092;
            /*c*/ come_call_finalizer3(fun_1092,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1093) ? node_1093 = come_decrement_ref_count(node_1093, ((struct sNode*)node_1093)->finalize, ((struct sNode*)node_1093)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1063=fun2_1091;
        }
        __dec_obj222=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1080);
        /*b*/ come_call_finalizer3(__dec_obj222,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1076;
        info->head=head_1079;
        info->sline=sline_1077;
        __dec_obj223=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1078);
        __dec_obj223 = come_decrement_ref_count(__dec_obj223, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        /*c*/ come_call_finalizer3(source_1067,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1078 = come_decrement_ref_count(sname_1078, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1080,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1081,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1082,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1083 = come_decrement_ref_count(name_1083, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(left_type_1084,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(right_type_1085,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1086,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1089,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1090,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1091,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1062;
    __dec_obj224=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1059);
    __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj225=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1060);
    __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1061;
    __result_obj__386 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value911=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3220, "struct tuple2$2sFun$pchar$ph")),equaler_1063,(char*)come_increment_ref_count(real_fun_name_1064)))));
    (last_code_1059 = come_decrement_ref_count(last_code_1059, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1060 = come_decrement_ref_count(last_code2_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1064 = come_decrement_ref_count(real_fun_name_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1065,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value911,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__386,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__386;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__387;
char* last_code_1097;
char* __dec_obj226;
char* last_code2_1098;
char* __dec_obj227;
_Bool comma_instead_of_semicolon_1099;
struct sClass* current_stack_frame_struct_1100;
struct sFun* cloner_1101;
void* __right_value914 = (void*)0;
char* real_fun_name_1102;
void* __right_value915 = (void*)0;
struct sType* type2_1103;
struct sClass* klass_1104;
char* fun_name2_1105;
void* __right_value916 = (void*)0;
char* none_generics_name_1106;
void* __right_value917 = (void*)0;
struct sType* obj_type_1107;
void* __right_value918 = (void*)0;
char* __dec_obj228;
void* __right_value919 = (void*)0;
char* fun_name3_1108;
void* __right_value920 = (void*)0;
struct sGenericsFun* generics_fun_1109;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1110=0;
_Bool err_1111=0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__388;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
char* __dec_obj229;
void* __right_value927 = (void*)0;
char* __dec_obj230;
int i_1112;
void* __right_value928 = (void*)0;
char* new_fun_name_1113;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
char* __dec_obj231;
void* __right_value931 = (void*)0;
char* __dec_obj232;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct buffer* source_1114;
void* __right_value934 = (void*)0;
char* name_1115;
void* __right_value935 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1117;
struct tuple2$2char$phsType$ph* it_1118;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1119=0;
struct sType* field_type_1120=0;
void* __right_value936 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1123;
struct tuple2$2char$phsType$ph* it_1124;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1125=0;
struct sType* field_type_1126=0;
void* __right_value937 = (void*)0;
char* user_real_fun_name_1130;
void* __right_value938 = (void*)0;
struct sFun* user_cloner_1131;
char* p_1133;
int sline_1134;
char* sname_1135;
struct buffer* source3_1136;
char* head_1137;
struct buffer* __dec_obj233;
void* __right_value939 = (void*)0;
char* __dec_obj234;
void* __right_value940 = (void*)0;
struct sBlock* block_1138;
void* __right_value941 = (void*)0;
struct sType* result_type_1139;
void* __right_value942 = (void*)0;
char* name_1140;
void* __right_value943 = (void*)0;
struct sType* self_type_1141;
struct sType* __list_values11___1143[1];
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
struct list$1sType$ph* param_types_1142;
void* __right_value946 = (void*)0;
char* __list_values12___1144[1];
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct list$1char$ph* param_names_1145;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct list$1char$ph* param_default_parametors_1146;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sFun* fun2_1147;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
void* __right_value956 = (void*)0;
struct sFun* fun_1148;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value960 = (void*)0;
struct sNode* node_1149;
_Bool Value_1150;
void* __right_value961 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c27_1151=0;
char* Err_1152=0;
char* __dec_obj235;
struct buffer* __dec_obj236;
char* __dec_obj237;
char* __dec_obj238;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__389;
fun_name2_1105 = (void*)0;
memset(&i_1112, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__387 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value913=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3226, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        /*c*/ come_call_finalizer3(__right_value913,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(__result_obj__387,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
        return __result_obj__387;
    }
    last_code_1097=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj226=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj226 = come_decrement_ref_count(__dec_obj226, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1098=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj227=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1099=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1100=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1101=((void*)0);
    real_fun_name_1102=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1103=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1103;
    klass_1104=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        none_generics_name_1106=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1107=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj228=fun_name2_1105,
        fun_name2_1105=(char*)come_increment_ref_count(create_method_name(obj_type_1107,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        fun_name3_1108=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1106,fun_name));
        generics_fun_1109=((struct sGenericsFun*)(__right_value920=map$2char$phsGenericsFun$ph_at(info->generics_funcs,fun_name3_1108,((void*)0))));
        /*c*/ come_call_finalizer3(__right_value920,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        generics_fun_1109) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value922=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1105)),generics_fun_1109,obj_type_1107,info)));
            name_1110=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1111=multiple_assign_var45->v2;
            /*c*/ come_call_finalizer3(__right_value922,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            !err_1111) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__388 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value924=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3266, "struct tuple2$2sFun$pchar$ph")),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1110 = come_decrement_ref_count(name_1110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1106 = come_decrement_ref_count(none_generics_name_1106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(obj_type_1107,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name3_1108 = come_decrement_ref_count(fun_name3_1108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1097 = come_decrement_ref_count(last_code_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1098 = come_decrement_ref_count(last_code2_1098, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1102 = come_decrement_ref_count(real_fun_name_1102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(type2_1103,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    (fun_name2_1105 = come_decrement_ref_count(fun_name2_1105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    /*c*/ come_call_finalizer3(__right_value924,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    /*c*/ come_call_finalizer3(__result_obj__388,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
                    return __result_obj__388;
                }
            }
            cloner_1101=((struct sFun*)(__right_value925=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1110)));
            /*c*/ come_call_finalizer3(__right_value925,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            (name_1110 = come_decrement_ref_count(name_1110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1101=((struct sFun*)(__right_value926=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1105)));
            /*c*/ come_call_finalizer3(__right_value926,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj229=real_fun_name_1102,
        real_fun_name_1102=(char*)come_increment_ref_count(fun_name2_1105);
        __dec_obj229 = come_decrement_ref_count(__dec_obj229, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        (none_generics_name_1106 = come_decrement_ref_count(none_generics_name_1106, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(obj_type_1107,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (fun_name3_1108 = come_decrement_ref_count(fun_name3_1108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj230=fun_name2_1105,
        fun_name2_1105=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        for(        i_1112=128-1;        i_1112>=1;        i_1112--        ){
            new_fun_name_1113=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1105,i_1112));
            cloner_1101=((struct sFun*)(__right_value929=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1113)));
            /*c*/ come_call_finalizer3(__right_value929,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            cloner_1101) {
                __dec_obj231=fun_name2_1105,
                fun_name2_1105=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1113));
                __dec_obj231 = come_decrement_ref_count(__dec_obj231, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1113 = come_decrement_ref_count(new_fun_name_1113, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1113 = come_decrement_ref_count(new_fun_name_1113, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1101==((void*)0)) {
            cloner_1101=((struct sFun*)(__right_value931=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1105)));
            /*c*/ come_call_finalizer3(__right_value931,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        __dec_obj232=real_fun_name_1102,
        real_fun_name_1102=(char*)come_increment_ref_count(fun_name2_1105);
        __dec_obj232 = come_decrement_ref_count(__dec_obj232, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    cloner_1101==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3301, "struct buffer*"))));
        buffer_append_str(source_1114,"{\n");
        buffer_append_str(source_1114,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1114,"var result = new %s;\n",((char*)(__right_value934=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value934 = come_decrement_ref_count(__right_value934, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1104->mProtocol) {
            name_1115="_protocol_obj";
            char source2_1116[1024];
            memset(&source2_1116, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1116,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1114,source2_1116);
            klass_1104=((struct sClass*)(__right_value935=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1104->mName)));
            /*c*/ come_call_finalizer3(__right_value935,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1117=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1104->mFields)),it_1118=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1117));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1117));            it_1118=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1117))            ){
                multiple_assign_var46=it_1118;
                name_1119=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1120=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1119,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph_length(field_type_1120->mArrayNum)>0) {
                    char source2_1121[1024];
                    memset(&source2_1121, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1121,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1119,name_1119,name_1119);
                    buffer_append_str(source_1114,source2_1121);
                }
                else {
                    char source2_1122[1024];
                    memset(&source2_1122, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1122,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1119,name_1119);
                    buffer_append_str(source_1114,source2_1122);
                }
                (name_1119 = come_decrement_ref_count(name_1119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1120,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1117,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        else {
            klass_1104=((struct sClass*)(__right_value936=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1104->mName)));
            /*c*/ come_call_finalizer3(__right_value936,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            for(            o2_saved_1123=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1104->mFields)),it_1124=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1123));            !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1123));            it_1124=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1123))            ){
                multiple_assign_var47=it_1124;
                name_1125=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1126=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1126->mHeap) {
                    char source2_1127[1024];
                    memset(&source2_1127, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1127,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1125,name_1125,name_1125);
                    buffer_append_str(source_1114,source2_1127);
                }
                else if(                list$1sNode$ph_length(field_type_1126->mArrayNum)>0) {
                    char source2_1128[1024];
                    memset(&source2_1128, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1128,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1125,name_1125,name_1125);
                    buffer_append_str(source_1114,source2_1128);
                }
                else {
                    char source2_1129[1024];
                    memset(&source2_1129, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1129,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1125,name_1125);
                    buffer_append_str(source_1114,source2_1129);
                }
                (name_1125 = come_decrement_ref_count(name_1125, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                /*c*/ come_call_finalizer3(field_type_1126,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            }
            /*c*/ come_call_finalizer3(o2_saved_1123,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        user_real_fun_name_1130=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1131=((struct sFun*)(__right_value938=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1130)));
        /*c*/ come_call_finalizer3(__right_value938,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        user_cloner_1131) {
            char source2_1132[1024];
            memset(&source2_1132, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1132,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1130);
            buffer_append_str(source_1114,source2_1132);
        }
        buffer_append_format(source_1114,"return result;");
        buffer_append_char(source_1114,125);
        p_1133=info->p;
        sline_1134=info->sline;
        sname_1135=(char*)come_increment_ref_count(info->sname);
        source3_1136=(struct buffer*)come_increment_ref_count(info->source);
        head_1137=info->head;
        __dec_obj233=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1114);
        /*b*/ come_call_finalizer3(__dec_obj233,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj234=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1102));
        __dec_obj234 = come_decrement_ref_count(__dec_obj234, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1138=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1139=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1140=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1102));
        self_type_1141=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1141->mHeap=(_Bool)0;
        param_types_1142=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___1143[0]=self_type_1141,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3392, "struct list$1sType$ph")),1,__list_values11___1143)));
        param_names_1145=(struct list$1char$ph*)come_increment_ref_count((__list_values12___1144[0]=((char*)(__right_value946=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3393, "struct list$1char$ph")),1,__list_values12___1144)));
        (__right_value946 = come_decrement_ref_count(__right_value946, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1146=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3394, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1146,((void*)0));
        result_type_1139->mStatic=(_Bool)0;
        result_type_1139->mUniq=(_Bool)0;
        result_type_1139->mInline=(_Bool)0;
        fun2_1147=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value951=__builtin_string(name_1140)))));
        (__right_value951 = come_decrement_ref_count(__right_value951, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1147==((void*)0)||fun2_1147->mExternal) {
            fun_1148=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3404, "struct sFun*")),(char*)come_increment_ref_count(name_1140),(struct sType*)come_increment_ref_count(result_type_1139),(struct list$1sType$ph*)come_increment_ref_count(param_types_1142),(struct list$1char$ph*)come_increment_ref_count(param_names_1145),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1146),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1138),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1140)),(struct sFun*)come_increment_ref_count(fun_1148));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3412, "struct sNode");
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value959=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3412, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1148),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1149=(struct sNode*)come_increment_ref_count(_inf_value14);
            /*c*/ come_call_finalizer3(__right_value959,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1150=node_compile(node_1149,info);
            if(            !Value_1150) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value961=err_msg(info,"compiling error(Y)")));
                come_exception_var_c27_1151=multiple_assign_var48->v1;
                Err_1152=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1152)?(puts(Err_1152),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value961,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1152 = come_decrement_ref_count(Err_1152, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1101=fun_1148;
            /*c*/ come_call_finalizer3(fun_1148,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1149) ? node_1149 = come_decrement_ref_count(node_1149, ((struct sNode*)node_1149)->finalize, ((struct sNode*)node_1149)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1101=fun2_1147;
        }
        __dec_obj235=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1135);
        __dec_obj235 = come_decrement_ref_count(__dec_obj235, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1134;
        __dec_obj236=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1136);
        /*b*/ come_call_finalizer3(__dec_obj236,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1133;
        info->head=head_1137;
        info->sline=sline_1134;
        /*c*/ come_call_finalizer3(source_1114,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (user_real_fun_name_1130 = come_decrement_ref_count(user_real_fun_name_1130, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1135 = come_decrement_ref_count(sname_1135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1136,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1138,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1139,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1140 = come_decrement_ref_count(name_1140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1141,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1142,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1145,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1146,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1147,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1100;
    __dec_obj237=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1097);
    __dec_obj237 = come_decrement_ref_count(__dec_obj237, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj238=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1098);
    __dec_obj238 = come_decrement_ref_count(__dec_obj238, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1099;
    __result_obj__389 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value963=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3440, "struct tuple2$2sFun$pchar$ph")),cloner_1101,(char*)come_increment_ref_count(real_fun_name_1102)))));
    (last_code_1097 = come_decrement_ref_count(last_code_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1098 = come_decrement_ref_count(last_code2_1098, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1102 = come_decrement_ref_count(real_fun_name_1102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1103,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    (fun_name2_1105 = come_decrement_ref_count(fun_name2_1105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__right_value963,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__389,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__389;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1153;
char* __dec_obj239;
char* last_code2_1154;
char* __dec_obj240;
_Bool comma_instead_of_semicolon_1155;
struct sClass* current_stack_frame_struct_1156;
struct sFun* cloner_1157;
void* __right_value964 = (void*)0;
char* real_fun_name_1158;
void* __right_value965 = (void*)0;
struct sType* type2_1159;
struct sClass* klass_1160;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct buffer* source_1161;
int i_1162;
void* __right_value968 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1163;
struct tuple2$2char$phsType$ph* it_1164;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1165=0;
struct sType* field_type_1166=0;
char* p_1169;
int sline_1170;
char* sname_1171;
struct buffer* source3_1172;
char* head_1173;
struct buffer* __dec_obj241;
void* __right_value969 = (void*)0;
char* __dec_obj242;
void* __right_value970 = (void*)0;
struct sBlock* block_1174;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
struct sType* result_type_1175;
void* __right_value974 = (void*)0;
char* name_1176;
void* __right_value975 = (void*)0;
struct sType* self_type_1177;
struct sType* __list_values13___1179[1];
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct list$1sType$ph* param_types_1178;
void* __right_value978 = (void*)0;
char* __list_values14___1180[1];
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct list$1char$ph* param_names_1181;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
struct list$1char$ph* param_default_parametors_1182;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
struct sFun* fun2_1183;
void* __right_value985 = (void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sFun* fun_1184;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value992 = (void*)0;
struct sNode* node_1185;
_Bool Value_1186;
void* __right_value993 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c28_1187=0;
char* Err_1188=0;
char* __dec_obj243;
struct buffer* __dec_obj244;
char* __dec_obj245;
char* __dec_obj246;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__390;
    last_code_1153=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj239=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj239 = come_decrement_ref_count(__dec_obj239, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1154=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj240=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj240 = come_decrement_ref_count(__dec_obj240, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1155=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1156=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1157=((void*)0);
    real_fun_name_1158=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1159=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1159;
    klass_1160=type->mClass;
    if(    type->mPointerNum>0&&!klass_1160->mNumber) {
        source_1161=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3465, "struct buffer*"))));
        buffer_append_str(source_1161,"{\n");
        buffer_append_str(source_1161,"var result = new buffer();\n");
        buffer_append_format(source_1161,"result.append_str(\"%s {\");\n",klass_1160->mName);
        i_1162=0;
        klass_1160=((struct sClass*)(__right_value968=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1160->mName)));
        /*c*/ come_call_finalizer3(__right_value968,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1163=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1160->mFields)),it_1164=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1163));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1163));        it_1164=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1163))        ){
            multiple_assign_var49=it_1164;
            name_1165=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1166=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1162==list$1tuple2$2char$phsType$ph$ph_length(klass_1160->mFields)-1) {
                char source2_1167[1024];
                memset(&source2_1167, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1167,1024,"result.append_str(\"%s:\");\n",name_1165);
                buffer_append_str(source_1161,source2_1167);
                snprintf(source2_1167,1024,"result.append_str(self.%s.to_string());\n",name_1165);
                buffer_append_str(source_1161,source2_1167);
            }
            else {
                char source2_1168[1024];
                memset(&source2_1168, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1168,1024,"result.append_str(\"%s:\");\n",name_1165);
                buffer_append_str(source_1161,source2_1168);
                snprintf(source2_1168,1024,"result.append_str(self.%s.to_string());\n",name_1165);
                buffer_append_str(source_1161,source2_1168);
                snprintf(source2_1168,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1161,source2_1168);
            }
            i_1162++;
            (name_1165 = come_decrement_ref_count(name_1165, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1166,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1163,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_str(source_1161,"result.append_str(\"}\");\n");
        buffer_append_format(source_1161,"return result.to_string();\n");
        buffer_append_char(source_1161,125);
        p_1169=info->p;
        sline_1170=info->sline;
        sname_1171=(char*)come_increment_ref_count(info->sname);
        source3_1172=(struct buffer*)come_increment_ref_count(info->source);
        head_1173=info->head;
        __dec_obj241=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1161);
        /*b*/ come_call_finalizer3(__dec_obj241,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj242=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1158));
        __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1174=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1175=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3526, "struct sType*")),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1175->mHeap=(_Bool)1;
        name_1176=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1158));
        self_type_1177=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1177->mHeap=(_Bool)0;
        param_types_1178=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___1179[0]=self_type_1177,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3531, "struct list$1sType$ph")),1,__list_values13___1179)));
        param_names_1181=(struct list$1char$ph*)come_increment_ref_count((__list_values14___1180[0]=((char*)(__right_value978=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3532, "struct list$1char$ph")),1,__list_values14___1180)));
        (__right_value978 = come_decrement_ref_count(__right_value978, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1182=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3533, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1182,((void*)0));
        result_type_1175->mStatic=(_Bool)0;
        result_type_1175->mUniq=(_Bool)0;
        result_type_1175->mInline=(_Bool)0;
        fun2_1183=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value983=__builtin_string(name_1176)))));
        (__right_value983 = come_decrement_ref_count(__right_value983, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1183==((void*)0)||fun2_1183->mExternal) {
            fun_1184=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3542, "struct sFun*")),(char*)come_increment_ref_count(name_1176),(struct sType*)come_increment_ref_count(result_type_1175),(struct list$1sType$ph*)come_increment_ref_count(param_types_1178),(struct list$1char$ph*)come_increment_ref_count(param_names_1181),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1182),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1174),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1176)),(struct sFun*)come_increment_ref_count(fun_1184));
            cloner_1157=fun_1184;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3552, "struct sNode");
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value991=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3552, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1184),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1185=(struct sNode*)come_increment_ref_count(_inf_value15);
            /*c*/ come_call_finalizer3(__right_value991,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1186=node_compile(node_1185,info);
            if(            !Value_1186) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value993=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1187=multiple_assign_var50->v1;
                Err_1188=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1188)?(puts(Err_1188),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value993,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1188 = come_decrement_ref_count(Err_1188, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1184,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1185) ? node_1185 = come_decrement_ref_count(node_1185, ((struct sNode*)node_1185)->finalize, ((struct sNode*)node_1185)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1157=fun2_1183;
        }
        __dec_obj243=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1171);
        __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1170;
        __dec_obj244=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1172);
        /*b*/ come_call_finalizer3(__dec_obj244,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1169;
        info->head=head_1173;
        info->sline=sline_1170;
        /*c*/ come_call_finalizer3(source_1161,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1171 = come_decrement_ref_count(sname_1171, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1172,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1174,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1175,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1176 = come_decrement_ref_count(name_1176, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1177,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1178,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1181,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1182,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1183,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1156;
    __dec_obj245=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1153);
    __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj246=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1154);
    __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1155;
    __result_obj__390 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value995=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3578, "struct tuple2$2sFun$pchar$ph")),cloner_1157,(char*)come_increment_ref_count(real_fun_name_1158)))));
    (last_code_1153 = come_decrement_ref_count(last_code_1153, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1154 = come_decrement_ref_count(last_code2_1154, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1158 = come_decrement_ref_count(real_fun_name_1158, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1159,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value995,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__390,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__390;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1234;
char* __dec_obj257;
char* last_code2_1235;
char* __dec_obj258;
_Bool comma_instead_of_semicolon_1236;
struct sClass* current_stack_frame_struct_1237;
struct sFun* get_hash_key_fun_1238;
void* __right_value1040 = (void*)0;
char* real_fun_name_1239;
void* __right_value1041 = (void*)0;
struct sType* type2_1240;
struct sClass* klass_1241;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
char* none_generics_name_1242;
void* __right_value1044 = (void*)0;
char* generics_fun_name_1243;
void* __right_value1045 = (void*)0;
struct sGenericsFun* generics_fun_1244;
void* __right_value1046 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1245=0;
_Bool err_1246=0;
void* __right_value1047 = (void*)0;
int i_1247;
void* __right_value1048 = (void*)0;
char* new_fun_name_1248;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
char* __dec_obj259;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct buffer* source_1249;
int i_1250;
void* __right_value1054 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1251;
struct tuple2$2char$phsType$ph* it_1252;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1253=0;
struct sType* field_type_1254=0;
char* p_1256;
int sline_1257;
char* sname_1258;
struct buffer* source3_1259;
char* head_1260;
struct buffer* __dec_obj260;
void* __right_value1055 = (void*)0;
char* __dec_obj261;
void* __right_value1056 = (void*)0;
struct sBlock* block_1261;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct sType* result_type_1262;
void* __right_value1060 = (void*)0;
char* name_1263;
void* __right_value1061 = (void*)0;
struct sType* self_type_1264;
struct sType* __list_values17___1266[1];
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct list$1sType$ph* param_types_1265;
void* __right_value1064 = (void*)0;
char* __list_values18___1267[1];
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
struct list$1char$ph* param_names_1268;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct list$1char$ph* param_default_parametors_1269;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct sFun* fun2_1270;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct sFun* fun_1271;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1078 = (void*)0;
struct sNode* node_1272;
_Bool Value_1273;
void* __right_value1079 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c30_1274=0;
char* Err_1275=0;
char* __dec_obj262;
struct buffer* __dec_obj263;
char* __dec_obj264;
char* __dec_obj265;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__392;
memset(&i_1247, 0, sizeof(int));
    last_code_1234=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj257=info->module->mLastCode,
    info->module->mLastCode=((void*)0);
    __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    last_code2_1235=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj258=info->module->mLastCode2,
    info->module->mLastCode2=((void*)0);
    __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    comma_instead_of_semicolon_1236=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1237=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1238=((void*)0);
    real_fun_name_1239=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1240=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1240;
    klass_1241=type->mClass;
    if(    list$1sType$ph_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1238=((struct sFun*)(__right_value1042=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1239)));
        /*c*/ come_call_finalizer3(__right_value1042,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        if(        get_hash_key_fun_1238==((void*)0)) {
            none_generics_name_1242=(char*)come_increment_ref_count(get_none_generics_name(type2_1240->mClass->mName));
            generics_fun_name_1243=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1242,fun_name));
            generics_fun_1244=((struct sGenericsFun*)(__right_value1045=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1243)));
            /*c*/ come_call_finalizer3(__right_value1045,sGenericsFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            generics_fun_1244) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1046=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1239),generics_fun_1244,type,info)));
                name_1245=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1246=multiple_assign_var54->v2;
                /*c*/ come_call_finalizer3(__right_value1046,tuple2$2char$phbool$$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                if(                !err_1246) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1238=((struct sFun*)(__right_value1047=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1245)));
                /*c*/ come_call_finalizer3(__right_value1047,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                (name_1245 = come_decrement_ref_count(name_1245, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1242 = come_decrement_ref_count(none_generics_name_1242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1243 = come_decrement_ref_count(generics_fun_name_1243, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1247=128-1;        i_1247>=1;        i_1247--        ){
            new_fun_name_1248=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1239,i_1247));
            get_hash_key_fun_1238=((struct sFun*)(__right_value1049=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1248)));
            /*c*/ come_call_finalizer3(__right_value1049,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            if(            get_hash_key_fun_1238) {
                __dec_obj259=real_fun_name_1239,
                real_fun_name_1239=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1248));
                __dec_obj259 = come_decrement_ref_count(__dec_obj259, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
                (new_fun_name_1248 = come_decrement_ref_count(new_fun_name_1248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1248 = come_decrement_ref_count(new_fun_name_1248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1238==((void*)0)) {
            get_hash_key_fun_1238=((struct sFun*)(__right_value1051=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1239)));
            /*c*/ come_call_finalizer3(__right_value1051,sFun_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
    }
    if(    get_hash_key_fun_1238==((void*)0)&&type->mPointerNum>0&&!klass_1241->mNumber&&!klass_1241->mProtocol) {
        source_1249=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3841, "struct buffer*"))));
        buffer_append_str(source_1249,"{\n");
        buffer_append_str(source_1249,"unsigned int result = 0;\n");
        i_1250=0;
        klass_1241=((struct sClass*)(__right_value1054=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1241->mName)));
        /*c*/ come_call_finalizer3(__right_value1054,sClass_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        for(        o2_saved_1251=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1241->mFields)),it_1252=list$1tuple2$2char$phsType$ph$ph_begin((o2_saved_1251));        !list$1tuple2$2char$phsType$ph$ph_end((o2_saved_1251));        it_1252=list$1tuple2$2char$phsType$ph$ph_next((o2_saved_1251))        ){
            multiple_assign_var55=it_1252;
            name_1253=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1254=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1255[1024];
            memset(&source2_1255, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1255,1024,"result += ((int)self.%s).get_hash_key();\n",name_1253);
            buffer_append_str(source_1249,source2_1255);
            i_1250++;
            (name_1253 = come_decrement_ref_count(name_1253, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            /*c*/ come_call_finalizer3(field_type_1254,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        }
        /*c*/ come_call_finalizer3(o2_saved_1251,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        buffer_append_format(source_1249,"return result;\n");
        buffer_append_char(source_1249,125);
        p_1256=info->p;
        sline_1257=info->sline;
        sname_1258=(char*)come_increment_ref_count(info->sname);
        source3_1259=(struct buffer*)come_increment_ref_count(info->source);
        head_1260=info->head;
        __dec_obj260=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source_1249);
        /*b*/ come_call_finalizer3(__dec_obj260,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj261=info->sname,
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1239));
        __dec_obj261 = come_decrement_ref_count(__dec_obj261, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=1;
        block_1261=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1262=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3878, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1262->mUnsigned=(_Bool)1;
        name_1263=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1239));
        self_type_1264=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1264->mHeap=(_Bool)0;
        param_types_1265=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___1266[0]=self_type_1264,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3883, "struct list$1sType$ph")),1,__list_values17___1266)));
        param_names_1268=(struct list$1char$ph*)come_increment_ref_count((__list_values18___1267[0]=((char*)(__right_value1064=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3884, "struct list$1char$ph")),1,__list_values18___1267)));
        (__right_value1064 = come_decrement_ref_count(__right_value1064, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1269=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3885, "struct list$1char$ph*"))));
        list$1char$ph_push_back(param_default_parametors_1269,((void*)0));
        result_type_1262->mStatic=(_Bool)0;
        result_type_1262->mUniq=(_Bool)0;
        result_type_1262->mInline=(_Bool)0;
        fun2_1270=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1069=__builtin_string(name_1263)))));
        (__right_value1069 = come_decrement_ref_count(__right_value1069, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1270==((void*)0)||fun2_1270->mExternal) {
            fun_1271=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3894, "struct sFun*")),(char*)come_increment_ref_count(name_1263),(struct sType*)come_increment_ref_count(result_type_1262),(struct list$1sType$ph*)come_increment_ref_count(param_types_1265),(struct list$1char$ph*)come_increment_ref_count(param_names_1268),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1269),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1261),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1263)),(struct sFun*)come_increment_ref_count(fun_1271));
            get_hash_key_fun_1238=fun_1271;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3904, "struct sNode");
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1077=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3904, "struct sFunNode*")),(struct sFun*)come_increment_ref_count(fun_1271),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1272=(struct sNode*)come_increment_ref_count(_inf_value17);
            /*c*/ come_call_finalizer3(__right_value1077,sFunNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            Value_1273=node_compile(node_1272,info);
            if(            !Value_1273) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1079=err_msg(info,"compiling error(Y)")));
                come_exception_var_c30_1274=multiple_assign_var56->v1;
                Err_1275=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1275)?(puts(Err_1275),exit(0)):(0));
                /*c*/ come_call_finalizer3(__right_value1079,tuple2$2int$char$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                exit(2);
                (Err_1275 = come_decrement_ref_count(Err_1275, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            /*c*/ come_call_finalizer3(fun_1271,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((node_1272) ? node_1272 = come_decrement_ref_count(node_1272, ((struct sNode*)node_1272)->finalize, ((struct sNode*)node_1272)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1238=fun2_1270;
        }
        __dec_obj262=info->sname,
        info->sname=(char*)come_increment_ref_count(sname_1258);
        __dec_obj262 = come_decrement_ref_count(__dec_obj262, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
        info->sline=sline_1257;
        __dec_obj263=info->source,
        info->source=(struct buffer*)come_increment_ref_count(source3_1259);
        /*b*/ come_call_finalizer3(__dec_obj263,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1256;
        info->head=head_1260;
        info->sline=sline_1257;
        /*c*/ come_call_finalizer3(source_1249,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (sname_1258 = come_decrement_ref_count(sname_1258, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(source3_1259,buffer_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(block_1261,sBlock_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(result_type_1262,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        (name_1263 = come_decrement_ref_count(name_1263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        /*c*/ come_call_finalizer3(self_type_1264,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_types_1265,list$1sType$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_names_1268,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(param_default_parametors_1269,list$1char$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        /*c*/ come_call_finalizer3(fun2_1270,sFun_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1237;
    __dec_obj264=info->module->mLastCode,
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1234);
    __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj265=info->module->mLastCode2,
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1235);
    __dec_obj265 = come_decrement_ref_count(__dec_obj265, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1236;
    __result_obj__392 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1081=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3930, "struct tuple2$2sFun$pchar$ph")),get_hash_key_fun_1238,(char*)come_increment_ref_count(real_fun_name_1239)))));
    (last_code_1234 = come_decrement_ref_count(last_code_1234, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1235 = come_decrement_ref_count(last_code2_1235, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1239 = come_decrement_ref_count(real_fun_name_1239, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(type2_1240,sType_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__right_value1081,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__392,tuple2$2sFun$pchar$ph$p_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__392;
}

