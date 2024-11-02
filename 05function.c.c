// source head
typedef unsigned long unsigned  int size_t;
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
typedef long (*cookie_read_function_t)(void*,char*,unsigned long unsigned  int);
typedef long (*cookie_write_function_t)(void*,const char*,unsigned long unsigned  int);
typedef int (*cookie_seek_function_t)(void*,long*,int);
typedef int (*cookie_close_function_t)(void*);
struct _IO_cookie_io_functions_t
{
    long (*read)(void*,char*,unsigned long unsigned  int);
    long (*write)(void*,const char*,unsigned long unsigned  int);
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
    short short* p;
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
    short short item;
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
    short short* items;
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
struct integer
{
    long value;
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
    _Bool no_output_err;
    _Bool no_output_come_code;
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
struct sSemicolonNode
{
    int sline;
    char* sname;
};
struct sLambdaNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
};
struct sFunNode
{
    int sline;
    char* sname;
    struct sFun* mFun;
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
unsigned long unsigned  int fread(void* anonymous_var_nameX23, unsigned long unsigned  int anonymous_var_nameX24, unsigned long unsigned  int anonymous_var_nameX25, struct _IO_FILE* anonymous_var_nameX26);
unsigned long unsigned  int fwrite(const void* anonymous_var_nameX27, unsigned long unsigned  int anonymous_var_nameX28, unsigned long unsigned  int anonymous_var_nameX29, struct _IO_FILE* anonymous_var_nameX30);
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
int snprintf(char* anonymous_var_nameX51, unsigned long unsigned  int anonymous_var_nameX52, const char* anonymous_var_nameX53, ...);
int vprintf(const char* anonymous_var_nameX54, va_list anonymous_var_nameX55);
int vfprintf(struct _IO_FILE* anonymous_var_nameX56, const char* anonymous_var_nameX57, va_list anonymous_var_nameX58);
int vsprintf(char* anonymous_var_nameX59, const char* anonymous_var_nameX60, va_list anonymous_var_nameX61);
int vsnprintf(char* anonymous_var_nameX62, unsigned long unsigned  int anonymous_var_nameX63, const char* anonymous_var_nameX64, va_list anonymous_var_nameX65);
int scanf(const char* anonymous_var_nameX66, ...);
int fscanf(struct _IO_FILE* anonymous_var_nameX67, const char* anonymous_var_nameX68, ...);
int sscanf(const char* anonymous_var_nameX69, const char* anonymous_var_nameX70, ...);
int vscanf(const char* anonymous_var_nameX71, va_list anonymous_var_nameX72);
int vfscanf(struct _IO_FILE* anonymous_var_nameX73, const char* anonymous_var_nameX74, va_list anonymous_var_nameX75);
int vsscanf(const char* anonymous_var_nameX76, const char* anonymous_var_nameX77, va_list anonymous_var_nameX78);
void perror(const char* anonymous_var_nameX79);
int setvbuf(struct _IO_FILE* anonymous_var_nameX80, char* anonymous_var_nameX81, int anonymous_var_nameX82, unsigned long unsigned  int anonymous_var_nameX83);
void setbuf(struct _IO_FILE* anonymous_var_nameX84, char* anonymous_var_nameX85);
char* tmpnam(char* anonymous_var_nameX86);
struct _IO_FILE* tmpfile();
struct _IO_FILE* fmemopen(void* anonymous_var_nameX87, unsigned long unsigned  int anonymous_var_nameX88, const char* anonymous_var_nameX89);
struct _IO_FILE* open_memstream(char** anonymous_var_nameX90, unsigned long unsigned  int* anonymous_var_nameX91);
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
long getdelim(char** anonymous_var_nameX114, unsigned long unsigned  int* anonymous_var_nameX115, int anonymous_var_nameX116, struct _IO_FILE* anonymous_var_nameX117);
long getline(char** anonymous_var_nameX118, unsigned long unsigned  int* anonymous_var_nameX119, struct _IO_FILE* anonymous_var_nameX120);
int renameat(int anonymous_var_nameX121, const char* anonymous_var_nameX122, int anonymous_var_nameX123, const char* anonymous_var_nameX124);
char* ctermid(char* anonymous_var_nameX125);
char* tempnam(const char* anonymous_var_nameX126, const char* anonymous_var_nameX127);
char* cuserid(char* anonymous_var_nameX128);
void setlinebuf(struct _IO_FILE* anonymous_var_nameX129);
void setbuffer(struct _IO_FILE* anonymous_var_nameX130, char* anonymous_var_nameX131, unsigned long unsigned  int anonymous_var_nameX132);
int fgetc_unlocked(struct _IO_FILE* anonymous_var_nameX133);
int fputc_unlocked(int anonymous_var_nameX134, struct _IO_FILE* anonymous_var_nameX135);
int fflush_unlocked(struct _IO_FILE* anonymous_var_nameX136);
unsigned long unsigned  int fread_unlocked(void* anonymous_var_nameX137, unsigned long unsigned  int anonymous_var_nameX138, unsigned long unsigned  int anonymous_var_nameX139, struct _IO_FILE* anonymous_var_nameX140);
unsigned long unsigned  int fwrite_unlocked(const void* anonymous_var_nameX141, unsigned long unsigned  int anonymous_var_nameX142, unsigned long unsigned  int anonymous_var_nameX143, struct _IO_FILE* anonymous_var_nameX144);
void clearerr_unlocked(struct _IO_FILE* anonymous_var_nameX145);
int feof_unlocked(struct _IO_FILE* anonymous_var_nameX146);
int ferror_unlocked(struct _IO_FILE* anonymous_var_nameX147);
int fileno_unlocked(struct _IO_FILE* anonymous_var_nameX148);
int getw(struct _IO_FILE* anonymous_var_nameX149);
int putw(int anonymous_var_nameX150, struct _IO_FILE* anonymous_var_nameX151);
char* fgetln(struct _IO_FILE* anonymous_var_nameX152, unsigned long unsigned  int* anonymous_var_nameX153);
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
unsigned long unsigned  int strtoul(const char* anonymous_var_nameX190, char** anonymous_var_nameX191, int anonymous_var_nameX192);
long long strtoll(const char* anonymous_var_nameX193, char** anonymous_var_nameX194, int anonymous_var_nameX195);
unsigned long unsigned  long strtoull(const char* anonymous_var_nameX196, char** anonymous_var_nameX197, int anonymous_var_nameX198);
int rand();
void srand(unsigned int anonymous_var_nameX199);
void* malloc(unsigned long unsigned  int anonymous_var_nameX200);
void* calloc(unsigned long unsigned  int anonymous_var_nameX201, unsigned long unsigned  int anonymous_var_nameX202);
void* realloc(void* anonymous_var_nameX203, unsigned long unsigned  int anonymous_var_nameX204);
void free(void* anonymous_var_nameX205);
void* aligned_alloc(unsigned long unsigned  int anonymous_var_nameX206, unsigned long unsigned  int anonymous_var_nameX207);
void abort();
int atexit(void (*anonymous_lambda_var_nameZ1)());
void exit(int anonymous_var_nameX208);
void _Exit(int anonymous_var_nameX209);
int at_quick_exit(void (*anonymous_lambda_var_nameZ2)());
void quick_exit(int anonymous_var_nameX210);
char* getenv(const char* anonymous_var_nameX211);
int system(const char* anonymous_var_nameX212);
void* bsearch(const void* anonymous_var_nameX213, const void* anonymous_var_nameX214, unsigned long unsigned  int anonymous_var_nameX215, unsigned long unsigned  int anonymous_var_nameX216, int (*anonymous_lambda_var_nameZ3)(const void*,const void*));
void qsort(void* anonymous_var_nameX219, unsigned long unsigned  int anonymous_var_nameX220, unsigned long unsigned  int anonymous_var_nameX221, int (*anonymous_lambda_var_nameZ4)(const void*,const void*));
int abs(int anonymous_var_nameX224);
long labs(long anonymous_var_nameX225);
long long llabs(long  long anonymous_var_nameX226);
struct anonymous_typeX1 div(int anonymous_var_nameX227, int anonymous_var_nameX228);
struct anonymous_typeX2 ldiv(long anonymous_var_nameX229, long anonymous_var_nameX230);
struct anonymous_typeX3 lldiv(long  long anonymous_var_nameX231, long  long anonymous_var_nameX232);
int mblen(const char* anonymous_var_nameX233, unsigned long unsigned  int anonymous_var_nameX234);
int mbtowc(unsigned int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long unsigned  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, unsigned int anonymous_var_nameX239);
unsigned long unsigned  int mbstowcs(unsigned int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long unsigned  int anonymous_var_nameX242);
unsigned long unsigned  int wcstombs(char* anonymous_var_nameX243, const unsigned int* anonymous_var_nameX244, unsigned long unsigned  int anonymous_var_nameX245);
unsigned long unsigned  int __ctype_get_mb_cur_max();
int posix_memalign(void** anonymous_var_nameX246, unsigned long unsigned  int anonymous_var_nameX247, unsigned long unsigned  int anonymous_var_nameX248);
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
char* initstate(unsigned int anonymous_var_nameX264, char* anonymous_var_nameX265, unsigned long unsigned  int anonymous_var_nameX266);
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
void* alloca(unsigned long unsigned  int anonymous_var_nameX282);
char* mktemp(char* anonymous_var_nameX283);
int mkstemps(char* anonymous_var_nameX284, int anonymous_var_nameX285);
int mkostemps(char* anonymous_var_nameX286, int anonymous_var_nameX287, int anonymous_var_nameX288);
void* valloc(unsigned long unsigned  int anonymous_var_nameX289);
void* memalign(unsigned long unsigned  int anonymous_var_nameX290, unsigned long unsigned  int anonymous_var_nameX291);
int getloadavg(double* anonymous_var_nameX292, int anonymous_var_nameX293);
int clearenv();
void* reallocarray(void* anonymous_var_nameX294, unsigned long unsigned  int anonymous_var_nameX295, unsigned long unsigned  int anonymous_var_nameX296);
void qsort_r(void* anonymous_var_nameX297, unsigned long unsigned  int anonymous_var_nameX298, unsigned long unsigned  int anonymous_var_nameX299, int (*anonymous_lambda_var_nameZ5)(const void*,const void*,void*), void* anonymous_var_nameX303);
int ptsname_r(int anonymous_var_nameX304, char* anonymous_var_nameX305, unsigned long unsigned  int anonymous_var_nameX306);
char* ecvt(double anonymous_var_nameX307, int anonymous_var_nameX308, int* anonymous_var_nameX309, int* anonymous_var_nameX310);
char* fcvt(double anonymous_var_nameX311, int anonymous_var_nameX312, int* anonymous_var_nameX313, int* anonymous_var_nameX314);
char* gcvt(double anonymous_var_nameX315, int anonymous_var_nameX316, char* anonymous_var_nameX317);
char* secure_getenv(const char* anonymous_var_nameX318);
float strtof_l(const char* anonymous_var_nameX319, char** anonymous_var_nameX320, struct __locale_struct* anonymous_var_nameX321);
double strtod_l(const char* anonymous_var_nameX322, char** anonymous_var_nameX323, struct __locale_struct* anonymous_var_nameX324);
long  double strtold_l(const char* anonymous_var_nameX325, char** anonymous_var_nameX326, struct __locale_struct* anonymous_var_nameX327);
void* memcpy(void* anonymous_var_nameX328, const void* anonymous_var_nameX329, unsigned long unsigned  int anonymous_var_nameX330);
void* memmove(void* anonymous_var_nameX331, const void* anonymous_var_nameX332, unsigned long unsigned  int anonymous_var_nameX333);
void* memset(void* anonymous_var_nameX334, int anonymous_var_nameX335, unsigned long unsigned  int anonymous_var_nameX336);
int memcmp(const void* anonymous_var_nameX337, const void* anonymous_var_nameX338, unsigned long unsigned  int anonymous_var_nameX339);
void* memchr(const void* anonymous_var_nameX340, int anonymous_var_nameX341, unsigned long unsigned  int anonymous_var_nameX342);
char* strcpy(char* anonymous_var_nameX343, const char* anonymous_var_nameX344);
char* strncpy(char* anonymous_var_nameX345, const char* anonymous_var_nameX346, unsigned long unsigned  int anonymous_var_nameX347);
char* strcat(char* anonymous_var_nameX348, const char* anonymous_var_nameX349);
char* strncat(char* anonymous_var_nameX350, const char* anonymous_var_nameX351, unsigned long unsigned  int anonymous_var_nameX352);
int strcmp(const char* anonymous_var_nameX353, const char* anonymous_var_nameX354);
int strncmp(const char* anonymous_var_nameX355, const char* anonymous_var_nameX356, unsigned long unsigned  int anonymous_var_nameX357);
int strcoll(const char* anonymous_var_nameX358, const char* anonymous_var_nameX359);
unsigned long unsigned  int strxfrm(char* anonymous_var_nameX360, const char* anonymous_var_nameX361, unsigned long unsigned  int anonymous_var_nameX362);
char* strchr(const char* anonymous_var_nameX363, int anonymous_var_nameX364);
char* strrchr(const char* anonymous_var_nameX365, int anonymous_var_nameX366);
unsigned long unsigned  int strcspn(const char* anonymous_var_nameX367, const char* anonymous_var_nameX368);
unsigned long unsigned  int strspn(const char* anonymous_var_nameX369, const char* anonymous_var_nameX370);
char* strpbrk(const char* anonymous_var_nameX371, const char* anonymous_var_nameX372);
char* strstr(const char* anonymous_var_nameX373, const char* anonymous_var_nameX374);
char* strtok(char* anonymous_var_nameX375, const char* anonymous_var_nameX376);
unsigned long unsigned  int strlen(const char* anonymous_var_nameX377);
char* strerror(int anonymous_var_nameX378);
int bcmp(const void* anonymous_var_nameX379, const void* anonymous_var_nameX380, unsigned long unsigned  int anonymous_var_nameX381);
void bcopy(const void* anonymous_var_nameX382, void* anonymous_var_nameX383, unsigned long unsigned  int anonymous_var_nameX384);
void bzero(void* anonymous_var_nameX385, unsigned long unsigned  int anonymous_var_nameX386);
char* index(const char* anonymous_var_nameX387, int anonymous_var_nameX388);
char* rindex(const char* anonymous_var_nameX389, int anonymous_var_nameX390);
int ffs(int anonymous_var_nameX391);
int ffsl(long anonymous_var_nameX392);
int ffsll(long  long anonymous_var_nameX393);
int strcasecmp(const char* anonymous_var_nameX394, const char* anonymous_var_nameX395);
int strncasecmp(const char* anonymous_var_nameX396, const char* anonymous_var_nameX397, unsigned long unsigned  int anonymous_var_nameX398);
int strcasecmp_l(const char* anonymous_var_nameX399, const char* anonymous_var_nameX400, struct __locale_struct* anonymous_var_nameX401);
int strncasecmp_l(const char* anonymous_var_nameX402, const char* anonymous_var_nameX403, unsigned long unsigned  int anonymous_var_nameX404, struct __locale_struct* anonymous_var_nameX405);
char* strtok_r(char* anonymous_var_nameX406, const char* anonymous_var_nameX407, char** anonymous_var_nameX408);
int strerror_r(int anonymous_var_nameX409, char* anonymous_var_nameX410, unsigned long unsigned  int anonymous_var_nameX411);
char* stpcpy(char* anonymous_var_nameX412, const char* anonymous_var_nameX413);
char* stpncpy(char* anonymous_var_nameX414, const char* anonymous_var_nameX415, unsigned long unsigned  int anonymous_var_nameX416);
unsigned long unsigned  int strnlen(const char* anonymous_var_nameX417, unsigned long unsigned  int anonymous_var_nameX418);
char* strdup(const char* anonymous_var_nameX419);
char* strndup(const char* anonymous_var_nameX420, unsigned long unsigned  int anonymous_var_nameX421);
char* strsignal(int anonymous_var_nameX422);
char* strerror_l(int anonymous_var_nameX423, struct __locale_struct* anonymous_var_nameX424);
int strcoll_l(const char* anonymous_var_nameX425, const char* anonymous_var_nameX426, struct __locale_struct* anonymous_var_nameX427);
unsigned long unsigned  int strxfrm_l(char* anonymous_var_nameX428, const char* anonymous_var_nameX429, unsigned long unsigned  int anonymous_var_nameX430, struct __locale_struct* anonymous_var_nameX431);
void* memmem(const void* anonymous_var_nameX432, unsigned long unsigned  int anonymous_var_nameX433, const void* anonymous_var_nameX434, unsigned long unsigned  int anonymous_var_nameX435);
void* memccpy(void* anonymous_var_nameX436, const void* anonymous_var_nameX437, int anonymous_var_nameX438, unsigned long unsigned  int anonymous_var_nameX439);
char* strsep(char** anonymous_var_nameX440, const char* anonymous_var_nameX441);
unsigned long unsigned  int strlcat(char* anonymous_var_nameX442, const char* anonymous_var_nameX443, unsigned long unsigned  int anonymous_var_nameX444);
unsigned long unsigned  int strlcpy(char* anonymous_var_nameX445, const char* anonymous_var_nameX446, unsigned long unsigned  int anonymous_var_nameX447);
void explicit_bzero(void* anonymous_var_nameX448, unsigned long unsigned  int anonymous_var_nameX449);
int strverscmp(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
char* strchrnul(const char* anonymous_var_nameX452, int anonymous_var_nameX453);
char* strcasestr(const char* anonymous_var_nameX454, const char* anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long unsigned  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long unsigned  int anonymous_var_nameX461);
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
void* come_calloc(unsigned long unsigned  int count, unsigned long unsigned  int size, char* sname, int sline, char* class_name);
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
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long unsigned  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short short value);
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
static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values);
static struct list$1short* list$1short_push_back(struct list$1short* self, short short item);
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
static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values);
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
_Bool short_equals(short short self, short short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long unsigned  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long unsigned  int size_t_clone(long self);
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
char* short_to_string(short short self);
char* int_to_string(int self);
char* long_to_string(long self);
char* size_t_to_string(unsigned long unsigned  int self);
char* float_to_string(float self);
char* double_to_string(double self);
char* string_to_string(char* self);
char* charp_to_string(char* self);
int bool_compare(_Bool left, _Bool right);
int char_compare(char left, char right);
int short_compare(short short left, short short right);
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
struct integer* char_to_integer(char self);
struct integer* short_to_integer(short short self);
struct integer* int_to_integer(int self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
int integer_compare(struct integer* self, struct integer* right);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, _Bool throw_or_rescue, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);
struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);
struct sNode* post_position_operator_v99(struct sNode* node, struct sInfo* info);
struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* post_position_operator_v19(struct sNode* node, struct sInfo* info);
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool throw_or_rescue, struct sInfo* info);
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
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
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
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static struct list$1int* list$1int_initialize(struct list$1int* self);
static void list$1int_finalize(struct list$1int* self);
static struct list$1int* list$1int_add(struct list$1int* self, int item);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
static void list$1int_pop_front(struct list$1int* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool voidp_equals(void* left, void* right);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
static struct sVar* list$1sVarph_begin(struct list$1sVarph* self);
static _Bool list$1sVarph_end(struct list$1sVarph* self);
static struct sVar* list$1sVarph_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
char* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static void sFunNode_finalize(struct sFunNode* self);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2342, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2349, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2358, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2365, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2372, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2379, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2386, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2686, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2691, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2696, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2701, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2706, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2739, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2746, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2748, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2753, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2755, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2760, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2762, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2767, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2769, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2774, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2776, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2781, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2783, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2788, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2793, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2798, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2803, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2808, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2813, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2818, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2823, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2828, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2833, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2838, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2843, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2848, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2853, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long unsigned  int len, char* str){
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
static inline unsigned long unsigned  int shortpa_length(short short* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int intpa_length(int* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int longpa_length(long* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int floatpa_length(float* self, unsigned long unsigned  int len){
    return len;
}
static inline unsigned long unsigned  int doublepa_length(double* self, unsigned long unsigned  int len){
    return len;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    __right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    __right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    __right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
    self->p=(short short*)value->buf;
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 223, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 233, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 243, "list_item$1char"))));
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 223, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 233, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 243, "list_item$1charp"))));
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


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short short* values){
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

static struct list$1short* list$1short_push_back(struct list$1short* self, short short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 223, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 233, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 243, "list_item$1short"))));
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 223, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 233, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 243, "list_item$1int"))));
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 223, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 233, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 243, "list_item$1long"))));
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 223, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 233, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 243, "list_item$1float"))));
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 223, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 233, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 243, "list_item$1double"))));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1005, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1005, "char*")));
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
            self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 1005, "short")));
    memcpy(self->items,values,sizeof(short short)*self->len);
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1005, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1005, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1005, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1005, "double")));
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











struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
struct sSemicolonNode* __result65__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result65__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
char* __result66__;
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=__builtin_string("sSemicolonNode")));
    __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value118 = (void*)0;
struct sLambdaNode* __result67__;
    ((struct sNodeBase*)(__right_value118=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value118,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
char* __result68__;
    __result68__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value119=__builtin_string("sLambdaNode")));
    __right_value119 = come_decrement_ref_count2(__right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_66;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* result_type_67;
void* __right_value122 = (void*)0;
int block_level_68;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_69;
void* __right_value125 = (void*)0;
char* __dec_obj18;
void* __right_value161 = (void*)0;
struct sType* __dec_obj63;
_Bool __result88__;
    come_fun_66=info->come_fun;
    info->come_fun=self->mFun;
    result_type_67=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_67,"__result_obj__",(_Bool)0,info))));
        __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_68=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_68;
    come_value_69=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_69->c_value;
    come_value_69->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=come_value_69->type;
    come_value_69->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_69->var=((void*)0);
    add_come_last_code(info,"%s",come_value_69->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_69));
    info->come_fun=come_fun_66;
    __result88__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_67,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value126 = (void*)0;
struct sType* result_70;
void* __right_value129 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value130 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value131 = (void*)0;
struct tuple1$1sTypeph* __dec_obj43;
void* __right_value132 = (void*)0;
char* __dec_obj44;
void* __right_value139 = (void*)0;
struct list$1sTypeph* __dec_obj48;
void* __right_value147 = (void*)0;
struct list$1sNodeph* __dec_obj52;
void* __right_value148 = (void*)0;
struct list$1sTypeph* __dec_obj53;
void* __right_value155 = (void*)0;
struct list$1charph* __dec_obj57;
void* __right_value156 = (void*)0;
struct tuple1$1sTypeph* __dec_obj58;
void* __right_value157 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value158 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value159 = (void*)0;
char* __dec_obj61;
void* __right_value160 = (void*)0;
char* __dec_obj62;
struct sType* __result86__;
    if(    self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_70=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_70->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_70->mNoSolvedGenericsType;
        result_70->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_70->mOriginalLoadVarType;
        result_70->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj43=result_70->mNoExceptionType;
        result_70->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj44=result_70->mGenericsName;
        result_70->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj48=result_70->mGenericsTypes;
        result_70->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj52=result_70->mArrayNum;
        result_70->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj53=result_70->mParamTypes;
        result_70->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj57=result_70->mParamNames;
        result_70->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj57,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj58=result_70->mResultType;
        result_70->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_70->mAlignas;
        result_70->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_70->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_70->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_70->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_70->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_70->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_70->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_70->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_70->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_70->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_70->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_70->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_70->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_70->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_70->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_70->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_70->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_70->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_70->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_70->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_70->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_70->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj60=result_70->mSizeNum;
        result_70->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_70->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_70->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_70->mOriginalTypeName;
        result_70->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_70->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_70->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_70->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_70->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_70->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_70->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_70->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_70->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_70->mAsmName;
        result_70->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_70->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_70->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_70->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_70->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_70->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_70->mOriginIsArray=self->mOriginIsArray;
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_70;
    /*i*/come_call_finalizer3(result_70,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* result_71;
void* __right_value128 = (void*)0;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result71__;
    if(    self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_71=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_71->v1;
        result_71->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_71;
    /*i*/come_call_finalizer3(result_71,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj20;
struct tuple1$1sTypeph* __dec_obj22;
struct tuple1$1sTypeph* __dec_obj24;
char* __dec_obj26;
struct list$1sTypeph* __dec_obj27;
struct list$1sNodeph* __dec_obj29;
struct list$1sTypeph* __dec_obj31;
struct list$1charph* __dec_obj32;
struct tuple1$1sTypeph* __dec_obj34;
struct sNode* __dec_obj36;
struct sNode* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj20=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj22=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj24=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj26=self->mGenericsName;
            /*G*/ __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj27=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj29=self->mArrayNum;
            come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj31=self->mParamTypes;
            come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj32=self->mParamNames;
            come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj34=self->mResultType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj36=self->mAlignas;
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj38=self->mOriginalTypeName;
            /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj39=self->mAsmName;
            /*G*/ __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_72;
struct list_item$1sTypeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_74;
struct list_item$1sTypeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_76;
struct list_item$1sNodeph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj30;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_78;
struct list_item$1sNodeph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_80;
struct list_item$1charph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_82;
struct list_item$1charph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj35;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj40;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj40=self->v1;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result72__;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1sTypeph* result_84;
struct list_item$1sTypeph* it_85;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __result75__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_84=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 139, "list$1sTypeph"))));
    it_85=self->head;
    while(it_85!=((void*)0)) {
        list$1sTypeph_add(result_84,(struct sType*)come_increment_ref_count(sType_clone(it_85->item)));
        it_85=it_85->next;
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_84;
    /*i*/come_call_finalizer3(result_84,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result73__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj45;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_87;
struct sType* __dec_obj46;
void* __right_value137 = (void*)0;
struct list_item$1sTypeph* litem_88;
struct sType* __dec_obj47;
struct list$1sTypeph* __result74__;
    if(    self->len==0) {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 153, "list_item$1sTypeph"))));
        litem_86->prev=((void*)0);
        litem_86->next=((void*)0);
        __dec_obj45=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_86;
        self->head=litem_86;
    }
    else if(    self->len==1) {
        litem_87=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 163, "list_item$1sTypeph"))));
        litem_87->prev=self->head;
        litem_87->next=((void*)0);
        __dec_obj46=litem_87->item;
        litem_87->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_87;
        self->head->next=litem_87;
    }
    else {
        litem_88=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 173, "list_item$1sTypeph"))));
        litem_88->prev=self->tail;
        litem_88->next=((void*)0);
        __dec_obj47=litem_88->item;
        litem_88->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_88;
        self->tail=litem_88;
    }
    self->len++;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result76__;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1sNodeph* result_89;
struct list_item$1sNodeph* it_90;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __result81__;
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_89=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 139, "list$1sNodeph"))));
    it_90=self->head;
    while(it_90!=((void*)0)) {
        list$1sNodeph_add(result_89,(struct sNode*)come_increment_ref_count(sNode_clone(it_90->item)));
        it_90=it_90->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result77__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result77__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj49;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj50;
void* __right_value144 = (void*)0;
struct list_item$1sNodeph* litem_93;
struct sNode* __dec_obj51;
struct list$1sNodeph* __result78__;
    if(    self->len==0) {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 153, "list_item$1sNodeph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj49=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_91;
        self->head=litem_91;
    }
    else if(    self->len==1) {
        litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 163, "list_item$1sNodeph"))));
        litem_92->prev=self->head;
        litem_92->next=((void*)0);
        __dec_obj50=litem_92->item;
        litem_92->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_92;
        self->head->next=litem_92;
    }
    else {
        litem_93=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 173, "list_item$1sNodeph"))));
        litem_93->prev=self->tail;
        litem_93->next=((void*)0);
        __dec_obj51=litem_93->item;
        litem_93->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_93;
        self->tail=litem_93;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result79__;
