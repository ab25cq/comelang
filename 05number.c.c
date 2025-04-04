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

struct sIntNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sUIntNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int value;
};

struct sLongNode
{
    int sline;
    char* sname;
    int sline_real;
    long value;
};

struct sULongNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned long  int value;
};

struct sFloatNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sDoubleNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct sNode* node, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info, _Bool if_result);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info);
char* sIntNode_kind(struct sIntNode* self);
_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info);
static void sIntNode_finalize(struct sIntNode* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info);
char* sUIntNode_kind(struct sUIntNode* self);
_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info);
static void sUIntNode_finalize(struct sUIntNode* self);
struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long  int value, struct sInfo* info);
char* sLongNode_kind(struct sLongNode* self);
_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info);
static void sLongNode_finalize(struct sLongNode* self);
struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long  int value, struct sInfo* info);
char* sULongNode_kind(struct sULongNode* self);
_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info);
static void sULongNode_finalize(struct sULongNode* self);
struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, char* value, struct sInfo* info);
char* sFloatNode_kind(struct sFloatNode* self);
_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info);
static void sFloatNode_finalize(struct sFloatNode* self);
struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, char* value, struct sInfo* info);
char* sDoubleNode_kind(struct sDoubleNode* self);
_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info);
static void sDoubleNode_finalize(struct sDoubleNode* self);
struct sNode* create_int_node(int value, struct sInfo* info);
static struct sIntNode* sIntNode_clone(struct sIntNode* self);
struct sNode* get_number(_Bool minus, struct sInfo* info);
static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self);
static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self);
static struct sULongNode* sULongNode_clone(struct sULongNode* self);
static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self);
static struct sLongNode* sLongNode_clone(struct sLongNode* self);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(_Bool minus, struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
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

struct sIntNode* sIntNode_initialize(struct sIntNode* self, int value, struct sInfo* info){
void* __right_value218 = (void*)0;
struct sIntNode* __result_obj__176;
    ((struct sNodeBase*)(__right_value218=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value218,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__176 = (struct sIntNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sIntNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__176,sIntNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__176;
}

char* sIntNode_kind(struct sIntNode* self){
void* __right_value219 = (void*)0;
char* __result_obj__177;
    __result_obj__177 = (char*)come_increment_ref_count(((char*)(__right_value219=__builtin_string("sIntNode"))));
    (__right_value219 = come_decrement_ref_count(__right_value219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__177 = come_decrement_ref_count(__result_obj__177, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__177;
}

_Bool sIntNode_compile(struct sIntNode* self, struct sInfo* info){
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct CVALUE* come_value_257;
void* __right_value222 = (void*)0;
char* __dec_obj31;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
struct sType* __dec_obj32;
_Bool __result_obj__179;
    come_value_257=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 19, "struct CVALUE*"))));
    __dec_obj31=come_value_257->c_value,
    come_value_257->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj32=come_value_257->type,
    come_value_257->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 22, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj32,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_257->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_257));
    add_come_last_code(info,"%s",come_value_257->c_value);
    __result_obj__179 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_257,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__179;
}

static void sIntNode_finalize(struct sIntNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value226 = (void*)0;
struct list_item$1CVALUE$ph* litem_258;
struct CVALUE* __dec_obj33;
void* __right_value227 = (void*)0;
struct list_item$1CVALUE$ph* litem_259;
struct CVALUE* __dec_obj34;
void* __right_value228 = (void*)0;
struct list_item$1CVALUE$ph* litem_260;
struct CVALUE* __dec_obj35;
struct list$1CVALUE$ph* __result_obj__178;
    if(    self->len==0) {
        litem_258=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value226=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1113, "struct list_item$1CVALUE$ph*"))));
        litem_258->prev=((void*)0);
        litem_258->next=((void*)0);
        __dec_obj33=litem_258->item,
        litem_258->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj33,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_258;
        self->head=litem_258;
    }
    else if(    self->len==1) {
        litem_259=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value227=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1123, "struct list_item$1CVALUE$ph*"))));
        litem_259->prev=self->head;
        litem_259->next=((void*)0);
        __dec_obj34=litem_259->item,
        litem_259->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj34,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_259;
        self->head->next=litem_259;
    }
    else {
        litem_260=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value228=(struct list_item$1CVALUE$ph*)come_calloc_v2(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1133, "struct list_item$1CVALUE$ph*"))));
        litem_260->prev=self->tail;
        litem_260->next=((void*)0);
        __dec_obj35=litem_260->item,
        litem_260->item=(struct CVALUE*)come_increment_ref_count(item);
        /*b*/ come_call_finalizer3(__dec_obj35,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_260;
        self->tail=litem_260;
    }
    self->len++;
    __result_obj__178 = self;
    /*c*/ come_call_finalizer3(item,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__178;
}

struct sUIntNode* sUIntNode_initialize(struct sUIntNode* self, unsigned int value, struct sInfo* info){
void* __right_value229 = (void*)0;
struct sUIntNode* __result_obj__180;
    ((struct sNodeBase*)(__right_value229=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value229,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__180 = (struct sUIntNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sUIntNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__180,sUIntNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__180;
}

char* sUIntNode_kind(struct sUIntNode* self){
void* __right_value230 = (void*)0;
char* __result_obj__181;
    __result_obj__181 = (char*)come_increment_ref_count(((char*)(__right_value230=__builtin_string("sUIntNode"))));
    (__right_value230 = come_decrement_ref_count(__right_value230, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__181 = come_decrement_ref_count(__result_obj__181, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__181;
}

_Bool sUIntNode_compile(struct sUIntNode* self, struct sInfo* info){
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct CVALUE* come_value_261;
void* __right_value233 = (void*)0;
char* __dec_obj36;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct sType* __dec_obj37;
_Bool __result_obj__182;
    come_value_261=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 49, "struct CVALUE*"))));
    __dec_obj36=come_value_261->c_value,
    come_value_261->c_value=(char*)come_increment_ref_count(xsprintf("%u",self->value));
    __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj37=come_value_261->type,
    come_value_261->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 52, "struct sType*")),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_261->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_261));
    add_come_last_code(info,"%s",come_value_261->c_value);
    __result_obj__182 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_261,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__182;
}

