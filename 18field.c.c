// source head
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
struct __locale_struct;
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
extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
struct buffer
{
    char* buf;
    int len;
    int size;
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
struct integer
{
    long value;
};
struct floating
{
    double value;
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
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sType;
struct sClass;
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
struct sInfo;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
struct sNodeBase
{
    int sline;
    char* sname;
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
    struct tuple1$1sTypeph* mNoExceptionType;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
    struct list$1charph* mParamNames;
    struct tuple1$1sTypeph* mResultType;
    _Bool mVarArgs;
    struct sNode* mAlignas;
    _Bool mUnsigned;
    _Bool mShort;
    _Bool mLong;
    _Bool mLongLong;
    _Bool mConstant;
    _Bool mRegister;
    _Bool mVolatile;
    _Bool mStatic;
    _Bool mUniq;
    _Bool mRecord;
    _Bool mExtern;
    _Bool mRestrict;
    _Bool mImmutable;
    _Bool mHeap;
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
};
struct sVar;
struct sRightValueObject;
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
struct sVarTable;
struct sBlock;
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
    struct buffer* mSourceHead2;
    struct buffer* mSourceHead3;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
    struct buffer* mHeader;
};
struct sVarTable;
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
    struct list$1int* sline_stack;
    int sline_top;
    _Bool new_;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
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
struct sStoreFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
};
struct sNullCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
};
struct sNullableNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
};
struct sRangeCheckNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
};
struct sLoadFieldNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    char* mName;
};
struct sStoreArrayNode
{
    int sline;
    char* sname;
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
};
struct sLoadArrayNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* mArrayNum;
    _Bool mBreakGuard;
    struct sNode* mLeft;
    _Bool mQuote;
};
struct sLoadRangeArrayNode
{
    int sline;
    char* sname;
    struct list$1sNodeph* mArrayNum;
    struct sNode* mLeft;
    _Bool mQuote;
};

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
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
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
void buffer_force_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
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
_Bool int_equals(int self, int right);
_Bool short_equals(short self, short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
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
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(unsigned int c);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
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
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct _IO_FILE* f, char* str);
char* FILE_read(struct _IO_FILE* f);
int FILE_fclose(struct _IO_FILE* f);
int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);
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
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_come_last_code3(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
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
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
struct sNode* parse_none(struct sInfo* info);
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
_Bool compiletime_get_exception_value(struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
char* sStoreFieldNode_kind(struct sStoreFieldNode* self);
_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);
char* sNullCheckNode_kind(struct sNullCheckNode* self);
_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info);
char* sNullableNode_kind(struct sNullableNode* self);
_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info);
struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);
char* sRangeCheckNode_kind(struct sRangeCheckNode* self);
_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);
struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);
char* sLoadFieldNode_kind(struct sLoadFieldNode* self);
_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info);
struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sStoreArrayNode_kind(struct sStoreArrayNode* self);
_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info);
char* sLoadArrayNode_kind(struct sLoadArrayNode* self);
_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);
struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);
char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self);
_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
static void sNullableNode_finalize(struct sNullableNode* self);
static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2423, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2430, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2439, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2446, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2453, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2460, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2467, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2767, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2772, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2777, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2782, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2787, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2820, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2822, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2827, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2829, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2834, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2836, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2841, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2843, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2848, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2850, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2855, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2857, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2862, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2864, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2869, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2874, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2879, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2884, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2889, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2894, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2899, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2904, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2909, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2914, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2919, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2924, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2929, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2934, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
}
static inline unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static inline unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result11__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result23__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result25__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 227, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 237, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 247, "list_item$1char"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    it_19=self->head;
    while(it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 227, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 237, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 247, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    it_25=self->head;
    while(it_25!=((void*)0)) {
        prev_it_26=it_25;
        it_25=it_25->next;
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 227, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 237, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 247, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    it_31=self->head;
    while(it_31!=((void*)0)) {
        prev_it_32=it_31;
        it_31=it_31->next;
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 227, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 237, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 247, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    it_37=self->head;
    while(it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 227, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 237, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 247, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    it_43=self->head;
    while(it_43!=((void*)0)) {
        prev_it_44=it_43;
        it_43=it_43->next;
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 227, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 237, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 247, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 227, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 237, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 247, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    it_55=self->head;
    while(it_55!=((void*)0)) {
        prev_it_56=it_55;
        it_55=it_55->next;
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1021, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(    0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1021, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(    0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            /* U13 */self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1021, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(    0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1021, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(    0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1021, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(    0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1021, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(    0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1021, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(    0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}











_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
void* __right_value151 = (void*)0;
struct sType* generics_type_66;
struct sType* __dec_obj59;
struct sClass* klass_97;
char* class_name_98;
char* fun_name2_99;
struct sFun* operator_fun_100;
void* __right_value152 = (void*)0;
char* none_generics_name_101;
void* __right_value153 = (void*)0;
struct sType* obj_type_102;
void* __right_value154 = (void*)0;
char* __dec_obj60;
void* __right_value155 = (void*)0;
char* fun_name3_103;
struct sGenericsFun* generics_fun_104;
void* __right_value156 = (void*)0;
_Bool _if_conditional1;
_Bool __result87__;
void* __right_value157 = (void*)0;
char* __dec_obj86;
int i_110;
void* __right_value158 = (void*)0;
char* new_fun_name_111;
void* __right_value159 = (void*)0;
char* __dec_obj87;
_Bool result_112;
void* __right_value160 = (void*)0;
void* __right_value161 = (void*)0;
struct CVALUE* come_value_113;
char* left_value2_114;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
char* __dec_obj88;
void* __right_value165 = (void*)0;
char* __dec_obj89;
char* middle_value2_118;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
char* __dec_obj90;
void* __right_value169 = (void*)0;
char* __dec_obj91;
char* right_value2_119;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
char* __dec_obj92;
void* __right_value173 = (void*)0;
char* __dec_obj93;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
void* __right_value178 = (void*)0;
char* __dec_obj94;
void* __right_value179 = (void*)0;
struct sType* result_type1_120;
void* __right_value180 = (void*)0;
struct sType* result_type2_121;
void* __right_value181 = (void*)0;
struct sType* __dec_obj95;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
char* __dec_obj96;
void* __right_value184 = (void*)0;
char* __dec_obj97;
_Bool __result95__;
fun_name2_99 = (void*)0;
memset(&i_110, 0, sizeof(int));
left_value2_114 = (void*)0;
middle_value2_118 = (void*)0;
right_value2_119 = (void*)0;
    generics_type_66=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_66->mNoSolvedGenericsType->v1) {
        __dec_obj59=generics_type_66;
        generics_type_66=(struct sType*)come_increment_ref_count(generics_type_66->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    klass_97=type->mClass;
    class_name_98=klass_97->mName;
    operator_fun_100=((void*)0);
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_101=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_102=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj60=fun_name2_99;
        fun_name2_99=(char*)come_increment_ref_count(create_method_name(obj_type_102,(_Bool)0,fun_name,info,(_Bool)1));
        /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_103=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_101,fun_name));
        generics_fun_104=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_103,((void*)0));
        if(        generics_fun_104) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_99)),generics_fun_104,obj_type_102,info))),            _if_conditional1) {
                __result87__ = (_Bool)0;
                /* U13 */none_generics_name_101 = come_decrement_ref_count2(none_generics_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name3_103 = come_decrement_ref_count2(fun_name3_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(generics_type_66,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */fun_name2_99 = come_decrement_ref_count2(fun_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result87__;
            }
        }
        operator_fun_100=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_99);
        /* U13 */none_generics_name_101 = come_decrement_ref_count2(none_generics_name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */fun_name3_103 = come_decrement_ref_count2(fun_name3_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj86=fun_name2_99;
        fun_name2_99=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        /*G*/ __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_110=128-1;        i_110>=1;        i_110--        ){
            new_fun_name_111=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_99,i_110));
            operator_fun_100=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_111);
            if(            operator_fun_100) {
                __dec_obj87=fun_name2_99;
                fun_name2_99=(char*)come_increment_ref_count(__builtin_string(new_fun_name_111));
                /*G*/ __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */new_fun_name_111 = come_decrement_ref_count2(new_fun_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */new_fun_name_111 = come_decrement_ref_count2(new_fun_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_100==((void*)0)) {
            operator_fun_100=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_99);
        }
    }
    result_112=(_Bool)0;
    if(    operator_fun_100) {
        come_value_113=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61, "CVALUE"))));
        check_assign_type(((char*)(__right_value163=xsprintf("\%s is assigned to",((char*)(__right_value162=string_to_string(fun_name2_99)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,0), "18field.c", 63, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,0), "18field.c", 64, 1))->mHeap&&left_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,0), "18field.c", 65, 2)),left_value->type,left_value,info,(_Bool)1);
            __dec_obj88=left_value2_114;
            left_value2_114=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj89=left_value2_114;
            left_value2_114=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value167=xsprintf("\%s is assigned to",((char*)(__right_value166=string_to_string(fun_name2_99)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,1), "18field.c", 72, 3)),middle_value->type,middle_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,1), "18field.c", 73, 4))->mHeap&&middle_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,1), "18field.c", 74, 5)),middle_value->type,middle_value,info,(_Bool)1);
            __dec_obj90=middle_value2_118;
            middle_value2_118=(char*)come_increment_ref_count(xsprintf("%s",middle_value->c_value));
            /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj91=middle_value2_118;
            middle_value2_118=(char*)come_increment_ref_count(string_clone(middle_value->c_value));
            /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        check_assign_type(((char*)(__right_value171=xsprintf("\%s is assigned to",((char*)(__right_value170=string_to_string(fun_name2_99)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,2), "18field.c", 81, 6)),right_value->type,right_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,2), "18field.c", 82, 7))->mHeap&&right_value->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_100->mParamTypes,2), "18field.c", 83, 8)),right_value->type,right_value,info,(_Bool)1);
            __dec_obj92=right_value2_119;
            right_value2_119=(char*)come_increment_ref_count(xsprintf("%s",right_value->c_value));
            /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj93=right_value2_119;
            right_value2_119=(char*)come_increment_ref_count(string_clone(right_value->c_value));
            /*G*/ __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj94=come_value_113->c_value;
        come_value_113->c_value=(char*)come_increment_ref_count(xsprintf("\%s(\%s,\%s,\%s)",((char*)(__right_value174=string_to_string(fun_name2_99))),((char*)(__right_value175=string_to_string(left_value2_114))),((char*)(__right_value176=string_to_string(middle_value2_118))),((char*)(__right_value177=string_to_string(right_value2_119)))));
        /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /* U11 */__right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type1_120=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_100->mResultType));
        result_type2_121=(struct sType*)come_increment_ref_count(solve_generics(result_type1_120,generics_type_66,info));
        __dec_obj95=come_value_113->type;
        come_value_113->type=(struct sType*)come_increment_ref_count(sType_clone(result_type2_121));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_113->var=((void*)0);
        if(        result_type2_121->mHeap) {
            append_object_to_right_values2(come_value_113,(struct sType*)come_increment_ref_count(result_type2_121),info,(_Bool)0);
        }
        if(        result_type2_121->mGuardValue&&result_type2_121->mPointerNum>0) {
            __dec_obj96=come_value_113->c_value;
            come_value_113->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value182=make_type_name_string(result_type2_121,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),come_value_113->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            /*G*/ __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        __dec_obj97=come_value_113->c_value;
        come_value_113->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_113->c_value,come_value_113->type,info));
        /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_113->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_113));
        result_112=(_Bool)1;
        /*i*/come_call_finalizer3(come_value_113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */left_value2_114 = come_decrement_ref_count2(left_value2_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */middle_value2_118 = come_decrement_ref_count2(middle_value2_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /* U13 */right_value2_119 = come_decrement_ref_count2(right_value2_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type1_120,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_121,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result95__ = result_112;
    /*i*/come_call_finalizer3(generics_type_66,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */fun_name2_99 = come_decrement_ref_count2(fun_name2_99, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result95__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result65__;
void* __right_value116 = (void*)0;
struct sType* result_67;
void* __right_value119 = (void*)0;
struct tuple1$1sTypeph* __dec_obj37;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* __dec_obj38;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj39;
void* __right_value122 = (void*)0;
char* __dec_obj40;
void* __right_value129 = (void*)0;
struct list$1sTypeph* __dec_obj44;
void* __right_value137 = (void*)0;
struct list$1sNodeph* __dec_obj48;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __dec_obj49;
void* __right_value145 = (void*)0;
struct list$1charph* __dec_obj53;
void* __right_value146 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value147 = (void*)0;
struct sNode* __dec_obj55;
void* __right_value148 = (void*)0;
struct sNode* __dec_obj56;
void* __right_value149 = (void*)0;
char* __dec_obj57;
void* __right_value150 = (void*)0;
char* __dec_obj58;
struct sType* __result82__;
    if(    self==(void*)0) {
        __result65__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_67=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_67->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj37=result_67->mNoSolvedGenericsType;
        result_67->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj37,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj38=result_67->mOriginalLoadVarType;
        result_67->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj38,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj39=result_67->mNoExceptionType;
        result_67->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj39,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj40=result_67->mGenericsName;
        result_67->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj44=result_67->mGenericsTypes;
        result_67->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj44,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj48=result_67->mArrayNum;
        result_67->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj49=result_67->mParamTypes;
        result_67->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj49,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj53=result_67->mParamNames;
        result_67->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj53,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj54=result_67->mResultType;
        result_67->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj55=result_67->mAlignas;
        result_67->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_67->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_67->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_67->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_67->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_67->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_67->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_67->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_67->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_67->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_67->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_67->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_67->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_67->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_67->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_67->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_67->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_67->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_67->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_67->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_67->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_67->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj56=result_67->mSizeNum;
        result_67->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_67->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_67->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj57=result_67->mOriginalTypeName;
        result_67->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_67->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_67->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_67->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_67->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_67->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_67->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_67->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_67->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj58=result_67->mAsmName;
        result_67->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_67->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_67->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_67->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_67->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_67->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_67->mOriginIsArray=self->mOriginIsArray;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_67;
    /*i*/come_call_finalizer3(result_67,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result66__;
void* __right_value117 = (void*)0;
struct tuple1$1sTypeph* result_68;
void* __right_value118 = (void*)0;
struct sType* __dec_obj15;
struct tuple1$1sTypeph* __result67__;
    if(    self==(void*)0) {
        __result66__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    result_68=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj15=result_68->v1;
        result_68->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj15,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = result_68;
    /*i*/come_call_finalizer3(result_68,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj16;
struct tuple1$1sTypeph* __dec_obj18;
struct tuple1$1sTypeph* __dec_obj20;
char* __dec_obj22;
struct list$1sTypeph* __dec_obj23;
struct list$1sNodeph* __dec_obj25;
struct list$1sTypeph* __dec_obj27;
struct list$1charph* __dec_obj28;
struct tuple1$1sTypeph* __dec_obj30;
struct sNode* __dec_obj32;
struct sNode* __dec_obj33;
char* __dec_obj34;
char* __dec_obj35;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj16=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj16,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj18=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj18,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj20=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj22=self->mGenericsName;
            /*G*/ __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj23=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj25=self->mArrayNum;
            come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj27=self->mParamTypes;
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj28=self->mParamNames;
            come_call_finalizer3(__dec_obj28,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj30=self->mResultType;
            come_call_finalizer3(__dec_obj30,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj32=self->mAlignas;
            /* U1 */ if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj33=self->mSizeNum;
            /* U1 */ if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj34=self->mOriginalTypeName;
            /*G*/ __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj35=self->mAsmName;
            /*G*/ __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_69;
struct list_item$1sTypeph* prev_it_70;
    it_69=self->head;
    while(it_69!=((void*)0)) {
        prev_it_70=it_69;
        it_69=it_69->next;
        /*i*/come_call_finalizer3(prev_it_70,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj24;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj24=self->item;
            come_call_finalizer3(__dec_obj24,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_71;
struct list_item$1sTypeph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_73;
struct list_item$1sNodeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj26;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            /* U1 */ if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_75;
struct list_item$1sNodeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_77;
struct list_item$1charph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj29;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_79;
struct list_item$1charph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        /*i*/come_call_finalizer3(prev_it_80,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj31;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj31=self->v1;
            come_call_finalizer3(__dec_obj31,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj36;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result68__;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1sTypeph* result_81;
struct list_item$1sTypeph* it_82;
void* __right_value128 = (void*)0;
struct list$1sTypeph* __result71__;
    if(    self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_81=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 143, "list$1sTypeph"))));
    it_82=self->head;
    while(it_82!=((void*)0)) {
        list$1sTypeph_add(result_81,(struct sType*)come_increment_ref_count(sType_clone(it_82->item)));
        it_82=it_82->next;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_81;
    /*i*/come_call_finalizer3(result_81,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result69__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj41;
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj42;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj43;
struct list$1sTypeph* __result70__;
    if(    self->len==0) {
        litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 157, "list_item$1sTypeph"))));
        litem_83->prev=((void*)0);
        litem_83->next=((void*)0);
        __dec_obj41=litem_83->item;
        litem_83->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_83;
        self->head=litem_83;
    }
    else if(    self->len==1) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 167, "list_item$1sTypeph"))));
        litem_84->prev=self->head;
        litem_84->next=((void*)0);
        __dec_obj42=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head->next=litem_84;
    }
    else {
        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 177, "list_item$1sTypeph"))));
        litem_85->prev=self->tail;
        litem_85->next=((void*)0);
        __dec_obj43=litem_85->item;
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj43,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_85;
        self->tail=litem_85;
    }
    self->len++;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result72__;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1sNodeph* result_86;
struct list_item$1sNodeph* it_87;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __result77__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_86=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 143, "list$1sNodeph"))));
    it_87=self->head;
    while(it_87!=((void*)0)) {
        list$1sNodeph_add(result_86,(struct sNode*)come_increment_ref_count(sNode_clone(it_87->item)));
        it_87=it_87->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_86;
    /*i*/come_call_finalizer3(result_86,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result73__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj45;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj46;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj47;
struct list$1sNodeph* __result74__;
    if(    self->len==0) {
        litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 157, "list_item$1sNodeph"))));
        litem_88->prev=((void*)0);
        litem_88->next=((void*)0);
        __dec_obj45=litem_88->item;
        litem_88->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_88;
        self->head=litem_88;
    }
    else if(    self->len==1) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 167, "list_item$1sNodeph"))));
        litem_89->prev=self->head;
        litem_89->next=((void*)0);
        __dec_obj46=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_89;
        self->head->next=litem_89;
    }
    else {
        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 177, "list_item$1sNodeph"))));
        litem_90->prev=self->tail;
        litem_90->next=((void*)0);
        __dec_obj47=litem_90->item;
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, ((struct sNode*)__dec_obj47)->finalize, ((struct sNode*)__dec_obj47)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_90;
        self->tail=litem_90;
    }
    self->len++;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result75__;