void* __right_value145 = (void*)0;
struct sNode* result_94;
struct sNode* __result80__;
    if(    self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_94=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_94->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_94->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_94->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_94->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_94->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_94->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_94->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_94->kind=self->kind;
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_94;
    if(result_94) { result_94 = come_decrement_ref_count2(result_94, ((struct sNode*)result_94)->finalize, ((struct sNode*)result_94)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result82__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_95;
struct list_item$1charph* it_96;
void* __right_value154 = (void*)0;
struct list$1charph* __result85__;
    if(    self==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    result_95=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 139, "list$1charph"))));
    it_96=self->head;
    while(it_96!=((void*)0)) {
        list$1charph_add(result_95,(char*)come_increment_ref_count(string_clone(it_96->item)));
        it_96=it_96->next;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_95;
    /*i*/come_call_finalizer3(result_95,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result83__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj54;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_98;
char* __dec_obj55;
void* __right_value153 = (void*)0;
struct list_item$1charph* litem_99;
char* __dec_obj56;
struct list$1charph* __result84__;
    if(    self->len==0) {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 153, "list_item$1charph"))));
        litem_97->prev=((void*)0);
        litem_97->next=((void*)0);
        __dec_obj54=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_97;
        self->head=litem_97;
    }
    else if(    self->len==1) {
        litem_98=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 163, "list_item$1charph"))));
        litem_98->prev=self->head;
        litem_98->next=((void*)0);
        __dec_obj55=litem_98->item;
        litem_98->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_98;
        self->head->next=litem_98;
    }
    else {
        litem_99=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 173, "list_item$1charph"))));
        litem_99->prev=self->tail;
        litem_99->next=((void*)0);
        __dec_obj56=litem_99->item;
        litem_99->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_99;
        self->tail=litem_99;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value162 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj64;
void* __right_value163 = (void*)0;
struct list_item$1CVALUEph* litem_101;
struct CVALUE* __dec_obj68;
void* __right_value164 = (void*)0;
struct list_item$1CVALUEph* litem_102;
struct CVALUE* __dec_obj69;
struct list$1CVALUEph* __result87__;
    if(    self->len==0) {
        litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 223, "list_item$1CVALUEph"))));
        litem_100->prev=((void*)0);
        litem_100->next=((void*)0);
        __dec_obj64=litem_100->item;
        litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_100;
        self->head=litem_100;
    }
    else if(    self->len==1) {
        litem_101=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 233, "list_item$1CVALUEph"))));
        litem_101->prev=self->head;
        litem_101->next=((void*)0);
        __dec_obj68=litem_101->item;
        litem_101->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_101;
        self->head->next=litem_101;
    }
    else {
        litem_102=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 243, "list_item$1CVALUEph"))));
        litem_102->prev=self->tail;
        litem_102->next=((void*)0);
        __dec_obj69=litem_102->item;
        litem_102->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_102;
        self->tail=litem_102;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj65;
struct sType* __dec_obj66;
char* __dec_obj67;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj65=self->c_value;
            /*G*/ __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj66=self->type;
            come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj67=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
struct sFun* __dec_obj70;
struct sFunNode* __result89__;
    ((struct sNodeBase*)(__right_value165=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value165,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj70=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj70,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value166 = (void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value166=__builtin_string("sFunNode")));
    __right_value166 = come_decrement_ref_count2(__right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_103;
char* come_fun_name_104;
void* __right_value167 = (void*)0;
char* __dec_obj88;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct sType* result_type_105;
void* __right_value170 = (void*)0;
int block_level_106;
void* __right_value171 = (void*)0;
char* __dec_obj89;
_Bool __result91__;
    come_fun_103=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_104=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj88=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_105=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value170=make_define_var(result_type_105,"__result_obj__",(_Bool)0,info))));
            __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_106=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_106;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value171=xsprintf("come_heap_final();\n"))));
            __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_103;
    __dec_obj89=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_104);
    /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = (_Bool)1;
    come_fun_name_104 = come_decrement_ref_count2(come_fun_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            /*G*/ __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct list$1sNodeph* __dec_obj90;
struct sBlock* __result92__;
    __dec_obj90=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "list$1sNodeph"))));
    come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value174 = (void*)0;
struct sType* __dec_obj91;
void* __right_value175 = (void*)0;
struct list$1charph* __dec_obj92;
void* __right_value176 = (void*)0;
struct list$1charph* __dec_obj93;
char* __dec_obj94;
struct sType* __dec_obj95;
struct list$1sTypeph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct list$1charph* __dec_obj98;
char* __dec_obj99;
void* __right_value177 = (void*)0;
char* __dec_obj100;
struct sGenericsFun* __result93__;
    __dec_obj91=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(sType_clone(impl_type));
    come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj92=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj93=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj96,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj99=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    /*G*/ __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj100=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    /*G*/ __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result93__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj101;
struct list$1charph* __dec_obj102;
struct list$1charph* __dec_obj103;
char* __dec_obj104;
struct sType* __dec_obj105;
struct list$1sTypeph* __dec_obj106;
struct list$1charph* __dec_obj107;
struct list$1charph* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj101=self->mImplType;
            come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj102=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj103=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj105=self->mResultType;
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj106=self->mParamTypes;
            come_call_finalizer3(__dec_obj106,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj107=self->mParamNames;
            come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj108=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj109=self->mBlock;
            /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj110=self->mGenericsSName;
            /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct sBlock* result_107;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct list$1int* __dec_obj111;
int sline_top_113;
int block_level_114;
char* p_115;
int sline_116;
char* sname_117;
void* __right_value185 = (void*)0;
struct sNode* node_118;
void* __right_value186 = (void*)0;
char* __dec_obj112;
_Bool omit_semicolon_122;
void* __right_value190 = (void*)0;
char* __dec_obj116;
char* head_137;
void* __right_value191 = (void*)0;
struct sNode* value_138;
char* tail_139;
void* __right_value192 = (void*)0;
struct sNode* __dec_obj117;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sNode* node_141;
struct sNode* node_142;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value199 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value200 = (void*)0;
struct sNode* __dec_obj121;
_Bool omit_semicolon_144;
char* p_145;
char* head_146;
void* __right_value201 = (void*)0;
char* source_147;
void* __right_value202 = (void*)0;
struct sNode* node_148;
struct sBlock* __result102__;
node_142 = (void*)0;
    result_107=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    if(    info->sline_stack==((void*)0)) {
        __dec_obj111=info->sline_stack;
        info->sline_stack=(struct list$1int*)come_increment_ref_count(list$1int_initialize((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "05function.c", 162, "list$1int"))));
        come_call_finalizer3(__dec_obj111,list$1int_finalize, 0, 0, 0, 0, (void*)0);
    }
    list$1int_add(info->sline_stack,info->sline);
    sline_top_113=info->sline_top;
    info->sline_top=info->sline;
    block_level_114=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_115=info->p;
            sline_116=info->sline;
            sname_117=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_116;
            }
            node_118=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj112=info->sname;
            info->sname=(char*)come_increment_ref_count(node_118->sname(node_118->_protocol_obj));
            /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_118->sline(node_118->_protocol_obj);
            if(            node_118==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_118));
            parse_sharp_v5(info);
            if(            node_118->terminated(node_118->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_122=(_Bool)1;
            if(            node_118->terminated(node_118->_protocol_obj)) {
                omit_semicolon_122=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_122=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_107->mOmitSemicolon=omit_semicolon_122;
                if(                omit_semicolon_122&&in_function) {
                    list$1sNodeph_delete(result_107->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_115;
                    info->sline=sline_116;
                    __dec_obj116=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_117));
                    /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_137=info->p;
                    value_138=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_139=info->p;
                    __dec_obj117=value_138;
                    value_138=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_138),info));
                    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_140[tail_139-head_137+1];
                    memset(&buf_140, 0, sizeof(char)                    *(tail_139-head_137+1)                    );
                    memcpy(buf_140,head_137,tail_139-head_137);
                    buf_140[tail_139-head_137]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_141=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_138),(char*)come_increment_ref_count(__builtin_string(buf_140)),info));
                    list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_141));
                    if(value_138) { value_138 = come_decrement_ref_count2(value_138, ((struct sNode*)value_138)->finalize, ((struct sNode*)value_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_141) { node_141 = come_decrement_ref_count2(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_118) { node_118 = come_decrement_ref_count2(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_138) { value_138 = come_decrement_ref_count2(value_138, ((struct sNode*)value_138)->finalize, ((struct sNode*)value_138)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_141) { node_141 = come_decrement_ref_count2(node_141, ((struct sNode*)node_141)->finalize, ((struct sNode*)node_141)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_118) { node_118 = come_decrement_ref_count2(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_118) { node_118 = come_decrement_ref_count2(node_118, ((struct sNode*)node_118)->finalize, ((struct sNode*)node_118)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 274, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value196=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 274, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj120=node_142;
            node_142=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value196,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_142));
        }
        else {
            __dec_obj121=node_142;
            node_142=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_142==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_142->terminated(node_142->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_144=(_Bool)1;
            if(            node_142->terminated(node_142->_protocol_obj)) {
                omit_semicolon_144=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_144=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_107->mOmitSemicolon=omit_semicolon_144;
            list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_142));
        }
        if(node_142) { node_142 = come_decrement_ref_count2(node_142, ((struct sNode*)node_142)->finalize, ((struct sNode*)node_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_145=info->p;
        head_146=info->head;
        source_147=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_147;
        info->head=source_147;
        node_148=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_148==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_107->mNodes,(struct sNode*)come_increment_ref_count(node_148));
        info->p=p_145;
        info->head=head_146;
        source_147 = come_decrement_ref_count2(source_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_148) { node_148 = come_decrement_ref_count2(node_148, ((struct sNode*)node_148)->finalize, ((struct sNode*)node_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_114;
    list$1int_pop_front(info->sline_stack);
    __result102__ = gComeFunResultObject = __result_obj__ = result_107;
    /*i*/come_call_finalizer3(result_107,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static struct list$1int* list$1int_initialize(struct list$1int* self){
void* __result_obj__=(void*)0;
struct list$1int* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void list$1int_finalize(struct list$1int* self){
struct list_item$1int* it_108;
struct list_item$1int* prev_it_109;
    it_108=self->head;
    while(it_108!=((void*)0)) {
        prev_it_109=it_108;
        it_108=it_108->next;
        /*i*/come_call_finalizer3(prev_it_109,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int* list$1int_add(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
struct list_item$1int* litem_110;
void* __right_value183 = (void*)0;
struct list_item$1int* litem_111;
void* __right_value184 = (void*)0;
struct list_item$1int* litem_112;
struct list$1int* __result95__;
    if(    self->len==0) {
        litem_110=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value182=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 153, "list_item$1int"))));
        litem_110->prev=((void*)0);
        litem_110->next=((void*)0);
        litem_110->item=item;
        self->tail=litem_110;
        self->head=litem_110;
    }
    else if(    self->len==1) {
        litem_111=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value183=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 163, "list_item$1int"))));
        litem_111->prev=self->head;
        litem_111->next=((void*)0);
        litem_111->item=item;
        self->tail=litem_111;
        self->head->next=litem_111;
    }
    else {
        litem_112=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value184=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 173, "list_item$1int"))));
        litem_112->prev=self->tail;
        litem_112->next=((void*)0);
        litem_112->item=item;
        self->tail->next=litem_112;
        self->tail=litem_112;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
struct list_item$1sNodeph* litem_119;
struct sNode* __dec_obj113;
void* __right_value188 = (void*)0;
struct list_item$1sNodeph* litem_120;
struct sNode* __dec_obj114;
void* __right_value189 = (void*)0;
struct list_item$1sNodeph* litem_121;
struct sNode* __dec_obj115;
struct list$1sNodeph* __result96__;
    if(    self->len==0) {
        litem_119=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value187=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 223, "list_item$1sNodeph"))));
        litem_119->prev=((void*)0);
        litem_119->next=((void*)0);
        __dec_obj113=litem_119->item;
        litem_119->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_119;
        self->head=litem_119;
    }
    else if(    self->len==1) {
        litem_120=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value188=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 233, "list_item$1sNodeph"))));
        litem_120->prev=self->head;
        litem_120->next=((void*)0);
        __dec_obj114=litem_120->item;
        litem_120->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_120;
        self->head->next=litem_120;
    }
    else {
        litem_121=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value189=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 243, "list_item$1sNodeph"))));
        litem_121->prev=self->tail;
        litem_121->next=((void*)0);
        __dec_obj115=litem_121->item;
        litem_121->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_121;
        self->tail=litem_121;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_123;
