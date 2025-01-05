/// previous struct definition ///
struct __locale_struct;

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
long  long __lldata;
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
typedef void* any;

typedef char* string;

extern void* gComeFunResultObject;

extern char* gComeStackFrameSName[128];

extern int gComeStackFrameSLine[128];

extern int gComeStackFrameID[128];

extern int gNumComeStackFrame;

extern char* gComeStackFrameBuffer;

extern void* wildcard;

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
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
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
    struct sMemHeaderTiny* mFreeMem[2048*2];
};

extern struct sHeapPage gHeapPages;

struct smart_pointer$1char
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1charp
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char
{
    char item;
    struct list_item$1char* prev;
    struct list_item$1char* next;
};

struct list$1char
{
    struct list_item$1char* head;
    struct list_item$1char* tail;
    int len;
    struct list_item$1char* it;
};

struct list_item$1charp
{
    char* item;
    struct list_item$1charp* prev;
    struct list_item$1charp* next;
};

struct list$1charp
{
    struct list_item$1charp* head;
    struct list_item$1charp* tail;
    int len;
    struct list_item$1charp* it;
};

struct list_item$1short
{
    short item;
    struct list_item$1short* prev;
    struct list_item$1short* next;
};

struct list$1short
{
    struct list_item$1short* head;
    struct list_item$1short* tail;
    int len;
    struct list_item$1short* it;
};

struct list_item$1int
{
    int item;
    struct list_item$1int* prev;
    struct list_item$1int* next;
};

struct list$1int
{
    struct list_item$1int* head;
    struct list_item$1int* tail;
    int len;
    struct list_item$1int* it;
};

struct list_item$1long
{
    long item;
    struct list_item$1long* prev;
    struct list_item$1long* next;
};

struct list$1long
{
    struct list_item$1long* head;
    struct list_item$1long* tail;
    int len;
    struct list_item$1long* it;
};

struct list_item$1float
{
    float item;
    struct list_item$1float* prev;
    struct list_item$1float* next;
};

struct list$1float
{
    struct list_item$1float* head;
    struct list_item$1float* tail;
    int len;
    struct list_item$1float* it;
};

struct list_item$1double
{
    double item;
    struct list_item$1double* prev;
    struct list_item$1double* next;
};

struct list$1double
{
    struct list_item$1double* head;
    struct list_item$1double* tail;
    int len;
    struct list_item$1double* it;
};

struct vector$1char
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1charp
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1charph
{
    char* item;
    struct list_item$1charph* prev;
    struct list_item$1charph* next;
};

struct list$1charph
{
    struct list_item$1charph* head;
    struct list_item$1charph* tail;
    int len;
    struct list_item$1charph* it;
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
struct tuple2$2charphsTypeph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2charphsTypephph
{
    struct tuple2$2charphsTypeph* item;
    struct list_item$1tuple2$2charphsTypephph* prev;
    struct list_item$1tuple2$2charphsTypephph* next;
};

struct list$1tuple2$2charphsTypephph
{
    struct list_item$1tuple2$2charphsTypephph* head;
    struct list_item$1tuple2$2charphsTypephph* tail;
    int len;
    struct list_item$1tuple2$2charphsTypephph* it;
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
    struct list$1tuple2$2charphsTypephph* mFields;
    _Bool mOutputed;
    _Bool mOutputed2;
    char* mDeclareSName;
    _Bool mNobodyStruct;
    char* mParentClassName;
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

struct tuple1$1sTypeph
{
    struct sType* v1;
};

struct list_item$1sTypeph
{
    struct sType* item;
    struct list_item$1sTypeph* prev;
    struct list_item$1sTypeph* next;
};

struct list$1sTypeph
{
    struct list_item$1sTypeph* head;
    struct list_item$1sTypeph* tail;
    int len;
    struct list_item$1sTypeph* it;
};

struct list_item$1sNodeph
{
    struct sNode* item;
    struct list_item$1sNodeph* prev;
    struct list_item$1sNodeph* next;
};

struct list$1sNodeph
{
    struct list_item$1sNodeph* head;
    struct list_item$1sNodeph* tail;
    int len;
    struct list_item$1sNodeph* it;
};

struct sType
{
    struct sClass* mClass;
    struct tuple1$1sTypeph* mNoSolvedGenericsType;
    struct tuple1$1sTypeph* mOriginalLoadVarType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    struct tuple1$1sTypeph* mChannelType;
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
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    char* mTupleName;
};

struct CVALUE
{
    char* c_value;
    struct sType* type;
    struct sVar* var;
    struct sRightValueObject* right_value_objects;
    char* c_value_without_right_value_objects;
};

struct sVar
{
    char* mName;
    char* mCValueName;
    struct sType* mType;
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mFunctionParam;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    _Bool mExternal;
    _Bool mVarArgs;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    char* mComeHeader;
    _Bool mCloner;
    char* mDeclareSName;
    _Bool mNoResultType;
    _Bool mDeclaredResultObject;
    _Bool no_output_come_code2;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct buffer* mHeader;
};

struct map$2charphsVarph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2charphsVarph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
    int mID;
};

struct sBlock
{
    struct list$1sNodeph* mNodes;
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
    struct list$1charph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2charphsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsGenericsFunph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsClassModuleph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphsTypeph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct map$2charphbufferph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sRightValueObjectph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObjectph* prev;
    struct list_item$1sRightValueObjectph* next;
};

struct list$1sRightValueObjectph
{
    struct list_item$1sRightValueObjectph* head;
    struct list_item$1sRightValueObjectph* tail;
    int len;
    struct list_item$1sRightValueObjectph* it;
};

struct list_item$1CVALUEph
{
    struct CVALUE* item;
    struct list_item$1CVALUEph* prev;
    struct list_item$1CVALUEph* next;
};

struct list$1CVALUEph
{
    struct list_item$1CVALUEph* head;
    struct list_item$1CVALUEph* tail;
    int len;
    struct list_item$1CVALUEph* it;
};

struct map$2charphcharph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
};

struct list_item$1sVarph
{
    struct sVar* item;
    struct list_item$1sVarph* prev;
    struct list_item$1sVarph* next;
};

struct list$1sVarph
{
    struct list_item$1sVarph* head;
    struct list_item$1sVarph* tail;
    int len;
    struct list_item$1sVarph* it;
};

struct map$2charphint
{
    char** keys;
    _Bool* item_existance;
    int* items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
    char* come_fun_name;
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2charphsFunph* funcs;
    struct map$2charphsGenericsFunph* generics_funcs;
    struct map$2charphsClassph* classes;
    struct map$2charphsClassModuleph* modules;
    struct map$2charphsTypeph* types;
    struct map$2charphsClassph* generics_classes;
    struct map$2charphbufferph* struct_definition;
    struct map$2charphbufferph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObjectph* right_value_objects;
    struct sType* generics_type;
    struct list$1sTypeph* method_generics_types;
    struct list$1CVALUEph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1charph* generics_type_names;
    struct list$1charph* method_generics_type_names;
    struct sType* impl_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
    struct list$1sTypeph* param_types;
    struct list$1charph* param_names;
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
    struct map$2charphcharph* module_params;
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
    struct list$1sVarph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
    struct map$2charphcharph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
};

struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};

struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple3$3sTypephcharphsNodeph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sTypephcharphsNodephph
{
    struct tuple3$3sTypephcharphsNodeph* item;
    struct list_item$1tuple3$3sTypephcharphsNodephph* prev;
    struct list_item$1tuple3$3sTypephcharphsNodephph* next;
};

struct list$1tuple3$3sTypephcharphsNodephph
{
    struct list_item$1tuple3$3sTypephcharphsNodephph* head;
    struct list_item$1tuple3$3sTypephcharphsNodephph* tail;
    int len;
    struct list_item$1tuple3$3sTypephcharphsNodephph* it;
};

extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
struct sCurrentNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sMethodCallNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int method_block_sline;
    struct list$1sTypeph* method_generics_types;
    _Bool no_infference_method_generics;
    _Bool recursive;
    struct sFun* fun;
};

struct tuple2$2charphvoidp
{
    char* v1;
    void* v2;
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static void buffer_finalize(struct buffer* self);
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
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_clone(struct buffer* self);
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
char* buffer_printable(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1char_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1int_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1long_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1float_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1double_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values);
static void vector$1doublep_finalize(struct vector$1double* self);
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
_Bool voidp_equals(void* self, void* right);
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
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  int value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(char* value);
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
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
char* charp_printable(char* str);
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
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_);
char* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info, _Bool no_static);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);
char* make_come_type_name_string_no_solved(struct sType* type, _Bool original_type_name, struct sInfo* info);
char* make_define_var_no_solved(struct sType* type, char* name, _Bool in_header, _Bool original_type_name, struct sInfo* info);
char* header_function(struct sFun* fun, struct sInfo* info);
int transpile_v3(struct sInfo* info);
_Bool output_source_file_v3(struct sInfo* info);
void show_type(struct sType* type, struct sInfo* info);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
void add_last_code_to_source(struct sInfo* info);
void add_come_code_at_function_head(struct sInfo* info, char* code, ...);
void add_come_code_at_come_header(struct sInfo* info, const char* msg, ...);
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
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
int transpile_v5(struct sInfo* info);
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
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
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
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
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
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3635, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3642, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3651, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3658, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3665, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3672, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3679, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4007, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4012, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4017, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4022, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4027, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4060, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4062, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4067, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4069, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4074, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4076, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4081, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4083, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4088, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4090, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4095, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4097, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4102, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4104, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4109, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4114, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4119, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4124, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4129, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4134, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4139, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4144, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4149, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4154, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4159, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4164, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4169, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4174, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
}
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1142, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1152, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1162, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1142, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1152, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1162, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1142, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1152, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1162, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1142, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1152, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1162, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1142, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1152, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1162, "list_item$1long"))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1142, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1152, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1162, "list_item$1float"))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1142, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1152, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1162, "list_item$1double"))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1936, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1936, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1936, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1936, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1936, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1936, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1936, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1142, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1152, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1162, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
struct sCurrentNode* __result198__;
    ((struct sNodeBase*)(__right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result198__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string(self->sname)));
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result200__;
    __result200__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("sCurrentNode")));
    __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
void* __right_value248 = (void*)0;
char* class_name_247;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sClass* current_stack_248;
struct sVarTable* vtable_249;
struct map$2charphsVarph* o2_saved_250;
char* it_253;
char* key_256;
void* __right_value251 = (void*)0;
struct sVar* value_257;
void* __right_value288 = (void*)0;
struct sType* type2_271;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct tuple2$2charphsTypeph* item_290;
void* __right_value292 = (void*)0;
struct sType* type3_291;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct tuple2$2charphsTypeph* item2_294;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct map$2charphsVarph* o2_saved_346;
char* it_347;
char* key_348;
void* __right_value307 = (void*)0;
struct sVar* value_349;
void* __right_value308 = (void*)0;
struct sType* type2_350;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct tuple2$2charphsTypeph* item_351;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct CVALUE* come_value_352;
void* __right_value313 = (void*)0;
char* __dec_obj105;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sType* __dec_obj106;
_Bool __result255__;
    info->current_stack_num++;
    class_name_247=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_248=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 446, "sClass")),class_name_247,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_249=info->lv_table;
    while(vtable_249) {
        for(        o2_saved_250=(struct map$2charphsVarph*)come_increment_ref_count((vtable_249->mVars)),it_253=map$2charphsVarph_begin((o2_saved_250));        !map$2charphsVarph_end((o2_saved_250));        it_253=map$2charphsVarph_next((o2_saved_250))        ){
            key_256=it_253;
            value_257=((struct sVar*)come_null_check(((struct sVar*)(__right_value251=map$2charphsVarphp_operator_load_element(vtable_249->mVars,key_256))), "common.h", 453, 0));
            come_call_finalizer3(__right_value251,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_271=(struct sType*)come_increment_ref_count(sType_clone(value_257->mType));
            type2_271->mPointerNum++;
            item_290=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 459, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_257->mCValueName)),(struct sType*)come_increment_ref_count(type2_271)));
            if(            value_257->mCValueName!=((void*)0)) {
                if(                strcmp(value_257->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_257->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_257->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_257->mType->mClass->mName,"va_list")||string_operator_equals(value_257->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodeph_length(type2_271->mArrayNum)==1) {
                    type3_291=(struct sType*)come_increment_ref_count(sType_clone(type2_271));
                    list$1sNodeph_reset(type3_291->mArrayNum);
                    type3_291->mPointerNum=1;
                    type3_291->mOriginIsArray=(_Bool)1;
                    item2_294=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 479, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string(value_257->mCValueName)),(struct sType*)come_increment_ref_count(type3_291)));
                    list$1tuple2$2charphsTypephph_push_back(current_stack_248->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item2_294)));
                    value_257->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_294,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1tuple2$2charphsTypephph_push_back(current_stack_248->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(item_290)));
                }
            }
            come_call_finalizer3(type2_271,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_290,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_250,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_249=vtable_249->mParent;
    }
    output_struct(current_stack_248,info);
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_247),(struct sClass*)come_increment_ref_count(current_stack_248));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_247,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_247);
    vtable_249=info->lv_table;
    while(vtable_249) {
        for(        o2_saved_346=(struct map$2charphsVarph*)come_increment_ref_count((vtable_249->mVars)),it_347=map$2charphsVarph_begin((o2_saved_346));        !map$2charphsVarph_end((o2_saved_346));        it_347=map$2charphsVarph_next((o2_saved_346))        ){
            key_348=it_347;
            value_349=((struct sVar*)come_null_check(((struct sVar*)(__right_value307=map$2charphsVarphp_operator_load_element(vtable_249->mVars,key_348))), "common.h", 504, 1));
            come_call_finalizer3(__right_value307,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_350=(struct sType*)come_increment_ref_count(sType_clone(value_349->mType));
            item_351=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 508, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(value_349->mCValueName),(struct sType*)come_increment_ref_count(type2_350)));
            if(            value_349->mCValueName!=((void*)0)) {
                if(                strcmp(value_349->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_349->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_349->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_349->mType->mClass->mName,"va_list")||string_operator_equals(value_349->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_350->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_349->mCValueName,value_349->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_349->mCValueName,value_349->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_350,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_351,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_346,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_249=vtable_249->mParent;
    }
    come_value_352=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 537, "CVALUE"))));
    __dec_obj105=come_value_352->c_value;
    come_value_352->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=come_value_352->type;
    come_value_352->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 540, "sType")),class_name_247,(_Bool)0,info));
    come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_352->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_352->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_352));
    __result255__ = (_Bool)1;
    class_name_247 = come_decrement_ref_count2(class_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_248,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_352,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result255__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_251;
char* __result201__;
char* __result202__;
char* result_252;
char* __result203__;
result_251 = (void*)0;
result_252 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_251,0,sizeof(char*));
        __result201__ = gComeFunResultObject = __result_obj__ = result_251;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result202__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    memset(&result_252,0,sizeof(char*));
    __result203__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_254;
