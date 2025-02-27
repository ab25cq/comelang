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
    char* class_name;
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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
    void* finalizer_fun;
    void* cloner_fun;
    void* get_hash_key_fun;
    void* equaler_fun;
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

struct object
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
};

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

typedef struct regex_t* re_t;

enum { UNUSED
,DOT
,BEGIN
,END
,QUESTIONMARK
,STAR
,PLUS
,CHAR
,CHAR_CLASS
,INV_CHAR_CLASS
,DIGIT
,NOT_DIGIT
,ALPHA
,NOT_ALPHA
,WHITESPACE
,NOT_WHITESPACE
};

union anonymous_typeZ4
{
unsigned char ch;
unsigned char* ccl;
};

union anonymous_typeZ5
{
unsigned char ch;
unsigned char* ccl;
};

struct regex_t
{
    unsigned char type;
    union anonymous_typeZ5 u;
};

typedef struct regex_t regex_t;

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

struct list_item$1voidph
{
    void* item;
    struct list_item$1voidph* prev;
    struct list_item$1voidph* next;
};

struct list$1voidph
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
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
    struct list$1voidph* mFields;
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
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    struct sType* mChannelType;
    _Bool mAnyClass;
    struct list$1voidph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mAllocaValue;
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
    char* mAttribute;
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
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
    int mBlockLevel;
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
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
    _Bool mCloner;
    _Bool mNoResultType;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1charph* mGenericsTypeNames;
    struct list$1charph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1voidph* mParamTypes;
    struct list$1charph* mParamNames;
    struct list$1charph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2voidphvoidph* mHeader;
    struct map$2voidphvoidph* mHeaderStructs;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
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
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1voidph* right_value_objects;
    struct sType* generics_type;
    struct list$1voidph* method_generics_types;
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
    struct map$2voidphvoidph* module_params;
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
    struct list$1voidph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2voidphvoidph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2intcharph
{
    int v1;
    char* v2;
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

struct tuple2$2charphsGenericsFunp
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sTypephcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2boolcharph
{
    _Bool v1;
    char* v2;
};

struct tuple2$2charphcharph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple2$2sFunpcharph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2charphbool
{
    char* v1;
    _Bool v2;
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

extern struct list$1voidph* gExceptionRightValueObjects;
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNodeph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
_Bool die(char* msg);
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
void* alloc_from_pages(unsigned long  int size);
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_get_finalizer(void* mem);
void* come_get_cloner(void* mem);
void* come_get_hash_key(void* mem);
void* come_get_equaler(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun, void* get_hash_key_fun, void* equaler_fun);
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
struct smart_pointer$1char* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
struct list$1char* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
struct list$1charp* charppa_to_list(char** self, unsigned long  int len);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
struct list$1short* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
struct list$1int* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
struct list$1long* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
struct list$1float* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
struct list$1double* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
struct vector$1char* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
struct vector$1int* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
struct vector$1long* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values);
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
struct list$1charph* charp_split_char(char* self, char c);
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
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
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
char* charp_puts(char* self);
char* charp_print(char* self);
char* charp_printf(char* self, ...);
int int_printf(int self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int assert_v2(int exp);
int re_match(const char* pattern, const char* text, int* matchlength);
int re_matchp(struct regex_t* pattern, const char* text, int* matchlength);
struct regex_t* re_compile(const char* pattern);
void re_print(struct regex_t* pattern);
int matchdigit(char c);
int matchalpha(char c);
int matchwhitespace(char c);
int matchalphanum(char c);
int matchrange(char c, const char* str);
int matchdot(char c);
int ismetachar(char c);
int matchmetachar(char c, const char* str);
int matchcharclass(char c, const char* str);
int matchone(struct regex_t p, char c);
int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength);
int matchpattern(struct regex_t* pattern, const char* text, int* matchlength);
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
int come_main_v1(int argc, char** argv);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
struct tuple2$2intcharph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1voidph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1voidph* method_generics_types, struct sInfo* info);
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
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2boolcharph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
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
struct CVALUE* get_value_from_object(struct CVALUE* come_value, struct sInfo* info);
_Bool is_inner_calling(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v7(struct sNode* node, struct sInfo* info);
struct sNode* expression_node_v95(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
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
struct sType* use_any_type(struct sType* type);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1voidph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4charphcharphcharphcharph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sStrNode_finalize(struct sStrNode* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self);
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static void sSStringNode_finalize(struct sSStringNode* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self);
static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
static void sCharNode_finalize(struct sCharNode* self);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
static void sWCharNode_finalize(struct sWCharNode* self);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
static void sWStringNode_finalize(struct sWStringNode* self);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static void sListNode_finalize(struct sListNode* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
struct sNode* create_null_return_value(struct sInfo* info);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static void sMapNode_finalize(struct sMapNode* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj15;
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj16;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj16=self->memory;
            come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj17;
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj18;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj18=self->memory;
            come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj19;
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj20;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj20=self->memory;
            come_call_finalizer3(__dec_obj20,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj21;
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj22;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj22=self->memory;
            come_call_finalizer3(__dec_obj22,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj23;
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj24;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj24=self->memory;
            come_call_finalizer3(__dec_obj24,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj25;
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj26;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj26=self->memory;
            come_call_finalizer3(__dec_obj26,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            (self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
char* __dec_obj32;
struct sStrNode* __result230__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result230__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
char* __result231__;
    __result231__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value254=__builtin_string("sStrNode")));
    (__right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result231__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct CVALUE* come_value_317;
void* __right_value257 = (void*)0;
char* __dec_obj35;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sType* __dec_obj77;
_Bool __result248__;
    come_value_317=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj35=come_value_317->c_value;
    come_value_317->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj77=come_value_317->type;
    come_value_317->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj77,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_317->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_317));
    add_come_last_code(info,"%s",come_value_317->c_value);
    __result248__ = (_Bool)1;
    come_call_finalizer3(come_value_317,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result248__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj31;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj31=self->sname;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj33;
char* __dec_obj34;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj34=self->value;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
struct list$1voidph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1voidph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj36=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj37=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj38=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj39=self->mChannelType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj40=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj40,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj42=self->mArrayNum;
            come_call_finalizer3(__dec_obj42,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj44=self->mParamTypes;
            come_call_finalizer3(__dec_obj44,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj45=self->mParamNames;
            come_call_finalizer3(__dec_obj45,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj46=self->mResultType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj47=self->mSizeNum;
            if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj48=self->mAlignas;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_318;
struct list_item$1voidph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj41;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj41=self->item;
            come_call_finalizer3(__dec_obj41,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_320;
struct list_item$1voidph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer3(prev_it_323,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj43;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj43=self->item;
            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_324;
struct list_item$1sNodeph* prev_it_325;
    it_324=self->head;
    while(it_324!=((void*)0)) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer3(prev_it_325,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_326;
struct list_item$1charph* prev_it_327;
    it_326=self->head;
    while(it_326!=((void*)0)) {
        prev_it_327=it_326;
        it_326=it_326->next;
        come_call_finalizer3(prev_it_327,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result232__;
void* __right_value258 = (void*)0;
struct sType* result_335;
void* __right_value259 = (void*)0;
struct sType* __dec_obj53;
void* __right_value260 = (void*)0;
struct sType* __dec_obj54;
void* __right_value261 = (void*)0;
struct sType* __dec_obj55;
void* __right_value262 = (void*)0;
struct sType* __dec_obj56;
void* __right_value269 = (void*)0;
struct list$1voidph* __dec_obj60;
void* __right_value277 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value278 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value285 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value286 = (void*)0;
struct sType* __dec_obj70;
void* __right_value287 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value289 = (void*)0;
char* __dec_obj73;
void* __right_value290 = (void*)0;
char* __dec_obj74;
void* __right_value291 = (void*)0;
char* __dec_obj75;
void* __right_value292 = (void*)0;
char* __dec_obj76;
struct sType* __result246__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_335=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_335->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj53=result_335->mNoSolvedGenericsType;
        result_335->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_335->mOriginalLoadVarType;
        result_335->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj55=result_335->mAnyOriginalType;
        result_335->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj56=result_335->mChannelType;
        result_335->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_335->mGenericsTypes;
        result_335->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_335->mArrayNum;
        result_335->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_335->mParamTypes;
        result_335->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_335->mParamNames;
        result_335->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_335->mResultType;
        result_335->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_335->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_335->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_335->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_335->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_335->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_335->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_335->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_335->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_335->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_335->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_335->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_335->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_335->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_335->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_335->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_335->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_335->mException=self->mException;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj71=result_335->mSizeNum;
        result_335->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_335->mAlignas;
        result_335->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_335->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj73=result_335->mOriginalTypeName;
        result_335->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_335->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_335->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj74=result_335->mAsmName;
        result_335->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_335->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj75=result_335->mTupleName;
        result_335->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj76=result_335->mAttribute;
        result_335->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_335->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_335->mDynamic=self->mDynamic;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_335;
    come_call_finalizer3(result_335,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_328;
    result_328=0;
    result_328+=int_get_hash_key(((int)self->mClass));
    result_328+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_328+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_328+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_328+=int_get_hash_key(((int)self->mChannelType));
    result_328+=int_get_hash_key(((int)self->mAnyClass));
    result_328+=int_get_hash_key(((int)self->mGenericsTypes));
    result_328+=int_get_hash_key(((int)self->mArrayNum));
    result_328+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_328+=int_get_hash_key(((int)self->mParamTypes));
    result_328+=int_get_hash_key(((int)self->mParamNames));
    result_328+=int_get_hash_key(((int)self->mResultType));
    result_328+=int_get_hash_key(((int)self->mVarArgs));
    result_328+=int_get_hash_key(((int)self->mUnsigned));
    result_328+=int_get_hash_key(((int)self->mShort));
    result_328+=int_get_hash_key(((int)self->mLong));
    result_328+=int_get_hash_key(((int)self->mLongLong));
    result_328+=int_get_hash_key(((int)self->mConstant));
    result_328+=int_get_hash_key(((int)self->mAtomic));
    result_328+=int_get_hash_key(((int)self->mRegister));
    result_328+=int_get_hash_key(((int)self->mVolatile));
    result_328+=int_get_hash_key(((int)self->mStatic));
    result_328+=int_get_hash_key(((int)self->mUniq));
    result_328+=int_get_hash_key(((int)self->mRecord));
    result_328+=int_get_hash_key(((int)self->mExtern));
    result_328+=int_get_hash_key(((int)self->mRestrict));
    result_328+=int_get_hash_key(((int)self->mImmutable));
    result_328+=int_get_hash_key(((int)self->mHeap));
    result_328+=int_get_hash_key(((int)self->mChannel));
    result_328+=int_get_hash_key(((int)self->mNoHeap));
    result_328+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_328+=int_get_hash_key(((int)self->mException));
    result_328+=int_get_hash_key(((int)self->mSizeNum));
    result_328+=int_get_hash_key(((int)self->mAlignas));
    result_328+=int_get_hash_key(((int)self->mPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_328+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_328+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_328+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_328+=int_get_hash_key(((int)self->mAllocaValue));
    result_328+=int_get_hash_key(((int)self->mInline));
    result_328+=int_get_hash_key(((int)self->mNullValue));
    result_328+=int_get_hash_key(((int)self->mGuardValue));
    result_328+=int_get_hash_key(((int)self->mAsmName));
    result_328+=int_get_hash_key(((int)self->mArrayPointerType));
    result_328+=int_get_hash_key(((int)self->mLambdaArray));
    result_328+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_328+=int_get_hash_key(((int)self->mTypedef));
    result_328+=int_get_hash_key(((int)self->mMultipleTypes));
    result_328+=int_get_hash_key(((int)self->mOriginIsArray));
    result_328+=int_get_hash_key(((int)self->mTupleName));
    result_328+=int_get_hash_key(((int)self->mAttribute));
    result_328+=int_get_hash_key(((int)self->mGenerate));
    result_328+=int_get_hash_key(((int)self->mCreateVTable));
    result_328+=int_get_hash_key(((int)self->mDynamic));
    return result_328;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
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
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
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
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
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
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
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

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_329;
struct list_item$1voidph* it2_330;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_329=left->head;
    it2_330=right->head;
    while(it_329!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_329->item, it2_330->item)) {
            return (_Bool)0;
        }
        it_329=it_329->next;
        it2_330=it2_330->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_331;
struct list_item$1sNodeph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(it_331!=((void*)0)) {
        if(        !sNode_equals(it_331->item,it2_332->item)) {
            return (_Bool)0;
        }
        it_331=it_331->next;
        it2_332=it2_332->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_333;
struct list_item$1charph* it2_334;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_333=left->head;
    it2_334=right->head;
    while(it_333!=((void*)0)) {
        if(        !string_equals(it_333->item,it2_334->item)) {
            return (_Bool)0;
        }
        it_333=it_333->next;
        it2_334=it2_334->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result233__;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct list$1voidph* result_337;
struct list_item$1voidph* it_338;
void* __right_value268 = (void*)0;
struct list$1voidph* __result236__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_337=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_338=self->head;
    while(it_338!=((void*)0)) {
        list$1voidphp_add(result_337,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_338->item)));
        it_338=it_338->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(result_337,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_336;
    result_336=0;
    result_336+=int_get_hash_key(((int)self->head));
    result_336+=int_get_hash_key(((int)self->tail));
    result_336+=int_get_hash_key(((int)self->len));
    result_336+=int_get_hash_key(((int)self->it));
    return result_336;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj57;
void* __right_value266 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj58;
void* __right_value267 = (void*)0;
struct list_item$1voidph* litem_341;
void* __dec_obj59;
struct list$1voidph* __result235__;
    if(    self->len==0) {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value265=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_339->prev=((void*)0);
        litem_339->next=((void*)0);
        __dec_obj57=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_339;
        self->head=litem_339;
    }
    else if(    self->len==1) {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value266=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_340->prev=self->head;
        litem_340->next=((void*)0);
        __dec_obj58=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_340;
        self->head->next=litem_340;
    }
    else {
        litem_341=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value267=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_341->prev=self->tail;
        litem_341->next=((void*)0);
        __dec_obj59=litem_341->item;
        litem_341->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_341;
        self->tail=litem_341;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result237__;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1sNodeph* result_342;
struct list_item$1sNodeph* it_343;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __result242__;
    if(    self==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_342=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_343=self->head;
    while(it_343!=((void*)0)) {
        list$1sNodephp_add(result_342,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_343->item)));
        it_343=it_343->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result238__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_344;
struct sNode* __dec_obj61;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj62;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result239__;
    if(    self->len==0) {
        litem_344=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj61=litem_344->item;
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj62=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj63=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result240__;
void* __right_value275 = (void*)0;
struct sNode* result_347;
struct sNode* __result241__;
    if(    self==(void*)0) {
        __result240__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_347=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_347->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_347->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_347->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_347->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_347->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_347->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_347->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_347->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_347->kind=self->kind;
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_347;
    ((result_347) ? result_347 = come_decrement_ref_count2(result_347, ((struct sNode*)result_347)->finalize, ((struct sNode*)result_347)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result243__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1charph* result_348;
struct list_item$1charph* it_349;
void* __right_value284 = (void*)0;
struct list$1charph* __result245__;
    if(    self==((void*)0)) {
        __result243__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_348=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_349=self->head;
    while(it_349!=((void*)0)) {
        list$1charphp_add(result_348,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_349->item)));
        it_349=it_349->next;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj66;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_351;
char* __dec_obj67;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_352;
char* __dec_obj68;
struct list$1charph* __result244__;
    if(    self->len==0) {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=((void*)0);
        litem_350->next=((void*)0);
        __dec_obj66=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_350;
        self->head=litem_350;
    }
    else if(    self->len==1) {
        litem_351=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_351->prev=self->head;
        litem_351->next=((void*)0);
        __dec_obj67=litem_351->item;
        litem_351->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_351;
        self->head->next=litem_351;
    }
    else {
        litem_352=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_352->prev=self->tail;
        litem_352->next=((void*)0);
        __dec_obj68=litem_352->item;
        litem_352->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_352;
        self->tail=litem_352;
    }
    self->len++;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value295 = (void*)0;
struct list_item$1CVALUEph* litem_353;
struct CVALUE* __dec_obj78;
void* __right_value296 = (void*)0;
struct list_item$1CVALUEph* litem_354;
struct CVALUE* __dec_obj83;
void* __right_value297 = (void*)0;
struct list_item$1CVALUEph* litem_355;
struct CVALUE* __dec_obj84;
struct list$1CVALUEph* __result247__;
    if(    self->len==0) {
        litem_353=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value295=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_353->prev=((void*)0);
        litem_353->next=((void*)0);
        __dec_obj78=litem_353->item;
        litem_353->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj78,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_353;
        self->head=litem_353;
    }
    else if(    self->len==1) {
        litem_354=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value296=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_354->prev=self->head;
        litem_354->next=((void*)0);
        __dec_obj83=litem_354->item;
        litem_354->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_354;
        self->head->next=litem_354;
    }
    else {
        litem_355=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_355->prev=self->tail;
        litem_355->next=((void*)0);
        __dec_obj84=litem_355->item;
        litem_355->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj84,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_355;
        self->tail=litem_355;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj79;
struct sType* __dec_obj80;
char* __dec_obj81;
char* __dec_obj82;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj79=self->c_value;
            __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj80=self->type;
            come_call_finalizer3(__dec_obj80,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj81=self->c_value_without_right_value_objects;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj82=self->c_value_without_cast_object_value;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct buffer* __dec_obj85;
struct sBufferNode* __result249__;
    ((struct sNodeBase*)(__right_value298=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value298,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj85=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj85,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->size=size;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value299 = (void*)0;
char* __result250__;
    __result250__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value299=__builtin_string("sBufferNode")));
    (__right_value299 = come_decrement_ref_count2(__right_value299, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result250__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_356;
unsigned long  int size_357;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct CVALUE* come_value_358;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct buffer* buf_359;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* type2_360;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* any_type_361;
void* __right_value308 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var1 = (void*)0;
char* finalizer_name_362=0;
char* cloner_name_363=0;
char* get_hash_key_name_364=0;
char* equaler_name_365=0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* type2_366;
void* __right_value312 = (void*)0;
char* __dec_obj92;
void* __right_value313 = (void*)0;
struct sType* __dec_obj93;
_Bool __result251__;
    value_356=(struct buffer*)come_increment_ref_count(self->value);
    size_357=self->size;
    come_value_358=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_359=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    type2_360=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 58, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    type2_360->mPointerNum++;
    any_type_361=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 61, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer",(_Bool)0,info));
    any_type_361->mPointerNum=1;
    any_type_361->mHeap=(_Bool)1;
    multiple_assign_var1=((struct tuple4$4charphcharphcharphcharph*)(__right_value308=create_vtable((struct sType*)come_increment_ref_count(any_type_361),info)));
    finalizer_name_362=(char*)come_increment_ref_count(multiple_assign_var1->v1);
    cloner_name_363=(char*)come_increment_ref_count(multiple_assign_var1->v2);
    get_hash_key_name_364=(char*)come_increment_ref_count(multiple_assign_var1->v3);
    equaler_name_365=(char*)come_increment_ref_count(multiple_assign_var1->v4);
    come_call_finalizer3(__right_value308,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    buffer_append_format(buf_359,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\", %s, %s, %s, %s), \"%s\", %ld)",info->sname,info->sline,finalizer_name_362,cloner_name_363,get_hash_key_name_364,equaler_name_365,((char*)(__right_value309=buffer_to_string(value_356))),size_357);
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_360,sType_finalize, 0, 0, 0, 0, (void*)0);
    type2_366=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"buffer*",(_Bool)0,info));
    type2_366->mHeap=(_Bool)1;
    __dec_obj92=come_value_358->c_value;
    come_value_358->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_359));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value_358->type;
    come_value_358->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_366));
    come_call_finalizer3(__dec_obj93,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_358->var=((void*)0);
    append_object_to_right_values2(come_value_358,(struct sType*)come_increment_ref_count(type2_366),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_358));
    add_come_last_code(info,"%s",come_value_358->c_value);
    __result251__ = (_Bool)1;
    come_call_finalizer3(value_356,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_358,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_359,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(any_type_361,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_362 = come_decrement_ref_count2(finalizer_name_362, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_363 = come_decrement_ref_count2(cloner_name_363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_364 = come_decrement_ref_count2(get_hash_key_name_364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_365 = come_decrement_ref_count2(equaler_name_365, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_366,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result251__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj86;
struct buffer* __dec_obj87;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj86=self->sname;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj87=self->value;
            come_call_finalizer3(__dec_obj87,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4charphcharphcharphcharphp_finalize(struct tuple4$4charphcharphcharphcharph* self){
char* __dec_obj88;
char* __dec_obj89;
char* __dec_obj90;
char* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj88=self->v1;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj90=self->v3;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v3 = come_decrement_ref_count2(self->v3, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v4!=((void*)0)) {
        if(        self->v4==gComeFunResultObject) {
            __dec_obj91=self->v4;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v4 = come_decrement_ref_count2(self->v4, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
char* __dec_obj94;
void* __right_value316 = (void*)0;
struct list$1sNodeph* __dec_obj95;
struct sSStringNode* __result252__;
    ((struct sNodeBase*)(__right_value314=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value314,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, exps));
    come_call_finalizer3(__dec_obj95,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value317 = (void*)0;
char* __result253__;
    __result253__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value317=__builtin_string("sSStringNode")));
    (__right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result253__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_367;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct buffer* buf_368;
struct list$1sNodeph* o2_saved_369;
struct sNode* it_372;
void* __right_value322 = (void*)0;
struct sNode* obj_375;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_376;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sNode* node_384;
_Bool Value_385;
_Bool __result265__;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_386;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* type2_387;
void* __right_value339 = (void*)0;
char* __dec_obj111;
void* __right_value340 = (void*)0;
struct sType* __dec_obj112;
_Bool __result266__;
    come_value_367=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 103, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_368=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 105, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_368,"xsprintf(\"");
    buffer_append_str(buf_368,self->value);
    buffer_append_str(buf_368,"\"");
    if(    list$1sNodephp_length(self->exps)>0) {
        for(        o2_saved_369=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_372=list$1sNodephp_begin((o2_saved_369));        !list$1sNodephp_end((o2_saved_369));        it_372=list$1sNodephp_next((o2_saved_369))        ){
            obj_375=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_372));
            params_376=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 115, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_376,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 116, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_372)))));
            node_384=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_375),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_376),((void*)0),0,((void*)0),info));
            Value_385=node_compile(node_384,info);
            if(            !Value_385) {
                __result265__ = (_Bool)0;
                ((obj_375) ? obj_375 = come_decrement_ref_count2(obj_375, ((struct sNode*)obj_375)->finalize, ((struct sNode*)obj_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(params_376,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((node_384) ? node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(o2_saved_369,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result265__;
            }
            else {
            }
            come_value_386=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_368,",");
            buffer_append_str(buf_368,come_value_386->c_value);
            ((obj_375) ? obj_375 = come_decrement_ref_count2(obj_375, ((struct sNode*)obj_375)->finalize, ((struct sNode*)obj_375)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(params_376,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            ((node_384) ? node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_386,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_369,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_368,")");
    type2_387=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 134, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
    type2_387->mHeap=(_Bool)1;
    __dec_obj111=come_value_367->c_value;
    come_value_367->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_368));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=come_value_367->type;
    come_value_367->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_387));
    come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_367->var=((void*)0);
    append_object_to_right_values2(come_value_367,(struct sType*)come_increment_ref_count(type2_387),info,(_Bool)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_367));
    add_come_last_code(info,"%s",come_value_367->c_value);
    __result266__ = (_Bool)1;
    come_call_finalizer3(come_value_367,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_368,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_387,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result266__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj96;
char* __dec_obj97;
struct list$1sNodeph* __dec_obj98;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj96=self->sname;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj97=self->value;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj98=self->exps;
            come_call_finalizer3(__dec_obj98,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_370;
struct sNode* __result254__;
struct sNode* __result255__;
struct sNode* result_371;
struct sNode* __result256__;
result_370 = (void*)0;
result_371 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_370,0,sizeof(struct sNode*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_370;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->it=self->head;
    if(    self->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_371,0,sizeof(struct sNode*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_371;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_373;
struct sNode* __result257__;
struct sNode* __result258__;
struct sNode* result_374;
struct sNode* __result259__;
result_373 = (void*)0;
result_374 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_373,0,sizeof(struct sNode*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_373;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_374,0,sizeof(struct sNode*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_374;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result260__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_377;
struct list_item$1tuple2$2charphsNodephph* prev_it_378;
    it_377=self->head;
    while(it_377!=((void*)0)) {
        prev_it_378=it_377;
        it_377=it_377->next;
        come_call_finalizer3(prev_it_378,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj99;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj99=self->item;
            come_call_finalizer3(__dec_obj99,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj100;
struct sNode* __dec_obj101;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj100=self->v1;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj101=self->v2;
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value325 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_379;
struct tuple2$2charphsNodeph* __dec_obj102;
void* __right_value326 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_380;
struct tuple2$2charphsNodeph* __dec_obj103;
void* __right_value327 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_381;
struct tuple2$2charphsNodeph* __dec_obj104;
struct list$1tuple2$2charphsNodephph* __result261__;
    if(    self->len==0) {
        litem_379=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value325=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1382, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=((void*)0);
        litem_379->next=((void*)0);
        __dec_obj102=litem_379->item;
        litem_379->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_379;
        self->head=litem_379;
    }
    else if(    self->len==1) {
        litem_380=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value326=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1392, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=self->head;
        litem_380->next=((void*)0);
        __dec_obj103=litem_380->item;
        litem_380->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_380;
        self->head->next=litem_380;
    }
    else {
        litem_381=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value327=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1402, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->tail;
        litem_381->next=((void*)0);
        __dec_obj104=litem_381->item;
        litem_381->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,tuple2$2charphsNodephp_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_381;
        self->tail=litem_381;
    }
    self->len++;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj105;
struct sNode* __dec_obj106;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj105=self->v1;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj106=self->v2;
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            ((self->v2) ? self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result262__;
void* __right_value330 = (void*)0;
struct tuple2$2charphsNodeph* result_382;
void* __right_value331 = (void*)0;
char* __dec_obj107;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj108;
struct tuple2$2charphsNodeph* __result263__;
    if(    self==(void*)0) {
        __result262__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_382=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj107=result_382->v1;
        result_382->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj108=result_382->v2;
        result_382->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_382;
    come_call_finalizer3(result_382,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static unsigned int tuple2$2charphsNodeph_get_hash_key(struct tuple2$2charphsNodeph* self){
unsigned int result_383;
    result_383=0;
    result_383+=int_get_hash_key(((int)self->v1));
    result_383+=int_get_hash_key(((int)self->v2));
    return result_383;
}

static _Bool tuple2$2charphsNodeph_equals(struct tuple2$2charphsNodeph* left, struct tuple2$2charphsNodeph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj109;
struct sNode* __dec_obj110;
struct tuple2$2charphsNodeph* __result264__;
    __dec_obj109=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj110=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); };
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((v2) ? v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
struct sCharNode* __result267__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result268__;
    __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sCharNode")));
    (__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_388;
void* __right_value345 = (void*)0;
char* __dec_obj114;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct sType* __dec_obj115;
_Bool __result269__;
    come_value_388=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 167, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj114=come_value_388->c_value;
    come_value_388->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=come_value_388->type;
    come_value_388->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 170, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj115,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_388->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_388));
    add_come_last_code(info,"%s",come_value_388->c_value);
    __result269__ = (_Bool)1;
    come_call_finalizer3(come_value_388,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result269__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj113;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj113=self->sname;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value348 = (void*)0;
struct sWCharNode* __result270__;
    ((struct sNodeBase*)(__right_value348=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value348,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
char* __result271__;
    __result271__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value349=__builtin_string("sWCharNode")));
    (__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result271__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value352 = (void*)0;
char* __dec_obj117;
void* __right_value353 = (void*)0;
char* __dec_obj118;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sType* __dec_obj119;
_Bool __result272__;
    come_value_389=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 198, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    self->quote) {
        __dec_obj117=come_value_389->c_value;
        come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj118=come_value_389->c_value;
        come_value_389->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj119=come_value_389->type;
    come_value_389->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 206, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj119,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_389->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_389));
    add_come_last_code(info,"%s",come_value_389->c_value);
    __result272__ = (_Bool)1;
    come_call_finalizer3(come_value_389,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj116;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj116=self->sname;
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value356 = (void*)0;
unsigned int* __dec_obj120;
struct sWStringNode* __result273__;
    ((struct sNodeBase*)(__right_value356=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value356,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj120=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    (value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value357=__builtin_string("sWStringNode")));
    (__right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct CVALUE* come_value_390;
void* __right_value360 = (void*)0;
char* __dec_obj123;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sType* __dec_obj124;
_Bool __result275__;
    come_value_390=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 233, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj123=come_value_390->c_value;
    come_value_390->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj124=come_value_390->type;
    come_value_390->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 236, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_390->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_390));
    add_come_last_code(info,"%s",come_value_390->c_value);
    __result275__ = (_Bool)1;
    come_call_finalizer3(come_value_390,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj121;
unsigned int* __dec_obj122;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj121=self->sname;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj122=self->value;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* __dec_obj125;
struct sRegexNode* __result276__;
    ((struct sNodeBase*)(__right_value363=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value363,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    (str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    gComeFunResultObject = (void*)0;
    return __result276__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sRegexNode")));
    (__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value371 = (void*)0;
struct sNode* obj_node_391;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_393;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* node_394;
_Bool Value_395;
_Bool __result280__;
_Bool __result281__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value367=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 265, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_391=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value367,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_393=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 267, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 269, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_391))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 270, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 271, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 272, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 273, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 274, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 275, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 276, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephphp_add(params_393,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 277, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_394=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_391),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_393),((void*)0),info->sline,((void*)0),info));
    Value_395=node_compile(node_394,info);
    if(    !Value_395) {
        __result280__ = (_Bool)0;
        ((obj_node_391) ? obj_node_391 = come_decrement_ref_count2(obj_node_391, ((struct sNode*)obj_node_391)->finalize, ((struct sNode*)obj_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_393,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_394) ? node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        return __result280__;
    }
    else {
    }
    __result281__ = (_Bool)1;
    ((obj_node_391) ? obj_node_391 = come_decrement_ref_count2(obj_node_391, ((struct sNode*)obj_node_391)->finalize, ((struct sNode*)obj_node_391)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(params_393,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_394) ? node_394 = come_decrement_ref_count2(node_394, ((struct sNode*)node_394)->finalize, ((struct sNode*)node_394)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    return __result281__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj126;
char* __dec_obj127;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj126=self->sname;
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj127=self->str;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result278__;
void* __right_value368 = (void*)0;
struct sStrNode* result_392;
void* __right_value369 = (void*)0;
char* __dec_obj128;
void* __right_value370 = (void*)0;
char* __dec_obj129;
struct sStrNode* __result279__;
    if(    self==(void*)0) {
        __result278__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    result_392=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_392->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj128=result_392->sname;
        result_392->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_392->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj129=result_392->value;
        result_392->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_392;
    come_call_finalizer3(result_392,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value410 = (void*)0;
struct list$1sNodeph* __dec_obj130;
struct sListNode* __result282__;
    ((struct sNodeBase*)(__right_value410=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value410,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj130=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
char* __result283__;
    __result283__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value411=__builtin_string("sListNode")));
    (__right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result283__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_396;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1CVALUEph* params_397;
struct sType* list_element_type_400;
int n_401;
struct list$1sNodeph* o2_saved_402;
struct sNode* it_403;
void* __right_value414 = (void*)0;
_Bool _if_conditional1;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sNode* value_node_404;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_405;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* exp_406;
void* __right_value428 = (void*)0;
struct sNode* __dec_obj134;
_Bool Value_407;
_Bool __result285__;
_Bool Value_408;
_Bool __result286__;
void* __right_value429 = (void*)0;
struct CVALUE* come_value_409;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var2 = (void*)0;
_Bool come_exception_var_1_410=0;
char* Err_411=0;
_Bool _if_conditional2;
_Bool __result287__;
void* __right_value432 = (void*)0;
struct sType* __dec_obj136;
void* __right_value433 = (void*)0;
struct sType* type_values_412;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
char* var_name_417;
void* __right_value439 = (void*)0;
struct sVar* var__418;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct buffer* source_419;
int i_420;
struct list$1CVALUEph* o2_saved_421;
struct CVALUE* it_424;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
char* c_value_427;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sType* list_type_431;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sType* obj_type_435;
char* fun_name_436;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var3 = (void*)0;
char* name_437=0;
struct sGenericsFun* generics_fun_438=0;
char* generics_fun_name_439;
void* __right_value456 = (void*)0;
struct sFun* fun_440;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
char* __dec_obj144;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var4 = (void*)0;
int come_exception_var_2_443=0;
char* Err_444=0;
_Bool _if_conditional3;
_Bool __result302__;
void* __right_value461 = (void*)0;
struct sType* result_type_445;
struct sType* type_446;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct CVALUE* obj_value_447;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct buffer* num_string_448;
void* __right_value466 = (void*)0;
struct sType* type2_449;
void* __right_value467 = (void*)0;
char* type_name_450;
struct sType* any_type_451;
void* __right_value468 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var5 = (void*)0;
char* finalizer_name_452=0;
char* cloner_name_453=0;
char* get_hash_key_name_454=0;
char* equaler_name_455=0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* __dec_obj146;
void* __right_value471 = (void*)0;
struct sType* type3_456;
void* __right_value472 = (void*)0;
struct sType* __dec_obj147;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct list$1CVALUEph* come_params_457;
void* __right_value475 = (void*)0;
_Bool _if_conditional4;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct CVALUE* come_value2_461;
void* __right_value479 = (void*)0;
char* __dec_obj148;
struct sType* __dec_obj149;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct CVALUE* come_value3_462;
void* __right_value482 = (void*)0;
char* __dec_obj150;
struct sType* __dec_obj151;
int j_463;
struct list$1CVALUEph* o2_saved_464;
struct CVALUE* it_465;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct CVALUE* come_value4_466;
void* __right_value485 = (void*)0;
char* __dec_obj152;
void* __right_value486 = (void*)0;
struct sType* __dec_obj153;
_Bool __result305__;
    list_elements_396=self->list_elements;
    params_397=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 309, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    list_element_type_400=((void*)0);
    n_401=0;
    for(    o2_saved_402=(list_elements_396),it_403=list$1sNodephp_begin((o2_saved_402));    !list$1sNodephp_end((o2_saved_402));    it_403=list$1sNodephp_next((o2_saved_402))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value414=it_403->kind(it_403->_protocol_obj))),"sWildCard"))),        (__right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional1) {
            value_node_404=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value415=xsprintf("Value"))),info));
            (__right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            params_405=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 317, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1tuple2$2charphsNodephphp_add(params_405,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 318, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_404))));
            list$1tuple2$2charphsNodephphp_add(params_405,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 319, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_401,info)))));
            exp_406=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value426=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_404),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_405),((void*)0),0,((void*)0),info));
            (__right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj134=exp_406;
            exp_406=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_406,info));
            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
            Value_407=node_compile(exp_406,info);
            if(            !Value_407) {
                __result285__ = (_Bool)0;
                ((value_node_404) ? value_node_404 = come_decrement_ref_count2(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(params_405,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                ((exp_406) ? exp_406 = come_decrement_ref_count2(exp_406, ((struct sNode*)exp_406)->finalize, ((struct sNode*)exp_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result285__;
            }
            else {
            }
            ((value_node_404) ? value_node_404 = come_decrement_ref_count2(value_node_404, ((struct sNode*)value_node_404)->finalize, ((struct sNode*)value_node_404)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(params_405,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            ((exp_406) ? exp_406 = come_decrement_ref_count2(exp_406, ((struct sNode*)exp_406)->finalize, ((struct sNode*)exp_406)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            Value_408=node_compile(it_403,info);
            if(            !Value_408) {
                __result286__ = (_Bool)0;
                come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result286__;
            }
            else {
            }
        }
        come_value_409=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_400) {
            multiple_assign_var2=((struct tuple2$2boolcharph*)(__right_value431=check_assign_type(((char*)(__right_value430=xsprintf("invalid list element type"))),list_element_type_400,come_value_409->type,come_value_409,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_1_410=multiple_assign_var2->v1;
            Err_411=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            if(            (_if_conditional2=(Err_411)),            (__right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value431,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional2) {
                __result287__ = (_Bool)1;
                (Err_411 = come_decrement_ref_count2(Err_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_409,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result287__;
            }
            else {
            }
            (Err_411 = come_decrement_ref_count2(Err_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1CVALUEphp_push_back(params_397,(struct CVALUE*)come_increment_ref_count(come_value_409));
        __dec_obj136=list_element_type_400;
        list_element_type_400=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_409->type));
        come_call_finalizer3(__dec_obj136,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        n_401++;
        come_call_finalizer3(come_value_409,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_412=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_element_type_400));
    list$1sNodephp_push_back(type_values_412->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(params_397),info)));
    type_values_412->mHeap=(_Bool)0;
    static int list_value_num_416=0;
    var_name_417=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_416));
    add_variable_to_table(var_name_417,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_values_412)),info,(_Bool)0);
    var__418=get_variable_from_table(info->lv_table,var_name_417);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value440=make_define_var(type_values_412,var__418->mCValueName,(_Bool)0,info))));
    (__right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_419=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 362, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_419,"(");
    i_420=0;
    for(    o2_saved_421=(struct list$1CVALUEph*)come_increment_ref_count((params_397)),it_424=list$1CVALUEphp_begin((o2_saved_421));    !list$1CVALUEphp_end((o2_saved_421));    it_424=list$1CVALUEphp_next((o2_saved_421))    ){
        if(        list_element_type_400->mHeap) {
            c_value_427=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)(__right_value443=list$1CVALUEphp_operator_load_element(params_397,i_420)))->type,((struct CVALUE*)(__right_value444=list$1CVALUEphp_operator_load_element(params_397,i_420)))->c_value,info));
            come_call_finalizer3(__right_value443,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(__right_value444,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
            buffer_append_format(source_419,"%s[%d]=%s,\n",var__418->mCValueName,i_420,c_value_427);
            (c_value_427 = come_decrement_ref_count2(c_value_427, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(source_419,"%s[%d]=%s,\n",var__418->mCValueName,i_420,((struct CVALUE*)(__right_value446=list$1CVALUEphp_operator_load_element(params_397,i_420)))->c_value);
            come_call_finalizer3(__right_value446,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        }
        i_420++;
    }
    come_call_finalizer3(o2_saved_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_431=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"list",(_Bool)0,info));
    list$1voidphp_push_back(list_type_431->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value452=come_call_cloner(sType_clone, list_element_type_400))))));
    come_call_finalizer3(__right_value452,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_435=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, list_type_431));
    fun_name_436="initialize_with_values";
    multiple_assign_var3=((struct tuple2$2charphsGenericsFunp*)(__right_value455=make_generics_function(obj_type_435,(char*)come_increment_ref_count(__builtin_string(fun_name_436)),info,(_Bool)1)));
    name_437=(char*)come_increment_ref_count(multiple_assign_var3->v1);
    generics_fun_438=multiple_assign_var3->v2;
    come_call_finalizer3(__right_value455,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_439=(char*)come_increment_ref_count(name_437);
    fun_440=((struct sFun*)((void*)(__right_value456=map$2voidphvoidphp_at(info->funcs,generics_fun_name_439,((void*)0)))));
    come_call_finalizer3(__right_value456,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_440==((void*)0)) {
        __dec_obj144=generics_fun_name_439;
        generics_fun_name_439=(char*)come_increment_ref_count(create_method_name(obj_type_435,(_Bool)0,((char*)(__right_value457=__builtin_string(fun_name_436))),info,(_Bool)1));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_440=((struct sFun*)((void*)(__right_value459=map$2voidphvoidphp_at(info->funcs,generics_fun_name_439,((void*)0)))));
        come_call_finalizer3(__right_value459,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_440==((void*)0)) {
            multiple_assign_var4=((struct tuple2$2intcharph*)(__right_value460=err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_439,info->come_fun->mName)));
            come_exception_var_2_443=multiple_assign_var4->v1;
            Err_444=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            if(            (_if_conditional3=(Err_444)),            come_call_finalizer3(__right_value460,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional3) {
                __result302__ = (_Bool)1;
                (Err_444 = come_decrement_ref_count2(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_values_412,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_417 = come_decrement_ref_count2(var_name_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_419,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_435,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_437 = come_decrement_ref_count2(name_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_439 = come_decrement_ref_count2(generics_fun_name_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result302__;
            }
            else {
            }
            (Err_444 = come_decrement_ref_count2(Err_444, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_445=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_440->mResultType));
    result_type_445->mStatic=(_Bool)0;
    type_446=list_type_431;
    obj_value_447=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 410, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_448=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 412, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_448,"1");
    type2_449=(struct sType*)come_increment_ref_count(solve_generics(type_446,type_446,info));
    type_name_450=(char*)come_increment_ref_count(make_type_name_string(type2_449,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_451=(struct sType*)come_increment_ref_count(type2_449);
    any_type_451->mPointerNum=1;
    any_type_451->mHeap=(_Bool)1;
    multiple_assign_var5=((struct tuple4$4charphcharphcharphcharph*)(__right_value468=create_vtable((struct sType*)come_increment_ref_count(any_type_451),info)));
    finalizer_name_452=(char*)come_increment_ref_count(multiple_assign_var5->v1);
    cloner_name_453=(char*)come_increment_ref_count(multiple_assign_var5->v2);
    get_hash_key_name_454=(char*)come_increment_ref_count(multiple_assign_var5->v3);
    equaler_name_455=(char*)come_increment_ref_count(multiple_assign_var5->v4);
    come_call_finalizer3(__right_value468,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj146=obj_value_447->c_value;
    obj_value_447->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_450,type_name_450,((char*)(__right_value469=buffer_to_string(num_string_448))),info->sname,info->sline,type_name_450,finalizer_name_452,cloner_name_453,get_hash_key_name_454,equaler_name_455));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_456=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_449));
    type3_456->mPointerNum++;
    type3_456->mHeap=(_Bool)1;
    type2_449->mHeap=(_Bool)1;
    __dec_obj147=obj_value_447->type;
    obj_value_447->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_449));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_447->type->mPointerNum++;
    obj_value_447->var=((void*)0);
    append_object_to_right_values2(obj_value_447,(struct sType*)come_increment_ref_count(type3_456),info,(_Bool)0);
    come_params_457=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 438, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional4=(((struct sType*)((void*)(__right_value475=list$1voidphp_operator_load_element(fun_440->mParamTypes,0))))->mHeap&&obj_value_447->type->mHeap)),    come_call_finalizer3(__right_value475,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional4) {
        std_move(((struct sType*)((void*)(__right_value476=list$1voidphp_operator_load_element(fun_440->mParamTypes,0)))),obj_value_447->type,obj_value_447,info,(_Bool)1);
        come_call_finalizer3(__right_value476,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_457,(struct CVALUE*)come_increment_ref_count(obj_value_447));
    come_value2_461=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 445, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj148=come_value2_461->c_value;
    come_value2_461->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(params_397)));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj149=come_value2_461->type;
    come_value2_461->type=((void*)0);
    come_call_finalizer3(__dec_obj149,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_461->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_457,(struct CVALUE*)come_increment_ref_count(come_value2_461));
    come_value3_462=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 453, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj150=come_value3_462->c_value;
    come_value3_462->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__418->mCValueName));
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj151=come_value3_462->type;
    come_value3_462->type=((void*)0);
    come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_462->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_457,(struct CVALUE*)come_increment_ref_count(come_value3_462));
    buffer_append_str(source_419,generics_fun_name_439);
    buffer_append_str(source_419,"(");
    j_463=0;
    for(    o2_saved_464=(struct list$1CVALUEph*)come_increment_ref_count((come_params_457)),it_465=list$1CVALUEphp_begin((o2_saved_464));    !list$1CVALUEphp_end((o2_saved_464));    it_465=list$1CVALUEphp_next((o2_saved_464))    ){
        buffer_append_str(source_419,it_465->c_value);
        if(        j_463!=list$1CVALUEphp_length(come_params_457)-1) {
            buffer_append_str(source_419,",");
        }
        j_463++;
    }
    come_call_finalizer3(o2_saved_464,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_419,")");
    buffer_append_str(source_419,")");
    come_value4_466=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 479, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj152=come_value4_466->c_value;
    come_value4_466->c_value=(char*)come_increment_ref_count(buffer_to_string(source_419));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=come_value4_466->type;
    come_value4_466->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_445));
    come_call_finalizer3(__dec_obj153,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_466->type->mStatic=(_Bool)0;
    come_value4_466->var=((void*)0);
    if(    result_type_445->mHeap) {
        append_object_to_right_values2(come_value4_466,(struct sType*)come_increment_ref_count(result_type_445),info,(_Bool)0);
    }
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_466));
    add_come_last_code(info,"%s",come_value4_466->c_value);
    __result305__ = (_Bool)1;
    come_call_finalizer3(params_397,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_element_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_values_412,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_417 = come_decrement_ref_count2(var_name_417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_419,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(list_type_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_435,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_437 = come_decrement_ref_count2(name_437, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_439 = come_decrement_ref_count2(generics_fun_name_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_445,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_447,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_448,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_450 = come_decrement_ref_count2(type_name_450, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_451,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_452 = come_decrement_ref_count2(finalizer_name_452, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_453 = come_decrement_ref_count2(cloner_name_453, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_454 = come_decrement_ref_count2(get_hash_key_name_454, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_455 = come_decrement_ref_count2(equaler_name_455, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_456,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_457,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_462,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_466,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result305__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj131;
struct list$1sNodeph* __dec_obj132;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj131=self->sname;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj132=self->list_elements;
            come_call_finalizer3(__dec_obj132,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result284__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_398;
struct list_item$1CVALUEph* prev_it_399;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        come_call_finalizer3(prev_it_399,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj133;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj133=self->item;
            come_call_finalizer3(__dec_obj133,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2boolcharphp_finalize(struct tuple2$2boolcharph* self){
char* __dec_obj135;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj135=self->v2;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value434 = (void*)0;
struct list_item$1sNodeph* litem_413;
struct sNode* __dec_obj137;
void* __right_value435 = (void*)0;
struct list_item$1sNodeph* litem_414;
struct sNode* __dec_obj138;
void* __right_value436 = (void*)0;
struct list_item$1sNodeph* litem_415;
struct sNode* __dec_obj139;
struct list$1sNodeph* __result288__;
    if(    self->len==0) {
        litem_413=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value434=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_413->prev=((void*)0);
        litem_413->next=((void*)0);
        __dec_obj137=litem_413->item;
        litem_413->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_413;
        self->head=litem_413;
    }
    else if(    self->len==1) {
        litem_414=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value435=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_414->prev=self->head;
        litem_414->next=((void*)0);
        __dec_obj138=litem_414->item;
        litem_414->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_414;
        self->head->next=litem_414;
    }
    else {
        litem_415=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value436=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_415->prev=self->tail;
        litem_415->next=((void*)0);
        __dec_obj139=litem_415->item;
        litem_415->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_415;
        self->tail=litem_415;
    }
    self->len++;
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_422;
struct CVALUE* __result289__;
struct CVALUE* __result290__;
struct CVALUE* result_423;
struct CVALUE* __result291__;
result_422 = (void*)0;
result_423 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_422,0,sizeof(struct CVALUE*));
        __result289__ = gComeFunResultObject = __result_obj__ = result_422;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    self->it=self->head;
    if(    self->it) {
        __result290__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    memset(&result_423,0,sizeof(struct CVALUE*));
    __result291__ = gComeFunResultObject = __result_obj__ = result_423;
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_425;
struct CVALUE* __result292__;
struct CVALUE* __result293__;
struct CVALUE* result_426;
struct CVALUE* __result294__;
result_425 = (void*)0;
result_426 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_425,0,sizeof(struct CVALUE*));
        __result292__ = gComeFunResultObject = __result_obj__ = result_425;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result293__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result293__;
    }
    memset(&result_426,0,sizeof(struct CVALUE*));
    __result294__ = gComeFunResultObject = __result_obj__ = result_426;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_428;
int i_429;
struct CVALUE* __result295__;
struct CVALUE* default_value_430;
struct CVALUE* __result296__;
default_value_430 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_428=self->head;
    i_429=0;
    while(it_428!=((void*)0)) {
        if(        position==i_429) {
            __result295__ = gComeFunResultObject = __result_obj__ = it_428->item;
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
        it_428=it_428->next;
        i_429++;
    }
    memset(&default_value_430,0,sizeof(struct CVALUE*));
    __result296__ = gComeFunResultObject = __result_obj__ = default_value_430;
    come_call_finalizer3(default_value_430,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value449 = (void*)0;
struct list_item$1voidph* litem_432;
void* __dec_obj140;
void* __right_value450 = (void*)0;
struct list_item$1voidph* litem_433;
void* __dec_obj141;
void* __right_value451 = (void*)0;
struct list_item$1voidph* litem_434;
void* __dec_obj142;
struct list$1voidph* __result297__;
    if(    self->len==0) {
        litem_432=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value449=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1452, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_432->prev=((void*)0);
        litem_432->next=((void*)0);
        __dec_obj140=litem_432->item;
        litem_432->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj140,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_432;
        self->head=litem_432;
    }
    else if(    self->len==1) {
        litem_433=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value450=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1462, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_433->prev=self->head;
        litem_433->next=((void*)0);
        __dec_obj141=litem_433->item;
        litem_433->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj141,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail=litem_433;
        self->head->next=litem_433;
    }
    else {
        litem_434=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value451=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1472, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_434->prev=self->tail;
        litem_434->next=((void*)0);
        __dec_obj142=litem_434->item;
        litem_434->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj142,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0);
        self->tail->next=litem_434;
        self->tail=litem_434;
    }
    self->len++;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj143;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj143=self->v1;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_441;
unsigned int it_442;
void* __result298__;
void* __result299__;
void* __result300__;
void* __result301__;
    hash_441=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_442=hash_441;
    while((_Bool)1) {
        if(        self->item_existance[it_442]) {
            if(            come_call_equals((void*)0, self->keys[it_442], key)) {
                __result298__ = gComeFunResultObject = __result_obj__ = self->items[it_442];
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result298__;
            }
            it_442++;
            if(            it_442>=self->size) {
                it_442=0;
            }
            else if(            it_442==hash_441) {
                __result299__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result299__;
            }
        }
        else {
            __result300__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result300__;
        }
    }
    __result301__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static void tuple2$2intcharphp_finalize(struct tuple2$2intcharph* self){
char* __dec_obj145;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj145=self->v2;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_458;
int i_459;
void* __result303__;
void* default_value_460;
void* __result304__;
default_value_460 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_458=self->head;
    i_459=0;
    while(it_458!=((void*)0)) {
        if(        position==i_459) {
            __result303__ = gComeFunResultObject = __result_obj__ = it_458->item;
            gComeFunResultObject = (void*)0;
            return __result303__;
        }
        it_458=it_458->next;
        i_459++;
    }
    memset(&default_value_460,0,sizeof(void*));
    __result304__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_460);
    come_call_finalizer3(default_value_460,(void*)0, 0/*alloca value*/, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_ */, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value487 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj154;
struct sTupleNode* __result306__;
    ((struct sNodeBase*)(__right_value487=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value487,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj154=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj154,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result306__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value488 = (void*)0;
char* __result307__;
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value488=__builtin_string("sTupleNode")));
    (__right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_469;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1voidph* tuple_types_470;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1CVALUEph* tuple_values_471;
int n_472;
struct list$1tuple2$2charphsNodephph* o2_saved_473;
struct tuple2$2charphsNodeph* it_476;
struct tuple2$2charphsNodeph* multiple_assign_var6 = (void*)0;
char* name_479=0;
struct sNode* node_480=0;
void* __right_value493 = (void*)0;
_Bool _if_conditional5;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* value_node_481;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* exp_482;
_Bool Value_483;
_Bool __result314__;
_Bool Value_484;
_Bool __result315__;
void* __right_value498 = (void*)0;
struct CVALUE* come_value_485;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* type_487;
char* __dec_obj161;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sType* type_488;
struct list$1voidph* o2_saved_489;
struct sType* it_492;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct CVALUE* obj_value_495;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct buffer* num_string_496;
void* __right_value514 = (void*)0;
struct sType* type2_497;
void* __right_value515 = (void*)0;
char* type_name_498;
struct sType* any_type_499;
void* __right_value516 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var7 = (void*)0;
char* finalizer_name_500=0;
char* cloner_name_501=0;
char* get_hash_key_name_502=0;
char* equaler_name_503=0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* __dec_obj162;
void* __right_value519 = (void*)0;
struct sType* type3_504;
void* __right_value520 = (void*)0;
struct sType* __dec_obj163;
void* __right_value521 = (void*)0;
struct sType* obj_type_505;
char* fun_name_506;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_507=0;
struct sGenericsFun* generics_fun_508=0;
char* generics_fun_name_509;
void* __right_value524 = (void*)0;
struct sFun* fun_510;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* __dec_obj164;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var9 = (void*)0;
int come_exception_var_3_511=0;
char* Err_512=0;
_Bool _if_conditional6;
_Bool __result324__;
void* __right_value529 = (void*)0;
struct sType* result_type_513;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct list$1CVALUEph* come_params_514;
void* __right_value532 = (void*)0;
_Bool _if_conditional7;
void* __right_value533 = (void*)0;
int i_515;
struct list$1CVALUEph* o2_saved_516;
struct CVALUE* it_517;
void* __right_value534 = (void*)0;
struct CVALUE* come_value_518;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
_Bool _if_conditional8;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct buffer* buf_519;
int j_520;
struct list$1CVALUEph* o2_saved_521;
struct CVALUE* it_522;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct CVALUE* come_value2_523;
void* __right_value542 = (void*)0;
char* __dec_obj165;
void* __right_value543 = (void*)0;
struct sType* __dec_obj166;
_Bool __result325__;
    tuple_elements_469=self->tuple_elements;
    tuple_types_470=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 516, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_471=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 517, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    n_472=0;
    for(    o2_saved_473=(tuple_elements_469),it_476=list$1tuple2$2charphsNodephphp_begin((o2_saved_473));    !list$1tuple2$2charphsNodephphp_end((o2_saved_473));    it_476=list$1tuple2$2charphsNodephphp_next((o2_saved_473))    ){
        multiple_assign_var6=it_476;
        name_479=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        node_480=(struct sNode*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        (_if_conditional5=(string_operator_equals(((char*)(__right_value493=node_480->kind(node_480->_protocol_obj))),"sWildCard"))),        (__right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional5) {
            value_node_481=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value494=xsprintf("Value"))),info));
            (__right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            exp_482=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_481),(char*)come_increment_ref_count(xsprintf("v%d",n_472+1)),info));
            Value_483=node_compile(exp_482,info);
            if(            !Value_483) {
                __result314__ = (_Bool)0;
                ((value_node_481) ? value_node_481 = come_decrement_ref_count2(value_node_481, ((struct sNode*)value_node_481)->finalize, ((struct sNode*)value_node_481)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((exp_482) ? exp_482 = come_decrement_ref_count2(exp_482, ((struct sNode*)exp_482)->finalize, ((struct sNode*)exp_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                (name_479 = come_decrement_ref_count2(name_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_480) ? node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(tuple_types_470,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_471,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result314__;
            }
            else {
            }
            ((value_node_481) ? value_node_481 = come_decrement_ref_count2(value_node_481, ((struct sNode*)value_node_481)->finalize, ((struct sNode*)value_node_481)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp_482) ? exp_482 = come_decrement_ref_count2(exp_482, ((struct sNode*)exp_482)->finalize, ((struct sNode*)exp_482)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else {
            Value_484=node_compile(node_480,info);
            if(            !Value_484) {
                __result315__ = (_Bool)0;
                (name_479 = come_decrement_ref_count2(name_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((node_480) ? node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(tuple_types_470,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_471,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result315__;
            }
            else {
            }
        }
        come_value_485=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_471,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_485)));
        type_487=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_485->type));
        __dec_obj161=type_487->mTupleName;
        type_487->mTupleName=(char*)come_increment_ref_count(name_479);
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1voidphp_push_back(tuple_types_470,(struct sType*)come_increment_ref_count(type_487));
        n_472++;
        (name_479 = come_decrement_ref_count2(name_479, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_480) ? node_480 = come_decrement_ref_count2(node_480, ((struct sNode*)node_480)->finalize, ((struct sNode*)node_480)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(come_value_485,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_488=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 547, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value507=xsprintf("tuple%d",list$1voidphp_length(tuple_types_470)))),(_Bool)0,info));
    (__right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_489=(struct list$1voidph*)come_increment_ref_count((tuple_types_470)),it_492=((struct sType*)list$1voidphp_begin((o2_saved_489)));    !list$1voidphp_end((o2_saved_489));    it_492=((struct sType*)list$1voidphp_next((o2_saved_489)))    ){
        list$1voidphp_push_back(type_488->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value509=come_call_cloner(sType_clone, it_492))))));
        come_call_finalizer3(__right_value509,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_489,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_495=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 553, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_496=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 555, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_496,"1");
    type2_497=(struct sType*)come_increment_ref_count(solve_generics(type_488,type_488,info));
    type_name_498=(char*)come_increment_ref_count(make_type_name_string(type2_497,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_499=(struct sType*)come_increment_ref_count(type2_497);
    any_type_499->mPointerNum=1;
    any_type_499->mHeap=(_Bool)1;
    multiple_assign_var7=((struct tuple4$4charphcharphcharphcharph*)(__right_value516=create_vtable((struct sType*)come_increment_ref_count(any_type_499),info)));
    finalizer_name_500=(char*)come_increment_ref_count(multiple_assign_var7->v1);
    cloner_name_501=(char*)come_increment_ref_count(multiple_assign_var7->v2);
    get_hash_key_name_502=(char*)come_increment_ref_count(multiple_assign_var7->v3);
    equaler_name_503=(char*)come_increment_ref_count(multiple_assign_var7->v4);
    come_call_finalizer3(__right_value516,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj162=obj_value_495->c_value;
    obj_value_495->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_498,type_name_498,((char*)(__right_value517=buffer_to_string(num_string_496))),info->sname,info->sline,type_name_498,finalizer_name_500,cloner_name_501,get_hash_key_name_502,equaler_name_503));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_504=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_497));
    type3_504->mPointerNum++;
    type3_504->mHeap=(_Bool)1;
    type2_497->mHeap=(_Bool)1;
    __dec_obj163=obj_value_495->type;
    obj_value_495->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_497));
    come_call_finalizer3(__dec_obj163,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_495->type->mPointerNum++;
    obj_value_495->var=((void*)0);
    append_object_to_right_values2(obj_value_495,(struct sType*)come_increment_ref_count(type3_504),info,(_Bool)0);
    obj_type_505=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_497));
    fun_name_506="initialize";
    multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value523=make_generics_function(obj_type_505,(char*)come_increment_ref_count(__builtin_string(fun_name_506)),info,(_Bool)1)));
    name_507=(char*)come_increment_ref_count(multiple_assign_var8->v1);
    generics_fun_508=multiple_assign_var8->v2;
    come_call_finalizer3(__right_value523,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_509=(char*)come_increment_ref_count(name_507);
    fun_510=((struct sFun*)((void*)(__right_value524=map$2voidphvoidphp_at(info->funcs,generics_fun_name_509,((void*)0)))));
    come_call_finalizer3(__right_value524,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_510==((void*)0)) {
        __dec_obj164=generics_fun_name_509;
        generics_fun_name_509=(char*)come_increment_ref_count(create_method_name(obj_type_505,(_Bool)0,((char*)(__right_value525=__builtin_string(fun_name_506))),info,(_Bool)1));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value525 = come_decrement_ref_count2(__right_value525, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_510=((struct sFun*)((void*)(__right_value527=map$2voidphvoidphp_at(info->funcs,generics_fun_name_509,((void*)0)))));
        come_call_finalizer3(__right_value527,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_510==((void*)0)) {
            multiple_assign_var9=((struct tuple2$2intcharph*)(__right_value528=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_509,info->come_fun->mName)));
            come_exception_var_3_511=multiple_assign_var9->v1;
            Err_512=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            if(            (_if_conditional6=(Err_512)),            come_call_finalizer3(__right_value528,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional6) {
                __result324__ = (_Bool)1;
                (Err_512 = come_decrement_ref_count2(Err_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_470,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_471,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_488,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_497,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_498 = come_decrement_ref_count2(type_name_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(any_type_499,sType_finalize, 0, 0, 0, 0, (void*)0);
                (finalizer_name_500 = come_decrement_ref_count2(finalizer_name_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_501 = come_decrement_ref_count2(cloner_name_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_502 = come_decrement_ref_count2(get_hash_key_name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_503 = come_decrement_ref_count2(equaler_name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_504,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_507 = come_decrement_ref_count2(name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_509 = come_decrement_ref_count2(generics_fun_name_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result324__;
            }
            else {
            }
            (Err_512 = come_decrement_ref_count2(Err_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_513=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_510->mResultType));
    result_type_513->mStatic=(_Bool)0;
    come_params_514=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 604, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional7=(((struct sType*)((void*)(__right_value532=list$1voidphp_operator_load_element(fun_510->mParamTypes,0))))->mHeap&&obj_value_495->type->mHeap)),    come_call_finalizer3(__right_value532,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional7) {
        std_move(((struct sType*)((void*)(__right_value533=list$1voidphp_operator_load_element(fun_510->mParamTypes,0)))),obj_value_495->type,obj_value_495,info,(_Bool)1);
        come_call_finalizer3(__right_value533,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_514,(struct CVALUE*)come_increment_ref_count(obj_value_495));
    i_515=1;
    for(    o2_saved_516=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_471)),it_517=list$1CVALUEphp_begin((o2_saved_516));    !list$1CVALUEphp_end((o2_saved_516));    it_517=list$1CVALUEphp_next((o2_saved_516))    ){
        come_value_518=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_517));
        if(        (_if_conditional8=(((struct sType*)((void*)(__right_value535=list$1voidphp_operator_load_element(fun_510->mParamTypes,i_515))))&&((struct sType*)((void*)(__right_value536=list$1voidphp_operator_load_element(fun_510->mParamTypes,i_515))))->mHeap&&come_value_518->type->mHeap)),        come_call_finalizer3(__right_value535,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value536,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional8) {
            std_move(((struct sType*)((void*)(__right_value537=list$1voidphp_operator_load_element(fun_510->mParamTypes,i_515)))),come_value_518->type,come_value_518,info,(_Bool)1);
            come_call_finalizer3(__right_value537,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_514,(struct CVALUE*)come_increment_ref_count(come_value_518));
        i_515++;
        come_call_finalizer3(come_value_518,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_519=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 623, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_519,generics_fun_name_509);
    buffer_append_str(buf_519,"(");
    j_520=0;
    for(    o2_saved_521=(struct list$1CVALUEph*)come_increment_ref_count((come_params_514)),it_522=list$1CVALUEphp_begin((o2_saved_521));    !list$1CVALUEphp_end((o2_saved_521));    it_522=list$1CVALUEphp_next((o2_saved_521))    ){
        buffer_append_str(buf_519,it_522->c_value);
        if(        j_520!=list$1CVALUEphp_length(come_params_514)-1) {
            buffer_append_str(buf_519,",");
        }
        j_520++;
    }
    come_call_finalizer3(o2_saved_521,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_519,")");
    come_value2_523=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 640, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj165=come_value2_523->c_value;
    come_value2_523->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_519));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj166=come_value2_523->type;
    come_value2_523->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_513));
    come_call_finalizer3(__dec_obj166,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_523->type->mStatic=(_Bool)0;
    come_value2_523->var=((void*)0);
    if(    result_type_513->mHeap) {
        append_object_to_right_values2(come_value2_523,(struct sType*)come_increment_ref_count(result_type_513),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_523->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_523));
    __result325__ = (_Bool)1;
    come_call_finalizer3(tuple_types_470,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_471,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_488,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_495,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_496,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_497,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_498 = come_decrement_ref_count2(type_name_498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_499,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_500 = come_decrement_ref_count2(finalizer_name_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_501 = come_decrement_ref_count2(cloner_name_501, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_502 = come_decrement_ref_count2(get_hash_key_name_502, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_503 = come_decrement_ref_count2(equaler_name_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_504,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_505,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_507 = come_decrement_ref_count2(name_507, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_509 = come_decrement_ref_count2(generics_fun_name_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_514,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_519,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_523,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result325__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_467;
struct list_item$1tuple2$2charphsNodephph* prev_it_468;
    it_467=self->head;
    while(it_467!=((void*)0)) {
        prev_it_468=it_467;
        it_467=it_467->next;
        come_call_finalizer3(prev_it_468,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj155;
struct list$1tuple2$2charphsNodephph* __dec_obj156;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj155=self->sname;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj156=self->tuple_elements;
            come_call_finalizer3(__dec_obj156,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_474;
struct tuple2$2charphsNodeph* __result308__;
struct tuple2$2charphsNodeph* __result309__;
struct tuple2$2charphsNodeph* result_475;
struct tuple2$2charphsNodeph* __result310__;
result_474 = (void*)0;
result_475 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_474,0,sizeof(struct tuple2$2charphsNodeph*));
        __result308__ = gComeFunResultObject = __result_obj__ = result_474;
        gComeFunResultObject = (void*)0;
        return __result308__;
    }
    self->it=self->head;
    if(    self->it) {
        __result309__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    memset(&result_475,0,sizeof(struct tuple2$2charphsNodeph*));
    __result310__ = gComeFunResultObject = __result_obj__ = result_475;
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_477;
struct tuple2$2charphsNodeph* __result311__;
struct tuple2$2charphsNodeph* __result312__;
struct tuple2$2charphsNodeph* result_478;
struct tuple2$2charphsNodeph* __result313__;
result_477 = (void*)0;
result_478 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_477,0,sizeof(struct tuple2$2charphsNodeph*));
        __result311__ = gComeFunResultObject = __result_obj__ = result_477;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result312__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    memset(&result_478,0,sizeof(struct tuple2$2charphsNodeph*));
    __result313__ = gComeFunResultObject = __result_obj__ = result_478;
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result316__;
void* __right_value499 = (void*)0;
struct CVALUE* result_486;
void* __right_value500 = (void*)0;
char* __dec_obj157;
void* __right_value501 = (void*)0;
struct sType* __dec_obj158;
void* __right_value502 = (void*)0;
char* __dec_obj159;
void* __right_value503 = (void*)0;
char* __dec_obj160;
struct CVALUE* __result317__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_486=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj157=result_486->c_value;
        result_486->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj158=result_486->type;
        result_486->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj158,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_486->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_486->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj159=result_486->c_value_without_right_value_objects;
        result_486->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj160=result_486->c_value_without_cast_object_value;
        result_486->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result317__ = gComeFunResultObject = __result_obj__ = result_486;
    come_call_finalizer3(result_486,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_490;
void* __result318__;
void* __result319__;
void* result_491;
void* __result320__;
result_490 = (void*)0;
result_491 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_490,0,sizeof(void*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_490;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->head;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_491,0,sizeof(void*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_491;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_493;
void* __result321__;
void* __result322__;
void* result_494;
void* __result323__;
result_493 = (void*)0;
result_494 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_493,0,sizeof(void*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_493;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_494,0,sizeof(void*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_494;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value544 = (void*)0;
struct list$1sNodeph* __dec_obj167;
struct sSomeNode* __result326__;
    ((struct sNodeBase*)(__right_value544=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value544,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj167=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj167,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value545 = (void*)0;
char* __result327__;
    __result327__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value545=__builtin_string("sSomeNode")));
    (__right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result327__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_524;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct list$1voidph* tuple_types_525;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1CVALUEph* tuple_values_526;
struct list$1sNodeph* o2_saved_527;
struct sNode* it_528;
_Bool Value_529;
_Bool __result328__;
void* __right_value550 = (void*)0;
struct CVALUE* come_value_530;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sType* type_531;
struct list$1voidph* o2_saved_532;
struct sType* it_533;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct CVALUE* obj_value_534;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct buffer* num_string_535;
void* __right_value561 = (void*)0;
struct sType* type2_536;
void* __right_value562 = (void*)0;
char* type_name_537;
void* __right_value563 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var10 = (void*)0;
char* finalizer_name_538=0;
char* cloner_name_539=0;
char* get_hash_key_name_540=0;
char* equaler_name_541=0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
char* __dec_obj170;
void* __right_value566 = (void*)0;
struct sType* type3_542;
void* __right_value567 = (void*)0;
struct sType* __dec_obj171;
void* __right_value568 = (void*)0;
struct sType* obj_type_543;
char* fun_name_544;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var11 = (void*)0;
char* name_545=0;
struct sGenericsFun* generics_fun_546=0;
char* generics_fun_name_547;
void* __right_value571 = (void*)0;
struct sFun* fun_548;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
char* __dec_obj172;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var12 = (void*)0;
int come_exception_var_4_549=0;
char* Err_550=0;
_Bool _if_conditional9;
_Bool __result329__;
void* __right_value576 = (void*)0;
struct sType* result_type_551;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1CVALUEph* come_params_552;
void* __right_value579 = (void*)0;
_Bool _if_conditional10;
void* __right_value580 = (void*)0;
int i_553;
struct list$1CVALUEph* o2_saved_554;
struct CVALUE* it_555;
void* __right_value581 = (void*)0;
struct CVALUE* come_value_556;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
_Bool _if_conditional11;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct buffer* buf_557;
int j_558;
struct list$1CVALUEph* o2_saved_559;
struct CVALUE* it_560;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct CVALUE* come_value2_561;
void* __right_value589 = (void*)0;
char* __dec_obj173;
void* __right_value590 = (void*)0;
struct sType* __dec_obj174;
_Bool __result330__;
    tuple_elements_524=self->tuple_elements;
    tuple_types_525=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 677, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_526=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 678, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_527=(tuple_elements_524),it_528=list$1sNodephp_begin((o2_saved_527));    !list$1sNodephp_end((o2_saved_527));    it_528=list$1sNodephp_next((o2_saved_527))    ){
        Value_529=node_compile(it_528,info);
        if(        !Value_529) {
            __result328__ = (_Bool)0;
            come_call_finalizer3(tuple_types_525,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_526,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result328__;
        }
        else {
        }
        come_value_530=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_526,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_530)));
        list$1voidphp_push_back(tuple_types_525,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_530->type)));
        come_call_finalizer3(come_value_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_531=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 692, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value554=xsprintf("tuple%d",list$1voidphp_length(tuple_types_525)))),(_Bool)0,info));
    (__right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_532=(struct list$1voidph*)come_increment_ref_count((tuple_types_525)),it_533=((struct sType*)list$1voidphp_begin((o2_saved_532)));    !list$1voidphp_end((o2_saved_532));    it_533=((struct sType*)list$1voidphp_next((o2_saved_532)))    ){
        list$1voidphp_push_back(type_531->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value556=come_call_cloner(sType_clone, it_533))))));
        come_call_finalizer3(__right_value556,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_532,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_534=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 698, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_535=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 700, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_535,"1");
    type2_536=(struct sType*)come_increment_ref_count(solve_generics(type_531,type_531,info));
    type_name_537=(char*)come_increment_ref_count(make_type_name_string(type2_536,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var10=((struct tuple4$4charphcharphcharphcharph*)(__right_value563=create_vtable((struct sType*)come_increment_ref_count(type2_536),info)));
    finalizer_name_538=(char*)come_increment_ref_count(multiple_assign_var10->v1);
    cloner_name_539=(char*)come_increment_ref_count(multiple_assign_var10->v2);
    get_hash_key_name_540=(char*)come_increment_ref_count(multiple_assign_var10->v3);
    equaler_name_541=(char*)come_increment_ref_count(multiple_assign_var10->v4);
    come_call_finalizer3(__right_value563,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj170=obj_value_534->c_value;
    obj_value_534->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_537,type_name_537,((char*)(__right_value564=buffer_to_string(num_string_535))),info->sname,info->sline,type_name_537));
    __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_542=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_536));
    type3_542->mPointerNum++;
    type3_542->mHeap=(_Bool)1;
    type2_536->mHeap=(_Bool)1;
    __dec_obj171=obj_value_534->type;
    obj_value_534->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_536));
    come_call_finalizer3(__dec_obj171,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_534->type->mPointerNum++;
    obj_value_534->var=((void*)0);
    append_object_to_right_values2(obj_value_534,(struct sType*)come_increment_ref_count(type3_542),info,(_Bool)0);
    obj_type_543=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_536));
    fun_name_544="initialize";
    multiple_assign_var11=((struct tuple2$2charphsGenericsFunp*)(__right_value570=make_generics_function(obj_type_543,(char*)come_increment_ref_count(__builtin_string(fun_name_544)),info,(_Bool)1)));
    name_545=(char*)come_increment_ref_count(multiple_assign_var11->v1);
    generics_fun_546=multiple_assign_var11->v2;
    come_call_finalizer3(__right_value570,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_547=(char*)come_increment_ref_count(name_545);
    fun_548=((struct sFun*)((void*)(__right_value571=map$2voidphvoidphp_at(info->funcs,generics_fun_name_547,((void*)0)))));
    come_call_finalizer3(__right_value571,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_548==((void*)0)) {
        __dec_obj172=generics_fun_name_547;
        generics_fun_name_547=(char*)come_increment_ref_count(create_method_name(obj_type_543,(_Bool)0,((char*)(__right_value572=__builtin_string(fun_name_544))),info,(_Bool)1));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_548=((struct sFun*)((void*)(__right_value574=map$2voidphvoidphp_at(info->funcs,generics_fun_name_547,((void*)0)))));
        come_call_finalizer3(__right_value574,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_548==((void*)0)) {
            multiple_assign_var12=((struct tuple2$2intcharph*)(__right_value575=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_547,info->come_fun->mName)));
            come_exception_var_4_549=multiple_assign_var12->v1;
            Err_550=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            if(            (_if_conditional9=(Err_550)),            come_call_finalizer3(__right_value575,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                __result329__ = (_Bool)1;
                (Err_550 = come_decrement_ref_count2(Err_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_525,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_526,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_536,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_537 = come_decrement_ref_count2(type_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_538 = come_decrement_ref_count2(finalizer_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_539 = come_decrement_ref_count2(cloner_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_540 = come_decrement_ref_count2(get_hash_key_name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_541 = come_decrement_ref_count2(equaler_name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_542,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_545 = come_decrement_ref_count2(name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_547 = come_decrement_ref_count2(generics_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result329__;
            }
            else {
            }
            (Err_550 = come_decrement_ref_count2(Err_550, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_551=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_548->mResultType));
    result_type_551->mStatic=(_Bool)0;
    come_params_552=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 745, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional10=(((struct sType*)((void*)(__right_value579=list$1voidphp_operator_load_element(fun_548->mParamTypes,0))))->mHeap&&obj_value_534->type->mHeap)),    come_call_finalizer3(__right_value579,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional10) {
        std_move(((struct sType*)((void*)(__right_value580=list$1voidphp_operator_load_element(fun_548->mParamTypes,0)))),obj_value_534->type,obj_value_534,info,(_Bool)1);
        come_call_finalizer3(__right_value580,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_552,(struct CVALUE*)come_increment_ref_count(obj_value_534));
    i_553=1;
    for(    o2_saved_554=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_526)),it_555=list$1CVALUEphp_begin((o2_saved_554));    !list$1CVALUEphp_end((o2_saved_554));    it_555=list$1CVALUEphp_next((o2_saved_554))    ){
        come_value_556=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_555));
        if(        (_if_conditional11=(((struct sType*)((void*)(__right_value582=list$1voidphp_operator_load_element(fun_548->mParamTypes,i_553))))&&((struct sType*)((void*)(__right_value583=list$1voidphp_operator_load_element(fun_548->mParamTypes,i_553))))->mHeap&&come_value_556->type->mHeap)),        come_call_finalizer3(__right_value582,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value583,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional11) {
            std_move(((struct sType*)((void*)(__right_value584=list$1voidphp_operator_load_element(fun_548->mParamTypes,i_553)))),come_value_556->type,come_value_556,info,(_Bool)1);
            come_call_finalizer3(__right_value584,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_552,(struct CVALUE*)come_increment_ref_count(come_value_556));
        i_553++;
        come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_554,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_557=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 764, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_557,generics_fun_name_547);
    buffer_append_str(buf_557,"(");
    j_558=0;
    for(    o2_saved_559=(struct list$1CVALUEph*)come_increment_ref_count((come_params_552)),it_560=list$1CVALUEphp_begin((o2_saved_559));    !list$1CVALUEphp_end((o2_saved_559));    it_560=list$1CVALUEphp_next((o2_saved_559))    ){
        buffer_append_str(buf_557,it_560->c_value);
        if(        j_558!=list$1CVALUEphp_length(come_params_552)-1) {
            buffer_append_str(buf_557,",");
        }
        j_558++;
    }
    come_call_finalizer3(o2_saved_559,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_557,")");
    come_value2_561=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 781, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj173=come_value2_561->c_value;
    come_value2_561->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_557));
    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj174=come_value2_561->type;
    come_value2_561->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_551));
    come_call_finalizer3(__dec_obj174,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_561->type->mStatic=(_Bool)0;
    come_value2_561->var=((void*)0);
    if(    result_type_551->mHeap) {
        append_object_to_right_values2(come_value2_561,(struct sType*)come_increment_ref_count(result_type_551),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_561->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_561));
    __result330__ = (_Bool)1;
    come_call_finalizer3(tuple_types_525,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_526,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_531,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_536,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_537 = come_decrement_ref_count2(type_name_537, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_538 = come_decrement_ref_count2(finalizer_name_538, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_539 = come_decrement_ref_count2(cloner_name_539, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_540 = come_decrement_ref_count2(get_hash_key_name_540, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_541 = come_decrement_ref_count2(equaler_name_541, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_542,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_543,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_545 = come_decrement_ref_count2(name_545, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_547 = come_decrement_ref_count2(generics_fun_name_547, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_551,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_552,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result330__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj168;
struct list$1sNodeph* __dec_obj169;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj168=self->sname;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj169=self->tuple_elements;
            come_call_finalizer3(__dec_obj169,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value591 = (void*)0;
struct sNullReturnValue* __result331__;
    ((struct sNodeBase*)(__right_value591=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value591,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value592 = (void*)0;
char* __result332__;
    __result332__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value592=__builtin_string("sNullReturnValue")));
    (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result332__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct CVALUE* come_value_562;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct buffer* buf_563;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
char* var_name_565;
void* __right_value599 = (void*)0;
struct sType* result_type_566;
void* __right_value600 = (void*)0;
struct sType* result_type2_567;
struct sType* left_type_568;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct CVALUE* come_value2_569;
char* __dec_obj176;
struct sType* __dec_obj177;
    if(    info->come_fun) {
        come_value_562=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 816, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_563=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 818, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_564=0;
        num_564++;
        var_name_565=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value597=int_to_string(num_564)))));
        (__right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_566=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_567=(struct sType*)come_increment_ref_count(solve_generics(result_type_566,info->generics_type,info));
        left_type_568=(struct sType*)come_increment_ref_count(result_type2_567);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value601=make_define_var(left_type_568,var_name_565,(_Bool)0,info))));
        (__right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_565,((char*)(__right_value602=make_type_name_string(left_type_568,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_569=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 834, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj176=come_value2_569->c_value;
        come_value2_569->c_value=(char*)come_increment_ref_count(var_name_565);
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=come_value2_569->type;
        come_value2_569->type=(struct sType*)come_increment_ref_count(result_type2_567);
        come_call_finalizer3(__dec_obj177,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_569->type->mStatic=(_Bool)0;
        come_value2_569->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_569));
        come_call_finalizer3(come_value_562,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_563,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_565 = come_decrement_ref_count2(var_name_565, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_566,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_567,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_569,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj175;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj175=self->sname;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value609 = (void*)0;
struct sNode* __result335__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 851, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value606=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 851, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value609=_inf_value2));
    come_call_finalizer3(__right_value606,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value609) ? __right_value609 = come_decrement_ref_count2(__right_value609, ((struct sNode*)__right_value609)->finalize, ((struct sNode*)__right_value609)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result333__;
void* __right_value607 = (void*)0;
struct sNullReturnValue* result_570;
void* __right_value608 = (void*)0;
char* __dec_obj178;
struct sNullReturnValue* __result334__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_570=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "struct sNullReturnValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_570->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj178=result_570->sname;
        result_570->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_570->sline_real=self->sline_real;
    }
    __result334__ = gComeFunResultObject = __result_obj__ = result_570;
    come_call_finalizer3(result_570,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value610 = (void*)0;
struct sNullReturnValueOfException* __result336__;
    ((struct sNodeBase*)(__right_value610=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value610,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result336__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value611 = (void*)0;
char* __result337__;
    __result337__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value611=__builtin_string("sNullReturnValue")));
    (__right_value611 = come_decrement_ref_count2(__right_value611, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result337__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct CVALUE* come_value_571;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct buffer* buf_572;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
char* var_name_574;
void* __right_value618 = (void*)0;
struct sType* result_type_575;
void* __right_value619 = (void*)0;
struct sType* result_type2_576;
struct sType* __dec_obj180;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sType* left_type_577;
void* __right_value622 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var13 = (void*)0;
int come_exception_var_5_578=0;
char* Err_579=0;
_Bool _if_conditional12;
_Bool __result338__;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct CVALUE* come_value2_580;
char* __dec_obj181;
struct sType* __dec_obj182;
    if(    info->come_fun) {
        come_value_571=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 869, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buf_572=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 871, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        static int num_573=0;
        num_573++;
        var_name_574=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value616=int_to_string(num_573)))));
        (__right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        result_type_575=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_fun->mResultType));
        result_type2_576=(struct sType*)come_increment_ref_count(solve_generics(result_type_575,info->generics_type,info));
        if(        result_type2_576->mNoSolvedGenericsType) {
            __dec_obj180=result_type2_576;
            result_type2_576=(struct sType*)come_increment_ref_count(result_type2_576->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        left_type_577=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value620=list$1voidphp_operator_load_element(result_type2_576->mGenericsTypes,0))))));
        come_call_finalizer3(__right_value620,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        left_type_577==((void*)0)||string_operator_not_equals(result_type2_576->mClass->mName,"tuple2")) {
            multiple_assign_var13=((struct tuple2$2intcharph*)(__right_value622=err_msg(info,"function is not exception type")));
            come_exception_var_5_578=multiple_assign_var13->v1;
            Err_579=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            (_if_conditional12=(Err_579)),            come_call_finalizer3(__right_value622,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional12) {
                __result338__ = (_Bool)1;
                (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_571,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(buf_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_574 = come_decrement_ref_count2(var_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(left_type_577,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result338__;
            }
            else {
            }
            (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value623=make_define_var(left_type_577,var_name_574,(_Bool)0,info))));
        (__right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_574,((char*)(__right_value624=make_type_name_string(left_type_577,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        (__right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_value2_580=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 897, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
        __dec_obj181=come_value2_580->c_value;
        come_value2_580->c_value=(char*)come_increment_ref_count(var_name_574);
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj182=come_value2_580->type;
        come_value2_580->type=(struct sType*)come_increment_ref_count(left_type_577);
        come_call_finalizer3(__dec_obj182,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        come_value2_580->type->mStatic=(_Bool)0;
        come_value2_580->var=((void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_580));
        come_call_finalizer3(come_value_571,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_572,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_574 = come_decrement_ref_count2(var_name_574, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_575,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_576,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_577,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_580,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj179;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj179=self->sname;
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value631 = (void*)0;
struct sNode* __result341__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 914, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value628=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 914, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result341__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value631=_inf_value3));
    come_call_finalizer3(__right_value628,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value631) ? __right_value631 = come_decrement_ref_count2(__right_value631, ((struct sNode*)__right_value631)->finalize, ((struct sNode*)__right_value631)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result339__;
void* __right_value629 = (void*)0;
struct sNullReturnValueOfException* result_581;
void* __right_value630 = (void*)0;
char* __dec_obj183;
struct sNullReturnValueOfException* __result340__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_581=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "struct sNullReturnValueOfException*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_581->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj183=result_581->sname;
        result_581->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_581->sline_real=self->sline_real;
    }
    __result340__ = gComeFunResultObject = __result_obj__ = result_581;
    come_call_finalizer3(result_581,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value632 = (void*)0;
struct sType* __dec_obj184;
struct sNullValue* __result342__;
    ((struct sNodeBase*)(__right_value632=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value632,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj184=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value633 = (void*)0;
char* __result343__;
    __result343__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value633=__builtin_string("sNullValue")));
    (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result343__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct CVALUE* come_value_582;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct buffer* buf_583;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
char* var_name_585;
struct sType* left_type_586;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct CVALUE* come_value2_587;
char* __dec_obj187;
struct sType* __dec_obj188;
_Bool __result344__;
    come_value_582=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 933, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buf_583=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 935, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    static int num_584=0;
    num_584++;
    var_name_585=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value638=int_to_string(num_584)))));
    (__right_value638 = come_decrement_ref_count2(__right_value638, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    left_type_586=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value640=make_define_var(left_type_586,var_name_585,(_Bool)0,info))));
    (__right_value640 = come_decrement_ref_count2(__right_value640, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_585,((char*)(__right_value641=make_type_name_string(left_type_586,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    (__right_value641 = come_decrement_ref_count2(__right_value641, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_value2_587=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 947, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj187=come_value2_587->c_value;
    come_value2_587->c_value=(char*)come_increment_ref_count(var_name_585);
    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj188=come_value2_587->type;
    come_value2_587->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj188,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_587->type->mStatic=(_Bool)0;
    come_value2_587->var=((void*)0);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_587));
    __result344__ = (_Bool)1;
    come_call_finalizer3(come_value_582,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_583,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_585 = come_decrement_ref_count2(var_name_585, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(left_type_586,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result344__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj185;
struct sType* __dec_obj186;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj185=self->sname;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj186=self->type;
            come_call_finalizer3(__dec_obj186,sType_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value649 = (void*)0;
struct sNode* __result347__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 963, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value645=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 963, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result347__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value649=_inf_value4));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value645,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value649) ? __right_value649 = come_decrement_ref_count2(__right_value649, ((struct sNode*)__right_value649)->finalize, ((struct sNode*)__right_value649)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result345__;
void* __right_value646 = (void*)0;
struct sNullValue* result_588;
void* __right_value647 = (void*)0;
char* __dec_obj189;
void* __right_value648 = (void*)0;
struct sType* __dec_obj190;
struct sNullValue* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_588=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "struct sNullValue*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_588->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj189=result_588->sname;
        result_588->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_588->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj190=result_588->type;
        result_588->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj190,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_588;
    come_call_finalizer3(result_588,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value650 = (void*)0;
struct list$1sNodeph* __dec_obj191;
struct sNoneNode* __result348__;
    ((struct sNodeBase*)(__right_value650=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value650,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj191=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj191,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value651 = (void*)0;
char* __result349__;
    __result349__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value651=__builtin_string("sNoneNode")));
    (__right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result349__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_589;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1voidph* tuple_types_590;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1CVALUEph* tuple_values_591;
int i_592;
struct list$1sNodeph* o2_saved_593;
struct sNode* it_594;
_Bool Value_595;
_Bool __result350__;
void* __right_value656 = (void*)0;
struct CVALUE* come_value_596;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* string_type_597;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var14 = (void*)0;
_Bool come_exception_var_6_598=0;
char* Err_599=0;
_Bool _if_conditional13;
_Bool __result351__;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sType* type_600;
struct list$1voidph* o2_saved_601;
struct sType* it_602;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct CVALUE* obj_value_603;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct buffer* num_string_604;
void* __right_value671 = (void*)0;
struct sType* type2_605;
void* __right_value672 = (void*)0;
char* type_name_606;
void* __right_value673 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var15 = (void*)0;
char* finalizer_name_607=0;
char* cloner_name_608=0;
char* get_hash_key_name_609=0;
char* equaler_name_610=0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
char* __dec_obj194;
void* __right_value676 = (void*)0;
struct sType* type3_611;
void* __right_value677 = (void*)0;
struct sType* __dec_obj195;
void* __right_value678 = (void*)0;
struct sType* obj_type_612;
char* fun_name_613;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var16 = (void*)0;
char* name_614=0;
struct sGenericsFun* generics_fun_615=0;
char* generics_fun_name_616;
void* __right_value681 = (void*)0;
struct sFun* fun_617;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
char* __dec_obj196;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var17 = (void*)0;
int come_exception_var_7_618=0;
char* Err_619=0;
_Bool _if_conditional14;
_Bool __result352__;
void* __right_value686 = (void*)0;
struct sType* result_type_620;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
struct list$1CVALUEph* come_params_621;
void* __right_value689 = (void*)0;
_Bool _if_conditional15;
void* __right_value690 = (void*)0;
struct list$1CVALUEph* o2_saved_622;
struct CVALUE* it_623;
void* __right_value691 = (void*)0;
struct CVALUE* come_value_624;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
_Bool _if_conditional16;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
struct buffer* buf_625;
int j_626;
struct list$1CVALUEph* o2_saved_627;
struct CVALUE* it_628;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct CVALUE* come_value2_629;
void* __right_value699 = (void*)0;
char* __dec_obj197;
void* __right_value700 = (void*)0;
struct sType* __dec_obj198;
_Bool __result353__;
    tuple_elements_589=self->tuple_elements;
    tuple_types_590=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 983, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    tuple_values_591=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 984, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    i_592=0;
    for(    o2_saved_593=(tuple_elements_589),it_594=list$1sNodephp_begin((o2_saved_593));    !list$1sNodephp_end((o2_saved_593));    it_594=list$1sNodephp_next((o2_saved_593))    ){
        Value_595=node_compile(it_594,info);
        if(        !Value_595) {
            __result350__ = (_Bool)0;
            come_call_finalizer3(tuple_types_590,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(tuple_values_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result350__;
        }
        else {
        }
        come_value_596=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEphp_push_back(tuple_values_591,(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_596)));
        list$1voidphp_push_back(tuple_types_590,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_596->type)));
        if(        i_592==1) {
            string_type_597=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 999, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
            string_type_597->mHeap=(_Bool)1;
            multiple_assign_var14=((struct tuple2$2boolcharph*)(__right_value662=check_assign_type(((char*)(__right_value661=xsprintf("invalid none type"))),string_type_597,come_value_596->type,come_value_596,(_Bool)0,(_Bool)1,(_Bool)0,info)));
            come_exception_var_6_598=multiple_assign_var14->v1;
            Err_599=(char*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            (_if_conditional13=(Err_599)),            (__right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
            come_call_finalizer3(__right_value662,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional13) {
                __result351__ = (_Bool)1;
                come_call_finalizer3(string_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
                (Err_599 = come_decrement_ref_count2(Err_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(come_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_types_590,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result351__;
            }
            else {
            }
            come_call_finalizer3(string_type_597,sType_finalize, 0, 0, 0, 0, (void*)0);
            (Err_599 = come_decrement_ref_count2(Err_599, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        i_592++;
        come_call_finalizer3(come_value_596,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_600=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1009, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value664=xsprintf("tuple%d",list$1voidphp_length(tuple_types_590)))),(_Bool)0,info));
    (__right_value664 = come_decrement_ref_count2(__right_value664, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    for(    o2_saved_601=(struct list$1voidph*)come_increment_ref_count((tuple_types_590)),it_602=((struct sType*)list$1voidphp_begin((o2_saved_601)));    !list$1voidphp_end((o2_saved_601));    it_602=((struct sType*)list$1voidphp_next((o2_saved_601)))    ){
        list$1voidphp_push_back(type_600->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value666=come_call_cloner(sType_clone, it_602))))));
        come_call_finalizer3(__right_value666,sType_finalize, 0, 1, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_601,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_603=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1015, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_604=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1017, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_604,"1");
    type2_605=(struct sType*)come_increment_ref_count(solve_generics(type_600,type_600,info));
    type_name_606=(char*)come_increment_ref_count(make_type_name_string(type2_605,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    multiple_assign_var15=((struct tuple4$4charphcharphcharphcharph*)(__right_value673=create_vtable((struct sType*)come_increment_ref_count(type2_605),info)));
    finalizer_name_607=(char*)come_increment_ref_count(multiple_assign_var15->v1);
    cloner_name_608=(char*)come_increment_ref_count(multiple_assign_var15->v2);
    get_hash_key_name_609=(char*)come_increment_ref_count(multiple_assign_var15->v3);
    equaler_name_610=(char*)come_increment_ref_count(multiple_assign_var15->v4);
    come_call_finalizer3(__right_value673,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj194=obj_value_603->c_value;
    obj_value_603->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", (void*)0, (void*)0, (void*)0, (void*)0)",type_name_606,type_name_606,((char*)(__right_value674=buffer_to_string(num_string_604))),info->sname,info->sline,type_name_606));
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_611=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_605));
    type3_611->mPointerNum++;
    type3_611->mHeap=(_Bool)1;
    type2_605->mHeap=(_Bool)1;
    __dec_obj195=obj_value_603->type;
    obj_value_603->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_605));
    come_call_finalizer3(__dec_obj195,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_603->type->mPointerNum++;
    obj_value_603->var=((void*)0);
    append_object_to_right_values2(obj_value_603,(struct sType*)come_increment_ref_count(type3_611),info,(_Bool)0);
    obj_type_612=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_605));
    fun_name_613="initialize";
    multiple_assign_var16=((struct tuple2$2charphsGenericsFunp*)(__right_value680=make_generics_function(obj_type_612,(char*)come_increment_ref_count(__builtin_string(fun_name_613)),info,(_Bool)1)));
    name_614=(char*)come_increment_ref_count(multiple_assign_var16->v1);
    generics_fun_615=multiple_assign_var16->v2;
    come_call_finalizer3(__right_value680,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_616=(char*)come_increment_ref_count(name_614);
    fun_617=((struct sFun*)((void*)(__right_value681=map$2voidphvoidphp_at(info->funcs,generics_fun_name_616,((void*)0)))));
    come_call_finalizer3(__right_value681,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_617==((void*)0)) {
        __dec_obj196=generics_fun_name_616;
        generics_fun_name_616=(char*)come_increment_ref_count(create_method_name(obj_type_612,(_Bool)0,((char*)(__right_value682=__builtin_string(fun_name_613))),info,(_Bool)1));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_617=((struct sFun*)((void*)(__right_value684=map$2voidphvoidphp_at(info->funcs,generics_fun_name_616,((void*)0)))));
        come_call_finalizer3(__right_value684,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_617==((void*)0)) {
            multiple_assign_var17=((struct tuple2$2intcharph*)(__right_value685=err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_616,info->come_fun->mName)));
            come_exception_var_7_618=multiple_assign_var17->v1;
            Err_619=(char*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            (_if_conditional14=(Err_619)),            come_call_finalizer3(__right_value685,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional14) {
                __result352__ = (_Bool)1;
                (Err_619 = come_decrement_ref_count2(Err_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(tuple_types_590,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(tuple_values_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_603,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(num_string_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_605,sType_finalize, 0, 0, 0, 0, (void*)0);
                (type_name_606 = come_decrement_ref_count2(type_name_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (finalizer_name_607 = come_decrement_ref_count2(finalizer_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (cloner_name_608 = come_decrement_ref_count2(cloner_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (get_hash_key_name_609 = come_decrement_ref_count2(get_hash_key_name_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (equaler_name_610 = come_decrement_ref_count2(equaler_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(type3_611,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_616 = come_decrement_ref_count2(generics_fun_name_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result352__;
            }
            else {
            }
            (Err_619 = come_decrement_ref_count2(Err_619, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_620=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_617->mResultType));
    result_type_620->mStatic=(_Bool)0;
    come_params_621=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1062, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional15=(((struct sType*)((void*)(__right_value689=list$1voidphp_operator_load_element(fun_617->mParamTypes,0))))->mHeap&&obj_value_603->type->mHeap)),    come_call_finalizer3(__right_value689,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional15) {
        std_move(((struct sType*)((void*)(__right_value690=list$1voidphp_operator_load_element(fun_617->mParamTypes,0)))),obj_value_603->type,obj_value_603,info,(_Bool)1);
        come_call_finalizer3(__right_value690,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_621,(struct CVALUE*)come_increment_ref_count(obj_value_603));
    i_592=1;
    for(    o2_saved_622=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_591)),it_623=list$1CVALUEphp_begin((o2_saved_622));    !list$1CVALUEphp_end((o2_saved_622));    it_623=list$1CVALUEphp_next((o2_saved_622))    ){
        come_value_624=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, it_623));
        if(        (_if_conditional16=(((struct sType*)((void*)(__right_value692=list$1voidphp_operator_load_element(fun_617->mParamTypes,i_592))))&&((struct sType*)((void*)(__right_value693=list$1voidphp_operator_load_element(fun_617->mParamTypes,i_592))))->mHeap&&come_value_624->type->mHeap)),        come_call_finalizer3(__right_value692,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        come_call_finalizer3(__right_value693,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
        _if_conditional16) {
            std_move(((struct sType*)((void*)(__right_value694=list$1voidphp_operator_load_element(fun_617->mParamTypes,i_592)))),come_value_624->type,come_value_624,info,(_Bool)1);
            come_call_finalizer3(__right_value694,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        }
        list$1CVALUEphp_push_back(come_params_621,(struct CVALUE*)come_increment_ref_count(come_value_624));
        i_592++;
        come_call_finalizer3(come_value_624,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_622,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_625=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1081, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_625,generics_fun_name_616);
    buffer_append_str(buf_625,"(");
    j_626=0;
    for(    o2_saved_627=(struct list$1CVALUEph*)come_increment_ref_count((come_params_621)),it_628=list$1CVALUEphp_begin((o2_saved_627));    !list$1CVALUEphp_end((o2_saved_627));    it_628=list$1CVALUEphp_next((o2_saved_627))    ){
        buffer_append_str(buf_625,it_628->c_value);
        if(        j_626!=list$1CVALUEphp_length(come_params_621)-1) {
            buffer_append_str(buf_625,",");
        }
        j_626++;
    }
    come_call_finalizer3(o2_saved_627,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_625,")");
    come_value2_629=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1098, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj197=come_value2_629->c_value;
    come_value2_629->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_625));
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj198=come_value2_629->type;
    come_value2_629->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_620));
    come_call_finalizer3(__dec_obj198,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_629->type->mStatic=(_Bool)0;
    come_value2_629->var=((void*)0);
    if(    result_type_620->mHeap) {
        append_object_to_right_values2(come_value2_629,(struct sType*)come_increment_ref_count(result_type_620),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_629->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_629));
    __result353__ = (_Bool)1;
    come_call_finalizer3(tuple_types_590,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(tuple_values_591,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_600,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_603,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_605,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_606 = come_decrement_ref_count2(type_name_606, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (finalizer_name_607 = come_decrement_ref_count2(finalizer_name_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_608 = come_decrement_ref_count2(cloner_name_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_609 = come_decrement_ref_count2(get_hash_key_name_609, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_610 = come_decrement_ref_count2(equaler_name_610, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_611,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_612,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_616 = come_decrement_ref_count2(generics_fun_name_616, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_621,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_625,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_629,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result353__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj192;
struct list$1sNodeph* __dec_obj193;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj192=self->sname;
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj193=self->tuple_elements;
            come_call_finalizer3(__dec_obj193,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value701 = (void*)0;
struct list$1sNodeph* __dec_obj199;
struct list$1sNodeph* __dec_obj200;
struct sMapNode* __result354__;
    ((struct sNodeBase*)(__right_value701=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value701,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj199=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj199,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj200=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj200,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result354__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value702 = (void*)0;
char* __result355__;
    __result355__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value702=__builtin_string("sMapNode")));
    (__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, __result_obj__));
    gComeFunResultObject = (void*)0;
    return __result355__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_630;
struct list$1sNodeph* map_elements_631;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct list$1CVALUEph* key_params_632;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1CVALUEph* element_params_633;
struct sType* map_key_type_634;
struct sType* map_element_type_635;
int i_636;
void* __right_value707 = (void*)0;
struct sNode* key_elements_637;
void* __right_value708 = (void*)0;
struct sNode* elements_641;
void* __right_value709 = (void*)0;
_Bool _if_conditional17;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct sNode* value_node_642;
struct sNode* exp_643;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_644;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_645;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value730 = (void*)0;
struct sNode* __dec_obj206;
_Bool Value_646;
_Bool __result358__;
void* __right_value731 = (void*)0;
struct CVALUE* come_value_647;
void* __right_value732 = (void*)0;
struct sType* __dec_obj207;
_Bool Value_648;
_Bool __result359__;
void* __right_value733 = (void*)0;
struct CVALUE* come_value_649;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var18 = (void*)0;
_Bool come_exception_var_8_650=0;
char* Err_651=0;
_Bool _if_conditional18;
_Bool __result360__;
void* __right_value736 = (void*)0;
struct sType* __dec_obj208;
void* __right_value737 = (void*)0;
_Bool _if_conditional19;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct sNode* value_node_652;
struct sNode* exp2_653;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_654;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
struct sNode* __dec_obj209;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_655;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct sNode* __dec_obj210;
void* __right_value758 = (void*)0;
struct sNode* __dec_obj211;
_Bool Value_656;
_Bool __result361__;
void* __right_value759 = (void*)0;
struct CVALUE* come_value2_657;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var19 = (void*)0;
_Bool come_exception_var_9_658=0;
char* Err_659=0;
_Bool _if_conditional20;
_Bool __result362__;
void* __right_value762 = (void*)0;
struct sType* __dec_obj212;
_Bool Value_660;
_Bool __result363__;
void* __right_value763 = (void*)0;
struct CVALUE* come_value2_661;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct tuple2$2boolcharph* multiple_assign_var20 = (void*)0;
_Bool come_exception_var_10_662=0;
char* Err_663=0;
_Bool _if_conditional21;
_Bool __result364__;
void* __right_value766 = (void*)0;
struct sType* __dec_obj213;
void* __right_value767 = (void*)0;
struct sType* key_type_values_665;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
char* var_name_666;
void* __right_value770 = (void*)0;
struct sVar* var__667;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sType* element_type_values_668;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
char* var_name2_669;
void* __right_value775 = (void*)0;
struct sVar* var2__670;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct buffer* source_671;
int i_672;
void* __right_value779 = (void*)0;
struct CVALUE* key_param_673;
void* __right_value780 = (void*)0;
struct CVALUE* element_param_674;
void* __right_value781 = (void*)0;
char* c_value_675;
void* __right_value782 = (void*)0;
char* c_value_676;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sType* map_type_677;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sType* obj_type_678;
char* fun_name_679;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var21 = (void*)0;
char* name_680=0;
struct sGenericsFun* generics_fun_681=0;
char* generics_fun_name_682;
void* __right_value790 = (void*)0;
struct sFun* fun_683;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
char* __dec_obj214;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var22 = (void*)0;
int come_exception_var_11_684=0;
char* Err_685=0;
_Bool _if_conditional22;
_Bool __result365__;
void* __right_value795 = (void*)0;
struct sType* result_type_686;
struct sType* type_687;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct CVALUE* obj_value_688;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct buffer* num_string_689;
void* __right_value800 = (void*)0;
struct sType* type2_690;
void* __right_value801 = (void*)0;
char* type_name_691;
struct sType* any_type_692;
void* __right_value802 = (void*)0;
struct tuple4$4charphcharphcharphcharph* multiple_assign_var23 = (void*)0;
char* finalizer_name_693=0;
char* cloner_name_694=0;
char* get_hash_key_name_695=0;
char* equaler_name_696=0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
char* __dec_obj215;
void* __right_value805 = (void*)0;
struct sType* type3_697;
void* __right_value806 = (void*)0;
struct sType* __dec_obj216;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct list$1CVALUEph* come_params_698;
void* __right_value809 = (void*)0;
_Bool _if_conditional23;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
struct CVALUE* come_value2_699;
void* __right_value813 = (void*)0;
char* __dec_obj217;
struct sType* __dec_obj218;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
struct CVALUE* come_value3_700;
void* __right_value816 = (void*)0;
char* __dec_obj219;
struct sType* __dec_obj220;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct CVALUE* come_value4_701;
void* __right_value819 = (void*)0;
char* __dec_obj221;
struct sType* __dec_obj222;
int j_702;
struct list$1CVALUEph* o2_saved_703;
struct CVALUE* it_704;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct CVALUE* come_value5_705;
void* __right_value822 = (void*)0;
char* __dec_obj223;
void* __right_value823 = (void*)0;
struct sType* __dec_obj224;
_Bool __result366__;
exp_643 = (void*)0;
exp2_653 = (void*)0;
    map_key_elements_630=self->map_key_elements;
    map_elements_631=self->map_elements;
    key_params_632=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1138, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    element_params_633=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1139, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    map_key_type_634=((void*)0);
    map_element_type_635=((void*)0);
    for(    i_636=0;    i_636<list$1sNodephp_length(map_key_elements_630);    i_636++    ){
        key_elements_637=((struct sNode*)(__right_value707=list$1sNodephp_operator_load_element(map_key_elements_630,i_636)));
        ((__right_value707) ? __right_value707 = come_decrement_ref_count2(__right_value707, ((struct sNode*)__right_value707)->finalize, ((struct sNode*)__right_value707)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        elements_641=((struct sNode*)(__right_value708=list$1sNodephp_operator_load_element(map_elements_631,i_636)));
        ((__right_value708) ? __right_value708 = come_decrement_ref_count2(__right_value708, ((struct sNode*)__right_value708)->finalize, ((struct sNode*)__right_value708)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        if(        (_if_conditional17=(string_operator_equals(((char*)(__right_value709=key_elements_637->kind(key_elements_637->_protocol_obj))),"sWildCard"))),        (__right_value709 = come_decrement_ref_count2(__right_value709, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional17) {
            value_node_642=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value710=xsprintf("Value"))),info));
            (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_644=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1152, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_644,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1153, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_642))));
                __dec_obj204=exp_643;
                exp_643=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value717=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_642),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_644),((void*)0),0,((void*)0),info));
                if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value717 = come_decrement_ref_count2(__right_value717, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_644,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_645=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1158, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_645,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1159, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_643))));
                list$1tuple2$2charphsNodephphp_add(params_645,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1160, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_636,info)))));
                __dec_obj205=exp_643;
                exp_643=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value728=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_643),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_645),((void*)0),0,((void*)0),info));
                if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value728 = come_decrement_ref_count2(__right_value728, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj206=exp_643;
                exp_643=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_643,info));
                if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_645,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_646=node_compile(exp_643,info);
            if(            !Value_646) {
                __result358__ = (_Bool)0;
                ((value_node_642) ? value_node_642 = come_decrement_ref_count2(value_node_642, ((struct sNode*)value_node_642)->finalize, ((struct sNode*)value_node_642)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((exp_643) ? exp_643 = come_decrement_ref_count2(exp_643, ((struct sNode*)exp_643)->finalize, ((struct sNode*)exp_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result358__;
            }
            else {
            }
            come_value_647=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEphp_push_back(key_params_632,(struct CVALUE*)come_increment_ref_count(come_value_647));
            __dec_obj207=map_key_type_634;
            map_key_type_634=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_647->type));
            come_call_finalizer3(__dec_obj207,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_642) ? value_node_642 = come_decrement_ref_count2(value_node_642, ((struct sNode*)value_node_642)->finalize, ((struct sNode*)value_node_642)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp_643) ? exp_643 = come_decrement_ref_count2(exp_643, ((struct sNode*)exp_643)->finalize, ((struct sNode*)exp_643)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value_647,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_648=node_compile(key_elements_637,info);
            if(            !Value_648) {
                __result359__ = (_Bool)0;
                come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result359__;
            }
            else {
            }
            come_value_649=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_634) {
                multiple_assign_var18=((struct tuple2$2boolcharph*)(__right_value735=check_assign_type(((char*)(__right_value734=xsprintf("invalid map key type"))),map_key_type_634,come_value_649->type,come_value_649,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_8_650=multiple_assign_var18->v1;
                Err_651=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                (_if_conditional18=(Err_651)),                (__right_value734 = come_decrement_ref_count2(__right_value734, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value735,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional18) {
                    __result360__ = (_Bool)1;
                    (Err_651 = come_decrement_ref_count2(Err_651, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result360__;
                }
                else {
                }
                (Err_651 = come_decrement_ref_count2(Err_651, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUEphp_push_back(key_params_632,(struct CVALUE*)come_increment_ref_count(come_value_649));
            __dec_obj208=map_key_type_634;
            map_key_type_634=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_649->type));
            come_call_finalizer3(__dec_obj208,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value_649,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional19=(string_operator_equals(((char*)(__right_value737=elements_641->kind(elements_641->_protocol_obj))),"sWildCard"))),        (__right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
        _if_conditional19) {
            value_node_652=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value738=xsprintf("Value"))),info));
            (__right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            {
                params_654=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1198, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_654,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1199, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_652))));
                __dec_obj209=exp2_653;
                exp2_653=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value745=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_652),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_654),((void*)0),0,((void*)0),info));
                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_654,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_655=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1204, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                list$1tuple2$2charphsNodephphp_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1205, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_653))));
                list$1tuple2$2charphsNodephphp_add(params_655,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1206, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_636,info)))));
                __dec_obj210=exp2_653;
                exp2_653=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value756=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_653),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_655),((void*)0),0,((void*)0),info));
                if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); };
                (__right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                __dec_obj211=exp2_653;
                exp2_653=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_653,info));
                if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count2(__dec_obj211, ((struct sNode*)__dec_obj211)->finalize, ((struct sNode*)__dec_obj211)->_protocol_obj, 0,0,0, (void*)0); };
                come_call_finalizer3(params_655,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_656=node_compile(exp2_653,info);
            if(            !Value_656) {
                __result361__ = (_Bool)0;
                ((value_node_652) ? value_node_652 = come_decrement_ref_count2(value_node_652, ((struct sNode*)value_node_652)->finalize, ((struct sNode*)value_node_652)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((exp2_653) ? exp2_653 = come_decrement_ref_count2(exp2_653, ((struct sNode*)exp2_653)->finalize, ((struct sNode*)exp2_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result361__;
            }
            else {
            }
            come_value2_657=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_635) {
                multiple_assign_var19=((struct tuple2$2boolcharph*)(__right_value761=check_assign_type(((char*)(__right_value760=xsprintf("invalid map element type"))),map_element_type_635,come_value2_657->type,come_value2_657,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_9_658=multiple_assign_var19->v1;
                Err_659=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                (_if_conditional20=(Err_659)),                (__right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value761,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional20) {
                    __result362__ = (_Bool)1;
                    (Err_659 = come_decrement_ref_count2(Err_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((value_node_652) ? value_node_652 = come_decrement_ref_count2(value_node_652, ((struct sNode*)value_node_652)->finalize, ((struct sNode*)value_node_652)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    ((exp2_653) ? exp2_653 = come_decrement_ref_count2(exp2_653, ((struct sNode*)exp2_653)->finalize, ((struct sNode*)exp2_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    come_call_finalizer3(come_value2_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result362__;
                }
                else {
                }
                (Err_659 = come_decrement_ref_count2(Err_659, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUEphp_push_back(element_params_633,(struct CVALUE*)come_increment_ref_count(come_value2_657));
            __dec_obj212=map_element_type_635;
            map_element_type_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_657->type));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            ((value_node_652) ? value_node_652 = come_decrement_ref_count2(value_node_652, ((struct sNode*)value_node_652)->finalize, ((struct sNode*)value_node_652)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            ((exp2_653) ? exp2_653 = come_decrement_ref_count2(exp2_653, ((struct sNode*)exp2_653)->finalize, ((struct sNode*)exp2_653)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(come_value2_657,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_660=node_compile(elements_641,info);
            if(            !Value_660) {
                __result363__ = (_Bool)0;
                come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result363__;
            }
            else {
            }
            come_value2_661=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_635) {
                multiple_assign_var20=((struct tuple2$2boolcharph*)(__right_value765=check_assign_type(((char*)(__right_value764=xsprintf("invalid map element type"))),map_element_type_635,come_value2_661->type,come_value2_661,(_Bool)0,(_Bool)1,(_Bool)0,info)));
                come_exception_var_10_662=multiple_assign_var20->v1;
                Err_663=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                if(                (_if_conditional21=(Err_663)),                (__right_value764 = come_decrement_ref_count2(__right_value764, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value765,tuple2$2boolcharphp_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional21) {
                    __result364__ = (_Bool)1;
                    (Err_663 = come_decrement_ref_count2(Err_663, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(come_value2_661,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result364__;
                }
                else {
                }
                (Err_663 = come_decrement_ref_count2(Err_663, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1CVALUEphp_push_back(element_params_633,(struct CVALUE*)come_increment_ref_count(come_value2_661));
            __dec_obj213=map_element_type_635;
            map_element_type_635=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value2_661->type));
            come_call_finalizer3(__dec_obj213,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            come_call_finalizer3(come_value2_661,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_664=0;
    key_type_values_665=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_key_type_634));
    list$1sNodephp_push_back(key_type_values_665->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(key_params_632),info)));
    key_type_values_665->mHeap=(_Bool)0;
    var_name_666=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_664));
    add_variable_to_table(var_name_666,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, key_type_values_665)),info,(_Bool)0);
    var__667=get_variable_from_table(info->lv_table,var_name_666);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value771=make_define_var(key_type_values_665,var__667->mCValueName,(_Bool)0,info))));
    (__right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    element_type_values_668=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_element_type_635));
    list$1sNodephp_push_back(element_type_values_668->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEphp_length(element_params_633),info)));
    element_type_values_668->mHeap=(_Bool)0;
    var_name2_669=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_664));
    add_variable_to_table(var_name2_669,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, element_type_values_668)),info,(_Bool)0);
    var2__670=get_variable_from_table(info->lv_table,var_name2_669);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value776=make_define_var(element_type_values_668,var2__670->mCValueName,(_Bool)0,info))));
    (__right_value776 = come_decrement_ref_count2(__right_value776, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    source_671=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1271, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(source_671,"(");
    for(    i_672=0;    i_672<list$1CVALUEphp_length(key_params_632);    i_672++    ){
        key_param_673=((struct CVALUE*)(__right_value779=list$1CVALUEphp_operator_load_element(key_params_632,i_672)));
        come_call_finalizer3(__right_value779,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        element_param_674=((struct CVALUE*)(__right_value780=list$1CVALUEphp_operator_load_element(element_params_633,i_672)));
        come_call_finalizer3(__right_value780,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
        if(        map_key_type_634->mHeap) {
            c_value_675=(char*)come_increment_ref_count(increment_ref_count_object(key_param_673->type,key_param_673->c_value,info));
            buffer_append_format(source_671,"%s[%d]=%s,\n",var__667->mCValueName,i_672,c_value_675);
            (c_value_675 = come_decrement_ref_count2(c_value_675, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(source_671,"%s[%d]=%s,\n",var__667->mCValueName,i_672,key_param_673->c_value);
        }
        if(        map_element_type_635->mHeap) {
            c_value_676=(char*)come_increment_ref_count(increment_ref_count_object(element_param_674->type,element_param_674->c_value,info));
            buffer_append_format(source_671,"%s[%d]=%s,\n",var2__670->mCValueName,i_672,c_value_676);
            (c_value_676 = come_decrement_ref_count2(c_value_676, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            buffer_append_format(source_671,"%s[%d]=%s,\n",var2__670->mCValueName,i_672,element_param_674->c_value);
        }
    }
    map_type_677=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1296, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"map",(_Bool)0,info));
    list$1voidphp_push_back(map_type_677->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value785=come_call_cloner(sType_clone, map_key_type_634))))));
    come_call_finalizer3(__right_value785,sType_finalize, 0, 1, 0, 0, (void*)0);
    list$1voidphp_push_back(map_type_677->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value786=come_call_cloner(sType_clone, map_element_type_635))))));
    come_call_finalizer3(__right_value786,sType_finalize, 0, 1, 0, 0, (void*)0);
    obj_type_678=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, map_type_677));
    fun_name_679="initialize_with_values";
    multiple_assign_var21=((struct tuple2$2charphsGenericsFunp*)(__right_value789=make_generics_function(obj_type_678,(char*)come_increment_ref_count(__builtin_string(fun_name_679)),info,(_Bool)1)));
    name_680=(char*)come_increment_ref_count(multiple_assign_var21->v1);
    generics_fun_681=multiple_assign_var21->v2;
    come_call_finalizer3(__right_value789,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
    generics_fun_name_682=(char*)come_increment_ref_count(name_680);
    fun_683=((struct sFun*)((void*)(__right_value790=map$2voidphvoidphp_at(info->funcs,generics_fun_name_682,((void*)0)))));
    come_call_finalizer3(__right_value790,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    if(    fun_683==((void*)0)) {
        __dec_obj214=generics_fun_name_682;
        generics_fun_name_682=(char*)come_increment_ref_count(create_method_name(obj_type_678,(_Bool)0,((char*)(__right_value791=__builtin_string(fun_name_679))),info,(_Bool)1));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        (__right_value791 = come_decrement_ref_count2(__right_value791, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        fun_683=((struct sFun*)((void*)(__right_value793=map$2voidphvoidphp_at(info->funcs,generics_fun_name_682,((void*)0)))));
        come_call_finalizer3(__right_value793,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
        if(        fun_683==((void*)0)) {
            multiple_assign_var22=((struct tuple2$2intcharph*)(__right_value794=err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_682,info->come_fun->mName)));
            come_exception_var_11_684=multiple_assign_var22->v1;
            Err_685=(char*)come_increment_ref_count(multiple_assign_var22->v2);
            if(            (_if_conditional22=(Err_685)),            come_call_finalizer3(__right_value794,tuple2$2intcharphp_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional22) {
                __result365__ = (_Bool)1;
                (Err_685 = come_decrement_ref_count2(Err_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(key_type_values_665,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name_666 = come_decrement_ref_count2(var_name_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(element_type_values_668,sType_finalize, 0, 0, 0, 0, (void*)0);
                (var_name2_669 = come_decrement_ref_count2(var_name2_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(source_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_678,sType_finalize, 0, 0, 0, 0, (void*)0);
                (name_680 = come_decrement_ref_count2(name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (generics_fun_name_682 = come_decrement_ref_count2(generics_fun_name_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result365__;
            }
            else {
            }
            (Err_685 = come_decrement_ref_count2(Err_685, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    result_type_686=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_683->mResultType));
    result_type_686->mStatic=(_Bool)0;
    type_687=map_type_677;
    obj_value_688=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1325, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    num_string_689=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1327, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(num_string_689,"1");
    type2_690=(struct sType*)come_increment_ref_count(solve_generics(type_687,type_687,info));
    type_name_691=(char*)come_increment_ref_count(make_type_name_string(type2_690,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    any_type_692=(struct sType*)come_increment_ref_count(type2_690);
    any_type_692->mPointerNum=1;
    any_type_692->mHeap=(_Bool)1;
    multiple_assign_var23=((struct tuple4$4charphcharphcharphcharph*)(__right_value802=create_vtable((struct sType*)come_increment_ref_count(any_type_692),info)));
    finalizer_name_693=(char*)come_increment_ref_count(multiple_assign_var23->v1);
    cloner_name_694=(char*)come_increment_ref_count(multiple_assign_var23->v2);
    get_hash_key_name_695=(char*)come_increment_ref_count(multiple_assign_var23->v3);
    equaler_name_696=(char*)come_increment_ref_count(multiple_assign_var23->v4);
    come_call_finalizer3(__right_value802,tuple4$4charphcharphcharphcharphp_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj215=obj_value_688->c_value;
    obj_value_688->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\", %s, %s, %s, %s)",type_name_691,type_name_691,((char*)(__right_value803=buffer_to_string(num_string_689))),info->sname,info->sline,type_name_691,finalizer_name_693,cloner_name_694,get_hash_key_name_695,equaler_name_696));
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    (__right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    type3_697=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_690));
    type3_697->mPointerNum++;
    type3_697->mHeap=(_Bool)1;
    type2_690->mHeap=(_Bool)1;
    __dec_obj216=obj_value_688->type;
    obj_value_688->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_690));
    come_call_finalizer3(__dec_obj216,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    obj_value_688->type->mPointerNum++;
    obj_value_688->var=((void*)0);
    append_object_to_right_values2(obj_value_688,(struct sType*)come_increment_ref_count(type3_697),info,(_Bool)0);
    come_params_698=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1353, "struct list$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    if(    (_if_conditional23=(((struct sType*)((void*)(__right_value809=list$1voidphp_operator_load_element(fun_683->mParamTypes,0))))->mHeap&&obj_value_688->type->mHeap)),    come_call_finalizer3(__right_value809,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0),
    _if_conditional23) {
        std_move(((struct sType*)((void*)(__right_value810=list$1voidphp_operator_load_element(fun_683->mParamTypes,0)))),obj_value_688->type,obj_value_688,info,(_Bool)1);
        come_call_finalizer3(__right_value810,(void*)0, 0/*alloca value*/, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_ */, (void*)0);
    }
    list$1CVALUEphp_push_back(come_params_698,(struct CVALUE*)come_increment_ref_count(obj_value_688));
    come_value2_699=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1360, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj217=come_value2_699->c_value;
    come_value2_699->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEphp_length(key_params_632)));
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj218=come_value2_699->type;
    come_value2_699->type=((void*)0);
    come_call_finalizer3(__dec_obj218,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value2_699->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_698,(struct CVALUE*)come_increment_ref_count(come_value2_699));
    come_value3_700=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1368, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj219=come_value3_700->c_value;
    come_value3_700->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__667->mCValueName));
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj220=come_value3_700->type;
    come_value3_700->type=((void*)0);
    come_call_finalizer3(__dec_obj220,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value3_700->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_698,(struct CVALUE*)come_increment_ref_count(come_value3_700));
    come_value4_701=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1376, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj221=come_value4_701->c_value;
    come_value4_701->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__670->mCValueName));
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj222=come_value4_701->type;
    come_value4_701->type=((void*)0);
    come_call_finalizer3(__dec_obj222,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value4_701->var=((void*)0);
    list$1CVALUEphp_push_back(come_params_698,(struct CVALUE*)come_increment_ref_count(come_value4_701));
    buffer_append_str(source_671,generics_fun_name_682);
    buffer_append_str(source_671,"(");
    j_702=0;
    for(    o2_saved_703=(struct list$1CVALUEph*)come_increment_ref_count((come_params_698)),it_704=list$1CVALUEphp_begin((o2_saved_703));    !list$1CVALUEphp_end((o2_saved_703));    it_704=list$1CVALUEphp_next((o2_saved_703))    ){
        buffer_append_str(source_671,it_704->c_value);
        if(        j_702!=list$1CVALUEphp_length(come_params_698)-1) {
            buffer_append_str(source_671,",");
        }
        j_702++;
    }
    come_call_finalizer3(o2_saved_703,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_671,")");
    buffer_append_str(source_671,")");
    come_value5_705=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1402, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj223=come_value5_705->c_value;
    come_value5_705->c_value=(char*)come_increment_ref_count(buffer_to_string(source_671));
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj224=come_value5_705->type;
    come_value5_705->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_686));
    come_call_finalizer3(__dec_obj224,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value5_705->type->mStatic=(_Bool)0;
    come_value5_705->var=((void*)0);
    if(    result_type_686->mHeap) {
        append_object_to_right_values2(come_value5_705,(struct sType*)come_increment_ref_count(result_type_686),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_705->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_705));
    __result366__ = (_Bool)1;
    come_call_finalizer3(key_params_632,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(element_params_633,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_key_type_634,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_element_type_635,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(key_type_values_665,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_666 = come_decrement_ref_count2(var_name_666, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(element_type_values_668,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name2_669 = come_decrement_ref_count2(var_name2_669, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(map_type_677,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_678,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name_680 = come_decrement_ref_count2(name_680, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_fun_name_682 = come_decrement_ref_count2(generics_fun_name_682, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_686,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_688,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(num_string_689,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_690,sType_finalize, 0, 0, 0, 0, (void*)0);
    (type_name_691 = come_decrement_ref_count2(type_name_691, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(any_type_692,sType_finalize, 0, 0, 0, 0, (void*)0);
    (finalizer_name_693 = come_decrement_ref_count2(finalizer_name_693, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (cloner_name_694 = come_decrement_ref_count2(cloner_name_694, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (get_hash_key_name_695 = come_decrement_ref_count2(get_hash_key_name_695, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (equaler_name_696 = come_decrement_ref_count2(equaler_name_696, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type3_697,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_params_698,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value3_700,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value4_701,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value5_705,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result366__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj201;
struct list$1sNodeph* __dec_obj202;
struct list$1sNodeph* __dec_obj203;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj201=self->sname;
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj202=self->map_key_elements;
            come_call_finalizer3(__dec_obj202,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj203=self->map_elements;
            come_call_finalizer3(__dec_obj203,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 1/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        else {
            come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_638;
int i_639;
struct sNode* __result356__;
struct sNode* default_value_640;
struct sNode* __result357__;
default_value_640 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_638=self->head;
    i_639=0;
    while(it_638!=((void*)0)) {
        if(        position==i_639) {
            __result356__ = gComeFunResultObject = __result_obj__ = it_638->item;
            gComeFunResultObject = (void*)0;
            return __result356__;
        }
        it_638=it_638->next;
        i_639++;
    }
    memset(&default_value_640,0,sizeof(struct sNode*));
    __result357__ = gComeFunResultObject = __result_obj__ = default_value_640;
    ((default_value_640) ? default_value_640 = come_decrement_ref_count2(default_value_640, ((struct sNode*)default_value_640)->finalize, ((struct sNode*)default_value_640)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_706;
int sline_707;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct list$1sNodeph* exps_708;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
struct buffer* value_709;
char* head_of_last_line_710;
int len_711;
void* __right_value828 = (void*)0;
struct sNode* exp_712;
int sline2_713;
void* __right_value829 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var24 = (void*)0;
int come_exception_var_c1_714=0;
char* Err_715=0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value837 = (void*)0;
struct sNode* __result369__;
int sline_real_717;
int sline_718;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct buffer* value_719;
char* p_720;
int sline_721;
int sline2_722;
void* __right_value840 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var25 = (void*)0;
int come_exception_var_c2_723=0;
char* Err_724=0;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value844 = (void*)0;
struct sNode* __result370__;
int sline_real_725;
int sline_726;
void* __right_value845 = (void*)0;
void* __right_value846 = (void*)0;
struct buffer* value_727;
unsigned long  int size_728;
char* p_729;
int sline_730;
int len_731;
int sline2_732;
void* __right_value847 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var26 = (void*)0;
int come_exception_var_c3_733=0;
char* Err_734=0;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value853 = (void*)0;
struct sNode* __result373__;
int sline_real_736;
int sline_737;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
struct buffer* buf_738;
void* __right_value856 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var27 = (void*)0;
int come_exception_var_c4_739=0;
char* Err_740=0;
_Bool global_741;
_Bool ignore_case_742;
_Bool catch_exception_743;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value860 = (void*)0;
struct sNode* obj_744;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_745;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
struct buffer* method_block_746;
int method_block_sline_747;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1voidph* method_generics_types_748;
void* __right_value902 = (void*)0;
struct sNode* node_749;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct sNode* __dec_obj230;
struct sNode* __result374__;
int sline_real_750;
int sline_751;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
struct buffer* value_752;
char* p_753;
int sline_754;
int len_755;
int sline2_756;
void* __right_value907 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var28 = (void*)0;
int come_exception_var_c5_757=0;
char* Err_758=0;
_Bool global_759;
_Bool ignore_case_760;
_Bool catch_exception_761;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value911 = (void*)0;
struct sNode* obj_762;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_763;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct buffer* method_block_764;
int method_block_sline_765;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct list$1voidph* method_generics_types_766;
void* __right_value953 = (void*)0;
struct sNode* node_767;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sNode* __dec_obj231;
struct sNode* __result375__;
int sline_real_768;
int c_769;
int n_770;
int n_771;
unsigned long long int n_774;
void* __right_value956 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var29 = (void*)0;
int come_exception_var_c6_775=0;
char* Err_776=0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value961 = (void*)0;
struct sNode* __result378__;
int sline_real_778;
unsigned int c_779;
_Bool quote_780;
int n_781;
int n_782;
unsigned long long int n_785;
unsigned char p2_786;
int size_787;
void* __right_value962 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var30 = (void*)0;
int come_exception_var_c7_789=0;
char* Err_790=0;
void* __right_value963 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var31 = (void*)0;
int come_exception_var_c8_791=0;
char* Err_792=0;
void* __right_value964 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var32 = (void*)0;
int come_exception_var_c9_793=0;
char* Err_794=0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value969 = (void*)0;
struct sNode* __result381__;
int sline_real_796;
int sline_797;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct buffer* value_798;
char* p_799;
int sline_800;
int sline2_801;
void* __right_value972 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var33 = (void*)0;
int come_exception_var_c10_802=0;
char* Err_803=0;
int len_804;
void* __right_value973 = (void*)0;
unsigned int* wstr_805;
char* str_806;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value979 = (void*)0;
struct sNode* __result384__;
int sline_real_808;
int sline_809;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct list$1sNodeph* exps_810;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
struct buffer* value_811;
char* p_812;
int sline_813;
int len_814;
void* __right_value984 = (void*)0;
struct sNode* exp_815;
int sline2_816;
void* __right_value985 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var34 = (void*)0;
int come_exception_var_c11_817=0;
char* Err_818=0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value989 = (void*)0;
struct sNode* __result385__;
int sline_real_819;
char* p_820;
_Bool no_comma_821;
void* __right_value990 = (void*)0;
struct sNode* node_822;
char* p2_823;
void* __right_value991 = (void*)0;
void* __right_value992 = (void*)0;
struct buffer* first_element_source_824;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
struct list$1sNodeph* list_elements_825;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct list$1sNodeph* map_keys_826;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct list$1sNodeph* map_elements_827;
_Bool no_comma_828;
void* __right_value999 = (void*)0;
struct sNode* node2_829;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value1006 = (void*)0;
struct sNode* __result388__;
_Bool no_comma_831;
void* __right_value1007 = (void*)0;
struct sNode* node2_832;
void* __right_value1008 = (void*)0;
struct sNode* node3_833;
void* __right_value1009 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var35 = (void*)0;
int come_exception_var_c12_834=0;
char* Err_835=0;
void* __right_value1010 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var36 = (void*)0;
int come_exception_var_c13_836=0;
char* Err_837=0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value1013 = (void*)0;
struct sNode* __result389__;
_Bool no_comma_838;
void* __right_value1014 = (void*)0;
struct sNode* node2_839;
void* __right_value1015 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var37 = (void*)0;
int come_exception_var_c14_840=0;
char* Err_841=0;
void* __right_value1016 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var38 = (void*)0;
int come_exception_var_c15_842=0;
char* Err_843=0;
void* __right_value1017 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var39 = (void*)0;
int come_exception_var_c16_844=0;
char* Err_845=0;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value1023 = (void*)0;
struct sNode* __result392__;
void* __right_value1024 = (void*)0;
struct sNode* node_847;
struct sNode* __result393__;
struct sNode* __result394__;
memset(&c_769, 0, sizeof(int));
memset(&c_779, 0, sizeof(unsigned int));
memset(&quote_780, 0, sizeof(_Bool));
memset(&size_787, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_706=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_707=info->sline;
        exps_708=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1432, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_709=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1433, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        head_of_last_line_710=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_710) {
                    buffer_trim(value_709,info->p-head_of_last_line_710);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_709,37);
                buffer_append_char(value_709,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_709,92);
                buffer_append_char(value_709,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_709,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_711=0;
                    while(xisdigit(*info->p)&&len_711<3) {
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        len_711++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_709,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_712=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_708,(struct sNode*)come_increment_ref_count(exp_712));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_709,"%s");
                    ((exp_712) ? exp_712 = come_decrement_ref_count2(exp_712, ((struct sNode*)exp_712)->finalize, ((struct sNode*)exp_712)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_709,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_713=info->sline;
                info->sline=sline_707;
                multiple_assign_var24=((struct tuple2$2intcharph*)(__right_value829=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c1_714=multiple_assign_var24->v1;
                Err_715=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                ((Err_715)?(puts(Err_715),exit(0)):(0));
                come_call_finalizer3(__right_value829,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_715 = come_decrement_ref_count2(Err_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_709,92);
                    buffer_append_char(value_709,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_710=info->p;
                }
                else {
                    buffer_append_char(value_709,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_706;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1572, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value832=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1572, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_709)),(struct list$1sNodeph*)come_increment_ref_count(exps_708),sline_707,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result369__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value837=_inf_value5));
        come_call_finalizer3(exps_708,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value832,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value837) ? __right_value837 = come_decrement_ref_count2(__right_value837, ((struct sNode*)__right_value837)->finalize, ((struct sNode*)__right_value837)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result369__;
        come_call_finalizer3(exps_708,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_709,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_717=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_718=info->sline;
        value_719=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1582, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_720=info->p;
                sline_721=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_720;
                    info->sline=sline_721;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_719,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_719,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_719,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_722=info->sline;
                info->sline=sline_718;
                multiple_assign_var25=((struct tuple2$2intcharph*)(__right_value840=err_msg(info,"close \" to make c string value")));
                come_exception_var_c2_723=multiple_assign_var25->v1;
                Err_724=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                ((Err_724)?(puts(Err_724),exit(0)):(0));
                come_call_finalizer3(__right_value840,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                info->sline=sline2_722;
                exit(2);
                (Err_724 = come_decrement_ref_count2(Err_724, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_719,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_717;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1635, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value843=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1635, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_719)),sline_718,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result370__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value844=_inf_value6));
        come_call_finalizer3(value_719,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value843,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value844) ? __right_value844 = come_decrement_ref_count2(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result370__;
        come_call_finalizer3(value_719,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_725=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_726=info->sline;
        value_727=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1645, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        size_728=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_727,*info->p);
                info->p++;
                p_729=info->p;
                sline_730=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_729;
                    info->sline=sline_730;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_727,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_731=0;
                    while(xisdigit(*info->p)&&len_731<3) {
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        len_731++;
                    }
                    size_728++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_727,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                    }
                    size_728++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 110:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 116:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 114:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 118:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 102:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 97:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 98:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        case 92:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                        default:
                        buffer_append_char(value_727,*info->p);
                        info->p++;
                        size_728++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_732=info->sline;
                info->sline=sline_726;
                multiple_assign_var26=((struct tuple2$2intcharph*)(__right_value847=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c3_733=multiple_assign_var26->v1;
                Err_734=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                ((Err_734)?(puts(Err_734),exit(0)):(0));
                come_call_finalizer3(__right_value847,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_734 = come_decrement_ref_count2(Err_734, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_727,*info->p);
                info->p++;
                size_728++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_725;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1772, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value849=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1772, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(value_727),size_728,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value853=_inf_value7));
        come_call_finalizer3(value_727,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value849,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value853) ? __right_value853 = come_decrement_ref_count2(__right_value853, ((struct sNode*)__right_value853)->finalize, ((struct sNode*)__right_value853)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result373__;
        come_call_finalizer3(value_727,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47&&*(info->p-1)!=42&&*(info->p+1)!=42) {
        sline_real_736=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_737=info->sline;
        buf_738=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1781, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_738,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                multiple_assign_var27=((struct tuple2$2intcharph*)(__right_value856=err_msg(info,"require closing / for regex")));
                come_exception_var_c4_739=multiple_assign_var27->v1;
                Err_740=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                ((Err_740)?(puts(Err_740),exit(0)):(0));
                come_call_finalizer3(__right_value856,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(5);
                (Err_740 = come_decrement_ref_count2(Err_740, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                buffer_append_char(buf_738,*info->p);
                info->p++;
            }
        }
        global_741=(_Bool)0;
        ignore_case_742=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_741=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_742=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_743=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_743=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1825, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value859=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1825, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(buf_738)),sline_737,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_744=(struct sNode*)come_increment_ref_count(_inf_value8);
        come_call_finalizer3(__right_value859,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_745=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1827, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1829, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_744))));
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1830, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_742)?(((struct sNode*)(__right_value867=create_int_node(1,info)))):(((struct sNode*)(__right_value868=create_int_node(0,info)))))))));
        ((__right_value867) ? __right_value867 = come_decrement_ref_count2(__right_value867, ((struct sNode*)__right_value867)->finalize, ((struct sNode*)__right_value867)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value868) ? __right_value868 = come_decrement_ref_count2(__right_value868, ((struct sNode*)__right_value868)->finalize, ((struct sNode*)__right_value868)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1831, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1832, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_741)?(((struct sNode*)(__right_value876=create_int_node(1,info)))):(((struct sNode*)(__right_value877=create_int_node(0,info)))))))));
        ((__right_value876) ? __right_value876 = come_decrement_ref_count2(__right_value876, ((struct sNode*)__right_value876)->finalize, ((struct sNode*)__right_value876)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value877) ? __right_value877 = come_decrement_ref_count2(__right_value877, ((struct sNode*)__right_value877)->finalize, ((struct sNode*)__right_value877)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1833, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1834, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1835, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1836, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_745,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1837, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_746=((void*)0);
        method_block_sline_747=info->sline;
        method_generics_types_748=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 1843, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_749=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_744),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_745),method_block_746,method_block_sline_747,method_generics_types_748,info));
        if(        !catch_exception_743) {
            __dec_obj230=node_749;
            node_749=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_749)),info));
            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_736;
        __result374__ = gComeFunResultObject = __result_obj__ = node_749;
        come_call_finalizer3(buf_738,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_744) ? obj_744 = come_decrement_ref_count2(obj_744, ((struct sNode*)obj_744)->finalize, ((struct sNode*)obj_744)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_745,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_748,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_749) ? node_749 = come_decrement_ref_count2(node_749, ((struct sNode*)node_749)->finalize, ((struct sNode*)node_749)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result374__;
        come_call_finalizer3(buf_738,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_744) ? obj_744 = come_decrement_ref_count2(obj_744, ((struct sNode*)obj_744)->finalize, ((struct sNode*)obj_744)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_745,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_748,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_749) ? node_749 = come_decrement_ref_count2(node_749, ((struct sNode*)node_749)->finalize, ((struct sNode*)node_749)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_750=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_751=info->sline;
        value_752=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1861, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_753=info->p;
                sline_754=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_753;
                    info->sline=sline_754;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_752,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_755=0;
                    while(xisdigit(*info->p)&&len_755<3) {
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        len_755++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_752,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_752,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_756=info->sline;
                info->sline=sline_751;
                multiple_assign_var28=((struct tuple2$2intcharph*)(__right_value907=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c5_757=multiple_assign_var28->v1;
                Err_758=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                ((Err_758)?(puts(Err_758),exit(0)):(0));
                come_call_finalizer3(__right_value907,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_758 = come_decrement_ref_count2(Err_758, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_752,*info->p);
                info->p++;
            }
        }
        global_759=(_Bool)0;
        ignore_case_760=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_759=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_760=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_761=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_761=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1992, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value910=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1992, "struct sStrNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_752)),sline_751,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_762=(struct sNode*)come_increment_ref_count(_inf_value9);
        come_call_finalizer3(__right_value910,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_763=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1994, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1996, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_762))));
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1997, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_760)?(((struct sNode*)(__right_value918=create_int_node(1,info)))):(((struct sNode*)(__right_value919=create_int_node(0,info)))))))));
        ((__right_value918) ? __right_value918 = come_decrement_ref_count2(__right_value918, ((struct sNode*)__right_value918)->finalize, ((struct sNode*)__right_value918)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value919) ? __right_value919 = come_decrement_ref_count2(__right_value919, ((struct sNode*)__right_value919)->finalize, ((struct sNode*)__right_value919)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1998, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1999, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_759)?(((struct sNode*)(__right_value927=create_int_node(1,info)))):(((struct sNode*)(__right_value928=create_int_node(0,info)))))))));
        ((__right_value927) ? __right_value927 = come_decrement_ref_count2(__right_value927, ((struct sNode*)__right_value927)->finalize, ((struct sNode*)__right_value927)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        ((__right_value928) ? __right_value928 = come_decrement_ref_count2(__right_value928, ((struct sNode*)__right_value928)->finalize, ((struct sNode*)__right_value928)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2000, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2001, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2002, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2003, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephphp_add(params_763,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2004, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_764=((void*)0);
        method_block_sline_765=info->sline;
        method_generics_types_766=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "06str.c", 2010, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        node_767=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_762),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_763),method_block_764,method_block_sline_765,method_generics_types_766,info));
        if(        !catch_exception_761) {
            __dec_obj231=node_767;
            node_767=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, node_767)),info));
            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_750;
        __result375__ = gComeFunResultObject = __result_obj__ = node_767;
        come_call_finalizer3(value_752,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_762) ? obj_762 = come_decrement_ref_count2(obj_762, ((struct sNode*)obj_762)->finalize, ((struct sNode*)obj_762)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_763,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_766,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_767) ? node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result375__;
        come_call_finalizer3(value_752,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((obj_762) ? obj_762 = come_decrement_ref_count2(obj_762, ((struct sNode*)obj_762)->finalize, ((struct sNode*)obj_762)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(params_763,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_766,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        ((node_767) ? node_767 = come_decrement_ref_count2(node_767, ((struct sNode*)node_767)->finalize, ((struct sNode*)node_767)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    else if(    *info->p==39) {
        sline_real_768=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_770=0;
                while(xisdigit(*info->p)) {
                    n_770=n_770*8+*info->p-48;
                    info->p++;
                }
                c_769=n_770;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_769=10;
                    info->p++;
                    break;
                    case 116:
                    c_769=9;
                    info->p++;
                    break;
                    case 114:
                    c_769=13;
                    info->p++;
                    break;
                    case 97:
                    c_769=7;
                    info->p++;
                    break;
                    case 102:
                    c_769=12;
                    info->p++;
                    break;
                    case 118:
                    c_769=11;
                    info->p++;
                    break;
                    case 98:
                    c_769=8;
                    info->p++;
                    break;
                    case 92:
                    c_769=92;
                    info->p++;
                    break;
                    case 48:
                    c_769=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_771=0;
                        while(xisdigit(*info->p)) {
                            n_771=n_771*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_769=n_771;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_772[128];
                        memset(&buf_772, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_772,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_773[2];
                            memset(&buf2_773, 0, sizeof(char)                            *(2)                            );
                            buf2_773[0]=*info->p;
                            buf2_773[1]=0;
                            info->p++;
                            strncat(buf_772,buf2_773,128);
                        }
                        n_774=strtoll(buf_772,((void*)0),0);
                        c_769=n_774;
                    }
                    break;
                    default:
                    c_769=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_769=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            multiple_assign_var29=((struct tuple2$2intcharph*)(__right_value956=err_msg(info,"close \' to make character value")));
            come_exception_var_c6_775=multiple_assign_var29->v1;
            Err_776=(char*)come_increment_ref_count(multiple_assign_var29->v2);
            ((Err_776)?(puts(Err_776),exit(0)):(0));
            come_call_finalizer3(__right_value956,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            (Err_776 = come_decrement_ref_count2(Err_776, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_768;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2139, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value958=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2139, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_769,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value961=_inf_value10));
            come_call_finalizer3(__right_value958,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value961) ? __right_value961 = come_decrement_ref_count2(__right_value961, ((struct sNode*)__right_value961)->finalize, ((struct sNode*)__right_value961)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result378__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_778=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_780=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_781=0;
                while(xisdigit(*info->p)) {
                    n_781=n_781*8+*info->p-48;
                    info->p++;
                }
                c_779=n_781;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_779=10;
                    info->p++;
                    break;
                    case 116:
                    c_779=9;
                    info->p++;
                    break;
                    case 114:
                    c_779=13;
                    info->p++;
                    break;
                    case 97:
                    c_779=7;
                    info->p++;
                    break;
                    case 92:
                    c_779=92;
                    info->p++;
                    break;
                    case 48:
                    c_779=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_782=0;
                        while(xisdigit(*info->p)) {
                            n_782=n_782*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_779=n_782;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_783[128];
                        memset(&buf_783, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_783,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_784[2];
                            memset(&buf2_784, 0, sizeof(char)                            *(2)                            );
                            buf2_784[0]=*info->p;
                            buf2_784[1]=0;
                            info->p++;
                            strncat(buf_783,buf2_784,128);
                        }
                        n_785=strtoll(buf_783,((void*)0),0);
                        c_779=n_785;
                    }
                    break;
                    default:
                    c_779=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_780=(_Bool)0;
            p2_786=*(unsigned char*)info->p;
            if(            p2_786>127) {
                char str_788[4+1];
                memset(&str_788, 0, sizeof(char)                *(4+1)                );
                size_787=((p2_786&128)>>7)+((p2_786&64)>>6)+((p2_786&32)>>5)+((p2_786&16)>>4);
                if(                size_787>4) {
                    multiple_assign_var30=((struct tuple2$2intcharph*)(__right_value962=err_msg(info,"invalid utf-8 character. MB_LEN_MAX")));
                    come_exception_var_c7_789=multiple_assign_var30->v1;
                    Err_790=(char*)come_increment_ref_count(multiple_assign_var30->v2);
                    ((Err_790)?(puts(Err_790),exit(0)):(0));
                    come_call_finalizer3(__right_value962,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    info->err_num++;
                    (Err_790 = come_decrement_ref_count2(Err_790, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    memcpy(str_788,info->p,size_787);
                    str_788[size_787]=0;
                    if(                    mbtowc(&c_779,str_788,size_787)<0) {
                        perror("mbtowc");
                        multiple_assign_var31=((struct tuple2$2intcharph*)(__right_value963=err_msg(info,"invalid utf-8 character. mbtowc")));
                        come_exception_var_c8_791=multiple_assign_var31->v1;
                        Err_792=(char*)come_increment_ref_count(multiple_assign_var31->v2);
                        ((Err_792)?(puts(Err_792),exit(0)):(0));
                        come_call_finalizer3(__right_value963,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        info->err_num++;
                        (Err_792 = come_decrement_ref_count2(Err_792, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        info->p+=size_787;
                    }
                }
            }
            else {
                c_779=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            multiple_assign_var32=((struct tuple2$2intcharph*)(__right_value964=err_msg(info,"close \' to make character value")));
            come_exception_var_c9_793=multiple_assign_var32->v1;
            Err_794=(char*)come_increment_ref_count(multiple_assign_var32->v2);
            ((Err_794)?(puts(Err_794),exit(0)):(0));
            come_call_finalizer3(__right_value964,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            info->err_num++;
            (Err_794 = come_decrement_ref_count2(Err_794, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_778;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2281, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value966=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2281, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0)),c_779,quote_780,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value969=_inf_value11));
            come_call_finalizer3(__right_value966,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value969) ? __right_value969 = come_decrement_ref_count2(__right_value969, ((struct sNode*)__right_value969)->finalize, ((struct sNode*)__right_value969)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result381__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_796=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_797=info->sline;
        value_798=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2292, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_799=info->p;
                sline_800=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_799;
                    info->sline=sline_800;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_798,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_798,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_798,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_801=info->sline;
                info->sline=sline_797;
                multiple_assign_var33=((struct tuple2$2intcharph*)(__right_value972=err_msg(info,"close \" to make c string value")));
                come_exception_var_c10_802=multiple_assign_var33->v1;
                Err_803=(char*)come_increment_ref_count(multiple_assign_var33->v2);
                ((Err_803)?(puts(Err_803),exit(0)):(0));
                come_call_finalizer3(__right_value972,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_803 = come_decrement_ref_count2(Err_803, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_798,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_804=value_798->len;
        wstr_805=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_804+1)), "06str.c", 2343, "unsigned int*", (void*)0, (void*)0, (void*)0, (void*)0));
        str_806=value_798->buf;
        if(        mbstowcs(wstr_805,str_806,len_804+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_805[len_804]=0;
        info->sline_real=sline_real_796;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2355, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value975=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2355, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(unsigned int*)come_increment_ref_count(wstr_805),sline_797,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value979=_inf_value12));
        come_call_finalizer3(value_798,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_805 = come_decrement_ref_count2(wstr_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(__right_value975,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value979) ? __right_value979 = come_decrement_ref_count2(__right_value979, ((struct sNode*)__right_value979)->finalize, ((struct sNode*)__right_value979)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result384__;
        come_call_finalizer3(value_798,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (wstr_805 = come_decrement_ref_count2(wstr_805, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_808=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_809=info->sline;
        exps_810=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2365, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        value_811=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2366, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_812=info->p;
                sline_813=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_812;
                    info->sline=sline_813;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_811,37);
                buffer_append_char(value_811,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_811,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_814=0;
                    while(xisdigit(*info->p)&&len_814<3) {
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        len_814++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_811,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_815=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_add(exps_810,(struct sNode*)come_increment_ref_count(exp_815));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_811,"%s");
                    ((exp_815) ? exp_815 = come_decrement_ref_count2(exp_815, ((struct sNode*)exp_815)->finalize, ((struct sNode*)exp_815)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_811,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_816=info->sline;
                info->sline=sline_809;
                multiple_assign_var34=((struct tuple2$2intcharph*)(__right_value985=err_msg(info,"close \" to make embbeded string value")));
                come_exception_var_c11_817=multiple_assign_var34->v1;
                Err_818=(char*)come_increment_ref_count(multiple_assign_var34->v2);
                ((Err_818)?(puts(Err_818),exit(0)):(0));
                come_call_finalizer3(__right_value985,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                exit(2);
                (Err_818 = come_decrement_ref_count2(Err_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_811,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_808;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2514, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value988=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2514, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(value_811)),(struct list$1sNodeph*)come_increment_ref_count(exps_810),sline_809,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result385__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value989=_inf_value13));
        come_call_finalizer3(exps_810,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_811,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value988,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        ((__right_value989) ? __right_value989 = come_decrement_ref_count2(__right_value989, ((struct sNode*)__right_value989)->finalize, ((struct sNode*)__right_value989)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
        gComeFunResultObject = (void*)0;
        return __result385__;
        come_call_finalizer3(exps_810,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(value_811,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_819=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_820=info->p;
        no_comma_821=info->no_comma;
        info->no_comma=(_Bool)1;
        node_822=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_821;
        p2_823=info->p;
        first_element_source_824=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2533, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(first_element_source_824,p_820,p2_823-p_820);
        buffer_append_char(first_element_source_824,0);
        list_elements_825=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2538, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_keys_826=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2540, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        map_elements_827=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2541, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(map_keys_826,(struct sNode*)come_increment_ref_count(node_822));
            no_comma_828=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_829=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_828;
            list$1sNodephp_push_back(map_elements_827,(struct sNode*)come_increment_ref_count(node2_829));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2564, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1001=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2564, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_826),(struct list$1sNodeph*)come_increment_ref_count(map_elements_827),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result388__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1006=_inf_value14));
                ((node2_829) ? node2_829 = come_decrement_ref_count2(node2_829, ((struct sNode*)node2_829)->finalize, ((struct sNode*)node2_829)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_822) ? node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(first_element_source_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_825,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_826,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_827,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1001,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((__right_value1006) ? __right_value1006 = come_decrement_ref_count2(__right_value1006, ((struct sNode*)__right_value1006)->finalize, ((struct sNode*)__right_value1006)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                gComeFunResultObject = (void*)0;
                return __result388__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_831=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_832=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_831;
                    list$1sNodephp_push_back(map_keys_826,(struct sNode*)come_increment_ref_count(node2_832));
                    expected_next_character(58,info);
                    no_comma_831=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_833=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_831;
                    list$1sNodephp_push_back(map_elements_827,(struct sNode*)come_increment_ref_count(node3_833));
                    if(                    *info->p==0) {
                        multiple_assign_var35=((struct tuple2$2intcharph*)(__right_value1009=err_msg(info,"invalid source end")));
                        come_exception_var_c12_834=multiple_assign_var35->v1;
                        Err_835=(char*)come_increment_ref_count(multiple_assign_var35->v2);
                        ((Err_835)?(puts(Err_835),exit(0)):(0));
                        come_call_finalizer3(__right_value1009,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_835 = come_decrement_ref_count2(Err_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        ((node2_832) ? node2_832 = come_decrement_ref_count2(node2_832, ((struct sNode*)node2_832)->finalize, ((struct sNode*)node2_832)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        ((node3_833) ? node3_833 = come_decrement_ref_count2(node3_833, ((struct sNode*)node3_833)->finalize, ((struct sNode*)node3_833)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                        break;
                    }
                    else {
                        multiple_assign_var36=((struct tuple2$2intcharph*)(__right_value1010=err_msg(info,"invalid character(3)(%c)",*info->p)));
                        come_exception_var_c13_836=multiple_assign_var36->v1;
                        Err_837=(char*)come_increment_ref_count(multiple_assign_var36->v2);
                        ((Err_837)?(puts(Err_837),exit(0)):(0));
                        come_call_finalizer3(__right_value1010,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        exit(2);
                        (Err_837 = come_decrement_ref_count2(Err_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    ((node2_832) ? node2_832 = come_decrement_ref_count2(node2_832, ((struct sNode*)node2_832)->finalize, ((struct sNode*)node2_832)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    ((node3_833) ? node3_833 = come_decrement_ref_count2(node3_833, ((struct sNode*)node3_833)->finalize, ((struct sNode*)node3_833)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2609, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value1012=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2609, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(map_keys_826),(struct list$1sNodeph*)come_increment_ref_count(map_elements_827),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1013=_inf_value15));
                ((node2_829) ? node2_829 = come_decrement_ref_count2(node2_829, ((struct sNode*)node2_829)->finalize, ((struct sNode*)node2_829)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                ((node_822) ? node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                come_call_finalizer3(first_element_source_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(list_elements_825,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_keys_826,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(map_elements_827,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value1012,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                ((__right_value1013) ? __right_value1013 = come_decrement_ref_count2(__right_value1013, ((struct sNode*)__right_value1013)->finalize, ((struct sNode*)__right_value1013)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
                gComeFunResultObject = (void*)0;
                return __result389__;
            }
            ((node2_829) ? node2_829 = come_decrement_ref_count2(node2_829, ((struct sNode*)node2_829)->finalize, ((struct sNode*)node2_829)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_825,(struct sNode*)come_increment_ref_count(node_822));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodephp_push_back(list_elements_825,(struct sNode*)come_increment_ref_count(node_822));
            while((_Bool)1) {
                no_comma_838=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_839=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_838;
                list$1sNodephp_push_back(list_elements_825,(struct sNode*)come_increment_ref_count(node2_839));
                if(                *info->p==0) {
                    multiple_assign_var37=((struct tuple2$2intcharph*)(__right_value1015=err_msg(info,"invalid source end")));
                    come_exception_var_c14_840=multiple_assign_var37->v1;
                    Err_841=(char*)come_increment_ref_count(multiple_assign_var37->v2);
                    ((Err_841)?(puts(Err_841),exit(0)):(0));
                    come_call_finalizer3(__right_value1015,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_841 = come_decrement_ref_count2(Err_841, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    ((node2_839) ? node2_839 = come_decrement_ref_count2(node2_839, ((struct sNode*)node2_839)->finalize, ((struct sNode*)node2_839)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
                    break;
                }
                else {
                    multiple_assign_var38=((struct tuple2$2intcharph*)(__right_value1016=err_msg(info,"invalid character(4)(%c)",*info->p)));
                    come_exception_var_c15_842=multiple_assign_var38->v1;
                    Err_843=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                    ((Err_843)?(puts(Err_843),exit(0)):(0));
                    come_call_finalizer3(__right_value1016,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    exit(2);
                    (Err_843 = come_decrement_ref_count2(Err_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                ((node2_839) ? node2_839 = come_decrement_ref_count2(node2_839, ((struct sNode*)node2_839)->finalize, ((struct sNode*)node2_839)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            }
        }
        else {
            multiple_assign_var39=((struct tuple2$2intcharph*)(__right_value1017=err_msg(info,"invalid character(5)(%c)",*info->p)));
            come_exception_var_c16_844=multiple_assign_var39->v1;
            Err_845=(char*)come_increment_ref_count(multiple_assign_var39->v2);
            ((Err_845)?(puts(Err_845),exit(0)):(0));
            come_call_finalizer3(__right_value1017,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_845 = come_decrement_ref_count2(Err_845, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        list$1sNodephp_length(list_elements_825)>0) {
            info->sline_real=sline_real_819;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2661, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value1019=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2661, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(list_elements_825),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1023=_inf_value16));
            ((node_822) ? node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            come_call_finalizer3(first_element_source_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(list_elements_825,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_keys_826,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(map_elements_827,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1019,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            ((__right_value1023) ? __right_value1023 = come_decrement_ref_count2(__right_value1023, ((struct sNode*)__right_value1023)->finalize, ((struct sNode*)__right_value1023)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
            gComeFunResultObject = (void*)0;
            return __result392__;
        }
        else {
        }
        ((node_822) ? node_822 = come_decrement_ref_count2(node_822, ((struct sNode*)node_822)->finalize, ((struct sNode*)node_822)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
        come_call_finalizer3(first_element_source_824,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(list_elements_825,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_keys_826,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(map_elements_827,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_847=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result393__ = gComeFunResultObject = __result_obj__ = node_847;
        ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):0);
        gComeFunResultObject = (void*)0;
        return __result393__;
        ((node_847) ? node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    __result394__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result367__;
void* __right_value833 = (void*)0;
struct sSStringNode* result_716;
void* __right_value834 = (void*)0;
char* __dec_obj225;
void* __right_value835 = (void*)0;
char* __dec_obj226;
void* __right_value836 = (void*)0;
struct list$1sNodeph* __dec_obj227;
struct sSStringNode* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_716=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_716->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj225=result_716->sname;
        result_716->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_716->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj226=result_716->value;
        result_716->value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->value));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj227=result_716->exps;
        result_716->exps=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->exps));
        come_call_finalizer3(__dec_obj227,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_716;
    come_call_finalizer3(result_716,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result371__;
void* __right_value850 = (void*)0;
struct sBufferNode* result_735;
void* __right_value851 = (void*)0;
char* __dec_obj228;
void* __right_value852 = (void*)0;
struct buffer* __dec_obj229;
struct sBufferNode* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_735=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "struct sBufferNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_735->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj228=result_735->sname;
        result_735->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_735->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj229=result_735->value;
        result_735->value=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->value));
        come_call_finalizer3(__dec_obj229,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_735->size=self->size;
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_735;
    come_call_finalizer3(result_735,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result376__;
void* __right_value959 = (void*)0;
struct sCharNode* result_777;
void* __right_value960 = (void*)0;
char* __dec_obj232;
struct sCharNode* __result377__;
    if(    self==(void*)0) {
        __result376__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    result_777=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_777->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj232=result_777->sname;
        result_777->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_777->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_777->value=self->value;
    }
    __result377__ = gComeFunResultObject = __result_obj__ = result_777;
    come_call_finalizer3(result_777,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result379__;
void* __right_value967 = (void*)0;
struct sWCharNode* result_795;
void* __right_value968 = (void*)0;
char* __dec_obj233;
struct sWCharNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_795=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_795->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_795->sname;
        result_795->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_795->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_795->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_795->quote=self->quote;
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_795;
    come_call_finalizer3(result_795,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result382__;
void* __right_value976 = (void*)0;
struct sWStringNode* result_807;
void* __right_value977 = (void*)0;
char* __dec_obj234;
void* __right_value978 = (void*)0;
unsigned int* __dec_obj235;
struct sWStringNode* __result383__;
    if(    self==(void*)0) {
        __result382__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    result_807=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_807->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj234=result_807->sname;
        result_807->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_807->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj235=result_807->value;
        result_807->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result383__ = gComeFunResultObject = __result_obj__ = result_807;
    come_call_finalizer3(result_807,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result386__;
void* __right_value1002 = (void*)0;
struct sMapNode* result_830;
void* __right_value1003 = (void*)0;
char* __dec_obj236;
void* __right_value1004 = (void*)0;
struct list$1sNodeph* __dec_obj237;
void* __right_value1005 = (void*)0;
struct list$1sNodeph* __dec_obj238;
struct sMapNode* __result387__;
    if(    self==(void*)0) {
        __result386__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_830=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_830->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_830->sname;
        result_830->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_830->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj237=result_830->map_key_elements;
        result_830->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_key_elements));
        come_call_finalizer3(__dec_obj237,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj238=result_830->map_elements;
        result_830->map_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->map_elements));
        come_call_finalizer3(__dec_obj238,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_830;
    come_call_finalizer3(result_830,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result390__;
void* __right_value1020 = (void*)0;
struct sListNode* result_846;
void* __right_value1021 = (void*)0;
char* __dec_obj239;
void* __right_value1022 = (void*)0;
struct list$1sNodeph* __dec_obj240;
struct sListNode* __result391__;
    if(    self==(void*)0) {
        __result390__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    result_846=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_846->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_846->sname;
        result_846->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_846->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj240=result_846->list_elements;
        result_846->list_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->list_elements));
        come_call_finalizer3(__dec_obj240,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result391__ = gComeFunResultObject = __result_obj__ = result_846;
    come_call_finalizer3(result_846,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result391__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_848;
char* p_849;
char* name_850;
void* __right_value1027 = (void*)0;
char* __dec_obj241;
_Bool no_comma_851;
void* __right_value1028 = (void*)0;
struct sNode* node_852;
void* __right_value1029 = (void*)0;
struct sNode* __dec_obj242;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct tuple2$2intcharph* multiple_assign_var40 = (void*)0;
int come_exception_var_c17_856=0;
char* Err_857=0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value1045 = (void*)0;
struct sNode* __result400__;
name_850 = (void*)0;
    tuple_elements_848=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2676, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        p_849=info->p;
        if(        named_tuple) {
            __dec_obj241=name_850;
            name_850=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_851=info->no_comma;
        info->no_comma=(_Bool)1;
        node_852=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj242=node_852;
        node_852=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_852),info));
        if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_851;
        list$1tuple2$2charphsNodephphp_push_back(tuple_elements_848,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2695, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone, tuple2$2charphsNodeph_get_hash_key, tuple2$2charphsNodeph_equals)),(char*)come_increment_ref_count(come_call_cloner(string_clone, name_850)),(struct sNode*)come_increment_ref_count(node_852))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            (name_850 = come_decrement_ref_count2(name_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_852) ? node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
            break;
        }
        else {
            multiple_assign_var40=((struct tuple2$2intcharph*)(__right_value1036=err_msg(info,"invalid character in tuple expression (%c)",*info->p)));
            come_exception_var_c17_856=multiple_assign_var40->v1;
            Err_857=(char*)come_increment_ref_count(multiple_assign_var40->v2);
            ((Err_857)?(puts(Err_857),exit(0)):(0));
            come_call_finalizer3(__right_value1036,tuple2$2intcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            exit(2);
            (Err_857 = come_decrement_ref_count2(Err_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        (name_850 = come_decrement_ref_count2(name_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_852) ? node_852 = come_decrement_ref_count2(node_852, ((struct sNode*)node_852)->finalize, ((struct sNode*)node_852)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2712, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value1038=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2712, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_848),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result400__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1045=_inf_value17));
    come_call_finalizer3(tuple_elements_848,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1038,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1045) ? __right_value1045 = come_decrement_ref_count2(__right_value1045, ((struct sNode*)__right_value1045)->finalize, ((struct sNode*)__right_value1045)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value1030 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_853;
struct tuple2$2charphsNodeph* __dec_obj243;
void* __right_value1031 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_854;
struct tuple2$2charphsNodeph* __dec_obj244;
void* __right_value1032 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_855;
struct tuple2$2charphsNodeph* __dec_obj245;
struct list$1tuple2$2charphsNodephph* __result395__;
    if(    self->len==0) {
        litem_853=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1030=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1452, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_853->prev=((void*)0);
        litem_853->next=((void*)0);
        __dec_obj243=litem_853->item;
        litem_853->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj243,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_853;
        self->head=litem_853;
    }
    else if(    self->len==1) {
        litem_854=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1031=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1462, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_854->prev=self->head;
        litem_854->next=((void*)0);
        __dec_obj244=litem_854->item;
        litem_854->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj244,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_854;
        self->head->next=litem_854;
    }
    else {
        litem_855=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value1032=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1472, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_855->prev=self->tail;
        litem_855->next=((void*)0);
        __dec_obj245=litem_855->item;
        litem_855->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj245,tuple2$2charphsNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_855;
        self->tail=litem_855;
    }
    self->len++;
    __result395__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result396__;
void* __right_value1039 = (void*)0;
struct sTupleNode* result_858;
void* __right_value1040 = (void*)0;
char* __dec_obj246;
void* __right_value1044 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj247;
struct sTupleNode* __result399__;
    if(    self==(void*)0) {
        __result396__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result396__;
    }
    result_858=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_858->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj246=result_858->sname;
        result_858->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_858->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj247=result_858->tuple_elements;
        result_858->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj247,list$1tuple2$2charphsNodephph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result399__ = gComeFunResultObject = __result_obj__ = result_858;
    come_call_finalizer3(result_858,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result397__;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_859;
struct list_item$1tuple2$2charphsNodephph* it_860;
void* __right_value1043 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result398__;
    if(    self==((void*)0)) {
        __result397__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result397__;
    }
    result_859=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1368, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_860=self->head;
    while(it_860!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_859,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_860->item)));
        it_860=it_860->next;
    }
    __result398__ = gComeFunResultObject = __result_obj__ = result_859;
    come_call_finalizer3(result_859,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result398__;
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
struct list$1sNodeph* tuple_elements_861;
struct sNode* node_862;
void* __right_value1048 = (void*)0;
struct sNode* node2_863;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value1054 = (void*)0;
struct sNode* __result403__;
    tuple_elements_861=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2717, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    node_862=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodephp_push_back(tuple_elements_861,(struct sNode*)come_increment_ref_count(node_862));
    node2_863=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_861,(struct sNode*)come_increment_ref_count(node2_863));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2727, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1050=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2727, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_861),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result403__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1054=_inf_value18));
    ((exp) ? exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(tuple_elements_861,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_862) ? node_862 = come_decrement_ref_count2(node_862, ((struct sNode*)node_862)->finalize, ((struct sNode*)node_862)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node2_863) ? node2_863 = come_decrement_ref_count2(node2_863, ((struct sNode*)node2_863)->finalize, ((struct sNode*)node2_863)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value1050,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1054) ? __right_value1054 = come_decrement_ref_count2(__right_value1054, ((struct sNode*)__right_value1054)->finalize, ((struct sNode*)__right_value1054)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result403__;
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result401__;
void* __right_value1051 = (void*)0;
struct sSomeNode* result_864;
void* __right_value1052 = (void*)0;
char* __dec_obj248;
void* __right_value1053 = (void*)0;
struct list$1sNodeph* __dec_obj249;
struct sSomeNode* __result402__;
    if(    self==(void*)0) {
        __result401__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result401__;
    }
    result_864=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_864->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj248=result_864->sname;
        result_864->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_864->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj249=result_864->tuple_elements;
        result_864->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj249,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result402__ = gComeFunResultObject = __result_obj__ = result_864;
    come_call_finalizer3(result_864,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result402__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct list$1sNodeph* tuple_elements_865;
void* __right_value1057 = (void*)0;
struct sNode* node_866;
void* __right_value1058 = (void*)0;
struct sNode* __dec_obj250;
void* __right_value1059 = (void*)0;
struct sNode* node2_867;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1062 = (void*)0;
struct sNode* __result404__;
    tuple_elements_865=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2732, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_866=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj250=node_866;
    node_866=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_866),info));
    if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodephp_push_back(tuple_elements_865,(struct sNode*)come_increment_ref_count(node_866));
    node2_867=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodephp_push_back(tuple_elements_865,(struct sNode*)come_increment_ref_count(node2_867));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2745, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1061=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2745, "struct sSomeNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_865),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1062=_inf_value19));
    come_call_finalizer3(tuple_elements_865,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_866) ? node_866 = come_decrement_ref_count2(node_866, ((struct sNode*)node_866)->finalize, ((struct sNode*)node_866)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node2_867) ? node2_867 = come_decrement_ref_count2(node2_867, ((struct sNode*)node2_867)->finalize, ((struct sNode*)node2_867)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value1061,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1062) ? __right_value1062 = come_decrement_ref_count2(__right_value1062, ((struct sNode*)__right_value1062)->finalize, ((struct sNode*)__right_value1062)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result404__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct list$1sNodeph* tuple_elements_868;
void* __right_value1065 = (void*)0;
struct sNode* node_869;
void* __right_value1066 = (void*)0;
struct sNode* __dec_obj251;
void* __right_value1067 = (void*)0;
struct sNode* node2_870;
struct sNode* node3_871;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1073 = (void*)0;
struct sNode* __result407__;
    tuple_elements_868=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2750, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    expected_next_character(40,info);
    node_869=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj251=node_869;
    node_869=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_869),info));
    if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_870=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodephp_push_back(tuple_elements_868,(struct sNode*)come_increment_ref_count(node2_870));
    node3_871=(struct sNode*)come_increment_ref_count(node_869);
    list$1sNodephp_push_back(tuple_elements_868,(struct sNode*)come_increment_ref_count(node3_871));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2765, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1069=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2765, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_868),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result407__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1073=_inf_value20));
    come_call_finalizer3(tuple_elements_868,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    ((node_869) ? node_869 = come_decrement_ref_count2(node_869, ((struct sNode*)node_869)->finalize, ((struct sNode*)node_869)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node2_870) ? node2_870 = come_decrement_ref_count2(node2_870, ((struct sNode*)node2_870)->finalize, ((struct sNode*)node2_870)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    ((node3_871) ? node3_871 = come_decrement_ref_count2(node3_871, ((struct sNode*)node3_871)->finalize, ((struct sNode*)node3_871)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):0);
    come_call_finalizer3(__right_value1069,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    ((__right_value1073) ? __right_value1073 = come_decrement_ref_count2(__right_value1073, ((struct sNode*)__right_value1073)->finalize, ((struct sNode*)__right_value1073)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, __result_obj__):0);
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result405__;
void* __right_value1070 = (void*)0;
struct sNoneNode* result_872;
void* __right_value1071 = (void*)0;
char* __dec_obj252;
void* __right_value1072 = (void*)0;
struct list$1sNodeph* __dec_obj253;
struct sNoneNode* __result406__;
    if(    self==(void*)0) {
        __result405__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    result_872=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_872->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj252=result_872->sname;
        result_872->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_872->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj253=result_872->tuple_elements;
        result_872->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->tuple_elements));
        come_call_finalizer3(__dec_obj253,list$1sNodeph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result406__ = gComeFunResultObject = __result_obj__ = result_872;
    come_call_finalizer3(result_872,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