struct list$1sNodeph* __result97__;
struct list_item$1sNodeph* it_126;
int i_127;
struct list_item$1sNodeph* prev_it_128;
struct list_item$1sNodeph* it_129;
int i_130;
struct list_item$1sNodeph* prev_it_131;
struct list_item$1sNodeph* it_132;
struct list_item$1sNodeph* head_prev_it_133;
struct list_item$1sNodeph* tail_it_134;
int i_135;
struct list_item$1sNodeph* prev_it_136;
struct list$1sNodeph* __result99__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_123=tail;
        tail=head;
        head=tmp_123;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result97__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else if(    head==0) {
        it_126=self->head;
        i_127=0;
        while(it_126!=((void*)0)) {
            if(            i_127<tail) {
                prev_it_128=it_126;
                it_126=it_126->next;
                i_127++;
                /*i*/come_call_finalizer3(prev_it_128,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_127==tail) {
                self->head=it_126;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_126=it_126->next;
                i_127++;
            }
        }
    }
    else if(    tail==self->len) {
        it_129=self->head;
        i_130=0;
        while(it_129!=((void*)0)) {
            if(            i_130==head) {
                self->tail=it_129->prev;
                self->tail->next=((void*)0);
            }
            if(            i_130>=head) {
                prev_it_131=it_129;
                it_129=it_129->next;
                i_130++;
                /*i*/come_call_finalizer3(prev_it_131,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_129=it_129->next;
                i_130++;
            }
        }
    }
    else {
        it_132=self->head;
        head_prev_it_133=((void*)0);
        tail_it_134=((void*)0);
        i_135=0;
        while(it_132!=((void*)0)) {
            if(            i_135==head) {
                head_prev_it_133=it_132->prev;
            }
            if(            i_135==tail) {
                tail_it_134=it_132;
            }
            if(            i_135>=head&&i_135<tail) {
                prev_it_136=it_132;
                it_132=it_132->next;
                i_135++;
                /*i*/come_call_finalizer3(prev_it_136,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_132=it_132->next;
                i_135++;
            }
        }
        if(        head_prev_it_133!=((void*)0)) {
            head_prev_it_133->next=tail_it_134;
        }
        if(        tail_it_134!=((void*)0)) {
            tail_it_134->prev=head_prev_it_133;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_124;
struct list_item$1sNodeph* prev_it_125;
struct list$1sNodeph* __result98__;
    it_124=self->head;
    while(it_124!=((void*)0)) {
        prev_it_125=it_124;
        it_124=it_124->next;
        /*i*/come_call_finalizer3(prev_it_125,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj118;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj118=self->sname;
            /*G*/ __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result100__;
void* __right_value197 = (void*)0;
struct sSemicolonNode* result_143;
void* __right_value198 = (void*)0;
char* __dec_obj119;
struct sSemicolonNode* __result101__;
    if(    self==(void*)0) {
        __result100__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_143=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_143->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_143->sname;
        result_143->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = result_143;
    /*i*/come_call_finalizer3(result_143,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void list$1int_pop_front(struct list$1int* self){
struct list_item$1int* litem_149;
struct list_item$1int* litem_150;
struct list_item$1int* litem_151;
    if(    self->len==1) {
        litem_149=self->head;
        self->head=((void*)0);
        self->tail=((void*)0);
        /*i*/come_call_finalizer3(litem_149,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
    else if(    self->len==2) {
        litem_150=self->head;
        self->head=self->head->next;
        self->head->prev=((void*)0);
        self->head->next=((void*)0);
        self->tail=self->head;
        /*i*/come_call_finalizer3(litem_150,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
    else if(    self->len>=3) {
        litem_151=self->head;
        self->head=litem_151->next;
        self->head->prev=((void*)0);
        /*i*/come_call_finalizer3(litem_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_152;
struct sVarTable* old_table_153;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sVarTable* __dec_obj122;
struct sVarTable* current_loop_vtable_154;
struct list$1sTypeph* param_types__155;
struct list$1charph* param_names__156;
int i_157;
struct list$1charph* o2_saved_158;
char* name_161;
void* __right_value205 = (void*)0;
struct sType* type_164;
void* __right_value206 = (void*)0;
int block_level_168;
int i_169;
struct list$1sNodeph* o2_saved_170;
struct sNode* node_173;
struct list$1sRightValueObjectph* right_value_objects_176;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
char* __dec_obj130;
int stack_num_before_181;
int sline_182;
void* __right_value209 = (void*)0;
char* sname_183;
void* __right_value210 = (void*)0;
char* __dec_obj131;
void* __right_value211 = (void*)0;
struct CVALUE* come_value_184;
void* __right_value216 = (void*)0;
struct CVALUE* come_value2_185;
void* __right_value217 = (void*)0;
char* __dec_obj135;
void* __right_value218 = (void*)0;
struct CVALUE* come_value2_187;
struct sVar* var__188;
void* __right_value219 = (void*)0;
struct CVALUE* come_value3_189;
void* __right_value220 = (void*)0;
_Bool _if_conditional1;
void* __right_value221 = (void*)0;
struct sType* __dec_obj136;
void* __right_value222 = (void*)0;
char* __dec_obj137;
void* __right_value223 = (void*)0;
char* __dec_obj138;
void* __right_value224 = (void*)0;
char* __dec_obj139;
void* __right_value225 = (void*)0;
char* __dec_obj140;
struct list$1sRightValueObjectph* __dec_obj141;
void* __if_result__0_200 = (void*)0;
struct list$1sVarph* o2_saved_201;
struct sVar* it_204;
struct list$1sVarph* __dec_obj147;
memset(&i_157, 0, sizeof(int));
memset(&i_169, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_152=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_153=info->lv_table;
    if(    !no_var_table) {
        __dec_obj122=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 350, "sVarTable")),(_Bool)0,old_table_153));
        come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_154=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__155=info->param_types;
    param_names__156=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_158=(param_names),name_161=list$1charph_begin((o2_saved_158));        !list$1charph_end((o2_saved_158));        name_161=list$1charph_next((o2_saved_158))        ){
            type_164=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_157), "05function.c", 368, 0))));
            type_164->mFunctionParam=(_Bool)1;
            type_164->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_161,(struct sType*)come_increment_ref_count(sType_clone(type_164)),info);
            i_157++;
            /*i*/come_call_finalizer3(type_164,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_168=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_170=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_173=list$1sNodeph_begin((o2_saved_170));        !list$1sNodeph_end((o2_saved_170));        node_173=list$1sNodeph_next((o2_saved_170))        ){
            right_value_objects_176=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj127=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 387, "list$1sRightValueObjectph"))));
            come_call_finalizer3(__dec_obj127,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj128=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            /*G*/ __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_181=list$1CVALUEph_length(info->stack);
            sline_182=info->sline;
            sname_183=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_173->sline(node_173->_protocol_obj);
            __dec_obj131=info->sname;
            info->sname=(char*)come_increment_ref_count(node_173->sname(node_173->_protocol_obj));
            /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_169==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                if(                !node_compile(node_173,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_181+1) {
                    come_value_184=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_184->type->mClass->mName,"void")&&come_value_184->type->mPointerNum==0) {
                        come_value2_185=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_184));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_185));
                        __dec_obj135=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_185->c_value));
                        /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_187=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_184));
                        var__188=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__188) {
                            come_value3_189=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 424, "CVALUE"));
                            if(                            var__188->mType->mClass=="void"&&var__188->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__188->mType,((struct sType*)(__right_value220=sType_clone(come_value_184->type))),come_value3_189,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value220,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj136=var__188->mType;
                            var__188->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_184->type));
                            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_184->type->mHeap) {
                                __dec_obj137=come_value2_187->c_value;
                                come_value2_187->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(come_increment_ref_count(%s))",var__188->mCValueName,come_value_184->c_value));
                                /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                __dec_obj138=come_value2_187->c_value;
                                come_value2_187->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__188->mCValueName,come_value_184->c_value));
                                /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_189,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_187));
                        __dec_obj139=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_187->c_value));
                        /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(                !node_compile(node_173,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
            }
            info->sline=sline_182;
            __dec_obj140=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_183));
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_181);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj141=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_176);
            come_call_finalizer3(__dec_obj141,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_169++;
            /*i*/come_call_finalizer3(right_value_objects_176,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_183 = come_decrement_ref_count2(sname_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_170,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_168==0) {
            for(            o2_saved_201=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_204=list$1sVarph_begin((o2_saved_201));            !list$1sVarph_end((o2_saved_201));            it_204=list$1sVarph_next((o2_saved_201))            ){
                free_object(it_204->mType,it_204->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_201,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj147=info->match_it_var;
            __if_result__0_200=(void*)(come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj147,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_200,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_153;
    info->block_level=block_level_168;
    info->param_types=param_types__155;
    info->param_names=param_names__156;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_154;
    info->inhibits_output_code=inhibits_output_code_152;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_159;
char* __result103__;
char* __result104__;
char* result_160;
char* __result105__;
result_159 = (void*)0;
result_160 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_159,0,sizeof(char*));
        __result103__ = gComeFunResultObject = __result_obj__ = result_159;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    self->it=self->head;
    if(    self->it) {
        __result104__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    memset(&result_160,0,sizeof(char*));
    __result105__ = gComeFunResultObject = __result_obj__ = result_160;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_162;
char* __result106__;
char* __result107__;
char* result_163;
char* __result108__;
result_162 = (void*)0;
result_163 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_162,0,sizeof(char*));
        __result106__ = gComeFunResultObject = __result_obj__ = result_162;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result107__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    memset(&result_163,0,sizeof(char*));
    __result108__ = gComeFunResultObject = __result_obj__ = result_163;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_165;
int i_166;
struct sType* __result109__;
struct sType* default_value_167;
struct sType* __result110__;
default_value_167 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_165=self->head;
    i_166=0;
    while(it_165!=((void*)0)) {
        if(        position==i_166) {
            __result109__ = gComeFunResultObject = __result_obj__ = it_165->item;
            gComeFunResultObject = (void*)0;
            return __result109__;
        }
        it_165=it_165->next;
        i_166++;
    }
    memset(&default_value_167,0,sizeof(struct sType*));
    __result110__ = gComeFunResultObject = __result_obj__ = default_value_167;
    /*i*/come_call_finalizer3(default_value_167,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_171;
struct sNode* __result111__;
struct sNode* __result112__;
struct sNode* result_172;
struct sNode* __result113__;
result_171 = (void*)0;
result_172 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_171,0,sizeof(struct sNode*));
        __result111__ = gComeFunResultObject = __result_obj__ = result_171;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    self->it=self->head;
    if(    self->it) {
        __result112__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    memset(&result_172,0,sizeof(struct sNode*));
    __result113__ = gComeFunResultObject = __result_obj__ = result_172;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_174;
struct sNode* __result114__;
struct sNode* __result115__;
struct sNode* result_175;
struct sNode* __result116__;
result_174 = (void*)0;
result_175 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_174,0,sizeof(struct sNode*));
        __result114__ = gComeFunResultObject = __result_obj__ = result_174;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result115__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    memset(&result_175,0,sizeof(struct sNode*));
    __result116__ = gComeFunResultObject = __result_obj__ = result_175;
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result117__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_177;
struct list_item$1sRightValueObjectph* prev_it_178;
    it_177=self->head;
    while(it_177!=((void*)0)) {
        prev_it_178=it_177;
        it_177=it_177->next;
        /*i*/come_call_finalizer3(prev_it_178,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj123;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj123=self->item;
            come_call_finalizer3(__dec_obj123,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj124;
char* __dec_obj125;
char* __dec_obj126;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj124=self->mType;
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj125=self->mVarName;
            /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj126=self->mFunName;
            /*G*/ __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_179;
struct list_item$1sRightValueObjectph* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        /*i*/come_call_finalizer3(prev_it_180,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result118__;
void* __right_value212 = (void*)0;
struct CVALUE* result_186;
void* __right_value213 = (void*)0;
char* __dec_obj132;
void* __right_value214 = (void*)0;
struct sType* __dec_obj133;
void* __right_value215 = (void*)0;
char* __dec_obj134;
struct CVALUE* __result119__;
    if(    self==(void*)0) {
        __result118__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result118__;
    }
    result_186=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj132=result_186->c_value;
        result_186->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj133=result_186->type;
        result_186->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_186->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_186->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj134=result_186->c_value_without_right_value_objects;
        result_186->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_186;
    /*i*/come_call_finalizer3(result_186,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static _Bool sClass_equals(struct sClass* left, struct sClass* right){
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    right->mStruct!=wildcard&&!bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    right->mFloat!=wildcard&&!bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    right->mUnion!=wildcard&&!bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    right->mGenerics!=wildcard&&!bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    right->mMethodGenerics!=wildcard&&!bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    right->mEnum!=wildcard&&!bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    right->mProtocol!=wildcard&&!bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    right->mNumber!=wildcard&&!bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    right->mName!=wildcard&&!string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    right->mGenericsNum!=wildcard&&!int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    right->mMethodGenericsNum!=wildcard&&!int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    right->mFields!=wildcard&&!list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    right->mOutputed!=wildcard&&!bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    right->mOutputed2!=wildcard&&!bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    right->mDeclareSName!=wildcard&&!string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    right->mNobodyStruct!=wildcard&&!bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    right->mParentClassName!=wildcard&&!string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephph_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_190;
struct list_item$1tuple2$2charphsTypephph* it2_191;
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_190=left->head;
    it2_191=right->head;
    while(it_190!=((void*)0)) {
        if(        !tuple2$2charphsTypeph_equals(it_190->item,it2_191->item)) {
            return (_Bool)0;
        }
        it_190=it_190->next;
        it2_191=it2_191->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    right->mClass!=wildcard&&!sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    right->mNoSolvedGenericsType!=wildcard&&!tuple1$1sTypeph_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    right->mOriginalLoadVarType!=wildcard&&!tuple1$1sTypeph_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    right->mNoExceptionType!=wildcard&&!tuple1$1sTypeph_equals(left->mNoExceptionType,right->mNoExceptionType)) {
        return (_Bool)0;
    }
    if(    right->mGenericsName!=wildcard&&!string_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    right->mGenericsTypes!=wildcard&&!list$1sTypeph_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    right->mArrayNum!=wildcard&&!list$1sNodeph_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    right->mOmitArrayNum!=wildcard&&!bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    right->mParamTypes!=wildcard&&!list$1sTypeph_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    right->mParamNames!=wildcard&&!list$1charph_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    right->mResultType!=wildcard&&!tuple1$1sTypeph_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    right->mVarArgs!=wildcard&&!bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    right->mAlignas!=wildcard&&!sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    right->mUnsigned!=wildcard&&!bool_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    right->mShort!=wildcard&&!bool_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    right->mLong!=wildcard&&!bool_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    right->mLongLong!=wildcard&&!bool_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    right->mConstant!=wildcard&&!bool_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    right->mRegister!=wildcard&&!bool_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    right->mVolatile!=wildcard&&!bool_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    right->mStatic!=wildcard&&!bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    right->mUniq!=wildcard&&!bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    right->mRecord!=wildcard&&!bool_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    right->mExtern!=wildcard&&!bool_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    right->mRestrict!=wildcard&&!bool_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    right->mImmutable!=wildcard&&!bool_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    right->mHeap!=wildcard&&!bool_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    right->mDummyHeap!=wildcard&&!bool_equals(left->mDummyHeap,right->mDummyHeap)) {
        return (_Bool)0;
    }
    if(    right->mDelegate!=wildcard&&!bool_equals(left->mDelegate,right->mDelegate)) {
        return (_Bool)0;
    }
    if(    right->mShare!=wildcard&&!bool_equals(left->mShare,right->mShare)) {
        return (_Bool)0;
    }
    if(    right->mClone!=wildcard&&!bool_equals(left->mClone,right->mClone)) {
        return (_Bool)0;
    }
    if(    right->mNoHeap!=wildcard&&!bool_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    right->mNoCallingDestructor!=wildcard&&!bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    right->mRefference!=wildcard&&!bool_equals(left->mRefference,right->mRefference)) {
        return (_Bool)0;
    }
    if(    right->mException!=wildcard&&!bool_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    right->mPointerNum!=wildcard&&!int_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    right->mOriginalTypeNamePointerNum!=wildcard&&!int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    right->mOriginalTypeNameHeap!=wildcard&&!int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    right->mNoArrayPointerNum!=wildcard&&!int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    right->mTypedefOriginalPointerNum!=wildcard&&!int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    right->mSizeNum!=wildcard&&!sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    right->mFunctionPointerNum!=wildcard&&!int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    right->mDynamicArrayNum!=wildcard&&!int_equals(left->mDynamicArrayNum,right->mDynamicArrayNum)) {
        return (_Bool)0;
    }
    if(    right->mTypeOfExpression!=wildcard&&!int_equals(left->mTypeOfExpression,right->mTypeOfExpression)) {
        return (_Bool)0;
    }
    if(    right->mOriginalTypeName!=wildcard&&!string_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    right->mOriginalPointerNum!=wildcard&&!int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    right->mFunctionParam!=wildcard&&!bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    right->mAllocaValue!=wildcard&&!bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    right->mGenericsStruct!=wildcard&&!bool_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    right->mSolvedGenericsName!=wildcard&&!bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    right->mComeMemCore!=wildcard&&!bool_equals(left->mComeMemCore,right->mComeMemCore)) {
        return (_Bool)0;
    }
    if(    right->mInline!=wildcard&&!bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    right->mNullValue!=wildcard&&!bool_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    right->mGuardValue!=wildcard&&!bool_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    right->mAsmName!=wildcard&&!string_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    right->mArrayPointerType!=wildcard&&!bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    right->mLambdaArray!=wildcard&&!bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    right->mNoNumberArray!=wildcard&&!bool_equals(left->mNoNumberArray,right->mNoNumberArray)) {
        return (_Bool)0;
    }
    if(    right->mTypedef!=wildcard&&!bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    right->mMultipleTypes!=wildcard&&!bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    right->mOriginIsArray!=wildcard&&!bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool tuple1$1sTypeph_equals(struct tuple1$1sTypeph* self, struct tuple1$1sTypeph* right){
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    !sType_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_192;
struct list_item$1sTypeph* it2_193;
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_192=left->head;
    it2_193=right->head;
    while(it_192!=((void*)0)) {
        if(        !sType_equals(it_192->item,it2_193->item)) {
            return (_Bool)0;
        }
        it_192=it_192->next;
        it2_193=it2_193->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_194;
struct list_item$1sNodeph* it2_195;
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_194=left->head;
    it2_195=right->head;
    while(it_194!=((void*)0)) {
        if(        !sNode_equals(it_194->item,it2_195->item)) {
            return (_Bool)0;
        }
        it_194=it_194->next;
        it2_195=it2_195->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool voidp_equals(void* left, void* right){
    if(    right==wildcard) {
        return (_Bool)1;
    }
    return (_Bool)1;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_196;
struct list_item$1charph* it2_197;
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_196=left->head;
    it2_197=right->head;
    while(it_196!=((void*)0)) {
        if(        !string_equals(it_196->item,it2_197->item)) {
            return (_Bool)0;
        }
        it_196=it_196->next;
        it2_197=it2_197->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    right==wildcard) {
        return (_Bool)1;
    }
    if(    right->mStruct!=wildcard&&!bool_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    right->mFloat!=wildcard&&!bool_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    right->mUnion!=wildcard&&!bool_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    right->mGenerics!=wildcard&&!bool_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    right->mMethodGenerics!=wildcard&&!bool_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    right->mEnum!=wildcard&&!bool_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    right->mProtocol!=wildcard&&!bool_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    right->mNumber!=wildcard&&!bool_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    right->mName!=wildcard&&!string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    right->mGenericsNum!=wildcard&&!int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    right->mMethodGenericsNum!=wildcard&&!int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    right->mFields!=wildcard&&!list$1tuple2$2charphsTypephph_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    right->mOutputed!=wildcard&&!bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    right->mOutputed2!=wildcard&&!bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    right->mDeclareSName!=wildcard&&!string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    right->mNobodyStruct!=wildcard&&!bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    right->mParentClassName!=wildcard&&!string_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_198;
struct list_item$1sRightValueObjectph* prev_it_199;
struct list$1sRightValueObjectph* __result120__;
    it_198=self->head;
    while(it_198!=((void*)0)) {
        prev_it_199=it_198;
        it_198=it_198->next;
        /*i*/come_call_finalizer3(prev_it_199,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct sVar* list$1sVarph_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_202;
struct sVar* __result121__;
struct sVar* __result122__;
struct sVar* result_203;
struct sVar* __result123__;
result_202 = (void*)0;
result_203 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_202,0,sizeof(struct sVar*));
        __result121__ = gComeFunResultObject = __result_obj__ = result_202;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    self->it=self->head;
    if(    self->it) {
        __result122__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    memset(&result_203,0,sizeof(struct sVar*));
    __result123__ = gComeFunResultObject = __result_obj__ = result_203;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_205;
struct sVar* __result124__;
struct sVar* __result125__;
struct sVar* result_206;
struct sVar* __result126__;
result_205 = (void*)0;
result_206 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_205,0,sizeof(struct sVar*));
        __result124__ = gComeFunResultObject = __result_obj__ = result_205;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result125__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    memset(&result_206,0,sizeof(struct sVar*));
    __result126__ = gComeFunResultObject = __result_obj__ = result_206;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_207;
struct list_item$1sVarph* prev_it_208;
    it_207=self->head;
    while(it_207!=((void*)0)) {
        prev_it_208=it_207;
        it_207=it_207->next;
        /*i*/come_call_finalizer3(prev_it_208,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj142;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj142=self->item;
            come_call_finalizer3(__dec_obj142,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj143;
char* __dec_obj144;
struct sType* __dec_obj145;
char* __dec_obj146;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj143=self->mName;
            /*G*/ __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj144=self->mCValueName;
            /*G*/ __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj145=self->mType;
            come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj146=self->mFunName;
            /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_209;
struct list_item$1sVarph* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        /*i*/come_call_finalizer3(prev_it_210,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(    list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c\n",c,*info->p);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_211;
_Bool dquort_212;
_Bool squort_213;
int sline_214;
int nest_215;
char* tail_216;
void* __right_value226 = (void*)0;
char* buf_217;
void* __right_value227 = (void*)0;
char* __result127__;
    head_211=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_212=(_Bool)0;
        squort_213=(_Bool)0;
        sline_214=0;
        nest_215=0;
        while(1) {
            if(            dquort_212) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_214);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_212=!dquort_212;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_214);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_214);
                        exit(2);
                    }
                }
            }
            else if(            squort_213) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_214);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_213=!squort_213;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_214);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_214);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_214=info->sline;
                info->p++;
                squort_213=!squort_213;
            }
            else if(            *info->p==34) {
                sline_214=info->sline;
                info->p++;
                dquort_212=!dquort_212;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_215++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_215==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_215--;
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
    tail_216=info->p;
    buf_217=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_216-head_211+1)), "05function.c", 655, "char"));
    memcpy(buf_217,head_211,tail_216-head_211);
    buf_217[tail_216-head_211]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string(buf_217)));
    buf_217 = come_decrement_ref_count2(buf_217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_218;
char* p3_219;
int i_220;
    terminated_218=(_Bool)0;
    p3_219=p;
    for(    i_220=0;    i_220<strlen(p2);    i_220++    ){
        if(        *p3_219==0) {
            terminated_218=(_Bool)1;
            break;
        }
        p3_219++;
    }
    return !terminated_218&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct buffer* asm_fun_name_221;
int brace_num_222;
int len_223;
_Bool in_dquort_224;
int brace_num_225;
int brace_num_226;
void* __right_value230 = (void*)0;
char* __result128__;
    asm_fun_name_221=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 678, "buffer"))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
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
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            brace_num_222=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_222++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_222--;
                    if(                    brace_num_222==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            len_223=0;
            in_dquort_224=(_Bool)0;
            brace_num_225=0;
            while(*info->p) {
                if(                *info->p==34) {
                    info->p++;
                    in_dquort_224=!in_dquort_224;
                }
                else if(                in_dquort_224) {
                    buffer_append_char(asm_fun_name_221,*info->p);
                    info->p++;
                }
                else if(                *info->p==40) {
                    info->p++;
                    brace_num_225++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_225--;
                    if(                    brace_num_225==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            brace_num_226=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_226++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_226--;
                    if(                    brace_num_226==0) {
                        break;
                    }
                }
                else {
                    info->p++;
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=buffer_to_string(asm_fun_name_221)));
    /*i*/come_call_finalizer3(asm_fun_name_221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_227;
int head_sline_228;
void* __right_value231 = (void*)0;
char* buf_229;
void* __right_value232 = (void*)0;
struct sNode* node_230;
    while(*info->p) {
        parse_sharp_v5(info);
        head_227=info->p;
        head_sline_228=info->sline;
        buf_229=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_229 = come_decrement_ref_count2(buf_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_230=(struct sNode*)come_increment_ref_count(top_level_v99(buf_229,head_227,head_sline_228,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_230!=((void*)0)) {
            if(            !node_compile(node_230,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_229 = come_decrement_ref_count2(buf_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_229 = come_decrement_ref_count2(buf_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_230) { node_230 = come_decrement_ref_count2(node_230, ((struct sNode*)node_230)->finalize, ((struct sNode*)node_230)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value233 = (void*)0;
char* name_231;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* result_type_232;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct sType* __list_values1___233[5];
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sTypeph* param_types_238;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* __list_values2___239[5];
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1charph* param_names_244;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1charph* param_default_parametors_245;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sFun* main_fun_246;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
char* name_288;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sType* result_type_289;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __list_values3___290[1];
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1sTypeph* param_types_291;
void* __right_value281 = (void*)0;
char* __list_values4___292[1];
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* param_names_293;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1charph* param_default_parametors_294;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sFun* main_fun_295;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* name_296;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* result_type_297;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct sType* __list_values5___298[7];
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1sTypeph* param_types_299;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* __list_values6___300[7];
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* param_names_301;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* param_default_parametors_302;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sFun* main_fun_303;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* name_304;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* result_type_305;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct sType* __list_values7___306[5];
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1sTypeph* param_types_307;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* __list_values8___308[5];
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct list$1charph* param_names_309;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1charph* param_default_parametors_310;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sFun* main_fun_311;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* name_312;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* result_type_313;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __list_values9___314[1];
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1sTypeph* param_types_315;
void* __right_value362 = (void*)0;
char* __list_values10___316[1];
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct list$1charph* param_names_317;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charph* param_default_parametors_318;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sFun* main_fun_319;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* name_320;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* result_type_321;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sType* __list_values11___322[4];
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1sTypeph* param_types_323;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* __list_values12___324[4];
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1charph* param_names_325;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1charph* param_default_parametors_326;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sFun* main_fun_327;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
char* name_328;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sType* result_type_329;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* __list_values13___330[3];
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1sTypeph* param_types_331;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* __list_values14___332[3];
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1charph* param_names_333;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1charph* param_default_parametors_334;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sFun* main_fun_335;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
char* name_336;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* result_type_337;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __list_values15___338[1];
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1sTypeph* param_types_339;
void* __right_value431 = (void*)0;
char* __list_values16___340[1];
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1charph* param_names_341;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1charph* param_default_parametors_342;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* main_fun_343;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* name_344;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* result_type_345;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* __list_values17___346[3];
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1sTypeph* param_types_347;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
char* __list_values18___348[3];
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1charph* param_names_349;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1charph* param_default_parametors_350;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sFun* main_fun_351;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
char* name_352;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sType* result_type_353;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1sTypeph* param_types_354;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1charph* param_names_355;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1charph* param_default_parametors_356;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sFun* main_fun_357;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* name_358;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* result_type_359;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __list_values19___360[4];
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1sTypeph* param_types_361;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* __list_values20___362[4];
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct list$1charph* param_names_363;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1charph* param_default_parametors_364;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sFun* main_fun_365;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
char* name_366;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* result_type_367;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct list$1sTypeph* param_types_368;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct list$1charph* param_names_369;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1charph* param_default_parametors_370;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sFun* fun_371;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* name_372;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* result_type_373;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1sTypeph* param_types_374;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1charph* param_names_375;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1charph* param_default_parametors_376;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sFun* fun_377;
void* __right_value531 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_231=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_232=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 847, "sType")),"void*",(_Bool)0,info));
        param_types_238=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___233[0]=come_increment_ref_count(((struct sType*)(__right_value237=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info)))),
__list_values1___233[1]=come_increment_ref_count(((struct sType*)(__right_value239=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info)))),
__list_values1___233[2]=come_increment_ref_count(((struct sType*)(__right_value241=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"char*",(_Bool)0,info)))),
__list_values1___233[3]=come_increment_ref_count(((struct sType*)(__right_value243=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info)))),
__list_values1___233[4]=come_increment_ref_count(((struct sType*)(__right_value245=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 848, "struct list$1sTypeph")),5,__list_values1___233)));
        /*g*/come_call_finalizer3(__right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value243,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value245,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_244=(struct list$1charph*)come_increment_ref_count((__list_values2___239[0]=come_increment_ref_count(((char*)(__right_value251=__builtin_string("count")))),
__list_values2___239[1]=come_increment_ref_count(((char*)(__right_value252=__builtin_string("size")))),
__list_values2___239[2]=come_increment_ref_count(((char*)(__right_value253=__builtin_string("sname")))),
__list_values2___239[3]=come_increment_ref_count(((char*)(__right_value254=__builtin_string("sline")))),
__list_values2___239[4]=come_increment_ref_count(((char*)(__right_value255=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 849, "struct list$1charph")),5,__list_values2___239)));
        __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_245=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 850, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_245,((void*)0));
        list$1charph_push_back(param_default_parametors_245,((void*)0));
        list$1charph_push_back(param_default_parametors_245,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_245,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_245,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_246=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 856, "sFun")),(char*)come_increment_ref_count(name_231),(struct sType*)come_increment_ref_count(result_type_232),(struct list$1sTypeph*)come_increment_ref_count(param_types_238),(struct list$1charph*)come_increment_ref_count(param_names_244),(struct list$1charph*)come_increment_ref_count(param_default_parametors_245),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_231)),(struct sFun*)come_increment_ref_count(main_fun_246));
        name_231 = come_decrement_ref_count2(name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_232,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_238,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_244,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_245,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_246,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_288=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_289=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 867, "sType")),"void*",(_Bool)0,info));
        param_types_291=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___290[0]=come_increment_ref_count(((struct sType*)(__right_value278=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 868, "struct list$1sTypeph")),1,__list_values3___290)));
        /*g*/come_call_finalizer3(__right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_293=(struct list$1charph*)come_increment_ref_count((__list_values4___292[0]=come_increment_ref_count(((char*)(__right_value281=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 869, "struct list$1charph")),1,__list_values4___292)));
        __right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_294=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "list$1charph"))));
        main_fun_295=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 871, "sFun")),(char*)come_increment_ref_count(name_288),(struct sType*)come_increment_ref_count(result_type_289),(struct list$1sTypeph*)come_increment_ref_count(param_types_291),(struct list$1charph*)come_increment_ref_count(param_names_293),(struct list$1charph*)come_increment_ref_count(param_default_parametors_294),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_288)),(struct sFun*)come_increment_ref_count(main_fun_295));
        name_288 = come_decrement_ref_count2(name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_291,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_293,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_294,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_295,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_296=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_297=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 882, "sType")),"void",(_Bool)0,info));
        param_types_299=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___298[0]=come_increment_ref_count(((struct sType*)(__right_value295=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___298[1]=come_increment_ref_count(((struct sType*)(__right_value297=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___298[2]=come_increment_ref_count(((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___298[3]=come_increment_ref_count(((struct sType*)(__right_value301=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info)))),
__list_values5___298[4]=come_increment_ref_count(((struct sType*)(__right_value303=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info)))),
__list_values5___298[5]=come_increment_ref_count(((struct sType*)(__right_value305=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info)))),
__list_values5___298[6]=come_increment_ref_count(((struct sType*)(__right_value307=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 883, "struct list$1sTypeph")),7,__list_values5___298)));
        /*g*/come_call_finalizer3(__right_value295,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value297,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value299,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value303,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value305,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value307,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_301=(struct list$1charph*)come_increment_ref_count((__list_values6___300[0]=come_increment_ref_count(((char*)(__right_value310=__builtin_string("fun")))),
__list_values6___300[1]=come_increment_ref_count(((char*)(__right_value311=__builtin_string("mem")))),
__list_values6___300[2]=come_increment_ref_count(((char*)(__right_value312=__builtin_string("protocol_fun")))),
__list_values6___300[3]=come_increment_ref_count(((char*)(__right_value313=__builtin_string("protocol_obj")))),
__list_values6___300[4]=come_increment_ref_count(((char*)(__right_value314=__builtin_string("call_finalizer_only")))),
__list_values6___300[5]=come_increment_ref_count(((char*)(__right_value315=__builtin_string("no_decrement")))),
__list_values6___300[6]=come_increment_ref_count(((char*)(__right_value316=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 884, "struct list$1charph")),7,__list_values6___300)));
        __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_302=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "list$1charph"))));
        main_fun_303=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 886, "sFun")),(char*)come_increment_ref_count(name_296),(struct sType*)come_increment_ref_count(result_type_297),(struct list$1sTypeph*)come_increment_ref_count(param_types_299),(struct list$1charph*)come_increment_ref_count(param_names_301),(struct list$1charph*)come_increment_ref_count(param_default_parametors_302),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_296)),(struct sFun*)come_increment_ref_count(main_fun_303));
        name_296 = come_decrement_ref_count2(name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_299,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_302,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_303,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_304=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 897, "sType")),"void*",(_Bool)0,info));
        param_types_307=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___306[0]=come_increment_ref_count(((struct sType*)(__right_value330=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info)))),
__list_values7___306[1]=come_increment_ref_count(((struct sType*)(__right_value332=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info)))),
__list_values7___306[2]=come_increment_ref_count(((struct sType*)(__right_value334=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info)))),
__list_values7___306[3]=come_increment_ref_count(((struct sType*)(__right_value336=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"bool",(_Bool)0,info)))),
__list_values7___306[4]=come_increment_ref_count(((struct sType*)(__right_value338=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 898, "struct list$1sTypeph")),5,__list_values7___306)));
        /*g*/come_call_finalizer3(__right_value330,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value332,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value336,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value338,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_309=(struct list$1charph*)come_increment_ref_count((__list_values8___308[0]=come_increment_ref_count(((char*)(__right_value341=__builtin_string("mem")))),
__list_values8___308[1]=come_increment_ref_count(((char*)(__right_value342=__builtin_string("protocol_fun")))),
__list_values8___308[2]=come_increment_ref_count(((char*)(__right_value343=__builtin_string("protocol_obj")))),
__list_values8___308[3]=come_increment_ref_count(((char*)(__right_value344=__builtin_string("no_decrement")))),
__list_values8___308[4]=come_increment_ref_count(((char*)(__right_value345=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 899, "struct list$1charph")),5,__list_values8___308)));
        __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_310=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 900, "list$1charph"))));
        main_fun_311=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 901, "sFun")),(char*)come_increment_ref_count(name_304),(struct sType*)come_increment_ref_count(result_type_305),(struct list$1sTypeph*)come_increment_ref_count(param_types_307),(struct list$1charph*)come_increment_ref_count(param_names_309),(struct list$1charph*)come_increment_ref_count(param_default_parametors_310),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_304)),(struct sFun*)come_increment_ref_count(main_fun_311));
        name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_307,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_309,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_310,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_311,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_312=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_313=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 912, "sType")),"void",(_Bool)0,info));
        param_types_315=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___314[0]=come_increment_ref_count(((struct sType*)(__right_value359=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 913, "sType")),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 913, "struct list$1sTypeph")),1,__list_values9___314)));
        /*g*/come_call_finalizer3(__right_value359,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_317=(struct list$1charph*)come_increment_ref_count((__list_values10___316[0]=come_increment_ref_count(((char*)(__right_value362=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 914, "struct list$1charph")),1,__list_values10___316)));
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 915, "list$1charph"))));
        main_fun_319=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 916, "sFun")),(char*)come_increment_ref_count(name_312),(struct sType*)come_increment_ref_count(result_type_313),(struct list$1sTypeph*)come_increment_ref_count(param_types_315),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_312)),(struct sFun*)come_increment_ref_count(main_fun_319));
        name_312 = come_decrement_ref_count2(name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_315,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_318,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_319,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_320=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_321=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 927, "sType")),"void*",(_Bool)0,info));
        param_types_323=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___322[0]=come_increment_ref_count(((struct sType*)(__right_value376=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"void*",(_Bool)0,info)))),
__list_values11___322[1]=come_increment_ref_count(((struct sType*)(__right_value378=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"char*",(_Bool)0,info)))),
__list_values11___322[2]=come_increment_ref_count(((struct sType*)(__right_value380=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"int",(_Bool)0,info)))),
__list_values11___322[3]=come_increment_ref_count(((struct sType*)(__right_value382=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 928, "struct list$1sTypeph")),4,__list_values11___322)));
        /*g*/come_call_finalizer3(__right_value376,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_325=(struct list$1charph*)come_increment_ref_count((__list_values12___324[0]=come_increment_ref_count(((char*)(__right_value385=__builtin_string("block")))),
__list_values12___324[1]=come_increment_ref_count(((char*)(__right_value386=__builtin_string("sname")))),
__list_values12___324[2]=come_increment_ref_count(((char*)(__right_value387=__builtin_string("sline")))),
__list_values12___324[3]=come_increment_ref_count(((char*)(__right_value388=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 929, "struct list$1charph")),4,__list_values12___324)));
        __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_326=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 930, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_326,((void*)0));
        list$1charph_push_back(param_default_parametors_326,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_326,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_326,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_327=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 935, "sFun")),(char*)come_increment_ref_count(name_320),(struct sType*)come_increment_ref_count(result_type_321),(struct list$1sTypeph*)come_increment_ref_count(param_types_323),(struct list$1charph*)come_increment_ref_count(param_names_325),(struct list$1charph*)come_increment_ref_count(param_default_parametors_326),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_320)),(struct sFun*)come_increment_ref_count(main_fun_327));
        name_320 = come_decrement_ref_count2(name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_323,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_325,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_326,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_327,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_328=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_329=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 946, "sType")),"void*",(_Bool)0,info));
        param_types_331=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___330[0]=come_increment_ref_count(((struct sType*)(__right_value405=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"void*",(_Bool)0,info)))),
__list_values13___330[1]=come_increment_ref_count(((struct sType*)(__right_value407=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"int",(_Bool)0,info)))),
__list_values13___330[2]=come_increment_ref_count(((struct sType*)(__right_value409=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 947, "struct list$1sTypeph")),3,__list_values13___330)));
        /*g*/come_call_finalizer3(__right_value405,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value407,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value409,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_333=(struct list$1charph*)come_increment_ref_count((__list_values14___332[0]=come_increment_ref_count(((char*)(__right_value412=__builtin_string("b")))),
__list_values14___332[1]=come_increment_ref_count(((char*)(__right_value413=__builtin_string("c")))),
__list_values14___332[2]=come_increment_ref_count(((char*)(__right_value414=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 948, "struct list$1charph")),3,__list_values14___332)));
        __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_334=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 949, "list$1charph"))));
        main_fun_335=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 950, "sFun")),(char*)come_increment_ref_count(name_328),(struct sType*)come_increment_ref_count(result_type_329),(struct list$1sTypeph*)come_increment_ref_count(param_types_331),(struct list$1charph*)come_increment_ref_count(param_names_333),(struct list$1charph*)come_increment_ref_count(param_default_parametors_334),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_328)),(struct sFun*)come_increment_ref_count(main_fun_335));
        name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_329,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_331,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_333,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_334,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_335,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_336=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_337=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 961, "sType")),"char*",(_Bool)0,info));
        param_types_339=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___338[0]=come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 962, "sType")),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 962, "struct list$1sTypeph")),1,__list_values15___338)));
        /*g*/come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_341=(struct list$1charph*)come_increment_ref_count((__list_values16___340[0]=come_increment_ref_count(((char*)(__right_value431=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 963, "struct list$1charph")),1,__list_values16___340)));
        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_342=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 964, "list$1charph"))));
        main_fun_343=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 965, "sFun")),(char*)come_increment_ref_count(name_336),(struct sType*)come_increment_ref_count(result_type_337),(struct list$1sTypeph*)come_increment_ref_count(param_types_339),(struct list$1charph*)come_increment_ref_count(param_names_341),(struct list$1charph*)come_increment_ref_count(param_default_parametors_342),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_336)),(struct sFun*)come_increment_ref_count(main_fun_343));
        name_336 = come_decrement_ref_count2(name_336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_337,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_339,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_342,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_343,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_344=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_345=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 976, "sType")),"void",(_Bool)0,info));
        param_types_347=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___346[0]=come_increment_ref_count(((struct sType*)(__right_value445=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info)))),