char* __result204__;
char* __result205__;
char* result_255;
char* __result206__;
result_254 = (void*)0;
result_255 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_254,0,sizeof(char*));
        __result204__ = gComeFunResultObject = __result_obj__ = result_254;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result205__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    memset(&result_255,0,sizeof(char*));
    __result206__ = gComeFunResultObject = __result_obj__ = result_255;
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_258;
unsigned int hash_259;
unsigned int it_260;
struct sVar* __result207__;
struct sVar* __result208__;
struct sVar* __result209__;
struct sVar* __result210__;
default_value_258 = (void*)0;
    memset(&default_value_258,0,sizeof(struct sVar*));
    hash_259=charp_get_hash_key(((char*)key))%self->size;
    it_260=hash_259;
    while((_Bool)1) {
        if(        self->item_existance[it_260]) {
            if(            charp_equals(self->keys[it_260],key)) {
                __result207__ = gComeFunResultObject = __result_obj__ = self->items[it_260];
                come_call_finalizer3(default_value_258,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result207__;
            }
            it_260++;
            if(            it_260>=self->size) {
                it_260=0;
            }
            else if(            it_260==hash_259) {
                __result208__ = gComeFunResultObject = __result_obj__ = default_value_258;
                come_call_finalizer3(default_value_258,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result208__;
            }
        }
        else {
            __result209__ = gComeFunResultObject = __result_obj__ = default_value_258;
            come_call_finalizer3(default_value_258,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result209__;
        }
    }
    __result210__ = gComeFunResultObject = __result_obj__ = default_value_258;
    come_call_finalizer3(default_value_258,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj34;
char* __dec_obj35;
struct sType* __dec_obj36;
char* __dec_obj57;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj34=self->mName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj35=self->mCValueName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj36=self->mType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj57=self->mFunName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj37;
struct tuple1$1sTypeph* __dec_obj39;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj50;
struct tuple1$1sTypeph* __dec_obj51;
struct sNode* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj39=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj39,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj41=self->mGenericsName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj42=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj44=self->mArrayNum;
            come_call_finalizer3(__dec_obj44,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj46=self->mParamTypes;
            come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj47=self->mParamNames;
            come_call_finalizer3(__dec_obj47,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj48=self->mResultType;
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj50=self->mAlignas;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj51=self->mChannelType;
            come_call_finalizer3(__dec_obj51,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj53=self->mSizeNum;
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj54=self->mOriginalTypeName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj55=self->mAsmName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj56=self->mTupleName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_261;
struct list_item$1sTypeph* prev_it_262;
    it_261=self->head;
    while(it_261!=((void*)0)) {
        prev_it_262=it_261;
        it_261=it_261->next;
        come_call_finalizer3(prev_it_262,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_263;
struct list_item$1sTypeph* prev_it_264;
    it_263=self->head;
    while(it_263!=((void*)0)) {
        prev_it_264=it_263;
        it_263=it_263->next;
        come_call_finalizer3(prev_it_264,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_265;
struct list_item$1sNodeph* prev_it_266;
    it_265=self->head;
    while(it_265!=((void*)0)) {
        prev_it_266=it_265;
        it_265=it_265->next;
        come_call_finalizer3(prev_it_266,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj45;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj45=self->item;
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_267;
struct list_item$1sNodeph* prev_it_268;
    it_267=self->head;
    while(it_267!=((void*)0)) {
        prev_it_268=it_267;
        it_267=it_267->next;
        come_call_finalizer3(prev_it_268,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_269;
struct list_item$1charph* prev_it_270;
    it_269=self->head;
    while(it_269!=((void*)0)) {
        prev_it_270=it_269;
        it_269=it_269->next;
        come_call_finalizer3(prev_it_270,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj52;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj52=self->v1;
            come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result211__;
void* __right_value252 = (void*)0;
struct sType* result_272;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value256 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value257 = (void*)0;
char* __dec_obj62;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __dec_obj66;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj70;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj71;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* __dec_obj76;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj78;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value285 = (void*)0;
char* __dec_obj80;
void* __right_value286 = (void*)0;
char* __dec_obj81;
void* __right_value287 = (void*)0;
char* __dec_obj82;
struct sType* __result227__;
    if(    self==(void*)0) {
        __result211__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    result_272=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_272->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj60=result_272->mNoSolvedGenericsType;
        result_272->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj61=result_272->mOriginalLoadVarType;
        result_272->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj62=result_272->mGenericsName;
        result_272->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj66=result_272->mGenericsTypes;
        result_272->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj70=result_272->mArrayNum;
        result_272->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj71=result_272->mParamTypes;
        result_272->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj71,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_272->mParamNames;
        result_272->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_272->mResultType;
        result_272->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj76,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_272->mAlignas;
        result_272->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_272->mChannelType;
        result_272->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj78,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_272->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_272->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_272->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_272->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_272->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_272->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_272->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_272->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_272->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_272->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_272->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_272->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_272->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_272->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_272->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_272->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_272->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_272->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_272->mSizeNum;
        result_272->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_272->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_272->mOriginalTypeName;
        result_272->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_272->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_272->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_272->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_272->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_272->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_272->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_272->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_272->mAsmName;
        result_272->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_272->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_272->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_272->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_272->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_272->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_272->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_272->mTupleName;
        result_272->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result227__ = gComeFunResultObject = __result_obj__ = result_272;
    come_call_finalizer3(result_272,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result212__;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* result_273;
void* __right_value254 = (void*)0;
struct sType* __dec_obj58;
struct tuple1$1sTypeph* __result213__;
    if(    self==(void*)0) {
        __result212__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_273=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj58=result_273->v1;
        result_273->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_273;
    come_call_finalizer3(result_273,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj59;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj59=self->v1;
            come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result214__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sTypeph* result_274;
struct list_item$1sTypeph* it_275;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __result217__;
    if(    self==((void*)0)) {
        __result214__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_274=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1058, "list$1sTypeph"))));
    it_275=self->head;
    while(it_275!=((void*)0)) {
        list$1sTypeph_add(result_274,(struct sType*)come_increment_ref_count(sType_clone(it_275->item)));
        it_275=it_275->next;
    }
    __result217__ = gComeFunResultObject = __result_obj__ = result_274;
    come_call_finalizer3(result_274,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result215__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result215__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_276;
struct sType* __dec_obj63;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_277;
struct sType* __dec_obj64;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_278;
struct sType* __dec_obj65;
struct list$1sTypeph* __result216__;
    if(    self->len==0) {
        litem_276=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1072, "list_item$1sTypeph"))));
        litem_276->prev=((void*)0);
        litem_276->next=((void*)0);
        __dec_obj63=litem_276->item;
        litem_276->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_276;
        self->head=litem_276;
    }
    else if(    self->len==1) {
        litem_277=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1082, "list_item$1sTypeph"))));
        litem_277->prev=self->head;
        litem_277->next=((void*)0);
        __dec_obj64=litem_277->item;
        litem_277->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_277;
        self->head->next=litem_277;
    }
    else {
        litem_278=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1092, "list_item$1sTypeph"))));
        litem_278->prev=self->tail;
        litem_278->next=((void*)0);
        __dec_obj65=litem_278->item;
        litem_278->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_278;
        self->tail=litem_278;
    }
    self->len++;
    __result216__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result218__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_279;
struct list_item$1sNodeph* it_280;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result223__;
    if(    self==((void*)0)) {
        __result218__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    result_279=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1058, "list$1sNodeph"))));
    it_280=self->head;
    while(it_280!=((void*)0)) {
        list$1sNodeph_add(result_279,(struct sNode*)come_increment_ref_count(sNode_clone(it_280->item)));
        it_280=it_280->next;
    }
    __result223__ = gComeFunResultObject = __result_obj__ = result_279;
    come_call_finalizer3(result_279,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result219__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_281;
struct sNode* __dec_obj67;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_282;
struct sNode* __dec_obj68;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_283;
struct sNode* __dec_obj69;
struct list$1sNodeph* __result220__;
    if(    self->len==0) {
        litem_281=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1072, "list_item$1sNodeph"))));
        litem_281->prev=((void*)0);
        litem_281->next=((void*)0);
        __dec_obj67=litem_281->item;
        litem_281->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_281;
        self->head=litem_281;
    }
    else if(    self->len==1) {
        litem_282=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1082, "list_item$1sNodeph"))));
        litem_282->prev=self->head;
        litem_282->next=((void*)0);
        __dec_obj68=litem_282->item;
        litem_282->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_282;
        self->head->next=litem_282;
    }
    else {
        litem_283=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1092, "list_item$1sNodeph"))));
        litem_283->prev=self->tail;
        litem_283->next=((void*)0);
        __dec_obj69=litem_283->item;
        litem_283->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_283;
        self->tail=litem_283;
    }
    self->len++;
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result221__;
void* __right_value270 = (void*)0;
struct sNode* result_284;
struct sNode* __result222__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_284=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_284->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_284->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_284->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_284->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_284->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_284->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_284->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_284->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_284->kind=self->kind;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_284;
    if(result_284) { result_284 = come_decrement_ref_count2(result_284, ((struct sNode*)result_284)->finalize, ((struct sNode*)result_284)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result224__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_285;
struct list_item$1charph* it_286;
void* __right_value279 = (void*)0;
struct list$1charph* __result226__;
    if(    self==((void*)0)) {
        __result224__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_285=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1058, "list$1charph"))));
    it_286=self->head;
    while(it_286!=((void*)0)) {
        list$1charph_add(result_285,(char*)come_increment_ref_count(string_clone(it_286->item)));
        it_286=it_286->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_285;
    come_call_finalizer3(result_285,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_287;
char* __dec_obj72;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_288;
char* __dec_obj73;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_289;
char* __dec_obj74;
struct list$1charph* __result225__;
    if(    self->len==0) {
        litem_287=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1072, "list_item$1charph"))));
        litem_287->prev=((void*)0);
        litem_287->next=((void*)0);
        __dec_obj72=litem_287->item;
        litem_287->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_287;
        self->head=litem_287;
    }
    else if(    self->len==1) {
        litem_288=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1082, "list_item$1charph"))));
        litem_288->prev=self->head;
        litem_288->next=((void*)0);
        __dec_obj73=litem_288->item;
        litem_288->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_288;
        self->head->next=litem_288;
    }
    else {
        litem_289=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1092, "list_item$1charph"))));
        litem_289->prev=self->tail;
        litem_289->next=((void*)0);
        __dec_obj74=litem_289->item;
        litem_289->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_289;
        self->tail=litem_289;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj83;
struct sType* __dec_obj84;
struct tuple2$2charphsTypeph* __result228__;
    __dec_obj83=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj84=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_292;
struct list_item$1sNodeph* prev_it_293;
struct list$1sNodeph* __result229__;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_295;
struct tuple2$2charphsTypeph* __dec_obj87;
void* __right_value297 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_296;
struct tuple2$2charphsTypeph* __dec_obj90;
void* __right_value298 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_297;
struct tuple2$2charphsTypeph* __dec_obj93;
struct list$1tuple2$2charphsTypephph* __result230__;
    if(    self->len==0) {
        litem_295=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value296=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1142, "list_item$1tuple2$2charphsTypephph"))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj87=litem_295->item;
        litem_295->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value297=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1152, "list_item$1tuple2$2charphsTypephph"))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj90=litem_296->item;
        litem_296->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value298=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 1162, "list_item$1tuple2$2charphsTypephph"))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj93=litem_297->item;
        litem_297->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj94;
struct sType* __dec_obj95;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj94=self->v1;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj95=self->v2;
            come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result231__;