void* __right_value135 = (void*)0;
struct sNode* result_91;
struct sNode* __result76__;
    if(    self==(void*)0) {
        __result75__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    result_91=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_91->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_91->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_91->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_91->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_91->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_91->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_91->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_91->kind=self->kind;
    }
    __result76__ = gComeFunResultObject = __result_obj__ = result_91;
    if(result_91) { result_91 = come_decrement_ref_count2(result_91, ((struct sNode*)result_91)->finalize, ((struct sNode*)result_91)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result78__;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct list$1charph* result_92;
struct list_item$1charph* it_93;
void* __right_value144 = (void*)0;
struct list$1charph* __result81__;
    if(    self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_92=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 143, "list$1charph"))));
    it_93=self->head;
    while(it_93!=((void*)0)) {
        list$1charph_add(result_92,(char*)come_increment_ref_count(string_clone(it_93->item)));
        it_93=it_93->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_92;
    /*i*/come_call_finalizer3(result_92,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj50;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj51;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj52;
struct list$1charph* __result80__;
    if(    self->len==0) {
        litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 157, "list_item$1charph"))));
        litem_94->prev=((void*)0);
        litem_94->next=((void*)0);
        __dec_obj50=litem_94->item;
        litem_94->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_94;
        self->head=litem_94;
    }
    else if(    self->len==1) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 167, "list_item$1charph"))));
        litem_95->prev=self->head;
        litem_95->next=((void*)0);
        __dec_obj51=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head->next=litem_95;
    }
    else {
        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 177, "list_item$1charph"))));
        litem_96->prev=self->tail;
        litem_96->next=((void*)0);
        __dec_obj52=litem_96->item;
        litem_96->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_96;
        self->tail=litem_96;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_105;
unsigned int it_106;
struct sGenericsFun* __result83__;
struct sGenericsFun* __result84__;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
    hash_105=string_get_hash_key(((char*)key))%self->size;
    it_106=hash_105;
    while((_Bool)1) {
        if(        self->item_existance[it_106]) {
            if(            string_equals(self->keys[it_106],key)) {
                __result83__ = gComeFunResultObject = __result_obj__ = self->items[it_106];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result83__;
            }
            it_106++;
            if(            it_106>=self->size) {
                it_106=0;
            }
            else if(            it_106==hash_105) {
                __result84__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result84__;
            }
        }
        else {
            __result85__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result85__;
        }
    }
    __result86__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj61;
struct list$1charph* __dec_obj62;
struct list$1charph* __dec_obj63;
char* __dec_obj64;
struct sType* __dec_obj65;
struct list$1sTypeph* __dec_obj66;
struct list$1charph* __dec_obj67;
struct list$1charph* __dec_obj68;
char* __dec_obj69;
char* __dec_obj70;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj61=self->mImplType;
            come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj62=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj62,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj63=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj63,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj64=self->mName;
            /*G*/ __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj65=self->mResultType;
            come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj66=self->mParamTypes;
            come_call_finalizer3(__dec_obj66,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj67=self->mParamNames;
            come_call_finalizer3(__dec_obj67,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj68=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj68,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj69=self->mBlock;
            /*G*/ __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj70=self->mGenericsSName;
            /*G*/ __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_107;
unsigned int hash_108;
unsigned int it_109;
struct sFun* __result88__;
struct sFun* __result89__;
struct sFun* __result90__;
struct sFun* __result91__;
default_value_107 = (void*)0;
    memset(&default_value_107,0,sizeof(struct sFun*));
    hash_108=string_get_hash_key(((char*)key))%self->size;
    it_109=hash_108;
    while((_Bool)1) {
        if(        self->item_existance[it_109]) {
            if(            string_equals(self->keys[it_109],key)) {
                __result88__ = gComeFunResultObject = __result_obj__ = self->items[it_109];
                /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result88__;
            }
            it_109++;
            if(            it_109>=self->size) {
                it_109=0;
            }
            else if(            it_109==hash_108) {
                __result89__ = gComeFunResultObject = __result_obj__ = default_value_107;
                /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result89__;
            }
        }
        else {
            __result90__ = gComeFunResultObject = __result_obj__ = default_value_107;
            /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result90__;
        }
    }
    __result91__ = gComeFunResultObject = __result_obj__ = default_value_107;
    /*i*/come_call_finalizer3(default_value_107,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj71;
struct sType* __dec_obj72;
struct list$1sTypeph* __dec_obj73;
struct list$1charph* __dec_obj74;
struct list$1charph* __dec_obj75;
struct sType* __dec_obj76;
struct sBlock* __dec_obj77;
struct buffer* __dec_obj80;
struct buffer* __dec_obj81;
struct buffer* __dec_obj82;
struct buffer* __dec_obj83;
char* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj71=self->mName;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj72=self->mResultType;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj73=self->mParamTypes;
            come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj74=self->mParamNames;
            come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj75=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj76=self->mLambdaType;
            come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj77=self->mBlock;
            come_call_finalizer3(__dec_obj77,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj80=self->mSource;
            come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj81=self->mSourceHead;
            come_call_finalizer3(__dec_obj81,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj82=self->mSourceHead2;
            come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj83=self->mSourceDefer;
            come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj84=self->mComeHeader;
            /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj78;
struct sVarTable* __dec_obj79;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj78=self->mNodes;
            come_call_finalizer3(__dec_obj78,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj79=self->mVarTable;
            come_call_finalizer3(__dec_obj79,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_115;
int i_116;
struct sType* __result92__;
struct sType* default_value_117;
struct sType* __result93__;
default_value_117 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_115=self->head;
    i_116=0;
    while(it_115!=((void*)0)) {
        if(        position==i_116) {
            __result92__ = gComeFunResultObject = __result_obj__ = it_115->item;
            gComeFunResultObject = (void*)0;
            return __result92__;
        }
        it_115=it_115->next;
        i_116++;
    }
    memset(&default_value_117,0,sizeof(struct sType*));
    __result93__ = gComeFunResultObject = __result_obj__ = default_value_117;
    /*i*/come_call_finalizer3(default_value_117,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value185 = (void*)0;
struct list_item$1CVALUEph* litem_122;
struct CVALUE* __dec_obj98;
void* __right_value186 = (void*)0;
struct list_item$1CVALUEph* litem_123;
struct CVALUE* __dec_obj102;
void* __right_value187 = (void*)0;
struct list_item$1CVALUEph* litem_124;
struct CVALUE* __dec_obj103;
struct list$1CVALUEph* __result94__;
    if(    self->len==0) {
        litem_122=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value185=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 227, "list_item$1CVALUEph"))));
        litem_122->prev=((void*)0);
        litem_122->next=((void*)0);
        __dec_obj98=litem_122->item;
        litem_122->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_122;
        self->head=litem_122;
    }
    else if(    self->len==1) {
        litem_123=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value186=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 237, "list_item$1CVALUEph"))));
        litem_123->prev=self->head;
        litem_123->next=((void*)0);
        __dec_obj102=litem_123->item;
        litem_123->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_123;
        self->head->next=litem_123;
    }
    else {
        litem_124=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value187=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 247, "list_item$1CVALUEph"))));
        litem_124->prev=self->tail;
        litem_124->next=((void*)0);
        __dec_obj103=litem_124->item;
        litem_124->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_124;
        self->tail=litem_124;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj99;
struct sType* __dec_obj100;
char* __dec_obj101;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj99=self->c_value;
            /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj100=self->type;
            come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj101=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sNode* __dec_obj105;