__list_values17___346[1]=come_increment_ref_count(((struct sType*)(__right_value447=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info)))),
__list_values17___346[2]=come_increment_ref_count(((struct sType*)(__right_value449=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 977, "struct list$1sTypeph")),3,__list_values17___346)));
        /*g*/come_call_finalizer3(__right_value445,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value447,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_349=(struct list$1charph*)come_increment_ref_count((__list_values18___348[0]=come_increment_ref_count(((char*)(__right_value452=xsprintf("come_malloc")))),
__list_values18___348[1]=come_increment_ref_count(((char*)(__right_value453=xsprintf("come_debug")))),
__list_values18___348[2]=come_increment_ref_count(((char*)(__right_value454=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 978, "struct list$1charph")),3,__list_values18___348)));
        __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_350=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 979, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_350,((void*)0));
        main_fun_351=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 981, "sFun")),(char*)come_increment_ref_count(name_344),(struct sType*)come_increment_ref_count(result_type_345),(struct list$1sTypeph*)come_increment_ref_count(param_types_347),(struct list$1charph*)come_increment_ref_count(param_names_349),(struct list$1charph*)come_increment_ref_count(param_default_parametors_350),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_344)),(struct sFun*)come_increment_ref_count(main_fun_351));
        name_344 = come_decrement_ref_count2(name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_345,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_347,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_349,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_350,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_351,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_352=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_353=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 992, "sType")),"void",(_Bool)0,info));
        param_types_354=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 993, "list$1sTypeph"))));
        param_names_355=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 994, "list$1charph"))));
        param_default_parametors_356=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 995, "list$1charph"))));
        main_fun_357=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 996, "sFun")),(char*)come_increment_ref_count(name_352),(struct sType*)come_increment_ref_count(result_type_353),(struct list$1sTypeph*)come_increment_ref_count(param_types_354),(struct list$1charph*)come_increment_ref_count(param_names_355),(struct list$1charph*)come_increment_ref_count(param_default_parametors_356),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_352)),(struct sFun*)come_increment_ref_count(main_fun_357));
        name_352 = come_decrement_ref_count2(name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_353,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_354,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_355,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_357,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_358=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_359=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1007, "sType")),"void*",(_Bool)0,info));
        param_types_361=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___360[0]=come_increment_ref_count(((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"void*",(_Bool)0,info)))),
__list_values19___360[1]=come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"char*",(_Bool)0,info)))),
__list_values19___360[2]=come_increment_ref_count(((struct sType*)(__right_value486=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"int",(_Bool)0,info)))),
__list_values19___360[3]=come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1008, "struct list$1sTypeph")),4,__list_values19___360)));
        /*g*/come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value486,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_363=(struct list$1charph*)come_increment_ref_count((__list_values20___362[0]=come_increment_ref_count(((char*)(__right_value491=__builtin_string("mem")))),
__list_values20___362[1]=come_increment_ref_count(((char*)(__right_value492=__builtin_string("sname")))),
__list_values20___362[2]=come_increment_ref_count(((char*)(__right_value493=__builtin_string("sline")))),
__list_values20___362[3]=come_increment_ref_count(((char*)(__right_value494=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1009, "struct list$1charph")),4,__list_values20___362)));
        __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_364=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1010, "list$1charph"))));
        main_fun_365=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1011, "sFun")),(char*)come_increment_ref_count(name_358),(struct sType*)come_increment_ref_count(result_type_359),(struct list$1sTypeph*)come_increment_ref_count(param_types_361),(struct list$1charph*)come_increment_ref_count(param_names_363),(struct list$1charph*)come_increment_ref_count(param_default_parametors_364),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_358)),(struct sFun*)come_increment_ref_count(main_fun_365));
        name_358 = come_decrement_ref_count2(name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_359,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_361,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_363,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_364,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_365,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_366=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_367=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1022, "sType")),"void",(_Bool)0,info));
        param_types_368=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1023, "list$1sTypeph"))));
        param_names_369=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1024, "list$1charph"))));
        param_default_parametors_370=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1025, "list$1charph"))));
        fun_371=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1026, "sFun")),(char*)come_increment_ref_count(name_366),(struct sType*)come_increment_ref_count(result_type_367),(struct list$1sTypeph*)come_increment_ref_count(param_types_368),(struct list$1charph*)come_increment_ref_count(param_names_369),(struct list$1charph*)come_increment_ref_count(param_default_parametors_370),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_366)),(struct sFun*)come_increment_ref_count(fun_371));
        name_366 = come_decrement_ref_count2(name_366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_367,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_368,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_369,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_370,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_371,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_372=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_373=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1037, "sType")),"void",(_Bool)0,info));
        param_types_374=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1038, "list$1sTypeph"))));
        param_names_375=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1039, "list$1charph"))));
        param_default_parametors_376=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1040, "list$1charph"))));
        fun_377=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1041, "sFun")),(char*)come_increment_ref_count(name_372),(struct sType*)come_increment_ref_count(result_type_373),(struct list$1sTypeph*)come_increment_ref_count(param_types_374),(struct list$1charph*)come_increment_ref_count(param_names_375),(struct list$1charph*)come_increment_ref_count(param_default_parametors_376),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_372)),(struct sFun*)come_increment_ref_count(fun_377));
        name_372 = come_decrement_ref_count2(name_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_375,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_377,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_234;
struct list$1sTypeph* __result130__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_234=0;    i_234<num_value;    i_234++    ){
        list$1sTypeph_push_back(self,values[i_234]);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
struct list_item$1sTypeph* litem_235;
struct sType* __dec_obj148;
void* __right_value247 = (void*)0;
struct list_item$1sTypeph* litem_236;
struct sType* __dec_obj149;
void* __right_value248 = (void*)0;
struct list_item$1sTypeph* litem_237;
struct sType* __dec_obj150;
struct list$1sTypeph* __result129__;
    if(    self->len==0) {
        litem_235=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value246=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 223, "list_item$1sTypeph"))));
        litem_235->prev=((void*)0);
        litem_235->next=((void*)0);
        __dec_obj148=litem_235->item;
        litem_235->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_235;
        self->head=litem_235;
    }
    else if(    self->len==1) {
        litem_236=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value247=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 233, "list_item$1sTypeph"))));
        litem_236->prev=self->head;
        litem_236->next=((void*)0);
        __dec_obj149=litem_236->item;
        litem_236->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_236;
        self->head->next=litem_236;
    }
    else {
        litem_237=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value248=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 243, "list_item$1sTypeph"))));
        litem_237->prev=self->tail;
        litem_237->next=((void*)0);
        __dec_obj150=litem_237->item;
        litem_237->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_237;
        self->tail=litem_237;
    }
    self->len++;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_240;
struct list$1charph* __result132__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_240=0;    i_240<num_value;    i_240++    ){
        list$1charph_push_back(self,values[i_240]);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1charph* litem_241;
char* __dec_obj151;
void* __right_value257 = (void*)0;
struct list_item$1charph* litem_242;
char* __dec_obj152;
void* __right_value258 = (void*)0;
struct list_item$1charph* litem_243;
char* __dec_obj153;
struct list$1charph* __result131__;
    if(    self->len==0) {
        litem_241=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value256=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 223, "list_item$1charph"))));
        litem_241->prev=((void*)0);
        litem_241->next=((void*)0);
        __dec_obj151=litem_241->item;
        litem_241->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_241;
        self->head=litem_241;
    }
    else if(    self->len==1) {
        litem_242=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value257=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 233, "list_item$1charph"))));
        litem_242->prev=self->head;
        litem_242->next=((void*)0);
        __dec_obj152=litem_242->item;
        litem_242->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_242;
        self->head->next=litem_242;
    }
    else {
        litem_243=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value258=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 243, "list_item$1charph"))));
        litem_243->prev=self->tail;
        litem_243->next=((void*)0);
        __dec_obj153=litem_243->item;
        litem_243->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_243;
        self->tail=litem_243;
    }
    self->len++;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_264;