void* __right_value299 = (void*)0;
struct tuple2$2charphsTypeph* result_298;
void* __right_value300 = (void*)0;
char* __dec_obj96;
void* __right_value301 = (void*)0;
struct sType* __dec_obj97;
struct tuple2$2charphsTypeph* __result232__;
    if(    self==(void*)0) {
        __result231__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_298=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj96=result_298->v1;
        result_298->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj97=result_298->v2;
        result_298->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_298;
    come_call_finalizer3(result_298,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj98;
struct sType* __dec_obj99;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj98=self->v1;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_299;
int i_300;
    for(    i_299=0;    i_299<self->size;    i_299++    ){
        if(        self->item_existance[i_299]) {
            if(            1) {
                come_call_finalizer3(self->items[i_299],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_300=0;    i_300<self->size;    i_300++    ){
        if(        self->item_existance[i_300]) {
            if(            1) {
                self->keys[i_300] = come_decrement_ref_count2(self->keys[i_300], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_322;
unsigned int it_323;
_Bool same_key_exist_340;
char* it2_343;
struct map$2charphsClassph* __result253__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_322=charp_get_hash_key(key)%self->size;
    it_323=hash_322;
    while((_Bool)1) {
        if(        self->item_existance[it_323]) {
            if(            charp_equals(self->keys[it_323],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_323]);
                    self->keys[it_323] = come_decrement_ref_count2(self->keys[it_323], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_323]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_323]);
                    self->keys[it_323]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_323],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_323]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_323]=item;
                }
                break;
            }
            it_323++;
            if(            it_323>=self->size) {
                it_323=0;
            }
            else if(            it_323==hash_322) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_323]=(_Bool)1;
            if(            1) {
                self->keys[it_323]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_323]=key;
            }
            if(            1) {
                self->items[it_323]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_323]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_340=(_Bool)0;
    for(    it2_343=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_343=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_343,key)) {
            same_key_exist_340=(_Bool)1;
        }
    }
    if(    !same_key_exist_340) {
        list$1charp_push_back(self->key_list,key);
    }
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_301;
void* __right_value304 = (void*)0;
char** keys_302;
void* __right_value305 = (void*)0;
struct sClass** items_303;
void* __right_value306 = (void*)0;
_Bool* item_existance_304;
int len_305;
char* it_308;
struct sClass* default_value_311;
struct sClass* it2_312;
unsigned int hash_319;
int n_320;
struct sClass* default_value_321;
default_value_311 = (void*)0;
default_value_321 = (void*)0;
    size_301=self->size*10;
    keys_302=(char**)come_increment_ref_count(((char**)(__right_value304=(char**)come_calloc(1, sizeof(char*)*(1*(size_301)), "./comelang.h", 2547, "char*%"))));
    items_303=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value305=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_301)), "./comelang.h", 2548, "sClass*%"))));
    item_existance_304=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value306=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_301)), "./comelang.h", 2549, "bool"))));
    len_305=0;
    for(    it_308=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_308=map$2charphsClassph_next(self)    ){
        memset(&default_value_311,0,sizeof(struct sClass*));
        it2_312=map$2charphsClassph_at(self,it_308,default_value_311);
        hash_319=charp_get_hash_key(it_308)%size_301;
        n_320=hash_319;
        while((_Bool)1) {
            if(            item_existance_304[n_320]) {
                n_320++;
                if(                n_320>=size_301) {
                    n_320=0;
                }
                else if(                n_320==hash_319) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_304[n_320]=(_Bool)1;
                keys_302[n_320]=it_308;
                items_303[n_320]=map$2charphsClassph_at(self,it_308,default_value_321);
                len_305++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_302;
    self->items=items_303;
    self->item_existance=item_existance_304;
    self->size=size_301;
    self->len=len_305;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_306;
char* __result233__;
char* __result234__;
char* result_307;
char* __result235__;
result_306 = (void*)0;
result_307 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_306,0,sizeof(char*));
        __result233__ = gComeFunResultObject = __result_obj__ = result_306;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result234__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    memset(&result_307,0,sizeof(char*));
    __result235__ = gComeFunResultObject = __result_obj__ = result_307;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_309;
char* __result236__;
char* __result237__;
char* result_310;
char* __result238__;
result_309 = (void*)0;
result_310 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_309,0,sizeof(char*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_309;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_310,0,sizeof(char*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_310;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_313;
unsigned int it_314;
struct sClass* __result239__;
struct sClass* __result240__;
struct sClass* __result241__;
struct sClass* __result242__;
    hash_313=charp_get_hash_key(((char*)key))%self->size;
    it_314=hash_313;
    while((_Bool)1) {
        if(        self->item_existance[it_314]) {
            if(            charp_equals(self->keys[it_314],key)) {
                __result239__ = gComeFunResultObject = __result_obj__ = self->items[it_314];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result239__;
            }
            it_314++;
            if(            it_314>=self->size) {
                it_314=0;
            }
            else if(            it_314==hash_313) {
                __result240__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result240__;
            }
        }
        else {
            __result241__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result241__;
        }
    }
    __result242__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj100;
struct list$1tuple2$2charphsTypephph* __dec_obj101;
char* __dec_obj103;
char* __dec_obj104;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj100=self->mName;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj101=self->mFields;
            come_call_finalizer3(__dec_obj101,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj103=self->mDeclareSName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj104=self->mParentClassName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_315;
struct list_item$1tuple2$2charphsTypephph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        come_call_finalizer3(prev_it_316,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj102;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj102=self->item;
            come_call_finalizer3(__dec_obj102,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_317;
struct list_item$1tuple2$2charphsTypephph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_324;
struct list_item$1charp* it_325;
struct list$1charp* __result246__;
    it2_324=0;
    it_325=self->head;
    while(it_325!=((void*)0)) {
        if(        charp_equals(it_325->item,item)) {
            list$1charp_delete(self,it2_324,it2_324+1);
            break;
        }
        it2_324++;
        it_325=it_325->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_326;
struct list$1charp* __result243__;
struct list_item$1charp* it_329;
int i_330;
struct list_item$1charp* prev_it_331;
struct list_item$1charp* it_332;
int i_333;
struct list_item$1charp* prev_it_334;
struct list_item$1charp* it_335;
struct list_item$1charp* head_prev_it_336;
struct list_item$1charp* tail_it_337;
int i_338;
struct list_item$1charp* prev_it_339;
struct list$1charp* __result245__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_326=tail;
        tail=head;
        head=tmp_326;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result243__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_329=self->head;
        i_330=0;
        while(it_329!=((void*)0)) {
            if(            i_330<tail) {
                prev_it_331=it_329;
                it_329=it_329->next;
                i_330++;
                come_call_finalizer3(prev_it_331,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_330==tail) {
                self->head=it_329;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_329=it_329->next;
                i_330++;
            }
        }
    }
    else if(    tail==self->len) {
        it_332=self->head;
        i_333=0;
        while(it_332!=((void*)0)) {
            if(            i_333==head) {
                self->tail=it_332->prev;
                self->tail->next=((void*)0);
            }
            if(            i_333>=head) {
                prev_it_334=it_332;
                it_332=it_332->next;
                i_333++;
                come_call_finalizer3(prev_it_334,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_332=it_332->next;
                i_333++;
            }
        }
    }
    else {
        it_335=self->head;
        head_prev_it_336=((void*)0);
        tail_it_337=((void*)0);
        i_338=0;
        while(it_335!=((void*)0)) {
            if(            i_338==head) {
                head_prev_it_336=it_335->prev;
            }
            if(            i_338==tail) {
                tail_it_337=it_335;
            }
            if(            i_338>=head&&i_338<tail) {
                prev_it_339=it_335;
                it_335=it_335->next;
                i_338++;
                come_call_finalizer3(prev_it_339,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_335=it_335->next;
                i_338++;
            }
        }
        if(        head_prev_it_336!=((void*)0)) {
            head_prev_it_336->next=tail_it_337;
        }
        if(        tail_it_337!=((void*)0)) {
            tail_it_337->prev=head_prev_it_336;
        }
    }
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_327;
struct list_item$1charp* prev_it_328;
struct list$1charp* __result244__;
    it_327=self->head;
    while(it_327!=((void*)0)) {
        prev_it_328=it_327;
        it_327=it_327->next;
        come_call_finalizer3(prev_it_328,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_341;
char* __result247__;
char* __result248__;
char* result_342;
char* __result249__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result247__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    self->it=self->head;
    if(    self->it) {
        __result248__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    memset(&result_342,0,sizeof(char*));
    __result249__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_344;
char* __result250__;
char* __result251__;
char* result_345;
char* __result252__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result250__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result251__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    memset(&result_345,0,sizeof(char*));
    __result252__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
struct list_item$1CVALUEph* litem_353;
struct CVALUE* __dec_obj107;
void* __right_value317 = (void*)0;
struct list_item$1CVALUEph* litem_354;
struct CVALUE* __dec_obj111;
void* __right_value318 = (void*)0;
struct list_item$1CVALUEph* litem_355;
struct CVALUE* __dec_obj112;
struct list$1CVALUEph* __result254__;
    if(    self->len==0) {
        litem_353=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value316=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_353->prev=((void*)0);
        litem_353->next=((void*)0);
        __dec_obj107=litem_353->item;
        litem_353->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1) {
        litem_354=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value317=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj111=litem_354->item;
        litem_354->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value318=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj112=litem_355->item;
        litem_355->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj108;
struct sType* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj108=self->c_value;
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj109=self->type;
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj110=self->c_value_without_right_value_objects;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
char* none_generics_name_356;
void* __right_value320 = (void*)0;
char* fun_name2_357;
void* __right_value321 = (void*)0;
char* fun_name3_358;
struct sGenericsFun* generics_fun_359;
void* __right_value322 = (void*)0;
_Bool _if_conditional1;
void* __right_value323 = (void*)0;
char* __result260__;
char* __result261__;
    none_generics_name_356=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_357=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_358=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_356,fun_name));
    generics_fun_359=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_358,((void*)0));
    if(    generics_fun_359) {
        if(        (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_357)),generics_fun_359,type,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_358);
            __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value323=__builtin_string("")));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            none_generics_name_356 = come_decrement_ref_count2(none_generics_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name2_357 = come_decrement_ref_count2(fun_name2_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name3_358 = come_decrement_ref_count2(fun_name3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result260__;
        }
    }
    __result261__ = gComeFunResultObject = __result_obj__ = fun_name2_357;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_356 = come_decrement_ref_count2(none_generics_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_357 = come_decrement_ref_count2(fun_name2_357, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    fun_name3_358 = come_decrement_ref_count2(fun_name3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_360;
unsigned int it_361;
struct sGenericsFun* __result256__;
struct sGenericsFun* __result257__;
struct sGenericsFun* __result258__;
struct sGenericsFun* __result259__;
    hash_360=charp_get_hash_key(((char*)key))%self->size;
    it_361=hash_360;
    while((_Bool)1) {
        if(        self->item_existance[it_361]) {
            if(            charp_equals(self->keys[it_361],key)) {
                __result256__ = gComeFunResultObject = __result_obj__ = self->items[it_361];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
            it_361++;
            if(            it_361>=self->size) {
                it_361=0;
            }
            else if(            it_361==hash_360) {
                __result257__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result257__;
            }
        }
        else {
            __result258__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result258__;
        }
    }
    __result259__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj113;
struct list$1charph* __dec_obj114;
struct list$1charph* __dec_obj115;
char* __dec_obj116;
struct sType* __dec_obj117;
struct list$1sTypeph* __dec_obj118;
struct list$1charph* __dec_obj119;
struct list$1charph* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj113=self->mImplType;
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj114=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj114,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj115=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj115,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj116=self->mName;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj117=self->mResultType;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj118=self->mParamTypes;
            come_call_finalizer3(__dec_obj118,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj119=self->mParamNames;
            come_call_finalizer3(__dec_obj119,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj120=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj120,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj121=self->mBlock;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj122=self->mGenericsSName;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value328 = (void*)0;
struct sNode* current_stack_frame_node_362;
_Bool Value_364;
_Bool __result264__;
void* __right_value329 = (void*)0;
struct CVALUE* come_value_367;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct buffer* method_block2_368;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* method_block_type_369;
void* __right_value334 = (void*)0;
char* class_name_373;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct sClass* current_stack_frame_struct_377;
void* __right_value337 = (void*)0;
_Bool __result271__;
void* __right_value338 = (void*)0;
struct sType* result_type_378;
struct list$1sTypeph* param_types_379;
struct list$1charph* param_names_380;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct buffer* all_alhabet_sname_381;
char* p_382;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
int i_383;
struct list$1sTypeph* o2_saved_384;
struct sType* it_387;
struct sType* param_type_390;
void* __right_value343 = (void*)0;
char* param_name_391;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* param_name_392;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* param_name_393;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct buffer* source3_394;
char* p_395;
char* head_396;
int sline_397;
struct buffer* __dec_obj126;
void* __right_value350 = (void*)0;
struct sNode* node_398;
_Bool Value_399;
_Bool __result278__;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* method_block_name_400;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct CVALUE* come_value2_401;
struct sFun* fun2_402;
_Bool __result283__;
struct sType* method_block_type2_405;
void* __right_value355 = (void*)0;
char* __dec_obj142;
void* __right_value356 = (void*)0;
struct sType* __dec_obj143;
struct buffer* __dec_obj144;
void* __right_value357 = (void*)0;
struct sType* __dec_obj145;
_Bool contained_method_generics_method_block_406;
struct list$1sTypeph* o2_saved_407;
struct sType* it_408;
_Bool __result285__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 32, "struct sNode");
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value325=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 32, "sCurrentNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_362=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value325,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_364=node_compile(current_stack_frame_node_362,info);
    if(    !Value_364) {
        __result264__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_362) { current_stack_frame_node_362 = come_decrement_ref_count2(current_stack_frame_node_362, ((struct sNode*)current_stack_frame_node_362)->finalize, ((struct sNode*)current_stack_frame_node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result264__;
    }
    else {
    }
    come_value_367=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_367));
    dec_stack_ptr(1,info);
    method_block2_368=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 42, "buffer"))));
    method_block_type_369=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value332=list$1sTypephp_operator_load_element(fun->mParamTypes,-1))), "20method.c", 43, 2))));
    come_call_finalizer3(__right_value332,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_373=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)come_null_check(((struct sType*)(__right_value335=list$1sTypephp_operator_load_element(method_block_type_369->mParamTypes,0))), "20method.c", 47, 3))->mClass=((struct sClass*)(__right_value336=map$2charphsClassphp_operator_load_element(info->classes,class_name_373)));
    come_call_finalizer3(__right_value335,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value336,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_377=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value337=map$2charphsClassphp_operator_load_element(info->classes,class_name_373)));
    come_call_finalizer3(__right_value337,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_369->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result271__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_362) { current_stack_frame_node_362 = come_decrement_ref_count2(current_stack_frame_node_362, ((struct sNode*)current_stack_frame_node_362)->finalize, ((struct sNode*)current_stack_frame_node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_373 = come_decrement_ref_count2(class_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result271__;
    }
    result_type_378=(struct sType*)come_increment_ref_count(sType_clone(method_block_type_369->mResultType->v1));
    result_type_378->mStatic=(_Bool)0;
    param_types_379=method_block_type_369->mParamTypes;
    param_names_380=method_block_type_369->mParamNames;
    all_alhabet_sname_381=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 63, "buffer"))));
    {
        p_382=info->sname;
        while(*p_382) {
            if(            xisalnum(*p_382)) {
                buffer_append_char(all_alhabet_sname_381,*p_382++);
            }
            else {
                p_382++;
            }
        }
    }
    buffer_append_format(method_block2_368,"%s method_block%d_%s(",((char*)(__right_value341=make_type_name_string(result_type_378,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value342=buffer_to_string(all_alhabet_sname_381))));
    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_383=0;
    for(    o2_saved_384=(param_types_379),it_387=list$1sTypeph_begin((o2_saved_384));    !list$1sTypeph_end((o2_saved_384));    it_387=list$1sTypeph_next((o2_saved_384))    ){
        param_type_390=it_387;
        if(        i_383==0) {
            param_name_391=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_368,"%s",((char*)(__right_value344=make_define_var(param_type_390,param_name_391,(_Bool)0,info))));
            __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_391 = come_decrement_ref_count2(param_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_383==1) {
            param_name_392=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_368,"%s",((char*)(__right_value346=make_define_var_no_solved(param_type_390,param_name_392,(_Bool)0,(_Bool)0,info))));
            __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_392 = come_decrement_ref_count2(param_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_393=(char*)come_increment_ref_count(xsprintf("it%d",i_383));
            buffer_append_format(method_block2_368,"%s",((char*)(__right_value348=make_define_var_no_solved(param_type_390,param_name_393,(_Bool)0,(_Bool)0,info))));
            __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_393 = come_decrement_ref_count2(param_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_383!=list$1sTypeph_length(param_types_379)-1) {
            buffer_append_str(method_block2_368,",");
        }
        i_383++;
    }
    buffer_append_str(method_block2_368,")\n");
    buffer_append_str(method_block2_368,((char*)(__right_value349=buffer_to_string(method_block))));
    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_394=(struct buffer*)come_increment_ref_count(info->source);
    p_395=info->p;
    head_396=info->head;
    sline_397=info->sline;
    __dec_obj126=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_368);
    come_call_finalizer3(__dec_obj126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_398=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_399=node_compile(node_398,info);
    if(    !Value_399) {
        __result278__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_362) { current_stack_frame_node_362 = come_decrement_ref_count2(current_stack_frame_node_362, ((struct sNode*)current_stack_frame_node_362)->finalize, ((struct sNode*)current_stack_frame_node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_373 = come_decrement_ref_count2(class_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_381,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_394,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result278__;
    }
    else {
    }
    method_block_name_400=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value351=buffer_to_string(all_alhabet_sname_381)))));
    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_401=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 128, "CVALUE"))));
    fun2_402=map$2charphsFunph_at(info->funcs,method_block_name_400,((void*)0));
    if(    fun2_402==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_400);
        __result283__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_362) { current_stack_frame_node_362 = come_decrement_ref_count2(current_stack_frame_node_362, ((struct sNode*)current_stack_frame_node_362)->finalize, ((struct sNode*)current_stack_frame_node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_373 = come_decrement_ref_count2(class_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_381,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_394,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_400 = come_decrement_ref_count2(method_block_name_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result283__;
    }
    method_block_type2_405=fun2_402->mLambdaType;
    __dec_obj142=come_value2_401->c_value;
    come_value2_401->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_400));
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=come_value2_401->type;
    come_value2_401->type=(struct sType*)come_increment_ref_count(sType_clone(method_block_type2_405));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_401->var=((void*)0);
    list$1CVALUEph_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_401));
    __dec_obj144=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_394);
    come_call_finalizer3(__dec_obj144,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_395;
    info->head=head_396;
    info->sline=sline_397;
    info->current_stack_frame_struct=current_stack_frame_struct_377;
    __dec_obj145=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_406=(_Bool)0;
    for(    o2_saved_407=(param_types_379),it_408=list$1sTypeph_begin((o2_saved_407));    !list$1sTypeph_end((o2_saved_407));    it_408=list$1sTypeph_next((o2_saved_407))    ){
        if(        is_contained_method_generics_types(it_408,info)) {
            contained_method_generics_method_block_406=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_378,info)) {
        contained_method_generics_method_block_406=(_Bool)1;
    }
    if(    contained_method_generics_method_block_406) {
        map$2charphsFunph_remove(info->funcs,method_block_name_400);
    }
    __result285__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_362) { current_stack_frame_node_362 = come_decrement_ref_count2(current_stack_frame_node_362, ((struct sNode*)current_stack_frame_node_362)->finalize, ((struct sNode*)current_stack_frame_node_362)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_373 = come_decrement_ref_count2(class_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_381,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_394,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_400 = come_decrement_ref_count2(method_block_name_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result285__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_365;
struct list_item$1CVALUEph* prev_it_366;
    it_365=self->head;
    while(it_365!=((void*)0)) {
        prev_it_366=it_365;
        it_365=it_365->next;
        come_call_finalizer3(prev_it_366,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj125;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj125=self->item;
            come_call_finalizer3(__dec_obj125,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_370;
int i_371;
struct sType* __result265__;
struct sType* default_value_372;
struct sType* __result266__;
default_value_372 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_370=self->head;
    i_371=0;
    while(it_370!=((void*)0)) {
        if(        position==i_371) {
            __result265__ = gComeFunResultObject = __result_obj__ = it_370->item;
            gComeFunResultObject = (void*)0;
            return __result265__;
        }
        it_370=it_370->next;
        i_371++;
    }
    memset(&default_value_372,0,sizeof(struct sType*));
    __result266__ = gComeFunResultObject = __result_obj__ = default_value_372;
    come_call_finalizer3(default_value_372,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_374;
unsigned int hash_375;
unsigned int it_376;
struct sClass* __result267__;
struct sClass* __result268__;
struct sClass* __result269__;
struct sClass* __result270__;
default_value_374 = (void*)0;
    memset(&default_value_374,0,sizeof(struct sClass*));
    hash_375=charp_get_hash_key(((char*)key))%self->size;
    it_376=hash_375;
    while((_Bool)1) {
        if(        self->item_existance[it_376]) {
            if(            charp_equals(self->keys[it_376],key)) {
                __result267__ = gComeFunResultObject = __result_obj__ = self->items[it_376];
                come_call_finalizer3(default_value_374,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
            it_376++;
            if(            it_376>=self->size) {
                it_376=0;
            }
            else if(            it_376==hash_375) {
                __result268__ = gComeFunResultObject = __result_obj__ = default_value_374;
                come_call_finalizer3(default_value_374,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result268__;
            }
        }
        else {
            __result269__ = gComeFunResultObject = __result_obj__ = default_value_374;
            come_call_finalizer3(default_value_374,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result269__;
        }
    }
    __result270__ = gComeFunResultObject = __result_obj__ = default_value_374;
    come_call_finalizer3(default_value_374,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_385;
struct sType* __result272__;
struct sType* __result273__;
struct sType* result_386;
struct sType* __result274__;
result_385 = (void*)0;
result_386 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_385,0,sizeof(struct sType*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_385;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->head;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_386,0,sizeof(struct sType*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_386;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_388;
struct sType* __result275__;
struct sType* __result276__;
struct sType* result_389;
struct sType* __result277__;
result_388 = (void*)0;
result_389 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_388,0,sizeof(struct sType*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_388;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_389,0,sizeof(struct sType*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_389;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_403;
unsigned int it_404;
struct sFun* __result279__;
struct sFun* __result280__;
struct sFun* __result281__;
struct sFun* __result282__;
    hash_403=charp_get_hash_key(((char*)key))%self->size;
    it_404=hash_403;
    while((_Bool)1) {
        if(        self->item_existance[it_404]) {
            if(            charp_equals(self->keys[it_404],key)) {
                __result279__ = gComeFunResultObject = __result_obj__ = self->items[it_404];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result279__;
            }
            it_404++;
            if(            it_404>=self->size) {
                it_404=0;
            }
            else if(            it_404==hash_403) {
                __result280__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result280__;
            }
        }
        else {
            __result281__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result281__;
        }
    }
    __result282__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj127;
struct sType* __dec_obj128;
struct list$1sTypeph* __dec_obj129;
struct list$1charph* __dec_obj130;
struct list$1charph* __dec_obj131;
struct sType* __dec_obj132;
struct sBlock* __dec_obj133;
struct buffer* __dec_obj136;
struct buffer* __dec_obj137;
struct buffer* __dec_obj138;
struct buffer* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj127=self->mName;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj128=self->mResultType;
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj129=self->mParamTypes;
            come_call_finalizer3(__dec_obj129,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj130=self->mParamNames;
            come_call_finalizer3(__dec_obj130,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj131=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj131,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj132=self->mLambdaType;
            come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj133=self->mBlock;
            come_call_finalizer3(__dec_obj133,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj136=self->mSource;
            come_call_finalizer3(__dec_obj136,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj137=self->mSourceHead;
            come_call_finalizer3(__dec_obj137,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj138=self->mSourceHead2;
            come_call_finalizer3(__dec_obj138,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj139=self->mSourceDefer;
            come_call_finalizer3(__dec_obj139,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj140=self->mComeHeader;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj141=self->mDeclareSName;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj134;
struct sVarTable* __dec_obj135;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj134=self->mNodes;
            come_call_finalizer3(__dec_obj134,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj135=self->mVarTable;
            come_call_finalizer3(__dec_obj135,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunph_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_409;
unsigned int it_410;
struct map$2charphsFunph* __result284__;
    hash_409=charp_get_hash_key(((char*)key))%self->size;
    it_410=hash_409;
    while((_Bool)1) {
        if(        self->item_existance[it_410]) {
            if(            charp_equals(self->keys[it_410],key)) {
                list$1charp_remove(self->key_list,self->keys[it_410]);
                self->item_existance[it_410]=(_Bool)0;
                if(                1) {
                    self->keys[it_410] = come_decrement_ref_count2(self->keys[it_410], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_410]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_410],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_410]=((void*)0);
                self->len--;
                break;
            }
            it_410++;
            if(            it_410>=self->size) {
                it_410=0;
            }
            else if(            it_410==hash_409) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj146;
void* __right_value360 = (void*)0;
char* __dec_obj147;
void* __right_value370 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj164;
void* __right_value371 = (void*)0;
struct buffer* __dec_obj165;
void* __right_value372 = (void*)0;
struct list$1sTypeph* __dec_obj166;
struct sMethodCallNode* __result292__;
    ((struct sNodeBase*)(__right_value358=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value358,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj146=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(sNode_clone(obj));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj147=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj164=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(params));
    come_call_finalizer3(__dec_obj164,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj165=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(method_block));
    come_call_finalizer3(__dec_obj165,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj166=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(method_generics_types));
    come_call_finalizer3(__dec_obj166,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
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
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value373=__builtin_string("sMethodCallNode")));
    __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_421;
struct list$1tuple2$2charphsNodephph* params_422;
struct sNode* obj_423;
struct buffer* method_block_424;
int method_block_sline_425;
_Bool no_infference_method_generics_426;
struct list$1sTypeph* method_generics_types_427;
_Bool recursive_428;
struct list$1sTypeph* method_generics_types_before_429;
struct list$1sTypeph* __dec_obj173;
void* __right_value374 = (void*)0;
struct list$1sTypeph* __dec_obj174;
_Bool Value_430;
_Bool __result294__;
void* __right_value375 = (void*)0;
struct CVALUE* obj_value_431;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
char* __dec_obj175;
void* __right_value378 = (void*)0;
struct sType* obj_type_432;
_Bool no_output_come_code_433;
struct sType* type_434;
void* __right_value379 = (void*)0;
char* none_generics_name_435;
void* __right_value380 = (void*)0;
char* fun_name2_436;
void* __right_value381 = (void*)0;
char* fun_name3_437;
struct sGenericsFun* generics_fun_438;
_Bool method_generics_439;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
char* generics_fun_name_440;
struct sFun* fun_441;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1CVALUEph* come_params_442;
_Bool no_output_come_code_443;
_Bool __result296__;
void* __right_value387 = (void*)0;
struct CVALUE* method_block_node_444;
void* __right_value388 = (void*)0;
struct sType* method_block_lambda_type_448;
void* __right_value389 = (void*)0;
struct sType* method_block_result_type_449;
void* __right_value390 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_450;
struct sType* generics_fun_method_block_result_type_451;
int method_generics_num_452;
void* __right_value391 = (void*)0;
int n_461;
struct list$1sTypeph* o2_saved_462;
struct sType* it_463;
int method_generics_num_464;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1CVALUEph* come_params_465;
int i_466;
struct list$1tuple2$2charphsNodephph* o2_saved_467;
struct tuple2$2charphsNodeph* it_470;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* label_473=0;
struct sNode* node_474=0;
_Bool Value_475;
_Bool __result309__;
void* __right_value399 = (void*)0;
struct CVALUE* come_value_476;
int method_generics_num_477;
void* __right_value400 = (void*)0;
struct list$1sTypeph* o2_saved_478;
struct sType* it_479;
int method_generics_num_480;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1CVALUEph* come_params_481;
int i_482;
struct list$1tuple2$2charphsNodephph* o2_saved_483;
struct tuple2$2charphsNodeph* it_484;
struct tuple2$2charphsNodeph* multiple_assign_var2 = (void*)0;
char* label_485=0;
struct sNode* node_486=0;
_Bool Value_487;
_Bool __result310__;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_488;
int method_generics_num_489;
void* __right_value406 = (void*)0;
int n_490;
struct list$1sTypeph* o2_saved_491;
struct sType* it_492;
int method_generics_num_493;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sClass* klass_494;
_Bool calling_dynamic_method_495;
struct sType* lambda_type_496;
struct list$1tuple2$2charphsTypephph* o2_saved_497;
struct tuple2$2charphsTypeph* it_500;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name_503=0;
struct sType* field_type_504=0;
void* __right_value409 = (void*)0;
struct sType* result_type_505;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1CVALUEph* come_params_506;
int i_507;
struct list$1tuple2$2charphsNodephph* o2_saved_508;
struct tuple2$2charphsNodeph* it_509;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_510=0;
struct sNode* node_511=0;
_Bool Value_512;
_Bool __result317__;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_513;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
_Bool _if_conditional2;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* buf_514;
int j_515;
struct list$1CVALUEph* o2_saved_516;
struct CVALUE* it_519;
void* __right_value421 = (void*)0;
char* __dec_obj180;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct CVALUE* come_value2_522;
void* __right_value424 = (void*)0;
char* __dec_obj181;
void* __right_value425 = (void*)0;
struct sType* result_type2_523;
void* __right_value426 = (void*)0;
struct sType* __dec_obj182;
struct list$1sTypeph* __dec_obj183;
char* generics_fun_name_524;
struct sFun* fun_525;
void* __right_value427 = (void*)0;
char* __dec_obj184;
struct sClass* klass_526;
void* __right_value428 = (void*)0;
_Bool _while_condtional1;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
char* __dec_obj185;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
char* __dec_obj186;
void* __right_value434 = (void*)0;
char* none_generics_name_527;
void* __right_value435 = (void*)0;
char* fun_name3_528;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
char* __dec_obj187;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* __dec_obj188;
int i_529;
void* __right_value442 = (void*)0;
char* new_fun_name_530;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
char* __dec_obj189;
struct sType* obj_array_type_534;
void* __right_value445 = (void*)0;
char* array_method_name_535;
void* __right_value446 = (void*)0;
char* __dec_obj190;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
char* __dec_obj191;
_Bool __result328__;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
char* __dec_obj192;
struct sClass* klass_536;
void* __right_value451 = (void*)0;
_Bool _while_condtional2;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
char* __dec_obj193;
void* __right_value454 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun2_537=0;
char* real_fun_name_538=0;
char* __dec_obj195;
void* __right_value455 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun2_539=0;
char* real_fun_name_540=0;
char* __dec_obj196;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
char* original_obj_type_fun_name_541;
char* __dec_obj197;
_Bool __result329__;
_Bool __result330__;
_Bool __result331__;
void* __right_value458 = (void*)0;
struct sType* result_type_542;
void* __right_value459 = (void*)0;
struct sType* result_type2_543;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct list$1sTypeph* param_types_544;
struct list$1sTypeph* o2_saved_545;
struct sType* it_546;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sType* it2_547;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1CVALUEph* come_params_548;
int i_549;
_Bool first_param_553;
struct list$1tuple2$2charphsNodephph* o2_saved_554;
struct tuple2$2charphsNodeph* it_555;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_556=0;
struct sNode* node_557=0;
_Bool Value_558;
_Bool __result333__;
void* __right_value470 = (void*)0;
struct CVALUE* come_value_559;
int n_560;
struct list$1charph* o2_saved_561;
char* it_564;
void* __right_value471 = (void*)0;
_Bool _if_conditional3;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
_Bool _if_conditional4;
void* __right_value478 = (void*)0;
int i_572;
struct list$1tuple2$2charphsNodephph* o2_saved_573;
struct tuple2$2charphsNodeph* it_574;
struct tuple2$2charphsNodeph* multiple_assign_var8 = (void*)0;
char* label_575=0;
struct sNode* node_576=0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
_Bool _if_conditional5;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
_Bool _elif_conditional1;
void* __right_value486 = (void*)0;
_Bool Value_580;
_Bool __result344__;
void* __right_value487 = (void*)0;
struct CVALUE* come_value_581;
void* __right_value488 = (void*)0;
_Bool _if_conditional6;
void* __right_value489 = (void*)0;
_Bool _if_conditional7;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
_Bool _if_conditional8;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
_Bool _if_conditional9;
struct sType* obj_array_type_582;
void* __right_value498 = (void*)0;
char* array_method_name_583;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct buffer* buf_584;
int i_585;
struct list$1sNodeph* o2_saved_586;
struct sNode* it_589;
_Bool Value_592;
void* __right_value501 = (void*)0;
struct CVALUE* come_value_593;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct CVALUE* come_value_594;
void* __right_value504 = (void*)0;
char* __dec_obj202;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* __dec_obj203;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct buffer* buf_598;
int i_599;
struct list$1sNodeph* o2_saved_600;
struct sNode* it_601;
_Bool Value_602;
void* __right_value515 = (void*)0;
struct CVALUE* come_value_603;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct CVALUE* come_value_604;
void* __right_value518 = (void*)0;
char* __dec_obj209;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj210;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct buffer* buf_605;
int i_606;
struct list$1sNodeph* o2_saved_607;
struct sNode* it_608;
_Bool Value_609;
void* __right_value526 = (void*)0;
struct CVALUE* come_value_610;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct CVALUE* come_value_611;
void* __right_value529 = (void*)0;
char* __dec_obj211;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct sType* __dec_obj212;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct buffer* buf_612;
int i_613;
struct list$1sNodeph* o2_saved_614;
struct sNode* it_615;
_Bool Value_616;
void* __right_value537 = (void*)0;
struct CVALUE* come_value_617;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct CVALUE* come_value_618;
void* __right_value540 = (void*)0;
char* __dec_obj213;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj214;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct buffer* buf_619;
int i_620;
struct list$1sNodeph* o2_saved_621;
struct sNode* it_622;
_Bool Value_623;
void* __right_value548 = (void*)0;
struct CVALUE* come_value_624;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_625;
void* __right_value551 = (void*)0;
char* __dec_obj215;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj216;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
char* default_param_626;
void* __right_value559 = (void*)0;
char* param_name_627;
void* __right_value560 = (void*)0;
_Bool _if_conditional10;
struct buffer* source_628;
char* p_629;
char* head_630;
int sline_631;
void* __right_value561 = (void*)0;
struct buffer* __dec_obj217;
void* __right_value562 = (void*)0;
struct sNode* node_632;
_Bool Value_633;
_Bool __result353__;
struct buffer* __dec_obj218;
void* __right_value563 = (void*)0;
struct CVALUE* come_value_634;
void* __right_value564 = (void*)0;
_Bool _if_conditional11;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
_Bool _if_conditional12;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
_Bool _if_conditional13;
_Bool __result354__;
_Bool __result355__;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct buffer* buf_635;
int j_636;
struct list$1CVALUEph* o2_saved_637;
struct CVALUE* it_638;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct CVALUE* come_value2_639;
void* __right_value577 = (void*)0;
char* __dec_obj219;
void* __right_value578 = (void*)0;
struct sType* __dec_obj220;
void* __right_value579 = (void*)0;
char* __dec_obj221;
struct list$1sTypeph* __dec_obj222;
_Bool __result356__;
    fun_name_421=(char*)come_increment_ref_count(self->fun_name);
    params_422=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_423=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_424=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_425=self->method_block_sline;
    no_infference_method_generics_426=self->no_infference_method_generics;
    method_generics_types_427=(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types);
    recursive_428=self->recursive;
    method_generics_types_before_429=((void*)0);
    __dec_obj173=method_generics_types_before_429;
    method_generics_types_before_429=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj173,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj174=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
    come_call_finalizer3(__dec_obj174,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    Value_430=node_compile(obj_423,info);
    if(    !Value_430) {
        __result294__ = (_Bool)0;
        fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result294__;
    }
    else {
    }
    obj_value_431=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&obj_value_431->type->mPointerNum>0) {
        __dec_obj175=obj_value_431->c_value;
        obj_value_431->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value376=make_type_name_string(obj_value_431->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),obj_value_431->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    obj_type_432=(struct sType*)come_increment_ref_count(sType_clone(obj_value_431->type));
    if(    !no_infference_method_generics_426) {
        no_output_come_code_433=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_434=(struct sType*)come_increment_ref_count(obj_type_432);
        none_generics_name_435=(char*)come_increment_ref_count(get_none_generics_name(type_434->mClass->mName));
        fun_name2_436=(char*)come_increment_ref_count(create_method_name(type_434,(_Bool)0,fun_name_421,info,(_Bool)1));
        fun_name3_437=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_435,fun_name_421));
        generics_fun_438=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_437,((void*)0));
        if(        generics_fun_438) {
            method_generics_439=list$1charph_length(generics_fun_438->mMethodGenericsTypeNames)>0;
            if(            method_generics_439&&list$1sTypeph_length(info->method_generics_types)==0) {
                generics_fun_name_440=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value383=make_generics_function(obj_type_432,(char*)come_increment_ref_count(__builtin_string(fun_name_421)),info,(_Bool)1)))));
                __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                fun_441=map$2charphsFunph_at(info->funcs,generics_fun_name_440,((void*)0));
                come_params_442=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 257, "list$1CVALUEph"))));
                if(                method_block_424) {
                    no_output_come_code_443=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_424,(struct list$1CVALUEph*)come_increment_ref_count(come_params_442),fun_441,fun_name3_437,method_block_sline_425,info,(_Bool)1)) {
                        __result296__ = (_Bool)0;
                        generics_fun_name_440 = come_decrement_ref_count2(generics_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_442,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_435 = come_decrement_ref_count2(none_generics_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_436 = come_decrement_ref_count2(fun_name2_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result296__;
                    }
                    info->no_output_come_code=no_output_come_code_443;
                    method_block_node_444=((struct CVALUE*)(__right_value387=list$1CVALUEphp_operator_load_element(come_params_442,-1)));
                    come_call_finalizer3(__right_value387,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_448=(struct sType*)come_increment_ref_count(sType_clone(method_block_node_444->type));
                    method_block_result_type_449=(struct sType*)come_increment_ref_count(sType_clone(info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_450=((struct sType*)(__right_value390=list$1sTypephp_operator_load_element(generics_fun_438->mParamTypes,-1)));
                    come_call_finalizer3(__right_value390,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_451=generics_fun_method_block_lambda_type_450->mResultType->v1;
                    if(                    generics_fun_method_block_result_type_451->mClass->mMethodGenerics) {
                        method_generics_num_452=generics_fun_method_block_result_type_451->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_452,(struct sType*)come_increment_ref_count(sType_clone(method_block_result_type_449)));
                    }
                    n_461=0;
                    for(                    o2_saved_462=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_450->mParamTypes)),it_463=list$1sTypeph_begin((o2_saved_462));                    !list$1sTypeph_end((o2_saved_462));                    it_463=list$1sTypeph_next((o2_saved_462))                    ){
                        if(                        it_463->mClass->mMethodGenerics) {
                            method_generics_num_464=it_463->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_464,(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(((struct sType*)(__right_value395=list$1sTypephp_operator_load_element(method_block_lambda_type_448->mParamTypes,n_461))), "20method.c", 281, 4)))));
                            come_call_finalizer3(__right_value395,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_461++;
                    }
                    come_call_finalizer3(o2_saved_462,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_465=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 286, "list$1CVALUEph"))));
                    i_466=0;
                    for(                    o2_saved_467=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_422)),it_470=list$1tuple2$2charphsNodephph_begin((o2_saved_467));                    !list$1tuple2$2charphsNodephph_end((o2_saved_467));                    it_470=list$1tuple2$2charphsNodephph_next((o2_saved_467))                    ){
                        multiple_assign_var1=it_470;
                        label_473=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                        node_474=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
                        if(                        i_466==0) {
                            list$1CVALUEph_push_back(come_params_465,(struct CVALUE*)come_increment_ref_count(obj_value_431));
                            i_466++;
                        }
                        else {
                            Value_475=node_compile(node_474,info);
                            if(                            !Value_475) {
                                __result309__ = (_Bool)0;
                                label_473 = come_decrement_ref_count2(label_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_474) { node_474 = come_decrement_ref_count2(node_474, ((struct sNode*)node_474)->finalize, ((struct sNode*)node_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_467,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_465,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_440 = come_decrement_ref_count2(generics_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_442,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_435 = come_decrement_ref_count2(none_generics_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_436 = come_decrement_ref_count2(fun_name2_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result309__;
                            }
                            else {
                            }
                            come_value_476=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_465,(struct CVALUE*)come_increment_ref_count(come_value_476));
                            come_call_finalizer3(come_value_476,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_473 = come_decrement_ref_count2(label_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_474) { node_474 = come_decrement_ref_count2(node_474, ((struct sNode*)node_474)->finalize, ((struct sNode*)node_474)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_467,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_438->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_477=generics_fun_438->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_477,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_461=0;
                    for(                    o2_saved_478=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_438->mParamTypes)),it_479=list$1sTypeph_begin((o2_saved_478));                    !list$1sTypeph_end((o2_saved_478));                    it_479=list$1sTypeph_next((o2_saved_478))                    ){
                        if(                        it_479->mClass->mMethodGenerics) {
                            method_generics_num_480=it_479->mClass->mMethodGenericsNum;
                            if(                            n_461<list$1CVALUEph_length(come_params_465)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_480,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value401=list$1CVALUEphp_operator_load_element(come_params_465,n_461)))->type)));
                                come_call_finalizer3(__right_value401,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_461++;
                    }
                    come_call_finalizer3(o2_saved_478,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_448,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_465,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_481=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 325, "list$1CVALUEph"))));
                    i_482=0;
                    for(                    o2_saved_483=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_422)),it_484=list$1tuple2$2charphsNodephph_begin((o2_saved_483));                    !list$1tuple2$2charphsNodephph_end((o2_saved_483));                    it_484=list$1tuple2$2charphsNodephph_next((o2_saved_483))                    ){
                        multiple_assign_var2=it_484;
                        label_485=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                        node_486=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
                        if(                        i_482==0) {
                            list$1CVALUEph_push_back(come_params_481,(struct CVALUE*)come_increment_ref_count(obj_value_431));
                            i_482++;
                        }
                        else {
                            Value_487=node_compile(node_486,info);
                            if(                            !Value_487) {
                                __result310__ = (_Bool)0;
                                label_485 = come_decrement_ref_count2(label_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_486) { node_486 = come_decrement_ref_count2(node_486, ((struct sNode*)node_486)->finalize, ((struct sNode*)node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_483,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_481,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                generics_fun_name_440 = come_decrement_ref_count2(generics_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_442,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_435 = come_decrement_ref_count2(none_generics_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_436 = come_decrement_ref_count2(fun_name2_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result310__;
                            }
                            else {
                            }
                            come_value_488=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEph_push_back(come_params_481,(struct CVALUE*)come_increment_ref_count(come_value_488));
                            come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_485 = come_decrement_ref_count2(label_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_486) { node_486 = come_decrement_ref_count2(node_486, ((struct sNode*)node_486)->finalize, ((struct sNode*)node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_483,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_438->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_489=generics_fun_438->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_489,(struct sType*)come_increment_ref_count(sType_clone(info->function_result_type)));
                        }
                    }
                    n_490=0;
                    for(                    o2_saved_491=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_438->mParamTypes)),it_492=list$1sTypeph_begin((o2_saved_491));                    !list$1sTypeph_end((o2_saved_491));                    it_492=list$1sTypeph_next((o2_saved_491))                    ){
                        if(                        it_492->mClass->mMethodGenerics) {
                            method_generics_num_493=it_492->mClass->mMethodGenericsNum;
                            if(                            n_490<list$1CVALUEph_length(come_params_481)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_493,(struct sType*)come_increment_ref_count(sType_clone(((struct CVALUE*)(__right_value407=list$1CVALUEphp_operator_load_element(come_params_481,n_490)))->type)));
                                come_call_finalizer3(__right_value407,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_490++;
                    }
                    come_call_finalizer3(o2_saved_491,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_481,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunph_remove(info->funcs,generics_fun_name_440);
                generics_fun_name_440 = come_decrement_ref_count2(generics_fun_name_440, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_442,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_433;
        come_call_finalizer3(type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_435 = come_decrement_ref_count2(none_generics_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_436 = come_decrement_ref_count2(fun_name2_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_494=obj_type_432->mClass;
    calling_dynamic_method_495=(_Bool)0;
    lambda_type_496=((void*)0);
    for(    o2_saved_497=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_494->mFields)),it_500=list$1tuple2$2charphsTypephph_begin((o2_saved_497));    !list$1tuple2$2charphsTypephph_end((o2_saved_497));    it_500=list$1tuple2$2charphsTypephph_next((o2_saved_497))    ){
        multiple_assign_var3=it_500;
        field_name_503=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_504=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        if(        string_operator_equals(field_name_503,fun_name_421)&&string_operator_equals(field_type_504->mClass->mName,"lambda")) {
            calling_dynamic_method_495=(_Bool)1;
            lambda_type_496=field_type_504;
            field_name_503 = come_decrement_ref_count2(field_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_503 = come_decrement_ref_count2(field_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_504,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_497,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_495) {
        result_type_505=(struct sType*)come_increment_ref_count(sType_clone(lambda_type_496->mResultType->v1));
        result_type_505->mStatic=(_Bool)0;
        come_params_506=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 388, "list$1CVALUEph"))));
        i_507=0;
        for(        o2_saved_508=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_422)),it_509=list$1tuple2$2charphsNodephph_begin((o2_saved_508));        !list$1tuple2$2charphsNodephph_end((o2_saved_508));        it_509=list$1tuple2$2charphsNodephph_next((o2_saved_508))        ){
            multiple_assign_var4=it_509;
            label_510=(char*)come_increment_ref_count(multiple_assign_var4->v1);
            node_511=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            i_507==0) {
                list$1CVALUEph_push_back(come_params_506,(struct CVALUE*)come_increment_ref_count(obj_value_431));
                i_507++;
            }
            else {
                Value_512=node_compile(node_511,info);
                if(                !Value_512) {
                    __result317__ = (_Bool)0;
                    label_510 = come_decrement_ref_count2(label_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_511) { node_511 = come_decrement_ref_count2(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_508,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result317__;
                }
                else {
                }
                come_value_513=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value415=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value413=string_to_string(fun_name_421))),((char*)(__right_value414=int_to_string(i_507)))))),((struct sType*)come_null_check(((struct sType*)(__right_value416=list$1sTypephp_operator_load_element(lambda_type_496->mParamTypes,i_507-1))), "20method.c", 405, 5)),come_value_513->type,come_value_513,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value416,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value417=list$1sTypephp_operator_load_element(lambda_type_496->mParamTypes,i_507-1))), "20method.c", 406, 6))->mHeap&&come_value_513->type->mHeap)),                come_call_finalizer3(__right_value417,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value418=list$1sTypephp_operator_load_element(lambda_type_496->mParamTypes,i_507-1))), "20method.c", 408, 7)),come_value_513->type,come_value_513,info,(_Bool)1);
                    come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_push_back(come_params_506,(struct CVALUE*)come_increment_ref_count(come_value_513));
                i_507++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_513,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_510 = come_decrement_ref_count2(label_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_511) { node_511 = come_decrement_ref_count2(node_511, ((struct sNode*)node_511)->finalize, ((struct sNode*)node_511)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_508,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 418, "buffer"))));
        buffer_append_format(buf_514,"%s->%s",obj_value_431->c_value,fun_name_421);
        buffer_append_str(buf_514,"(");
        j_515=0;
        for(        o2_saved_516=(struct list$1CVALUEph*)come_increment_ref_count((come_params_506)),it_519=list$1CVALUEph_begin((o2_saved_516));        !list$1CVALUEph_end((o2_saved_516));        it_519=list$1CVALUEph_next((o2_saved_516))        ){
            if(            j_515==0) {
                __dec_obj180=it_519->c_value;
                it_519->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_519->c_value));
                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_514,it_519->c_value);
            if(            j_515!=list$1CVALUEph_length(come_params_506)-1) {
                buffer_append_str(buf_514,",");
            }
            j_515++;
        }
        come_call_finalizer3(o2_saved_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_514,")");
        come_value2_522=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 438, "CVALUE"))));
        __dec_obj181=come_value2_522->c_value;
        come_value2_522->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_514));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_523=(struct sType*)come_increment_ref_count(solve_generics(result_type_505,info->generics_type,info));
        __dec_obj182=come_value2_522->type;
        come_value2_522->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_523));
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_522->type->mStatic=(_Bool)0;
        come_value2_522->var=((void*)0);
        if(        result_type2_523->mHeap) {
            append_object_to_right_values2(come_value2_522,(struct sType*)come_increment_ref_count(result_type2_523),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_522->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_522));
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj183=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_429);
        come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_506,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_523,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_name_524=((void*)0);
        fun_525=((void*)0);
        if(        string_operator_equals(fun_name_421,"super")) {
            __dec_obj184=fun_name_421;
            fun_name_421=(char*)come_increment_ref_count(create_non_method_name(obj_type_432,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_526=obj_type_432->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value428=map$2charphsClassphp_operator_load_element(info->classes,klass_526->mParentClassName))))),            come_call_finalizer3(__right_value428,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_526=((struct sClass*)(__right_value429=map$2charphsClassphp_operator_load_element(info->classes,klass_526->mParentClassName)));
                come_call_finalizer3(__right_value429,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj185=generics_fun_name_524;
                generics_fun_name_524=(char*)come_increment_ref_count(create_method_name_using_class(klass_526,(_Bool)0,fun_name_421,info,(_Bool)1));
                __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_525=map$2charphsFunph_at(info->funcs,generics_fun_name_524,((void*)0));
                if(                fun_525) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_432&&obj_type_432->mNoSolvedGenericsType&&obj_type_432->mNoSolvedGenericsType->v1&&list$1sTypeph_length(obj_type_432->mNoSolvedGenericsType->v1->mGenericsTypes)>0) {
                __dec_obj186=generics_fun_name_524;
                generics_fun_name_524=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value432=make_generics_function(obj_type_432,(char*)come_increment_ref_count(__builtin_string(fun_name_421)),info,(_Bool)1)))));
                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else if(            list$1sTypeph_length(info->method_generics_types)>0) {
                none_generics_name_527=(char*)come_increment_ref_count(get_none_generics_name(obj_type_432->mClass->mName));
                fun_name3_528=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_527,fun_name_421));
                __dec_obj187=generics_fun_name_524;
                generics_fun_name_524=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value437=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_528)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)))));
                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                none_generics_name_527 = come_decrement_ref_count2(none_generics_name_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_528 = come_decrement_ref_count2(fun_name3_528, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj188=generics_fun_name_524;
                generics_fun_name_524=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value440=make_generics_function(obj_type_432,(char*)come_increment_ref_count(__builtin_string(fun_name_421)),info,(_Bool)1)))));
                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            for(            i_529=128;            i_529>=1;            i_529--            ){
                new_fun_name_530=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_524,i_529));
                fun_525=((struct sFun*)(__right_value443=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_530)));
                come_call_finalizer3(__right_value443,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_525!=((void*)0)) {
                    __dec_obj189=generics_fun_name_524;
                    generics_fun_name_524=(char*)come_increment_ref_count(__builtin_string(new_fun_name_530));
                    __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_530 = come_decrement_ref_count2(new_fun_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_530 = come_decrement_ref_count2(new_fun_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_525==((void*)0)) {
                obj_array_type_534=obj_type_432->mOriginalLoadVarType->v1;
                if(                obj_array_type_534&&list$1sNodeph_length(obj_array_type_534->mArrayNum)>0) {
                    array_method_name_535=(char*)come_increment_ref_count(create_method_name(obj_array_type_534,(_Bool)0,fun_name_421,info,(_Bool)0));
                    fun_525=map$2charphsFunph_at(info->funcs,array_method_name_535,((void*)0));
                    if(                    fun_525) {
                        __dec_obj190=generics_fun_name_524;
                        generics_fun_name_524=(char*)come_increment_ref_count(__builtin_string(array_method_name_535));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_525=map$2charphsFunph_at(info->funcs,generics_fun_name_524,((void*)0));
                        if(                        fun_525==((void*)0)) {
                            __dec_obj191=generics_fun_name_524;
                            generics_fun_name_524=(char*)come_increment_ref_count(create_method_name(obj_type_432,(_Bool)0,((char*)(__right_value447=__builtin_string(fun_name_421))),info,(_Bool)1));
                            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_525=map$2charphsFunph_at(info->funcs,generics_fun_name_524,((void*)0));
                            if(                            fun_525==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_524,info->come_fun->mName);
                                __result328__ = (_Bool)1;
                                array_method_name_535 = come_decrement_ref_count2(array_method_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result328__;
                            }
                        }
                    }
                    array_method_name_535 = come_decrement_ref_count2(array_method_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_525=map$2charphsFunph_at(info->funcs,generics_fun_name_524,((void*)0));
                    if(                    fun_525==((void*)0)) {
                        __dec_obj192=generics_fun_name_524;
                        generics_fun_name_524=(char*)come_increment_ref_count(create_method_name(obj_type_432,(_Bool)0,((char*)(__right_value449=__builtin_string(fun_name_421))),info,(_Bool)1));
                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_525=map$2charphsFunph_at(info->funcs,generics_fun_name_524,((void*)0));
                        if(                        fun_525==((void*)0)) {
                            klass_536=obj_type_432->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value451=map$2charphsClassphp_operator_load_element(info->classes,klass_536->mParentClassName))))),                            come_call_finalizer3(__right_value451,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_536=((struct sClass*)(__right_value452=map$2charphsClassphp_operator_load_element(info->classes,klass_536->mParentClassName)));
                                come_call_finalizer3(__right_value452,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj193=generics_fun_name_524;
                                generics_fun_name_524=(char*)come_increment_ref_count(create_method_name_using_class(klass_536,(_Bool)0,fun_name_421,info,(_Bool)1));
                                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_525=map$2charphsFunph_at(info->funcs,generics_fun_name_524,((void*)0));
                                if(                                fun_525) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_525==((void*)0)&&string_operator_equals(fun_name_421,"to_string")) {
                            multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value454=create_to_string_automatically(obj_type_432,fun_name_421,info)));
                            fun2_537=multiple_assign_var5->v1;
                            real_fun_name_538=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                            come_call_finalizer3(__right_value454,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_525=fun2_537;
                            __dec_obj195=generics_fun_name_524;
                            generics_fun_name_524=(char*)come_increment_ref_count(real_fun_name_538);
                            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_538 = come_decrement_ref_count2(real_fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_525==((void*)0)&&string_operator_equals(fun_name_421,"equals")) {
                            multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value455=create_equals_automatically(obj_type_432,fun_name_421,info)));
                            fun2_539=multiple_assign_var6->v1;
                            real_fun_name_540=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                            come_call_finalizer3(__right_value455,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_525=fun2_539;
                            __dec_obj196=generics_fun_name_524;
                            generics_fun_name_524=(char*)come_increment_ref_count(real_fun_name_540);
                            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_540 = come_decrement_ref_count2(real_fun_name_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_525==((void*)0)) {
                            original_obj_type_fun_name_541=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_432,(_Bool)0,((char*)(__right_value456=__builtin_string(fun_name_421))),info,(_Bool)1));
                            __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_525=map$2charphsFunph_at(info->funcs,original_obj_type_fun_name_541,((void*)0));
                            if(                            fun_525) {
                                __dec_obj197=generics_fun_name_524;
                                generics_fun_name_524=(char*)come_increment_ref_count(original_obj_type_fun_name_541);
                                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_541 = come_decrement_ref_count2(original_obj_type_fun_name_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_525==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_524,info->come_fun->mName);
                            __result329__ = (_Bool)1;
                            generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result329__;
                        }
                    }
                }
            }
        }
        if(        fun_525==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_524,info->come_fun->mName);
            __result330__ = (_Bool)1;
            generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result330__;
        }
        if(        list$1sTypeph_length(fun_525->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result331__ = (_Bool)1;
            generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result331__;
        }
        result_type_542=(struct sType*)come_increment_ref_count(sType_clone(fun_525->mResultType));
        result_type_542->mStatic=(_Bool)0;
        result_type2_543=(struct sType*)come_increment_ref_count(solve_generics(result_type_542,info->generics_type,info));
        param_types_544=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 595, "list$1sTypeph"))));
        for(        o2_saved_545=(struct list$1sTypeph*)come_increment_ref_count((fun_525->mParamTypes)),it_546=list$1sTypeph_begin((o2_saved_545));        !list$1sTypeph_end((o2_saved_545));        it_546=list$1sTypeph_next((o2_saved_545))        ){
            if(            it_546==((void*)0)) {
                list$1sTypeph_push_back(param_types_544,(struct sType*)come_increment_ref_count(sType_clone(it_546)));
            }
            else {
                it2_547=(struct sType*)come_increment_ref_count(solve_generics(it_546,info->generics_type,info));
                list$1sTypeph_push_back(param_types_544,(struct sType*)come_increment_ref_count(sType_clone(it2_547)));
                come_call_finalizer3(it2_547,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_545,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_548=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 607, "list$1CVALUEph"))));
        for(        i_549=0;        i_549<list$1sTypeph_length(fun_525->mParamTypes)-(((method_block_424)?(2):(0)));        i_549++        ){
            list$1CVALUEph_add(come_params_548,((void*)0));
        }
        first_param_553=(_Bool)1;
        for(        o2_saved_554=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_422)),it_555=list$1tuple2$2charphsNodephph_begin((o2_saved_554));        !list$1tuple2$2charphsNodephph_end((o2_saved_554));        it_555=list$1tuple2$2charphsNodephph_next((o2_saved_554))        ){
            multiple_assign_var7=it_555;
            label_556=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_557=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            first_param_553) {
                first_param_553=(_Bool)0;
            }
            else if(            label_556) {
                Value_558=node_compile(node_557,info);
                if(                !Value_558) {
                    __result333__ = (_Bool)0;
                    label_556 = come_decrement_ref_count2(label_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_554,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result333__;
                }
                else {
                }
                come_value_559=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                n_560=0;
                for(                o2_saved_561=(struct list$1charph*)come_increment_ref_count((fun_525->mParamNames)),it_564=list$1charph_begin((o2_saved_561));                !list$1charph_end((o2_saved_561));                it_564=list$1charph_next((o2_saved_561))                ){
                    if(                    string_operator_equals(label_556,it_564)) {
                        break;
                    }
                    n_560++;
                }
                come_call_finalizer3(o2_saved_561,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                if(                (_if_conditional3=(((struct sType*)(__right_value471=list$1sTypephp_operator_load_element(param_types_544,n_560))))),                come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    check_assign_type(((char*)(__right_value474=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value472=string_to_string(fun_name_421))),((char*)(__right_value473=int_to_string(n_560)))))),((struct sType*)come_null_check(((struct sType*)(__right_value475=list$1sTypephp_operator_load_element(param_types_544,n_560))), "20method.c", 638, 8)),come_value_559->type,come_value_559,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value475,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional4=(((struct sType*)(__right_value476=list$1sTypephp_operator_load_element(param_types_544,n_560)))&&((struct sType*)come_null_check(((struct sType*)(__right_value477=list$1sTypephp_operator_load_element(param_types_544,n_560))), "20method.c", 640, 9))->mHeap&&come_value_559->type->mHeap)),                come_call_finalizer3(__right_value476,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value477,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value478=list$1sTypephp_operator_load_element(param_types_544,n_560))), "20method.c", 641, 10)),come_value_559->type,come_value_559,info,(_Bool)1);
                    come_call_finalizer3(__right_value478,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_548,n_560,(struct CVALUE*)come_increment_ref_count(come_value_559));
                come_call_finalizer3(come_value_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_556 = come_decrement_ref_count2(label_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_557) { node_557 = come_decrement_ref_count2(node_557, ((struct sNode*)node_557)->finalize, ((struct sNode*)node_557)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_554,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_572=0;
        for(        o2_saved_573=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_422)),it_574=list$1tuple2$2charphsNodephph_begin((o2_saved_573));        !list$1tuple2$2charphsNodephph_end((o2_saved_573));        it_574=list$1tuple2$2charphsNodephph_next((o2_saved_573))        ){
            multiple_assign_var8=it_574;
            label_575=(char*)come_increment_ref_count(multiple_assign_var8->v1);
            node_576=(struct sNode*)come_increment_ref_count(multiple_assign_var8->v2);
            if(            i_572==0) {
                check_assign_type(((char*)(__right_value481=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value479=string_to_string(fun_name_421))),((char*)(__right_value480=int_to_string(i_572)))))),((struct sType*)come_null_check(((struct sType*)(__right_value482=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 653, 11)),obj_value_431->type,obj_value_431,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional5=(((struct sType*)come_null_check(((struct sType*)(__right_value483=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 654, 12))->mHeap&&obj_value_431->type->mHeap)),                come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value484=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 655, 13)),obj_value_431->type,obj_value_431,info,(_Bool)1);
                    come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)come_null_check(((struct sType*)(__right_value485=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 657, 14))->mHeap&&!obj_value_431->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)come_null_check(((char*)(__right_value486=list$1charphp_operator_load_element(fun_525->mParamNames,i_572))), "20method.c", 658, 15)));
                    __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEph_replace(come_params_548,i_572,(struct CVALUE*)come_increment_ref_count(obj_value_431));
                i_572++;
            }
            else if(            label_575) {
            }
            else {
                Value_580=node_compile(node_576,info);
                if(                !Value_580) {
                    __result344__ = (_Bool)0;
                    label_575 = come_decrement_ref_count2(label_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_573,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result344__;
                }
                else {
                }
                come_value_581=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                while((_Bool)1) {
                    if(                    (_if_conditional6=(((struct CVALUE*)(__right_value488=list$1CVALUEphp_operator_load_element(come_params_548,i_572)))==((void*)0))),                    come_call_finalizer3(__right_value488,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional6) {
                        break;
                    }
                    else {
                        i_572++;
                    }
                }
                if(                (_if_conditional7=(((struct sType*)(__right_value489=list$1sTypephp_operator_load_element(param_types_544,i_572))))),                come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    check_assign_type(((char*)(__right_value492=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value490=string_to_string(fun_name_421))),((char*)(__right_value491=int_to_string(i_572)))))),((struct sType*)come_null_check(((struct sType*)(__right_value493=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 685, 16)),come_value_581->type,come_value_581,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional8=(((struct sType*)(__right_value494=list$1sTypephp_operator_load_element(param_types_544,i_572)))&&((struct sType*)come_null_check(((struct sType*)(__right_value495=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 687, 17))->mHeap&&come_value_581->type->mHeap)),                come_call_finalizer3(__right_value494,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value495,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional8) {
                    std_move(((struct sType*)come_null_check(((struct sType*)(__right_value496=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 688, 18)),come_value_581->type,come_value_581,info,(_Bool)1);
                    come_call_finalizer3(__right_value496,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEph_replace(come_params_548,i_572,(struct CVALUE*)come_increment_ref_count(come_value_581));
                i_572++;
                come_call_finalizer3(come_value_581,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_575 = come_decrement_ref_count2(label_575, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_576) { node_576 = come_decrement_ref_count2(node_576, ((struct sNode*)node_576)->finalize, ((struct sNode*)node_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_573,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional9=(((struct CVALUE*)(__right_value497=list$1CVALUEphp_operator_load_element(come_params_548,i_572)))==((void*)0))),            come_call_finalizer3(__right_value497,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                break;
            }
            else {
                i_572++;
            }
        }
        obj_array_type_582=obj_type_432->mOriginalLoadVarType->v1;
        if(        obj_array_type_582&&list$1sNodeph_length(obj_array_type_582->mArrayNum)>0) {
            array_method_name_583=(char*)come_increment_ref_count(create_method_name(obj_array_type_582,(_Bool)0,fun_name_421,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_524,array_method_name_583)) {
                if(                string_operator_equals(fun_name_421,"to_pointer")) {
                    buf_584=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 710, "buffer"))));
                    i_585=0;
                    for(                    o2_saved_586=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_582->mArrayNum)),it_589=list$1sNodeph_begin((o2_saved_586));                    !list$1sNodeph_end((o2_saved_586));                    it_589=list$1sNodeph_next((o2_saved_586))                    ){
                        Value_592=node_compile(it_589,info);
                        if(                        !Value_592) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_593=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_584,"%s",come_value_593->c_value);
                        if(                        i_585!=list$1sNodeph_length(obj_array_type_582->mArrayNum)-1) {
                            buffer_append_str(buf_584,"*");
                        }
                        i_585++;
                        come_call_finalizer3(come_value_593,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_586,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_594=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 730, "CVALUE"))));
                    __dec_obj202=come_value_594->c_value;
                    come_value_594->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_584));
                    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_594->var=((void*)0);
                    __dec_obj203=come_value_594->type;
                    come_value_594->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 734, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_548,1,(struct CVALUE*)come_increment_ref_count(come_value_594));
                    list$1tuple2$2charphsNodephph_push_back(params_422,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 737, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_584,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_594,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_421,"length")) {
                    buf_598=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 740, "buffer"))));
                    i_599=0;
                    for(                    o2_saved_600=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_582->mArrayNum)),it_601=list$1sNodeph_begin((o2_saved_600));                    !list$1sNodeph_end((o2_saved_600));                    it_601=list$1sNodeph_next((o2_saved_600))                    ){
                        Value_602=node_compile(it_601,info);
                        if(                        !Value_602) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_603=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_598,"%s",come_value_603->c_value);
                        if(                        i_599!=list$1sNodeph_length(obj_array_type_582->mArrayNum)-1) {
                            buffer_append_str(buf_598,"*");
                        }
                        i_599++;
                        come_call_finalizer3(come_value_603,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_600,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_604=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 759, "CVALUE"))));
                    __dec_obj209=come_value_604->c_value;
                    come_value_604->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_598));
                    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_604->var=((void*)0);
                    __dec_obj210=come_value_604->type;
                    come_value_604->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 763, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_548,1,(struct CVALUE*)come_increment_ref_count(come_value_604));
                    list$1tuple2$2charphsNodephph_push_back(params_422,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 766, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_598,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_604,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_421,"to_buffer")) {
                    buf_605=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 769, "buffer"))));
                    i_606=0;
                    for(                    o2_saved_607=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_582->mArrayNum)),it_608=list$1sNodeph_begin((o2_saved_607));                    !list$1sNodeph_end((o2_saved_607));                    it_608=list$1sNodeph_next((o2_saved_607))                    ){
                        Value_609=node_compile(it_608,info);
                        if(                        !Value_609) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_610=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_605,"%s",come_value_610->c_value);
                        if(                        i_606!=list$1sNodeph_length(obj_array_type_582->mArrayNum)-1) {
                            buffer_append_str(buf_605,"*");
                        }
                        i_606++;
                        come_call_finalizer3(come_value_610,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_607,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_611=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 788, "CVALUE"))));
                    __dec_obj211=come_value_611->c_value;
                    come_value_611->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_605));
                    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_611->var=((void*)0);
                    __dec_obj212=come_value_611->type;
                    come_value_611->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 792, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_548,1,(struct CVALUE*)come_increment_ref_count(come_value_611));
                    list$1tuple2$2charphsNodephph_push_back(params_422,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 795, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_605,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_611,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_421,"to_list")) {
                    buf_612=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 798, "buffer"))));
                    i_613=0;
                    for(                    o2_saved_614=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_582->mArrayNum)),it_615=list$1sNodeph_begin((o2_saved_614));                    !list$1sNodeph_end((o2_saved_614));                    it_615=list$1sNodeph_next((o2_saved_614))                    ){
                        Value_616=node_compile(it_615,info);
                        if(                        !Value_616) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_617=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_612,"%s",come_value_617->c_value);
                        if(                        i_613!=list$1sNodeph_length(obj_array_type_582->mArrayNum)-1) {
                            buffer_append_str(buf_612,"*");
                        }
                        i_613++;
                        come_call_finalizer3(come_value_617,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_614,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_618=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 817, "CVALUE"))));
                    __dec_obj213=come_value_618->c_value;
                    come_value_618->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_612));
                    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_618->var=((void*)0);
                    __dec_obj214=come_value_618->type;
                    come_value_618->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 821, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_548,1,(struct CVALUE*)come_increment_ref_count(come_value_618));
                    list$1tuple2$2charphsNodephph_push_back(params_422,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 824, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_612,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_618,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_421,"to_vector")) {
                    buf_619=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 827, "buffer"))));
                    i_620=0;
                    for(                    o2_saved_621=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_582->mArrayNum)),it_622=list$1sNodeph_begin((o2_saved_621));                    !list$1sNodeph_end((o2_saved_621));                    it_622=list$1sNodeph_next((o2_saved_621))                    ){
                        Value_623=node_compile(it_622,info);
                        if(                        !Value_623) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_624=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_619,"%s",come_value_624->c_value);
                        if(                        i_620!=list$1sNodeph_length(obj_array_type_582->mArrayNum)-1) {
                            buffer_append_str(buf_619,"*");
                        }
                        i_620++;
                        come_call_finalizer3(come_value_624,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_621,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_625=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 846, "CVALUE"))));
                    __dec_obj215=come_value_625->c_value;
                    come_value_625->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_619));
                    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_625->var=((void*)0);
                    __dec_obj216=come_value_625->type;
                    come_value_625->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 850, "sType")),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEph_replace(come_params_548,1,(struct CVALUE*)come_increment_ref_count(come_value_625));
                    list$1tuple2$2charphsNodephph_push_back(params_422,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 853, "struct tuple2$2charphvoidp")),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_619,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_625,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_583 = come_decrement_ref_count2(array_method_name_583, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephph_length(params_422)<list$1sTypeph_length(fun_525->mParamTypes)+(((method_block_424)?(-2):(0)))) {
            for(            ;            i_572<list$1sTypeph_length(fun_525->mParamTypes)+(((method_block_424)?(-2):(0)));            i_572++            ){
                default_param_626=(char*)come_increment_ref_count(string_clone(((char*)(__right_value557=list$1charphp_operator_load_element(fun_525->mParamDefaultParametors,i_572)))));
                __right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_627=((char*)come_null_check(((char*)(__right_value559=list$1charphp_operator_load_element(fun_525->mParamNames,i_572))), "20method.c", 862, 19));
                __right_value559 = come_decrement_ref_count2(__right_value559, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional10=(default_param_626&&string_operator_not_equals(default_param_626,"")&&((struct CVALUE*)(__right_value560=list$1CVALUEphp_operator_load_element(come_params_548,i_572)))==((void*)0))),                come_call_finalizer3(__right_value560,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    source_628=(struct buffer*)come_increment_ref_count(info->source);
                    p_629=info->p;
                    head_630=info->head;
                    sline_631=info->sline;
                    __dec_obj217=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_626));
                    come_call_finalizer3(__dec_obj217,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_632=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_633=node_compile(node_632,info);
                    if(                    !Value_633) {
                        __result353__ = (_Bool)0;
                        come_call_finalizer3(source_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_626 = come_decrement_ref_count2(default_param_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result353__;
                    }
                    else {
                    }
                    __dec_obj218=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_628);
                    come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_629;
                    info->head=head_630;
                    info->sline=sline_631;
                    come_value_634=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional11=(((struct sType*)come_null_check(((struct sType*)(__right_value564=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 886, 20)))),                    come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional11) {
                        check_assign_type(((char*)(__right_value567=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value565=string_to_string(fun_name_421))),((char*)(__right_value566=int_to_string(i_572)))))),((struct sType*)come_null_check(((struct sType*)(__right_value568=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 887, 21)),come_value_634->type,come_value_634,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value565 = come_decrement_ref_count2(__right_value565, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value566 = come_decrement_ref_count2(__right_value566, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value567 = come_decrement_ref_count2(__right_value567, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value568,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional12=(((struct sType*)come_null_check(((struct sType*)(__right_value569=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 889, 22))&&((struct sType*)come_null_check(((struct sType*)(__right_value570=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 889, 23))->mHeap&&come_value_634->type->mHeap)),                    come_call_finalizer3(__right_value569,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional12) {
                        std_move(((struct sType*)come_null_check(((struct sType*)(__right_value571=list$1sTypephp_operator_load_element(param_types_544,i_572))), "20method.c", 890, 24)),come_value_634->type,come_value_634,info,(_Bool)1);
                        come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEph_replace(come_params_548,i_572,(struct CVALUE*)come_increment_ref_count(come_value_634));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_634,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional13=(((struct CVALUE*)(__right_value572=list$1CVALUEphp_operator_load_element(come_params_548,i_572)))==((void*)0))),                    come_call_finalizer3(__right_value572,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        err_msg(info,"require parametor(%s) %d",fun_525->mName,i_572);
                        __result354__ = (_Bool)0;
                        default_param_626 = come_decrement_ref_count2(default_param_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result354__;
                    }
                }
                default_param_626 = come_decrement_ref_count2(default_param_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_424) {
            if(            !compile_method_block(method_block_424,(struct list$1CVALUEph*)come_increment_ref_count(come_params_548),fun_525,fun_name_421,method_block_sline_425,info,(_Bool)0)) {
                __result355__ = (_Bool)0;
                generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result355__;
            }
        }
        buf_635=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 910, "buffer"))));
        buffer_append_str(buf_635,generics_fun_name_524);
        buffer_append_str(buf_635,"(");
        j_636=0;
        for(        o2_saved_637=(struct list$1CVALUEph*)come_increment_ref_count((come_params_548)),it_638=list$1CVALUEph_begin((o2_saved_637));        !list$1CVALUEph_end((o2_saved_637));        it_638=list$1CVALUEph_next((o2_saved_637))        ){
            buffer_append_str(buf_635,it_638->c_value);
            if(            j_636!=list$1CVALUEph_length(come_params_548)-1) {
                buffer_append_str(buf_635,",");
            }
            j_636++;
        }
        come_call_finalizer3(o2_saved_637,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_635,")");
        come_value2_639=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 929, "CVALUE"))));
        __dec_obj219=come_value2_639->c_value;
        come_value2_639->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_635));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj220=come_value2_639->type;
        come_value2_639->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_543));
        come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_639->type->mStatic=(_Bool)0;
        come_value2_639->var=((void*)0);
        if(        result_type2_543->mHeap) {
            append_object_to_right_values2(come_value2_639,(struct sType*)come_increment_ref_count(result_type2_543),info,(_Bool)0);
        }
        __dec_obj221=come_value2_639->c_value;
        come_value2_639->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_639->c_value,come_value2_639->type,info));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value2_639->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_639));
        if(        is_contained_method_generics_types(obj_type_432,info)&&generics_fun_name_524) {
            map$2charphsFunph_remove(info->funcs,generics_fun_name_524);
        }
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj222=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_429);
        come_call_finalizer3(__dec_obj222,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_525;
        generics_fun_name_524 = come_decrement_ref_count2(generics_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_542,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_543,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_544,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_548,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_635,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_639,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result356__ = (_Bool)1;
    fun_name_421 = come_decrement_ref_count2(fun_name_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_422,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_423) { obj_423 = come_decrement_ref_count2(obj_423, ((struct sNode*)obj_423)->finalize, ((struct sNode*)obj_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_424,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_429,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_431,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_432,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result356__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result286__;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_413;
struct list_item$1tuple2$2charphsNodephph* it_414;
void* __right_value369 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result291__;
    if(    self==((void*)0)) {
        __result286__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_413=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1058, "list$1tuple2$2charphsNodephph"))));
    it_414=self->head;
    while(it_414!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_413,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_414->item)));
        it_414=it_414->next;
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_413;
    come_call_finalizer3(result_413,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result287__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_411;
struct list_item$1tuple2$2charphsNodephph* prev_it_412;
    it_411=self->head;
    while(it_411!=((void*)0)) {
        prev_it_412=it_411;
        it_411=it_411->next;
        come_call_finalizer3(prev_it_412,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj148;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj148=self->item;
            come_call_finalizer3(__dec_obj148,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_415;
struct tuple2$2charphsNodeph* __dec_obj151;
void* __right_value364 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_416;
struct tuple2$2charphsNodeph* __dec_obj154;
void* __right_value365 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_417;
struct tuple2$2charphsNodeph* __dec_obj157;
struct list$1tuple2$2charphsNodephph* __result288__;
    if(    self->len==0) {
        litem_415=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value363=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1072, "list_item$1tuple2$2charphsNodephph"))));
        litem_415->prev=((void*)0);
        litem_415->next=((void*)0);
        __dec_obj151=litem_415->item;
        litem_415->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj151,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_415;
        self->head=litem_415;
    }
    else if(    self->len==1) {
        litem_416=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value364=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1082, "list_item$1tuple2$2charphsNodephph"))));
        litem_416->prev=self->head;
        litem_416->next=((void*)0);
        __dec_obj154=litem_416->item;
        litem_416->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj154,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_416;
        self->head->next=litem_416;
    }
    else {
        litem_417=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value365=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1092, "list_item$1tuple2$2charphsNodephph"))));
        litem_417->prev=self->tail;
        litem_417->next=((void*)0);
        __dec_obj157=litem_417->item;
        litem_417->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj157,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_417;
        self->tail=litem_417;
    }
    self->len++;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj158;