void* __right_value190 = (void*)0;
struct sNode* __dec_obj106;
void* __right_value191 = (void*)0;
char* __dec_obj107;
struct sStoreFieldNode* __result96__;
    ((struct sNodeBase*)(__right_value188=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value188,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj105=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj106=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj107=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

char* sStoreFieldNode_kind(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
char* __result97__;
    __result97__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value192=__builtin_string("sStoreFieldNode")));
    /* U11 */__right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
struct sNode* left_125;
struct sNode* right_126;
void* __right_value193 = (void*)0;
char* name_127;
_Bool __result98__;
void* __right_value194 = (void*)0;
struct CVALUE* left_value_128;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
char* __dec_obj112;
_Bool __result99__;
void* __right_value197 = (void*)0;
struct CVALUE* right_value_129;
struct sType* right_type_130;
struct sType* left_type_131;
void* __right_value198 = (void*)0;
struct sType* left_type2_132;
struct sClass* klass_133;
struct sType* field_type_141;
int index_142;
char* child_field_name_143;
_Bool child_field_is_pointer_144;
_Bool __result104__;
struct list$1tuple2$2charphsTypephph* o2_saved_145;
struct tuple2$2charphsTypeph* field_148;
struct tuple2$2charphsTypeph* multiple_assign_var1 = (void*)0;
char* field_name_151=0;
struct sType* field_type2_152=0;
void* __right_value199 = (void*)0;
struct sType* __dec_obj120;
struct list$1tuple2$2charphsTypephph* o2_saved_153;
struct tuple2$2charphsTypeph* field_154;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_155=0;
struct sType* field_type2_156=0;
struct sClass* klass2_157;
struct list$1tuple2$2charphsTypephph* o2_saved_158;
struct tuple2$2charphsTypeph* field2_159;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* field_name2_160=0;
struct sType* field_type3_161=0;
void* __right_value200 = (void*)0;
char* __dec_obj121;
void* __right_value201 = (void*)0;
struct sType* __dec_obj122;
void* __right_value202 = (void*)0;
struct sType* __dec_obj123;
_Bool __result111__;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct CVALUE* come_value_162;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
void* __right_value207 = (void*)0;
_Bool __result112__;
char* c_value_163;
void* __right_value208 = (void*)0;
char* __dec_obj124;
void* __right_value209 = (void*)0;
char* __dec_obj125;
void* __right_value210 = (void*)0;
char* __dec_obj126;
void* __right_value211 = (void*)0;
char* __dec_obj127;
void* __right_value212 = (void*)0;
char* c_value_164;
void* __right_value213 = (void*)0;
char* __dec_obj128;
char* c_value_165;
void* __right_value214 = (void*)0;
char* __dec_obj129;
void* __right_value215 = (void*)0;
char* __dec_obj130;
void* __right_value216 = (void*)0;
char* __dec_obj131;
void* __right_value217 = (void*)0;
char* __dec_obj132;
void* __right_value218 = (void*)0;
char* c_value_166;
void* __right_value219 = (void*)0;
char* __dec_obj133;
_Bool __result113__;
char* c_value_167;
void* __right_value220 = (void*)0;
char* __dec_obj134;
void* __right_value221 = (void*)0;
char* __dec_obj135;
void* __right_value222 = (void*)0;
char* __dec_obj136;
void* __right_value223 = (void*)0;
char* __dec_obj137;
void* __right_value224 = (void*)0;
char* c_value_168;
void* __right_value225 = (void*)0;
char* __dec_obj138;
char* c_value_169;
void* __right_value226 = (void*)0;
char* __dec_obj139;
void* __right_value227 = (void*)0;
char* __dec_obj140;
void* __right_value228 = (void*)0;
char* __dec_obj141;
void* __right_value229 = (void*)0;
char* __dec_obj142;
void* __right_value230 = (void*)0;
char* c_value_170;
void* __right_value231 = (void*)0;
char* __dec_obj143;
_Bool __result114__;
void* __right_value232 = (void*)0;
char* __dec_obj144;
void* __right_value233 = (void*)0;
char* __dec_obj145;
void* __right_value234 = (void*)0;
char* __dec_obj146;
void* __right_value235 = (void*)0;
char* __dec_obj147;
void* __right_value236 = (void*)0;
char* __dec_obj148;
void* __right_value237 = (void*)0;
char* __dec_obj149;
_Bool __result115__;
void* __right_value238 = (void*)0;
struct sType* __dec_obj150;
_Bool __result116__;
c_value_163 = (void*)0;
c_value_165 = (void*)0;
c_value_167 = (void*)0;
c_value_169 = (void*)0;
    left_125=self->mLeft;
    right_126=self->mRight;
    name_127=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    !node_compile(left_125,info)) {
        __result98__ = (_Bool)0;
        /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result98__;
    }
    left_value_128=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_128->type->mPointerNum>0) {
        __dec_obj112=left_value_128->c_value;
        left_value_128->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value195=make_type_name_string(left_value_128->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_128->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    if(    !node_compile(right_126,info)) {
        __result99__ = (_Bool)0;
        /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result99__;
    }
    right_value_129=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    right_type_130=right_value_129->type;
    dec_stack_ptr(1,info);
    left_type_131=left_value_128->type;
    left_type2_132=(struct sType*)come_increment_ref_count(solve_generics(left_type_131,left_type_131,info));
    klass_133=left_type2_132->mClass;
    klass_133=map$2charphsClassphp_operator_load_element(info->classes,klass_133->mName);
    field_type_141=((void*)0);
    index_142=0;
    child_field_name_143=((void*)0);
    child_field_is_pointer_144=(_Bool)0;
    klass_133=map$2charphsClassphp_operator_load_element(info->classes,klass_133->mName);
    if(    klass_133->mFields==((void*)0)) {
        err_msg(info,"%s fields are null",klass_133->mName);
        __result104__ = (_Bool)0;
        /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */child_field_name_143 = come_decrement_ref_count2(child_field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result104__;
    }
    for(    o2_saved_145=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_133->mFields)),field_148=list$1tuple2$2charphsTypephph_begin((o2_saved_145));    !list$1tuple2$2charphsTypephph_end((o2_saved_145));    field_148=list$1tuple2$2charphsTypephph_next((o2_saved_145))    ){
        multiple_assign_var1=field_148;
        field_name_151=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type2_152=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        string_operator_equals(field_name_151,name_127)) {
            __dec_obj120=field_type_141;
            field_type_141=(struct sType*)come_increment_ref_count(sType_clone(field_type2_152));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */field_name_151 = come_decrement_ref_count2(field_name_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_152,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_142++;
        /* U13 */field_name_151 = come_decrement_ref_count2(field_name_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type2_152,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_145,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_142==list$1tuple2$2charphsTypephph_length(klass_133->mFields)) {
        index_142=0;
        for(        o2_saved_153=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_133->mFields)),field_154=list$1tuple2$2charphsTypephph_begin((o2_saved_153));        !list$1tuple2$2charphsTypephph_end((o2_saved_153));        field_154=list$1tuple2$2charphsTypephph_next((o2_saved_153))        ){
            multiple_assign_var2=field_154;
            field_name_155=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            field_type2_156=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            klass2_157=field_type2_156->mClass;
            for(            o2_saved_158=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_157->mFields)),field2_159=list$1tuple2$2charphsTypephph_begin((o2_saved_158));            !list$1tuple2$2charphsTypephph_end((o2_saved_158));            field2_159=list$1tuple2$2charphsTypephph_next((o2_saved_158))            ){
                multiple_assign_var3=field2_159;
                field_name2_160=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                field_type3_161=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                if(                string_operator_equals(field_name2_160,name_127)) {
                    __dec_obj121=child_field_name_143;
                    child_field_name_143=(char*)come_increment_ref_count(__builtin_string(field_name_155));
                    /*G*/ __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_156->mPointerNum>0) {
                        child_field_is_pointer_144=(_Bool)1;
                    }
                    __dec_obj122=field_type_141;
                    field_type_141=(struct sType*)come_increment_ref_count(sType_clone(field_type3_161));
                    come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */field_name2_160 = come_decrement_ref_count2(field_name2_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type3_161,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */field_name2_160 = come_decrement_ref_count2(field_name2_160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type3_161,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_158,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_143) {
                /* U13 */field_name_155 = come_decrement_ref_count2(field_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_156,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_155,name_127)) {
                __dec_obj123=field_type_141;
                field_type_141=(struct sType*)come_increment_ref_count(sType_clone(field_type2_156));
                come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */field_name_155 = come_decrement_ref_count2(field_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_156,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_142++;
            /* U13 */field_name_155 = come_decrement_ref_count2(field_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_156,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_153,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_142==list$1tuple2$2charphsTypephph_length(klass_133->mFields)) {
            err_msg(info,"field not found(%s) in %s(1)",name_127,klass_133->mName);
            __result111__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_143 = come_decrement_ref_count2(child_field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result111__;
        }
    }
    come_value_162=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 228, "CVALUE"))));
    check_assign_type(((char*)(__right_value206=xsprintf("\%s is assigned to",((char*)(__right_value205=string_to_string(name_127)))))),field_type_141,right_type_130,right_value_129,(_Bool)0,(_Bool)1,(_Bool)0,info);
    /* U11 */__right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    /* U11 */__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    right_type_130=((struct sType*)(__right_value207=sType_clone(right_value_129->type)));
    /*g*/come_call_finalizer3(__right_value207,sType_finalize, 0, 1, 0, 0, (void*)0);
    if(    field_type_141->mHeap&&!right_value_129->type->mHeap) {
        if(        string_operator_equals(right_value_129->type->mClass->mName,"void")&&right_value_129->type->mPointerNum==1) {
        }
        else {
            if(            !right_value_129->type->mDelegate&&!right_value_129->type->mShare&&!gComeGC) {
                err_msg(info,"require right value as heap object(%s)(1)",name_127);
                printf("right type is %s pointer num %d heap %d\n",right_value_129->type->mClass->mName,right_value_129->type->mPointerNum,right_value_129->type->mHeap);
                __result112__ = (_Bool)0;
                /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */child_field_name_143 = come_decrement_ref_count2(child_field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result112__;
            }
        }
    }
    if(    field_type_141->mHeap&&right_type_130->mHeap&&field_type_141->mPointerNum>0&&right_type_130->mPointerNum>0) {
        if(        left_value_128->type->mPointerNum==1) {
            if(            child_field_name_143) {
                if(                child_field_is_pointer_144) {
                    __dec_obj124=c_value_163;
                    c_value_163=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj125=c_value_163;
                    c_value_163=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_141,c_value_163,info,(_Bool)0,(_Bool)0);
                std_move(field_type_141,right_type_130,right_value_129,info,(_Bool)0);
                if(                child_field_is_pointer_144) {
                    __dec_obj126=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj127=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_163 = come_decrement_ref_count2(c_value_163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_164=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_128->c_value,name_127));
                decrement_ref_count_object(field_type_141,c_value_164,info,(_Bool)0,(_Bool)0);
                std_move(field_type_141,right_type_130,right_value_129,info,(_Bool)0);
                __dec_obj128=come_value_162->c_value;
                come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_128->c_value,name_127,right_value_129->c_value));
                /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_164 = come_decrement_ref_count2(c_value_164, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_128->type->mPointerNum==0) {
            if(            child_field_name_143) {
                if(                child_field_is_pointer_144) {
                    __dec_obj129=c_value_165;
                    c_value_165=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj130=c_value_165;
                    c_value_165=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_141,c_value_165,info,(_Bool)0,(_Bool)0);
                std_move(field_type_141,right_type_130,right_value_129,info,(_Bool)0);
                if(                child_field_is_pointer_144) {
                    __dec_obj131=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj132=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_165 = come_decrement_ref_count2(c_value_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_166=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_128->c_value,name_127));
                decrement_ref_count_object(field_type_141,c_value_166,info,(_Bool)0,(_Bool)0);
                std_move(field_type_141,right_value_129->type,right_value_129,info,(_Bool)0);
                __dec_obj133=come_value_162->c_value;
                come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_128->c_value,name_127,right_value_129->c_value));
                /*G*/ __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_166 = come_decrement_ref_count2(c_value_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_127,left_value_128->type->mPointerNum);
            __result113__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_143 = come_decrement_ref_count2(child_field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result113__;
        }
    }
    else if(    field_type_141->mHeap&&field_type_141->mPointerNum>0&&right_type_130->mPointerNum>0&&string_operator_equals(right_type_130->mClass->mName,"void")) {
        if(        left_value_128->type->mPointerNum==1) {
            if(            child_field_name_143) {
                if(                child_field_is_pointer_144) {
                    __dec_obj134=c_value_167;
                    c_value_167=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj135=c_value_167;
                    c_value_167=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_141,c_value_167,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_144) {
                    __dec_obj136=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj137=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_167 = come_decrement_ref_count2(c_value_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_168=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_128->c_value,name_127));
                decrement_ref_count_object(field_type_141,c_value_168,info,(_Bool)0,(_Bool)0);
                __dec_obj138=come_value_162->c_value;
                come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_128->c_value,name_127,right_value_129->c_value));
                /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_168 = come_decrement_ref_count2(c_value_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        left_value_128->type->mPointerNum==0) {
            if(            child_field_name_143) {
                if(                child_field_is_pointer_144) {
                    __dec_obj139=c_value_169;
                    c_value_169=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj140=c_value_169;
                    c_value_169=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_128->c_value,child_field_name_143,name_127));
                    /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                decrement_ref_count_object(field_type_141,c_value_169,info,(_Bool)0,(_Bool)0);
                if(                child_field_is_pointer_144) {
                    __dec_obj141=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj142=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                /* U13 */c_value_169 = come_decrement_ref_count2(c_value_169, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                c_value_170=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_128->c_value,name_127));
                decrement_ref_count_object(field_type_141,c_value_170,info,(_Bool)0,(_Bool)0);
                __dec_obj143=come_value_162->c_value;
                come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_128->c_value,name_127,right_value_129->c_value));
                /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                /* U13 */c_value_170 = come_decrement_ref_count2(c_value_170, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_127,left_value_128->type->mPointerNum);
            __result114__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_143 = come_decrement_ref_count2(child_field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result114__;
        }
    }
    else {
        if(        left_value_128->type->mPointerNum==1) {
            if(            child_field_name_143) {
                if(                child_field_is_pointer_144) {
                    __dec_obj144=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj145=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj146=come_value_162->c_value;
                come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s=%s",left_value_128->c_value,name_127,right_value_129->c_value));
                /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else if(        left_value_128->type->mPointerNum==0) {
            if(            child_field_name_143) {
                if(                child_field_is_pointer_144) {
                    __dec_obj147=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    __dec_obj148=come_value_162->c_value;
                    come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s=%s",left_value_128->c_value,child_field_name_143,name_127,right_value_129->c_value));
                    /*G*/ __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj149=come_value_162->c_value;
                come_value_162->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s=%s",left_value_128->c_value,name_127,right_value_129->c_value));
                /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_127,left_value_128->type->mPointerNum);
            __result115__ = (_Bool)0;
            /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_143 = come_decrement_ref_count2(child_field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result115__;
        }
    }
    __dec_obj150=come_value_162->type;
    come_value_162->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_141));
    come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_162->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_162));
    add_come_last_code(info,"%s",come_value_162->c_value);
    __result116__ = (_Bool)1;
    /* U13 */name_127 = come_decrement_ref_count2(name_127, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_value_128,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_129,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type2_132,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(field_type_141,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */child_field_name_143 = come_decrement_ref_count2(child_field_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_162,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result116__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj104;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj104=self->sname;
            /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_134;
unsigned int hash_135;
unsigned int it_136;
struct sClass* __result100__;
struct sClass* __result101__;
struct sClass* __result102__;
struct sClass* __result103__;
default_value_134 = (void*)0;
    memset(&default_value_134,0,sizeof(struct sClass*));
    hash_135=string_get_hash_key(((char*)key))%self->size;
    it_136=hash_135;
    while((_Bool)1) {
        if(        self->item_existance[it_136]) {
            if(            string_equals(self->keys[it_136],key)) {
                __result100__ = gComeFunResultObject = __result_obj__ = self->items[it_136];
                /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result100__;
            }
            it_136++;
            if(            it_136>=self->size) {
                it_136=0;
            }
            else if(            it_136==hash_135) {
                __result101__ = gComeFunResultObject = __result_obj__ = default_value_134;
                /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result101__;
            }
        }
        else {
            __result102__ = gComeFunResultObject = __result_obj__ = default_value_134;
            /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result102__;
        }
    }
    __result103__ = gComeFunResultObject = __result_obj__ = default_value_134;
    /*i*/come_call_finalizer3(default_value_134,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj113;
struct list$1tuple2$2charphsTypephph* __dec_obj114;
char* __dec_obj118;
char* __dec_obj119;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj113=self->mName;
            /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj114=self->mFields;
            come_call_finalizer3(__dec_obj114,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj118=self->mDeclareSName;
            /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj119=self->mParentClassName;
            /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_137;
struct list_item$1tuple2$2charphsTypephph* prev_it_138;
    it_137=self->head;
    while(it_137!=((void*)0)) {
        prev_it_138=it_137;
        it_137=it_137->next;
        /*i*/come_call_finalizer3(prev_it_138,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj115;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj115=self->item;
            come_call_finalizer3(__dec_obj115,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj116;
struct sType* __dec_obj117;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj116=self->v1;
            /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj117=self->v2;
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_139;
struct list_item$1tuple2$2charphsTypephph* prev_it_140;
    it_139=self->head;
    while(it_139!=((void*)0)) {
        prev_it_140=it_139;
        it_139=it_139->next;
        /*i*/come_call_finalizer3(prev_it_140,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_146;
struct tuple2$2charphsTypeph* __result105__;
struct tuple2$2charphsTypeph* __result106__;
struct tuple2$2charphsTypeph* result_147;
struct tuple2$2charphsTypeph* __result107__;
result_146 = (void*)0;
result_147 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_146,0,sizeof(struct tuple2$2charphsTypeph*));
        __result105__ = gComeFunResultObject = __result_obj__ = result_146;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    self->it=self->head;
    if(    self->it) {
        __result106__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    memset(&result_147,0,sizeof(struct tuple2$2charphsTypeph*));
    __result107__ = gComeFunResultObject = __result_obj__ = result_147;
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_149;
struct tuple2$2charphsTypeph* __result108__;
struct tuple2$2charphsTypeph* __result109__;
struct tuple2$2charphsTypeph* result_150;
struct tuple2$2charphsTypeph* __result110__;
result_149 = (void*)0;
result_150 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*));
        __result108__ = gComeFunResultObject = __result_obj__ = result_149;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result109__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    memset(&result_150,0,sizeof(struct tuple2$2charphsTypeph*));
    __result110__ = gComeFunResultObject = __result_obj__ = result_150;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
struct sNode* __dec_obj151;
struct sNullCheckNode* __result117__;
struct sNullCheckNode* __result118__;
    ((struct sNodeBase*)(__right_value239=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value239,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj151=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
    self->mOnlyNullCecker=only_null_checker;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

char* sNullCheckNode_kind(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value241 = (void*)0;
char* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value241=__builtin_string("sNullCheckNode")));
    /* U11 */__right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
struct sNode* left_171;
void* __right_value242 = (void*)0;
struct CVALUE* left_value_172;
void* __right_value243 = (void*)0;
char* method_name_173;
struct sType* obj_type_176;
struct sType* obj_type2_177;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
char* __dec_obj154;
struct sFun* fun_178;
_Bool __result124__;
void* __right_value246 = (void*)0;
struct sType* type_179;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct CVALUE* come_value_180;
void* __right_value249 = (void*)0;
char* __dec_obj155;
void* __right_value250 = (void*)0;
struct sType* __dec_obj156;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct CVALUE* come_value_181;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
char* __dec_obj157;
void* __right_value255 = (void*)0;
struct sType* __dec_obj158;
_Bool __result125__;
    left_171=self->mLeft;
    if(    !node_compile(left_171,info)) {
        return (_Bool)0;
    }
    left_value_172=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !self->mOnlyNullCecker&&left_value_172->type->mNoSolvedGenericsType&&left_value_172->type->mNoSolvedGenericsType->v1&&left_value_172->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_172->type->mNoSolvedGenericsType->v1->mClass->mName,"optional")) {
        method_name_173=(char*)come_increment_ref_count(create_method_name(left_value_172->type,(_Bool)0,"expect",info,(_Bool)1));
        if(        map$2charphsFunph_at(info->funcs,method_name_173,((void*)0))==((void*)0)) {
            obj_type_176=left_value_172->type->mNoSolvedGenericsType->v1;
            if(            list$1sTypeph_length(obj_type_176->mGenericsTypes)>0) {
                obj_type2_177=left_value_172->type;
                __dec_obj154=method_name_173;
                method_name_173=(char*)come_increment_ref_count(make_generics_function(obj_type2_177,(char*)come_increment_ref_count(__builtin_string("expect")),info,(_Bool)1));
                /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_172->type->mClass->mName);
                exit(1);
            }
        }
        fun_178=map$2charphsFunphp_operator_load_element(info->funcs,method_name_173);
        if(        fun_178==((void*)0)) {
            err_msg(info,"function not found(%s)",method_name_173);
            __result124__ = (_Bool)1;
            /* U13 */method_name_173 = come_decrement_ref_count2(method_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result124__;
        }
        type_179=(struct sType*)come_increment_ref_count(solve_generics(fun_178->mResultType,left_value_172->type,info));
        come_value_180=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 453, "CVALUE"))));
        __dec_obj155=come_value_180->c_value;
        come_value_180->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",method_name_173,left_value_172->c_value));
        /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj156=come_value_180->type;
        come_value_180->type=(struct sType*)come_increment_ref_count(sType_clone(type_179));
        come_call_finalizer3(__dec_obj156,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_180->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
        add_come_last_code(info,"%s",come_value_180->c_value);
        /* U13 */method_name_173 = come_decrement_ref_count2(method_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_179,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    !gComeDebug) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_172));
    }
    else if(    left_value_172->type->mPointerNum>0) {
        come_value_181=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 467, "CVALUE"))));
        __dec_obj157=come_value_181->c_value;
        come_value_181->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value253=make_type_name_string(left_value_172->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_172->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj158=come_value_181->type;
        come_value_181->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_172->type));
        come_call_finalizer3(__dec_obj158,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_181->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_181));
        add_come_last_code(info,"%s",come_value_181->c_value);
        /*i*/come_call_finalizer3(come_value_181,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_172));
    }
    __result125__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result125__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_174;
unsigned int it_175;
struct sFun* __result120__;
struct sFun* __result121__;
struct sFun* __result122__;
struct sFun* __result123__;
    hash_174=string_get_hash_key(((char*)key))%self->size;
    it_175=hash_174;
    while((_Bool)1) {
        if(        self->item_existance[it_175]) {
            if(            string_equals(self->keys[it_175],key)) {
                __result120__ = gComeFunResultObject = __result_obj__ = self->items[it_175];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result120__;
            }
            it_175++;
            if(            it_175>=self->size) {
                it_175=0;
            }
            else if(            it_175==hash_174) {
                __result121__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result121__;
            }
        }
        else {
            __result122__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result122__;
        }
    }
    __result123__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

struct sNullableNode* sNullableNode_initialize(struct sNullableNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct sNode* __dec_obj159;
struct sNullableNode* __result126__;
    ((struct sNodeBase*)(__right_value256=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value256,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj159=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* sNullableNode_kind(struct sNullableNode* self){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
char* __result127__;
    __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value258=__builtin_string("sNullableNode")));
    /* U11 */__right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

_Bool sNullableNode_compile(struct sNullableNode* self, struct sInfo* info){
struct sNode* left_182;
void* __right_value259 = (void*)0;
struct CVALUE* left_value_183;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_184;
_Bool __result130__;
    left_182=self->mLeft;
    if(    !node_compile(left_182,info)) {
        return (_Bool)0;
    }
    left_value_183=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_183->type->mPointerNum>0&&left_value_183->type->mNullValue) {
        come_value_184=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(left_value_183));
        come_value_184->type->mNullValue=(_Bool)0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
        add_come_last_code(info,"%s",come_value_184->c_value);
        /*i*/come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_183));
    }
    __result130__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result130__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result128__;