unsigned int it_265;
_Bool same_key_exist_282;
char* it2_285;
struct map$2charphsFunph* __result153__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_264=string_get_hash_key(key)%self->size;
    it_265=hash_264;
    while((_Bool)1) {
        if(        self->item_existance[it_265]) {
            if(            string_equals(self->keys[it_265],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_265]);
                    self->keys[it_265] = come_decrement_ref_count2(self->keys[it_265], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_265]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_265]);
                    self->keys[it_265]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_265],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_265]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_265]=item;
                }
                break;
            }
            it_265++;
            if(            it_265>=self->size) {
                it_265=0;
            }
            else if(            it_265==hash_264) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_265]=(_Bool)1;
            if(            1) {
                self->keys[it_265]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_265]=key;
            }
            if(            1) {
                self->items[it_265]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_265]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_282=(_Bool)0;
    for(    it2_285=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_285=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_285,key)) {
            same_key_exist_282=(_Bool)1;
        }
    }
    if(    !same_key_exist_282) {
        list$1charp_push_back(self->key_list,key);
    }
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_247;
void* __right_value270 = (void*)0;
char** keys_248;
void* __right_value271 = (void*)0;
struct sFun** items_249;
void* __right_value272 = (void*)0;
_Bool* item_existance_250;
int len_251;
char* it_254;
struct sFun* default_value_257;
struct sFun* it2_258;
unsigned int hash_261;
int n_262;
struct sFun* default_value_263;
default_value_257 = (void*)0;
default_value_263 = (void*)0;
    size_247=self->size*10;
    keys_248=(char**)come_increment_ref_count(((char**)(__right_value270=(char**)come_calloc(1, sizeof(char*)*(1*(size_247)), "./comelang.h", 1630, "char*%"))));
    items_249=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value271=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_247)), "./comelang.h", 1631, "sFun*%"))));
    item_existance_250=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value272=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_247)), "./comelang.h", 1632, "bool"))));
    len_251=0;
    for(    it_254=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_254=map$2charphsFunph_next(self)    ){
        memset(&default_value_257,0,sizeof(struct sFun*));
        it2_258=map$2charphsFunph_at(self,it_254,default_value_257);
        hash_261=string_get_hash_key(it_254)%size_247;
        n_262=hash_261;
        while((_Bool)1) {
            if(            item_existance_250[n_262]) {
                n_262++;
                if(                n_262>=size_247) {
                    n_262=0;
                }
                else if(                n_262==hash_261) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_250[n_262]=(_Bool)1;
                keys_248[n_262]=it_254;
                items_249[n_262]=map$2charphsFunph_at(self,it_254,default_value_263);
                len_251++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_248;
    self->items=items_249;
    self->item_existance=item_existance_250;
    self->size=size_247;
    self->len=len_251;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_252;
char* __result133__;
char* __result134__;
char* result_253;
char* __result135__;
result_252 = (void*)0;
result_253 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_252,0,sizeof(char*));
        __result133__ = gComeFunResultObject = __result_obj__ = result_252;
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result134__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    memset(&result_253,0,sizeof(char*));
    __result135__ = gComeFunResultObject = __result_obj__ = result_253;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_255;
char* __result136__;
char* __result137__;
char* result_256;
char* __result138__;
result_255 = (void*)0;
result_256 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_255,0,sizeof(char*));
        __result136__ = gComeFunResultObject = __result_obj__ = result_255;
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result137__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    memset(&result_256,0,sizeof(char*));
    __result138__ = gComeFunResultObject = __result_obj__ = result_256;
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_259;
unsigned int it_260;
struct sFun* __result139__;
struct sFun* __result140__;
struct sFun* __result141__;
struct sFun* __result142__;
    hash_259=string_get_hash_key(((char*)key))%self->size;
    it_260=hash_259;
    while((_Bool)1) {
        if(        self->item_existance[it_260]) {
            if(            string_equals(self->keys[it_260],key)) {
                __result139__ = gComeFunResultObject = __result_obj__ = self->items[it_260];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result139__;
            }
            it_260++;
            if(            it_260>=self->size) {
                it_260=0;
            }
            else if(            it_260==hash_259) {
                __result140__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result140__;
            }
        }
        else {
            __result141__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result141__;
        }
    }
    __result142__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_266;
struct list_item$1charp* it_267;
struct list$1charp* __result146__;
    it2_266=0;
    it_267=self->head;
    while(it_267!=((void*)0)) {
        if(        charp_equals(it_267->item,item)) {
            list$1charp_delete(self,it2_266,it2_266+1);
            break;
        }
        it2_266++;
        it_267=it_267->next;
    }
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result146__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_268;
struct list$1charp* __result143__;
struct list_item$1charp* it_271;
int i_272;
struct list_item$1charp* prev_it_273;
struct list_item$1charp* it_274;
int i_275;
struct list_item$1charp* prev_it_276;
struct list_item$1charp* it_277;
struct list_item$1charp* head_prev_it_278;
struct list_item$1charp* tail_it_279;
int i_280;
struct list_item$1charp* prev_it_281;
struct list$1charp* __result145__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_268=tail;
        tail=head;
        head=tmp_268;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result143__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_271=self->head;
        i_272=0;
        while(it_271!=((void*)0)) {
            if(            i_272<tail) {
                prev_it_273=it_271;
                it_271=it_271->next;
                i_272++;
                /*i*/come_call_finalizer3(prev_it_273,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_272==tail) {
                self->head=it_271;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_271=it_271->next;
                i_272++;
            }
        }
    }
    else if(    tail==self->len) {
        it_274=self->head;
        i_275=0;
        while(it_274!=((void*)0)) {
            if(            i_275==head) {
                self->tail=it_274->prev;
                self->tail->next=((void*)0);
            }
            if(            i_275>=head) {
                prev_it_276=it_274;
                it_274=it_274->next;
                i_275++;
                /*i*/come_call_finalizer3(prev_it_276,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_274=it_274->next;
                i_275++;
            }
        }
    }
    else {
        it_277=self->head;
        head_prev_it_278=((void*)0);
        tail_it_279=((void*)0);
        i_280=0;
        while(it_277!=((void*)0)) {
            if(            i_280==head) {
                head_prev_it_278=it_277->prev;
            }
            if(            i_280==tail) {
                tail_it_279=it_277;
            }
            if(            i_280>=head&&i_280<tail) {
                prev_it_281=it_277;
                it_277=it_277->next;
                i_280++;
                /*i*/come_call_finalizer3(prev_it_281,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_277=it_277->next;
                i_280++;
            }
        }
        if(        head_prev_it_278!=((void*)0)) {
            head_prev_it_278->next=tail_it_279;
        }
        if(        tail_it_279!=((void*)0)) {
            tail_it_279->prev=head_prev_it_278;
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_269;
struct list_item$1charp* prev_it_270;
struct list$1charp* __result144__;
    it_269=self->head;
    while(it_269!=((void*)0)) {
        prev_it_270=it_269;
        it_269=it_269->next;
        /*i*/come_call_finalizer3(prev_it_270,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_283;
char* __result147__;
char* __result148__;
char* result_284;
char* __result149__;
result_283 = (void*)0;
result_284 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_283,0,sizeof(char*));
        __result147__ = gComeFunResultObject = __result_obj__ = result_283;
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    self->it=self->head;
    if(    self->it) {
        __result148__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    memset(&result_284,0,sizeof(char*));
    __result149__ = gComeFunResultObject = __result_obj__ = result_284;
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_286;
char* __result150__;
char* __result151__;
char* result_287;
char* __result152__;
result_286 = (void*)0;
result_287 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_286,0,sizeof(char*));
        __result150__ = gComeFunResultObject = __result_obj__ = result_286;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result151__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    memset(&result_287,0,sizeof(char*));
    __result152__ = gComeFunResultObject = __result_obj__ = result_287;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_378;
_Bool is_type_name_flag_379;
int sline_380;
_Bool define_struct_nobody_381;
char* p_382;
int sline_383;
void* __right_value532 = (void*)0;
char* word_384;
_Bool define_function_pointer_result_function_385;
_Bool define_variable_between_brace_386;
char* p_387;
void* __right_value533 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_388;
char* fun_name_389;
_Bool err_390;
void* __right_value534 = (void*)0;
char* word_391;
_Bool define_function_flag_392;
char* p_393;
void* __right_value535 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_394;
char* fun_name_395;
_Bool err_396;
char* word_397;
void* __right_value536 = (void*)0;
char* __dec_obj156;
void* __right_value537 = (void*)0;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value538 = (void*)0;
char* __dec_obj159;
_Bool define_variable_398;
char* p_399;
void* __right_value539 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_400;
char* fun_name_401;
_Bool err_402;
void* __right_value540 = (void*)0;
char* word_403;
void* __right_value541 = (void*)0;
char* word_404;
char* p_405;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* word_406;
void* __right_value544 = (void*)0;
char* __dec_obj160;
void* __right_value545 = (void*)0;
char* word_407;
void* __right_value546 = (void*)0;
char* word_410;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* node_411;
struct sNode* __result155__;
void* __right_value549 = (void*)0;
struct sNode* __result156__;
char* header_head_412;
void* __right_value550 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_413;
char* fun_name_414;
_Bool err_415;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1sTypeph* param_types_416;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_names_417;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_418;
char* param_name_419;
_Bool err_420;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1sTypeph* param_types2_422;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct list$1charph* param_names2_423;
void* __right_value562 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_424;
char* param_name_425;
_Bool err_426;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
char* header_tail_428;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* result_type2_429;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct tuple1$1sTypeph* __dec_obj162;
void* __right_value569 = (void*)0;
struct list$1sTypeph* __dec_obj163;
void* __right_value570 = (void*)0;
struct list$1charph* __dec_obj164;
_Bool var_args_430;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* header_buf_431;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_default_parametors_432;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sFun* fun_433;
void* __right_value580 = (void*)0;
struct sFun* fun2_437;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value618 = (void*)0;
struct sNode* __result185__;
void* __right_value619 = (void*)0;
struct sNode* node_472;
struct sNode* __result186__;
void* __right_value620 = (void*)0;
struct sNode* node_473;
char* source_tail_474;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct buffer* header_475;
struct sNode* __result187__;
void* __right_value623 = (void*)0;
char* buf2_476;
void* __right_value624 = (void*)0;
struct sNode* __result188__;
    source_head_378=info->p;
    is_type_name_flag_379=is_type_name(buf,info);
    sline_380=info->sline;
    define_struct_nobody_381=(_Bool)0;
    {
        p_382=info->p;
        sline_383=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_384=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_381=(_Bool)1;
                }
                word_384 = come_decrement_ref_count2(word_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_383;
    }
    define_function_pointer_result_function_385=(_Bool)0;
    define_variable_between_brace_386=(_Bool)0;
    if(    is_type_name_flag_379) {
        p_387=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value533=backtrace_parse_type((_Bool)0,info)));
            result_type_388=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_389=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_390=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value533,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_385=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_391=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_391,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_386=(_Bool)1;
                            }
                        }
                        word_391 = come_decrement_ref_count2(word_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_388,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_389 = come_decrement_ref_count2(fun_name_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_380;
    }
    define_function_flag_392=(_Bool)0;
    if(    is_type_name_flag_379&&!define_function_pointer_result_function_385&&charp_operator_not_equals(buf,"__typeof__")) {
        p_393=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value535=backtrace_parse_type((_Bool)0,info)));
            result_type_394=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_395=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_396=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value535,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_395 = come_decrement_ref_count2(fun_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_397=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj156=word_397;
                word_397=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_397,"extern")) {
                    __dec_obj157=word_397;
                    word_397=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj158=word_397;
                word_397=((void*)0);
                /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_397) {
                if(                is_type_name(word_397,info)) {
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
                        __dec_obj159=word_397;
                        word_397=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_397)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_379) {
                        define_function_flag_392=(_Bool)1;
                    }
                }
            }
            word_397 = come_decrement_ref_count2(word_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_393;
        info->sline=sline_380;
    }
    define_variable_398=(_Bool)1;
    if(    is_type_name_flag_379&&!define_function_pointer_result_function_385) {
        p_399=info->p;
        info->p=head;
        if(        !is_type_name_flag_379) {
            define_variable_398=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value539=backtrace_parse_type((_Bool)0,info)));
            result_type_400=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_401=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_402=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value539,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_403=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_398=(_Bool)1;
                            }
                        }
                        word_403 = come_decrement_ref_count2(word_403, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_404=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_404,info)&&*info->p!=40) {
                            define_variable_398=(_Bool)1;
                        }
                    }
                    word_404 = come_decrement_ref_count2(word_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_400,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_401 = come_decrement_ref_count2(fun_name_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_398=(_Bool)0;
        }
        else if(        define_variable_398) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_398=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_398=(_Bool)0;
            }
        }
        info->p=p_399;
        info->sline=sline_380;
    }
    else {
        define_variable_398=(_Bool)0;
    }
    {
        p_405=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value542=parse_word(info)));
                __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_406=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj160=word_406;
                        word_406=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_406,"extends")) {
                            define_variable_398=(_Bool)0;
                        }
                    }
                    word_406 = come_decrement_ref_count2(word_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_398=(_Bool)0;
        }
        else if(        define_variable_398) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_398=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_398=(_Bool)0;
            }
        }
        info->p=p_405;
        info->sline=sline_380;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_407=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
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
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_410=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_410)));
                    word_410 = come_decrement_ref_count2(word_410, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_411=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result155__ = gComeFunResultObject = __result_obj__ = node_411;
            if(node_411) { node_411 = come_decrement_ref_count2(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_407 = come_decrement_ref_count2(word_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result155__;
            if(node_411) { node_411 = come_decrement_ref_count2(node_411, ((struct sNode*)node_411)->finalize, ((struct sNode*)node_411)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_407 = come_decrement_ref_count2(word_407, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_struct_nobody_381) {
    }
    else if(    define_variable_between_brace_386) {
        info->p=head;
        info->sline=sline_380;
        __result156__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value549=parse_global_variable(info)));
        if(__right_value549) { __right_value549 = come_decrement_ref_count2(__right_value549, ((struct sNode*)__right_value549)->finalize, ((struct sNode*)__right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    else if(    define_function_pointer_result_function_385) {
        header_head_412=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value550=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_413=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_414=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_415=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value550,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_416=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1365, "list$1sTypeph"))));
            param_names_417=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1366, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value555=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_418=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_419=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_420=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_420) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_416,(struct sType*)come_increment_ref_count(param_type_418));
                    static int num_function_pointer_result_var_name_a_421=0;
                    list$1charph_push_back(param_names_417,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_421)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value557=parse_word(info)));
                        __right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(param_type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_419 = come_decrement_ref_count2(param_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_418,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_419 = come_decrement_ref_count2(param_name_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_422=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1412, "list$1sTypeph"))));
                param_names2_423=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1413, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value562=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_424=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_425=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_426=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value562,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_426) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_422,(struct sType*)come_increment_ref_count(param_type_424));
                        static int num_function_pointer_result_var_name_b_427=0;
                        list$1charph_push_back(param_names2_423,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_427)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value564=parse_word(info)));
                            __right_value564 = come_decrement_ref_count2(__right_value564, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            /*i*/come_call_finalizer3(param_type_424,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_425 = come_decrement_ref_count2(param_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_424,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_425 = come_decrement_ref_count2(param_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_428=info->p;
                result_type2_429=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "sType")),"lambda",(_Bool)0,info));
                __dec_obj162=result_type2_429->mResultType;
                result_type2_429->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1457, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_413)));
                come_call_finalizer3(__dec_obj162,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj163=result_type2_429->mParamTypes;
                result_type2_429->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_422));
                come_call_finalizer3(__dec_obj163,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj164=result_type2_429->mParamNames;
                result_type2_429->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_423));
                come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_429->mVarArgs=(_Bool)0;
                result_type2_429->mStatic=(_Bool)0;
                var_args_430=(_Bool)0;
                header_buf_431=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1465, "buffer"))));
                buffer_append(header_buf_431,header_head_412,header_tail_428-header_head_412);
                buffer_append_char(header_buf_431,0);
                param_default_parametors_432=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1469, "list$1charph"))));
                fun_433=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1471, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_414)),(struct sType*)come_increment_ref_count(result_type2_429),(struct list$1sTypeph*)come_increment_ref_count(param_types_416),(struct list$1charph*)come_increment_ref_count(param_names_417),(struct list$1charph*)come_increment_ref_count(param_default_parametors_432),(_Bool)1,var_args_430,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_431)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                fun2_437=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value580=__builtin_string(fun_name_414))));
                __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_437==((void*)0)||fun2_437->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_414)),(struct sFun*)come_increment_ref_count(fun_433));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1483, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value583=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1483, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_433),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result185__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value618=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_422,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_429,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_431,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_432,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_433,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_416,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_417,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value583,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value618) { __right_value618 = come_decrement_ref_count2(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result185__;
                /*i*/come_call_finalizer3(param_types2_422,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_423,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_429,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_431,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_432,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_433,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_416,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_417,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_413,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_414 = come_decrement_ref_count2(fun_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_392) {
        info->p=head;
        info->sline=sline_380;
        node_472=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result186__ = gComeFunResultObject = __result_obj__ = node_472;
        if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result186__;
        if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_398) {
        info->p=head;
        info->sline=sline_380;
        node_473=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_474=info->p;
        header_475=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1507, "buffer"))));
        buffer_append(header_475,source_head_378,source_tail_474-source_head_378);
        __result187__ = gComeFunResultObject = __result_obj__ = node_473;
        if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result187__;
        if(node_473) { node_473 = come_decrement_ref_count2(node_473, ((struct sNode*)node_473)->finalize, ((struct sNode*)node_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_475,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_380;
    buf2_476=(char*)come_increment_ref_count(parse_word(info));
    __result188__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value624=top_level_v98(buf2_476,head,head_sline,info)));
    buf2_476 = come_decrement_ref_count2(buf2_476, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value624) { __right_value624 = come_decrement_ref_count2(__right_value624, ((struct sNode*)__right_value624)->finalize, ((struct sNode*)__right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result188__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj154;
char* __dec_obj155;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj154=self->v1;
            come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj155=self->v2;
            /*G*/ __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_408;
struct list_item$1charph* prev_it_409;
struct list$1charph* __result154__;
    it_408=self->head;
    while(it_408!=((void*)0)) {
        prev_it_409=it_408;
        it_408=it_408->next;
        /*i*/come_call_finalizer3(prev_it_409,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result154__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj161;
struct tuple1$1sTypeph* __result157__;
    __dec_obj161=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result157__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_434;
unsigned int hash_435;
unsigned int it_436;
struct sFun* __result158__;
struct sFun* __result159__;
struct sFun* __result160__;
struct sFun* __result161__;
default_value_434 = (void*)0;
    memset(&default_value_434,0,sizeof(struct sFun*));
    hash_435=string_get_hash_key(((char*)key))%self->size;
    it_436=hash_435;
    while((_Bool)1) {
        if(        self->item_existance[it_436]) {
            if(            string_equals(self->keys[it_436],key)) {
                __result158__ = gComeFunResultObject = __result_obj__ = self->items[it_436];
                /*i*/come_call_finalizer3(default_value_434,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result158__;
            }
            it_436++;
            if(            it_436>=self->size) {
                it_436=0;
            }
            else if(            it_436==hash_435) {
                __result159__ = gComeFunResultObject = __result_obj__ = default_value_434;
                /*i*/come_call_finalizer3(default_value_434,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result159__;
            }
        }
        else {
            __result160__ = gComeFunResultObject = __result_obj__ = default_value_434;
            /*i*/come_call_finalizer3(default_value_434,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result160__;
        }
    }
    __result161__ = gComeFunResultObject = __result_obj__ = default_value_434;
    /*i*/come_call_finalizer3(default_value_434,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result163__;
void* __right_value586 = (void*)0;
struct sFun* result_439;
void* __right_value587 = (void*)0;
char* __dec_obj168;
void* __right_value588 = (void*)0;
struct sType* __dec_obj169;
void* __right_value589 = (void*)0;
struct list$1sTypeph* __dec_obj170;
void* __right_value590 = (void*)0;
struct list$1charph* __dec_obj171;
void* __right_value591 = (void*)0;
struct list$1charph* __dec_obj172;
void* __right_value592 = (void*)0;
struct sType* __dec_obj173;
void* __right_value610 = (void*)0;
struct sBlock* __dec_obj179;
void* __right_value611 = (void*)0;
struct buffer* __dec_obj180;
void* __right_value612 = (void*)0;
struct buffer* __dec_obj181;
void* __right_value613 = (void*)0;
struct buffer* __dec_obj182;
void* __right_value614 = (void*)0;
struct buffer* __dec_obj183;
void* __right_value615 = (void*)0;
char* __dec_obj184;
void* __right_value616 = (void*)0;
char* __dec_obj185;
struct sFun* __result183__;
    if(    self==(void*)0) {
        __result163__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    result_439=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj168=result_439->mName;
        result_439->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj169=result_439->mResultType;
        result_439->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj170=result_439->mParamTypes;
        result_439->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj170,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj171=result_439->mParamNames;
        result_439->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj171,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj172=result_439->mParamDefaultParametors;
        result_439->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj172,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj173=result_439->mLambdaType;
        result_439->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj179=result_439->mBlock;
        result_439->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj179,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_439->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj180=result_439->mSource;
        result_439->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj180,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj181=result_439->mSourceHead;
        result_439->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj182=result_439->mSourceHead2;
        result_439->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj183=result_439->mSourceDefer;
        result_439->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj184=result_439->mComeHeader;
        result_439->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj185=result_439->mDeclareSName;
        result_439->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_439->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result183__ = gComeFunResultObject = __result_obj__ = result_439;
    /*i*/come_call_finalizer3(result_439,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result164__;
void* __right_value593 = (void*)0;
struct sBlock* result_440;
void* __right_value594 = (void*)0;
struct list$1sNodeph* __dec_obj174;
void* __right_value609 = (void*)0;
struct sVarTable* __dec_obj178;
struct sBlock* __result182__;
    if(    self==(void*)0) {
        __result164__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    result_440=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj174=result_440->mNodes;
        result_440->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj174,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj178=result_440->mVarTable;
        result_440->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj178,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_440->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result182__ = gComeFunResultObject = __result_obj__ = result_440;
    /*i*/come_call_finalizer3(result_440,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result165__;
void* __right_value595 = (void*)0;
struct sVarTable* result_441;
void* __right_value608 = (void*)0;
struct map$2charphsVarph* __dec_obj177;
struct sVarTable* __result181__;
    if(    self==(void*)0) {
        __result165__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    result_441=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj177=result_441->mVars;
        result_441->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj177,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_441->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_441->mID=self->mID;
    }
    __result181__ = gComeFunResultObject = __result_obj__ = result_441;
    /*i*/come_call_finalizer3(result_441,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result166__;
void* __right_value596 = (void*)0;
void* __right_value602 = (void*)0;
struct map$2charphsVarph* result_445;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1charp* __dec_obj176;
char* it_448;
struct sVar* default_value_451;
struct sVar* it2_454;
struct map$2charphsVarph* __result180__;
default_value_451 = (void*)0;
    if(    self==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    result_445=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 1473, "map$2charphsVarph"))));
    __dec_obj176=result_445->key_list;
    result_445->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1475, "list$1charp"))));
    come_call_finalizer3(__dec_obj176,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_448=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_448=map$2charphsVarph_next(self)    ){
        memset(&default_value_451,0,sizeof(struct sVar*));
        it2_454=map$2charphsVarph_at(self,it_448,default_value_451);
        map$2charphsVarph_put(result_445,it_448,it2_454);
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_445;
    /*i*/come_call_finalizer3(result_445,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
int i_442;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1charp* __dec_obj175;
struct map$2charphsVarph* __result168__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value597=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1379, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value598=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1380, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value599=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1381, "bool"))));
    for(    i_442=0;    i_442<128;    i_442++    ){
        self->item_existance[i_442]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj175=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1391, "list$1charp"))));
    come_call_finalizer3(__dec_obj175,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result168__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result168__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result167__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result167__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_443;
int i_444;
    for(    i_443=0;    i_443<self->size;    i_443++    ){
        if(        self->item_existance[i_443]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_443],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_444=0;    i_444<self->size;    i_444++    ){
        if(        self->item_existance[i_444]) {
            if(            1) {
                self->keys[i_444] = come_decrement_ref_count2(self->keys[i_444], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_446;
char* __result169__;
char* __result170__;
char* result_447;
char* __result171__;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_446,0,sizeof(char*));
        __result169__ = gComeFunResultObject = __result_obj__ = result_446;
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result170__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    memset(&result_447,0,sizeof(char*));
    __result171__ = gComeFunResultObject = __result_obj__ = result_447;
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_449;
char* __result172__;
char* __result173__;
char* result_450;
char* __result174__;
result_449 = (void*)0;
result_450 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_449,0,sizeof(char*));
        __result172__ = gComeFunResultObject = __result_obj__ = result_449;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result173__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    memset(&result_450,0,sizeof(char*));
    __result174__ = gComeFunResultObject = __result_obj__ = result_450;
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_452;
unsigned int it_453;
struct sVar* __result175__;
struct sVar* __result176__;
struct sVar* __result177__;
struct sVar* __result178__;
    hash_452=string_get_hash_key(((char*)key))%self->size;
    it_453=hash_452;
    while((_Bool)1) {
        if(        self->item_existance[it_453]) {
            if(            string_equals(self->keys[it_453],key)) {
                __result175__ = gComeFunResultObject = __result_obj__ = self->items[it_453];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result175__;
            }
            it_453++;
            if(            it_453>=self->size) {
                it_453=0;
            }
            else if(            it_453==hash_452) {
                __result176__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result176__;
            }
        }
        else {
            __result177__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result177__;
        }
    }
    __result178__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_466;
int it_467;
_Bool same_key_exist_468;
char* it2_469;
struct map$2charphsVarph* __result179__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_466=string_get_hash_key(key)%self->size;
    it_467=hash_466;
    while((_Bool)1) {
        if(        self->item_existance[it_467]) {
            if(            string_equals(self->keys[it_467],key)) {
                if(                1) {
                    self->keys[it_467] = come_decrement_ref_count2(self->keys[it_467], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_467]);
                    self->keys[it_467]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_467]);
                    self->keys[it_467]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_467],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_467]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_467]=item;
                }
                break;
            }
            it_467++;
            if(            it_467>=self->size) {
                it_467=0;
            }
            else if(            it_467==hash_466) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_467]=(_Bool)1;
            if(            1) {
                self->keys[it_467]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_467]=key;
            }
            if(            1) {
                self->items[it_467]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_467]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_468=(_Bool)0;
    for(    it2_469=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_469=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_469,key)) {
            same_key_exist_468=(_Bool)1;
        }
    }
    if(    !same_key_exist_468) {
        list$1charp_push_back(self->key_list,key);
    }
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_455;
void* __right_value605 = (void*)0;
char** keys_456;
void* __right_value606 = (void*)0;
struct sVar** items_457;
void* __right_value607 = (void*)0;
_Bool* item_existance_458;
int len_459;
char* it_460;
struct sVar* default_value_461;
struct sVar* it2_462;
unsigned int hash_463;
int n_464;
struct sVar* default_value_465;
default_value_461 = (void*)0;
default_value_465 = (void*)0;
    size_455=self->size*10;
    keys_456=(char**)come_increment_ref_count(((char**)(__right_value605=(char**)come_calloc(1, sizeof(char*)*(1*(size_455)), "./comelang.h", 1630, "char*%"))));
    items_457=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value606=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_455)), "./comelang.h", 1631, "sVar*%"))));
    item_existance_458=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value607=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_455)), "./comelang.h", 1632, "bool"))));
    len_459=0;
    for(    it_460=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_460=map$2charphsVarph_next(self)    ){
        memset(&default_value_461,0,sizeof(struct sVar*));
        it2_462=map$2charphsVarph_at(self,it_460,default_value_461);
        hash_463=string_get_hash_key(it_460)%size_455;
        n_464=hash_463;
        while((_Bool)1) {
            if(            item_existance_458[n_464]) {
                n_464++;
                if(                n_464>=size_455) {
                    n_464=0;
                }
                else if(                n_464==hash_463) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_458[n_464]=(_Bool)1;
                keys_456[n_464]=it_460;
                items_457[n_464]=map$2charphsVarph_at(self,it_460,default_value_465);
                len_459++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_456;
    self->items=items_457;
    self->item_existance=item_existance_458;
    self->size=size_455;
    self->len=len_459;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_470;
int i_471;
    for(    i_470=0;    i_470<self->size;    i_470++    ){
        if(        self->item_existance[i_470]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_470],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_471=0;    i_471<self->size;    i_471++    ){
        if(        self->item_existance[i_471]) {
            if(            1) {
                self->keys[i_471] = come_decrement_ref_count2(self->keys[i_471], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_477;
int caller_line_478;
char* caller_sname_479;
_Bool comma_instead_of_semicolon_480;
char* last_code_481;
char* __dec_obj187;
char* last_code2_482;
char* __dec_obj188;
char* last_code3_483;
char* __dec_obj189;
void* __right_value625 = (void*)0;
char* sname_top_484;
int sline_top_485;
struct sFun* funX_486;
_Bool __result189__;
void* __right_value626 = (void*)0;
struct sType* result_type_487;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1sTypeph* param_types_488;
struct list$1sTypeph* o2_saved_489;
struct sType* it_492;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sType* param_type_495;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1charph* param_names_496;
void* __right_value633 = (void*)0;
struct list$1charph* param_default_parametors_497;
char* p_498;
int sline_499;
char* sname_500;
char* head_501;
struct buffer* source_502;
void* __right_value634 = (void*)0;
struct buffer* __dec_obj190;
struct sType* generics_type_saved_503;
void* __right_value635 = (void*)0;
struct sType* __dec_obj191;
struct list$1charph* method_generics_type_names_504;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1charph* __dec_obj192;
struct list$1charph* o2_saved_505;
char* it_506;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1charph* __dec_obj193;
char* __dec_obj194;
void* __right_value640 = (void*)0;
struct sBlock* block_507;
struct buffer* __dec_obj195;
char* __dec_obj196;
_Bool var_args_508;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sFun* fun_509;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value652 = (void*)0;
struct sNode* node_510;
_Bool in_generics_fun_512;
void* __if_result__1_513 = (void*)0;
_Bool __result198__;
struct sType* __dec_obj201;
struct list$1charph* __dec_obj202;
void* __right_value653 = (void*)0;
char* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
_Bool __result199__;
    caller_fun_477=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_478=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_479=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_480=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_481=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj187=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_482=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj188=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_483=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj189=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_484=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_485=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_486=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_486) {
        __result189__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_481 = come_decrement_ref_count2(last_code_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_482 = come_decrement_ref_count2(last_code2_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_483 = come_decrement_ref_count2(last_code3_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_484 = come_decrement_ref_count2(sname_top_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result189__;
    }
    result_type_487=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_488=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1555, "list$1sTypeph"))));
    for(    o2_saved_489=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_492=list$1sTypeph_begin((o2_saved_489));    !list$1sTypeph_end((o2_saved_489));    it_492=list$1sTypeph_next((o2_saved_489))    ){
        param_type_495=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value629=sType_clone(it_492))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_495->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_488,(struct sType*)come_increment_ref_count(sType_clone(param_type_495)));
        /*i*/come_call_finalizer3(param_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_489,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_496=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_497=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_498=info->p;
    sline_499=info->sline;
    sname_500=(char*)come_increment_ref_count(info->sname);
    head_501=info->head;
    source_502=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj190=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj190,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_503=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj191=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_504=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj192=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1582, "list$1charph"))));
    come_call_finalizer3(__dec_obj192,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_505=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_506=list$1charph_begin((o2_saved_505));    !list$1charph_end((o2_saved_505));    it_506=list$1charph_next((o2_saved_505))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_506)));
    }
    /*i*/come_call_finalizer3(o2_saved_505,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj193=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj193,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj194=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_507=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_501;
    __dec_obj195=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_502);
    come_call_finalizer3(__dec_obj195,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_498;
    info->sline=sline_499;
    __dec_obj196=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_500);
    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_487->mInline=(_Bool)0;
    var_args_508=generics_fun->mVarArgs;
    fun_509=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_487),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_488)),(struct list$1charph*)come_increment_ref_count(param_names_496),(struct list$1charph*)come_increment_ref_count(param_default_parametors_497),(_Bool)0,var_args_508,(struct sBlock*)come_increment_ref_count(block_507),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_509));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1611, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value648=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1611, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_509),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_510=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value648,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_512=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(    !node_compile(node_510,info)) {
        __result198__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_481 = come_decrement_ref_count2(last_code_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_482 = come_decrement_ref_count2(last_code2_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_483 = come_decrement_ref_count2(last_code3_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_484 = come_decrement_ref_count2(sname_top_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_488,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_500 = come_decrement_ref_count2(sname_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_503,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_504,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_507,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_509,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result198__;
    }
    info->in_generics_fun=in_generics_fun_512;
    __dec_obj201=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_503);
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj202=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_504);
    come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj203=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_484));
    /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_485;
    __dec_obj204=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_481);
    /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_482);
    /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj206=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_483);
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_477;
    info->caller_line=caller_line_478;
    info->caller_sname=caller_sname_479;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_480;
    __result199__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_481 = come_decrement_ref_count2(last_code_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_482 = come_decrement_ref_count2(last_code2_482, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_483 = come_decrement_ref_count2(last_code3_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_484 = come_decrement_ref_count2(sname_top_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_488,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_497,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_500 = come_decrement_ref_count2(sname_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_502,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_503,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_504,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_507,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_509,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result199__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_490;
struct sType* __result190__;
struct sType* __result191__;
struct sType* result_491;
struct sType* __result192__;
result_490 = (void*)0;
result_491 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_490,0,sizeof(struct sType*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_490;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->it=self->head;
    if(    self->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_491,0,sizeof(struct sType*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_491;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_493;
struct sType* __result193__;
struct sType* __result194__;
struct sType* result_494;
struct sType* __result195__;
result_493 = (void*)0;
result_494 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_493,0,sizeof(struct sType*));
        __result193__ = gComeFunResultObject = __result_obj__ = result_493;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result194__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    memset(&result_494,0,sizeof(struct sType*));
    __result195__ = gComeFunResultObject = __result_obj__ = result_494;
    gComeFunResultObject = (void*)0;
    return __result195__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_514;
int caller_line_515;
char* caller_sname_516;
_Bool comma_instead_of_semicolon_517;
char* last_code_518;
char* __dec_obj207;
char* last_code2_519;
char* __dec_obj208;
char* last_code3_520;
char* __dec_obj209;
void* __right_value654 = (void*)0;
char* sname_top_521;
int sline_top_522;
struct sFun* funX_523;
_Bool __result200__;
void* __right_value655 = (void*)0;
struct sType* result_type_524;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct list$1sTypeph* param_types_525;
struct list$1sTypeph* o2_saved_526;
struct sType* it_527;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sType* param_type_528;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* param_names_529;
void* __right_value662 = (void*)0;
struct list$1charph* param_default_parametors_530;
char* p_531;
int sline_532;
char* sname_533;
char* head_534;
struct buffer* source_535;
void* __right_value663 = (void*)0;
struct buffer* __dec_obj210;
struct list$1charph* method_generics_type_names_536;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1charph* __dec_obj211;
struct list$1charph* o2_saved_537;
char* it_538;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1charph* __dec_obj212;
char* __dec_obj213;
void* __right_value668 = (void*)0;
struct sBlock* block_539;
struct buffer* __dec_obj214;
char* __dec_obj215;
_Bool var_args_540;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sFun* fun_541;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value680 = (void*)0;
struct sNode* node_542;
void* __if_result__2_544 = (void*)0;
_Bool __result203__;
struct list$1charph* __dec_obj220;
void* __right_value681 = (void*)0;
char* __dec_obj221;
char* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
_Bool __result204__;
    caller_fun_514=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_515=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_516=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_517=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_518=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj207=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_519=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj208=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_520=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj209=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_521=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_522=info->sline;
    funX_523=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_523) {
        __result200__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_518 = come_decrement_ref_count2(last_code_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_519 = come_decrement_ref_count2(last_code2_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_520 = come_decrement_ref_count2(last_code3_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_521 = come_decrement_ref_count2(sname_top_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result200__;
    }
    result_type_524=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_525=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1668, "list$1sTypeph"))));
    for(    o2_saved_526=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_527=list$1sTypeph_begin((o2_saved_526));    !list$1sTypeph_end((o2_saved_526));    it_527=list$1sTypeph_next((o2_saved_526))    ){
        param_type_528=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value658=sType_clone(it_527))),info));
        /*g*/come_call_finalizer3(__right_value658,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_528->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_525,(struct sType*)come_increment_ref_count(sType_clone(param_type_528)));
        /*i*/come_call_finalizer3(param_type_528,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_526,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_529=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_530=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_531=info->p;
    sline_532=info->sline;
    sname_533=(char*)come_increment_ref_count(info->sname);
    head_534=info->head;
    source_535=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj210=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_536=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj211=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1692, "list$1charph"))));
    come_call_finalizer3(__dec_obj211,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_537=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_538=list$1charph_begin((o2_saved_537));    !list$1charph_end((o2_saved_537));    it_538=list$1charph_next((o2_saved_537))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_538)));
    }
    /*i*/come_call_finalizer3(o2_saved_537,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj212=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj213=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_539=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_534;
    __dec_obj214=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_535);
    come_call_finalizer3(__dec_obj214,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_531;
    info->sline=sline_532;
    __dec_obj215=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_533);
    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_524->mInline=(_Bool)0;
    var_args_540=generics_fun->mVarArgs;
    fun_541=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1714, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_524),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_525)),(struct list$1charph*)come_increment_ref_count(param_names_529),(struct list$1charph*)come_increment_ref_count(param_default_parametors_530),(_Bool)0,var_args_540,(struct sBlock*)come_increment_ref_count(block_539),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_541));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1721, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value676=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1721, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_541),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_542=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value676,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(    !node_compile(node_542,info)) {
        __result203__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_518 = come_decrement_ref_count2(last_code_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_519 = come_decrement_ref_count2(last_code2_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_520 = come_decrement_ref_count2(last_code3_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_521 = come_decrement_ref_count2(sname_top_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_525,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_533 = come_decrement_ref_count2(sname_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_536,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_539,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_541,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_542) { node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result203__;
    }
    __dec_obj220=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_536);
    come_call_finalizer3(__dec_obj220,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj221=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_521));
    /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_522;
    __dec_obj222=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_518);
    /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj223=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_519);
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj224=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_520);
    /*G*/ __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_514;
    info->caller_line=caller_line_515;
    info->caller_sname=caller_sname_516;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_517;
    __result204__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_518 = come_decrement_ref_count2(last_code_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_519 = come_decrement_ref_count2(last_code2_519, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_520 = come_decrement_ref_count2(last_code3_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_521 = come_decrement_ref_count2(sname_top_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_525,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_533 = come_decrement_ref_count2(sname_533, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_535,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_536,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_539,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_541,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_542) { node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result204__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_545;
char* source_head_546;
struct sType* result_type_547;
char* var_name_548;
_Bool constructor__549;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sType* __dec_obj225;
void* __right_value684 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_550;
char* var_name2_551;
_Bool err_552;
struct sType* __dec_obj226;
char* __dec_obj227;
_Bool method_definition_553;
char* p_554;
int sline_555;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct buffer* buf2_556;
char* fun_name_557;
char* base_fun_name_558;
void* __right_value687 = (void*)0;
char* __dec_obj228;
void* __right_value688 = (void*)0;
char* __dec_obj229;
void* __right_value689 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_559;
char* name_560;
_Bool err_561;
void* __right_value690 = (void*)0;
char* __dec_obj230;
void* __right_value691 = (void*)0;
char* __dec_obj231;
void* __right_value692 = (void*)0;
char* __dec_obj232;
void* __right_value693 = (void*)0;
char* __dec_obj233;
void* __right_value694 = (void*)0;
char* __dec_obj234;
void* __right_value695 = (void*)0;
char* __dec_obj235;
void* __right_value696 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_562;
struct list$1charph* param_names_563;
struct list$1charph* param_default_parametors_564;
_Bool var_args_565;
char* header_tail_566;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct buffer* header_buf_567;
int version_568;
int n_569;
void* __right_value699 = (void*)0;
struct sBlock* block_570;
void* __right_value700 = (void*)0;
char* fun_name_572;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sFun* fun_573;
void* __right_value706 = (void*)0;
struct sFun* fun2_574;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value712 = (void*)0;
struct sNode* __result207__;
void* __right_value713 = (void*)0;
char* none_generics_name_576;
void* __right_value714 = (void*)0;
char* generics_sname_577;
int generics_sline_578;
void* __right_value715 = (void*)0;
char* block_579;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sGenericsFun* fun_580;
void* __right_value722 = (void*)0;
char* fun_name3_581;
void* __right_value726 = (void*)0;
struct sNode* __result219__;
void* __right_value727 = (void*)0;
char* generics_sname_603;
int generics_sline_604;
void* __right_value728 = (void*)0;
char* block_605;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sGenericsFun* fun_606;
void* __right_value735 = (void*)0;
char* fun_name3_607;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* __result220__;
char* source_tail_608;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct buffer* header_609;
void* __right_value740 = (void*)0;
char* name_610;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
char* name_611;
void* __right_value743 = (void*)0;
int i_612;
struct sType* param_type_613;
char* param_name_617;
char* default_parametor_618;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
char* impl_name_619;
void* __right_value749 = (void*)0;
char* result_type_name_620;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
char* impl_name_621;
void* __right_value752 = (void*)0;
char* result_type_name_622;
void* __right_value753 = (void*)0;
int i_623;
struct sType* param_type_624;
char* param_name_625;
char* default_parametor_626;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sBlock* block_627;
_Bool static__628;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
char* new_fun_name_629;
void* __right_value762 = (void*)0;
char* __dec_obj241;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sFun* fun_630;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sFun* fun2_631;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value777 = (void*)0;
struct sNode* __result225__;
void* __right_value778 = (void*)0;
char* new_fun_name_633;
void* __right_value779 = (void*)0;
char* __dec_obj246;
_Bool result_type_static_634;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sFun* fun_635;
void* __right_value785 = (void*)0;
struct sFun* fun2_636;
void* __right_value786 = (void*)0;
char* source_tail_637;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct buffer* header_638;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value795 = (void*)0;
struct sNode* __result228__;
void* __right_value796 = (void*)0;
char* asm_fun_640;
void* __right_value797 = (void*)0;
char* __dec_obj251;
_Bool result_type_static_641;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sFun* fun_642;
void* __right_value803 = (void*)0;
struct sFun* fun2_643;
void* __right_value804 = (void*)0;
char* source_tail_644;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct buffer* header_645;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value813 = (void*)0;
struct sNode* __result231__;
struct sNode* __result232__;
fun_name_557 = (void*)0;
    header_head_545=info->p;
    source_head_546=info->p;
    result_type_547=((void*)0);
    var_name_548=((void*)0);
    constructor__549=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value682=parse_word(info)));
        __right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj225=result_type_547;
        result_type_547=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_547->mHeap=(_Bool)1;
        constructor__549=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value684=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_550=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_551=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_552=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value684,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj226=result_type_547;
        result_type_547=(struct sType*)come_increment_ref_count(result_type2_550);
        come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj227=var_name_548;
        var_name_548=(char*)come_increment_ref_count(var_name2_551);
        /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_552) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_550,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_551 = come_decrement_ref_count2(var_name2_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_553=(_Bool)0;
    {
        p_554=info->p;
        sline_555=info->sline;
        buf2_556=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1786, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_556,*info->p);
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
        if(        buffer_length(buf2_556)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_553=(_Bool)1;
        }
        info->p=p_554;
        info->sline=sline_555;
        /*i*/come_call_finalizer3(buf2_556,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_558=((void*)0);
    if(    constructor__549) {
        __dec_obj228=base_fun_name_558;
        base_fun_name_558=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj229=fun_name_557;
        fun_name_557=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_558,info,(_Bool)1));
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_553) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value689=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_559=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_560=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_561=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value689,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_561) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj230=base_fun_name_558;
        base_fun_name_558=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj231=fun_name_557;
        fun_name_557=(char*)come_increment_ref_count(create_method_name(obj_type_559,(_Bool)0,base_fun_name_558,info,(_Bool)1));
        /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_559,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_560 = come_decrement_ref_count2(name_560, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj232=base_fun_name_558;
        base_fun_name_558=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj233=fun_name_557;
        fun_name_557=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_558,info,(_Bool)1));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj234=fun_name_557;
        fun_name_557=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj235=base_fun_name_558;
        base_fun_name_558=(char*)come_increment_ref_count(__builtin_string(fun_name_557));
        /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_558,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value696=parse_params(info,constructor__549)));
    param_types_562=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_563=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_564=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_565=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value696,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_566=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_558,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_567=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1853, "buffer"))));
    buffer_append(header_buf_567,header_head_545,header_tail_566-header_head_545);
    buffer_append_char(header_buf_567,0);
    version_568=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_569=0;
        while(xisdigit(*info->p)) {
            n_569=n_569*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_568=n_569;
    }
    if(    charp_operator_equals(base_fun_name_558,"lambda")) {
        block_570=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_571=0;
        lambda_num_571++;
        fun_name_572=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_571));
        result_type_547->mStatic=(_Bool)0;
        fun_573=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1883, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_572)),(struct sType*)come_increment_ref_count(result_type_547),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_563),(struct list$1charph*)come_increment_ref_count(param_default_parametors_564),(_Bool)0,var_args_565,(struct sBlock*)come_increment_ref_count(block_570),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_567)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_574=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value706=__builtin_string(fun_name_572))));
        __right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_574==((void*)0)||fun2_574->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_572)),(struct sFun*)come_increment_ref_count(fun_573));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1893, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value709=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1893, "sLambdaNode")),fun_573,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result207__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value712=_inf_value5));
        /*i*/come_call_finalizer3(block_570,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_572 = come_decrement_ref_count2(fun_name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_573,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_557 = come_decrement_ref_count2(fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_558 = come_decrement_ref_count2(base_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value709,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value712) { __right_value712 = come_decrement_ref_count2(__right_value712, ((struct sNode*)__right_value712)->finalize, ((struct sNode*)__right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result207__;
        /*i*/come_call_finalizer3(block_570,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_572 = come_decrement_ref_count2(fun_name_572, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_573,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_576=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_577=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_578=info->sline;
        block_579=(char*)come_increment_ref_count(skip_block(info));
        fun_580=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1903, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value717=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value718=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_557)),(struct sType*)come_increment_ref_count(result_type_547),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_563),(struct list$1charph*)come_increment_ref_count(param_default_parametors_564),var_args_565,(char*)come_increment_ref_count(block_579),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_577)),generics_sline_578));
        /*g*/come_call_finalizer3(__right_value717,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value718,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_581=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_576,base_fun_name_558));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_581)),(struct sGenericsFun*)come_increment_ref_count(fun_580));
        __result219__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_576 = come_decrement_ref_count2(none_generics_name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_577 = come_decrement_ref_count2(generics_sname_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_579 = come_decrement_ref_count2(block_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_580,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_581 = come_decrement_ref_count2(fun_name3_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_557 = come_decrement_ref_count2(fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_558 = come_decrement_ref_count2(base_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result219__;
        none_generics_name_576 = come_decrement_ref_count2(none_generics_name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_577 = come_decrement_ref_count2(generics_sname_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_579 = come_decrement_ref_count2(block_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_580,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_581 = come_decrement_ref_count2(fun_name3_581, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_603=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_604=info->sline;
        block_605=(char*)come_increment_ref_count(skip_block(info));
        fun_606=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1917, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value730=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value731=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_557)),(struct sType*)come_increment_ref_count(result_type_547),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_563),(struct list$1charph*)come_increment_ref_count(param_default_parametors_564),var_args_565,(char*)come_increment_ref_count(block_605),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_603)),generics_sline_604));
        /*g*/come_call_finalizer3(__right_value730,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value731,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_607=(char*)come_increment_ref_count(charp_clone(base_fun_name_558));
        if(        method_definition_553) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_557)),(struct sGenericsFun*)come_increment_ref_count(fun_606));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_607)),(struct sGenericsFun*)come_increment_ref_count(fun_606));
        }
        __result220__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_603 = come_decrement_ref_count2(generics_sname_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_605 = come_decrement_ref_count2(block_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_606,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_607 = come_decrement_ref_count2(fun_name3_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_557 = come_decrement_ref_count2(fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_558 = come_decrement_ref_count2(base_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
        generics_sname_603 = come_decrement_ref_count2(generics_sname_603, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_605 = come_decrement_ref_count2(block_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_606,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_607 = come_decrement_ref_count2(fun_name3_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_608=info->p-1;
        header_609=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1933, "buffer"))));
        if(        constructor__549) {
            if(            list$1sTypeph_length(param_types_562)==1) {
                name_610=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_609,((char*)(__right_value741=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_610,name_610,name_610))));
                __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                name_610 = come_decrement_ref_count2(name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_611=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_609,((char*)(__right_value743=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_611,name_611,name_611))));
                __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_612=1;                i_612<list$1sTypeph_length(param_types_562);                i_612++                ){
                    param_type_613=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_562,i_612), "05function.c", 1945, 1));
                    param_name_617=((char*)come_null_check(list$1charphp_operator_load_element(param_names_563,i_612), "05function.c", 1946, 2));
                    default_parametor_618=list$1charphp_operator_load_element(param_default_parametors_564,i_612);
                    if(                    default_parametor_618) {
                        buffer_append_str(header_609,((char*)(__right_value745=xsprintf("extern %s %s=%s",((char*)(__right_value744=make_come_type_name_string_no_solved(param_type_613,(_Bool)0,info))),param_name_617,default_parametor_618))));
                        __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_609,((char*)(__right_value747=xsprintf("extern %s %s",((char*)(__right_value746=make_come_type_name_string_no_solved(param_type_613,(_Bool)0,info))),param_name_617))));
                        __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_612!=list$1sTypeph_length(param_types_562)-1) {
                        buffer_append_str(header_609,",");
                    }
                }
                buffer_append_str(header_609,");\n");
                name_611 = come_decrement_ref_count2(name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_562)==1) {
                impl_name_619=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_620=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_547,(_Bool)0,info));
                buffer_append_str(header_609,((char*)(__right_value750=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_620,impl_name_619,base_fun_name_558,impl_name_619))));
                __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                impl_name_619 = come_decrement_ref_count2(impl_name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_620 = come_decrement_ref_count2(result_type_name_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_621=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_622=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_547,(_Bool)0,info));
                buffer_append_str(header_609,((char*)(__right_value753=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_622,impl_name_621,base_fun_name_558,impl_name_621))));
                __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_623=1;                i_623<list$1sTypeph_length(param_types_562);                i_623++                ){
                    param_type_624=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_562,i_623), "05function.c", 1976, 3));
                    param_name_625=((char*)come_null_check(list$1charphp_operator_load_element(param_names_563,i_623), "05function.c", 1977, 4));
                    default_parametor_626=list$1charphp_operator_load_element(param_default_parametors_564,i_623);
                    if(                    default_parametor_626) {
                        buffer_append_str(header_609,((char*)(__right_value755=xsprintf("extern %s %s=%s",((char*)(__right_value754=make_come_type_name_string_no_solved(param_type_624,(_Bool)0,info))),param_name_625,default_parametor_626))));
                        __right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_609,((char*)(__right_value757=xsprintf("extern %s %s",((char*)(__right_value756=make_come_type_name_string_no_solved(param_type_624,(_Bool)0,info))),param_name_625))));
                        __right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_623!=list$1sTypeph_length(param_types_562)-1) {
                        buffer_append_str(header_609,",");
                    }
                }
                buffer_append_str(header_609,");\n");
                impl_name_621 = come_decrement_ref_count2(impl_name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_622 = come_decrement_ref_count2(result_type_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_609,source_head_546,source_tail_608-source_head_546);
            buffer_append_str(header_609,";\n");
        }
        if(        !result_type_547->mStatic) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value758=buffer_to_string(header_609))));
            __right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        block_627=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__549,(_Bool)1));
        static__628=(_Bool)0;
        if(        result_type_547->mStatic) {
            result_type_547->mStatic=(_Bool)0;
            static__628=(_Bool)1;
        }
        if(        version_568>0) {
            new_fun_name_629=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value760=__builtin_string(fun_name_557))),version_568));
            __right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj241=fun_name_557;
            fun_name_557=(char*)come_increment_ref_count(__builtin_string(new_fun_name_629));
            /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_629 = come_decrement_ref_count2(new_fun_name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_630=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2017, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_557)),(struct sType*)come_increment_ref_count(result_type_547),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_563),(struct list$1charph*)come_increment_ref_count(param_default_parametors_564),(_Bool)0,var_args_565,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_627)),static__628,(char*)come_increment_ref_count(buffer_to_string(header_buf_567)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_557)),(struct sFun*)come_increment_ref_count(fun_630));
        }
        else {
            fun2_631=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value770=__builtin_string(fun_name_557))));
            __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_631==((void*)0)||fun2_631->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_557)),(struct sFun*)come_increment_ref_count(fun_630));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2037, "struct sNode");
        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value773=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2037, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_630),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=_inf_value6));
        /*i*/come_call_finalizer3(header_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_627,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_630,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_557 = come_decrement_ref_count2(fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_558 = come_decrement_ref_count2(base_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value773,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result225__;
        /*i*/come_call_finalizer3(header_609,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_627,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_630,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_568>0) {
            new_fun_name_633=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_557,version_568));
            __dec_obj246=fun_name_557;
            fun_name_557=(char*)come_increment_ref_count(__builtin_string(new_fun_name_633));
            /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_633 = come_decrement_ref_count2(new_fun_name_633, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_634=result_type_547->mStatic;
            result_type_547->mStatic=(_Bool)0;
            fun_635=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2052, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_557)),(struct sType*)come_increment_ref_count(result_type_547),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_563),(struct list$1charph*)come_increment_ref_count(param_default_parametors_564),(_Bool)1,var_args_565,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_567)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_636=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value785=__builtin_string(fun_name_557))));
            __right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_636==((void*)0)||fun2_636->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_557)),(struct sFun*)come_increment_ref_count(fun_635));
            }
            source_tail_637=info->p;
            header_638=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2066, "buffer"))));
            buffer_append(header_638,source_head_546,source_tail_637-source_head_546);
            if(            !result_type_static_634) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value789=buffer_to_string(header_638))));
                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2073, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value791=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2073, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_635),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result228__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=_inf_value7));
            /*i*/come_call_finalizer3(fun_635,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_557 = come_decrement_ref_count2(fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_558 = come_decrement_ref_count2(base_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value791,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value795) { __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result228__;
            /*i*/come_call_finalizer3(fun_635,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_638,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_640=(char*)come_increment_ref_count(parse_attribute(info));
            if(            string_operator_not_equals(asm_fun_640,"")) {
                __dec_obj251=fun_name_557;
                fun_name_557=(char*)come_increment_ref_count(__builtin_string(asm_fun_640));
                /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_641=result_type_547->mStatic;
            result_type_547->mStatic=(_Bool)0;
            fun_642=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2087, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_557)),(struct sType*)come_increment_ref_count(result_type_547),(struct list$1sTypeph*)come_increment_ref_count(param_types_562),(struct list$1charph*)come_increment_ref_count(param_names_563),(struct list$1charph*)come_increment_ref_count(param_default_parametors_564),(_Bool)1,var_args_565,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_567)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_643=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value803=__builtin_string(fun_name_557))));
            __right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_643==((void*)0)||fun2_643->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_557)),(struct sFun*)come_increment_ref_count(fun_642));
            }
            source_tail_644=info->p;
            header_645=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2101, "buffer"))));
            buffer_append(header_645,source_head_546,source_tail_644-source_head_546);
            if(            !result_type_static_641) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value807=buffer_to_string(header_645))));
                __right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2108, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value809=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2108, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_642),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result231__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=_inf_value8));
            asm_fun_640 = come_decrement_ref_count2(asm_fun_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_642,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_557 = come_decrement_ref_count2(fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_558 = come_decrement_ref_count2(base_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value809,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result231__;
            asm_fun_640 = come_decrement_ref_count2(asm_fun_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_642,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    __result232__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_548 = come_decrement_ref_count2(var_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_557 = come_decrement_ref_count2(fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_558 = come_decrement_ref_count2(base_fun_name_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_562,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_563,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_564,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_567,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj236;
struct list$1charph* __dec_obj237;
struct list$1charph* __dec_obj238;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj236=self->v1;
            come_call_finalizer3(__dec_obj236,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj237=self->v2;
            come_call_finalizer3(__dec_obj237,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj238=self->v3;
            come_call_finalizer3(__dec_obj238,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj239;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj239=self->sname;
            /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result205__;
void* __right_value710 = (void*)0;
struct sLambdaNode* result_575;
void* __right_value711 = (void*)0;
char* __dec_obj240;
struct sLambdaNode* __result206__;
    if(    self==(void*)0) {
        __result205__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_575=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_575->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_575->sname;
        result_575->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_575->mFun=self->mFun;
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_575;
    /*i*/come_call_finalizer3(result_575,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_599;
unsigned int it_600;
_Bool same_key_exist_601;
char* it2_602;
struct map$2charphsGenericsFunph* __result218__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_599=string_get_hash_key(key)%self->size;
    it_600=hash_599;
    while((_Bool)1) {
        if(        self->item_existance[it_600]) {
            if(            string_equals(self->keys[it_600],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_600]);
                    self->keys[it_600] = come_decrement_ref_count2(self->keys[it_600], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_600]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_600]);
                    self->keys[it_600]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_600],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_600]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_600]=item;
                }
                break;
            }
            it_600++;
            if(            it_600>=self->size) {
                it_600=0;
            }
            else if(            it_600==hash_599) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_600]=(_Bool)1;
            if(            1) {
                self->keys[it_600]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_600]=key;
            }
            if(            1) {
                self->items[it_600]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_600]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_601=(_Bool)0;
    for(    it2_602=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_602=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_602,key)) {
            same_key_exist_601=(_Bool)1;
        }
    }
    if(    !same_key_exist_601) {
        list$1charp_push_back(self->key_list,key);
    }
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_582;
void* __right_value723 = (void*)0;
char** keys_583;
void* __right_value724 = (void*)0;
struct sGenericsFun** items_584;
void* __right_value725 = (void*)0;
_Bool* item_existance_585;
int len_586;
char* it_589;
struct sGenericsFun* default_value_592;
struct sGenericsFun* it2_593;
unsigned int hash_596;
int n_597;
struct sGenericsFun* default_value_598;
default_value_592 = (void*)0;
default_value_598 = (void*)0;
    size_582=self->size*10;
    keys_583=(char**)come_increment_ref_count(((char**)(__right_value723=(char**)come_calloc(1, sizeof(char*)*(1*(size_582)), "./comelang.h", 1630, "char*%"))));
    items_584=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value724=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_582)), "./comelang.h", 1631, "sGenericsFun*%"))));
    item_existance_585=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value725=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_582)), "./comelang.h", 1632, "bool"))));
    len_586=0;
    for(    it_589=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_589=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_592,0,sizeof(struct sGenericsFun*));
        it2_593=map$2charphsGenericsFunph_at(self,it_589,default_value_592);
        hash_596=string_get_hash_key(it_589)%size_582;
        n_597=hash_596;
        while((_Bool)1) {
            if(            item_existance_585[n_597]) {
                n_597++;
                if(                n_597>=size_582) {
                    n_597=0;
                }
                else if(                n_597==hash_596) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_585[n_597]=(_Bool)1;
                keys_583[n_597]=it_589;
                items_584[n_597]=map$2charphsGenericsFunph_at(self,it_589,default_value_598);
                len_586++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_583;
    self->items=items_584;
    self->item_existance=item_existance_585;
    self->size=size_582;
    self->len=len_586;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_587;
char* __result208__;
char* __result209__;
char* result_588;
char* __result210__;
result_587 = (void*)0;
result_588 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_587,0,sizeof(char*));
        __result208__ = gComeFunResultObject = __result_obj__ = result_587;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result209__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    memset(&result_588,0,sizeof(char*));
    __result210__ = gComeFunResultObject = __result_obj__ = result_588;
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_590;
char* __result211__;
char* __result212__;
char* result_591;
char* __result213__;
result_590 = (void*)0;
result_591 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_590,0,sizeof(char*));
        __result211__ = gComeFunResultObject = __result_obj__ = result_590;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result212__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    memset(&result_591,0,sizeof(char*));
    __result213__ = gComeFunResultObject = __result_obj__ = result_591;
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_594;
unsigned int it_595;
struct sGenericsFun* __result214__;
struct sGenericsFun* __result215__;
struct sGenericsFun* __result216__;
struct sGenericsFun* __result217__;
    hash_594=string_get_hash_key(((char*)key))%self->size;
    it_595=hash_594;
    while((_Bool)1) {
        if(        self->item_existance[it_595]) {
            if(            string_equals(self->keys[it_595],key)) {
                __result214__ = gComeFunResultObject = __result_obj__ = self->items[it_595];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result214__;
            }
            it_595++;
            if(            it_595>=self->size) {
                it_595=0;
            }
            else if(            it_595==hash_594) {
                __result215__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
        }
        else {
            __result216__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result216__;
        }
    }
    __result217__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result217__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_614;
int i_615;
char* __result221__;
char* default_value_616;
char* __result222__;
default_value_616 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_614=self->head;
    i_615=0;
    while(it_614!=((void*)0)) {
        if(        position==i_615) {
            __result221__ = gComeFunResultObject = __result_obj__ = it_614->item;
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
        it_614=it_614->next;
        i_615++;
    }
    memset(&default_value_616,0,sizeof(char*));
    __result222__ = gComeFunResultObject = __result_obj__ = default_value_616;
    default_value_616 = come_decrement_ref_count2(default_value_616, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_647;
char* __dec_obj256;
char* last_code2_648;
char* __dec_obj257;
char* last_code3_649;
_Bool comma_instead_of_semicolon_650;
char* __dec_obj258;
struct sClass* current_stack_frame_struct_651;
struct sFun* finalizer_652;
void* __right_value814 = (void*)0;
char* real_fun_name_653;
void* __right_value815 = (void*)0;
char* user_real_fun_name_654;
struct sFun* user_finalizer_655;
void* __right_value816 = (void*)0;
struct sType* type2_656;
struct sClass* klass_657;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* source_658;
struct list$1tuple2$2charphsTypephph* o2_saved_667;
struct tuple2$2charphsTypeph* it_670;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_673;
struct sType* field_type_674;
char* p_676;
int sline_677;
char* sname_678;
char* head_679;
struct buffer* source3_680;
struct buffer* __dec_obj266;
void* __right_value819 = (void*)0;
char* __dec_obj267;
void* __right_value820 = (void*)0;
struct sBlock* block_681;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sType* result_type_682;
void* __right_value823 = (void*)0;
char* name_683;
void* __right_value824 = (void*)0;
struct sType* self_type_684;
struct sType* __list_values21___685[1];
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1sTypeph* param_types_686;
void* __right_value827 = (void*)0;
char* __list_values22___687[1];
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct list$1charph* param_names_688;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct list$1charph* param_default_parametors_689;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* header_buf_690;
void* __right_value834 = (void*)0;
int i_691;
struct sType* param_type_692;
char* param_name_693;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sFun* fun_694;
void* __right_value840 = (void*)0;
struct sFun* fun2_695;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value847 = (void*)0;
struct sNode* node_696;
struct buffer* __dec_obj272;
char* __dec_obj273;
char* __dec_obj274;
char* __dec_obj275;
char* __dec_obj276;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct tuple2$2sFunpcharph* __result246__;
    last_code_647=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj256=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_648=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj257=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_649=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_650=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj258=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_651=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_652=((void*)0);
    real_fun_name_653=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_654=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_655=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_654);
    type2_656=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_656;
    klass_657=type->mClass;
    if(    type->mPointerNum>0&&klass_657->mStruct) {
        source_658=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2150, "buffer"))));
        buffer_append_char(source_658,123);
        if(        user_finalizer_655) {
            char source2_659[1024];
            memset(&source2_659, 0, sizeof(char)            *(1024)            );
            snprintf(source2_659,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_654);
            buffer_append_str(source_658,source2_659);
        }
        klass_657=map$2charphsClassphp_operator_load_element(info->classes,klass_657->mName);
        for(        o2_saved_667=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_657->mFields)),it_670=list$1tuple2$2charphsTypephph_begin((o2_saved_667));        !list$1tuple2$2charphsTypephph_end((o2_saved_667));        it_670=list$1tuple2$2charphsTypephph_next((o2_saved_667))        ){
            multiple_assign_var10=it_670;
            name_673=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_674=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_674->mClass->mName)&&type->mPointerNum==field_type_674->mPointerNum&&field_type_674->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_674->mHeap) {
                char source2_675[1024];
                memset(&source2_675, 0, sizeof(char)                *(1024)                );
                snprintf(source2_675,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_673,name_673,name_673,name_673);
                buffer_append_str(source_658,source2_675);
            }
            name_673 = come_decrement_ref_count2(name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_667,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_658,125);
        p_676=info->p;
        sline_677=info->sline;
        sname_678=(char*)come_increment_ref_count(info->sname);
        head_679=info->head;
        source3_680=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj266=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_658);
        come_call_finalizer3(__dec_obj266,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_658->buf;
        info->head=source_658->buf;
        __dec_obj267=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_653));
        /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_681=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_682=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2196, "sType")),"void",(_Bool)0,info));
        name_683=(char*)come_increment_ref_count(string_clone(real_fun_name_653));
        self_type_684=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_684->mHeap=(_Bool)0;
        if(        self_type_684->mPointerNum>1) {
            self_type_684->mPointerNum=1;
        }
        param_types_686=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___685[0]=come_increment_ref_count(self_type_684),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2203, "struct list$1sTypeph")),1,__list_values21___685)));
        param_names_688=(struct list$1charph*)come_increment_ref_count((__list_values22___687[0]=come_increment_ref_count(((char*)(__right_value827=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2204, "struct list$1charph")),1,__list_values22___687)));
        __right_value827 = come_decrement_ref_count2(__right_value827, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_689=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2205, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_689,((void*)0));
        header_buf_690=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2208, "buffer"))));
        buffer_append_str(header_buf_690,((char*)(__right_value834=make_come_type_name_string(result_type_682,info))));
        __right_value834 = come_decrement_ref_count2(__right_value834, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_690," ");
        buffer_append_str(header_buf_690,real_fun_name_653);
        buffer_append_str(header_buf_690,"(");
        for(        i_691=0;        i_691<list$1sTypeph_length(param_types_686);        i_691++        ){
            param_type_692=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_686,i_691), "05function.c", 2216, 5));
            param_name_693=((char*)come_null_check(list$1charphp_operator_load_element(param_names_688,i_691), "05function.c", 2217, 6));
            buffer_append_str(header_buf_690,((char*)(__right_value835=make_come_type_name_string(param_type_692,info))));
            __right_value835 = come_decrement_ref_count2(__right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_690," ");
            buffer_append_str(header_buf_690,param_name_693);
            if(            i_691!=list$1sTypeph_length(param_types_686)-1) {
                buffer_append_str(header_buf_690,",");
            }
        }
        buffer_append_str(header_buf_690,")");
        result_type_682->mStatic=(_Bool)0;
        fun_694=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2231, "sFun")),(char*)come_increment_ref_count(name_683),(struct sType*)come_increment_ref_count(result_type_682),(struct list$1sTypeph*)come_increment_ref_count(param_types_686),(struct list$1charph*)come_increment_ref_count(param_names_688),(struct list$1charph*)come_increment_ref_count(param_default_parametors_689),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_681),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_690)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_695=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value840=__builtin_string(fun_name))));
        __right_value840 = come_decrement_ref_count2(__right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_695==((void*)0)||fun2_695->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_683)),(struct sFun*)come_increment_ref_count(fun_694));
        }
        finalizer_652=fun_694;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2247, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value843=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2247, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_694),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_696=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value843,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_696,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj272=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_680);
        come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_676;
        info->head=head_679;
        info->sline=sline_677;
        __dec_obj273=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_678);
        /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_658,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_678 = come_decrement_ref_count2(sname_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_680,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_681,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_683 = come_decrement_ref_count2(name_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_684,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_686,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_688,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_690,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_694,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_696) { node_696 = come_decrement_ref_count2(node_696, ((struct sNode*)node_696)->finalize, ((struct sNode*)node_696)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_651;
    __dec_obj274=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_647);
    /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_648);
    /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj276=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_649);
    /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_650;
    __result246__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value849=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2268, "struct tuple2$2sFunpcharph")),finalizer_652,(char*)come_increment_ref_count(real_fun_name_653))));
    last_code_647 = come_decrement_ref_count2(last_code_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_648 = come_decrement_ref_count2(last_code2_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_649 = come_decrement_ref_count2(last_code3_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_653 = come_decrement_ref_count2(real_fun_name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_654 = come_decrement_ref_count2(user_real_fun_name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_656,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value849,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_660;
unsigned int hash_661;
unsigned int it_662;
struct sClass* __result233__;
struct sClass* __result234__;
struct sClass* __result235__;
struct sClass* __result236__;
default_value_660 = (void*)0;
    memset(&default_value_660,0,sizeof(struct sClass*));
    hash_661=string_get_hash_key(((char*)key))%self->size;
    it_662=hash_661;
    while((_Bool)1) {
        if(        self->item_existance[it_662]) {
            if(            string_equals(self->keys[it_662],key)) {
                __result233__ = gComeFunResultObject = __result_obj__ = self->items[it_662];
                /*i*/come_call_finalizer3(default_value_660,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result233__;
            }
            it_662++;
            if(            it_662>=self->size) {
                it_662=0;
            }
            else if(            it_662==hash_661) {
                __result234__ = gComeFunResultObject = __result_obj__ = default_value_660;
                /*i*/come_call_finalizer3(default_value_660,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
        }
        else {
            __result235__ = gComeFunResultObject = __result_obj__ = default_value_660;
            /*i*/come_call_finalizer3(default_value_660,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result235__;
        }
    }
    __result236__ = gComeFunResultObject = __result_obj__ = default_value_660;
    /*i*/come_call_finalizer3(default_value_660,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj259;
struct list$1tuple2$2charphsTypephph* __dec_obj260;
char* __dec_obj264;
char* __dec_obj265;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj259=self->mName;
            /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj260=self->mFields;
            come_call_finalizer3(__dec_obj260,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj264=self->mDeclareSName;
            /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj265=self->mParentClassName;
            /*G*/ __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_663;
struct list_item$1tuple2$2charphsTypephph* prev_it_664;
    it_663=self->head;
    while(it_663!=((void*)0)) {
        prev_it_664=it_663;
        it_663=it_663->next;
        /*i*/come_call_finalizer3(prev_it_664,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj261;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj261=self->item;
            come_call_finalizer3(__dec_obj261,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj262;
struct sType* __dec_obj263;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj262=self->v1;
            /*G*/ __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj263=self->v2;
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_665;
struct list_item$1tuple2$2charphsTypephph* prev_it_666;
    it_665=self->head;
    while(it_665!=((void*)0)) {
        prev_it_666=it_665;
        it_665=it_665->next;
        /*i*/come_call_finalizer3(prev_it_666,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_668;
struct tuple2$2charphsTypeph* __result237__;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* result_669;
struct tuple2$2charphsTypeph* __result239__;
result_668 = (void*)0;
result_669 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_668,0,sizeof(struct tuple2$2charphsTypeph*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_668;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->head;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_669,0,sizeof(struct tuple2$2charphsTypeph*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_669;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_671;
struct tuple2$2charphsTypeph* __result240__;
struct tuple2$2charphsTypeph* __result241__;
struct tuple2$2charphsTypeph* result_672;
struct tuple2$2charphsTypeph* __result242__;
result_671 = (void*)0;
result_672 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_671,0,sizeof(struct tuple2$2charphsTypeph*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_671;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_672,0,sizeof(struct tuple2$2charphsTypeph*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_672;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj277;
struct tuple2$2sFunpcharph* __result245__;
    self->v1=v1;
    __dec_obj277=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj278;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj278=self->v2;
            /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_698;
char* __dec_obj279;
char* last_code2_699;
char* __dec_obj280;
char* last_code3_700;
_Bool comma_instead_of_semicolon_701;
char* __dec_obj281;
struct sClass* current_stack_frame_struct_702;
struct sFun* finalizer_703;
void* __right_value850 = (void*)0;
char* real_fun_name_704;
void* __right_value851 = (void*)0;
struct sType* type2_705;
struct sClass* klass_706;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct buffer* source_707;
struct list$1tuple2$2charphsTypephph* o2_saved_708;
struct tuple2$2charphsTypeph* it_709;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_710;
struct sType* field_type_711;
char* p_713;
int sline_714;
char* sname_715;
char* head_716;
struct buffer* source3_717;
struct buffer* __dec_obj282;
void* __right_value854 = (void*)0;
char* __dec_obj283;
void* __right_value855 = (void*)0;
struct sBlock* block_718;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sType* result_type_719;
void* __right_value858 = (void*)0;
char* name_720;
void* __right_value859 = (void*)0;
struct sType* self_type_721;
struct sType* __list_values23___722[1];
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct list$1sTypeph* param_types_723;
void* __right_value862 = (void*)0;
char* __list_values24___724[1];
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1charph* param_names_725;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct list$1charph* param_default_parametors_726;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct buffer* header_buf_727;
void* __right_value869 = (void*)0;
int i_728;
struct sType* param_type_729;
char* param_name_730;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct sFun* fun_731;
void* __right_value875 = (void*)0;
struct sFun* fun2_732;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value882 = (void*)0;
struct sNode* node_733;
struct buffer* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct tuple2$2sFunpcharph* __result249__;
    last_code_698=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj279=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_699=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj280=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_700=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_701=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj281=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_702=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_703=((void*)0);
    real_fun_name_704=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_705=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_705;
    klass_706=type->mClass;
    if(    type->mPointerNum>0&&klass_706->mStruct) {
        source_707=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2297, "buffer"))));
        buffer_append_char(source_707,123);
        klass_706=map$2charphsClassphp_operator_load_element(info->classes,klass_706->mName);
        for(        o2_saved_708=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_706->mFields)),it_709=list$1tuple2$2charphsTypephph_begin((o2_saved_708));        !list$1tuple2$2charphsTypephph_end((o2_saved_708));        it_709=list$1tuple2$2charphsTypephph_next((o2_saved_708))        ){
            multiple_assign_var11=it_709;
            name_710=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_711=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_711->mClass->mName)&&type->mPointerNum==field_type_711->mPointerNum&&field_type_711->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_711->mHeap) {
                char source2_712[1024];
                memset(&source2_712, 0, sizeof(char)                *(1024)                );
                snprintf(source2_712,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_710,name_710,name_710,name_710);
                buffer_append_str(source_707,source2_712);
            }
            name_710 = come_decrement_ref_count2(name_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_708,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_707,125);
        p_713=info->p;
        sline_714=info->sline;
        sname_715=(char*)come_increment_ref_count(info->sname);
        head_716=info->head;
        source3_717=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj282=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_707);
        come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_707->buf;
        info->head=source_707->buf;
        __dec_obj283=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_704));
        /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_718=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_719=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2336, "sType")),"void",(_Bool)0,info));
        name_720=(char*)come_increment_ref_count(string_clone(real_fun_name_704));
        self_type_721=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_721->mHeap=(_Bool)0;
        if(        self_type_721->mPointerNum>1) {
            self_type_721->mPointerNum=1;
        }
        param_types_723=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___722[0]=come_increment_ref_count(self_type_721),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2343, "struct list$1sTypeph")),1,__list_values23___722)));
        param_names_725=(struct list$1charph*)come_increment_ref_count((__list_values24___724[0]=come_increment_ref_count(((char*)(__right_value862=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2344, "struct list$1charph")),1,__list_values24___724)));
        __right_value862 = come_decrement_ref_count2(__right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_726=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2345, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_726,((void*)0));
        header_buf_727=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2348, "buffer"))));
        buffer_append_str(header_buf_727,((char*)(__right_value869=make_come_type_name_string(result_type_719,info))));
        __right_value869 = come_decrement_ref_count2(__right_value869, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_727," ");
        buffer_append_str(header_buf_727,real_fun_name_704);
        buffer_append_str(header_buf_727,"(");
        for(        i_728=0;        i_728<list$1sTypeph_length(param_types_723);        i_728++        ){
            param_type_729=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_723,i_728), "05function.c", 2356, 7));
            param_name_730=((char*)come_null_check(list$1charphp_operator_load_element(param_names_725,i_728), "05function.c", 2357, 8));
            buffer_append_str(header_buf_727,((char*)(__right_value870=make_come_type_name_string(param_type_729,info))));
            __right_value870 = come_decrement_ref_count2(__right_value870, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_727," ");
            buffer_append_str(header_buf_727,param_name_730);
            if(            i_728!=list$1sTypeph_length(param_types_723)-1) {
                buffer_append_str(header_buf_727,",");
            }
        }
        buffer_append_str(header_buf_727,")");
        result_type_719->mStatic=(_Bool)0;
        fun_731=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2371, "sFun")),(char*)come_increment_ref_count(name_720),(struct sType*)come_increment_ref_count(result_type_719),(struct list$1sTypeph*)come_increment_ref_count(param_types_723),(struct list$1charph*)come_increment_ref_count(param_names_725),(struct list$1charph*)come_increment_ref_count(param_default_parametors_726),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_718),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_727)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_732=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value875=__builtin_string(fun_name))));
        __right_value875 = come_decrement_ref_count2(__right_value875, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_732==((void*)0)||fun2_732->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_720)),(struct sFun*)come_increment_ref_count(fun_731));
        }
        finalizer_703=fun_731;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2387, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value878=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2387, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_731),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_733=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value878,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_733,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj288=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_717);
        come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_713;
        info->head=head_716;
        info->sline=sline_714;
        __dec_obj289=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_715);
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_715 = come_decrement_ref_count2(sname_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_718,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_719,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_720 = come_decrement_ref_count2(name_720, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_721,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_723,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_725,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_727,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_731,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_733) { node_733 = come_decrement_ref_count2(node_733, ((struct sNode*)node_733)->finalize, ((struct sNode*)node_733)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_702;
    __dec_obj290=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_698);
    /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_699);
    /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_700);
    /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_701;
    __result249__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value884=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2408, "struct tuple2$2sFunpcharph")),finalizer_703,(char*)come_increment_ref_count(real_fun_name_704))));
    last_code_698 = come_decrement_ref_count2(last_code_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_699 = come_decrement_ref_count2(last_code2_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_700 = come_decrement_ref_count2(last_code3_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_704 = come_decrement_ref_count2(real_fun_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_705,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value884,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_735;
char* __dec_obj293;
char* last_code2_736;
char* __dec_obj294;
char* last_code3_737;
char* __dec_obj295;
_Bool comma_instead_of_semicolon_738;
struct sClass* current_stack_frame_struct_739;
struct sFun* equaler_740;
void* __right_value885 = (void*)0;
char* real_fun_name_741;
void* __right_value886 = (void*)0;
struct sType* type2_742;
struct sClass* klass_743;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct buffer* source_744;
char* name_745;
struct list$1tuple2$2charphsTypephph* o2_saved_748;
struct tuple2$2charphsTypeph* it_749;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_750;
struct sType* field_type_751;
char* p_753;
int sline_754;
char* sname_755;
char* head_756;
struct buffer* source3_757;
struct buffer* __dec_obj296;
void* __right_value889 = (void*)0;
char* __dec_obj297;
void* __right_value890 = (void*)0;
struct sBlock* block_758;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sType* result_type_759;
void* __right_value893 = (void*)0;
char* name_760;
void* __right_value894 = (void*)0;
struct sType* left_type_761;
void* __right_value895 = (void*)0;
struct sType* right_type_762;
struct sType* __list_values25___763[2];
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1sTypeph* param_types_764;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
char* __list_values26___765[2];
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1charph* param_names_766;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1charph* param_default_parametors_767;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct buffer* header_buf_768;
void* __right_value906 = (void*)0;
int i_769;
struct sType* param_type_770;
char* param_name_771;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sFun* fun_772;
void* __right_value912 = (void*)0;
struct sFun* fun2_773;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value919 = (void*)0;
struct sNode* node_774;
struct buffer* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct tuple2$2sFunpcharph* __result252__;
    last_code_735=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj293=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_736=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj294=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_737=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj295=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_738=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_739=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_740=((void*)0);
    real_fun_name_741=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_742=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_742;
    klass_743=type->mClass;
    if(    type->mPointerNum>0&&!klass_743->mNumber) {
        source_744=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2435, "buffer"))));
        buffer_append_char(source_744,123);
        if(        klass_743->mProtocol) {
            name_745="_protocol_obj";
            char source2_746[1024];
            memset(&source2_746, 0, sizeof(char)            *(1024)            );
            snprintf(source2_746,1024,"return left.%s.equals(right.%s);\n",name_745,name_745);
            buffer_append_str(source_744,source2_746);
        }
        else {
            char source2_747[1024];
            memset(&source2_747, 0, sizeof(char)            *(1024)            );
            snprintf(source2_747,1024,"if(right == wildcard) { return true; }\n");
            buffer_append_str(source_744,source2_747);
            klass_743=map$2charphsClassphp_operator_load_element(info->classes,klass_743->mName);
            for(            o2_saved_748=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_743->mFields)),it_749=list$1tuple2$2charphsTypephph_begin((o2_saved_748));            !list$1tuple2$2charphsTypephph_end((o2_saved_748));            it_749=list$1tuple2$2charphsTypephph_next((o2_saved_748))            ){
                multiple_assign_var12=it_749;
                name_750=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_751=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_751->mClass->mName)&&type->mPointerNum==field_type_751->mPointerNum&&field_type_751->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_752[1024];
                memset(&source2_752, 0, sizeof(char)                *(1024)                );
                snprintf(source2_752,1024,"if(right.%s != wildcard && !left.%s.equals(right.%s)) { return false; }\n",name_750,name_750,name_750);
                buffer_append_str(source_744,source2_752);
                name_750 = come_decrement_ref_count2(name_750, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_751,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_748,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_744,"return true;");
        buffer_append_char(source_744,125);
        p_753=info->p;
        sline_754=info->sline;
        sname_755=(char*)come_increment_ref_count(info->sname);
        head_756=info->head;
        source3_757=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj296=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_744);
        come_call_finalizer3(__dec_obj296,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_744->buf;
        info->head=source_744->buf;
        __dec_obj297=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_741));
        /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_758=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_759=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2485, "sType")),"bool",(_Bool)0,info));
        name_760=(char*)come_increment_ref_count(string_clone(real_fun_name_741));
        left_type_761=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_761->mHeap=(_Bool)0;
        right_type_762=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_762->mHeap=(_Bool)0;
        param_types_764=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___763[0]=come_increment_ref_count(left_type_761),