struct sNode* __dec_obj159;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj158=self->v1;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj159=self->v2;
            if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result289__;
void* __right_value366 = (void*)0;
struct tuple2$2charphsNodeph* result_418;
void* __right_value367 = (void*)0;
char* __dec_obj160;
void* __right_value368 = (void*)0;
struct sNode* __dec_obj161;
struct tuple2$2charphsNodeph* __result290__;
    if(    self==(void*)0) {
        __result289__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    result_418=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj160=result_418->v1;
        result_418->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj161=result_418->v2;
        result_418->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result290__ = gComeFunResultObject = __result_obj__ = result_418;
    come_call_finalizer3(result_418,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj162;
struct sNode* __dec_obj163;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj162=self->v1;
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj163=self->v2;
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_419;
struct list_item$1tuple2$2charphsNodephph* prev_it_420;
    it_419=self->head;
    while(it_419!=((void*)0)) {
        prev_it_420=it_419;
        it_419=it_419->next;
        come_call_finalizer3(prev_it_420,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result295__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_445;
int i_446;
struct CVALUE* __result297__;
struct CVALUE* default_value_447;
struct CVALUE* __result298__;
default_value_447 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_445=self->head;
    i_446=0;
    while(it_445!=((void*)0)) {
        if(        position==i_446) {
            __result297__ = gComeFunResultObject = __result_obj__ = it_445->item;
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
        it_445=it_445->next;
        i_446++;
    }
    memset(&default_value_447,0,sizeof(struct CVALUE*));
    __result298__ = gComeFunResultObject = __result_obj__ = default_value_447;
    come_call_finalizer3(default_value_447,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result302__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result302__ = gComeFunResultObject = __result_obj__ = item;
    come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_453;
int i_454;
struct sType* default_value_455;
struct list$1sTypeph* __result300__;
struct list_item$1sTypeph* it_459;
int i_460;
struct sType* __dec_obj179;
struct list$1sTypeph* __result301__;
default_value_455 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_453=self->len;
        for(        i_454=0;        i_454<position-len_453;        i_454++        ){
            memset(&default_value_455,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_455));
            come_call_finalizer3(default_value_455,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result300__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    it_459=self->head;
    i_460=0;
    while(it_459!=((void*)0)) {
        if(        position==i_460) {
            __dec_obj179=it_459->item;
            it_459->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_459=it_459->next;
        i_460++;
    }
    __result301__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
struct list_item$1sTypeph* litem_456;
struct sType* __dec_obj176;
void* __right_value393 = (void*)0;
struct list_item$1sTypeph* litem_457;
struct sType* __dec_obj177;
void* __right_value394 = (void*)0;
struct list_item$1sTypeph* litem_458;
struct sType* __dec_obj178;
struct list$1sTypeph* __result299__;
    if(    self->len==0) {
        litem_456=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value392=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1142, "list_item$1sTypeph"))));
        litem_456->prev=((void*)0);
        litem_456->next=((void*)0);
        __dec_obj176=litem_456->item;
        litem_456->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_456;
        self->head=litem_456;
    }
    else if(    self->len==1) {
        litem_457=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value393=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1152, "list_item$1sTypeph"))));
        litem_457->prev=self->head;
        litem_457->next=((void*)0);
        __dec_obj177=litem_457->item;
        litem_457->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_457;
        self->head->next=litem_457;
    }
    else {
        litem_458=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value394=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1162, "list_item$1sTypeph"))));
        litem_458->prev=self->tail;
        litem_458->next=((void*)0);
        __dec_obj178=litem_458->item;
        litem_458->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_458;
        self->tail=litem_458;
    }
    self->len++;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_468;