void* __right_value260 = (void*)0;
struct CVALUE* result_185;
void* __right_value261 = (void*)0;
char* __dec_obj162;
void* __right_value262 = (void*)0;
struct sType* __dec_obj163;
void* __right_value263 = (void*)0;
char* __dec_obj164;
struct CVALUE* __result129__;
    if(    self==(void*)0) {
        __result128__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result128__;
    }
    result_185=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj162=result_185->c_value;
        result_185->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj163=result_185->type;
        result_185->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_185->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_185->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj164=result_185->c_value_without_right_value_objects;
        result_185->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result129__ = gComeFunResultObject = __result_obj__ = result_185;
    /*i*/come_call_finalizer3(result_185,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

struct sNode* create_nullable_node(struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct sNode* _inf_value1;
struct sNullableNode* _inf_obj_value1;
void* __right_value270 = (void*)0;
struct sNode* __result133__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 529, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullableNode*)(__right_value266=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 529, "sNullableNode")),left,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullableNode_finalize;
    _inf_value1->clone=(void*)sNullableNode_clone;
    _inf_value1->compile=(void*)sNullableNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sNullableNode_kind;
    __result133__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value270=_inf_value1));
    /*g*/come_call_finalizer3(__right_value266,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value270) { __right_value270 = come_decrement_ref_count2(__right_value270, ((struct sNode*)__right_value270)->finalize, ((struct sNode*)__right_value270)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result133__;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct sNode* __dec_obj169;
void* __right_value273 = (void*)0;
struct sNode* __dec_obj170;
void* __right_value274 = (void*)0;
struct sNode* __dec_obj171;
struct sRangeCheckNode* __result134__;
    ((struct sNodeBase*)(__right_value271=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value271,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj169=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj170=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(begin));
    /* U1 */ if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj171=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(end));
    /* U1 */ if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); };
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

char* sRangeCheckNode_kind(struct sRangeCheckNode* self){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
char* __result135__;
    __result135__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value275=__builtin_string("sRangeCheckNode")));
    /* U11 */__right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