__list_values25___763[1]=come_increment_ref_count(right_type_762),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2491, "struct list$1sTypeph")),2,__list_values25___763)));
        param_names_766=(struct list$1charph*)come_increment_ref_count((__list_values26___765[0]=come_increment_ref_count(((char*)(__right_value898=__builtin_string("left")))),
__list_values26___765[1]=come_increment_ref_count(((char*)(__right_value899=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2492, "struct list$1charph")),2,__list_values26___765)));
        __right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value899 = come_decrement_ref_count2(__right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_767=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2493, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_767,((void*)0));
        list$1charph_push_back(param_default_parametors_767,((void*)0));
        header_buf_768=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2497, "buffer"))));
        buffer_append_str(header_buf_768,((char*)(__right_value906=make_come_type_name_string(result_type_759,info))));
        __right_value906 = come_decrement_ref_count2(__right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_768," ");
        buffer_append_str(header_buf_768,real_fun_name_741);
        buffer_append_str(header_buf_768,"(");
        for(        i_769=0;        i_769<list$1sTypeph_length(param_types_764);        i_769++        ){
            param_type_770=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_764,i_769), "05function.c", 2505, 9));
            param_name_771=((char*)come_null_check(list$1charphp_operator_load_element(param_names_766,i_769), "05function.c", 2506, 10));
            buffer_append_str(header_buf_768,((char*)(__right_value907=make_come_type_name_string(param_type_770,info))));
            __right_value907 = come_decrement_ref_count2(__right_value907, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_768," ");
            buffer_append_str(header_buf_768,param_name_771);
            if(            i_769!=list$1sTypeph_length(param_types_764)-1) {
                buffer_append_str(header_buf_768,",");
            }
        }
        buffer_append_str(header_buf_768,")");
        result_type_759->mStatic=(_Bool)0;
        fun_772=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2520, "sFun")),(char*)come_increment_ref_count(name_760),(struct sType*)come_increment_ref_count(result_type_759),(struct list$1sTypeph*)come_increment_ref_count(param_types_764),(struct list$1charph*)come_increment_ref_count(param_names_766),(struct list$1charph*)come_increment_ref_count(param_default_parametors_767),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_758),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_768)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_773=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value912=__builtin_string(fun_name))));
        __right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_773==((void*)0)||fun2_773->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_760)),(struct sFun*)come_increment_ref_count(fun_772));
        }
        equaler_740=fun_772;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2536, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value915=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2536, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_772),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_774=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value915,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_774,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_757);
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_753;
        info->head=head_756;
        info->sline=sline_754;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_755);
        /*G*/ __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_744,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_755 = come_decrement_ref_count2(sname_755, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_757,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_758,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_759,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_760 = come_decrement_ref_count2(name_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_761,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_762,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_764,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_766,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_767,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_768,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_772,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_774) { node_774 = come_decrement_ref_count2(node_774, ((struct sNode*)node_774)->finalize, ((struct sNode*)node_774)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_739;
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_735);
    /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_736);
    /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj306=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_737);
    /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_738;
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value921=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2557, "struct tuple2$2sFunpcharph")),equaler_740,(char*)come_increment_ref_count(real_fun_name_741))));
    last_code_735 = come_decrement_ref_count2(last_code_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_736 = come_decrement_ref_count2(last_code2_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_737 = come_decrement_ref_count2(last_code3_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_741 = come_decrement_ref_count2(real_fun_name_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_742,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value921,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_776;
char* __dec_obj307;
char* last_code2_777;
char* __dec_obj308;
char* last_code3_778;
char* __dec_obj309;
_Bool comma_instead_of_semicolon_779;
struct sClass* current_stack_frame_struct_780;
struct sFun* equaler_781;
void* __right_value922 = (void*)0;
char* real_fun_name_782;
void* __right_value923 = (void*)0;
struct sType* type2_783;
struct sClass* klass_784;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct buffer* source_785;
char* name_786;
int i_789;
struct list$1tuple2$2charphsTypephph* o2_saved_790;
struct tuple2$2charphsTypeph* it_791;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_792;
struct sType* field_type_793;
char* p_797;
int sline_798;
char* sname_799;
char* head_800;
struct buffer* source3_801;
struct buffer* __dec_obj310;
void* __right_value926 = (void*)0;
char* __dec_obj311;
void* __right_value927 = (void*)0;
struct sBlock* block_802;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sType* result_type_803;
void* __right_value930 = (void*)0;
char* name_804;
void* __right_value931 = (void*)0;
struct sType* left_type_805;
void* __right_value932 = (void*)0;
struct sType* right_type_806;
struct sType* __list_values27___807[2];
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct list$1sTypeph* param_types_808;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
char* __list_values28___809[2];
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1charph* param_names_810;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct list$1charph* param_default_parametors_811;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct buffer* header_buf_812;
void* __right_value943 = (void*)0;
int i_813;
struct sType* param_type_814;
char* param_name_815;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sFun* fun_816;
void* __right_value949 = (void*)0;
struct sFun* fun2_817;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value956 = (void*)0;
struct sNode* node_818;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct tuple2$2sFunpcharph* __result255__;
    last_code_776=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj307=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_777=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj308=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_778=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj309=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_779=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_780=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_781=((void*)0);
    real_fun_name_782=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_783=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_783;
    klass_784=type->mClass;
    if(    type->mPointerNum>0&&!klass_784->mNumber) {
        source_785=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2584, "buffer"))));
        buffer_append_char(source_785,123);
        if(        klass_784->mProtocol) {
            name_786="_protocol_obj";
            char source2_787[1024];
            memset(&source2_787, 0, sizeof(char)            *(1024)            );
            snprintf(source2_787,1024,"return !left.%s.equals(right.%s);\n",name_786,name_786);
            buffer_append_str(source_785,source2_787);
        }
        else {
            char source2_788[1024];
            memset(&source2_788, 0, sizeof(char)            *(1024)            );
            snprintf(source2_788,1024,"return (");
            buffer_append_str(source_785,source2_788);
            snprintf(source2_788,1024,"(right != wildcard) &&( ");
            buffer_append_str(source_785,source2_788);
            i_789=0;
            klass_784=map$2charphsClassphp_operator_load_element(info->classes,klass_784->mName);
            for(            o2_saved_790=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_784->mFields)),it_791=list$1tuple2$2charphsTypephph_begin((o2_saved_790));            !list$1tuple2$2charphsTypephph_end((o2_saved_790));            it_791=list$1tuple2$2charphsTypephph_next((o2_saved_790))            ){
                multiple_assign_var13=it_791;
                name_792=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_793=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_793->mClass->mName)&&type->mPointerNum==field_type_793->mPointerNum&&field_type_793->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_794[1024];
                memset(&source2_794, 0, sizeof(char)                *(1024)                );
                snprintf(source2_794,1024,"(right.%s != wildcard && !left.%s.equals(right.%s))",name_792,name_792,name_792);
                buffer_append_str(source_785,source2_794);
                if(                i_789==list$1tuple2$2charphsTypephph_length(klass_784->mFields)-1) {
                    char source2_795[1024];
                    memset(&source2_795, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_795,1024,"));");
                    buffer_append_str(source_785,source2_795);
                }
                else {
                    char source2_796[1024];
                    memset(&source2_796, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_796,1024," || ");
                    buffer_append_str(source_785,source2_796);
                }
                i_789++;
                name_792 = come_decrement_ref_count2(name_792, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_793,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_790,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_785,125);
        p_797=info->p;
        sline_798=info->sline;
        sname_799=(char*)come_increment_ref_count(info->sname);
        head_800=info->head;
        source3_801=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj310=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_785);
        come_call_finalizer3(__dec_obj310,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_785->buf;
        info->head=source_785->buf;
        __dec_obj311=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_782));
        /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_802=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_803=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2650, "sType")),"bool",(_Bool)0,info));
        name_804=(char*)come_increment_ref_count(string_clone(real_fun_name_782));
        left_type_805=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_805->mHeap=(_Bool)0;
        right_type_806=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_806->mHeap=(_Bool)0;
        param_types_808=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___807[0]=come_increment_ref_count(left_type_805),