struct tuple2$2charphsNodeph* __result303__;
struct tuple2$2charphsNodeph* __result304__;
struct tuple2$2charphsNodeph* result_469;
struct tuple2$2charphsNodeph* __result305__;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_468,0,sizeof(struct tuple2$2charphsNodeph*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_468;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->head;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_469,0,sizeof(struct tuple2$2charphsNodeph*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_469;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_471;
struct tuple2$2charphsNodeph* __result306__;
struct tuple2$2charphsNodeph* __result307__;
struct tuple2$2charphsNodeph* result_472;
struct tuple2$2charphsNodeph* __result308__;
result_471 = (void*)0;
result_472 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_471,0,sizeof(struct tuple2$2charphsNodeph*));
        __result306__ = gComeFunResultObject = __result_obj__ = result_471;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result307__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    memset(&result_472,0,sizeof(struct tuple2$2charphsNodeph*));
    __result308__ = gComeFunResultObject = __result_obj__ = result_472;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_498;
struct tuple2$2charphsTypeph* __result311__;
struct tuple2$2charphsTypeph* __result312__;
struct tuple2$2charphsTypeph* result_499;
struct tuple2$2charphsTypeph* __result313__;
result_498 = (void*)0;
result_499 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_498,0,sizeof(struct tuple2$2charphsTypeph*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_498;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->head;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_499,0,sizeof(struct tuple2$2charphsTypeph*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_499;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_501;
struct tuple2$2charphsTypeph* __result314__;
struct tuple2$2charphsTypeph* __result315__;
struct tuple2$2charphsTypeph* result_502;
struct tuple2$2charphsTypeph* __result316__;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_501,0,sizeof(struct tuple2$2charphsTypeph*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_501;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_502,0,sizeof(struct tuple2$2charphsTypeph*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_502;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_517;
struct CVALUE* __result318__;
struct CVALUE* __result319__;
struct CVALUE* result_518;
struct CVALUE* __result320__;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_517,0,sizeof(struct CVALUE*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_517;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->head;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_518,0,sizeof(struct CVALUE*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_518;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_520;
struct CVALUE* __result321__;
struct CVALUE* __result322__;
struct CVALUE* result_521;
struct CVALUE* __result323__;
result_520 = (void*)0;
result_521 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_520,0,sizeof(struct CVALUE*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_520;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_521,0,sizeof(struct CVALUE*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_521;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_531;
unsigned int hash_532;
unsigned int it_533;
struct sFun* __result324__;
struct sFun* __result325__;
struct sFun* __result326__;
struct sFun* __result327__;
default_value_531 = (void*)0;
    memset(&default_value_531,0,sizeof(struct sFun*));
    hash_532=charp_get_hash_key(((char*)key))%self->size;
    it_533=hash_532;
    while((_Bool)1) {
        if(        self->item_existance[it_533]) {
            if(            charp_equals(self->keys[it_533],key)) {
                __result324__ = gComeFunResultObject = __result_obj__ = self->items[it_533];
                come_call_finalizer3(default_value_531,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result324__;
            }
            it_533++;
            if(            it_533>=self->size) {
                it_533=0;
            }
            else if(            it_533==hash_532) {
                __result325__ = gComeFunResultObject = __result_obj__ = default_value_531;
                come_call_finalizer3(default_value_531,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
        }
        else {
            __result326__ = gComeFunResultObject = __result_obj__ = default_value_531;
            come_call_finalizer3(default_value_531,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result326__;
        }
    }
    __result327__ = gComeFunResultObject = __result_obj__ = default_value_531;
    come_call_finalizer3(default_value_531,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj194;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj194=self->v2;
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value467 = (void*)0;
struct list_item$1CVALUEph* litem_550;
struct CVALUE* __dec_obj198;
void* __right_value468 = (void*)0;
struct list_item$1CVALUEph* litem_551;
struct CVALUE* __dec_obj199;
void* __right_value469 = (void*)0;
struct list_item$1CVALUEph* litem_552;
struct CVALUE* __dec_obj200;
struct list$1CVALUEph* __result332__;
    if(    self->len==0) {
        litem_550=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value467=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1072, "list_item$1CVALUEph"))));
        litem_550->prev=((void*)0);
        litem_550->next=((void*)0);
        __dec_obj198=litem_550->item;
        litem_550->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_550;
        self->head=litem_550;
    }
    else if(    self->len==1) {
        litem_551=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value468=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1082, "list_item$1CVALUEph"))));
        litem_551->prev=self->head;
        litem_551->next=((void*)0);
        __dec_obj199=litem_551->item;
        litem_551->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_551;
        self->head->next=litem_551;
    }
    else {
        litem_552=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value469=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1092, "list_item$1CVALUEph"))));
        litem_552->prev=self->tail;
        litem_552->next=((void*)0);
        __dec_obj200=litem_552->item;
        litem_552->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_552;
        self->tail=litem_552;
    }
    self->len++;
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_562;
char* __result334__;
char* __result335__;
char* result_563;
char* __result336__;
result_562 = (void*)0;
result_563 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_562,0,sizeof(char*));
        __result334__ = gComeFunResultObject = __result_obj__ = result_562;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    self->it=self->head;
    if(    self->it) {
        __result335__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    memset(&result_563,0,sizeof(char*));
    __result336__ = gComeFunResultObject = __result_obj__ = result_563;
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_565;
char* __result337__;
char* __result338__;
char* result_566;
char* __result339__;
result_565 = (void*)0;
result_566 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_565,0,sizeof(char*));
        __result337__ = gComeFunResultObject = __result_obj__ = result_565;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result338__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    memset(&result_566,0,sizeof(char*));
    __result339__ = gComeFunResultObject = __result_obj__ = result_566;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_567;
int i_568;
struct CVALUE* default_value_569;
struct list$1CVALUEph* __result340__;
struct list_item$1CVALUEph* it_570;
int i_571;
struct CVALUE* __dec_obj201;
struct list$1CVALUEph* __result341__;
default_value_569 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_567=self->len;
        for(        i_568=0;        i_568<position-len_567;        i_568++        ){
            memset(&default_value_569,0,sizeof(struct CVALUE*));
            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_569));
            come_call_finalizer3(default_value_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result340__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    it_570=self->head;
    i_571=0;
    while(it_570!=((void*)0)) {
        if(        position==i_571) {
            __dec_obj201=it_570->item;
            it_570->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj201,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_570=it_570->next;
        i_571++;
    }
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_577;
int i_578;
char* __result342__;
char* default_value_579;
char* __result343__;
default_value_579 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_577=self->head;
    i_578=0;
    while(it_577!=((void*)0)) {
        if(        position==i_578) {
            __result342__ = gComeFunResultObject = __result_obj__ = it_577->item;
            gComeFunResultObject = (void*)0;
            return __result342__;
        }
        it_577=it_577->next;
        i_578++;
    }
    memset(&default_value_579,0,sizeof(char*));
    __result343__ = gComeFunResultObject = __result_obj__ = default_value_579;
    default_value_579 = come_decrement_ref_count2(default_value_579, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_587;
struct sNode* __result345__;
struct sNode* __result346__;
struct sNode* result_588;
struct sNode* __result347__;
result_587 = (void*)0;
result_588 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_587,0,sizeof(struct sNode*));
        __result345__ = gComeFunResultObject = __result_obj__ = result_587;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    self->it=self->head;
    if(    self->it) {
        __result346__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result346__;
    }
    memset(&result_588,0,sizeof(struct sNode*));
    __result347__ = gComeFunResultObject = __result_obj__ = result_588;
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_590;
struct sNode* __result348__;
struct sNode* __result349__;
struct sNode* result_591;
struct sNode* __result350__;
result_590 = (void*)0;
result_591 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_590,0,sizeof(struct sNode*));
        __result348__ = gComeFunResultObject = __result_obj__ = result_590;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result349__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    memset(&result_591,0,sizeof(struct sNode*));
    __result350__ = gComeFunResultObject = __result_obj__ = result_591;
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value507 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_595;
struct tuple2$2charphsNodeph* __dec_obj204;
void* __right_value508 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_596;
struct tuple2$2charphsNodeph* __dec_obj205;
void* __right_value509 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_597;
struct tuple2$2charphsNodeph* __dec_obj206;
struct list$1tuple2$2charphsNodephph* __result351__;
    if(    self->len==0) {
        litem_595=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value507=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1142, "list_item$1tuple2$2charphsNodephph"))));
        litem_595->prev=((void*)0);
        litem_595->next=((void*)0);
        __dec_obj204=litem_595->item;
        litem_595->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj204,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_595;
        self->head=litem_595;
    }
    else if(    self->len==1) {
        litem_596=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value508=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1152, "list_item$1tuple2$2charphsNodephph"))));
        litem_596->prev=self->head;
        litem_596->next=((void*)0);
        __dec_obj205=litem_596->item;
        litem_596->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_596;
        self->head->next=litem_596;
    }
    else {
        litem_597=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value509=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1162, "list_item$1tuple2$2charphsNodephph"))));
        litem_597->prev=self->tail;
        litem_597->next=((void*)0);
        __dec_obj206=litem_597->item;
        litem_597->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj206,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_597;
        self->tail=litem_597;
    }
    self->len++;
    __result351__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj207;