struct sNode* left_187;
void* __right_value276 = (void*)0;
struct CVALUE* left_value_188;
struct sNode* begin_189;
_Bool __result136__;
void* __right_value277 = (void*)0;
struct CVALUE* begin_value_190;
struct sNode* end_191;
_Bool __result137__;
void* __right_value278 = (void*)0;
struct CVALUE* end_value_192;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct CVALUE* come_value_193;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
char* __dec_obj176;
void* __right_value283 = (void*)0;
struct sType* __dec_obj177;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct CVALUE* come_value_194;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
char* __dec_obj178;
void* __right_value288 = (void*)0;
struct sType* __dec_obj179;
_Bool __result138__;
    left_187=self->mLeft;
    if(    !node_compile(left_187,info)) {
        return (_Bool)0;
    }
    left_value_188=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    begin_189=self->mBegin;
    if(    !node_compile(begin_189,info)) {
        __result136__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result136__;
    }
    begin_value_190=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    end_191=self->mEnd;
    if(    !node_compile(end_191,info)) {
        __result137__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(begin_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result137__;
    }
    end_value_192=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    left_value_188->type->mPointerNum>0) {
        if(        !gComeDebug) {
            come_value_193=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 579, "CVALUE"))));
            __dec_obj176=come_value_193->c_value;
            come_value_193->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)%s))",((char*)(__right_value281=make_type_name_string(left_value_188->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_188->c_value));
            /*G*/ __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_188->type->mPointerNum--;
            __dec_obj177=come_value_193->type;
            come_value_193->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_188->type));
            come_call_finalizer3(__dec_obj177,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_193->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_193));
            add_come_last_code(info,"%s",come_value_193->c_value);
            /*i*/come_call_finalizer3(come_value_193,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_194=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 592, "CVALUE"))));
            __dec_obj178=come_value_194->c_value;
            come_value_194->c_value=(char*)come_increment_ref_count(xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",((char*)(__right_value286=make_type_name_string(left_value_188->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_188->c_value,begin_value_190->c_value,end_value_192->c_value,info->sname,info->sline));
            /*G*/ __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
            /* U11 */__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_188->type->mPointerNum--;
            __dec_obj179=come_value_194->type;
            come_value_194->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_188->type));
            come_call_finalizer3(__dec_obj179,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_194->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_194));
            add_come_last_code(info,"%s",come_value_194->c_value);
            /*i*/come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_188));
    }
    __result138__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(begin_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(end_value_192,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result138__;
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
struct sNode* __dec_obj180;
void* __right_value291 = (void*)0;
char* __dec_obj181;
struct sLoadFieldNode* __result139__;
    ((struct sNodeBase*)(__right_value289=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value289,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj180=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj181=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    /*G*/ __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

char* sLoadFieldNode_kind(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
char* __result140__;
    __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value292=__builtin_string("sLoadFieldNode")));
    /* U11 */__right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
struct sNode* left_195;
void* __right_value293 = (void*)0;
char* name_196;
_Bool __result141__;
void* __right_value294 = (void*)0;
struct CVALUE* left_value_197;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj185;
struct sType* left_type_198;
void* __right_value297 = (void*)0;
struct sType* left_type2_199;
struct sClass* klass_200;
struct sType* field_type_201;
int index_202;
_Bool child_field_is_pointer_203;
char* child_field_name_204;
_Bool __result142__;
struct list$1tuple2$2charphsTypephph* o2_saved_205;
struct tuple2$2charphsTypeph* field_206;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* field_name_207=0;
struct sType* field_type2_208=0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj186;
struct list$1tuple2$2charphsTypephph* o2_saved_209;
struct tuple2$2charphsTypeph* field_210;
struct tuple2$2charphsTypeph* multiple_assign_var5 = (void*)0;
char* field_name_211=0;
struct sType* field_type2_212=0;
struct sClass* klass2_213;
struct list$1tuple2$2charphsTypephph* o2_saved_214;
struct tuple2$2charphsTypeph* field2_215;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name2_216=0;
struct sType* field_type3_217=0;
void* __right_value299 = (void*)0;
char* __dec_obj187;
void* __right_value300 = (void*)0;
struct sType* __dec_obj188;
void* __right_value301 = (void*)0;
struct sType* __dec_obj189;
_Bool __result143__;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct CVALUE* come_value_218;
void* __right_value304 = (void*)0;
char* __dec_obj190;
void* __right_value305 = (void*)0;
char* __dec_obj191;
void* __right_value306 = (void*)0;
char* __dec_obj192;
void* __right_value307 = (void*)0;
char* __dec_obj193;
void* __right_value308 = (void*)0;
char* __dec_obj194;
void* __right_value309 = (void*)0;
char* __dec_obj195;
void* __right_value310 = (void*)0;
struct sType* __dec_obj196;
_Bool __result144__;
void* __right_value311 = (void*)0;
struct sType* __dec_obj197;
_Bool __result146__;
    left_195=self->mLeft;
    name_196=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(    !node_compile(left_195,info)) {
        __result141__ = (_Bool)0;
        /* U13 */name_196 = come_decrement_ref_count2(name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result141__;
    }
    left_value_197=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_197->type->mPointerNum>0) {
        __dec_obj185=left_value_197->c_value;
        left_value_197->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value295=make_type_name_string(left_value_197->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_197->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_198=left_value_197->type;
    left_type2_199=(struct sType*)come_increment_ref_count(solve_generics(left_type_198,left_type_198,info));
    klass_200=left_type2_199->mClass;
    klass_200=map$2charphsClassphp_operator_load_element(info->classes,klass_200->mName);
    field_type_201=((void*)0);
    index_202=0;
    child_field_is_pointer_203=(_Bool)0;
    child_field_name_204=((void*)0);
    klass_200=map$2charphsClassphp_operator_load_element(info->classes,klass_200->mName);
    if(    klass_200==((void*)0)||klass_200->mFields==((void*)0)) {
        err_msg(info,"invalid class %s",klass_200->mName);
        __result142__ = (_Bool)0;
        /* U13 */name_196 = come_decrement_ref_count2(name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_201,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */child_field_name_204 = come_decrement_ref_count2(child_field_name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result142__;
    }
    for(    o2_saved_205=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_200->mFields)),field_206=list$1tuple2$2charphsTypephph_begin((o2_saved_205));    !list$1tuple2$2charphsTypephph_end((o2_saved_205));    field_206=list$1tuple2$2charphsTypephph_next((o2_saved_205))    ){
        multiple_assign_var4=field_206;
        field_name_207=(char*)come_increment_ref_count(multiple_assign_var4->v1);
        field_type2_208=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
        if(        string_operator_equals(field_name_207,name_196)) {
            __dec_obj186=field_type_201;
            field_type_201=(struct sType*)come_increment_ref_count(sType_clone(field_type2_208));
            come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */field_name_207 = come_decrement_ref_count2(field_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_208,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        index_202++;
        /* U13 */field_name_207 = come_decrement_ref_count2(field_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type2_208,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_205,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    index_202==list$1tuple2$2charphsTypephph_length(klass_200->mFields)) {
        index_202=0;
        for(        o2_saved_209=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_200->mFields)),field_210=list$1tuple2$2charphsTypephph_begin((o2_saved_209));        !list$1tuple2$2charphsTypephph_end((o2_saved_209));        field_210=list$1tuple2$2charphsTypephph_next((o2_saved_209))        ){
            multiple_assign_var5=field_210;
            field_name_211=(char*)come_increment_ref_count(multiple_assign_var5->v1);
            field_type2_212=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
            klass2_213=field_type2_212->mClass;
            for(            o2_saved_214=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_213->mFields)),field2_215=list$1tuple2$2charphsTypephph_begin((o2_saved_214));            !list$1tuple2$2charphsTypephph_end((o2_saved_214));            field2_215=list$1tuple2$2charphsTypephph_next((o2_saved_214))            ){
                multiple_assign_var6=field2_215;
                field_name2_216=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                field_type3_217=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                if(                string_operator_equals(field_name2_216,name_196)) {
                    __dec_obj187=child_field_name_204;
                    child_field_name_204=(char*)come_increment_ref_count(__builtin_string(field_name_211));
                    /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    field_type2_212->mPointerNum>0) {
                        child_field_is_pointer_203=(_Bool)1;
                    }
                    __dec_obj188=field_type_201;
                    field_type_201=(struct sType*)come_increment_ref_count(sType_clone(field_type3_217));
                    come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */field_name2_216 = come_decrement_ref_count2(field_name2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type3_217,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */field_name2_216 = come_decrement_ref_count2(field_name2_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type3_217,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_214,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            child_field_name_204) {
                /* U13 */field_name_211 = come_decrement_ref_count2(field_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_212,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            if(            string_operator_equals(field_name_211,name_196)) {
                __dec_obj189=field_type_201;
                field_type_201=(struct sType*)come_increment_ref_count(sType_clone(field_type2_212));
                come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */field_name_211 = come_decrement_ref_count2(field_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type2_212,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            index_202++;
            /* U13 */field_name_211 = come_decrement_ref_count2(field_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type2_212,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_209,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        index_202==list$1tuple2$2charphsTypephph_length(klass_200->mFields)) {
            err_msg(info,"field not found(%s) in %s(2)",name_196,klass_200->mName);
            __result143__ = (_Bool)0;
            /* U13 */name_196 = come_decrement_ref_count2(name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_201,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */child_field_name_204 = come_decrement_ref_count2(child_field_name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result143__;
        }
    }
    come_value_218=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 708, "CVALUE"))));
    if(    left_value_197->type->mPointerNum>0) {
        if(        child_field_name_204) {
            if(            child_field_is_pointer_203) {
                __dec_obj190=come_value_218->c_value;
                come_value_218->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s->%s",left_value_197->c_value,child_field_name_204,name_196));
                /*G*/ __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj191=come_value_218->c_value;
                come_value_218->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s.%s",left_value_197->c_value,child_field_name_204,name_196));
                /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj192=come_value_218->c_value;
            come_value_218->c_value=(char*)come_increment_ref_count(xsprintf("%s->%s",left_value_197->c_value,name_196));
            /*G*/ __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        if(        child_field_name_204) {
            if(            child_field_is_pointer_203) {
                __dec_obj193=come_value_218->c_value;
                come_value_218->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s->%s",left_value_197->c_value,child_field_name_204,name_196));
                /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj194=come_value_218->c_value;
                come_value_218->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s.%s",left_value_197->c_value,child_field_name_204,name_196));
                /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
        else {
            __dec_obj195=come_value_218->c_value;
            come_value_218->c_value=(char*)come_increment_ref_count(xsprintf("%s.%s",left_value_197->c_value,name_196));
            /*G*/ __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    __dec_obj196=come_value_218->type;
    come_value_218->type=(struct sType*)come_increment_ref_count(sType_clone(field_type_201));
    come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_218->var=((void*)0);
    if(    field_type_201==((void*)0)) {
        err_msg(info,"no field(%s)\n",name_196);
        __result144__ = (_Bool)0;
        /* U13 */name_196 = come_decrement_ref_count2(name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_201,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */child_field_name_204 = come_decrement_ref_count2(child_field_name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result144__;
    }
    if(    list$1sNodeph_length(come_value_218->type->mArrayNum)==1) {
        __dec_obj197=come_value_218->type->mOriginalLoadVarType->v1;
        come_value_218->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_218->type));
        come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_218->type->mArrayNum);
        come_value_218->type->mPointerNum++;
        come_value_218->type->mOriginalTypeNamePointerNum=come_value_218->type->mPointerNum;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_218));
    __result146__ = (_Bool)1;
    /* U13 */name_196 = come_decrement_ref_count2(name_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_value_197,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type2_199,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(field_type_201,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */child_field_name_204 = come_decrement_ref_count2(child_field_name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_218,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result146__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_219;
struct list_item$1sNodeph* prev_it_220;
struct list$1sNodeph* __result145__;
    it_219=self->head;
    while(it_219!=((void*)0)) {
        prev_it_220=it_219;
        it_219=it_219->next;
        /*i*/come_call_finalizer3(prev_it_220,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

struct sNode* load_field(struct sNode* left, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct sNode* _inf_value2;
struct sLoadFieldNode* _inf_obj_value2;
void* __right_value318 = (void*)0;
struct sNode* __result149__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 760, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sLoadFieldNode*)(__right_value313=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 760, "sLoadFieldNode")),left,(char*)come_increment_ref_count(name),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLoadFieldNode_finalize;
    _inf_value2->clone=(void*)sLoadFieldNode_clone;
    _inf_value2->compile=(void*)sLoadFieldNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLoadFieldNode_kind;
    __result149__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value318=_inf_value2));
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value313,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value318) { __right_value318 = come_decrement_ref_count2(__right_value318, ((struct sNode*)__right_value318)->finalize, ((struct sNode*)__right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result149__;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sNode* __dec_obj204;
void* __right_value321 = (void*)0;
struct sNode* __dec_obj205;
void* __right_value322 = (void*)0;
struct list$1sNodeph* __dec_obj206;
struct sStoreArrayNode* __result150__;
    ((struct sNodeBase*)(__right_value319=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value319,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj204=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count2(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj205=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(right));
    /* U1 */ if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj206=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj206,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mQuote=quote;
    __result150__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

char* sStoreArrayNode_kind(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
char* __result151__;
    __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value323=__builtin_string("sStoreArrayNode")));
    /* U11 */__right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
struct sNode* left_222;
struct sNode* right_223;
struct list$1sNodeph* array_num_nodes_224;
void* __right_value324 = (void*)0;
struct CVALUE* left_value_225;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* __dec_obj211;
struct sType* left_type_226;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct list$1CVALUEph* array_num_227;
struct list$1sNodeph* o2_saved_230;
struct sNode* it_233;
_Bool __result159__;
void* __right_value329 = (void*)0;
struct CVALUE* c_value_236;
_Bool __result160__;
void* __right_value330 = (void*)0;
struct CVALUE* right_value_237;
struct sType* right_type_238;
struct sClass* klass_239;
void* __right_value331 = (void*)0;
struct sType* type_240;
char* fun_name_241;
_Bool calling_fun_242;
char* check_code_246;
struct sType* var_type_247;
void* __right_value332 = (void*)0;
struct sType* result_type_248;
struct sType* __dec_obj213;
int n_249;
void* __right_value333 = (void*)0;
struct sType* __dec_obj214;
void* __right_value334 = (void*)0;
struct sType* __dec_obj215;
int i_250;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
struct CVALUE* come_value_263;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct buffer* buf_264;
void* __right_value339 = (void*)0;
struct sType* result_type2_265;
void* __right_value340 = (void*)0;
struct list$1CVALUEph* o2_saved_266;
struct CVALUE* it_269;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
int i_272;
struct list$1sNodeph* o2_saved_273;
struct sNode* it_274;
void* __right_value343 = (void*)0;
struct CVALUE* come_value_275;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* __dec_obj216;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_276;
int i_277;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct buffer* buf_278;
struct list$1CVALUEph* o2_saved_279;
struct CVALUE* it_280;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
char* left_value_code_281;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
char* __dec_obj217;
void* __right_value355 = (void*)0;
char* __dec_obj218;
_Bool __result171__;
void* __right_value356 = (void*)0;
char* __dec_obj219;
void* __right_value357 = (void*)0;
char* __dec_obj220;
_Bool __result172__;
void* __right_value358 = (void*)0;
struct sType* result_type_282;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct list$1sNodeph* __dec_obj221;
struct sType* __dec_obj222;
void* __right_value361 = (void*)0;
char* __dec_obj223;
_Bool __result173__;
memset(&calling_fun_242, 0, sizeof(_Bool));
    left_222=self->mLeft;
    right_223=self->mRight;
    array_num_nodes_224=self->mArrayNum;
    if(    !node_compile(left_222,info)) {
        return (_Bool)0;
    }
    left_value_225=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_225->type->mPointerNum>0) {
        __dec_obj211=left_value_225->c_value;
        left_value_225->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value325=make_type_name_string(left_value_225->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_225->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_226=left_value_225->type;
    array_num_227=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 799, "list$1CVALUEph"))));
    for(    o2_saved_230=(array_num_nodes_224),it_233=list$1sNodeph_begin((o2_saved_230));    !list$1sNodeph_end((o2_saved_230));    it_233=list$1sNodeph_next((o2_saved_230))    ){
        if(        !node_compile(it_233,info)) {
            __result159__ = (_Bool)0;
            /*i*/come_call_finalizer3(left_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(array_num_227,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result159__;
        }
        c_value_236=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_227,(struct CVALUE*)come_increment_ref_count(c_value_236));
        /*i*/come_call_finalizer3(c_value_236,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !node_compile(right_223,info)) {
        __result160__ = (_Bool)0;
        /*i*/come_call_finalizer3(left_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(array_num_227,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        return __result160__;
    }
    right_value_237=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    right_type_238=right_value_237->type;
    klass_239=left_value_225->type->mClass;
    type_240=(struct sType*)come_increment_ref_count(sType_clone(left_value_225->type));
    fun_name_241="operator_store_element";
    if(    self->mQuote) {
        calling_fun_242=(_Bool)0;
    }
    else {
        calling_fun_242=operator_overload_fun2(type_240,fun_name_241,left_value_225,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_227,0), "18field.c", 831, 9)),right_value_237,info);
    }
    if(    !calling_fun_242) {
        check_code_246=((void*)0);
        if(        left_value_225->var&&left_value_225->var->mType&&list$1sNodeph_length(left_value_225->var->mType->mArrayNum)>0) {
            var_type_247=left_value_225->var->mType;
            result_type_248=(struct sType*)come_increment_ref_count(sType_clone(left_type_226));
            if(            result_type_248->mOriginalLoadVarType->v1) {
                __dec_obj213=result_type_248;
                result_type_248=(struct sType*)come_increment_ref_count(result_type_248->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_248->mArrayNum)>0) {
                n_249=list$1sNodeph_length(result_type_248->mArrayNum)-list$1CVALUEph_length(array_num_227);
                if(                n_249==0) {
                    __dec_obj214=result_type_248;
                    result_type_248=(struct sType*)come_increment_ref_count(sType_clone(left_type_226));
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_226->mOriginalLoadVarType->v1) {
                        __dec_obj215=result_type_248;
                        result_type_248=(struct sType*)come_increment_ref_count(sType_clone(left_type_226->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_248->mArrayNum);
                }
                else if(                n_249>0) {
                    for(                    i_250=0;                    i_250<n_249;                    i_250++                    ){
                        list$1sNodeph_delete(result_type_248->mArrayNum,-1,-1);
                    }
                }
                else if(                n_249<0) {
                    list$1sNodeph_reset(result_type_248->mArrayNum);
                    result_type_248->mPointerNum+=n_249;
                    if(                    result_type_248->mPointerNum<0) {
                        result_type_248->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_248->mPointerNum>0) {
                    result_type_248->mPointerNum-=list$1CVALUEph_length(array_num_227);
                    if(                    result_type_248->mPointerNum<0) {
                        result_type_248->mPointerNum=0;
                    }
                }
            }
            come_value_263=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 879, "CVALUE"))));
            buf_264=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 881, "buffer"))));
            result_type2_265=(struct sType*)come_increment_ref_count(sType_clone(result_type_248));
            result_type2_265->mPointerNum++;
            buffer_append_str(buf_264,((char*)(__right_value340=xsprintf("come_range_check(&%s",left_value_225->c_value))));
            /* U11 */__right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_266=(struct list$1CVALUEph*)come_increment_ref_count((array_num_227)),it_269=list$1CVALUEph_begin((o2_saved_266));            !list$1CVALUEph_end((o2_saved_266));            it_269=list$1CVALUEph_next((o2_saved_266))            ){
                buffer_append_str(buf_264,((char*)(__right_value341=xsprintf("[%s]",it_269->c_value))));
                /* U11 */__right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_266,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_264,((char*)(__right_value342=xsprintf(",%s,%s+(",left_value_225->c_value,left_value_225->c_value))));
            /* U11 */__right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_272=0;
            for(            o2_saved_273=(struct list$1sNodeph*)come_increment_ref_count((var_type_247->mArrayNum)),it_274=list$1sNodeph_begin((o2_saved_273));            !list$1sNodeph_end((o2_saved_273));            it_274=list$1sNodeph_next((o2_saved_273))            ){
                if(                !node_compile(it_274,info)) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_275=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_str(buf_264,((char*)(__right_value344=xsprintf("%s",come_value_275->c_value))));
                /* U11 */__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                i_272!=list$1sNodeph_length(var_type_247->mArrayNum)-1) {
                    buffer_append_str(buf_264,"*");
                }
                i_272++;
                /*i*/come_call_finalizer3(come_value_275,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_273,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_264,((char*)(__right_value345=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            /* U11 */__right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj216=check_code_246;
            check_code_246=(char*)come_increment_ref_count(buffer_to_string(buf_264));
            /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            /*i*/come_call_finalizer3(result_type_248,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_264,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_265,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_value_276=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 913, "CVALUE"))));
        if(        list$1sNodeph_length(left_type_226->mArrayNum)>0) {
            for(            i_277=0;            i_277<list$1CVALUEph_length(array_num_227);            i_277++            ){
                list$1sNodeph_delete(left_type_226->mArrayNum,-1,-1);
            }
        }
        else if(        left_type_226->mPointerNum>0) {
            left_type_226->mPointerNum-=list$1CVALUEph_length(array_num_227);
            if(            left_type_226->mPointerNum<0) {
                left_type_226->mPointerNum=0;
            }
        }
        buf_278=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 934, "buffer"))));
        buffer_append_str(buf_278,left_value_225->c_value);
        for(        o2_saved_279=(struct list$1CVALUEph*)come_increment_ref_count((array_num_227)),it_280=list$1CVALUEph_begin((o2_saved_279));        !list$1CVALUEph_end((o2_saved_279));        it_280=list$1CVALUEph_next((o2_saved_279))        ){
            buffer_append_str(buf_278,((char*)(__right_value351=xsprintf("[%s]",it_280->c_value))));
            /* U11 */__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_279,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_281=(char*)come_increment_ref_count(buffer_to_string(buf_278));
        check_assign_type(((char*)(__right_value353=xsprintf("array is assinged to"))),left_type_226,right_type_238,right_value_237,(_Bool)0,(_Bool)1,(_Bool)0,info);
        /* U11 */__right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(        left_type_226->mHeap&&right_type_238->mHeap&&left_type_226->mPointerNum>0&&right_type_238->mPointerNum>0) {
            if(            left_value_225->type->mPointerNum>=1) {
                decrement_ref_count_object(left_type_226,left_value_code_281,info,(_Bool)0,(_Bool)0);
                std_move(left_type_226,right_type_238,right_value_237,info,(_Bool)0);
                __dec_obj217=come_value_276->c_value;
                come_value_276->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_281,right_value_237->c_value));
                /*G*/ __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_225->type->mPointerNum==0) {
                decrement_ref_count_object(left_type_226,left_value_code_281,info,(_Bool)0,(_Bool)0);
                std_move(left_type_226,right_type_238,right_value_237,info,(_Bool)0);
                __dec_obj218=come_value_276->c_value;
                come_value_276->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_281,right_value_237->c_value));
                /*G*/ __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_281,left_value_225->type->mPointerNum);
                __result171__ = (_Bool)0;
                /* U13 */check_code_246 = come_decrement_ref_count2(check_code_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_278,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_value_code_281 = come_decrement_ref_count2(left_value_code_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(array_num_227,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_value_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result171__;
            }
        }
        else {
            if(            left_value_225->type->mPointerNum>=1) {
                __dec_obj219=come_value_276->c_value;
                come_value_276->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_281,right_value_237->c_value));
                /*G*/ __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            left_value_225->type->mPointerNum==0) {
                __dec_obj220=come_value_276->c_value;
                come_value_276->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",left_value_code_281,right_value_237->c_value));
                /*G*/ __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_281,left_value_225->type->mPointerNum);
                __result172__ = (_Bool)0;
                /* U13 */check_code_246 = come_decrement_ref_count2(check_code_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_278,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */left_value_code_281 = come_decrement_ref_count2(left_value_code_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(array_num_227,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(right_value_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result172__;
            }
        }
        result_type_282=(struct sType*)come_increment_ref_count(sType_clone(left_type_226));
        __dec_obj221=result_type_282->mArrayNum;
        result_type_282->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 975, "list$1sNodeph"))));
        come_call_finalizer3(__dec_obj221,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj222=come_value_276->type;
        come_value_276->type=(struct sType*)come_increment_ref_count(result_type_282);
        come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_276->var=((void*)0);
        if(        check_code_246&&gComeDebug) {
            __dec_obj223=come_value_276->c_value;
            come_value_276->c_value=(char*)come_increment_ref_count(xsprintf("(%s, %s)",check_code_246,come_value_276->c_value));
            /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_276));
        add_come_last_code(info,"%s",come_value_276->c_value);
        /* U13 */check_code_246 = come_decrement_ref_count2(check_code_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value_276,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_278,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */left_value_code_281 = come_decrement_ref_count2(left_value_code_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_282,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result173__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num_227,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(right_value_237,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_240,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result173__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result152__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result152__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_228;
struct list_item$1CVALUEph* prev_it_229;
    it_228=self->head;
    while(it_228!=((void*)0)) {
        prev_it_229=it_228;
        it_228=it_228->next;
        /*i*/come_call_finalizer3(prev_it_229,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj212;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj212=self->item;
            come_call_finalizer3(__dec_obj212,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_231;
struct sNode* __result153__;
struct sNode* __result154__;
struct sNode* result_232;
struct sNode* __result155__;
result_231 = (void*)0;
result_232 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_231,0,sizeof(struct sNode*));
        __result153__ = gComeFunResultObject = __result_obj__ = result_231;
        gComeFunResultObject = (void*)0;
        return __result153__;
    }
    self->it=self->head;
    if(    self->it) {
        __result154__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    memset(&result_232,0,sizeof(struct sNode*));
    __result155__ = gComeFunResultObject = __result_obj__ = result_232;
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_234;
struct sNode* __result156__;
struct sNode* __result157__;
struct sNode* result_235;
struct sNode* __result158__;
result_234 = (void*)0;
result_235 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_234,0,sizeof(struct sNode*));
        __result156__ = gComeFunResultObject = __result_obj__ = result_234;
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result157__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    memset(&result_235,0,sizeof(struct sNode*));
    __result158__ = gComeFunResultObject = __result_obj__ = result_235;
    gComeFunResultObject = (void*)0;
    return __result158__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_243;
int i_244;
struct CVALUE* __result161__;
struct CVALUE* default_value_245;
struct CVALUE* __result162__;
default_value_245 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_243=self->head;
    i_244=0;
    while(it_243!=((void*)0)) {
        if(        position==i_244) {
            __result161__ = gComeFunResultObject = __result_obj__ = it_243->item;
            gComeFunResultObject = (void*)0;
            return __result161__;
        }
        it_243=it_243->next;
        i_244++;
    }
    memset(&default_value_245,0,sizeof(struct CVALUE*));
    __result162__ = gComeFunResultObject = __result_obj__ = default_value_245;
    /*i*/come_call_finalizer3(default_value_245,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_251;
struct list$1sNodeph* __result163__;
struct list_item$1sNodeph* it_252;
int i_253;
struct list_item$1sNodeph* prev_it_254;
struct list_item$1sNodeph* it_255;
int i_256;
struct list_item$1sNodeph* prev_it_257;
struct list_item$1sNodeph* it_258;
struct list_item$1sNodeph* head_prev_it_259;
struct list_item$1sNodeph* tail_it_260;
int i_261;
struct list_item$1sNodeph* prev_it_262;
struct list$1sNodeph* __result164__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_251=tail;
        tail=head;
        head=tmp_251;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result163__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_252=self->head;
        i_253=0;
        while(it_252!=((void*)0)) {
            if(            i_253<tail) {
                prev_it_254=it_252;
                it_252=it_252->next;
                i_253++;
                /*i*/come_call_finalizer3(prev_it_254,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_253==tail) {
                self->head=it_252;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_252=it_252->next;
                i_253++;
            }
        }
    }
    else if(    tail==self->len) {
        it_255=self->head;
        i_256=0;
        while(it_255!=((void*)0)) {
            if(            i_256==head) {
                self->tail=it_255->prev;
                self->tail->next=((void*)0);
            }
            if(            i_256>=head) {
                prev_it_257=it_255;
                it_255=it_255->next;
                i_256++;
                /*i*/come_call_finalizer3(prev_it_257,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_255=it_255->next;
                i_256++;
            }
        }
    }
    else {
        it_258=self->head;
        head_prev_it_259=((void*)0);
        tail_it_260=((void*)0);
        i_261=0;
        while(it_258!=((void*)0)) {
            if(            i_261==head) {
                head_prev_it_259=it_258->prev;
            }
            if(            i_261==tail) {
                tail_it_260=it_258;
            }
            if(            i_261>=head&&i_261<tail) {
                prev_it_262=it_258;
                it_258=it_258->next;
                i_261++;
                /*i*/come_call_finalizer3(prev_it_262,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_258=it_258->next;
                i_261++;
            }
        }
        if(        head_prev_it_259!=((void*)0)) {
            head_prev_it_259->next=tail_it_260;
        }
        if(        tail_it_260!=((void*)0)) {
            tail_it_260->prev=head_prev_it_259;
        }
    }
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result164__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_267;
struct CVALUE* __result165__;
struct CVALUE* __result166__;
struct CVALUE* result_268;
struct CVALUE* __result167__;
result_267 = (void*)0;
result_268 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_267,0,sizeof(struct CVALUE*));
        __result165__ = gComeFunResultObject = __result_obj__ = result_267;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    self->it=self->head;
    if(    self->it) {
        __result166__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    memset(&result_268,0,sizeof(struct CVALUE*));
    __result167__ = gComeFunResultObject = __result_obj__ = result_268;
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_270;
struct CVALUE* __result168__;
struct CVALUE* __result169__;
struct CVALUE* result_271;
struct CVALUE* __result170__;
result_270 = (void*)0;
result_271 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_270,0,sizeof(struct CVALUE*));
        __result168__ = gComeFunResultObject = __result_obj__ = result_270;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result169__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    memset(&result_271,0,sizeof(struct CVALUE*));
    __result170__ = gComeFunResultObject = __result_obj__ = result_271;
    gComeFunResultObject = (void*)0;
    return __result170__;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, _Bool break_guard, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1sNodeph* __dec_obj224;
void* __right_value364 = (void*)0;
struct sNode* __dec_obj225;
struct sLoadArrayNode* __result174__;
    ((struct sNodeBase*)(__right_value362=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value362,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj224=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj224,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mBreakGuard=break_guard;
    __dec_obj225=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result174__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

char* sLoadArrayNode_kind(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
char* __result175__;
    __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value365=__builtin_string("sLoadArrayNode")));
    /* U11 */__right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
struct sNode* left_283;
struct list$1sNodeph* array_num_nodes_284;
void* __right_value366 = (void*)0;
struct CVALUE* left_value_285;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
char* __dec_obj229;
void* __right_value369 = (void*)0;
struct sType* left_type_286;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1CVALUEph* array_num_287;
struct list$1sNodeph* o2_saved_288;
struct sNode* it_289;
_Bool __result176__;
void* __right_value372 = (void*)0;
struct CVALUE* c_value_290;
void* __right_value373 = (void*)0;
struct sType* type_291;
char* fun_name_292;
_Bool calling_fun_293;
struct sType* var_type_294;
void* __right_value374 = (void*)0;
struct sType* result_type_295;
struct sType* __dec_obj230;
int n_296;
void* __right_value375 = (void*)0;
struct sType* __dec_obj231;
void* __right_value376 = (void*)0;
struct sType* __dec_obj232;
int i_297;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_298;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct buffer* buf_299;
void* __right_value381 = (void*)0;
struct sType* result_type2_300;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
struct list$1CVALUEph* o2_saved_301;
struct CVALUE* it_302;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
int i_303;
struct list$1sNodeph* o2_saved_304;
struct sNode* it_305;
void* __right_value386 = (void*)0;
struct CVALUE* come_value_306;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
char* left_value_code_307;
void* __right_value390 = (void*)0;
char* __dec_obj233;
void* __right_value391 = (void*)0;
struct sType* __dec_obj234;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct CVALUE* come_value_308;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct buffer* buf_309;
struct list$1CVALUEph* o2_saved_310;
struct CVALUE* it_311;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
char* left_value_code_312;
void* __right_value398 = (void*)0;
char* __dec_obj235;
void* __right_value399 = (void*)0;
struct sType* result_type_313;
struct sType* __dec_obj236;
int n_314;
void* __right_value400 = (void*)0;
struct sType* __dec_obj237;
void* __right_value401 = (void*)0;
struct sType* __dec_obj238;
int i_315;
void* __right_value402 = (void*)0;
struct sType* __dec_obj239;
_Bool __result177__;
memset(&calling_fun_293, 0, sizeof(_Bool));
    left_283=self->mLeft;
    array_num_nodes_284=self->mArrayNum;
    if(    !node_compile(left_283,info)) {
        return (_Bool)0;
    }
    left_value_285=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug&&left_value_285->type->mPointerNum>0&&!self->mBreakGuard) {
        __dec_obj229=left_value_285->c_value;
        left_value_285->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value367=make_type_name_string(left_value_285->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_285->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    left_type_286=(struct sType*)come_increment_ref_count(sType_clone(left_value_285->type));
    array_num_287=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1028, "list$1CVALUEph"))));
    for(    o2_saved_288=(array_num_nodes_284),it_289=list$1sNodeph_begin((o2_saved_288));    !list$1sNodeph_end((o2_saved_288));    it_289=list$1sNodeph_next((o2_saved_288))    ){
        if(        !node_compile(it_289,info)) {
            __result176__ = (_Bool)0;
            /*i*/come_call_finalizer3(left_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(array_num_287,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result176__;
        }
        c_value_290=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_287,(struct CVALUE*)come_increment_ref_count(c_value_290));
        /*i*/come_call_finalizer3(c_value_290,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_291=(struct sType*)come_increment_ref_count(sType_clone(left_value_285->type));
    fun_name_292="operator_load_element";
    if(    self->mQuote) {
        calling_fun_293=(_Bool)0;
    }
    else {
        calling_fun_293=operator_overload_fun(type_291,fun_name_292,left_value_285,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_287,0), "18field.c", 1049, 10)),self->mBreakGuard,info);
    }
    if(    !calling_fun_293) {
        if(        gComeDebug&&left_value_285->var&&left_value_285->var->mType&&list$1sNodeph_length(left_value_285->var->mType->mArrayNum)>0) {
            var_type_294=left_value_285->var->mType;
            result_type_295=(struct sType*)come_increment_ref_count(sType_clone(left_type_286));
            if(            result_type_295->mOriginalLoadVarType->v1) {
                __dec_obj230=result_type_295;
                result_type_295=(struct sType*)come_increment_ref_count(result_type_295->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_295->mArrayNum)>0) {
                n_296=list$1sNodeph_length(result_type_295->mArrayNum)-list$1CVALUEph_length(array_num_287);
                if(                n_296==0) {
                    __dec_obj231=result_type_295;
                    result_type_295=(struct sType*)come_increment_ref_count(sType_clone(left_type_286));
                    come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_286->mOriginalLoadVarType->v1) {
                        __dec_obj232=result_type_295;
                        result_type_295=(struct sType*)come_increment_ref_count(sType_clone(left_type_286->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_295->mArrayNum);
                }
                else if(                n_296>0) {
                    for(                    i_297=0;                    i_297<n_296;                    i_297++                    ){
                        list$1sNodeph_delete(result_type_295->mArrayNum,-1,-1);
                    }
                }
                else if(                n_296<0) {
                    list$1sNodeph_reset(result_type_295->mArrayNum);
                    result_type_295->mPointerNum+=n_296;
                    if(                    result_type_295->mPointerNum<0) {
                        result_type_295->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_295->mPointerNum>0) {
                    result_type_295->mPointerNum-=list$1CVALUEph_length(array_num_287);
                    if(                    result_type_295->mPointerNum<0) {
                        result_type_295->mPointerNum=0;
                    }
                }
            }
            come_value_298=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1096, "CVALUE"))));
            buf_299=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1098, "buffer"))));
            result_type2_300=(struct sType*)come_increment_ref_count(sType_clone(result_type_295));
            result_type2_300->mPointerNum++;
            buffer_append_str(buf_299,((char*)(__right_value383=xsprintf("*(%s)come_range_check(&%s",((char*)(__right_value382=make_type_name_string(result_type2_300,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_285->c_value))));
            /* U11 */__right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            for(            o2_saved_301=(struct list$1CVALUEph*)come_increment_ref_count((array_num_287)),it_302=list$1CVALUEph_begin((o2_saved_301));            !list$1CVALUEph_end((o2_saved_301));            it_302=list$1CVALUEph_next((o2_saved_301))            ){
                buffer_append_str(buf_299,((char*)(__right_value384=xsprintf("[%s]",it_302->c_value))));
                /* U11 */__right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_301,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_299,((char*)(__right_value385=xsprintf(",%s,%s+(",left_value_285->c_value,left_value_285->c_value))));
            /* U11 */__right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            i_303=0;
            for(            o2_saved_304=(struct list$1sNodeph*)come_increment_ref_count((var_type_294->mArrayNum)),it_305=list$1sNodeph_begin((o2_saved_304));            !list$1sNodeph_end((o2_saved_304));            it_305=list$1sNodeph_next((o2_saved_304))            ){
                if(                !node_compile(it_305,info)) {
                    err_msg(info,"invalid array num");
                    exit(1);
                }
                come_value_306=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                buffer_append_str(buf_299,((char*)(__right_value387=xsprintf("%s",come_value_306->c_value))));
                /* U11 */__right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                i_303!=list$1sNodeph_length(var_type_294->mArrayNum)-1) {
                    buffer_append_str(buf_299,"*");
                }
                i_303++;
                /*i*/come_call_finalizer3(come_value_306,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_304,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_str(buf_299,((char*)(__right_value388=xsprintf("), \"%s\", %d)",info->sname,info->sline))));
            /* U11 */__right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            left_value_code_307=(char*)come_increment_ref_count(buffer_to_string(buf_299));
            __dec_obj233=come_value_298->c_value;
            come_value_298->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_307));
            /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj234=come_value_298->type;
            come_value_298->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_295));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_298->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_298));
            add_come_last_code(info,"%s",come_value_298->c_value);
            /*i*/come_call_finalizer3(result_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_298,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_299,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_300,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_value_code_307 = come_decrement_ref_count2(left_value_code_307, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            come_value_308=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1142, "CVALUE"))));
            buf_309=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1144, "buffer"))));
            buffer_append_str(buf_309,left_value_285->c_value);
            for(            o2_saved_310=(struct list$1CVALUEph*)come_increment_ref_count((array_num_287)),it_311=list$1CVALUEph_begin((o2_saved_310));            !list$1CVALUEph_end((o2_saved_310));            it_311=list$1CVALUEph_next((o2_saved_310))            ){
                buffer_append_str(buf_309,((char*)(__right_value396=xsprintf("[%s]",it_311->c_value))));
                /* U11 */__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_310,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            left_value_code_312=(char*)come_increment_ref_count(buffer_to_string(buf_309));
            __dec_obj235=come_value_308->c_value;
            come_value_308->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_312));
            /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
            result_type_313=(struct sType*)come_increment_ref_count(sType_clone(left_type_286));
            if(            result_type_313->mOriginalLoadVarType->v1) {
                __dec_obj236=result_type_313;
                result_type_313=(struct sType*)come_increment_ref_count(result_type_313->mOriginalLoadVarType->v1);
                come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            list$1sNodeph_length(result_type_313->mArrayNum)>0) {
                n_314=list$1sNodeph_length(result_type_313->mArrayNum)-list$1CVALUEph_length(array_num_287);
                if(                n_314==0) {
                    __dec_obj237=result_type_313;
                    result_type_313=(struct sType*)come_increment_ref_count(sType_clone(left_type_286));
                    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    left_type_286->mOriginalLoadVarType->v1) {
                        __dec_obj238=result_type_313;
                        result_type_313=(struct sType*)come_increment_ref_count(sType_clone(left_type_286->mOriginalLoadVarType->v1));
                        come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    list$1sNodeph_reset(result_type_313->mArrayNum);
                }
                else if(                n_314>0) {
                    for(                    i_315=0;                    i_315<n_314;                    i_315++                    ){
                        list$1sNodeph_delete(result_type_313->mArrayNum,-1,-1);
                    }
                }
                else if(                n_314<0) {
                    list$1sNodeph_reset(result_type_313->mArrayNum);
                    result_type_313->mPointerNum+=n_314;
                    if(                    result_type_313->mPointerNum<0) {
                        result_type_313->mPointerNum=0;
                    }
                }
            }
            else {
                if(                result_type_313->mPointerNum>0) {
                    result_type_313->mPointerNum-=list$1CVALUEph_length(array_num_287);
                    if(                    result_type_313->mPointerNum<0) {
                        result_type_313->mPointerNum=0;
                    }
                }
            }
            __dec_obj239=come_value_308->type;
            come_value_308->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_313));
            come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value_308->var=((void*)0);
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_308));
            add_come_last_code(info,"%s",come_value_308->c_value);
            /*i*/come_call_finalizer3(come_value_308,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_309,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */left_value_code_312 = come_decrement_ref_count2(left_value_code_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result177__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_285,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_286,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num_287,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result177__;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1sNodeph* __dec_obj240;
void* __right_value405 = (void*)0;
struct sNode* __dec_obj241;
struct sLoadRangeArrayNode* __result178__;
    ((struct sNodeBase*)(__right_value403=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value403,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj240=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(array_num));
    come_call_finalizer3(__dec_obj240,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj241=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    /* U1 */ if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

char* sLoadRangeArrayNode_kind(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
char* __result179__;
    __result179__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value406=__builtin_string("sLoadRangeArrayNode")));
    /* U11 */__right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
struct sNode* left_316;
struct list$1sNodeph* array_num_nodes_317;
void* __right_value407 = (void*)0;
struct CVALUE* left_value_318;
void* __right_value408 = (void*)0;
struct sType* left_type_319;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1CVALUEph* array_num_320;
struct list$1sNodeph* o2_saved_321;
struct sNode* it_322;
_Bool __result180__;
void* __right_value411 = (void*)0;
struct CVALUE* c_value_323;
void* __right_value412 = (void*)0;
struct sType* type_324;
char* fun_name_325;
_Bool calling_fun_326;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct CVALUE* come_value_327;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct buffer* buf_328;
struct list$1CVALUEph* o2_saved_329;
struct CVALUE* it_330;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
char* left_value_code_331;
void* __right_value419 = (void*)0;
char* __dec_obj245;
void* __right_value420 = (void*)0;
struct sType* result_type_332;
struct sType* __dec_obj246;
int n_333;
void* __right_value421 = (void*)0;
struct sType* __dec_obj247;
void* __right_value422 = (void*)0;
struct sType* __dec_obj248;
int i_334;
void* __right_value423 = (void*)0;
struct sType* __dec_obj249;
_Bool __result181__;
memset(&calling_fun_326, 0, sizeof(_Bool));
    left_316=self->mLeft;
    array_num_nodes_317=self->mArrayNum;
    if(    !node_compile(left_316,info)) {
        return (_Bool)0;
    }
    left_value_318=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_319=(struct sType*)come_increment_ref_count(sType_clone(left_value_318->type));
    array_num_320=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1240, "list$1CVALUEph"))));
    for(    o2_saved_321=(array_num_nodes_317),it_322=list$1sNodeph_begin((o2_saved_321));    !list$1sNodeph_end((o2_saved_321));    it_322=list$1sNodeph_next((o2_saved_321))    ){
        if(        !node_compile(it_322,info)) {
            __result180__ = (_Bool)0;
            /*i*/come_call_finalizer3(left_value_318,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(array_num_320,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result180__;
        }
        c_value_323=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(array_num_320,(struct CVALUE*)come_increment_ref_count(c_value_323));
        /*i*/come_call_finalizer3(c_value_323,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_324=(struct sType*)come_increment_ref_count(sType_clone(left_value_318->type));
    fun_name_325="operator_load_range_element";
    if(    self->mQuote) {
        calling_fun_326=(_Bool)0;
    }
    else {
        calling_fun_326=operator_overload_fun2(type_324,fun_name_325,left_value_318,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_320,0), "18field.c", 1261, 11)),((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(array_num_320,1), "18field.c", 1261, 12)),info);
    }
    if(    !calling_fun_326) {
        come_value_327=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1265, "CVALUE"))));
        buf_328=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1267, "buffer"))));
        buffer_append_str(buf_328,left_value_318->c_value);
        for(        o2_saved_329=(struct list$1CVALUEph*)come_increment_ref_count((array_num_320)),it_330=list$1CVALUEph_begin((o2_saved_329));        !list$1CVALUEph_end((o2_saved_329));        it_330=list$1CVALUEph_next((o2_saved_329))        ){
            buffer_append_str(buf_328,((char*)(__right_value417=xsprintf("[%s]",it_330->c_value))));
            /* U11 */__right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_329,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        left_value_code_331=(char*)come_increment_ref_count(buffer_to_string(buf_328));
        __dec_obj245=come_value_327->c_value;
        come_value_327->c_value=(char*)come_increment_ref_count(xsprintf("%s",left_value_code_331));
        /*G*/ __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type_332=(struct sType*)come_increment_ref_count(sType_clone(left_type_319));
        if(        result_type_332->mOriginalLoadVarType->v1) {
            __dec_obj246=result_type_332;
            result_type_332=(struct sType*)come_increment_ref_count(result_type_332->mOriginalLoadVarType->v1);
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        list$1sNodeph_length(result_type_332->mArrayNum)>0) {
            n_333=list$1sNodeph_length(result_type_332->mArrayNum)-list$1CVALUEph_length(array_num_320);
            if(            n_333==0) {
                __dec_obj247=result_type_332;
                result_type_332=(struct sType*)come_increment_ref_count(sType_clone(left_type_319));
                come_call_finalizer3(__dec_obj247,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(                left_type_319->mOriginalLoadVarType->v1) {
                    __dec_obj248=result_type_332;
                    result_type_332=(struct sType*)come_increment_ref_count(sType_clone(left_type_319->mOriginalLoadVarType->v1));
                    come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                list$1sNodeph_reset(result_type_332->mArrayNum);
            }
            else if(            n_333>0) {
                for(                i_334=0;                i_334<n_333;                i_334++                ){
                    list$1sNodeph_delete(result_type_332->mArrayNum,-1,-1);
                }
            }
            else if(            n_333<0) {
                list$1sNodeph_reset(result_type_332->mArrayNum);
                result_type_332->mPointerNum+=n_333;
                if(                result_type_332->mPointerNum<0) {
                    result_type_332->mPointerNum=0;
                }
            }
        }
        else {
            if(            result_type_332->mPointerNum>0) {
                result_type_332->mPointerNum-=list$1CVALUEph_length(array_num_320);
                if(                result_type_332->mPointerNum<0) {
                    result_type_332->mPointerNum=0;
                }
            }
        }
        __dec_obj249=come_value_327->type;
        come_value_327->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_332));
        come_call_finalizer3(__dec_obj249,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_327->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_327));
        add_come_last_code(info,"%s",come_value_327->c_value);
        /*i*/come_call_finalizer3(come_value_327,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_328,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */left_value_code_331 = come_decrement_ref_count2(left_value_code_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_332,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result181__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_318,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(array_num_320,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_324,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result181__;
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sNode* __result182__;
    err_msg(info,"parse_method_call is failed");
    exit(2);
    __result182__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct sNode* _inf_value3;
struct sStoreFieldNode* _inf_obj_value3;
void* __right_value431 = (void*)0;
struct sNode* __result185__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1341, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sStoreFieldNode*)(__right_value425=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1341, "sStoreFieldNode")),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value3->clone=(void*)sStoreFieldNode_clone;
    _inf_value3->compile=(void*)sStoreFieldNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sStoreFieldNode_kind;
    __result185__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value431=_inf_value3));
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value425,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value431) { __right_value431 = come_decrement_ref_count2(__right_value431, ((struct sNode*)__right_value431)->finalize, ((struct sNode*)__right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result185__;
}

struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool range_array_336;
char* p_337;
int sline_338;
_Bool no_comma_339;
_Bool no_output_err_340;
_Bool no_output_come_code_341;
void* __right_value432 = (void*)0;
struct sNode* exp_342;
_Bool quote_343;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1sNodeph* array_num_344;
void* __right_value435 = (void*)0;
struct sNode* node2_345;
void* __right_value439 = (void*)0;
struct sNode* node3_349;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sNode* _inf_value4;
struct sLoadRangeArrayNode* _inf_obj_value4;
void* __right_value446 = (void*)0;
struct sNode* __dec_obj267;
_Bool quote_351;
_Bool range_352;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1sNodeph* array_num_353;
_Bool range_array2_354;
char* p_355;
int sline_356;
_Bool no_comma_357;
_Bool no_output_err_358;
_Bool no_output_come_code_359;
void* __right_value449 = (void*)0;
struct sNode* exp_360;
void* __right_value450 = (void*)0;
struct sNode* node2_361;
_Bool break_guard_362;
void* __right_value451 = (void*)0;
struct sNode* right_node_363;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sNode* _inf_value5;
struct sStoreArrayNode* _inf_obj_value5;
void* __right_value459 = (void*)0;
struct sNode* __dec_obj276;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sNode* _inf_value6;
struct sLoadArrayNode* _inf_obj_value6;
void* __right_value466 = (void*)0;
struct sNode* __dec_obj283;
_Bool no_comma_366;
void* __right_value467 = (void*)0;
struct sNode* begin_367;
void* __right_value468 = (void*)0;
struct sNode* end_368;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sNode* _inf_value7;
struct sRangeCheckNode* _inf_obj_value7;
void* __right_value476 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* __right_value482 = (void*)0;
struct sNode* __dec_obj297;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sNode* _inf_value9;
struct sNullableNode* _inf_obj_value9;
void* __right_value488 = (void*)0;
struct sNode* __dec_obj302;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* __dec_obj303;
void* __right_value491 = (void*)0;
char* field_name_372;
_Bool parse_method_generics_type_373;
char* p_374;
int sline_375;
void* __right_value492 = (void*)0;
char* word_376;
void* __right_value493 = (void*)0;
struct sNode* right_node_377;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* _inf_value10;
struct sStoreFieldNode* _inf_obj_value10;
void* __right_value501 = (void*)0;
struct sNode* __dec_obj312;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct sNode* __dec_obj313;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* __dec_obj314;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sNode* __dec_obj315;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sNode* __dec_obj316;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj317;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sNode* __dec_obj318;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* __dec_obj319;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sNode* _inf_value11;
struct sNullCheckNode* _inf_obj_value11;
void* __right_value522 = (void*)0;
struct sNode* __dec_obj324;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sNode* __dec_obj325;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sNode* _inf_value12;
struct sNullCheckNode* _inf_obj_value12;
void* __right_value531 = (void*)0;
struct sNode* __dec_obj330;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
struct sNode* _inf_value13;
struct sLoadFieldNode* _inf_obj_value13;
void* __right_value538 = (void*)0;
struct sNode* __dec_obj337;
void* __right_value539 = (void*)0;
struct sNode* node2_382;
struct sNode* __dec_obj338;
struct sNode* __result207__;
    while((_Bool)1) {
        range_array_336=(_Bool)0;
        {
            p_337=info->p;
            sline_338=info->sline;
            if(            *info->p==91) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_339=info->no_comma;
                no_output_err_340=info->no_output_err;
                no_output_come_code_341=info->no_output_come_code;
                info->no_output_err=(_Bool)1;
                info->no_comma=(_Bool)1;
                info->no_output_come_code=(_Bool)1;
                exp_342=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_339;
                info->no_output_err=no_output_err_340;
                info->no_output_come_code=no_output_come_code_341;
                if(                *info->p==46&&*(info->p+1)==46) {
                    range_array_336=(_Bool)1;
                }
                if(exp_342) { exp_342 = come_decrement_ref_count2(exp_342, ((struct sNode*)exp_342)->finalize, ((struct sNode*)exp_342)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            info->p=p_337;
            info->sline=sline_338;
        }
        if(        range_array_336&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_343=*info->p==92;
            if(            quote_343) {
                info->p++;
            }
            info->p++;
            skip_spaces_and_lf(info);
            array_num_344=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1385, "list$1sNodeph"))));
            skip_pointer_attribute(info);
            node2_345=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_push_back(array_num_344,(struct sNode*)come_increment_ref_count(node2_345));
            if(            *info->p==46&&*(info->p+1)==46) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                node3_349=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(array_num_344,(struct sNode*)come_increment_ref_count(node3_349));
                expected_next_character(93,info);
                if(node3_349) { node3_349 = come_decrement_ref_count2(node3_349, ((struct sNode*)node3_349)->finalize, ((struct sNode*)node3_349)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1406, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sLoadRangeArrayNode*)(__right_value441=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1406, "sLoadRangeArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_344),quote_343,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value4->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value4->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value4->sline=(void*)sNodeBase_sline;
            _inf_value4->sname=(void*)sNodeBase_sname;
            _inf_value4->terminated=(void*)sNodeBase_terminated;
            _inf_value4->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj267=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value4);
            /* U1 */ if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value441,sLoadRangeArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(array_num_344,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node2_345) { node2_345 = come_decrement_ref_count2(node2_345, ((struct sNode*)node2_345)->finalize, ((struct sNode*)node2_345)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !range_array_336&&(*info->p==92&&*(info->p+1)==91||*info->p==91)) {
            quote_351=*info->p==92;
            if(            quote_351) {
                info->p++;
            }
            range_352=(_Bool)0;
            array_num_353=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1415, "list$1sNodeph"))));
            while(1) {
                range_array2_354=(_Bool)0;
                {
                    p_355=info->p;
                    sline_356=info->sline;
                    if(                    *info->p==91) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        no_comma_357=info->no_comma;
                        no_output_err_358=info->no_output_err;
                        no_output_come_code_359=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_360=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_357;
                        info->no_output_err=no_output_err_358;
                        info->no_output_come_code=no_output_come_code_359;
                        if(                        *info->p==46&&*(info->p+1)==46) {
                            range_array2_354=(_Bool)1;
                        }
                        if(exp_360) { exp_360 = come_decrement_ref_count2(exp_360, ((struct sNode*)exp_360)->finalize, ((struct sNode*)exp_360)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    info->p=p_355;
                    info->sline=sline_356;
                }
                if(                range_array2_354) {
                    break;
                }
                else if(                *info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    node2_361=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(array_num_353,(struct sNode*)come_increment_ref_count(node2_361));
                    if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        err_msg(info,"require ] character");
                        exit(2);
                    }
                    if(node2_361) { node2_361 = come_decrement_ref_count2(node2_361, ((struct sNode*)node2_361)->finalize, ((struct sNode*)node2_361)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    break;
                }
            }
            break_guard_362=(_Bool)0;
            if(            *info->p==63&&*(info->p+1)==63) {
                info->p+=2;
                skip_spaces_and_lf(info);
                break_guard_362=(_Bool)1;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_363=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1490, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sStoreArrayNode*)(__right_value453=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1490, "sStoreArrayNode")),node,(struct sNode*)come_increment_ref_count(right_node_363),(struct list$1sNodeph*)come_increment_ref_count(array_num_353),quote_351,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sStoreArrayNode_finalize;
                _inf_value5->clone=(void*)sStoreArrayNode_clone;
                _inf_value5->compile=(void*)sStoreArrayNode_compile;
                _inf_value5->sline=(void*)sNodeBase_sline;
                _inf_value5->sname=(void*)sNodeBase_sname;
                _inf_value5->terminated=(void*)sNodeBase_terminated;
                _inf_value5->kind=(void*)sStoreArrayNode_kind;
                __dec_obj276=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value5);
                /* U1 */ if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value453,sStoreArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_363) { right_node_363 = come_decrement_ref_count2(right_node_363, ((struct sNode*)right_node_363)->finalize, ((struct sNode*)right_node_363)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1493, "struct sNode");
                _inf_obj_value6=come_increment_ref_count(((struct sLoadArrayNode*)(__right_value461=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1493, "sLoadArrayNode")),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_353),quote_351,break_guard_362,info))));
                _inf_value6->_protocol_obj=_inf_obj_value6;
                _inf_value6->finalize=(void*)sLoadArrayNode_finalize;
                _inf_value6->clone=(void*)sLoadArrayNode_clone;
                _inf_value6->compile=(void*)sLoadArrayNode_compile;
                _inf_value6->sline=(void*)sNodeBase_sline;
                _inf_value6->sname=(void*)sNodeBase_sname;
                _inf_value6->terminated=(void*)sNodeBase_terminated;
                _inf_value6->kind=(void*)sLoadArrayNode_kind;
                __dec_obj283=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value6);
                /* U1 */ if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value461,sLoadArrayNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            /*i*/come_call_finalizer3(array_num_353,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        *info->p==33&&*(info->p+1)==123) {
            info->p+=2;
            skip_spaces_and_lf(info);
            no_comma_366=info->no_comma;
            info->no_comma=(_Bool)1;
            begin_367=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_366;
            expected_next_character(44,info);
            end_368=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(125,info);
            parse_sharp_v5(info);
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1513, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sRangeCheckNode*)(__right_value470=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count((struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1513, "sRangeCheckNode")),node,begin_367,end_368,info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sRangeCheckNode_finalize;
            _inf_value7->clone=(void*)sRangeCheckNode_clone;
            _inf_value7->compile=(void*)sRangeCheckNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sRangeCheckNode_kind;
            __dec_obj292=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value7);
            /* U1 */ if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value470,sRangeCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(begin_367) { begin_367 = come_decrement_ref_count2(begin_367, ((struct sNode*)begin_367)->finalize, ((struct sNode*)begin_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(end_368) { end_368 = come_decrement_ref_count2(end_368, ((struct sNode*)end_368)->finalize, ((struct sNode*)end_368)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=33) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1521, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(__right_value478=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1521, "sNullCheckNode")),node,(_Bool)0,info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sNullCheckNode_finalize;
            _inf_value8->clone=(void*)sNullCheckNode_clone;
            _inf_value8->compile=(void*)sNullCheckNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sNullCheckNode_kind;
            __dec_obj297=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value8);
            /* U1 */ if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value478,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==63&&*(info->p+1)==63) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1529, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sNullableNode*)(__right_value484=sNullableNode_initialize((struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "18field.c", 1529, "sNullableNode")),node,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sNullableNode_finalize;
            _inf_value9->clone=(void*)sNullableNode_clone;
            _inf_value9->compile=(void*)sNullableNode_compile;
            _inf_value9->sline=(void*)sNodeBase_sline;
            _inf_value9->sname=(void*)sNodeBase_sname;
            _inf_value9->terminated=(void*)sNodeBase_terminated;
            _inf_value9->kind=(void*)sNullableNode_kind;
            __dec_obj302=node;
            node=(struct sNode*)come_increment_ref_count(_inf_value9);
            /* U1 */ if(__dec_obj302) { __dec_obj302 = come_decrement_ref_count2(__dec_obj302, ((struct sNode*)__dec_obj302)->finalize, ((struct sNode*)__dec_obj302)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value484,sNullableNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        *info->p==33&&*(info->p+1)==33) {
            info->p+=2;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            __dec_obj303=node;
            node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
            /* U1 */ if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else if(        (*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62)) {
            if(            *info->p==46) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                info->p+=2;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            field_name_372=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            parse_method_generics_type_373=(_Bool)0;
            {
                p_374=info->p;
                sline_375=info->sline;
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_376=(char*)come_increment_ref_count(parse_word(info));
                        if(                        is_type_name(word_376,info)) {
                            parse_method_generics_type_373=(_Bool)1;
                        }
                        /* U13 */word_376 = come_decrement_ref_count2(word_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                info->p=p_374;
                info->sline=sline_375;
            }
            if(            !info->no_assign&&*info->p==61&&*(info->p+1)!=61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                right_node_377=(struct sNode*)come_increment_ref_count(expression_v13(info));
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1585, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sStoreFieldNode*)(__right_value495=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1585, "sStoreFieldNode")),node,(struct sNode*)come_increment_ref_count(right_node_377),(char*)come_increment_ref_count(field_name_372),info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sStoreFieldNode_finalize;
                _inf_value10->clone=(void*)sStoreFieldNode_clone;
                _inf_value10->compile=(void*)sStoreFieldNode_compile;
                _inf_value10->sline=(void*)sNodeBase_sline;
                _inf_value10->sname=(void*)sNodeBase_sname;
                _inf_value10->terminated=(void*)sNodeBase_terminated;
                _inf_value10->kind=(void*)sStoreFieldNode_kind;
                __dec_obj312=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value10);
                /* U1 */ if(__dec_obj312) { __dec_obj312 = come_decrement_ref_count2(__dec_obj312, ((struct sNode*)__dec_obj312)->finalize, ((struct sNode*)__dec_obj312)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value495,sStoreFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(right_node_377) { right_node_377 = come_decrement_ref_count2(right_node_377, ((struct sNode*)right_node_377)->finalize, ((struct sNode*)right_node_377)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else if(            !gComeC&&(*info->p==40||*info->p==123||string_operator_equals(field_name_372,"exception_throw")||string_operator_equals(field_name_372,"exception_value")||parse_method_generics_type_373||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40))) {
                if(                string_operator_equals(field_name_372,"if")) {
                    __dec_obj313=node;
                    node=(struct sNode*)come_increment_ref_count(parse_if_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_372,"elif")) {
                    __dec_obj314=node;
                    node=(struct sNode*)come_increment_ref_count(parse_elif_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_372,"case")) {
                    __dec_obj315=node;
                    node=(struct sNode*)come_increment_ref_count(parse_match((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_372,"less")) {
                    __dec_obj316=node;
                    node=(struct sNode*)come_increment_ref_count(parse_less_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj316) { __dec_obj316 = come_decrement_ref_count2(__dec_obj316, ((struct sNode*)__dec_obj316)->finalize, ((struct sNode*)__dec_obj316)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_372,"rescue")) {
                    __dec_obj317=node;
                    node=(struct sNode*)come_increment_ref_count(parse_rescue_method_call((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_372,"exception_throw")) {
                    __dec_obj318=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_throw((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else if(                string_operator_equals(field_name_372,"exception_value")) {
                    __dec_obj319=node;
                    node=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node)),info));
                    /* U1 */ if(__dec_obj319) { __dec_obj319 = come_decrement_ref_count2(__dec_obj319, ((struct sNode*)__dec_obj319)->finalize, ((struct sNode*)__dec_obj319)->_protocol_obj, 0,0,0, (void*)0); };
                }
                else {
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1611, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sNullCheckNode*)(__right_value518=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1611, "sNullCheckNode")),((struct sNode*)(__right_value517=sNode_clone(node))),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value11->clone=(void*)sNullCheckNode_clone;
                    _inf_value11->compile=(void*)sNullCheckNode_compile;
                    _inf_value11->sline=(void*)sNodeBase_sline;
                    _inf_value11->sname=(void*)sNodeBase_sname;
                    _inf_value11->terminated=(void*)sNodeBase_terminated;
                    _inf_value11->kind=(void*)sNullCheckNode_kind;
                    __dec_obj324=node;
                    node=(struct sNode*)come_increment_ref_count(_inf_value11);
                    /* U1 */ if(__dec_obj324) { __dec_obj324 = come_decrement_ref_count2(__dec_obj324, ((struct sNode*)__dec_obj324)->finalize, ((struct sNode*)__dec_obj324)->_protocol_obj, 0,0,0, (void*)0); };
                    if(__right_value517) { __right_value517 = come_decrement_ref_count2(__right_value517, ((struct sNode*)__right_value517)->finalize, ((struct sNode*)__right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    /*g*/come_call_finalizer3(__right_value518,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                    __dec_obj325=node;
                    node=(struct sNode*)come_increment_ref_count(parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(node)),(char*)come_increment_ref_count(field_name_372),info));
                    /* U1 */ if(__dec_obj325) { __dec_obj325 = come_decrement_ref_count2(__dec_obj325, ((struct sNode*)__dec_obj325)->finalize, ((struct sNode*)__dec_obj325)->_protocol_obj, 0,0,0, (void*)0); };
                }
            }
            else {
                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1616, "struct sNode");
                _inf_obj_value12=come_increment_ref_count(((struct sNullCheckNode*)(__right_value527=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1616, "sNullCheckNode")),((struct sNode*)(__right_value526=sNode_clone(node))),(_Bool)1,info))));
                _inf_value12->_protocol_obj=_inf_obj_value12;
                _inf_value12->finalize=(void*)sNullCheckNode_finalize;
                _inf_value12->clone=(void*)sNullCheckNode_clone;
                _inf_value12->compile=(void*)sNullCheckNode_compile;
                _inf_value12->sline=(void*)sNodeBase_sline;
                _inf_value12->sname=(void*)sNodeBase_sname;
                _inf_value12->terminated=(void*)sNodeBase_terminated;
                _inf_value12->kind=(void*)sNullCheckNode_kind;
                __dec_obj330=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value12);
                /* U1 */ if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
                if(__right_value526) { __right_value526 = come_decrement_ref_count2(__right_value526, ((struct sNode*)__right_value526)->finalize, ((struct sNode*)__right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                /*g*/come_call_finalizer3(__right_value527,sNullCheckNode_finalize, 0, 1, 0, 0, __result_obj__);
                _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1617, "struct sNode");
                _inf_obj_value13=come_increment_ref_count(((struct sLoadFieldNode*)(__right_value533=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1617, "sLoadFieldNode")),node,(char*)come_increment_ref_count(field_name_372),info))));
                _inf_value13->_protocol_obj=_inf_obj_value13;
                _inf_value13->finalize=(void*)sLoadFieldNode_finalize;
                _inf_value13->clone=(void*)sLoadFieldNode_clone;
                _inf_value13->compile=(void*)sLoadFieldNode_compile;
                _inf_value13->sline=(void*)sNodeBase_sline;
                _inf_value13->sname=(void*)sNodeBase_sname;
                _inf_value13->terminated=(void*)sNodeBase_terminated;
                _inf_value13->kind=(void*)sLoadFieldNode_kind;
                __dec_obj337=node;
                node=(struct sNode*)come_increment_ref_count(_inf_value13);
                /* U1 */ if(__dec_obj337) { __dec_obj337 = come_decrement_ref_count2(__dec_obj337, ((struct sNode*)__dec_obj337)->finalize, ((struct sNode*)__dec_obj337)->_protocol_obj, 0,0,0, (void*)0); };
                /*g*/come_call_finalizer3(__right_value533,sLoadFieldNode_finalize, 0, 1, 0, 0, __result_obj__);
            }
            /* U13 */field_name_372 = come_decrement_ref_count2(field_name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            node2_382=(struct sNode*)come_increment_ref_count(post_position_operator_v21((struct sNode*)come_increment_ref_count(node),info));
            if(            node2_382==((void*)0)) {
                if(node2_382) { node2_382 = come_decrement_ref_count2(node2_382, ((struct sNode*)node2_382)->finalize, ((struct sNode*)node2_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            __dec_obj338=node;
            node=(struct sNode*)come_increment_ref_count(node2_382);
            /* U1 */ if(__dec_obj338) { __dec_obj338 = come_decrement_ref_count2(__dec_obj338, ((struct sNode*)__dec_obj338)->finalize, ((struct sNode*)__dec_obj338)->_protocol_obj, 0,0,0, (void*)0); };
            if(node2_382) { node2_382 = come_decrement_ref_count2(node2_382, ((struct sNode*)node2_382)->finalize, ((struct sNode*)node2_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result207__ = gComeFunResultObject = __result_obj__ = node;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value436 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj258;
void* __right_value437 = (void*)0;
struct list_item$1sNodeph* litem_347;
struct sNode* __dec_obj259;
void* __right_value438 = (void*)0;
struct list_item$1sNodeph* litem_348;
struct sNode* __dec_obj260;
struct list$1sNodeph* __result186__;
    if(    self->len==0) {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value436=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 227, "list_item$1sNodeph"))));
        litem_346->prev=((void*)0);
        litem_346->next=((void*)0);
        __dec_obj258=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_346;
        self->head=litem_346;
    }
    else if(    self->len==1) {
        litem_347=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value437=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 237, "list_item$1sNodeph"))));
        litem_347->prev=self->head;
        litem_347->next=((void*)0);
        __dec_obj259=litem_347->item;
        litem_347->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_347;
        self->head->next=litem_347;
    }
    else {
        litem_348=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value438=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 247, "list_item$1sNodeph"))));
        litem_348->prev=self->tail;
        litem_348->next=((void*)0);
        __dec_obj260=litem_348->item;
        litem_348->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_348;
        self->tail=litem_348;
    }
    self->len++;
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __dec_obj261;
struct list$1sNodeph* __dec_obj262;
struct sNode* __dec_obj263;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj261=self->sname;
            /*G*/ __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj262=self->mArrayNum;
            come_call_finalizer3(__dec_obj262,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj263=self->mLeft;
            /* U1 */ if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadRangeArrayNode* __result187__;
void* __right_value442 = (void*)0;
struct sLoadRangeArrayNode* result_350;
void* __right_value443 = (void*)0;
char* __dec_obj264;
void* __right_value444 = (void*)0;
struct list$1sNodeph* __dec_obj265;
void* __right_value445 = (void*)0;
struct sNode* __dec_obj266;
struct sLoadRangeArrayNode* __result188__;
    if(    self==(void*)0) {
        __result187__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    result_350=(struct sLoadRangeArrayNode*)come_increment_ref_count((struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3, "sLoadRangeArrayNode"));
    if(    self!=((void*)0)) {
        result_350->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj264=result_350->sname;
        result_350->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj265=result_350->mArrayNum;
        result_350->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj265,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj266=result_350->mLeft;
        result_350->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj266) { __dec_obj266 = come_decrement_ref_count2(__dec_obj266, ((struct sNode*)__dec_obj266)->finalize, ((struct sNode*)__dec_obj266)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_350->mQuote=self->mQuote;
    }
    __result188__ = gComeFunResultObject = __result_obj__ = result_350;
    /*i*/come_call_finalizer3(result_350,sLoadRangeArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __dec_obj268;
struct sNode* __dec_obj269;
struct sNode* __dec_obj270;
struct list$1sNodeph* __dec_obj271;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj268=self->sname;
            /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj269=self->mLeft;
            /* U1 */ if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj270=self->mRight;
            /* U1 */ if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj271=self->mArrayNum;
            come_call_finalizer3(__dec_obj271,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
void* __result_obj__=(void*)0;
struct sStoreArrayNode* __result189__;
void* __right_value454 = (void*)0;
struct sStoreArrayNode* result_364;
void* __right_value455 = (void*)0;
char* __dec_obj272;
void* __right_value456 = (void*)0;
struct sNode* __dec_obj273;
void* __right_value457 = (void*)0;
struct sNode* __dec_obj274;
void* __right_value458 = (void*)0;
struct list$1sNodeph* __dec_obj275;
struct sStoreArrayNode* __result190__;
    if(    self==(void*)0) {
        __result189__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    result_364=(struct sStoreArrayNode*)come_increment_ref_count((struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3, "sStoreArrayNode"));
    if(    self!=((void*)0)) {
        result_364->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_364->sname;
        result_364->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj273=result_364->mLeft;
        result_364->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj274=result_364->mRight;
        result_364->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj275=result_364->mArrayNum;
        result_364->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj275,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_364->mQuote=self->mQuote;
    }
    __result190__ = gComeFunResultObject = __result_obj__ = result_364;
    /*i*/come_call_finalizer3(result_364,sStoreArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __dec_obj277;
struct list$1sNodeph* __dec_obj278;
struct sNode* __dec_obj279;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj277=self->sname;
            /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj278=self->mArrayNum;
            come_call_finalizer3(__dec_obj278,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj279=self->mLeft;
            /* U1 */ if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
void* __result_obj__=(void*)0;
struct sLoadArrayNode* __result191__;
void* __right_value462 = (void*)0;
struct sLoadArrayNode* result_365;
void* __right_value463 = (void*)0;
char* __dec_obj280;
void* __right_value464 = (void*)0;
struct list$1sNodeph* __dec_obj281;
void* __right_value465 = (void*)0;
struct sNode* __dec_obj282;
struct sLoadArrayNode* __result192__;
    if(    self==(void*)0) {
        __result191__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    result_365=(struct sLoadArrayNode*)come_increment_ref_count((struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3, "sLoadArrayNode"));
    if(    self!=((void*)0)) {
        result_365->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_365->sname;
        result_365->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj281=result_365->mArrayNum;
        result_365->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj281,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_365->mBreakGuard=self->mBreakGuard;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj282=result_365->mLeft;
        result_365->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_365->mQuote=self->mQuote;
    }
    __result192__ = gComeFunResultObject = __result_obj__ = result_365;
    /*i*/come_call_finalizer3(result_365,sLoadArrayNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
char* __dec_obj284;
struct sNode* __dec_obj285;
struct sNode* __dec_obj286;
struct sNode* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj284=self->sname;
            /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj285=self->mLeft;
            /* U1 */ if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mBegin!=((void*)0)) {
        if(        self->mBegin==gComeFunResultObject) {
            __dec_obj286=self->mBegin;
            /* U1 */ if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mBegin) { self->mBegin = come_decrement_ref_count2(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mEnd!=((void*)0)) {
        if(        self->mEnd==gComeFunResultObject) {
            __dec_obj287=self->mEnd;
            /* U1 */ if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mEnd) { self->mEnd = come_decrement_ref_count2(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
void* __result_obj__=(void*)0;
struct sRangeCheckNode* __result193__;
void* __right_value471 = (void*)0;
struct sRangeCheckNode* result_369;
void* __right_value472 = (void*)0;
char* __dec_obj288;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj289;
void* __right_value474 = (void*)0;
struct sNode* __dec_obj290;
void* __right_value475 = (void*)0;
struct sNode* __dec_obj291;
struct sRangeCheckNode* __result194__;
    if(    self==(void*)0) {
        __result193__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    result_369=(struct sRangeCheckNode*)come_increment_ref_count((struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3, "sRangeCheckNode"));
    if(    self!=((void*)0)) {
        result_369->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_369->sname;
        result_369->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj289=result_369->mLeft;
        result_369->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mBegin!=((void*)0)) {
        __dec_obj290=result_369->mBegin;
        result_369->mBegin=(struct sNode*)come_increment_ref_count(sNode_clone(self->mBegin));
        /* U1 */ if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mEnd!=((void*)0)) {
        __dec_obj291=result_369->mEnd;
        result_369->mEnd=(struct sNode*)come_increment_ref_count(sNode_clone(self->mEnd));
        /* U1 */ if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result194__ = gComeFunResultObject = __result_obj__ = result_369;
    /*i*/come_call_finalizer3(result_369,sRangeCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

static void sNullableNode_finalize(struct sNullableNode* self){
char* __dec_obj298;
struct sNode* __dec_obj299;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj298=self->sname;
            /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj299=self->mLeft;
            /* U1 */ if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullableNode* sNullableNode_clone(struct sNullableNode* self){
void* __result_obj__=(void*)0;
struct sNullableNode* __result197__;
void* __right_value485 = (void*)0;
struct sNullableNode* result_371;
void* __right_value486 = (void*)0;
char* __dec_obj300;
void* __right_value487 = (void*)0;
struct sNode* __dec_obj301;
struct sNullableNode* __result198__;
    if(    self==(void*)0) {
        __result197__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    result_371=(struct sNullableNode*)come_increment_ref_count((struct sNullableNode*)come_calloc(1, sizeof(struct sNullableNode)*(1), "sNullableNode_clone", 3, "sNullableNode"));
    if(    self!=((void*)0)) {
        result_371->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_371->sname;
        result_371->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj301=result_371->mLeft;
        result_371->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result198__ = gComeFunResultObject = __result_obj__ = result_371;
    /*i*/come_call_finalizer3(result_371,sNullableNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __dec_obj304;
struct sNode* __dec_obj305;
struct sNode* __dec_obj306;
char* __dec_obj307;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj304=self->sname;
            /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj305=self->mLeft;
            /* U1 */ if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        if(        self->mRight==gComeFunResultObject) {
            __dec_obj306=self->mRight;
            /* U1 */ if(__dec_obj306) { __dec_obj306 = come_decrement_ref_count2(__dec_obj306, ((struct sNode*)__dec_obj306)->finalize, ((struct sNode*)__dec_obj306)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj307=self->mName;
            /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
void* __result_obj__=(void*)0;
struct sStoreFieldNode* __result199__;
void* __right_value496 = (void*)0;
struct sStoreFieldNode* result_378;
void* __right_value497 = (void*)0;
char* __dec_obj308;
void* __right_value498 = (void*)0;
struct sNode* __dec_obj309;
void* __right_value499 = (void*)0;
struct sNode* __dec_obj310;
void* __right_value500 = (void*)0;
char* __dec_obj311;
struct sStoreFieldNode* __result200__;
    if(    self==(void*)0) {
        __result199__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    result_378=(struct sStoreFieldNode*)come_increment_ref_count((struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3, "sStoreFieldNode"));
    if(    self!=((void*)0)) {
        result_378->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj308=result_378->sname;
        result_378->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj309=result_378->mLeft;
        result_378->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mRight!=((void*)0)) {
        __dec_obj310=result_378->mRight;
        result_378->mRight=(struct sNode*)come_increment_ref_count(sNode_clone(self->mRight));
        /* U1 */ if(__dec_obj310) { __dec_obj310 = come_decrement_ref_count2(__dec_obj310, ((struct sNode*)__dec_obj310)->finalize, ((struct sNode*)__dec_obj310)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj311=result_378->mName;
        result_378->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = result_378;
    /*i*/come_call_finalizer3(result_378,sStoreFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __dec_obj326;
struct sNode* __dec_obj327;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj326=self->sname;
            /*G*/ __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj327=self->mLeft;
            /* U1 */ if(__dec_obj327) { __dec_obj327 = come_decrement_ref_count2(__dec_obj327, ((struct sNode*)__dec_obj327)->finalize, ((struct sNode*)__dec_obj327)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
void* __result_obj__=(void*)0;
struct sNullCheckNode* __result203__;
void* __right_value528 = (void*)0;
struct sNullCheckNode* result_380;
void* __right_value529 = (void*)0;
char* __dec_obj328;
void* __right_value530 = (void*)0;
struct sNode* __dec_obj329;
struct sNullCheckNode* __result204__;
    if(    self==(void*)0) {
        __result203__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    result_380=(struct sNullCheckNode*)come_increment_ref_count((struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3, "sNullCheckNode"));
    if(    self!=((void*)0)) {
        result_380->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_380->sname;
        result_380->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj329=result_380->mLeft;
        result_380->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj329) { __dec_obj329 = come_decrement_ref_count2(__dec_obj329, ((struct sNode*)__dec_obj329)->finalize, ((struct sNode*)__dec_obj329)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_380->mOnlyNullCecker=self->mOnlyNullCecker;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_380;
    /*i*/come_call_finalizer3(result_380,sNullCheckNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __dec_obj331;
struct sNode* __dec_obj332;
char* __dec_obj333;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj331=self->sname;
            /*G*/ __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj332=self->mLeft;
            /* U1 */ if(__dec_obj332) { __dec_obj332 = come_decrement_ref_count2(__dec_obj332, ((struct sNode*)__dec_obj332)->finalize, ((struct sNode*)__dec_obj332)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj333=self->mName;
            /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
void* __result_obj__=(void*)0;
struct sLoadFieldNode* __result205__;
void* __right_value534 = (void*)0;
struct sLoadFieldNode* result_381;
void* __right_value535 = (void*)0;
char* __dec_obj334;
void* __right_value536 = (void*)0;
struct sNode* __dec_obj335;
void* __right_value537 = (void*)0;
char* __dec_obj336;
struct sLoadFieldNode* __result206__;
    if(    self==(void*)0) {
        __result205__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_381=(struct sLoadFieldNode*)come_increment_ref_count((struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3, "sLoadFieldNode"));
    if(    self!=((void*)0)) {
        result_381->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj334=result_381->sname;
        result_381->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj335=result_381->mLeft;
        result_381->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        /* U1 */ if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj336=result_381->mName;
        result_381->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_381;
    /*i*/come_call_finalizer3(result_381,sLoadFieldNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