__list_values27___807[1]=come_increment_ref_count(right_type_806),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2656, "struct list$1sTypeph")),2,__list_values27___807)));
        param_names_810=(struct list$1charph*)come_increment_ref_count((__list_values28___809[0]=come_increment_ref_count(((char*)(__right_value935=__builtin_string("left")))),
__list_values28___809[1]=come_increment_ref_count(((char*)(__right_value936=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2657, "struct list$1charph")),2,__list_values28___809)));
        __right_value935 = come_decrement_ref_count2(__right_value935, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value936 = come_decrement_ref_count2(__right_value936, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_811=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2658, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_811,((void*)0));
        list$1charph_push_back(param_default_parametors_811,((void*)0));
        header_buf_812=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2662, "buffer"))));
        buffer_append_str(header_buf_812,((char*)(__right_value943=make_come_type_name_string(result_type_803,info))));
        __right_value943 = come_decrement_ref_count2(__right_value943, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_812," ");
        buffer_append_str(header_buf_812,real_fun_name_782);
        buffer_append_str(header_buf_812,"(");
        for(        i_813=0;        i_813<list$1sTypeph_length(param_types_808);        i_813++        ){
            param_type_814=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_808,i_813), "05function.c", 2670, 11));
            param_name_815=((char*)come_null_check(list$1charphp_operator_load_element(param_names_810,i_813), "05function.c", 2671, 12));
            buffer_append_str(header_buf_812,((char*)(__right_value944=make_come_type_name_string(param_type_814,info))));
            __right_value944 = come_decrement_ref_count2(__right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_812," ");
            buffer_append_str(header_buf_812,param_name_815);
            if(            i_813!=list$1sTypeph_length(param_types_808)-1) {
                buffer_append_str(header_buf_812,",");
            }
        }
        buffer_append_str(header_buf_812,")");
        result_type_803->mStatic=(_Bool)0;
        fun_816=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2685, "sFun")),(char*)come_increment_ref_count(name_804),(struct sType*)come_increment_ref_count(result_type_803),(struct list$1sTypeph*)come_increment_ref_count(param_types_808),(struct list$1charph*)come_increment_ref_count(param_names_810),(struct list$1charph*)come_increment_ref_count(param_default_parametors_811),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_802),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_812)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_817=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value949=__builtin_string(fun_name))));
        __right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_817==((void*)0)||fun2_817->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_804)),(struct sFun*)come_increment_ref_count(fun_816));
        }
        equaler_781=fun_816;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2701, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value952=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2701, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_816),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_818=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value952,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_818,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_801);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_797;
        info->head=head_800;
        info->sline=sline_798;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_799);
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_785,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_799 = come_decrement_ref_count2(sname_799, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_801,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_802,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_803,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_804 = come_decrement_ref_count2(name_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_805,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_806,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_808,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_810,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_811,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_812,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_816,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_818) { node_818 = come_decrement_ref_count2(node_818, ((struct sNode*)node_818)->finalize, ((struct sNode*)node_818)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_780;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_776);
    /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_777);
    /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_778);
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_779;
    __result255__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value958=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2722, "struct tuple2$2sFunpcharph")),equaler_781,(char*)come_increment_ref_count(real_fun_name_782))));
    last_code_776 = come_decrement_ref_count2(last_code_776, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_777 = come_decrement_ref_count2(last_code2_777, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_778 = come_decrement_ref_count2(last_code3_778, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_782 = come_decrement_ref_count2(real_fun_name_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_783,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value958,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_820;
char* __dec_obj321;
char* last_code2_821;
char* __dec_obj322;
char* last_code3_822;
char* __dec_obj323;
_Bool comma_instead_of_semicolon_823;
struct sClass* current_stack_frame_struct_824;
struct sFun* equaler_825;
void* __right_value959 = (void*)0;
char* real_fun_name_826;
void* __right_value960 = (void*)0;
struct sType* type2_827;
struct sClass* klass_828;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct buffer* source_829;
char* name_830;
int i_833;
struct list$1tuple2$2charphsTypephph* o2_saved_834;
struct tuple2$2charphsTypeph* it_835;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_836;
struct sType* field_type_837;
char* p_841;
int sline_842;
char* sname_843;
char* head_844;
struct buffer* source3_845;
struct buffer* __dec_obj324;
void* __right_value963 = (void*)0;
char* __dec_obj325;
void* __right_value964 = (void*)0;
struct sBlock* block_846;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sType* result_type_847;
void* __right_value967 = (void*)0;
char* name_848;
void* __right_value968 = (void*)0;
struct sType* left_type_849;
void* __right_value969 = (void*)0;
struct sType* right_type_850;
struct sType* __list_values29___851[2];
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct list$1sTypeph* param_types_852;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
char* __list_values30___853[2];
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct list$1charph* param_names_854;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct list$1charph* param_default_parametors_855;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct buffer* header_buf_856;
void* __right_value980 = (void*)0;
int i_857;
struct sType* param_type_858;
char* param_name_859;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sFun* fun_860;
void* __right_value986 = (void*)0;
struct sFun* fun2_861;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value993 = (void*)0;
struct sNode* node_862;
struct buffer* __dec_obj330;
char* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct tuple2$2sFunpcharph* __result258__;
    last_code_820=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_821=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_822=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj323=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_823=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_824=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_825=((void*)0);
    real_fun_name_826=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_827=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_827;
    klass_828=type->mClass;
    if(    type->mPointerNum>0&&!klass_828->mNumber) {
        source_829=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2749, "buffer"))));
        buffer_append_char(source_829,123);
        if(        klass_828->mProtocol) {
            name_830="_protocol_obj";
            char source2_831[1024];
            memset(&source2_831, 0, sizeof(char)            *(1024)            );
            snprintf(source2_831,1024,"return !left.%s.equals(right.%s);\n",name_830,name_830);
            buffer_append_str(source_829,source2_831);
        }
        else {
            char source2_832[1024];
            memset(&source2_832, 0, sizeof(char)            *(1024)            );
            snprintf(source2_832,1024,"return (");
            buffer_append_str(source_829,source2_832);
            snprintf(source2_832,1024,"(right != wildcard) && ( ");
            buffer_append_str(source_829,source2_832);
            i_833=0;
            klass_828=map$2charphsClassphp_operator_load_element(info->classes,klass_828->mName);
            for(            o2_saved_834=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_828->mFields)),it_835=list$1tuple2$2charphsTypephph_begin((o2_saved_834));            !list$1tuple2$2charphsTypephph_end((o2_saved_834));            it_835=list$1tuple2$2charphsTypephph_next((o2_saved_834))            ){
                multiple_assign_var14=it_835;
                name_836=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_837=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_837->mClass->mName)&&type->mPointerNum==field_type_837->mPointerNum&&field_type_837->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_838[1024];
                memset(&source2_838, 0, sizeof(char)                *(1024)                );
                snprintf(source2_838,1024,"(right.%s != wildcard && !left.%s.equals(right.%s))",name_836,name_836,name_836);
                buffer_append_str(source_829,source2_838);
                if(                i_833==list$1tuple2$2charphsTypephph_length(klass_828->mFields)-1) {
                    char source2_839[1024];
                    memset(&source2_839, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_839,1024,"));");
                    buffer_append_str(source_829,source2_839);
                }
                else {
                    char source2_840[1024];
                    memset(&source2_840, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_840,1024," || ");
                    buffer_append_str(source_829,source2_840);
                }
                i_833++;
                name_836 = come_decrement_ref_count2(name_836, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_837,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_834,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_829,125);
        p_841=info->p;
        sline_842=info->sline;
        sname_843=(char*)come_increment_ref_count(info->sname);
        head_844=info->head;
        source3_845=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_829);
        come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_829->buf;
        info->head=source_829->buf;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_826));
        /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_846=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_847=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2815, "sType")),"bool",(_Bool)0,info));
        name_848=(char*)come_increment_ref_count(string_clone(real_fun_name_826));
        left_type_849=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_849->mHeap=(_Bool)0;
        right_type_850=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_850->mHeap=(_Bool)0;
        param_types_852=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___851[0]=come_increment_ref_count(left_type_849),