struct tuple2$2charphvoidp* __result352__;
    __dec_obj207=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj208;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj208=self->v1;
            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value589 = (void*)0;
struct sNode* node_640;
void* __right_value590 = (void*)0;
struct sNode* __dec_obj235;
struct sNode* __result359__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 962, "struct sNode");
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value581=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 962, "sMethodCallNode")),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_640=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value581,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj235=node_640;
    node_640=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_640),info));
    if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
    __result359__ = gComeFunResultObject = __result_obj__ = node_640;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_640) { node_640 = come_decrement_ref_count2(node_640, ((struct sNode*)node_640)->finalize, ((struct sNode*)node_640)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result359__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_642;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
_Bool parse_method_generics_type_643;
char* p_644;
int sline_645;
void* __right_value596 = (void*)0;
char* word_646;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1sTypeph* method_generics_types_647;
void* __right_value599 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_648=0;
char* name_649=0;
_Bool err_650=0;
void* __right_value600 = (void*)0;
char* p_651;
int sline_652;
_Bool err_flag_653;
void* __right_value601 = (void*)0;
char* label_654;
void* __right_value602 = (void*)0;
char* __dec_obj240;
char* __dec_obj241;
_Bool no_comma_655;
_Bool in_fun_param_656;
void* __right_value603 = (void*)0;
struct sNode* node_657;
void* __right_value604 = (void*)0;
struct sNode* __dec_obj242;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct buffer* method_block_658;
int method_block_sline_659;
char* head_660;
void* __right_value607 = (void*)0;
char* tail_661;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct buffer* __dec_obj243;
int len_662;
void* __right_value610 = (void*)0;
char* mem_663;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value621 = (void*)0;
struct sNode* node_664;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj256;
struct sNode* __result363__;
    params_642=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 971, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_push_back(params_642,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 972, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(sNode_clone(obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_643=(_Bool)0;
    {
        p_644=info->p;
        sline_645=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_646=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_646,info)) {
                    parse_method_generics_type_643=(_Bool)1;
                }
                word_646 = come_decrement_ref_count2(word_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_644;
        info->sline=sline_645;
    }
    method_generics_types_647=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 1002, "list$1sTypeph"))));
    if(    parse_method_generics_type_643&&*info->p==60) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            *info->p==0) {
                err_msg(info,"unexpected source end");
                exit(2);
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
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value599=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_648=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_649=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_650=multiple_assign_var9->v3;
                come_call_finalizer3(__right_value599,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_650) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypeph_push_back(method_generics_types_647,(struct sType*)come_increment_ref_count(sType_clone(type_648)));
                come_call_finalizer3(type_648,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_649 = come_decrement_ref_count2(name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            p_651=info->p;
            sline_652=info->sline;
            err_flag_653=(_Bool)0;
            label_654=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj240=label_654;
                label_654=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_653=(_Bool)1;
            }
            if(            err_flag_653==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj241=label_654;
                label_654=((void*)0);
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_651;
                info->sline=sline_652;
            }
            no_comma_655=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_656=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_657=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj242=node_657;
            node_657=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_657),info));
            if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_656;
            info->no_comma=no_comma_655;
            list$1tuple2$2charphsNodephph_push_back(params_642,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1078, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(label_654),(struct sNode*)come_increment_ref_count(node_657))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_654 = come_decrement_ref_count2(label_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_657) { node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_654 = come_decrement_ref_count2(label_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_657) { node_657 = come_decrement_ref_count2(node_657, ((struct sNode*)node_657)->finalize, ((struct sNode*)node_657)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_658=((void*)0);
    method_block_sline_659=0;
    if(    *info->p==123) {
        head_660=info->p;
        method_block_sline_659=info->sline;
        ((char*)(__right_value607=skip_block(info)));
        __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_661=info->p;
        __dec_obj243=method_block_658;
        method_block_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1102, "buffer"))));
        come_call_finalizer3(__dec_obj243,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_662=tail_661-head_660;
        mem_663=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_662+1)), "20method.c", 1105, "char"));
        memcpy(mem_663,head_660,len_662);
        mem_663[len_662]=0;
        buffer_append_str(method_block_658,mem_663);
        buffer_append_str(method_block_658,"\n");
        mem_663 = come_decrement_ref_count2(mem_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1117, "struct sNode");
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value613=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1117, "sMethodCallNode")),fun_name,(struct sNode*)come_increment_ref_count(sNode_clone(obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_642),method_block_658,method_block_sline_659,method_generics_types_647,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_664=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value613,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj256=node_664;
    node_664=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_664),info));
    if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
    __result363__ = gComeFunResultObject = __result_obj__ = node_664;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_642,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_647,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_664) { node_664 = come_decrement_ref_count2(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result363__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj236;
struct sNode* __dec_obj237;
struct tuple2$2charphsNodeph* __result360__;
    __dec_obj236=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
    __result360__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj238;
char* __dec_obj239;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj238=self->v1;
            come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj239=self->v2;
            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj244;
struct sNode* __dec_obj245;
char* __dec_obj246;
struct list$1tuple2$2charphsNodephph* __dec_obj247;
struct buffer* __dec_obj248;
struct list$1sTypeph* __dec_obj249;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj244=self->sname;
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj245=self->obj;
            if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj246=self->fun_name;
            __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj247=self->params;
            come_call_finalizer3(__dec_obj247,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj248=self->method_block;
            come_call_finalizer3(__dec_obj248,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj249=self->method_generics_types;
            come_call_finalizer3(__dec_obj249,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result361__;
void* __right_value614 = (void*)0;
struct sMethodCallNode* result_665;
void* __right_value615 = (void*)0;
char* __dec_obj250;
void* __right_value616 = (void*)0;
struct sNode* __dec_obj251;
void* __right_value617 = (void*)0;
char* __dec_obj252;
void* __right_value618 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj253;
void* __right_value619 = (void*)0;
struct buffer* __dec_obj254;
void* __right_value620 = (void*)0;
struct list$1sTypeph* __dec_obj255;
struct sMethodCallNode* __result362__;
    if(    self==(void*)0) {
        __result361__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result361__;
    }
    result_665=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "sMethodCallNode"));
    if(    self!=((void*)0)) {
        result_665->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj250=result_665->sname;
        result_665->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_665->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj251=result_665->obj;
        result_665->obj=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj));
        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj252=result_665->fun_name;
        result_665->fun_name=(char*)come_increment_ref_count(string_clone(self->fun_name));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj253=result_665->params;
        result_665->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->params));
        come_call_finalizer3(__dec_obj253,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj254=result_665->method_block;
        result_665->method_block=(struct buffer*)come_increment_ref_count(buffer_clone(self->method_block));
        come_call_finalizer3(__dec_obj254,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_665->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj255=result_665->method_generics_types;
        result_665->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->method_generics_types));
        come_call_finalizer3(__dec_obj255,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_665->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_665->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_665->fun=self->fun;
    }
    __result362__ = gComeFunResultObject = __result_obj__ = result_665;
    come_call_finalizer3(result_665,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value627 = (void*)0;
struct sNode* __result366__;
void* __right_value628 = (void*)0;
struct sNode* __result367__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1127, "struct sNode");
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value624=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1127, "sCurrentNode")),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result366__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value627=_inf_value4));
        come_call_finalizer3(__right_value624,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value627) { __right_value627 = come_decrement_ref_count2(__right_value627, ((struct sNode*)__right_value627)->finalize, ((struct sNode*)__right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    __result367__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value628=string_node_v17(buf,head,head_sline,info)));
    if(__right_value628) { __right_value628 = come_decrement_ref_count2(__right_value628, ((struct sNode*)__right_value628)->finalize, ((struct sNode*)__right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
char* __dec_obj257;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj257=self->sname;
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result364__;
void* __right_value625 = (void*)0;
struct sCurrentNode* result_666;
void* __right_value626 = (void*)0;
char* __dec_obj258;
struct sCurrentNode* __result365__;
    if(    self==(void*)0) {
        __result364__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    result_666=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "sCurrentNode"));
    if(    self!=((void*)0)) {
        result_666->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj258=result_666->sname;
        result_666->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_666->sline_real=self->sline_real;
    }
    __result365__ = gComeFunResultObject = __result_obj__ = result_666;
    come_call_finalizer3(result_666,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