static void sUIntNode_finalize(struct sUIntNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLongNode* sLongNode_initialize(struct sLongNode* self, unsigned long  int value, struct sInfo* info){
void* __right_value237 = (void*)0;
struct sLongNode* __result_obj__183;
    ((struct sNodeBase*)(__right_value237=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value237,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__183 = (struct sLongNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sLongNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__183,sLongNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__183;
}

char* sLongNode_kind(struct sLongNode* self){
void* __right_value238 = (void*)0;
char* __result_obj__184;
    __result_obj__184 = (char*)come_increment_ref_count(((char*)(__right_value238=__builtin_string("sLongNode"))));
    (__right_value238 = come_decrement_ref_count(__right_value238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__184 = come_decrement_ref_count(__result_obj__184, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__184;
}

_Bool sLongNode_compile(struct sLongNode* self, struct sInfo* info){
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct CVALUE* come_value_262;
void* __right_value241 = (void*)0;
char* __dec_obj38;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* __dec_obj39;
_Bool __result_obj__185;
    come_value_262=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 79, "struct CVALUE*"))));
    __dec_obj38=come_value_262->c_value,
    come_value_262->c_value=(char*)come_increment_ref_count(xsprintf("%ld",self->value));
    __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj39=come_value_262->type,
    come_value_262->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 82, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_262->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_262));
    add_come_last_code(info,"%s",come_value_262->c_value);
    __result_obj__185 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_262,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__185;
}

static void sLongNode_finalize(struct sLongNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sULongNode* sULongNode_initialize(struct sULongNode* self, unsigned long  int value, struct sInfo* info){
void* __right_value245 = (void*)0;
struct sULongNode* __result_obj__186;
    ((struct sNodeBase*)(__right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value245,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    self->value=value;
    __result_obj__186 = (struct sULongNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sULongNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    /*c*/ come_call_finalizer3(__result_obj__186,sULongNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__186;
}

char* sULongNode_kind(struct sULongNode* self){
void* __right_value246 = (void*)0;
char* __result_obj__187;
    __result_obj__187 = (char*)come_increment_ref_count(((char*)(__right_value246=__builtin_string("sULongNode"))));
    (__right_value246 = come_decrement_ref_count(__right_value246, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__187 = come_decrement_ref_count(__result_obj__187, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__187;
}

_Bool sULongNode_compile(struct sULongNode* self, struct sInfo* info){
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct CVALUE* come_value_263;
void* __right_value249 = (void*)0;
char* __dec_obj40;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sType* __dec_obj41;
_Bool __result_obj__188;
    come_value_263=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 109, "struct CVALUE*"))));
    __dec_obj40=come_value_263->c_value,
    come_value_263->c_value=(char*)come_increment_ref_count(xsprintf("%lu",self->value));
    __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj41=come_value_263->type,
    come_value_263->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 112, "struct sType*")),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj41,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_263->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_263));
    add_come_last_code(info,"%s",come_value_263->c_value);
    __result_obj__188 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_263,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__188;
}

static void sULongNode_finalize(struct sULongNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFloatNode* sFloatNode_initialize(struct sFloatNode* self, char* value, struct sInfo* info){
void* __right_value253 = (void*)0;
char* __dec_obj42;
struct sFloatNode* __result_obj__189;
    ((struct sNodeBase*)(__right_value253=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value253,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj42=self->value,
    self->value=(char*)come_increment_ref_count(value);
    __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__189 = (struct sFloatNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sFloatNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__189,sFloatNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__189;
}

char* sFloatNode_kind(struct sFloatNode* self){
void* __right_value254 = (void*)0;
char* __result_obj__190;
    __result_obj__190 = (char*)come_increment_ref_count(((char*)(__right_value254=__builtin_string("sFloatNode"))));
    (__right_value254 = come_decrement_ref_count(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__190 = come_decrement_ref_count(__result_obj__190, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__190;
}

_Bool sFloatNode_compile(struct sFloatNode* self, struct sInfo* info){
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct CVALUE* come_value_264;
void* __right_value257 = (void*)0;
char* __dec_obj43;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct sType* __dec_obj44;
_Bool __result_obj__191;
    come_value_264=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 139, "struct CVALUE*"))));
    __dec_obj43=come_value_264->c_value,
    come_value_264->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj44=come_value_264->type,
    come_value_264->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 142, "struct sType*")),(char*)come_increment_ref_count(xsprintf("float")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj44,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_264->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_264));
    add_come_last_code(info,"%s",come_value_264->c_value);
    __result_obj__191 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_264,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__191;
}

static void sFloatNode_finalize(struct sFloatNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sDoubleNode* sDoubleNode_initialize(struct sDoubleNode* self, char* value, struct sInfo* info){
void* __right_value261 = (void*)0;
char* __dec_obj45;
struct sDoubleNode* __result_obj__192;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*c*/ come_call_finalizer3(__right_value261,sNodeBase_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    __dec_obj45=self->value,
    self->value=(char*)come_increment_ref_count(value);
    __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __result_obj__192 = (struct sDoubleNode*)come_increment_ref_count(self);
    /*c*/ come_call_finalizer3(self,sDoubleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    (value = come_decrement_ref_count(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    /*c*/ come_call_finalizer3(__result_obj__192,sDoubleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__192;
}

char* sDoubleNode_kind(struct sDoubleNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__193;
    __result_obj__193 = (char*)come_increment_ref_count(((char*)(__right_value262=__builtin_string("sDoubleNode"))));
    (__right_value262 = come_decrement_ref_count(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__193 = come_decrement_ref_count(__result_obj__193, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__193;
}

_Bool sDoubleNode_compile(struct sDoubleNode* self, struct sInfo* info){
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_265;
void* __right_value265 = (void*)0;
char* __dec_obj46;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj47;
_Bool __result_obj__194;
    come_value_265=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc_v2(1, sizeof(struct CVALUE)*(1), "05number.c", 169, "struct CVALUE*"))));
    __dec_obj46=come_value_265->c_value,
    come_value_265->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->value));
    __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    __dec_obj47=come_value_265->type,
    come_value_265->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc_v2(1, sizeof(struct sType)*(1), "05number.c", 172, "struct sType*")),(char*)come_increment_ref_count(xsprintf("double")),(_Bool)0,info));
    /*b*/ come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_265->var=((void*)0);
    list$1CVALUE$ph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_265));
    add_come_last_code(info,"%s",come_value_265->c_value);
    __result_obj__194 = (_Bool)1;
    /*c*/ come_call_finalizer3(come_value_265,CVALUE_finalize, 0/* alloca value */, 0/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    return __result_obj__194;
}

static void sDoubleNode_finalize(struct sDoubleNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        (self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sNode* create_int_node(int value, struct sInfo* info){
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sNode* _inf_value1;
struct sIntNode* _inf_obj_value1;
void* __right_value273 = (void*)0;
struct sNode* __result_obj__197;
    _inf_value1=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 185, "struct sNode");
    _inf_obj_value1=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value270=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 185, "struct sIntNode*")),value,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIntNode_finalize;
    _inf_value1->clone=(void*)sIntNode_clone;
    _inf_value1->compile=(void*)sIntNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sIntNode_kind;
    __result_obj__197 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value273=_inf_value1)));
    /*c*/ come_call_finalizer3(__right_value270,sIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
    ((__right_value273) ? __right_value273 = come_decrement_ref_count(__right_value273, ((struct sNode*)__right_value273)->finalize, ((struct sNode*)__right_value273)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__197) ? __result_obj__197 = come_decrement_ref_count(__result_obj__197, ((struct sNode*)__result_obj__197)->finalize, ((struct sNode*)__result_obj__197)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__197;
}

static struct sIntNode* sIntNode_clone(struct sIntNode* self){
struct sIntNode* __result_obj__195;
void* __right_value271 = (void*)0;
struct sIntNode* result_266;
void* __right_value272 = (void*)0;
char* __dec_obj48;
struct sIntNode* __result_obj__196;
    if(    self==(void*)0) {
        __result_obj__195 = (void*)0;
        return __result_obj__195;
    }
    result_266=(struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "sIntNode_clone", 3, "struct sIntNode*"));
    if(    self!=((void*)0)) {
        result_266->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj48=result_266->sname,
        result_266->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sIntNode_clone", 5, "char*"));
        __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_266->value=self->value;
    }
    __result_obj__196 = result_266;
    /*c*/ come_call_finalizer3(result_266,sIntNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__196;
}

struct sNode* get_number(_Bool minus, struct sInfo* info){
char* p2_269;
char c_270;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sNode* _inf_value2;
struct sFloatNode* _inf_obj_value2;
void* __right_value280 = (void*)0;
struct sNode* __result_obj__200;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sNode* _inf_value3;
struct sDoubleNode* _inf_obj_value3;
void* __right_value287 = (void*)0;
struct sNode* __result_obj__203;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sNode* _inf_value4;
struct sDoubleNode* _inf_obj_value4;
void* __right_value291 = (void*)0;
struct sNode* __result_obj__204;
unsigned long  int lont_273;
int value2_274;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sNode* _inf_value5;
struct sULongNode* _inf_obj_value5;
void* __right_value296 = (void*)0;
struct sNode* __result_obj__207;
unsigned long  int lont_276;
int value_277;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sNode* _inf_value6;
struct sULongNode* _inf_obj_value6;
void* __right_value299 = (void*)0;
struct sNode* __result_obj__208;
unsigned int value_278;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sNode* _inf_value7;
struct sUIntNode* _inf_obj_value7;
void* __right_value304 = (void*)0;
struct sNode* __result_obj__211;
unsigned long long int value_280;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sNode* _inf_value8;
struct sLongNode* _inf_obj_value8;
void* __right_value309 = (void*)0;
struct sNode* __result_obj__214;
unsigned long long int value_282;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sNode* _inf_value9;
struct sULongNode* _inf_obj_value9;
void* __right_value312 = (void*)0;
struct sNode* __result_obj__215;
unsigned long long int value_283;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sNode* _inf_value10;
struct sLongNode* _inf_obj_value10;
void* __right_value315 = (void*)0;
struct sNode* __result_obj__216;
long lont_284;
int value_285;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sNode* _inf_value11;
struct sIntNode* _inf_obj_value11;
void* __right_value318 = (void*)0;
struct sNode* __result_obj__217;
struct sNode* __result_obj__218;
memset(&lont_273, 0, sizeof(unsigned long  int));
memset(&lont_276, 0, sizeof(unsigned long  int));
memset(&lont_284, 0, sizeof(long));
    const int buf_size_267=128;
    char buf_268[128+1];
    memset(&buf_268, 0, sizeof(char)    *(128+1)    );
    p2_269=buf_268;
    if(    minus) {
        *p2_269=45;
        p2_269++;
    }
    if(    xisdigit(*info->p)) {
        while(        xisdigit(*info->p)||*info->p==95) {
            if(            *info->p==95) {
                info->p++;
            }
            else {
                *p2_269++=*info->p;
                info->p++;
            }
            if(            p2_269-buf_268>=buf_size_267) {
                printf("%s %d: overflow node of number\n",info->sname,info->sline);
                exit(5);
            }
        }
        *p2_269=0;
        skip_spaces_and_lf(info);
        c_270=*(info->p+1);
        if(        *info->p==46&&xisdigit(c_270)) {
            *p2_269++=*info->p;
            if(            p2_269-buf_268>=buf_size_267) {
                printf("%s %d: overflow node of number",info->sname,info->sline);
                exit(11);
            }
            info->p++;
            skip_spaces_and_lf(info);
            while(            xisdigit(*info->p)||*info->p==95) {
                if(                *info->p==95) {
                    info->p++;
                }
                else {
                    *p2_269++=*info->p;
                    info->p++;
                }
                if(                p2_269-buf_268>=buf_size_267) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
            }
            if(            *info->p==101) {
                *p2_269++=*info->p;
                info->p++;
                if(                p2_269-buf_268>=buf_size_267) {
                    err_msg(info,"overflow node of number");
                    exit(2);
                }
                if(                *info->p==43) {
                    *p2_269++=*info->p;
                    info->p++;
                    if(                    p2_269-buf_268>=buf_size_267) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else if(                *info->p==45) {
                    *p2_269++=*info->p;
                    info->p++;
                    if(                    p2_269-buf_268>=buf_size_267) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
                else {
                    err_msg(info,"invalid float value");
                    exit(2);
                }
                while(                xisdigit(*info->p)||*info->p==95) {
                    if(                    *info->p==95) {
                        info->p++;
                    }
                    else {
                        *p2_269++=*info->p;
                        info->p++;
                    }
                    if(                    p2_269-buf_268>=buf_size_267) {
                        err_msg(info,"overflow node of number");
                        exit(2);
                    }
                }
            }
            skip_spaces_and_lf(info);
            if(            *info->p==102||*info->p==70) {
                *p2_269++=*info->p;
                *p2_269=0;
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value2=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 301, "struct sNode");
                _inf_obj_value2=(struct sFloatNode*)come_increment_ref_count(((struct sFloatNode*)(__right_value276=sFloatNode_initialize((struct sFloatNode*)come_increment_ref_count((struct sFloatNode*)come_calloc_v2(1, sizeof(struct sFloatNode)*(1), "05number.c", 301, "struct sFloatNode*")),(char*)come_increment_ref_count(__builtin_string(buf_268)),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFloatNode_finalize;
                _inf_value2->clone=(void*)sFloatNode_clone;
                _inf_value2->compile=(void*)sFloatNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFloatNode_kind;
                __result_obj__200 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value280=_inf_value2)));
                /*c*/ come_call_finalizer3(__right_value276,sFloatNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value280) ? __right_value280 = come_decrement_ref_count(__right_value280, ((struct sNode*)__right_value280)->finalize, ((struct sNode*)__right_value280)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__200) ? __result_obj__200 = come_decrement_ref_count(__result_obj__200, ((struct sNode*)__result_obj__200)->finalize, ((struct sNode*)__result_obj__200)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__200;
            }
            else if(            *info->p==108||*info->p==76) {
                *p2_269++=*info->p;
                *p2_269=0;
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value3=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 310, "struct sNode");
                _inf_obj_value3=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(__right_value283=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count((struct sDoubleNode*)come_calloc_v2(1, sizeof(struct sDoubleNode)*(1), "05number.c", 310, "struct sDoubleNode*")),(char*)come_increment_ref_count(__builtin_string(buf_268)),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sDoubleNode_finalize;
                _inf_value3->clone=(void*)sDoubleNode_clone;
                _inf_value3->compile=(void*)sDoubleNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sline_real=(void*)sNodeBase_sline_real;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sDoubleNode_kind;
                __result_obj__203 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value287=_inf_value3)));
                /*c*/ come_call_finalizer3(__right_value283,sDoubleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value287) ? __right_value287 = come_decrement_ref_count(__right_value287, ((struct sNode*)__right_value287)->finalize, ((struct sNode*)__right_value287)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__203) ? __result_obj__203 = come_decrement_ref_count(__result_obj__203, ((struct sNode*)__result_obj__203)->finalize, ((struct sNode*)__result_obj__203)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__203;
            }
            else {
                *p2_269=0;
                _inf_value4=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 314, "struct sNode");
                _inf_obj_value4=(struct sDoubleNode*)come_increment_ref_count(((struct sDoubleNode*)(__right_value290=sDoubleNode_initialize((struct sDoubleNode*)come_increment_ref_count((struct sDoubleNode*)come_calloc_v2(1, sizeof(struct sDoubleNode)*(1), "05number.c", 314, "struct sDoubleNode*")),(char*)come_increment_ref_count(__builtin_string(buf_268)),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDoubleNode_finalize;
                _inf_value4->clone=(void*)sDoubleNode_clone;
                _inf_value4->compile=(void*)sDoubleNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sline_real=(void*)sNodeBase_sline_real;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sDoubleNode_kind;
                __result_obj__204 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value291=_inf_value4)));
                /*c*/ come_call_finalizer3(__right_value290,sDoubleNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value291) ? __right_value291 = come_decrement_ref_count(__right_value291, ((struct sNode*)__right_value291)->finalize, ((struct sNode*)__right_value291)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__204) ? __result_obj__204 = come_decrement_ref_count(__result_obj__204, ((struct sNode*)__result_obj__204)->finalize, ((struct sNode*)__result_obj__204)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__204;
            }
        }
        else if(        *info->p==117||*info->p==85) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==76||*info->p==108) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    value2_274=strtoull(buf_268,((void*)0),0);
                    _inf_value5=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 334, "struct sNode");
                    _inf_obj_value5=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value293=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 334, "struct sULongNode*")),value2_274,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sULongNode_finalize;
                    _inf_value5->clone=(void*)sULongNode_clone;
                    _inf_value5->compile=(void*)sULongNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sULongNode_kind;
                    __result_obj__207 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value296=_inf_value5)));
                    /*c*/ come_call_finalizer3(__right_value293,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__right_value296) ? __right_value296 = come_decrement_ref_count(__right_value296, ((struct sNode*)__right_value296)->finalize, ((struct sNode*)__right_value296)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((__result_obj__207) ? __result_obj__207 = come_decrement_ref_count(__result_obj__207, ((struct sNode*)__result_obj__207)->finalize, ((struct sNode*)__result_obj__207)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__207;
                }
                else {
                    value_277=strtoull(buf_268,((void*)0),0);
                    _inf_value6=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 338, "struct sNode");
                    _inf_obj_value6=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value298=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 338, "struct sULongNode*")),value_277,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sULongNode_finalize;
                    _inf_value6->clone=(void*)sULongNode_clone;
                    _inf_value6->compile=(void*)sULongNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sULongNode_kind;
                    __result_obj__208 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value299=_inf_value6)));
                    /*c*/ come_call_finalizer3(__right_value298,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__right_value299) ? __right_value299 = come_decrement_ref_count(__right_value299, ((struct sNode*)__right_value299)->finalize, ((struct sNode*)__right_value299)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((__result_obj__208) ? __result_obj__208 = come_decrement_ref_count(__result_obj__208, ((struct sNode*)__result_obj__208)->finalize, ((struct sNode*)__result_obj__208)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__208;
                }
            }
            else {
                value_278=strtoul(buf_268,((void*)0),0);
                _inf_value7=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 343, "struct sNode");
                _inf_obj_value7=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value301=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 343, "struct sUIntNode*")),value_278,info))));
                _inf_value7->_protocol_obj=_inf_obj_value7;
                _inf_value7->finalize=(void*)sUIntNode_finalize;
                _inf_value7->clone=(void*)sUIntNode_clone;
                _inf_value7->compile=(void*)sUIntNode_compile;
                _inf_value7->sline=(void*)sNodeBase_sline;
                _inf_value7->sline_real=(void*)sNodeBase_sline_real;
                _inf_value7->sname=(void*)sNodeBase_sname;
                _inf_value7->terminated=(void*)sNodeBase_terminated;
                _inf_value7->kind=(void*)sUIntNode_kind;
                __result_obj__211 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value304=_inf_value7)));
                /*c*/ come_call_finalizer3(__right_value301,sUIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value304) ? __right_value304 = come_decrement_ref_count(__right_value304, ((struct sNode*)__right_value304)->finalize, ((struct sNode*)__right_value304)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__211) ? __result_obj__211 = come_decrement_ref_count(__result_obj__211, ((struct sNode*)__result_obj__211)->finalize, ((struct sNode*)__result_obj__211)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__211;
            }
        }
        else if(        *info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                value_280=strtoull(buf_268,((void*)0),0);
                _inf_value8=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 357, "struct sNode");
                _inf_obj_value8=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value306=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 357, "struct sLongNode*")),value_280,info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sLongNode_finalize;
                _inf_value8->clone=(void*)sLongNode_clone;
                _inf_value8->compile=(void*)sLongNode_compile;
                _inf_value8->sline=(void*)sNodeBase_sline;
                _inf_value8->sline_real=(void*)sNodeBase_sline_real;
                _inf_value8->sname=(void*)sNodeBase_sname;
                _inf_value8->terminated=(void*)sNodeBase_terminated;
                _inf_value8->kind=(void*)sLongNode_kind;
                __result_obj__214 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value309=_inf_value8)));
                /*c*/ come_call_finalizer3(__right_value306,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value309) ? __right_value309 = come_decrement_ref_count(__right_value309, ((struct sNode*)__right_value309)->finalize, ((struct sNode*)__right_value309)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__214) ? __result_obj__214 = come_decrement_ref_count(__result_obj__214, ((struct sNode*)__result_obj__214)->finalize, ((struct sNode*)__result_obj__214)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__214;
            }
            else if(            *info->p==85||*info->p==117) {
                info->p++;
                skip_spaces_and_lf(info);
                value_282=strtoull(buf_268,((void*)0),0);
                _inf_value9=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 366, "struct sNode");
                _inf_obj_value9=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value311=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 366, "struct sULongNode*")),value_282,info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sULongNode_finalize;
                _inf_value9->clone=(void*)sULongNode_clone;
                _inf_value9->compile=(void*)sULongNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sULongNode_kind;
                __result_obj__215 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value312=_inf_value9)));
                /*c*/ come_call_finalizer3(__right_value311,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value312) ? __right_value312 = come_decrement_ref_count(__right_value312, ((struct sNode*)__right_value312)->finalize, ((struct sNode*)__right_value312)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__215) ? __result_obj__215 = come_decrement_ref_count(__result_obj__215, ((struct sNode*)__result_obj__215)->finalize, ((struct sNode*)__result_obj__215)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__215;
            }
            else {
                value_283=strtoull(buf_268,((void*)0),0);
                _inf_value10=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 370, "struct sNode");
                _inf_obj_value10=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value314=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 370, "struct sLongNode*")),value_283,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sLongNode_finalize;
                _inf_value10->clone=(void*)sLongNode_clone;
                _inf_value10->compile=(void*)sLongNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sline_real=(void*)sNodeBase_sline_real;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sLongNode_kind;
                __result_obj__216 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value315=_inf_value10)));
                /*c*/ come_call_finalizer3(__right_value314,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value315) ? __right_value315 = come_decrement_ref_count(__right_value315, ((struct sNode*)__right_value315)->finalize, ((struct sNode*)__right_value315)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__216) ? __result_obj__216 = come_decrement_ref_count(__result_obj__216, ((struct sNode*)__result_obj__216)->finalize, ((struct sNode*)__result_obj__216)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__216;
            }
        }
        else {
            value_285=strtoll(buf_268,((void*)0),0);
            _inf_value11=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 375, "struct sNode");
            _inf_obj_value11=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value317=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 375, "struct sIntNode*")),value_285,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sIntNode_finalize;
            _inf_value11->clone=(void*)sIntNode_clone;
            _inf_value11->compile=(void*)sIntNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sIntNode_kind;
            __result_obj__217 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value318=_inf_value11)));
            /*c*/ come_call_finalizer3(__right_value317,sIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value318) ? __right_value318 = come_decrement_ref_count(__right_value318, ((struct sNode*)__right_value318)->finalize, ((struct sNode*)__right_value318)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__217) ? __result_obj__217 = come_decrement_ref_count(__result_obj__217, ((struct sNode*)__result_obj__217)->finalize, ((struct sNode*)__result_obj__217)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__217;
        }
    }
    else {
        err_msg(info,"require digits after + or -");
        exit(2);
    }
    __result_obj__218 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__218) ? __result_obj__218 = come_decrement_ref_count(__result_obj__218, ((struct sNode*)__result_obj__218)->finalize, ((struct sNode*)__result_obj__218)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__218;
}