__list_values29___851[1]=come_increment_ref_count(right_type_850),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2821, "struct list$1sTypeph")),2,__list_values29___851)));
        param_names_854=(struct list$1charph*)come_increment_ref_count((__list_values30___853[0]=come_increment_ref_count(((char*)(__right_value972=__builtin_string("left")))),
__list_values30___853[1]=come_increment_ref_count(((char*)(__right_value973=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2822, "struct list$1charph")),2,__list_values30___853)));
        __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_855=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2823, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_855,((void*)0));
        list$1charph_push_back(param_default_parametors_855,((void*)0));
        header_buf_856=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2827, "buffer"))));
        buffer_append_str(header_buf_856,((char*)(__right_value980=make_come_type_name_string(result_type_847,info))));
        __right_value980 = come_decrement_ref_count2(__right_value980, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_856," ");
        buffer_append_str(header_buf_856,real_fun_name_826);
        buffer_append_str(header_buf_856,"(");
        for(        i_857=0;        i_857<list$1sTypeph_length(param_types_852);        i_857++        ){
            param_type_858=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_852,i_857), "05function.c", 2835, 13));
            param_name_859=((char*)come_null_check(list$1charphp_operator_load_element(param_names_854,i_857), "05function.c", 2836, 14));
            buffer_append_str(header_buf_856,((char*)(__right_value981=make_come_type_name_string(param_type_858,info))));
            __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_856," ");
            buffer_append_str(header_buf_856,param_name_859);
            if(            i_857!=list$1sTypeph_length(param_types_852)-1) {
                buffer_append_str(header_buf_856,",");
            }
        }
        buffer_append_str(header_buf_856,")");
        result_type_847->mStatic=(_Bool)0;
        fun_860=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2850, "sFun")),(char*)come_increment_ref_count(name_848),(struct sType*)come_increment_ref_count(result_type_847),(struct list$1sTypeph*)come_increment_ref_count(param_types_852),(struct list$1charph*)come_increment_ref_count(param_names_854),(struct list$1charph*)come_increment_ref_count(param_default_parametors_855),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_846),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_856)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_861=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value986=__builtin_string(fun_name))));
        __right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_861==((void*)0)||fun2_861->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_848)),(struct sFun*)come_increment_ref_count(fun_860));
        }
        equaler_825=fun_860;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2866, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value989=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2866, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_860),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_862=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value989,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_862,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj330=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_845);
        come_call_finalizer3(__dec_obj330,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_841;
        info->head=head_844;
        info->sline=sline_842;
        __dec_obj331=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_843);
        /*G*/ __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_829,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_843 = come_decrement_ref_count2(sname_843, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_845,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_846,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_847,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_848 = come_decrement_ref_count2(name_848, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_850,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_852,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_854,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_856,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_860,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_862) { node_862 = come_decrement_ref_count2(node_862, ((struct sNode*)node_862)->finalize, ((struct sNode*)node_862)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_824;
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_820);
    /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_821);
    /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj334=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_822);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_823;
    __result258__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value995=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2887, "struct tuple2$2sFunpcharph")),equaler_825,(char*)come_increment_ref_count(real_fun_name_826))));
    last_code_820 = come_decrement_ref_count2(last_code_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_821 = come_decrement_ref_count2(last_code2_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_822 = come_decrement_ref_count2(last_code3_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_826 = come_decrement_ref_count2(real_fun_name_826, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_827,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value995,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_864;
char* __dec_obj335;
char* last_code2_865;
char* __dec_obj336;
char* last_code3_866;
char* __dec_obj337;
_Bool comma_instead_of_semicolon_867;
struct sClass* current_stack_frame_struct_868;
struct sFun* equaler_869;
void* __right_value996 = (void*)0;
char* real_fun_name_870;
void* __right_value997 = (void*)0;
struct sType* type2_871;
struct sClass* klass_872;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct buffer* source_873;
char* name_874;
struct list$1tuple2$2charphsTypephph* o2_saved_877;
struct tuple2$2charphsTypeph* it_878;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_879;
struct sType* field_type_880;
char* p_882;
int sline_883;
char* sname_884;
char* head_885;
struct buffer* source3_886;
struct buffer* __dec_obj338;
void* __right_value1000 = (void*)0;
char* __dec_obj339;
void* __right_value1001 = (void*)0;
struct sBlock* block_887;
void* __right_value1002 = (void*)0;
void* __right_value1003 = (void*)0;
struct sType* result_type_888;
void* __right_value1004 = (void*)0;
char* name_889;
void* __right_value1005 = (void*)0;
struct sType* left_type_890;
void* __right_value1006 = (void*)0;
struct sType* right_type_891;
struct sType* __list_values31___892[2];
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct list$1sTypeph* param_types_893;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
char* __list_values32___894[2];
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct list$1charph* param_names_895;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct list$1charph* param_default_parametors_896;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct buffer* header_buf_897;
void* __right_value1017 = (void*)0;
int i_898;
struct sType* param_type_899;
char* param_name_900;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sFun* fun_901;
void* __right_value1023 = (void*)0;
struct sFun* fun2_902;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1030 = (void*)0;
struct sNode* node_903;
struct buffer* __dec_obj344;
char* __dec_obj345;
char* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct tuple2$2sFunpcharph* __result261__;
    last_code_864=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj335=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_865=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj336=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_866=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj337=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_867=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_868=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_869=((void*)0);
    real_fun_name_870=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_871=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_871;
    klass_872=type->mClass;
    if(    type->mPointerNum>0&&!klass_872->mNumber) {
        source_873=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2914, "buffer"))));
        buffer_append_char(source_873,123);
        if(        klass_872->mProtocol) {
            name_874="_protocol_obj";
            char source2_875[1024];
            memset(&source2_875, 0, sizeof(char)            *(1024)            );
            snprintf(source2_875,1024,"return left.%s.equals(right.%s);\n",name_874,name_874);
            buffer_append_str(source_873,source2_875);
        }
        else {
            char source2_876[1024];
            memset(&source2_876, 0, sizeof(char)            *(1024)            );
            snprintf(source2_876,1024,"if(right == wildcard) { return true; }\n");
            buffer_append_str(source_873,source2_876);
            klass_872=map$2charphsClassphp_operator_load_element(info->classes,klass_872->mName);
            for(            o2_saved_877=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_872->mFields)),it_878=list$1tuple2$2charphsTypephph_begin((o2_saved_877));            !list$1tuple2$2charphsTypephph_end((o2_saved_877));            it_878=list$1tuple2$2charphsTypephph_next((o2_saved_877))            ){
                multiple_assign_var15=it_878;
                name_879=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_880=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_880->mClass->mName)&&type->mPointerNum==field_type_880->mPointerNum&&field_type_880->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_881[1024];
                memset(&source2_881, 0, sizeof(char)                *(1024)                );
                snprintf(source2_881,1024,"if(right.%s != wildcard && !left.%s.equals(right.%s)) { return false; }\n",name_879,name_879,name_879);
                buffer_append_str(source_873,source2_881);
                name_879 = come_decrement_ref_count2(name_879, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_877,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_873,"return true;\n");
        buffer_append_char(source_873,125);
        p_882=info->p;
        sline_883=info->sline;
        sname_884=(char*)come_increment_ref_count(info->sname);
        head_885=info->head;
        source3_886=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_873);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_873->buf;
        info->head=source_873->buf;
        __dec_obj339=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_870));
        /*G*/ __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_887=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_888=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2964, "sType")),"bool",(_Bool)0,info));
        name_889=(char*)come_increment_ref_count(string_clone(real_fun_name_870));
        left_type_890=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_890->mHeap=(_Bool)0;
        right_type_891=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_891->mHeap=(_Bool)0;
        param_types_893=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___892[0]=come_increment_ref_count(left_type_890),
__list_values31___892[1]=come_increment_ref_count(right_type_891),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2970, "struct list$1sTypeph")),2,__list_values31___892)));
        param_names_895=(struct list$1charph*)come_increment_ref_count((__list_values32___894[0]=come_increment_ref_count(((char*)(__right_value1009=__builtin_string("left")))),
__list_values32___894[1]=come_increment_ref_count(((char*)(__right_value1010=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2971, "struct list$1charph")),2,__list_values32___894)));
        __right_value1009 = come_decrement_ref_count2(__right_value1009, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1010 = come_decrement_ref_count2(__right_value1010, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_896=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2972, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_896,((void*)0));
        list$1charph_push_back(param_default_parametors_896,((void*)0));
        header_buf_897=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2976, "buffer"))));
        buffer_append_str(header_buf_897,((char*)(__right_value1017=make_come_type_name_string(result_type_888,info))));
        __right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_897," ");
        buffer_append_str(header_buf_897,real_fun_name_870);
        buffer_append_str(header_buf_897,"(");
        for(        i_898=0;        i_898<list$1sTypeph_length(param_types_893);        i_898++        ){
            param_type_899=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_893,i_898), "05function.c", 2984, 15));
            param_name_900=((char*)come_null_check(list$1charphp_operator_load_element(param_names_895,i_898), "05function.c", 2985, 16));
            buffer_append_str(header_buf_897,((char*)(__right_value1018=make_come_type_name_string(param_type_899,info))));
            __right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_897," ");
            buffer_append_str(header_buf_897,param_name_900);
            if(            i_898!=list$1sTypeph_length(param_types_893)-1) {
                buffer_append_str(header_buf_897,",");
            }
        }
        buffer_append_str(header_buf_897,")");
        result_type_888->mStatic=(_Bool)0;
        fun_901=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2999, "sFun")),(char*)come_increment_ref_count(name_889),(struct sType*)come_increment_ref_count(result_type_888),(struct list$1sTypeph*)come_increment_ref_count(param_types_893),(struct list$1charph*)come_increment_ref_count(param_names_895),(struct list$1charph*)come_increment_ref_count(param_default_parametors_896),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_887),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_897)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_902=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1023=__builtin_string(fun_name))));
        __right_value1023 = come_decrement_ref_count2(__right_value1023, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_902==((void*)0)||fun2_902->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_889)),(struct sFun*)come_increment_ref_count(fun_901));
        }
        equaler_869=fun_901;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3015, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1026=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3015, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_901),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_903=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1026,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_903,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_886);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_882;
        info->head=head_885;
        info->sline=sline_883;
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_884);
        /*G*/ __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_873,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_884 = come_decrement_ref_count2(sname_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_886,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_887,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_888,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_889 = come_decrement_ref_count2(name_889, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_890,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_893,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_895,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_896,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_897,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_901,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_903) { node_903 = come_decrement_ref_count2(node_903, ((struct sNode*)node_903)->finalize, ((struct sNode*)node_903)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_868;
    __dec_obj346=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_864);
    /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj347=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_865);
    /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj348=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_866);
    /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_867;
    __result261__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1032=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3036, "struct tuple2$2sFunpcharph")),equaler_869,(char*)come_increment_ref_count(real_fun_name_870))));
    last_code_864 = come_decrement_ref_count2(last_code_864, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_865 = come_decrement_ref_count2(last_code2_865, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_866 = come_decrement_ref_count2(last_code3_866, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_870 = come_decrement_ref_count2(real_fun_name_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_871,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1032,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_905;
char* __dec_obj349;
char* last_code2_906;
char* __dec_obj350;
char* last_code3_907;
char* __dec_obj351;
_Bool comma_instead_of_semicolon_908;
struct sClass* current_stack_frame_struct_909;
struct sFun* cloner_910;
void* __right_value1033 = (void*)0;
char* real_fun_name_911;
void* __right_value1034 = (void*)0;
struct sType* type2_912;
struct sClass* klass_913;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct buffer* source_914;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
char* name_915;
struct list$1tuple2$2charphsTypephph* o2_saved_917;
struct tuple2$2charphsTypeph* it_918;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_919;
struct sType* field_type_920;
struct list$1tuple2$2charphsTypephph* o2_saved_923;
struct tuple2$2charphsTypeph* it_924;
struct tuple2$2charphsTypeph* multiple_assign_var17;
char* name_925;
struct sType* field_type_926;
void* __right_value1039 = (void*)0;
char* p_930;
int sline_931;
char* sname_932;
struct buffer* source3_933;
char* head_934;
struct buffer* __dec_obj352;
void* __right_value1040 = (void*)0;
char* __dec_obj353;
void* __right_value1041 = (void*)0;
struct sBlock* block_935;
void* __right_value1042 = (void*)0;
struct sType* result_type_936;
void* __right_value1043 = (void*)0;
char* name_937;
void* __right_value1044 = (void*)0;
struct sType* self_type_938;
struct sType* __list_values33___939[1];
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct list$1sTypeph* param_types_940;
void* __right_value1047 = (void*)0;
char* __list_values34___941[1];
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct list$1charph* param_names_942;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct list$1charph* param_default_parametors_943;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct buffer* header_buf_944;
void* __right_value1054 = (void*)0;
int i_945;
struct sType* param_type_946;
char* param_name_947;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct sFun* fun_948;
void* __right_value1060 = (void*)0;
struct sFun* fun2_949;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1067 = (void*)0;
struct sNode* node_950;
char* __dec_obj358;
struct buffer* __dec_obj359;
char* __dec_obj360;
char* __dec_obj361;
char* __dec_obj362;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
struct tuple2$2sFunpcharph* __result264__;
    last_code_905=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj349=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_906=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj350=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_907=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj351=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_908=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_909=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_910=((void*)0);
    real_fun_name_911=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_912=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_912;
    klass_913=type->mClass;
    if(    type->mPointerNum>0&&!klass_913->mNumber) {
        source_914=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3063, "buffer"))));
        buffer_append_str(source_914,"{\n");
        buffer_append_str(source_914,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_914,((char*)(__right_value1038=xsprintf("var result = new %s;\n",((char*)(__right_value1037=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value1037 = come_decrement_ref_count2(__right_value1037, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1038 = come_decrement_ref_count2(__right_value1038, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_913->mProtocol) {
            name_915="_protocol_obj";
            char source2_916[1024];
            memset(&source2_916, 0, sizeof(char)            *(1024)            );
            snprintf(source2_916,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_914,source2_916);
            klass_913=map$2charphsClassphp_operator_load_element(info->classes,klass_913->mName);
            for(            o2_saved_917=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_913->mFields)),it_918=list$1tuple2$2charphsTypephph_begin((o2_saved_917));            !list$1tuple2$2charphsTypephph_end((o2_saved_917));            it_918=list$1tuple2$2charphsTypephph_next((o2_saved_917))            ){
                multiple_assign_var16=it_918;
                name_919=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_920=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_920->mClass->mName)&&type->mPointerNum==field_type_920->mPointerNum&&field_type_920->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_919,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_920->mArrayNum)>0) {
                    char source2_921[1024];
                    memset(&source2_921, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_921,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_919,name_919,name_919);
                    buffer_append_str(source_914,source2_921);
                }
                else {
                    char source2_922[1024];
                    memset(&source2_922, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_922,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_919,name_919);
                    buffer_append_str(source_914,source2_922);
                }
                name_919 = come_decrement_ref_count2(name_919, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_920,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_917,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_913=map$2charphsClassphp_operator_load_element(info->classes,klass_913->mName);
            for(            o2_saved_923=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_913->mFields)),it_924=list$1tuple2$2charphsTypephph_begin((o2_saved_923));            !list$1tuple2$2charphsTypephph_end((o2_saved_923));            it_924=list$1tuple2$2charphsTypephph_next((o2_saved_923))            ){
                multiple_assign_var17=it_924;
                name_925=(char*)come_increment_ref_count(multiple_assign_var17->v1);
                field_type_926=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_926->mClass->mName)&&type->mPointerNum==field_type_926->mPointerNum&&field_type_926->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_926->mHeap) {
                    char source2_927[1024];
                    memset(&source2_927, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_927,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_925,name_925,name_925);
                    buffer_append_str(source_914,source2_927);
                }
                else if(                list$1sNodeph_length(field_type_926->mArrayNum)>0) {
                    char source2_928[1024];
                    memset(&source2_928, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_928,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_925,name_925,name_925);
                    buffer_append_str(source_914,source2_928);
                }
                else {
                    char source2_929[1024];
                    memset(&source2_929, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_929,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_925,name_925);
                    buffer_append_str(source_914,source2_929);
                }
                name_925 = come_decrement_ref_count2(name_925, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_926,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_923,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_914,((char*)(__right_value1039=xsprintf("return result;"))));
        __right_value1039 = come_decrement_ref_count2(__right_value1039, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_914,125);
        p_930=info->p;
        sline_931=info->sline;
        sname_932=(char*)come_increment_ref_count(info->sname);
        source3_933=(struct buffer*)come_increment_ref_count(info->source);
        head_934=info->head;
        __dec_obj352=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_914);
        come_call_finalizer3(__dec_obj352,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj353=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_911));
        /*G*/ __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_935=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_936=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_937=(char*)come_increment_ref_count(string_clone(real_fun_name_911));
        self_type_938=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_938->mHeap=(_Bool)0;
        param_types_940=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___939[0]=come_increment_ref_count(self_type_938),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3157, "struct list$1sTypeph")),1,__list_values33___939)));
        param_names_942=(struct list$1charph*)come_increment_ref_count((__list_values34___941[0]=come_increment_ref_count(((char*)(__right_value1047=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3158, "struct list$1charph")),1,__list_values34___941)));
        __right_value1047 = come_decrement_ref_count2(__right_value1047, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_943=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3159, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_943,((void*)0));
        header_buf_944=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3162, "buffer"))));
        buffer_append_str(header_buf_944,((char*)(__right_value1054=make_come_type_name_string(result_type_936,info))));
        __right_value1054 = come_decrement_ref_count2(__right_value1054, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_944," ");
        buffer_append_str(header_buf_944,real_fun_name_911);
        buffer_append_str(header_buf_944,"(");
        for(        i_945=0;        i_945<list$1sTypeph_length(param_types_940);        i_945++        ){
            param_type_946=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_940,i_945), "05function.c", 3170, 17));
            param_name_947=((char*)come_null_check(list$1charphp_operator_load_element(param_names_942,i_945), "05function.c", 3171, 18));
            buffer_append_str(header_buf_944,((char*)(__right_value1055=make_come_type_name_string(param_type_946,info))));
            __right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_944," ");
            buffer_append_str(header_buf_944,param_name_947);
            if(            i_945!=list$1sTypeph_length(param_types_940)-1) {
                buffer_append_str(header_buf_944,",");
            }
        }
        buffer_append_str(header_buf_944,")");
        result_type_936->mStatic=(_Bool)0;
        fun_948=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3185, "sFun")),(char*)come_increment_ref_count(name_937),(struct sType*)come_increment_ref_count(result_type_936),(struct list$1sTypeph*)come_increment_ref_count(param_types_940),(struct list$1charph*)come_increment_ref_count(param_names_942),(struct list$1charph*)come_increment_ref_count(param_default_parametors_943),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_935),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_944)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_948->mCloner=(_Bool)1;
        fun2_949=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1060=__builtin_string(fun_name))));
        __right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_949==((void*)0)||fun2_949->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_937)),(struct sFun*)come_increment_ref_count(fun_948));
        }
        cloner_910=fun_948;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3202, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sFunNode*)(__right_value1063=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3202, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_948),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_950=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1063,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_950,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj358=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_932);
        /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_931;
        __dec_obj359=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_933);
        come_call_finalizer3(__dec_obj359,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_930;
        info->head=head_934;
        info->sline=sline_931;
        /*i*/come_call_finalizer3(source_914,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_932 = come_decrement_ref_count2(sname_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_933,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_935,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_937 = come_decrement_ref_count2(name_937, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_938,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_940,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_942,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_943,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_944,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_948,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_950) { node_950 = come_decrement_ref_count2(node_950, ((struct sNode*)node_950)->finalize, ((struct sNode*)node_950)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_909;
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_905);
    /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_906);
    /*G*/ __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj362=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_907);
    /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_908;
    __result264__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1069=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3225, "struct tuple2$2sFunpcharph")),cloner_910,(char*)come_increment_ref_count(real_fun_name_911))));
    last_code_905 = come_decrement_ref_count2(last_code_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_906 = come_decrement_ref_count2(last_code2_906, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_907 = come_decrement_ref_count2(last_code3_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_911 = come_decrement_ref_count2(real_fun_name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_912,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1069,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_952;
char* __dec_obj363;
char* last_code2_953;
char* __dec_obj364;
char* last_code3_954;
char* __dec_obj365;
_Bool comma_instead_of_semicolon_955;
struct sClass* current_stack_frame_struct_956;
struct sFun* cloner_957;
void* __right_value1070 = (void*)0;
char* real_fun_name_958;
void* __right_value1071 = (void*)0;
struct sType* type2_959;
struct sClass* klass_960;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct buffer* source_961;
void* __right_value1074 = (void*)0;
int i_962;
struct list$1tuple2$2charphsTypephph* o2_saved_963;
struct tuple2$2charphsTypeph* it_964;
struct tuple2$2charphsTypeph* multiple_assign_var18;
char* name_965;
struct sType* field_type_966;
void* __right_value1075 = (void*)0;
char* p_969;
int sline_970;
char* sname_971;
struct buffer* source3_972;
char* head_973;
struct buffer* __dec_obj366;
void* __right_value1076 = (void*)0;
char* __dec_obj367;
void* __right_value1077 = (void*)0;
struct sBlock* block_974;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct sType* result_type_975;
void* __right_value1080 = (void*)0;
char* name_976;
void* __right_value1081 = (void*)0;
struct sType* self_type_977;
struct sType* __list_values35___978[1];
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
struct list$1sTypeph* param_types_979;
void* __right_value1084 = (void*)0;
char* __list_values36___980[1];
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct list$1charph* param_names_981;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
struct list$1charph* param_default_parametors_982;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct buffer* header_buf_983;
void* __right_value1091 = (void*)0;
int i_984;
struct sType* param_type_985;
char* param_name_986;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sFun* fun_987;
void* __right_value1097 = (void*)0;
struct sFun* fun2_988;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
struct sNode* _inf_value16;
struct sFunNode* _inf_obj_value16;
void* __right_value1104 = (void*)0;
struct sNode* node_989;
char* __dec_obj372;
struct buffer* __dec_obj373;
char* __dec_obj374;
char* __dec_obj375;
char* __dec_obj376;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
struct tuple2$2sFunpcharph* __result267__;
    last_code_952=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj363=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_953=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj364=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_954=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj365=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_955=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_956=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_957=((void*)0);
    real_fun_name_958=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_959=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_959;
    klass_960=type->mClass;
    if(    type->mPointerNum>0&&!klass_960->mNumber) {
        source_961=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3252, "buffer"))));
        buffer_append_str(source_961,"{\n");
        buffer_append_str(source_961,"var result = new buffer();\n");
        buffer_append_str(source_961,((char*)(__right_value1074=xsprintf("result.append_str(\"%s {\");\n",klass_960->mName))));
        __right_value1074 = come_decrement_ref_count2(__right_value1074, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_962=0;
        klass_960=map$2charphsClassphp_operator_load_element(info->classes,klass_960->mName);
        for(        o2_saved_963=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_960->mFields)),it_964=list$1tuple2$2charphsTypephph_begin((o2_saved_963));        !list$1tuple2$2charphsTypephph_end((o2_saved_963));        it_964=list$1tuple2$2charphsTypephph_next((o2_saved_963))        ){
            multiple_assign_var18=it_964;
            name_965=(char*)come_increment_ref_count(multiple_assign_var18->v1);
            field_type_966=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_966->mClass->mName)&&type->mPointerNum==field_type_966->mPointerNum&&field_type_966->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_962==list$1tuple2$2charphsTypephph_length(klass_960->mFields)-1) {
                char source2_967[1024];
                memset(&source2_967, 0, sizeof(char)                *(1024)                );
                snprintf(source2_967,1024,"result.append_str(\"%s:\");\n",name_965);
                buffer_append_str(source_961,source2_967);
                snprintf(source2_967,1024,"result.append_str(self.%s.to_string());\n",name_965);
                buffer_append_str(source_961,source2_967);
            }
            else {
                char source2_968[1024];
                memset(&source2_968, 0, sizeof(char)                *(1024)                );
                snprintf(source2_968,1024,"result.append_str(\"%s:\");\n",name_965);
                buffer_append_str(source_961,source2_968);
                snprintf(source2_968,1024,"result.append_str(self.%s.to_string());\n",name_965);
                buffer_append_str(source_961,source2_968);
                snprintf(source2_968,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_961,source2_968);
            }
            i_962++;
            name_965 = come_decrement_ref_count2(name_965, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_966,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_963,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_961,"result.append_str(\"}\");\n");
        buffer_append_str(source_961,((char*)(__right_value1075=xsprintf("return result.to_string();\n"))));
        __right_value1075 = come_decrement_ref_count2(__right_value1075, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_961,125);
        p_969=info->p;
        sline_970=info->sline;
        sname_971=(char*)come_increment_ref_count(info->sname);
        source3_972=(struct buffer*)come_increment_ref_count(info->source);
        head_973=info->head;
        __dec_obj366=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_961);
        come_call_finalizer3(__dec_obj366,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj367=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_958));
        /*G*/ __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_974=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_975=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3319, "sType")),"char*",(_Bool)0,info));
        result_type_975->mHeap=(_Bool)1;
        name_976=(char*)come_increment_ref_count(string_clone(real_fun_name_958));
        self_type_977=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_977->mHeap=(_Bool)0;
        param_types_979=(struct list$1sTypeph*)come_increment_ref_count((__list_values35___978[0]=come_increment_ref_count(self_type_977),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3324, "struct list$1sTypeph")),1,__list_values35___978)));
        param_names_981=(struct list$1charph*)come_increment_ref_count((__list_values36___980[0]=come_increment_ref_count(((char*)(__right_value1084=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3325, "struct list$1charph")),1,__list_values36___980)));
        __right_value1084 = come_decrement_ref_count2(__right_value1084, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_982=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3326, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_982,((void*)0));
        header_buf_983=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3329, "buffer"))));
        buffer_append_str(header_buf_983,((char*)(__right_value1091=make_come_type_name_string(result_type_975,info))));
        __right_value1091 = come_decrement_ref_count2(__right_value1091, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_983," ");
        buffer_append_str(header_buf_983,real_fun_name_958);
        buffer_append_str(header_buf_983,"(");
        for(        i_984=0;        i_984<list$1sTypeph_length(param_types_979);        i_984++        ){
            param_type_985=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_979,i_984), "05function.c", 3337, 19));
            param_name_986=((char*)come_null_check(list$1charphp_operator_load_element(param_names_981,i_984), "05function.c", 3338, 20));
            buffer_append_str(header_buf_983,((char*)(__right_value1092=make_come_type_name_string(param_type_985,info))));
            __right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_983," ");
            buffer_append_str(header_buf_983,param_name_986);
            if(            i_984!=list$1sTypeph_length(param_types_979)-1) {
                buffer_append_str(header_buf_983,",");
            }
        }
        buffer_append_str(header_buf_983,")");
        result_type_975->mStatic=(_Bool)0;
        fun_987=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3352, "sFun")),(char*)come_increment_ref_count(name_976),(struct sType*)come_increment_ref_count(result_type_975),(struct list$1sTypeph*)come_increment_ref_count(param_types_979),(struct list$1charph*)come_increment_ref_count(param_names_981),(struct list$1charph*)come_increment_ref_count(param_default_parametors_982),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_974),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_983)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_987->mCloner=(_Bool)1;
        fun2_988=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1097=__builtin_string(fun_name))));
        __right_value1097 = come_decrement_ref_count2(__right_value1097, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_988==((void*)0)||fun2_988->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_976)),(struct sFun*)come_increment_ref_count(fun_987));
        }
        cloner_957=fun_987;
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3369, "struct sNode");
        _inf_obj_value16=come_increment_ref_count(((struct sFunNode*)(__right_value1100=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3369, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_987),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sFunNode_finalize;
        _inf_value16->clone=(void*)sFunNode_clone;
        _inf_value16->compile=(void*)sFunNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sFunNode_kind;
        node_989=(struct sNode*)come_increment_ref_count(_inf_value16);
        /*g*/come_call_finalizer3(__right_value1100,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_989,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj372=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_971);
        /*G*/ __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_970;
        __dec_obj373=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_972);
        come_call_finalizer3(__dec_obj373,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_969;
        info->head=head_973;
        info->sline=sline_970;
        /*i*/come_call_finalizer3(source_961,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_971 = come_decrement_ref_count2(sname_971, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_972,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_974,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_975,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_976 = come_decrement_ref_count2(name_976, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_977,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_979,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_981,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_982,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_983,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_987,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_989) { node_989 = come_decrement_ref_count2(node_989, ((struct sNode*)node_989)->finalize, ((struct sNode*)node_989)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_956;
    __dec_obj374=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_952);
    /*G*/ __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj375=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_953);
    /*G*/ __dec_obj375 = come_decrement_ref_count2(__dec_obj375, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj376=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_954);
    /*G*/ __dec_obj376 = come_decrement_ref_count2(__dec_obj376, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_955;
    __result267__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1106=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3392, "struct tuple2$2sFunpcharph")),cloner_957,(char*)come_increment_ref_count(real_fun_name_958))));
    last_code_952 = come_decrement_ref_count2(last_code_952, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_953 = come_decrement_ref_count2(last_code2_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_954 = come_decrement_ref_count2(last_code3_954, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_958 = come_decrement_ref_count2(real_fun_name_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_959,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1106,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj368;
struct sFun* __dec_obj369;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj368=self->sname;
            /*G*/ __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj369=self->mFun;
            come_call_finalizer3(__dec_obj369,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result265__;
void* __right_value1101 = (void*)0;
struct sFunNode* result_990;
void* __right_value1102 = (void*)0;
char* __dec_obj370;
void* __right_value1103 = (void*)0;
struct sFun* __dec_obj371;
struct sFunNode* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_990=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_990->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj370=result_990->sname;
        result_990->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj371=result_990->mFun;
        result_990->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj371,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_990;
    /*i*/come_call_finalizer3(result_990,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