static struct sFloatNode* sFloatNode_clone(struct sFloatNode* self){
struct sFloatNode* __result_obj__198;
void* __right_value277 = (void*)0;
struct sFloatNode* result_271;
void* __right_value278 = (void*)0;
char* __dec_obj49;
void* __right_value279 = (void*)0;
char* __dec_obj50;
struct sFloatNode* __result_obj__199;
    if(    self==(void*)0) {
        __result_obj__198 = (void*)0;
        return __result_obj__198;
    }
    result_271=(struct sFloatNode*)come_increment_ref_count((struct sFloatNode*)come_calloc_v2(1, sizeof(struct sFloatNode)*(1), "sFloatNode_clone", 3, "struct sFloatNode*"));
    if(    self!=((void*)0)) {
        result_271->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj49=result_271->sname,
        result_271->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sFloatNode_clone", 5, "char*"));
        __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_271->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj50=result_271->value,
        result_271->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sFloatNode_clone", 7, "char*"));
        __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__199 = result_271;
    /*c*/ come_call_finalizer3(result_271,sFloatNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__199;
}

static struct sDoubleNode* sDoubleNode_clone(struct sDoubleNode* self){
struct sDoubleNode* __result_obj__201;
void* __right_value284 = (void*)0;
struct sDoubleNode* result_272;
void* __right_value285 = (void*)0;
char* __dec_obj51;
void* __right_value286 = (void*)0;
char* __dec_obj52;
struct sDoubleNode* __result_obj__202;
    if(    self==(void*)0) {
        __result_obj__201 = (void*)0;
        return __result_obj__201;
    }
    result_272=(struct sDoubleNode*)come_increment_ref_count((struct sDoubleNode*)come_calloc_v2(1, sizeof(struct sDoubleNode)*(1), "sDoubleNode_clone", 3, "struct sDoubleNode*"));
    if(    self!=((void*)0)) {
        result_272->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj51=result_272->sname,
        result_272->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sDoubleNode_clone", 5, "char*"));
        __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj52=result_272->value,
        result_272->value=(char*)come_increment_ref_count((char*)come_memdup(self->value, "sDoubleNode_clone", 7, "char*"));
        __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    __result_obj__202 = result_272;
    /*c*/ come_call_finalizer3(result_272,sDoubleNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__202;
}

static struct sULongNode* sULongNode_clone(struct sULongNode* self){
struct sULongNode* __result_obj__205;
void* __right_value294 = (void*)0;
struct sULongNode* result_275;
void* __right_value295 = (void*)0;
char* __dec_obj53;
struct sULongNode* __result_obj__206;
    if(    self==(void*)0) {
        __result_obj__205 = (void*)0;
        return __result_obj__205;
    }
    result_275=(struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "sULongNode_clone", 3, "struct sULongNode*"));
    if(    self!=((void*)0)) {
        result_275->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj53=result_275->sname,
        result_275->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sULongNode_clone", 5, "char*"));
        __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_275->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_275->value=self->value;
    }
    __result_obj__206 = result_275;
    /*c*/ come_call_finalizer3(result_275,sULongNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__206;
}

static struct sUIntNode* sUIntNode_clone(struct sUIntNode* self){
struct sUIntNode* __result_obj__209;
void* __right_value302 = (void*)0;
struct sUIntNode* result_279;
void* __right_value303 = (void*)0;
char* __dec_obj54;
struct sUIntNode* __result_obj__210;
    if(    self==(void*)0) {
        __result_obj__209 = (void*)0;
        return __result_obj__209;
    }
    result_279=(struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "sUIntNode_clone", 3, "struct sUIntNode*"));
    if(    self!=((void*)0)) {
        result_279->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj54=result_279->sname,
        result_279->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sUIntNode_clone", 5, "char*"));
        __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_279->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_279->value=self->value;
    }
    __result_obj__210 = result_279;
    /*c*/ come_call_finalizer3(result_279,sUIntNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__210;
}

static struct sLongNode* sLongNode_clone(struct sLongNode* self){
struct sLongNode* __result_obj__212;
void* __right_value307 = (void*)0;
struct sLongNode* result_281;
void* __right_value308 = (void*)0;
char* __dec_obj55;
struct sLongNode* __result_obj__213;
    if(    self==(void*)0) {
        __result_obj__212 = (void*)0;
        return __result_obj__212;
    }
    result_281=(struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "sLongNode_clone", 3, "struct sLongNode*"));
    if(    self!=((void*)0)) {
        result_281->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj55=result_281->sname,
        result_281->sname=(char*)come_increment_ref_count((char*)come_memdup(self->sname, "sLongNode_clone", 5, "char*"));
        __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0/* no_decrement */,0/* no_free */,0/*force_delete*/, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_281->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_281->value=self->value;
    }
    __result_obj__213 = result_281;
    /*c*/ come_call_finalizer3(result_281,sLongNode_finalize, 0/* alloca value */, 0/* no_decrement */, 1/* no_free */, 1/* force_delete */ , (void*)0);
    return __result_obj__213;
}

struct sNode* get_hex_number(_Bool minus, struct sInfo* info){
int buf_size_286;
char* p_288;
unsigned long long int value_289;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sNode* _inf_value12;
struct sULongNode* _inf_obj_value12;
void* __right_value321 = (void*)0;
struct sNode* __result_obj__219;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sNode* _inf_value13;
struct sULongNode* _inf_obj_value13;
void* __right_value324 = (void*)0;
struct sNode* __result_obj__220;
unsigned long long int value_290;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct sNode* _inf_value14;
struct sULongNode* _inf_obj_value14;
void* __right_value327 = (void*)0;
struct sNode* __result_obj__221;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct sNode* _inf_value15;
struct sULongNode* _inf_obj_value15;
void* __right_value330 = (void*)0;
struct sNode* __result_obj__222;
unsigned long long int value_291;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* _inf_value16;
struct sUIntNode* _inf_obj_value16;
void* __right_value333 = (void*)0;
struct sNode* __result_obj__223;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* _inf_value17;
struct sUIntNode* _inf_obj_value17;
void* __right_value336 = (void*)0;
struct sNode* __result_obj__224;
unsigned long long int value_292;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sNode* _inf_value18;
struct sLongNode* _inf_obj_value18;
void* __right_value339 = (void*)0;
struct sNode* __result_obj__225;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sNode* _inf_value19;
struct sLongNode* _inf_obj_value19;
void* __right_value342 = (void*)0;
struct sNode* __result_obj__226;
unsigned long long int value_293;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct sNode* _inf_value20;
struct sULongNode* _inf_obj_value20;
void* __right_value345 = (void*)0;
struct sNode* __result_obj__227;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sNode* _inf_value21;
struct sULongNode* _inf_obj_value21;
void* __right_value348 = (void*)0;
struct sNode* __result_obj__228;
unsigned long long int value_294;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sNode* _inf_value22;
struct sLongNode* _inf_obj_value22;
void* __right_value351 = (void*)0;
struct sNode* __result_obj__229;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* _inf_value23;
struct sLongNode* _inf_obj_value23;
void* __right_value354 = (void*)0;
struct sNode* __result_obj__230;
long long int value_295;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* _inf_value24;
struct sIntNode* _inf_obj_value24;
void* __right_value357 = (void*)0;
struct sNode* __result_obj__231;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* _inf_value25;
struct sIntNode* _inf_obj_value25;
void* __right_value360 = (void*)0;
struct sNode* __result_obj__232;
struct sNode* __result_obj__233;
    buf_size_286=128;
    char buf_287[128+1];
    memset(&buf_287, 0, sizeof(char)    *(128+1)    );
    p_288=buf_287;
    *p_288++=48;
    *p_288++=120;
    while(    (*info->p>=48&&*info->p<=57)||(*info->p>=97&&*info->p<=102)||(*info->p>=65&&*info->p<=70)||*info->p==95) {
        if(        *info->p==95) {
            info->p++;
        }
        else {
            *p_288++=*info->p;
            info->p++;
        }
        if(        p_288-buf_287>=buf_size_286-1) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_288=0;
    skip_spaces_and_lf(info);
    if(    *info->p==117||*info->p==85) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                value_289=strtoull(buf_287,((void*)0),0);
                if(                minus) {
                    _inf_value12=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 431, "struct sNode");
                    _inf_obj_value12=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value320=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 431, "struct sULongNode*")),-value_289,info))));
                    _inf_value12->_protocol_obj=_inf_obj_value12;
                    _inf_value12->finalize=(void*)sULongNode_finalize;
                    _inf_value12->clone=(void*)sULongNode_clone;
                    _inf_value12->compile=(void*)sULongNode_compile;
                    _inf_value12->sline=(void*)sNodeBase_sline;
                    _inf_value12->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value12->sname=(void*)sNodeBase_sname;
                    _inf_value12->terminated=(void*)sNodeBase_terminated;
                    _inf_value12->kind=(void*)sULongNode_kind;
                    __result_obj__219 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value321=_inf_value12)));
                    /*c*/ come_call_finalizer3(__right_value320,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__right_value321) ? __right_value321 = come_decrement_ref_count(__right_value321, ((struct sNode*)__right_value321)->finalize, ((struct sNode*)__right_value321)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((__result_obj__219) ? __result_obj__219 = come_decrement_ref_count(__result_obj__219, ((struct sNode*)__result_obj__219)->finalize, ((struct sNode*)__result_obj__219)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__219;
                }
                else {
                    _inf_value13=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 434, "struct sNode");
                    _inf_obj_value13=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value323=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 434, "struct sULongNode*")),value_289,info))));
                    _inf_value13->_protocol_obj=_inf_obj_value13;
                    _inf_value13->finalize=(void*)sULongNode_finalize;
                    _inf_value13->clone=(void*)sULongNode_clone;
                    _inf_value13->compile=(void*)sULongNode_compile;
                    _inf_value13->sline=(void*)sNodeBase_sline;
                    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value13->sname=(void*)sNodeBase_sname;
                    _inf_value13->terminated=(void*)sNodeBase_terminated;
                    _inf_value13->kind=(void*)sULongNode_kind;
                    __result_obj__220 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value324=_inf_value13)));
                    /*c*/ come_call_finalizer3(__right_value323,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__right_value324) ? __right_value324 = come_decrement_ref_count(__right_value324, ((struct sNode*)__right_value324)->finalize, ((struct sNode*)__right_value324)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((__result_obj__220) ? __result_obj__220 = come_decrement_ref_count(__result_obj__220, ((struct sNode*)__result_obj__220)->finalize, ((struct sNode*)__result_obj__220)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__220;
                }
            }
            else {
                value_290=strtoull(buf_287,((void*)0),0);
                if(                minus) {
                    _inf_value14=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 441, "struct sNode");
                    _inf_obj_value14=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value326=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 441, "struct sULongNode*")),-value_290,info))));
                    _inf_value14->_protocol_obj=_inf_obj_value14;
                    _inf_value14->finalize=(void*)sULongNode_finalize;
                    _inf_value14->clone=(void*)sULongNode_clone;
                    _inf_value14->compile=(void*)sULongNode_compile;
                    _inf_value14->sline=(void*)sNodeBase_sline;
                    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value14->sname=(void*)sNodeBase_sname;
                    _inf_value14->terminated=(void*)sNodeBase_terminated;
                    _inf_value14->kind=(void*)sULongNode_kind;
                    __result_obj__221 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value327=_inf_value14)));
                    /*c*/ come_call_finalizer3(__right_value326,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__right_value327) ? __right_value327 = come_decrement_ref_count(__right_value327, ((struct sNode*)__right_value327)->finalize, ((struct sNode*)__right_value327)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((__result_obj__221) ? __result_obj__221 = come_decrement_ref_count(__result_obj__221, ((struct sNode*)__result_obj__221)->finalize, ((struct sNode*)__result_obj__221)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__221;
                }
                else {
                    _inf_value15=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 444, "struct sNode");
                    _inf_obj_value15=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value329=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 444, "struct sULongNode*")),value_290,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sULongNode_finalize;
                    _inf_value15->clone=(void*)sULongNode_clone;
                    _inf_value15->compile=(void*)sULongNode_compile;
                    _inf_value15->sline=(void*)sNodeBase_sline;
                    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                    _inf_value15->sname=(void*)sNodeBase_sname;
                    _inf_value15->terminated=(void*)sNodeBase_terminated;
                    _inf_value15->kind=(void*)sULongNode_kind;
                    __result_obj__222 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value330=_inf_value15)));
                    /*c*/ come_call_finalizer3(__right_value329,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                    ((__right_value330) ? __right_value330 = come_decrement_ref_count(__right_value330, ((struct sNode*)__right_value330)->finalize, ((struct sNode*)__right_value330)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((__result_obj__222) ? __result_obj__222 = come_decrement_ref_count(__result_obj__222, ((struct sNode*)__result_obj__222)->finalize, ((struct sNode*)__result_obj__222)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    return __result_obj__222;
                }
            }
        }
        else {
            value_291=strtoull(buf_287,((void*)0),0);
            if(            minus) {
                _inf_value16=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 452, "struct sNode");
                _inf_obj_value16=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value332=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 452, "struct sUIntNode*")),-value_291,info))));
                _inf_value16->_protocol_obj=_inf_obj_value16;
                _inf_value16->finalize=(void*)sUIntNode_finalize;
                _inf_value16->clone=(void*)sUIntNode_clone;
                _inf_value16->compile=(void*)sUIntNode_compile;
                _inf_value16->sline=(void*)sNodeBase_sline;
                _inf_value16->sline_real=(void*)sNodeBase_sline_real;
                _inf_value16->sname=(void*)sNodeBase_sname;
                _inf_value16->terminated=(void*)sNodeBase_terminated;
                _inf_value16->kind=(void*)sUIntNode_kind;
                __result_obj__223 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value333=_inf_value16)));
                /*c*/ come_call_finalizer3(__right_value332,sUIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value333) ? __right_value333 = come_decrement_ref_count(__right_value333, ((struct sNode*)__right_value333)->finalize, ((struct sNode*)__right_value333)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__223) ? __result_obj__223 = come_decrement_ref_count(__result_obj__223, ((struct sNode*)__result_obj__223)->finalize, ((struct sNode*)__result_obj__223)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__223;
            }
            else {
                _inf_value17=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 455, "struct sNode");
                _inf_obj_value17=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value335=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 455, "struct sUIntNode*")),value_291,info))));
                _inf_value17->_protocol_obj=_inf_obj_value17;
                _inf_value17->finalize=(void*)sUIntNode_finalize;
                _inf_value17->clone=(void*)sUIntNode_clone;
                _inf_value17->compile=(void*)sUIntNode_compile;
                _inf_value17->sline=(void*)sNodeBase_sline;
                _inf_value17->sline_real=(void*)sNodeBase_sline_real;
                _inf_value17->sname=(void*)sNodeBase_sname;
                _inf_value17->terminated=(void*)sNodeBase_terminated;
                _inf_value17->kind=(void*)sUIntNode_kind;
                __result_obj__224 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value336=_inf_value17)));
                /*c*/ come_call_finalizer3(__right_value335,sUIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value336) ? __right_value336 = come_decrement_ref_count(__right_value336, ((struct sNode*)__right_value336)->finalize, ((struct sNode*)__right_value336)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__224) ? __result_obj__224 = come_decrement_ref_count(__result_obj__224, ((struct sNode*)__result_obj__224)->finalize, ((struct sNode*)__result_obj__224)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__224;
            }
        }
    }
    else if(    *info->p==76||*info->p==108) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            value_292=strtoull(buf_287,((void*)0),0);
            if(            minus) {
                _inf_value18=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 470, "struct sNode");
                _inf_obj_value18=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value338=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 470, "struct sLongNode*")),-value_292,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLongNode_finalize;
                _inf_value18->clone=(void*)sLongNode_clone;
                _inf_value18->compile=(void*)sLongNode_compile;
                _inf_value18->sline=(void*)sNodeBase_sline;
                _inf_value18->sline_real=(void*)sNodeBase_sline_real;
                _inf_value18->sname=(void*)sNodeBase_sname;
                _inf_value18->terminated=(void*)sNodeBase_terminated;
                _inf_value18->kind=(void*)sLongNode_kind;
                __result_obj__225 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value339=_inf_value18)));
                /*c*/ come_call_finalizer3(__right_value338,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value339) ? __right_value339 = come_decrement_ref_count(__right_value339, ((struct sNode*)__right_value339)->finalize, ((struct sNode*)__right_value339)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__225) ? __result_obj__225 = come_decrement_ref_count(__result_obj__225, ((struct sNode*)__result_obj__225)->finalize, ((struct sNode*)__result_obj__225)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__225;
            }
            else {
                _inf_value19=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 473, "struct sNode");
                _inf_obj_value19=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value341=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 473, "struct sLongNode*")),value_292,info))));
                _inf_value19->_protocol_obj=_inf_obj_value19;
                _inf_value19->finalize=(void*)sLongNode_finalize;
                _inf_value19->clone=(void*)sLongNode_clone;
                _inf_value19->compile=(void*)sLongNode_compile;
                _inf_value19->sline=(void*)sNodeBase_sline;
                _inf_value19->sline_real=(void*)sNodeBase_sline_real;
                _inf_value19->sname=(void*)sNodeBase_sname;
                _inf_value19->terminated=(void*)sNodeBase_terminated;
                _inf_value19->kind=(void*)sLongNode_kind;
                __result_obj__226 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value342=_inf_value19)));
                /*c*/ come_call_finalizer3(__right_value341,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value342) ? __right_value342 = come_decrement_ref_count(__right_value342, ((struct sNode*)__right_value342)->finalize, ((struct sNode*)__right_value342)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__226) ? __result_obj__226 = come_decrement_ref_count(__result_obj__226, ((struct sNode*)__result_obj__226)->finalize, ((struct sNode*)__result_obj__226)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__226;
            }
        }
        else if(        *info->p==85||*info->p==117) {
            info->p++;
            skip_spaces_and_lf(info);
            value_293=strtoull(buf_287,((void*)0),0);
            if(            minus) {
                _inf_value20=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 483, "struct sNode");
                _inf_obj_value20=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value344=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 483, "struct sULongNode*")),-value_293,info))));
                _inf_value20->_protocol_obj=_inf_obj_value20;
                _inf_value20->finalize=(void*)sULongNode_finalize;
                _inf_value20->clone=(void*)sULongNode_clone;
                _inf_value20->compile=(void*)sULongNode_compile;
                _inf_value20->sline=(void*)sNodeBase_sline;
                _inf_value20->sline_real=(void*)sNodeBase_sline_real;
                _inf_value20->sname=(void*)sNodeBase_sname;
                _inf_value20->terminated=(void*)sNodeBase_terminated;
                _inf_value20->kind=(void*)sULongNode_kind;
                __result_obj__227 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value345=_inf_value20)));
                /*c*/ come_call_finalizer3(__right_value344,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value345) ? __right_value345 = come_decrement_ref_count(__right_value345, ((struct sNode*)__right_value345)->finalize, ((struct sNode*)__right_value345)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__227) ? __result_obj__227 = come_decrement_ref_count(__result_obj__227, ((struct sNode*)__result_obj__227)->finalize, ((struct sNode*)__result_obj__227)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__227;
            }
            else {
                _inf_value21=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 486, "struct sNode");
                _inf_obj_value21=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value347=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 486, "struct sULongNode*")),value_293,info))));
                _inf_value21->_protocol_obj=_inf_obj_value21;
                _inf_value21->finalize=(void*)sULongNode_finalize;
                _inf_value21->clone=(void*)sULongNode_clone;
                _inf_value21->compile=(void*)sULongNode_compile;
                _inf_value21->sline=(void*)sNodeBase_sline;
                _inf_value21->sline_real=(void*)sNodeBase_sline_real;
                _inf_value21->sname=(void*)sNodeBase_sname;
                _inf_value21->terminated=(void*)sNodeBase_terminated;
                _inf_value21->kind=(void*)sULongNode_kind;
                __result_obj__228 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value348=_inf_value21)));
                /*c*/ come_call_finalizer3(__right_value347,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value348) ? __right_value348 = come_decrement_ref_count(__right_value348, ((struct sNode*)__right_value348)->finalize, ((struct sNode*)__right_value348)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__228) ? __result_obj__228 = come_decrement_ref_count(__result_obj__228, ((struct sNode*)__result_obj__228)->finalize, ((struct sNode*)__result_obj__228)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__228;
            }
        }
        else {
            value_294=strtoull(buf_287,((void*)0),0);
            if(            minus) {
                _inf_value22=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 492, "struct sNode");
                _inf_obj_value22=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value350=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 492, "struct sLongNode*")),-value_294,info))));
                _inf_value22->_protocol_obj=_inf_obj_value22;
                _inf_value22->finalize=(void*)sLongNode_finalize;
                _inf_value22->clone=(void*)sLongNode_clone;
                _inf_value22->compile=(void*)sLongNode_compile;
                _inf_value22->sline=(void*)sNodeBase_sline;
                _inf_value22->sline_real=(void*)sNodeBase_sline_real;
                _inf_value22->sname=(void*)sNodeBase_sname;
                _inf_value22->terminated=(void*)sNodeBase_terminated;
                _inf_value22->kind=(void*)sLongNode_kind;
                __result_obj__229 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value351=_inf_value22)));
                /*c*/ come_call_finalizer3(__right_value350,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value351) ? __right_value351 = come_decrement_ref_count(__right_value351, ((struct sNode*)__right_value351)->finalize, ((struct sNode*)__right_value351)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__229) ? __result_obj__229 = come_decrement_ref_count(__result_obj__229, ((struct sNode*)__result_obj__229)->finalize, ((struct sNode*)__result_obj__229)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__229;
            }
            else {
                _inf_value23=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 495, "struct sNode");
                _inf_obj_value23=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value353=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 495, "struct sLongNode*")),value_294,info))));
                _inf_value23->_protocol_obj=_inf_obj_value23;
                _inf_value23->finalize=(void*)sLongNode_finalize;
                _inf_value23->clone=(void*)sLongNode_clone;
                _inf_value23->compile=(void*)sLongNode_compile;
                _inf_value23->sline=(void*)sNodeBase_sline;
                _inf_value23->sline_real=(void*)sNodeBase_sline_real;
                _inf_value23->sname=(void*)sNodeBase_sname;
                _inf_value23->terminated=(void*)sNodeBase_terminated;
                _inf_value23->kind=(void*)sLongNode_kind;
                __result_obj__230 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value354=_inf_value23)));
                /*c*/ come_call_finalizer3(__right_value353,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value354) ? __right_value354 = come_decrement_ref_count(__right_value354, ((struct sNode*)__right_value354)->finalize, ((struct sNode*)__right_value354)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__230) ? __result_obj__230 = come_decrement_ref_count(__result_obj__230, ((struct sNode*)__result_obj__230)->finalize, ((struct sNode*)__result_obj__230)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__230;
            }
        }
    }
    else {
        value_295=strtoll(buf_287,((void*)0),0);
        if(        minus) {
            _inf_value24=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 502, "struct sNode");
            _inf_obj_value24=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value356=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 502, "struct sIntNode*")),-value_295,info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sIntNode_finalize;
            _inf_value24->clone=(void*)sIntNode_clone;
            _inf_value24->compile=(void*)sIntNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sline_real=(void*)sNodeBase_sline_real;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sIntNode_kind;
            __result_obj__231 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value357=_inf_value24)));
            /*c*/ come_call_finalizer3(__right_value356,sIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value357) ? __right_value357 = come_decrement_ref_count(__right_value357, ((struct sNode*)__right_value357)->finalize, ((struct sNode*)__right_value357)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__231) ? __result_obj__231 = come_decrement_ref_count(__result_obj__231, ((struct sNode*)__result_obj__231)->finalize, ((struct sNode*)__result_obj__231)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__231;
        }
        else {
            _inf_value25=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 505, "struct sNode");
            _inf_obj_value25=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value359=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 505, "struct sIntNode*")),value_295,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sIntNode_finalize;
            _inf_value25->clone=(void*)sIntNode_clone;
            _inf_value25->compile=(void*)sIntNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sline_real=(void*)sNodeBase_sline_real;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sIntNode_kind;
            __result_obj__232 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value360=_inf_value25)));
            /*c*/ come_call_finalizer3(__right_value359,sIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value360) ? __right_value360 = come_decrement_ref_count(__right_value360, ((struct sNode*)__right_value360)->finalize, ((struct sNode*)__right_value360)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__232) ? __result_obj__232 = come_decrement_ref_count(__result_obj__232, ((struct sNode*)__result_obj__232)->finalize, ((struct sNode*)__result_obj__232)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__232;
        }
    }
    __result_obj__233 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__233) ? __result_obj__233 = come_decrement_ref_count(__result_obj__233, ((struct sNode*)__result_obj__233)->finalize, ((struct sNode*)__result_obj__233)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__233;
}

struct sNode* get_oct_number(_Bool minus, struct sInfo* info){
int buf_size_296;
char* p_298;
unsigned long long int value_299;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* _inf_value26;
struct sULongNode* _inf_obj_value26;
void* __right_value363 = (void*)0;
struct sNode* __result_obj__234;
unsigned long long int value_300;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sNode* _inf_value27;
struct sULongNode* _inf_obj_value27;
void* __right_value366 = (void*)0;
struct sNode* __result_obj__235;
unsigned int value_301;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct sNode* _inf_value28;
struct sUIntNode* _inf_obj_value28;
void* __right_value369 = (void*)0;
struct sNode* __result_obj__236;
unsigned long long int value_302;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sNode* _inf_value29;
struct sLongNode* _inf_obj_value29;
void* __right_value372 = (void*)0;
struct sNode* __result_obj__237;
unsigned long long int value_303;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* _inf_value30;
struct sULongNode* _inf_obj_value30;
void* __right_value375 = (void*)0;
struct sNode* __result_obj__238;
unsigned long long int value_304;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct sNode* _inf_value31;
struct sLongNode* _inf_obj_value31;
void* __right_value378 = (void*)0;
struct sNode* __result_obj__239;
unsigned long long int value_305;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* _inf_value32;
struct sIntNode* _inf_obj_value32;
void* __right_value381 = (void*)0;
struct sNode* __result_obj__240;
struct sNode* __result_obj__241;
    buf_size_296=128;
    char buf_297[128+1];
    memset(&buf_297, 0, sizeof(char)    *(128+1)    );
    p_298=buf_297;
    if(    minus) {
        *p_298++=45;
    }
    *p_298++=48;
    while(    (*info->p>=48&&*info->p<=55)||*info->p==95) {
        if(        *info->p==95) {
            info->p++;
        }
        else {
            *p_298=*info->p;
            p_298++;
            info->p++;
        }
        if(        p_298-buf_297>=buf_size_296-1) {
            err_msg(info,"overflow node of number");
            exit(2);
        }
    }
    *p_298=0;
    skip_spaces_and_lf(info);
    if(    *info->p==117||*info->p==85) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==76||*info->p==108) {
                info->p++;
                skip_spaces_and_lf(info);
                value_299=strtoull(buf_297,((void*)0),0);
                _inf_value26=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 559, "struct sNode");
                _inf_obj_value26=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value362=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 559, "struct sULongNode*")),value_299,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sULongNode_finalize;
                _inf_value26->clone=(void*)sULongNode_clone;
                _inf_value26->compile=(void*)sULongNode_compile;
                _inf_value26->sline=(void*)sNodeBase_sline;
                _inf_value26->sline_real=(void*)sNodeBase_sline_real;
                _inf_value26->sname=(void*)sNodeBase_sname;
                _inf_value26->terminated=(void*)sNodeBase_terminated;
                _inf_value26->kind=(void*)sULongNode_kind;
                __result_obj__234 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value363=_inf_value26)));
                /*c*/ come_call_finalizer3(__right_value362,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value363) ? __right_value363 = come_decrement_ref_count(__right_value363, ((struct sNode*)__right_value363)->finalize, ((struct sNode*)__right_value363)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__234) ? __result_obj__234 = come_decrement_ref_count(__result_obj__234, ((struct sNode*)__result_obj__234)->finalize, ((struct sNode*)__result_obj__234)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__234;
            }
            else {
                value_300=strtoull(buf_297,((void*)0),0);
                _inf_value27=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 563, "struct sNode");
                _inf_obj_value27=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value365=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 563, "struct sULongNode*")),value_300,info))));
                _inf_value27->_protocol_obj=_inf_obj_value27;
                _inf_value27->finalize=(void*)sULongNode_finalize;
                _inf_value27->clone=(void*)sULongNode_clone;
                _inf_value27->compile=(void*)sULongNode_compile;
                _inf_value27->sline=(void*)sNodeBase_sline;
                _inf_value27->sline_real=(void*)sNodeBase_sline_real;
                _inf_value27->sname=(void*)sNodeBase_sname;
                _inf_value27->terminated=(void*)sNodeBase_terminated;
                _inf_value27->kind=(void*)sULongNode_kind;
                __result_obj__235 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value366=_inf_value27)));
                /*c*/ come_call_finalizer3(__right_value365,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
                ((__right_value366) ? __right_value366 = come_decrement_ref_count(__right_value366, ((struct sNode*)__right_value366)->finalize, ((struct sNode*)__right_value366)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                ((__result_obj__235) ? __result_obj__235 = come_decrement_ref_count(__result_obj__235, ((struct sNode*)__result_obj__235)->finalize, ((struct sNode*)__result_obj__235)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__235;
            }
        }
        else {
            value_301=strtoul(buf_297,((void*)0),0);
            _inf_value28=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 568, "struct sNode");
            _inf_obj_value28=(struct sUIntNode*)come_increment_ref_count(((struct sUIntNode*)(__right_value368=sUIntNode_initialize((struct sUIntNode*)come_increment_ref_count((struct sUIntNode*)come_calloc_v2(1, sizeof(struct sUIntNode)*(1), "05number.c", 568, "struct sUIntNode*")),value_301,info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sUIntNode_finalize;
            _inf_value28->clone=(void*)sUIntNode_clone;
            _inf_value28->compile=(void*)sUIntNode_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sline_real=(void*)sNodeBase_sline_real;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sUIntNode_kind;
            __result_obj__236 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value369=_inf_value28)));
            /*c*/ come_call_finalizer3(__right_value368,sUIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value369) ? __right_value369 = come_decrement_ref_count(__right_value369, ((struct sNode*)__right_value369)->finalize, ((struct sNode*)__right_value369)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__236) ? __result_obj__236 = come_decrement_ref_count(__result_obj__236, ((struct sNode*)__result_obj__236)->finalize, ((struct sNode*)__result_obj__236)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__236;
        }
    }
    else if(    *info->p==76||*info->p==108) {
        info->p++;
        skip_spaces_and_lf(info);
        if(        *info->p==76||*info->p==108) {
            info->p++;
            skip_spaces_and_lf(info);
            value_302=strtoull(buf_297,((void*)0),0);
            _inf_value29=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 581, "struct sNode");
            _inf_obj_value29=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value371=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 581, "struct sLongNode*")),value_302,info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sLongNode_finalize;
            _inf_value29->clone=(void*)sLongNode_clone;
            _inf_value29->compile=(void*)sLongNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sline_real=(void*)sNodeBase_sline_real;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sLongNode_kind;
            __result_obj__237 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value372=_inf_value29)));
            /*c*/ come_call_finalizer3(__right_value371,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value372) ? __right_value372 = come_decrement_ref_count(__right_value372, ((struct sNode*)__right_value372)->finalize, ((struct sNode*)__right_value372)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__237) ? __result_obj__237 = come_decrement_ref_count(__result_obj__237, ((struct sNode*)__result_obj__237)->finalize, ((struct sNode*)__result_obj__237)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__237;
        }
        else if(        *info->p==85||*info->p==117) {
            info->p++;
            skip_spaces_and_lf(info);
            value_303=strtoull(buf_297,((void*)0),0);
            _inf_value30=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 589, "struct sNode");
            _inf_obj_value30=(struct sULongNode*)come_increment_ref_count(((struct sULongNode*)(__right_value374=sULongNode_initialize((struct sULongNode*)come_increment_ref_count((struct sULongNode*)come_calloc_v2(1, sizeof(struct sULongNode)*(1), "05number.c", 589, "struct sULongNode*")),value_303,info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sULongNode_finalize;
            _inf_value30->clone=(void*)sULongNode_clone;
            _inf_value30->compile=(void*)sULongNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sline_real=(void*)sNodeBase_sline_real;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sULongNode_kind;
            __result_obj__238 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value375=_inf_value30)));
            /*c*/ come_call_finalizer3(__right_value374,sULongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value375) ? __right_value375 = come_decrement_ref_count(__right_value375, ((struct sNode*)__right_value375)->finalize, ((struct sNode*)__right_value375)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__238) ? __result_obj__238 = come_decrement_ref_count(__result_obj__238, ((struct sNode*)__result_obj__238)->finalize, ((struct sNode*)__result_obj__238)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__238;
        }
        else {
            value_304=strtoull(buf_297,((void*)0),0);
            _inf_value31=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 593, "struct sNode");
            _inf_obj_value31=(struct sLongNode*)come_increment_ref_count(((struct sLongNode*)(__right_value377=sLongNode_initialize((struct sLongNode*)come_increment_ref_count((struct sLongNode*)come_calloc_v2(1, sizeof(struct sLongNode)*(1), "05number.c", 593, "struct sLongNode*")),value_304,info))));
            _inf_value31->_protocol_obj=_inf_obj_value31;
            _inf_value31->finalize=(void*)sLongNode_finalize;
            _inf_value31->clone=(void*)sLongNode_clone;
            _inf_value31->compile=(void*)sLongNode_compile;
            _inf_value31->sline=(void*)sNodeBase_sline;
            _inf_value31->sline_real=(void*)sNodeBase_sline_real;
            _inf_value31->sname=(void*)sNodeBase_sname;
            _inf_value31->terminated=(void*)sNodeBase_terminated;
            _inf_value31->kind=(void*)sLongNode_kind;
            __result_obj__239 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value378=_inf_value31)));
            /*c*/ come_call_finalizer3(__right_value377,sLongNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
            ((__right_value378) ? __right_value378 = come_decrement_ref_count(__right_value378, ((struct sNode*)__right_value378)->finalize, ((struct sNode*)__right_value378)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__239) ? __result_obj__239 = come_decrement_ref_count(__result_obj__239, ((struct sNode*)__result_obj__239)->finalize, ((struct sNode*)__result_obj__239)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__239;
        }
    }
    else {
        value_305=strtoull(buf_297,((void*)0),0);
        _inf_value32=(struct sNode*)come_calloc_v2(1, sizeof(struct sNode), "05number.c", 598, "struct sNode");
        _inf_obj_value32=(struct sIntNode*)come_increment_ref_count(((struct sIntNode*)(__right_value380=sIntNode_initialize((struct sIntNode*)come_increment_ref_count((struct sIntNode*)come_calloc_v2(1, sizeof(struct sIntNode)*(1), "05number.c", 598, "struct sIntNode*")),value_305,info))));
        _inf_value32->_protocol_obj=_inf_obj_value32;
        _inf_value32->finalize=(void*)sIntNode_finalize;
        _inf_value32->clone=(void*)sIntNode_clone;
        _inf_value32->compile=(void*)sIntNode_compile;
        _inf_value32->sline=(void*)sNodeBase_sline;
        _inf_value32->sline_real=(void*)sNodeBase_sline_real;
        _inf_value32->sname=(void*)sNodeBase_sname;
        _inf_value32->terminated=(void*)sNodeBase_terminated;
        _inf_value32->kind=(void*)sIntNode_kind;
        __result_obj__240 = (struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value381=_inf_value32)));
        /*c*/ come_call_finalizer3(__right_value380,sIntNode_finalize, 0/* alloca value */, 1/* no_decrement */, 0/* no_free */, 0/* force_delete */ , (void*)0);
        ((__right_value381) ? __right_value381 = come_decrement_ref_count(__right_value381, ((struct sNode*)__right_value381)->finalize, ((struct sNode*)__right_value381)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__240) ? __result_obj__240 = come_decrement_ref_count(__result_obj__240, ((struct sNode*)__result_obj__240)->finalize, ((struct sNode*)__result_obj__240)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__240;
    }
    __result_obj__241 = (struct sNode*)come_increment_ref_count((struct sNode*)((void*)0));
    ((__result_obj__241) ? __result_obj__241 = come_decrement_ref_count(__result_obj__241, ((struct sNode*)__result_obj__241)->finalize, ((struct sNode*)__result_obj__241)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__241;
}

struct sNode* expression_node_v99(struct sInfo* info){
void* __right_value382 = (void*)0;
struct sNode* node_306;
void* __right_value383 = (void*)0;
struct sNode* __dec_obj56;
struct sNode* __result_obj__242;
void* __right_value384 = (void*)0;
struct sNode* node_307;
void* __right_value385 = (void*)0;
struct sNode* __dec_obj57;
struct sNode* __result_obj__243;
void* __right_value386 = (void*)0;
struct sNode* node_308;
void* __right_value387 = (void*)0;
struct sNode* __dec_obj58;
struct sNode* __result_obj__244;
struct sNode* node_309;
void* __right_value388 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value389 = (void*)0;
struct sNode* __dec_obj60;
struct sNode* __result_obj__245;
void* __right_value390 = (void*)0;
struct sNode* __dec_obj61;
void* __right_value391 = (void*)0;
struct sNode* __dec_obj62;
struct sNode* __result_obj__246;
void* __right_value392 = (void*)0;
struct sNode* __dec_obj63;
void* __right_value393 = (void*)0;
struct sNode* __dec_obj64;
struct sNode* __result_obj__247;
void* __right_value394 = (void*)0;
struct sNode* node_310;
void* __right_value395 = (void*)0;
struct sNode* __dec_obj65;
struct sNode* __result_obj__248;
node_309 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    if(    *info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)) {
        info->p+=2;
        node_306=(struct sNode*)come_increment_ref_count(get_hex_number((_Bool)0,info));
        __dec_obj56=node_306,
        node_306=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_306),info));
        (__dec_obj56 ? __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__242 = (struct sNode*)come_increment_ref_count(node_306);
        ((node_306) ? node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__242) ? __result_obj__242 = come_decrement_ref_count(__result_obj__242, ((struct sNode*)__result_obj__242)->finalize, ((struct sNode*)__result_obj__242)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__242;
        ((node_306) ? node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==48&&xisdigit(*(info->p+1))) {
        info->p++;
        node_307=(struct sNode*)come_increment_ref_count(get_oct_number((_Bool)0,info));
        __dec_obj57=node_307,
        node_307=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_307),info));
        (__dec_obj57 ? __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__243 = (struct sNode*)come_increment_ref_count(node_307);
        ((node_307) ? node_307 = come_decrement_ref_count(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__243) ? __result_obj__243 = come_decrement_ref_count(__result_obj__243, ((struct sNode*)__result_obj__243)->finalize, ((struct sNode*)__result_obj__243)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__243;
        ((node_307) ? node_307 = come_decrement_ref_count(node_307, ((struct sNode*)node_307)->finalize, ((struct sNode*)node_307)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    xisdigit(*info->p)) {
        node_308=(struct sNode*)come_increment_ref_count(get_number((_Bool)0,info));
        __dec_obj58=node_308,
        node_308=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_308),info));
        (__dec_obj58 ? __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__244 = (struct sNode*)come_increment_ref_count(node_308);
        ((node_308) ? node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__244) ? __result_obj__244 = come_decrement_ref_count(__result_obj__244, ((struct sNode*)__result_obj__244)->finalize, ((struct sNode*)__result_obj__244)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__244;
        ((node_308) ? node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    *info->p==45&&(xisdigit(*(info->p+1))||(*info->p==48&&*(info->p+1)==120||*(info->p+1)==88)||(*info->p==48&&xisdigit(*(info->p+1))))) {
        info->p++;
        if(        *info->p==48&&(*(info->p+1)==120||*(info->p+1)==88)) {
            info->p+=2;
            __dec_obj59=node_309,
            node_309=(struct sNode*)come_increment_ref_count(get_hex_number((_Bool)1,info));
            (__dec_obj59 ? __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            __dec_obj60=node_309,
            node_309=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_309),info));
            (__dec_obj60 ? __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            __result_obj__245 = (struct sNode*)come_increment_ref_count(node_309);
            ((node_309) ? node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__245) ? __result_obj__245 = come_decrement_ref_count(__result_obj__245, ((struct sNode*)__result_obj__245)->finalize, ((struct sNode*)__result_obj__245)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__245;
        }
        else if(        *info->p==48&&xisdigit(*(info->p+1))) {
            info->p++;
            __dec_obj61=node_309,
            node_309=(struct sNode*)come_increment_ref_count(get_oct_number((_Bool)1,info));
            (__dec_obj61 ? __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            __dec_obj62=node_309,
            node_309=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_309),info));
            (__dec_obj62 ? __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            __result_obj__246 = (struct sNode*)come_increment_ref_count(node_309);
            ((node_309) ? node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
            ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__246;
        }
        else {
            __dec_obj63=node_309,
            node_309=(struct sNode*)come_increment_ref_count(get_number((_Bool)1,info));
            (__dec_obj63 ? __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
            __dec_obj64=node_309,
            node_309=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_309),info));
            (__dec_obj64 ? __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        }
        __result_obj__247 = (struct sNode*)come_increment_ref_count(node_309);
        ((node_309) ? node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__247;
        ((node_309) ? node_309 = come_decrement_ref_count(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else {
        node_310=(struct sNode*)come_increment_ref_count(expression_node_v98(info));
        __dec_obj65=node_310,
        node_310=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_310),info));
        (__dec_obj65 ? __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0 /* no_decrement */,0/* no_free */,0 /*force_delete*/, (void*)0) :0);
        __result_obj__248 = (struct sNode*)come_increment_ref_count(node_310);
        ((node_310) ? node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,1/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__248) ? __result_obj__248 = come_decrement_ref_count(__result_obj__248, ((struct sNode*)__result_obj__248)->finalize, ((struct sNode*)__result_obj__248)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__248;
        ((node_310) ? node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

