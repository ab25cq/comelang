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
_Bool size_t_equals(long self, long right);
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
_Bool integer_equals(struct integer* self, struct integer* right);
int integer_compare(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
struct integer* integer_operator_add(struct integer* left, struct integer* right);
struct integer* integer_operator_sub(struct integer* left, struct integer* right);
struct integer* integer_operator_mult(struct integer* left, struct integer* right);
struct integer* integer_operator_div(struct integer* left, struct integer* right);
struct integer* integer_operator_mod(struct integer* left, struct integer* right);
struct integer* integer_operator_lshift(struct integer* left, struct integer* right);
struct integer* integer_operator_rshift(struct integer* left, struct integer* right);
struct integer* integer_operator_gteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lteq(struct integer* left, struct integer* right);
struct integer* integer_operator_lt(struct integer* left, struct integer* right);
struct integer* integer_operator_gt(struct integer* left, struct integer* right);
struct integer* integer_operator_and(struct integer* left, struct integer* right);
struct integer* integer_operator_xor(struct integer* left, struct integer* right);
struct integer* integer_operator_or(struct integer* left, struct integer* right);
struct integer* integer_operator_andand(struct integer* left, struct integer* right);
struct integer* integer_operator_oror(struct integer* left, struct integer* right);
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
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2205, "buffer"))));
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
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2212, "buffer"))));
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
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2221, "buffer"))));
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
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2228, "buffer"))));
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
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2235, "buffer"))));
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
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2242, "buffer"))));
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
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2249, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2549, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2554, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2559, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2564, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2569, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2602, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2604, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
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
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2609, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2611, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
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
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2616, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2618, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
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
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2623, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2625, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
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
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2630, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2632, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
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
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2637, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2639, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
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
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2644, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2646, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
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
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2651, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2656, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2661, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2666, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2671, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2676, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2681, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2686, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2691, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2696, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2701, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2706, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2711, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2716, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long unsigned  int charpa_length(char* self, unsigned long unsigned  int len){
    return len;
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
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 221, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 231, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 241, "list_item$1char"))));
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
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 221, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 231, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 241, "list_item$1charp"))));
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
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 221, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 231, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 241, "list_item$1short"))));
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
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 221, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 231, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 241, "list_item$1int"))));
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
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 221, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 231, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 241, "list_item$1long"))));
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
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 221, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 231, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 241, "list_item$1float"))));
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
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 221, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 231, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 241, "list_item$1double"))));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 999, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 999, "char*")));
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
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 999, "short")));
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 999, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 999, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 999, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 999, "double")));
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
struct sFun* come_fun_64;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
struct sType* result_type_65;
void* __right_value122 = (void*)0;
int block_level_66;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct CVALUE* come_value_67;
void* __right_value125 = (void*)0;
char* __dec_obj18;
void* __right_value161 = (void*)0;
struct sType* __dec_obj63;
_Bool __result88__;
    come_fun_64=info->come_fun;
    info->come_fun=self->mFun;
    result_type_65=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "sType")),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_65,"__result_obj__",(_Bool)0,info))));
        __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_66=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_66;
    come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    /*G*/ __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_67->var=((void*)0);
    add_come_last_code(info,"%s",come_value_67->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    info->come_fun=come_fun_64;
    __result88__ = (_Bool)1;
    /*i*/come_call_finalizer3(result_type_65,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_67,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result88__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result69__;
void* __right_value126 = (void*)0;
struct sType* result_68;
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
    result_68=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_68->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_68->mNoSolvedGenericsType;
        result_68->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_68->mOriginalLoadVarType;
        result_68->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj43=result_68->mNoExceptionType;
        result_68->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj44=result_68->mGenericsName;
        result_68->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj48=result_68->mGenericsTypes;
        result_68->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj52=result_68->mArrayNum;
        result_68->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj53=result_68->mParamTypes;
        result_68->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj57=result_68->mParamNames;
        result_68->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj57,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj58=result_68->mResultType;
        result_68->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_68->mAlignas;
        result_68->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_68->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_68->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_68->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_68->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_68->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_68->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_68->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_68->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_68->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_68->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_68->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_68->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_68->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_68->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_68->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_68->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_68->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_68->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_68->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_68->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_68->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj60=result_68->mSizeNum;
        result_68->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_68->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_68->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_68->mOriginalTypeName;
        result_68->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_68->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_68->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_68->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_68->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_68->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_68->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_68->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_68->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_68->mAsmName;
        result_68->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_68->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_68->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_68->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_68->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_68->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_68->mOriginIsArray=self->mOriginIsArray;
    }
    __result86__ = gComeFunResultObject = __result_obj__ = result_68;
    /*i*/come_call_finalizer3(result_68,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result70__;
void* __right_value127 = (void*)0;
struct tuple1$1sTypeph* result_69;
void* __right_value128 = (void*)0;
struct sType* __dec_obj19;
struct tuple1$1sTypeph* __result71__;
    if(    self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_69=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_69->v1;
        result_69->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_69;
    /*i*/come_call_finalizer3(result_69,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sTypeph* it_70;
struct list_item$1sTypeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_72;
struct list_item$1sTypeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_74;
struct list_item$1sNodeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_76;
struct list_item$1sNodeph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_78;
struct list_item$1charph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_80;
struct list_item$1charph* prev_it_81;
    it_80=self->head;
    while(it_80!=((void*)0)) {
        prev_it_81=it_80;
        it_80=it_80->next;
        /*i*/come_call_finalizer3(prev_it_81,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1sTypeph* result_82;
struct list_item$1sTypeph* it_83;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __result75__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_82=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 137, "list$1sTypeph"))));
    it_83=self->head;
    while(it_83!=((void*)0)) {
        list$1sTypeph_add(result_82,(struct sType*)come_increment_ref_count(sType_clone(it_83->item)));
        it_83=it_83->next;
    }
    __result75__ = gComeFunResultObject = __result_obj__ = result_82;
    /*i*/come_call_finalizer3(result_82,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj45;
void* __right_value136 = (void*)0;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj46;
void* __right_value137 = (void*)0;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj47;
struct list$1sTypeph* __result74__;
    if(    self->len==0) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 151, "list_item$1sTypeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj45=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else if(    self->len==1) {
        litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 161, "list_item$1sTypeph"))));
        litem_85->prev=self->head;
        litem_85->next=((void*)0);
        __dec_obj46=litem_85->item;
        litem_85->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_85;
        self->head->next=litem_85;
    }
    else {
        litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 171, "list_item$1sTypeph"))));
        litem_86->prev=self->tail;
        litem_86->next=((void*)0);
        __dec_obj47=litem_86->item;
        litem_86->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_86;
        self->tail=litem_86;
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
struct list$1sNodeph* result_87;
struct list_item$1sNodeph* it_88;
void* __right_value146 = (void*)0;
struct list$1sNodeph* __result81__;
    if(    self==((void*)0)) {
        __result76__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_87=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 137, "list$1sNodeph"))));
    it_88=self->head;
    while(it_88!=((void*)0)) {
        list$1sNodeph_add(result_87,(struct sNode*)come_increment_ref_count(sNode_clone(it_88->item)));
        it_88=it_88->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_87;
    /*i*/come_call_finalizer3(result_87,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj49;
void* __right_value143 = (void*)0;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj50;
void* __right_value144 = (void*)0;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj51;
struct list$1sNodeph* __result78__;
    if(    self->len==0) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 151, "list_item$1sNodeph"))));
        litem_89->prev=((void*)0);
        litem_89->next=((void*)0);
        __dec_obj49=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_89;
        self->head=litem_89;
    }
    else if(    self->len==1) {
        litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 161, "list_item$1sNodeph"))));
        litem_90->prev=self->head;
        litem_90->next=((void*)0);
        __dec_obj50=litem_90->item;
        litem_90->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_90;
        self->head->next=litem_90;
    }
    else {
        litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 171, "list_item$1sNodeph"))));
        litem_91->prev=self->tail;
        litem_91->next=((void*)0);
        __dec_obj51=litem_91->item;
        litem_91->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_91;
        self->tail=litem_91;
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
struct sNode* result_92;
struct sNode* __result80__;
    if(    self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_92=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_92->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_92->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_92->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_92->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_92->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_92->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_92->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_92->kind=self->kind;
    }
    __result80__ = gComeFunResultObject = __result_obj__ = result_92;
    if(result_92) { result_92 = come_decrement_ref_count2(result_92, ((struct sNode*)result_92)->finalize, ((struct sNode*)result_92)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result82__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1charph* result_93;
struct list_item$1charph* it_94;
void* __right_value154 = (void*)0;
struct list$1charph* __result85__;
    if(    self==((void*)0)) {
        __result82__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result82__;
    }
    result_93=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 137, "list$1charph"))));
    it_94=self->head;
    while(it_94!=((void*)0)) {
        list$1charph_add(result_93,(char*)come_increment_ref_count(string_clone(it_94->item)));
        it_94=it_94->next;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_93;
    /*i*/come_call_finalizer3(result_93,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1charph* litem_95;
char* __dec_obj54;
void* __right_value152 = (void*)0;
struct list_item$1charph* litem_96;
char* __dec_obj55;
void* __right_value153 = (void*)0;
struct list_item$1charph* litem_97;
char* __dec_obj56;
struct list$1charph* __result84__;
    if(    self->len==0) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 151, "list_item$1charph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj54=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else if(    self->len==1) {
        litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 161, "list_item$1charph"))));
        litem_96->prev=self->head;
        litem_96->next=((void*)0);
        __dec_obj55=litem_96->item;
        litem_96->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_96;
        self->head->next=litem_96;
    }
    else {
        litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 171, "list_item$1charph"))));
        litem_97->prev=self->tail;
        litem_97->next=((void*)0);
        __dec_obj56=litem_97->item;
        litem_97->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_97;
        self->tail=litem_97;
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
struct list_item$1CVALUEph* litem_98;
struct CVALUE* __dec_obj64;
void* __right_value163 = (void*)0;
struct list_item$1CVALUEph* litem_99;
struct CVALUE* __dec_obj68;
void* __right_value164 = (void*)0;
struct list_item$1CVALUEph* litem_100;
struct CVALUE* __dec_obj69;
struct list$1CVALUEph* __result87__;
    if(    self->len==0) {
        litem_98=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 221, "list_item$1CVALUEph"))));
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj64=litem_98->item;
        litem_98->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else if(    self->len==1) {
        litem_99=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 231, "list_item$1CVALUEph"))));
        litem_99->prev=self->head;
        litem_99->next=((void*)0);
        __dec_obj68=litem_99->item;
        litem_99->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_99;
        self->head->next=litem_99;
    }
    else {
        litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 241, "list_item$1CVALUEph"))));
        litem_100->prev=self->tail;
        litem_100->next=((void*)0);
        __dec_obj69=litem_100->item;
        litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_100;
        self->tail=litem_100;
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
struct sFun* come_fun_101;
char* come_fun_name_102;
void* __right_value167 = (void*)0;
char* __dec_obj88;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
struct sType* result_type_103;
void* __right_value170 = (void*)0;
int block_level_104;
void* __right_value171 = (void*)0;
char* __dec_obj89;
_Bool __result91__;
    come_fun_101=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_102=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj88=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_103=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value170=make_define_var(result_type_103,"__result_obj__",(_Bool)0,info))));
            __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_104=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_104;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value171=xsprintf("come_heap_final();\n"))));
            __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_101;
    __dec_obj89=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_102);
    /*G*/ __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result91__ = (_Bool)1;
    come_fun_name_102 = come_decrement_ref_count2(come_fun_name_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sBlock* result_105;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
struct list$1int* __dec_obj111;
int sline_top_111;
int block_level_112;
char* p_113;
int sline_114;
char* sname_115;
void* __right_value185 = (void*)0;
struct sNode* node_116;
void* __right_value186 = (void*)0;
char* __dec_obj112;
_Bool omit_semicolon_120;
void* __right_value190 = (void*)0;
char* __dec_obj116;
char* head_135;
void* __right_value191 = (void*)0;
struct sNode* value_136;
char* tail_137;
void* __right_value192 = (void*)0;
struct sNode* __dec_obj117;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sNode* node_139;
struct sNode* node_140;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value199 = (void*)0;
struct sNode* __dec_obj120;
void* __right_value200 = (void*)0;
struct sNode* __dec_obj121;
_Bool omit_semicolon_142;
char* p_143;
char* head_144;
void* __right_value201 = (void*)0;
char* source_145;
void* __right_value202 = (void*)0;
struct sNode* node_146;
struct sBlock* __result102__;
node_140 = (void*)0;
    result_105=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 159, "sBlock")),info));
    if(    info->sline_stack==((void*)0)) {
        __dec_obj111=info->sline_stack;
        info->sline_stack=(struct list$1int*)come_increment_ref_count(list$1int_initialize((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "05function.c", 162, "list$1int"))));
        come_call_finalizer3(__dec_obj111,list$1int_finalize, 0, 0, 0, 0, (void*)0);
    }
    list$1int_add(info->sline_stack,info->sline);
    sline_top_111=info->sline_top;
    info->sline_top=info->sline;
    block_level_112=info->block_level;
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
            p_113=info->p;
            sline_114=info->sline;
            sname_115=info->sname;
            if(            *info->p==123) {
                info->sline_top=sline_114;
            }
            node_116=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj112=info->sname;
            info->sname=(char*)come_increment_ref_count(node_116->sname(node_116->_protocol_obj));
            /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_116->sline(node_116->_protocol_obj);
            if(            node_116==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_116));
            parse_sharp_v5(info);
            if(            node_116->terminated(node_116->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_120=(_Bool)1;
            if(            node_116->terminated(node_116->_protocol_obj)) {
                omit_semicolon_120=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_120=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_105->mOmitSemicolon=omit_semicolon_120;
                if(                omit_semicolon_120&&in_function) {
                    list$1sNodeph_delete(result_105->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_113;
                    info->sline=sline_114;
                    __dec_obj116=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_115));
                    /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_135=info->p;
                    value_136=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_137=info->p;
                    __dec_obj117=value_136;
                    value_136=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_136),info));
                    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_138[tail_137-head_135+1];
                    memset(&buf_138, 0, sizeof(char)                    *(tail_137-head_135+1)                    );
                    memcpy(buf_138,head_135,tail_137-head_135);
                    buf_138[tail_137-head_135]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_139=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_136),(char*)come_increment_ref_count(__builtin_string(buf_138)),info));
                    list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_139));
                    if(value_136) { value_136 = come_decrement_ref_count2(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_116) { node_116 = come_decrement_ref_count2(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_136) { value_136 = come_decrement_ref_count2(value_136, ((struct sNode*)value_136)->finalize, ((struct sNode*)value_136)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_116) { node_116 = come_decrement_ref_count2(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_116) { node_116 = come_decrement_ref_count2(node_116, ((struct sNode*)node_116)->finalize, ((struct sNode*)node_116)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
            __dec_obj120=node_140;
            node_140=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
            /*g*/come_call_finalizer3(__right_value196,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        else {
            __dec_obj121=node_140;
            node_140=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_140==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_140->terminated(node_140->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_142=(_Bool)1;
            if(            node_140->terminated(node_140->_protocol_obj)) {
                omit_semicolon_142=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_142=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_105->mOmitSemicolon=omit_semicolon_142;
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_140));
        }
        if(node_140) { node_140 = come_decrement_ref_count2(node_140, ((struct sNode*)node_140)->finalize, ((struct sNode*)node_140)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_143=info->p;
        head_144=info->head;
        source_145=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_145;
        info->head=source_145;
        node_146=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_146==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_146));
        info->p=p_143;
        info->head=head_144;
        source_145 = come_decrement_ref_count2(source_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_146) { node_146 = come_decrement_ref_count2(node_146, ((struct sNode*)node_146)->finalize, ((struct sNode*)node_146)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_112;
    list$1int_pop_front(info->sline_stack);
    __result102__ = gComeFunResultObject = __result_obj__ = result_105;
    /*i*/come_call_finalizer3(result_105,sBlock_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1int* it_106;
struct list_item$1int* prev_it_107;
    it_106=self->head;
    while(it_106!=((void*)0)) {
        prev_it_107=it_106;
        it_106=it_106->next;
        /*i*/come_call_finalizer3(prev_it_107,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1int* list$1int_add(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
struct list_item$1int* litem_108;
void* __right_value183 = (void*)0;
struct list_item$1int* litem_109;
void* __right_value184 = (void*)0;
struct list_item$1int* litem_110;
struct list$1int* __result95__;
    if(    self->len==0) {
        litem_108=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value182=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 151, "list_item$1int"))));
        litem_108->prev=((void*)0);
        litem_108->next=((void*)0);
        litem_108->item=item;
        self->tail=litem_108;
        self->head=litem_108;
    }
    else if(    self->len==1) {
        litem_109=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value183=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 161, "list_item$1int"))));
        litem_109->prev=self->head;
        litem_109->next=((void*)0);
        litem_109->item=item;
        self->tail=litem_109;
        self->head->next=litem_109;
    }
    else {
        litem_110=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value184=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 171, "list_item$1int"))));
        litem_110->prev=self->tail;
        litem_110->next=((void*)0);
        litem_110->item=item;
        self->tail->next=litem_110;
        self->tail=litem_110;
    }
    self->len++;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
struct list_item$1sNodeph* litem_117;
struct sNode* __dec_obj113;
void* __right_value188 = (void*)0;
struct list_item$1sNodeph* litem_118;
struct sNode* __dec_obj114;
void* __right_value189 = (void*)0;
struct list_item$1sNodeph* litem_119;
struct sNode* __dec_obj115;
struct list$1sNodeph* __result96__;
    if(    self->len==0) {
        litem_117=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value187=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 221, "list_item$1sNodeph"))));
        litem_117->prev=((void*)0);
        litem_117->next=((void*)0);
        __dec_obj113=litem_117->item;
        litem_117->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_117;
        self->head=litem_117;
    }
    else if(    self->len==1) {
        litem_118=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value188=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 231, "list_item$1sNodeph"))));
        litem_118->prev=self->head;
        litem_118->next=((void*)0);
        __dec_obj114=litem_118->item;
        litem_118->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_118;
        self->head->next=litem_118;
    }
    else {
        litem_119=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value189=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 241, "list_item$1sNodeph"))));
        litem_119->prev=self->tail;
        litem_119->next=((void*)0);
        __dec_obj115=litem_119->item;
        litem_119->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_119;
        self->tail=litem_119;
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_121;
struct list$1sNodeph* __result97__;
struct list_item$1sNodeph* it_124;
int i_125;
struct list_item$1sNodeph* prev_it_126;
struct list_item$1sNodeph* it_127;
int i_128;
struct list_item$1sNodeph* prev_it_129;
struct list_item$1sNodeph* it_130;
struct list_item$1sNodeph* head_prev_it_131;
struct list_item$1sNodeph* tail_it_132;
int i_133;
struct list_item$1sNodeph* prev_it_134;
struct list$1sNodeph* __result99__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_121=tail;
        tail=head;
        head=tmp_121;
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
        it_124=self->head;
        i_125=0;
        while(it_124!=((void*)0)) {
            if(            i_125<tail) {
                prev_it_126=it_124;
                it_124=it_124->next;
                i_125++;
                /*i*/come_call_finalizer3(prev_it_126,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_125==tail) {
                self->head=it_124;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_124=it_124->next;
                i_125++;
            }
        }
    }
    else if(    tail==self->len) {
        it_127=self->head;
        i_128=0;
        while(it_127!=((void*)0)) {
            if(            i_128==head) {
                self->tail=it_127->prev;
                self->tail->next=((void*)0);
            }
            if(            i_128>=head) {
                prev_it_129=it_127;
                it_127=it_127->next;
                i_128++;
                /*i*/come_call_finalizer3(prev_it_129,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_127=it_127->next;
                i_128++;
            }
        }
    }
    else {
        it_130=self->head;
        head_prev_it_131=((void*)0);
        tail_it_132=((void*)0);
        i_133=0;
        while(it_130!=((void*)0)) {
            if(            i_133==head) {
                head_prev_it_131=it_130->prev;
            }
            if(            i_133==tail) {
                tail_it_132=it_130;
            }
            if(            i_133>=head&&i_133<tail) {
                prev_it_134=it_130;
                it_130=it_130->next;
                i_133++;
                /*i*/come_call_finalizer3(prev_it_134,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_130=it_130->next;
                i_133++;
            }
        }
        if(        head_prev_it_131!=((void*)0)) {
            head_prev_it_131->next=tail_it_132;
        }
        if(        tail_it_132!=((void*)0)) {
            tail_it_132->prev=head_prev_it_131;
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_122;
struct list_item$1sNodeph* prev_it_123;
struct list$1sNodeph* __result98__;
    it_122=self->head;
    while(it_122!=((void*)0)) {
        prev_it_123=it_122;
        it_122=it_122->next;
        /*i*/come_call_finalizer3(prev_it_123,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sSemicolonNode* result_141;
void* __right_value198 = (void*)0;
char* __dec_obj119;
struct sSemicolonNode* __result101__;
    if(    self==(void*)0) {
        __result100__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_141=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(    self!=((void*)0)) {
        result_141->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj119=result_141->sname;
        result_141->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = result_141;
    /*i*/come_call_finalizer3(result_141,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void list$1int_pop_front(struct list$1int* self){
struct list_item$1int* litem_147;
struct list_item$1int* litem_148;
struct list_item$1int* litem_149;
    if(    self->len==1) {
        litem_147=self->head;
        self->head=((void*)0);
        self->tail=((void*)0);
        /*i*/come_call_finalizer3(litem_147,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
    else if(    self->len==2) {
        litem_148=self->head;
        self->head=self->head->next;
        self->head->prev=((void*)0);
        self->head->next=((void*)0);
        self->tail=self->head;
        /*i*/come_call_finalizer3(litem_148,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
    else if(    self->len>=3) {
        litem_149=self->head;
        self->head=litem_149->next;
        self->head->prev=((void*)0);
        /*i*/come_call_finalizer3(litem_149,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
        self->len--;
    }
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_150;
struct sVarTable* old_table_151;
void* __right_value203 = (void*)0;
void* __right_value204 = (void*)0;
struct sVarTable* __dec_obj122;
struct sVarTable* current_loop_vtable_152;
struct list$1sTypeph* param_types__153;
struct list$1charph* param_names__154;
int i_155;
struct list$1charph* o2_saved_156;
char* name_159;
void* __right_value205 = (void*)0;
struct sType* type_162;
void* __right_value206 = (void*)0;
int block_level_166;
int i_167;
struct list$1sNodeph* o2_saved_168;
struct sNode* node_171;
struct list$1sRightValueObjectph* right_value_objects_174;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
char* __dec_obj130;
int stack_num_before_179;
int sline_180;
void* __right_value209 = (void*)0;
char* sname_181;
void* __right_value210 = (void*)0;
char* __dec_obj131;
void* __right_value211 = (void*)0;
struct CVALUE* come_value_182;
void* __right_value216 = (void*)0;
struct CVALUE* come_value2_183;
void* __right_value217 = (void*)0;
char* __dec_obj135;
void* __right_value218 = (void*)0;
struct CVALUE* come_value2_185;
struct sVar* var__186;
void* __right_value219 = (void*)0;
struct CVALUE* come_value3_187;
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
void* __if_result__0_190 = (void*)0;
struct list$1sVarph* o2_saved_191;
struct sVar* it_194;
struct list$1sVarph* __dec_obj147;
memset(&i_155, 0, sizeof(int));
memset(&i_167, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_150=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_151=info->lv_table;
    if(    !no_var_table) {
        __dec_obj122=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 350, "sVarTable")),(_Bool)0,old_table_151));
        come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_152=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__153=info->param_types;
    param_names__154=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_156=(param_names),name_159=list$1charph_begin((o2_saved_156));        !list$1charph_end((o2_saved_156));        name_159=list$1charph_next((o2_saved_156))        ){
            type_162=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_155), "05function.c", 368, 0))));
            type_162->mFunctionParam=(_Bool)1;
            type_162->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_159,(struct sType*)come_increment_ref_count(sType_clone(type_162)),info);
            i_155++;
            /*i*/come_call_finalizer3(type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_166=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_168=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_171=list$1sNodeph_begin((o2_saved_168));        !list$1sNodeph_end((o2_saved_168));        node_171=list$1sNodeph_next((o2_saved_168))        ){
            right_value_objects_174=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
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
            stack_num_before_179=list$1CVALUEph_length(info->stack);
            sline_180=info->sline;
            sname_181=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_171->sline(node_171->_protocol_obj);
            __dec_obj131=info->sname;
            info->sname=(char*)come_increment_ref_count(node_171->sname(node_171->_protocol_obj));
            /*G*/ __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_167==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                if(                !node_compile(node_171,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                if(                list$1CVALUEph_length(info->stack)==stack_num_before_179+1) {
                    come_value_182=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_182->type->mClass->mName,"void")&&come_value_182->type->mPointerNum==0) {
                        come_value2_183=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_182));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_183));
                        __dec_obj135=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_183->c_value));
                        /*G*/ __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_185=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_182));
                        var__186=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__186) {
                            come_value3_187=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 424, "CVALUE"));
                            if(                            var__186->mType->mClass=="void"&&var__186->mType->mPointerNum==1) {
                                if(                                (_if_conditional1=(!check_assign_type("invalid if result value",var__186->mType,((struct sType*)(__right_value220=sType_clone(come_value_182->type))),come_value3_187,info,(_Bool)1,(_Bool)1,info))),                                /*f*/come_call_finalizer3(__right_value220,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional1) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj136=var__186->mType;
                            var__186->mType=(struct sType*)come_increment_ref_count(sType_clone(come_value_182->type));
                            come_call_finalizer3(__dec_obj136,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_182->type->mHeap) {
                                __dec_obj137=come_value2_185->c_value;
                                come_value2_185->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(come_increment_ref_count(%s))",var__186->mCValueName,come_value_182->c_value));
                                /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                __dec_obj138=come_value2_185->c_value;
                                come_value2_185->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__186->mCValueName,come_value_182->c_value));
                                /*G*/ __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            /*i*/come_call_finalizer3(come_value3_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_185));
                        __dec_obj139=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_185->c_value));
                        /*G*/ __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(                !node_compile(node_171,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
            }
            info->sline=sline_180;
            __dec_obj140=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_181));
            /*G*/ __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_179);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj141=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_174);
            come_call_finalizer3(__dec_obj141,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_167++;
            /*i*/come_call_finalizer3(right_value_objects_174,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_181 = come_decrement_ref_count2(sname_181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_168,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_166==0) {
            for(            o2_saved_191=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_194=list$1sVarph_begin((o2_saved_191));            !list$1sVarph_end((o2_saved_191));            it_194=list$1sVarph_next((o2_saved_191))            ){
                free_object(it_194->mType,it_194->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            /*i*/come_call_finalizer3(o2_saved_191,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj147=info->match_it_var;
            __if_result__0_190=(void*)(come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj147,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(__if_result__0_190,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_151;
    info->block_level=block_level_166;
    info->param_types=param_types__153;
    info->param_names=param_names__154;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_152;
    info->inhibits_output_code=inhibits_output_code_150;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_157;
char* __result103__;
char* __result104__;
char* result_158;
char* __result105__;
result_157 = (void*)0;
result_158 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_157,0,sizeof(char*));
        __result103__ = gComeFunResultObject = __result_obj__ = result_157;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    self->it=self->head;
    if(    self->it) {
        __result104__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    memset(&result_158,0,sizeof(char*));
    __result105__ = gComeFunResultObject = __result_obj__ = result_158;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_160;
char* __result106__;
char* __result107__;
char* result_161;
char* __result108__;
result_160 = (void*)0;
result_161 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_160,0,sizeof(char*));
        __result106__ = gComeFunResultObject = __result_obj__ = result_160;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result107__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    memset(&result_161,0,sizeof(char*));
    __result108__ = gComeFunResultObject = __result_obj__ = result_161;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_163;
int i_164;
struct sType* __result109__;
struct sType* default_value_165;
struct sType* __result110__;
default_value_165 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_163=self->head;
    i_164=0;
    while(it_163!=((void*)0)) {
        if(        position==i_164) {
            __result109__ = gComeFunResultObject = __result_obj__ = it_163->item;
            gComeFunResultObject = (void*)0;
            return __result109__;
        }
        it_163=it_163->next;
        i_164++;
    }
    memset(&default_value_165,0,sizeof(struct sType*));
    __result110__ = gComeFunResultObject = __result_obj__ = default_value_165;
    /*i*/come_call_finalizer3(default_value_165,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* result_169;
struct sNode* __result111__;
struct sNode* __result112__;
struct sNode* result_170;
struct sNode* __result113__;
result_169 = (void*)0;
result_170 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_169,0,sizeof(struct sNode*));
        __result111__ = gComeFunResultObject = __result_obj__ = result_169;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    self->it=self->head;
    if(    self->it) {
        __result112__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    memset(&result_170,0,sizeof(struct sNode*));
    __result113__ = gComeFunResultObject = __result_obj__ = result_170;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_172;
struct sNode* __result114__;
struct sNode* __result115__;
struct sNode* result_173;
struct sNode* __result116__;
result_172 = (void*)0;
result_173 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_172,0,sizeof(struct sNode*));
        __result114__ = gComeFunResultObject = __result_obj__ = result_172;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result115__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    memset(&result_173,0,sizeof(struct sNode*));
    __result116__ = gComeFunResultObject = __result_obj__ = result_173;
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
struct list_item$1sRightValueObjectph* it_175;
struct list_item$1sRightValueObjectph* prev_it_176;
    it_175=self->head;
    while(it_175!=((void*)0)) {
        prev_it_176=it_175;
        it_175=it_175->next;
        /*i*/come_call_finalizer3(prev_it_176,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObjectph* it_177;
struct list_item$1sRightValueObjectph* prev_it_178;
    it_177=self->head;
    while(it_177!=((void*)0)) {
        prev_it_178=it_177;
        it_177=it_177->next;
        /*i*/come_call_finalizer3(prev_it_178,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct CVALUE* result_184;
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
    result_184=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj132=result_184->c_value;
        result_184->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj133=result_184->type;
        result_184->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_184->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_184->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj134=result_184->c_value_without_right_value_objects;
        result_184->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = result_184;
    /*i*/come_call_finalizer3(result_184,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_188;
struct list_item$1sRightValueObjectph* prev_it_189;
struct list$1sRightValueObjectph* __result120__;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        /*i*/come_call_finalizer3(prev_it_189,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sVar* result_192;
struct sVar* __result121__;
struct sVar* __result122__;
struct sVar* result_193;
struct sVar* __result123__;
result_192 = (void*)0;
result_193 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_192,0,sizeof(struct sVar*));
        __result121__ = gComeFunResultObject = __result_obj__ = result_192;
        gComeFunResultObject = (void*)0;
        return __result121__;
    }
    self->it=self->head;
    if(    self->it) {
        __result122__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result122__;
    }
    memset(&result_193,0,sizeof(struct sVar*));
    __result123__ = gComeFunResultObject = __result_obj__ = result_193;
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static _Bool list$1sVarph_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarph_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_195;
struct sVar* __result124__;
struct sVar* __result125__;
struct sVar* result_196;
struct sVar* __result126__;
result_195 = (void*)0;
result_196 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_195,0,sizeof(struct sVar*));
        __result124__ = gComeFunResultObject = __result_obj__ = result_195;
        gComeFunResultObject = (void*)0;
        return __result124__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result125__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    memset(&result_196,0,sizeof(struct sVar*));
    __result126__ = gComeFunResultObject = __result_obj__ = result_196;
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_197;
struct list_item$1sVarph* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        /*i*/come_call_finalizer3(prev_it_198,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sVarph* it_199;
struct list_item$1sVarph* prev_it_200;
    it_199=self->head;
    while(it_199!=((void*)0)) {
        prev_it_200=it_199;
        it_199=it_199->next;
        /*i*/come_call_finalizer3(prev_it_200,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_201;
_Bool dquort_202;
_Bool squort_203;
int sline_204;
int nest_205;
char* tail_206;
void* __right_value226 = (void*)0;
char* buf_207;
void* __right_value227 = (void*)0;
char* __result127__;
    head_201=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_202=(_Bool)0;
        squort_203=(_Bool)0;
        sline_204=0;
        nest_205=0;
        while(1) {
            if(            dquort_202) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_204);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_202=!dquort_202;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_204);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_204);
                        exit(2);
                    }
                }
            }
            else if(            squort_203) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_204);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_203=!squort_203;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_204);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_204);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_204=info->sline;
                info->p++;
                squort_203=!squort_203;
            }
            else if(            *info->p==34) {
                sline_204=info->sline;
                info->p++;
                dquort_202=!dquort_202;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_205++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_205==0) {
                    skip_spaces_and_lf(info);
                    break;
                }
                nest_205--;
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
    tail_206=info->p;
    buf_207=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_206-head_201+1)), "05function.c", 655, "char"));
    memcpy(buf_207,head_201,tail_206-head_201);
    buf_207[tail_206-head_201]=0;
    __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string(buf_207)));
    buf_207 = come_decrement_ref_count2(buf_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_208;
char* p3_209;
int i_210;
    terminated_208=(_Bool)0;
    p3_209=p;
    for(    i_210=0;    i_210<strlen(p2);    i_210++    ){
        if(        *p3_209==0) {
            terminated_208=(_Bool)1;
            break;
        }
        p3_209++;
    }
    return !terminated_208&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
struct buffer* asm_fun_name_211;
int brace_num_212;
int len_213;
_Bool in_dquort_214;
int brace_num_215;
int brace_num_216;
void* __right_value230 = (void*)0;
char* __result128__;
    asm_fun_name_211=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 678, "buffer"))));
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
            brace_num_212=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_212++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_212--;
                    if(                    brace_num_212==0) {
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
            len_213=0;
            in_dquort_214=(_Bool)0;
            brace_num_215=0;
            while(*info->p) {
                if(                *info->p==34) {
                    info->p++;
                    in_dquort_214=!in_dquort_214;
                }
                else if(                in_dquort_214) {
                    buffer_append_char(asm_fun_name_211,*info->p);
                    info->p++;
                }
                else if(                *info->p==40) {
                    info->p++;
                    brace_num_215++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_215--;
                    if(                    brace_num_215==0) {
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
            brace_num_216=0;
            while(*info->p) {
                if(                *info->p==40) {
                    info->p++;
                    brace_num_216++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    brace_num_216--;
                    if(                    brace_num_216==0) {
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
    __result128__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=buffer_to_string(asm_fun_name_211)));
    /*i*/come_call_finalizer3(asm_fun_name_211,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_217;
int head_sline_218;
void* __right_value231 = (void*)0;
char* buf_219;
void* __right_value232 = (void*)0;
struct sNode* node_220;
    while(*info->p) {
        parse_sharp_v5(info);
        head_217=info->p;
        head_sline_218=info->sline;
        buf_219=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_219 = come_decrement_ref_count2(buf_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_220=(struct sNode*)come_increment_ref_count(top_level_v99(buf_219,head_217,head_sline_218,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_220!=((void*)0)) {
            if(            !node_compile(node_220,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_219 = come_decrement_ref_count2(buf_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_219 = come_decrement_ref_count2(buf_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_220) { node_220 = come_decrement_ref_count2(node_220, ((struct sNode*)node_220)->finalize, ((struct sNode*)node_220)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value233 = (void*)0;
char* name_221;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
struct sType* result_type_222;
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
struct sType* __list_values1___223[5];
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sTypeph* param_types_228;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
char* __list_values2___229[5];
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1charph* param_names_234;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1charph* param_default_parametors_235;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
struct sFun* main_fun_236;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
char* name_278;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sType* result_type_279;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __list_values3___280[1];
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1sTypeph* param_types_281;
void* __right_value281 = (void*)0;
char* __list_values4___282[1];
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct list$1charph* param_names_283;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct list$1charph* param_default_parametors_284;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sFun* main_fun_285;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
char* name_286;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* result_type_287;
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
struct sType* __list_values5___288[7];
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1sTypeph* param_types_289;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
char* __list_values6___290[7];
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct list$1charph* param_names_291;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* param_default_parametors_292;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sFun* main_fun_293;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
char* name_294;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct sType* result_type_295;
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
struct sType* __list_values7___296[5];
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1sTypeph* param_types_297;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
char* __list_values8___298[5];
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct list$1charph* param_names_299;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1charph* param_default_parametors_300;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sFun* main_fun_301;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
char* name_302;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct sType* result_type_303;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct sType* __list_values9___304[1];
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct list$1sTypeph* param_types_305;
void* __right_value362 = (void*)0;
char* __list_values10___306[1];
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct list$1charph* param_names_307;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1charph* param_default_parametors_308;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct sFun* main_fun_309;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* name_310;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* result_type_311;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sType* __list_values11___312[4];
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1sTypeph* param_types_313;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
char* __list_values12___314[4];
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1charph* param_names_315;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct list$1charph* param_default_parametors_316;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sFun* main_fun_317;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
char* name_318;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct sType* result_type_319;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* __list_values13___320[3];
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1sTypeph* param_types_321;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
char* __list_values14___322[3];
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct list$1charph* param_names_323;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct list$1charph* param_default_parametors_324;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct sFun* main_fun_325;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
char* name_326;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* result_type_327;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct sType* __list_values15___328[1];
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct list$1sTypeph* param_types_329;
void* __right_value431 = (void*)0;
char* __list_values16___330[1];
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct list$1charph* param_names_331;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1charph* param_default_parametors_332;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sFun* main_fun_333;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
char* name_334;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct sType* result_type_335;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* __list_values17___336[3];
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1sTypeph* param_types_337;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
char* __list_values18___338[3];
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1charph* param_names_339;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1charph* param_default_parametors_340;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sFun* main_fun_341;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
char* name_342;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sType* result_type_343;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1sTypeph* param_types_344;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct list$1charph* param_names_345;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct list$1charph* param_default_parametors_346;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sFun* main_fun_347;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
char* name_348;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* result_type_349;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* __list_values19___350[4];
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1sTypeph* param_types_351;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
char* __list_values20___352[4];
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
struct list$1charph* param_names_353;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct list$1charph* param_default_parametors_354;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sFun* main_fun_355;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
char* name_356;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct sType* result_type_357;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct list$1sTypeph* param_types_358;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
struct list$1charph* param_names_359;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct list$1charph* param_default_parametors_360;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct sFun* fun_361;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
char* name_362;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* result_type_363;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct list$1sTypeph* param_types_364;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct list$1charph* param_names_365;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct list$1charph* param_default_parametors_366;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sFun* fun_367;
void* __right_value531 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_221=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_222=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 847, "sType")),"void*",(_Bool)0,info));
        {__list_values1___223[0]=come_increment_ref_count(((struct sType*)(__right_value237=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info))));
__list_values1___223[1]=come_increment_ref_count(((struct sType*)(__right_value239=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info))));
__list_values1___223[2]=come_increment_ref_count(((struct sType*)(__right_value241=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"char*",(_Bool)0,info))));
__list_values1___223[3]=come_increment_ref_count(((struct sType*)(__right_value243=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"int",(_Bool)0,info))));
__list_values1___223[4]=come_increment_ref_count(((struct sType*)(__right_value245=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 848, "sType")),"char*",(_Bool)0,info))));
}        param_types_228=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 848, "struct list$1sTypeph")),5,__list_values1___223));
        /*g*/come_call_finalizer3(__right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value239,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value241,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value243,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value245,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___229[0]=come_increment_ref_count(((char*)(__right_value251=__builtin_string("count"))));
__list_values2___229[1]=come_increment_ref_count(((char*)(__right_value252=__builtin_string("size"))));
__list_values2___229[2]=come_increment_ref_count(((char*)(__right_value253=__builtin_string("sname"))));
__list_values2___229[3]=come_increment_ref_count(((char*)(__right_value254=__builtin_string("sline"))));
__list_values2___229[4]=come_increment_ref_count(((char*)(__right_value255=__builtin_string("class_name"))));
}        param_names_234=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 849, "struct list$1charph")),5,__list_values2___229));
        __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_235=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 850, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_235,((void*)0));
        list$1charph_push_back(param_default_parametors_235,((void*)0));
        list$1charph_push_back(param_default_parametors_235,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_235,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_235,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_236=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 856, "sFun")),(char*)come_increment_ref_count(name_221),(struct sType*)come_increment_ref_count(result_type_222),(struct list$1sTypeph*)come_increment_ref_count(param_types_228),(struct list$1charph*)come_increment_ref_count(param_names_234),(struct list$1charph*)come_increment_ref_count(param_default_parametors_235),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_221)),(struct sFun*)come_increment_ref_count(main_fun_236));
        name_221 = come_decrement_ref_count2(name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_222,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_228,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_234,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_235,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_236,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_278=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_279=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 867, "sType")),"void*",(_Bool)0,info));
        {__list_values3___280[0]=come_increment_ref_count(((struct sType*)(__right_value278=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")),"void*",(_Bool)0,info))));
}        param_types_281=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 868, "struct list$1sTypeph")),1,__list_values3___280));
        /*g*/come_call_finalizer3(__right_value278,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___282[0]=come_increment_ref_count(((char*)(__right_value281=__builtin_string("mem"))));
}        param_names_283=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 869, "struct list$1charph")),1,__list_values4___282));
        __right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_284=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "list$1charph"))));
        main_fun_285=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 871, "sFun")),(char*)come_increment_ref_count(name_278),(struct sType*)come_increment_ref_count(result_type_279),(struct list$1sTypeph*)come_increment_ref_count(param_types_281),(struct list$1charph*)come_increment_ref_count(param_names_283),(struct list$1charph*)come_increment_ref_count(param_default_parametors_284),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_278)),(struct sFun*)come_increment_ref_count(main_fun_285));
        name_278 = come_decrement_ref_count2(name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_279,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_281,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_283,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_284,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_285,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_286=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_287=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 882, "sType")),"void",(_Bool)0,info));
        {__list_values5___288[0]=come_increment_ref_count(((struct sType*)(__right_value295=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info))));
__list_values5___288[1]=come_increment_ref_count(((struct sType*)(__right_value297=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info))));
__list_values5___288[2]=come_increment_ref_count(((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info))));
__list_values5___288[3]=come_increment_ref_count(((struct sType*)(__right_value301=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info))));
__list_values5___288[4]=come_increment_ref_count(((struct sType*)(__right_value303=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info))));
__list_values5___288[5]=come_increment_ref_count(((struct sType*)(__right_value305=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info))));
__list_values5___288[6]=come_increment_ref_count(((struct sType*)(__right_value307=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"int",(_Bool)0,info))));
}        param_types_289=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 883, "struct list$1sTypeph")),7,__list_values5___288));
        /*g*/come_call_finalizer3(__right_value295,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value297,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value299,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value301,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value303,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value305,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value307,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___290[0]=come_increment_ref_count(((char*)(__right_value310=__builtin_string("fun"))));
__list_values6___290[1]=come_increment_ref_count(((char*)(__right_value311=__builtin_string("mem"))));
__list_values6___290[2]=come_increment_ref_count(((char*)(__right_value312=__builtin_string("protocol_fun"))));
__list_values6___290[3]=come_increment_ref_count(((char*)(__right_value313=__builtin_string("protocol_obj"))));
__list_values6___290[4]=come_increment_ref_count(((char*)(__right_value314=__builtin_string("call_finalizer_only"))));
__list_values6___290[5]=come_increment_ref_count(((char*)(__right_value315=__builtin_string("no_decrement"))));
__list_values6___290[6]=come_increment_ref_count(((char*)(__right_value316=__builtin_string("no_free"))));
}        param_names_291=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 884, "struct list$1charph")),7,__list_values6___290));
        __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_292=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "list$1charph"))));
        main_fun_293=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 886, "sFun")),(char*)come_increment_ref_count(name_286),(struct sType*)come_increment_ref_count(result_type_287),(struct list$1sTypeph*)come_increment_ref_count(param_types_289),(struct list$1charph*)come_increment_ref_count(param_names_291),(struct list$1charph*)come_increment_ref_count(param_default_parametors_292),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_286)),(struct sFun*)come_increment_ref_count(main_fun_293));
        name_286 = come_decrement_ref_count2(name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_289,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_291,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_292,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_293,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_294=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_295=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 897, "sType")),"void*",(_Bool)0,info));
        {__list_values7___296[0]=come_increment_ref_count(((struct sType*)(__right_value330=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info))));
__list_values7___296[1]=come_increment_ref_count(((struct sType*)(__right_value332=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info))));
__list_values7___296[2]=come_increment_ref_count(((struct sType*)(__right_value334=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"void*",(_Bool)0,info))));
__list_values7___296[3]=come_increment_ref_count(((struct sType*)(__right_value336=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"bool",(_Bool)0,info))));
__list_values7___296[4]=come_increment_ref_count(((struct sType*)(__right_value338=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 898, "sType")),"bool",(_Bool)0,info))));
}        param_types_297=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 898, "struct list$1sTypeph")),5,__list_values7___296));
        /*g*/come_call_finalizer3(__right_value330,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value332,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value334,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value336,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value338,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___298[0]=come_increment_ref_count(((char*)(__right_value341=__builtin_string("mem"))));
__list_values8___298[1]=come_increment_ref_count(((char*)(__right_value342=__builtin_string("protocol_fun"))));
__list_values8___298[2]=come_increment_ref_count(((char*)(__right_value343=__builtin_string("protocol_obj"))));
__list_values8___298[3]=come_increment_ref_count(((char*)(__right_value344=__builtin_string("no_decrement"))));
__list_values8___298[4]=come_increment_ref_count(((char*)(__right_value345=__builtin_string("no_free"))));
}        param_names_299=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 899, "struct list$1charph")),5,__list_values8___298));
        __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_300=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 900, "list$1charph"))));
        main_fun_301=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 901, "sFun")),(char*)come_increment_ref_count(name_294),(struct sType*)come_increment_ref_count(result_type_295),(struct list$1sTypeph*)come_increment_ref_count(param_types_297),(struct list$1charph*)come_increment_ref_count(param_names_299),(struct list$1charph*)come_increment_ref_count(param_default_parametors_300),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_294)),(struct sFun*)come_increment_ref_count(main_fun_301));
        name_294 = come_decrement_ref_count2(name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_295,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_297,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_299,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_300,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_301,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_302=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_303=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 912, "sType")),"void",(_Bool)0,info));
        {__list_values9___304[0]=come_increment_ref_count(((struct sType*)(__right_value359=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 913, "sType")),"void*",(_Bool)0,info))));
}        param_types_305=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 913, "struct list$1sTypeph")),1,__list_values9___304));
        /*g*/come_call_finalizer3(__right_value359,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___306[0]=come_increment_ref_count(((char*)(__right_value362=__builtin_string("mem"))));
}        param_names_307=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 914, "struct list$1charph")),1,__list_values10___306));
        __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_308=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 915, "list$1charph"))));
        main_fun_309=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 916, "sFun")),(char*)come_increment_ref_count(name_302),(struct sType*)come_increment_ref_count(result_type_303),(struct list$1sTypeph*)come_increment_ref_count(param_types_305),(struct list$1charph*)come_increment_ref_count(param_names_307),(struct list$1charph*)come_increment_ref_count(param_default_parametors_308),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_302)),(struct sFun*)come_increment_ref_count(main_fun_309));
        name_302 = come_decrement_ref_count2(name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_305,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_307,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_308,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_309,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_310=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_311=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 927, "sType")),"void*",(_Bool)0,info));
        {__list_values11___312[0]=come_increment_ref_count(((struct sType*)(__right_value376=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"void*",(_Bool)0,info))));
__list_values11___312[1]=come_increment_ref_count(((struct sType*)(__right_value378=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"char*",(_Bool)0,info))));
__list_values11___312[2]=come_increment_ref_count(((struct sType*)(__right_value380=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"int",(_Bool)0,info))));
__list_values11___312[3]=come_increment_ref_count(((struct sType*)(__right_value382=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 928, "sType")),"char*",(_Bool)0,info))));
}        param_types_313=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 928, "struct list$1sTypeph")),4,__list_values11___312));
        /*g*/come_call_finalizer3(__right_value376,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value382,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___314[0]=come_increment_ref_count(((char*)(__right_value385=__builtin_string("block"))));
__list_values12___314[1]=come_increment_ref_count(((char*)(__right_value386=__builtin_string("sname"))));
__list_values12___314[2]=come_increment_ref_count(((char*)(__right_value387=__builtin_string("sline"))));
__list_values12___314[3]=come_increment_ref_count(((char*)(__right_value388=__builtin_string("class_name"))));
}        param_names_315=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 929, "struct list$1charph")),4,__list_values12___314));
        __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_316=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 930, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_316,((void*)0));
        list$1charph_push_back(param_default_parametors_316,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_316,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_316,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_317=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 935, "sFun")),(char*)come_increment_ref_count(name_310),(struct sType*)come_increment_ref_count(result_type_311),(struct list$1sTypeph*)come_increment_ref_count(param_types_313),(struct list$1charph*)come_increment_ref_count(param_names_315),(struct list$1charph*)come_increment_ref_count(param_default_parametors_316),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_310)),(struct sFun*)come_increment_ref_count(main_fun_317));
        name_310 = come_decrement_ref_count2(name_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_311,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_313,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_315,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_316,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_317,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_318=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_319=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 946, "sType")),"void*",(_Bool)0,info));
        {__list_values13___320[0]=come_increment_ref_count(((struct sType*)(__right_value405=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"void*",(_Bool)0,info))));
__list_values13___320[1]=come_increment_ref_count(((struct sType*)(__right_value407=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"int",(_Bool)0,info))));
__list_values13___320[2]=come_increment_ref_count(((struct sType*)(__right_value409=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 947, "sType")),"long",(_Bool)0,info))));
}        param_types_321=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 947, "struct list$1sTypeph")),3,__list_values13___320));
        /*g*/come_call_finalizer3(__right_value405,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value407,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value409,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___322[0]=come_increment_ref_count(((char*)(__right_value412=__builtin_string("b"))));
__list_values14___322[1]=come_increment_ref_count(((char*)(__right_value413=__builtin_string("c"))));
__list_values14___322[2]=come_increment_ref_count(((char*)(__right_value414=__builtin_string("len"))));
}        param_names_323=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 948, "struct list$1charph")),3,__list_values14___322));
        __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_324=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 949, "list$1charph"))));
        main_fun_325=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 950, "sFun")),(char*)come_increment_ref_count(name_318),(struct sType*)come_increment_ref_count(result_type_319),(struct list$1sTypeph*)come_increment_ref_count(param_types_321),(struct list$1charph*)come_increment_ref_count(param_names_323),(struct list$1charph*)come_increment_ref_count(param_default_parametors_324),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_318)),(struct sFun*)come_increment_ref_count(main_fun_325));
        name_318 = come_decrement_ref_count2(name_318, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_319,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_321,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_323,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_324,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_325,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_326=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 961, "sType")),"char*",(_Bool)0,info));
        {__list_values15___328[0]=come_increment_ref_count(((struct sType*)(__right_value428=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 962, "sType")),"char*",(_Bool)0,info))));
}        param_types_329=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 962, "struct list$1sTypeph")),1,__list_values15___328));
        /*g*/come_call_finalizer3(__right_value428,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___330[0]=come_increment_ref_count(((char*)(__right_value431=__builtin_string("str"))));
}        param_names_331=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 963, "struct list$1charph")),1,__list_values16___330));
        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_332=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 964, "list$1charph"))));
        main_fun_333=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 965, "sFun")),(char*)come_increment_ref_count(name_326),(struct sType*)come_increment_ref_count(result_type_327),(struct list$1sTypeph*)come_increment_ref_count(param_types_329),(struct list$1charph*)come_increment_ref_count(param_names_331),(struct list$1charph*)come_increment_ref_count(param_default_parametors_332),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_326)),(struct sFun*)come_increment_ref_count(main_fun_333));
        name_326 = come_decrement_ref_count2(name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_329,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_331,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_332,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_333,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_334=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_335=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 976, "sType")),"void",(_Bool)0,info));
        {__list_values17___336[0]=come_increment_ref_count(((struct sType*)(__right_value445=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info))));
__list_values17___336[1]=come_increment_ref_count(((struct sType*)(__right_value447=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info))));
__list_values17___336[2]=come_increment_ref_count(((struct sType*)(__right_value449=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 977, "sType")),"int",(_Bool)0,info))));
}        param_types_337=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 977, "struct list$1sTypeph")),3,__list_values17___336));
        /*g*/come_call_finalizer3(__right_value445,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value447,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value449,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___338[0]=come_increment_ref_count(((char*)(__right_value452=xsprintf("come_malloc"))));
__list_values18___338[1]=come_increment_ref_count(((char*)(__right_value453=xsprintf("come_debug"))));
__list_values18___338[2]=come_increment_ref_count(((char*)(__right_value454=xsprintf("come_gc"))));
}        param_names_339=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 978, "struct list$1charph")),3,__list_values18___338));
        __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_340=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 979, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_340,((void*)0));
        main_fun_341=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 981, "sFun")),(char*)come_increment_ref_count(name_334),(struct sType*)come_increment_ref_count(result_type_335),(struct list$1sTypeph*)come_increment_ref_count(param_types_337),(struct list$1charph*)come_increment_ref_count(param_names_339),(struct list$1charph*)come_increment_ref_count(param_default_parametors_340),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_334)),(struct sFun*)come_increment_ref_count(main_fun_341));
        name_334 = come_decrement_ref_count2(name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_335,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_337,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_339,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_340,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_341,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_342=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_343=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 992, "sType")),"void",(_Bool)0,info));
        param_types_344=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 993, "list$1sTypeph"))));
        param_names_345=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 994, "list$1charph"))));
        param_default_parametors_346=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 995, "list$1charph"))));
        main_fun_347=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 996, "sFun")),(char*)come_increment_ref_count(name_342),(struct sType*)come_increment_ref_count(result_type_343),(struct list$1sTypeph*)come_increment_ref_count(param_types_344),(struct list$1charph*)come_increment_ref_count(param_names_345),(struct list$1charph*)come_increment_ref_count(param_default_parametors_346),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_342)),(struct sFun*)come_increment_ref_count(main_fun_347));
        name_342 = come_decrement_ref_count2(name_342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_343,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_344,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_345,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_346,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_347,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_348=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_349=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1007, "sType")),"void*",(_Bool)0,info));
        {__list_values19___350[0]=come_increment_ref_count(((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"void*",(_Bool)0,info))));
__list_values19___350[1]=come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"char*",(_Bool)0,info))));
__list_values19___350[2]=come_increment_ref_count(((struct sType*)(__right_value486=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"int",(_Bool)0,info))));
__list_values19___350[3]=come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1008, "sType")),"int",(_Bool)0,info))));
}        param_types_351=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1008, "struct list$1sTypeph")),4,__list_values19___350));
        /*g*/come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value486,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___352[0]=come_increment_ref_count(((char*)(__right_value491=__builtin_string("mem"))));
__list_values20___352[1]=come_increment_ref_count(((char*)(__right_value492=__builtin_string("sname"))));
__list_values20___352[2]=come_increment_ref_count(((char*)(__right_value493=__builtin_string("sline"))));
__list_values20___352[3]=come_increment_ref_count(((char*)(__right_value494=__builtin_string("id"))));
}        param_names_353=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1009, "struct list$1charph")),4,__list_values20___352));
        __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_354=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1010, "list$1charph"))));
        main_fun_355=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1011, "sFun")),(char*)come_increment_ref_count(name_348),(struct sType*)come_increment_ref_count(result_type_349),(struct list$1sTypeph*)come_increment_ref_count(param_types_351),(struct list$1charph*)come_increment_ref_count(param_names_353),(struct list$1charph*)come_increment_ref_count(param_default_parametors_354),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_348)),(struct sFun*)come_increment_ref_count(main_fun_355));
        name_348 = come_decrement_ref_count2(name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_349,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_351,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_353,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_354,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_355,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_356=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_357=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1022, "sType")),"void",(_Bool)0,info));
        param_types_358=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1023, "list$1sTypeph"))));
        param_names_359=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1024, "list$1charph"))));
        param_default_parametors_360=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1025, "list$1charph"))));
        fun_361=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1026, "sFun")),(char*)come_increment_ref_count(name_356),(struct sType*)come_increment_ref_count(result_type_357),(struct list$1sTypeph*)come_increment_ref_count(param_types_358),(struct list$1charph*)come_increment_ref_count(param_names_359),(struct list$1charph*)come_increment_ref_count(param_default_parametors_360),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_356)),(struct sFun*)come_increment_ref_count(fun_361));
        name_356 = come_decrement_ref_count2(name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_357,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_358,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_359,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_360,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_361,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_362=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_363=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1037, "sType")),"void",(_Bool)0,info));
        param_types_364=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1038, "list$1sTypeph"))));
        param_names_365=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1039, "list$1charph"))));
        param_default_parametors_366=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1040, "list$1charph"))));
        fun_367=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1041, "sFun")),(char*)come_increment_ref_count(name_362),(struct sType*)come_increment_ref_count(result_type_363),(struct list$1sTypeph*)come_increment_ref_count(param_types_364),(struct list$1charph*)come_increment_ref_count(param_names_365),(struct list$1charph*)come_increment_ref_count(param_default_parametors_366),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_362)),(struct sFun*)come_increment_ref_count(fun_367));
        name_362 = come_decrement_ref_count2(name_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_363,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_364,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_365,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_366,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_367,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_224;
struct list$1sTypeph* __result130__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_224=0;    i_224<num_value;    i_224++    ){
        list$1sTypeph_push_back(self,values[i_224]);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value246 = (void*)0;
struct list_item$1sTypeph* litem_225;
struct sType* __dec_obj148;
void* __right_value247 = (void*)0;
struct list_item$1sTypeph* litem_226;
struct sType* __dec_obj149;
void* __right_value248 = (void*)0;
struct list_item$1sTypeph* litem_227;
struct sType* __dec_obj150;
struct list$1sTypeph* __result129__;
    if(    self->len==0) {
        litem_225=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value246=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 221, "list_item$1sTypeph"))));
        litem_225->prev=((void*)0);
        litem_225->next=((void*)0);
        __dec_obj148=litem_225->item;
        litem_225->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_225;
        self->head=litem_225;
    }
    else if(    self->len==1) {
        litem_226=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value247=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 231, "list_item$1sTypeph"))));
        litem_226->prev=self->head;
        litem_226->next=((void*)0);
        __dec_obj149=litem_226->item;
        litem_226->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_226;
        self->head->next=litem_226;
    }
    else {
        litem_227=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value248=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 241, "list_item$1sTypeph"))));
        litem_227->prev=self->tail;
        litem_227->next=((void*)0);
        __dec_obj150=litem_227->item;
        litem_227->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_227;
        self->tail=litem_227;
    }
    self->len++;
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_230;
struct list$1charph* __result132__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_230=0;    i_230<num_value;    i_230++    ){
        list$1charph_push_back(self,values[i_230]);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct list_item$1charph* litem_231;
char* __dec_obj151;
void* __right_value257 = (void*)0;
struct list_item$1charph* litem_232;
char* __dec_obj152;
void* __right_value258 = (void*)0;
struct list_item$1charph* litem_233;
char* __dec_obj153;
struct list$1charph* __result131__;
    if(    self->len==0) {
        litem_231=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value256=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_231->prev=((void*)0);
        litem_231->next=((void*)0);
        __dec_obj151=litem_231->item;
        litem_231->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_231;
        self->head=litem_231;
    }
    else if(    self->len==1) {
        litem_232=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value257=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
        litem_232->prev=self->head;
        litem_232->next=((void*)0);
        __dec_obj152=litem_232->item;
        litem_232->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_232;
        self->head->next=litem_232;
    }
    else {
        litem_233=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value258=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
        litem_233->prev=self->tail;
        litem_233->next=((void*)0);
        __dec_obj153=litem_233->item;
        litem_233->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_233;
        self->tail=litem_233;
    }
    self->len++;
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_254;
unsigned int it_255;
_Bool same_key_exist_272;
char* it2_275;
struct map$2charphsFunph* __result153__;
    if(    self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_254=string_get_hash_key(key)%self->size;
    it_255=hash_254;
    while((_Bool)1) {
        if(        self->item_existance[it_255]) {
            if(            string_equals(self->keys[it_255],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_255]);
                    self->keys[it_255] = come_decrement_ref_count2(self->keys[it_255], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_255]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_255]);
                    self->keys[it_255]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_255],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_255]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_255]=item;
                }
                break;
            }
            it_255++;
            if(            it_255>=self->size) {
                it_255=0;
            }
            else if(            it_255==hash_254) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_255]=(_Bool)1;
            if(            1) {
                self->keys[it_255]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_255]=key;
            }
            if(            1) {
                self->items[it_255]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_255]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_272=(_Bool)0;
    for(    it2_275=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_275=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_275,key)) {
            same_key_exist_272=(_Bool)1;
        }
    }
    if(    !same_key_exist_272) {
        list$1charp_push_back(self->key_list,key);
    }
    __result153__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_237;
void* __right_value270 = (void*)0;
char** keys_238;
void* __right_value271 = (void*)0;
struct sFun** items_239;
void* __right_value272 = (void*)0;
_Bool* item_existance_240;
int len_241;
char* it_244;
struct sFun* default_value_247;
struct sFun* it2_248;
unsigned int hash_251;
int n_252;
struct sFun* default_value_253;
default_value_247 = (void*)0;
default_value_253 = (void*)0;
    size_237=self->size*10;
    keys_238=(char**)come_increment_ref_count(((char**)(__right_value270=(char**)come_calloc(1, sizeof(char*)*(1*(size_237)), "./comelang.h", 1621, "char*%"))));
    items_239=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value271=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_237)), "./comelang.h", 1622, "sFun*%"))));
    item_existance_240=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value272=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_237)), "./comelang.h", 1623, "bool"))));
    len_241=0;
    for(    it_244=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_244=map$2charphsFunph_next(self)    ){
        memset(&default_value_247,0,sizeof(struct sFun*));
        it2_248=map$2charphsFunph_at(self,it_244,default_value_247);
        hash_251=string_get_hash_key(it_244)%size_237;
        n_252=hash_251;
        while((_Bool)1) {
            if(            item_existance_240[n_252]) {
                n_252++;
                if(                n_252>=size_237) {
                    n_252=0;
                }
                else if(                n_252==hash_251) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_240[n_252]=(_Bool)1;
                keys_238[n_252]=it_244;
                items_239[n_252]=map$2charphsFunph_at(self,it_244,default_value_253);
                len_241++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_238;
    self->items=items_239;
    self->item_existance=item_existance_240;
    self->size=size_237;
    self->len=len_241;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_242;
char* __result133__;
char* __result134__;
char* result_243;
char* __result135__;
result_242 = (void*)0;
result_243 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_242,0,sizeof(char*));
        __result133__ = gComeFunResultObject = __result_obj__ = result_242;
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result134__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result134__;
    }
    memset(&result_243,0,sizeof(char*));
    __result135__ = gComeFunResultObject = __result_obj__ = result_243;
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_245;
char* __result136__;
char* __result137__;
char* result_246;
char* __result138__;
result_245 = (void*)0;
result_246 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_245,0,sizeof(char*));
        __result136__ = gComeFunResultObject = __result_obj__ = result_245;
        gComeFunResultObject = (void*)0;
        return __result136__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result137__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    memset(&result_246,0,sizeof(char*));
    __result138__ = gComeFunResultObject = __result_obj__ = result_246;
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_249;
unsigned int it_250;
struct sFun* __result139__;
struct sFun* __result140__;
struct sFun* __result141__;
struct sFun* __result142__;
    hash_249=string_get_hash_key(((char*)key))%self->size;
    it_250=hash_249;
    while((_Bool)1) {
        if(        self->item_existance[it_250]) {
            if(            string_equals(self->keys[it_250],key)) {
                __result139__ = gComeFunResultObject = __result_obj__ = self->items[it_250];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result139__;
            }
            it_250++;
            if(            it_250>=self->size) {
                it_250=0;
            }
            else if(            it_250==hash_249) {
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
int it2_256;
struct list_item$1charp* it_257;
struct list$1charp* __result146__;
    it2_256=0;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        if(        charp_equals(it_257->item,item)) {
            list$1charp_delete(self,it2_256,it2_256+1);
            break;
        }
        it2_256++;
        it_257=it_257->next;
    }
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result146__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_258;
struct list$1charp* __result143__;
struct list_item$1charp* it_261;
int i_262;
struct list_item$1charp* prev_it_263;
struct list_item$1charp* it_264;
int i_265;
struct list_item$1charp* prev_it_266;
struct list_item$1charp* it_267;
struct list_item$1charp* head_prev_it_268;
struct list_item$1charp* tail_it_269;
int i_270;
struct list_item$1charp* prev_it_271;
struct list$1charp* __result145__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_258=tail;
        tail=head;
        head=tmp_258;
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
        it_261=self->head;
        i_262=0;
        while(it_261!=((void*)0)) {
            if(            i_262<tail) {
                prev_it_263=it_261;
                it_261=it_261->next;
                i_262++;
                /*i*/come_call_finalizer3(prev_it_263,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_262==tail) {
                self->head=it_261;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_261=it_261->next;
                i_262++;
            }
        }
    }
    else if(    tail==self->len) {
        it_264=self->head;
        i_265=0;
        while(it_264!=((void*)0)) {
            if(            i_265==head) {
                self->tail=it_264->prev;
                self->tail->next=((void*)0);
            }
            if(            i_265>=head) {
                prev_it_266=it_264;
                it_264=it_264->next;
                i_265++;
                /*i*/come_call_finalizer3(prev_it_266,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_264=it_264->next;
                i_265++;
            }
        }
    }
    else {
        it_267=self->head;
        head_prev_it_268=((void*)0);
        tail_it_269=((void*)0);
        i_270=0;
        while(it_267!=((void*)0)) {
            if(            i_270==head) {
                head_prev_it_268=it_267->prev;
            }
            if(            i_270==tail) {
                tail_it_269=it_267;
            }
            if(            i_270>=head&&i_270<tail) {
                prev_it_271=it_267;
                it_267=it_267->next;
                i_270++;
                /*i*/come_call_finalizer3(prev_it_271,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_267=it_267->next;
                i_270++;
            }
        }
        if(        head_prev_it_268!=((void*)0)) {
            head_prev_it_268->next=tail_it_269;
        }
        if(        tail_it_269!=((void*)0)) {
            tail_it_269->prev=head_prev_it_268;
        }
    }
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_259;
struct list_item$1charp* prev_it_260;
struct list$1charp* __result144__;
    it_259=self->head;
    while(it_259!=((void*)0)) {
        prev_it_260=it_259;
        it_259=it_259->next;
        /*i*/come_call_finalizer3(prev_it_260,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
char* result_273;
char* __result147__;
char* __result148__;
char* result_274;
char* __result149__;
result_273 = (void*)0;
result_274 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_273,0,sizeof(char*));
        __result147__ = gComeFunResultObject = __result_obj__ = result_273;
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    self->it=self->head;
    if(    self->it) {
        __result148__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result148__;
    }
    memset(&result_274,0,sizeof(char*));
    __result149__ = gComeFunResultObject = __result_obj__ = result_274;
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_276;
char* __result150__;
char* __result151__;
char* result_277;
char* __result152__;
result_276 = (void*)0;
result_277 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_276,0,sizeof(char*));
        __result150__ = gComeFunResultObject = __result_obj__ = result_276;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result151__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    memset(&result_277,0,sizeof(char*));
    __result152__ = gComeFunResultObject = __result_obj__ = result_277;
    gComeFunResultObject = (void*)0;
    return __result152__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_368;
_Bool is_type_name_flag_369;
int sline_370;
_Bool define_struct_nobody_371;
char* p_372;
int sline_373;
void* __right_value532 = (void*)0;
char* word_374;
_Bool define_function_pointer_result_function_375;
_Bool define_variable_between_brace_376;
char* p_377;
void* __right_value533 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_378;
char* fun_name_379;
_Bool err_380;
void* __right_value534 = (void*)0;
char* word_381;
_Bool define_function_flag_382;
char* p_383;
void* __right_value535 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_384;
char* fun_name_385;
_Bool err_386;
char* word_387;
void* __right_value536 = (void*)0;
char* __dec_obj156;
void* __right_value537 = (void*)0;
char* __dec_obj157;
char* __dec_obj158;
void* __right_value538 = (void*)0;
char* __dec_obj159;
_Bool define_variable_388;
char* p_389;
void* __right_value539 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_390;
char* fun_name_391;
_Bool err_392;
void* __right_value540 = (void*)0;
char* word_393;
void* __right_value541 = (void*)0;
char* word_394;
char* p_395;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* word_396;
void* __right_value544 = (void*)0;
char* __dec_obj160;
void* __right_value545 = (void*)0;
char* word_397;
void* __right_value546 = (void*)0;
char* word_400;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sNode* node_401;
struct sNode* __result155__;
void* __right_value549 = (void*)0;
struct sNode* __result156__;
char* header_head_402;
void* __right_value550 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_403;
char* fun_name_404;
_Bool err_405;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1sTypeph* param_types_406;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct list$1charph* param_names_407;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_408;
char* param_name_409;
_Bool err_410;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1sTypeph* param_types2_412;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct list$1charph* param_names2_413;
void* __right_value562 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_414;
char* param_name_415;
_Bool err_416;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
char* header_tail_418;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* result_type2_419;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct tuple1$1sTypeph* __dec_obj162;
void* __right_value569 = (void*)0;
struct list$1sTypeph* __dec_obj163;
void* __right_value570 = (void*)0;
struct list$1charph* __dec_obj164;
_Bool var_args_420;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct buffer* header_buf_421;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1charph* param_default_parametors_422;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sFun* fun_423;
void* __right_value580 = (void*)0;
struct sFun* fun2_427;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value618 = (void*)0;
struct sNode* __result185__;
void* __right_value619 = (void*)0;
struct sNode* node_462;
struct sNode* __result186__;
void* __right_value620 = (void*)0;
struct sNode* node_463;
char* source_tail_464;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct buffer* header_465;
struct sNode* __result187__;
void* __right_value623 = (void*)0;
char* buf2_466;
void* __right_value624 = (void*)0;
struct sNode* __result188__;
    source_head_368=info->p;
    is_type_name_flag_369=is_type_name(buf,info);
    sline_370=info->sline;
    define_struct_nobody_371=(_Bool)0;
    {
        p_372=info->p;
        sline_373=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_374=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_371=(_Bool)1;
                }
                word_374 = come_decrement_ref_count2(word_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_373;
    }
    define_function_pointer_result_function_375=(_Bool)0;
    define_variable_between_brace_376=(_Bool)0;
    if(    is_type_name_flag_369) {
        p_377=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value533=backtrace_parse_type((_Bool)0,info)));
            result_type_378=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_379=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_380=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value533,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_375=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_381=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_381,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_376=(_Bool)1;
                            }
                        }
                        word_381 = come_decrement_ref_count2(word_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_379 = come_decrement_ref_count2(fun_name_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_370;
    }
    define_function_flag_382=(_Bool)0;
    if(    is_type_name_flag_369&&!define_function_pointer_result_function_375&&charp_operator_not_equals(buf,"__typeof__")) {
        p_383=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value535=backtrace_parse_type((_Bool)0,info)));
            result_type_384=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_385=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_386=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value535,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_384,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_385 = come_decrement_ref_count2(fun_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_387=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj156=word_387;
                word_387=(char*)come_increment_ref_count(parse_word(info));
                /*G*/ __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_387,"extern")) {
                    __dec_obj157=word_387;
                    word_387=(char*)come_increment_ref_count(parse_word(info));
                    /*G*/ __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj158=word_387;
                word_387=((void*)0);
                /*G*/ __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_387) {
                if(                is_type_name(word_387,info)) {
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
                        __dec_obj159=word_387;
                        word_387=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_387)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_369) {
                        define_function_flag_382=(_Bool)1;
                    }
                }
            }
            word_387 = come_decrement_ref_count2(word_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_383;
        info->sline=sline_370;
    }
    define_variable_388=(_Bool)1;
    if(    is_type_name_flag_369&&!define_function_pointer_result_function_375) {
        p_389=info->p;
        info->p=head;
        if(        !is_type_name_flag_369) {
            define_variable_388=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value539=backtrace_parse_type((_Bool)0,info)));
            result_type_390=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_391=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_392=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value539,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_393=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_388=(_Bool)1;
                            }
                        }
                        word_393 = come_decrement_ref_count2(word_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_394=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_394,info)&&*info->p!=40) {
                            define_variable_388=(_Bool)1;
                        }
                    }
                    word_394 = come_decrement_ref_count2(word_394, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            /*i*/come_call_finalizer3(result_type_390,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_391 = come_decrement_ref_count2(fun_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_388=(_Bool)0;
        }
        else if(        define_variable_388) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_388=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_388=(_Bool)0;
            }
        }
        info->p=p_389;
        info->sline=sline_370;
    }
    else {
        define_variable_388=(_Bool)0;
    }
    {
        p_395=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value542=parse_word(info)));
                __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_396=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj160=word_396;
                        word_396=(char*)come_increment_ref_count(parse_word(info));
                        /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_396,"extends")) {
                            define_variable_388=(_Bool)0;
                        }
                    }
                    word_396 = come_decrement_ref_count2(word_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_388=(_Bool)0;
        }
        else if(        define_variable_388) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_388=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_388=(_Bool)0;
            }
        }
        info->p=p_395;
        info->sline=sline_370;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_397=(char*)come_increment_ref_count(parse_word(info));
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
                    word_400=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_400)));
                    word_400 = come_decrement_ref_count2(word_400, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_401=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result155__ = gComeFunResultObject = __result_obj__ = node_401;
            if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_397 = come_decrement_ref_count2(word_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result155__;
            if(node_401) { node_401 = come_decrement_ref_count2(node_401, ((struct sNode*)node_401)->finalize, ((struct sNode*)node_401)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_397 = come_decrement_ref_count2(word_397, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_struct_nobody_371) {
    }
    else if(    define_variable_between_brace_376) {
        info->p=head;
        info->sline=sline_370;
        __result156__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value549=parse_global_variable(info)));
        if(__right_value549) { __right_value549 = come_decrement_ref_count2(__right_value549, ((struct sNode*)__right_value549)->finalize, ((struct sNode*)__right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    else if(    define_function_pointer_result_function_375) {
        header_head_402=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value550=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_403=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_404=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_405=multiple_assign_var4->v3;
        /*g*/come_call_finalizer3(__right_value550,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_406=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1365, "list$1sTypeph"))));
            param_names_407=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1366, "list$1charph"))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value555=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_408=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_409=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_410=multiple_assign_var5->v3;
                    /*g*/come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_410) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypeph_push_back(param_types_406,(struct sType*)come_increment_ref_count(param_type_408));
                    static int num_function_pointer_result_var_name_a_411=0;
                    list$1charph_push_back(param_names_407,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_411)));
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
                        /*i*/come_call_finalizer3(param_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_409 = come_decrement_ref_count2(param_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    /*i*/come_call_finalizer3(param_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_409 = come_decrement_ref_count2(param_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_412=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1412, "list$1sTypeph"))));
                param_names2_413=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1413, "list$1charph"))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value562=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_414=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_415=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_416=multiple_assign_var6->v3;
                        /*g*/come_call_finalizer3(__right_value562,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_416) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypeph_push_back(param_types2_412,(struct sType*)come_increment_ref_count(param_type_414));
                        static int num_function_pointer_result_var_name_b_417=0;
                        list$1charph_push_back(param_names2_413,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_417)));
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
                            /*i*/come_call_finalizer3(param_type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_415 = come_decrement_ref_count2(param_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_type_414,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_415 = come_decrement_ref_count2(param_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_418=info->p;
                result_type2_419=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1455, "sType")),"lambda",(_Bool)0,info));
                __dec_obj162=result_type2_419->mResultType;
                result_type2_419->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1457, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_403)));
                come_call_finalizer3(__dec_obj162,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj163=result_type2_419->mParamTypes;
                result_type2_419->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_412));
                come_call_finalizer3(__dec_obj163,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj164=result_type2_419->mParamNames;
                result_type2_419->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_413));
                come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_419->mVarArgs=(_Bool)0;
                result_type2_419->mStatic=(_Bool)0;
                var_args_420=(_Bool)0;
                header_buf_421=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1465, "buffer"))));
                buffer_append(header_buf_421,header_head_402,header_tail_418-header_head_402);
                buffer_append_char(header_buf_421,0);
                param_default_parametors_422=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1469, "list$1charph"))));
                fun_423=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1471, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_404)),(struct sType*)come_increment_ref_count(result_type2_419),(struct list$1sTypeph*)come_increment_ref_count(param_types_406),(struct list$1charph*)come_increment_ref_count(param_names_407),(struct list$1charph*)come_increment_ref_count(param_default_parametors_422),(_Bool)1,var_args_420,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_421)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                fun2_427=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value580=__builtin_string(fun_name_404))));
                __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_427==((void*)0)||fun2_427->mExternal) {
                    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_404)),(struct sFun*)come_increment_ref_count(fun_423));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1483, "struct sNode");
                _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value583=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1483, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_423),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result185__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value618=_inf_value2));
                /*i*/come_call_finalizer3(param_types2_412,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_413,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_419,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_423,sFun_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_406,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_407,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_404 = come_decrement_ref_count2(fun_name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value583,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value618) { __right_value618 = come_decrement_ref_count2(__right_value618, ((struct sNode*)__right_value618)->finalize, ((struct sNode*)__right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result185__;
                /*i*/come_call_finalizer3(param_types2_412,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names2_413,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type2_419,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_421,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_422,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_423,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            /*i*/come_call_finalizer3(param_types_406,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_407,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_403,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_404 = come_decrement_ref_count2(fun_name_404, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    define_function_flag_382) {
        info->p=head;
        info->sline=sline_370;
        node_462=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result186__ = gComeFunResultObject = __result_obj__ = node_462;
        if(node_462) { node_462 = come_decrement_ref_count2(node_462, ((struct sNode*)node_462)->finalize, ((struct sNode*)node_462)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result186__;
        if(node_462) { node_462 = come_decrement_ref_count2(node_462, ((struct sNode*)node_462)->finalize, ((struct sNode*)node_462)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_388) {
        info->p=head;
        info->sline=sline_370;
        node_463=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_464=info->p;
        header_465=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1507, "buffer"))));
        buffer_append(header_465,source_head_368,source_tail_464-source_head_368);
        __result187__ = gComeFunResultObject = __result_obj__ = node_463;
        if(node_463) { node_463 = come_decrement_ref_count2(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0, 1, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result187__;
        if(node_463) { node_463 = come_decrement_ref_count2(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(header_465,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_370;
    buf2_466=(char*)come_increment_ref_count(parse_word(info));
    __result188__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value624=top_level_v98(buf2_466,head,head_sline,info)));
    buf2_466 = come_decrement_ref_count2(buf2_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* it_398;
struct list_item$1charph* prev_it_399;
struct list$1charph* __result154__;
    it_398=self->head;
    while(it_398!=((void*)0)) {
        prev_it_399=it_398;
        it_398=it_398->next;
        /*i*/come_call_finalizer3(prev_it_399,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sFun* default_value_424;
unsigned int hash_425;
unsigned int it_426;
struct sFun* __result158__;
struct sFun* __result159__;
struct sFun* __result160__;
struct sFun* __result161__;
default_value_424 = (void*)0;
    memset(&default_value_424,0,sizeof(struct sFun*));
    hash_425=string_get_hash_key(((char*)key))%self->size;
    it_426=hash_425;
    while((_Bool)1) {
        if(        self->item_existance[it_426]) {
            if(            string_equals(self->keys[it_426],key)) {
                __result158__ = gComeFunResultObject = __result_obj__ = self->items[it_426];
                /*i*/come_call_finalizer3(default_value_424,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result158__;
            }
            it_426++;
            if(            it_426>=self->size) {
                it_426=0;
            }
            else if(            it_426==hash_425) {
                __result159__ = gComeFunResultObject = __result_obj__ = default_value_424;
                /*i*/come_call_finalizer3(default_value_424,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result159__;
            }
        }
        else {
            __result160__ = gComeFunResultObject = __result_obj__ = default_value_424;
            /*i*/come_call_finalizer3(default_value_424,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result160__;
        }
    }
    __result161__ = gComeFunResultObject = __result_obj__ = default_value_424;
    /*i*/come_call_finalizer3(default_value_424,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result161__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result163__;
void* __right_value586 = (void*)0;
struct sFun* result_429;
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
    result_429=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj168=result_429->mName;
        result_429->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj169=result_429->mResultType;
        result_429->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj170=result_429->mParamTypes;
        result_429->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj170,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj171=result_429->mParamNames;
        result_429->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj171,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj172=result_429->mParamDefaultParametors;
        result_429->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj172,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj173=result_429->mLambdaType;
        result_429->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        come_call_finalizer3(__dec_obj173,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj179=result_429->mBlock;
        result_429->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj179,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_429->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj180=result_429->mSource;
        result_429->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        come_call_finalizer3(__dec_obj180,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj181=result_429->mSourceHead;
        result_429->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        come_call_finalizer3(__dec_obj181,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj182=result_429->mSourceHead2;
        result_429->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj183=result_429->mSourceDefer;
        result_429->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj184=result_429->mComeHeader;
        result_429->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        /*G*/ __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj185=result_429->mDeclareSName;
        result_429->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_429->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result183__ = gComeFunResultObject = __result_obj__ = result_429;
    /*i*/come_call_finalizer3(result_429,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result164__;
void* __right_value593 = (void*)0;
struct sBlock* result_430;
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
    result_430=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj174=result_430->mNodes;
        result_430->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj174,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj178=result_430->mVarTable;
        result_430->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj178,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_430->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result182__ = gComeFunResultObject = __result_obj__ = result_430;
    /*i*/come_call_finalizer3(result_430,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result165__;
void* __right_value595 = (void*)0;
struct sVarTable* result_431;
void* __right_value608 = (void*)0;
struct map$2charphsVarph* __dec_obj177;
struct sVarTable* __result181__;
    if(    self==(void*)0) {
        __result165__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    result_431=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj177=result_431->mVars;
        result_431->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj177,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_431->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_431->mID=self->mID;
    }
    __result181__ = gComeFunResultObject = __result_obj__ = result_431;
    /*i*/come_call_finalizer3(result_431,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result166__;
void* __right_value596 = (void*)0;
void* __right_value602 = (void*)0;
struct map$2charphsVarph* result_435;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1charp* __dec_obj176;
char* it_438;
struct sVar* default_value_441;
struct sVar* it2_444;
struct map$2charphsVarph* __result180__;
default_value_441 = (void*)0;
    if(    self==((void*)0)) {
        __result166__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result166__;
    }
    result_435=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 1464, "map$2charphsVarph"))));
    __dec_obj176=result_435->key_list;
    result_435->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1466, "list$1charp"))));
    come_call_finalizer3(__dec_obj176,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_438=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_438=map$2charphsVarph_next(self)    ){
        memset(&default_value_441,0,sizeof(struct sVar*));
        it2_444=map$2charphsVarph_at(self,it_438,default_value_441);
        map$2charphsVarph_put(result_435,it_438,it2_444);
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_435;
    /*i*/come_call_finalizer3(result_435,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
int i_432;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1charp* __dec_obj175;
struct map$2charphsVarph* __result168__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value597=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1370, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value598=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1371, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value599=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1372, "bool"))));
    for(    i_432=0;    i_432<128;    i_432++    ){
        self->item_existance[i_432]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj175=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1382, "list$1charp"))));
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
int i_433;
int i_434;
    for(    i_433=0;    i_433<self->size;    i_433++    ){
        if(        self->item_existance[i_433]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_433],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_434=0;    i_434<self->size;    i_434++    ){
        if(        self->item_existance[i_434]) {
            if(            1) {
                self->keys[i_434] = come_decrement_ref_count2(self->keys[i_434], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_436;
char* __result169__;
char* __result170__;
char* result_437;
char* __result171__;
result_436 = (void*)0;
result_437 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_436,0,sizeof(char*));
        __result169__ = gComeFunResultObject = __result_obj__ = result_436;
        gComeFunResultObject = (void*)0;
        return __result169__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result170__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    memset(&result_437,0,sizeof(char*));
    __result171__ = gComeFunResultObject = __result_obj__ = result_437;
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_439;
char* __result172__;
char* __result173__;
char* result_440;
char* __result174__;
result_439 = (void*)0;
result_440 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_439,0,sizeof(char*));
        __result172__ = gComeFunResultObject = __result_obj__ = result_439;
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result173__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result173__;
    }
    memset(&result_440,0,sizeof(char*));
    __result174__ = gComeFunResultObject = __result_obj__ = result_440;
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_442;
unsigned int it_443;
struct sVar* __result175__;
struct sVar* __result176__;
struct sVar* __result177__;
struct sVar* __result178__;
    hash_442=string_get_hash_key(((char*)key))%self->size;
    it_443=hash_442;
    while((_Bool)1) {
        if(        self->item_existance[it_443]) {
            if(            string_equals(self->keys[it_443],key)) {
                __result175__ = gComeFunResultObject = __result_obj__ = self->items[it_443];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result175__;
            }
            it_443++;
            if(            it_443>=self->size) {
                it_443=0;
            }
            else if(            it_443==hash_442) {
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
unsigned int hash_456;
int it_457;
_Bool same_key_exist_458;
char* it2_459;
struct map$2charphsVarph* __result179__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_456=string_get_hash_key(key)%self->size;
    it_457=hash_456;
    while((_Bool)1) {
        if(        self->item_existance[it_457]) {
            if(            string_equals(self->keys[it_457],key)) {
                if(                1) {
                    self->keys[it_457] = come_decrement_ref_count2(self->keys[it_457], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_457]);
                    self->keys[it_457]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_457]);
                    self->keys[it_457]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_457],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_457]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_457]=item;
                }
                break;
            }
            it_457++;
            if(            it_457>=self->size) {
                it_457=0;
            }
            else if(            it_457==hash_456) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_457]=(_Bool)1;
            if(            1) {
                self->keys[it_457]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_457]=key;
            }
            if(            1) {
                self->items[it_457]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_457]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_458=(_Bool)0;
    for(    it2_459=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_459=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_459,key)) {
            same_key_exist_458=(_Bool)1;
        }
    }
    if(    !same_key_exist_458) {
        list$1charp_push_back(self->key_list,key);
    }
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_445;
void* __right_value605 = (void*)0;
char** keys_446;
void* __right_value606 = (void*)0;
struct sVar** items_447;
void* __right_value607 = (void*)0;
_Bool* item_existance_448;
int len_449;
char* it_450;
struct sVar* default_value_451;
struct sVar* it2_452;
unsigned int hash_453;
int n_454;
struct sVar* default_value_455;
default_value_451 = (void*)0;
default_value_455 = (void*)0;
    size_445=self->size*10;
    keys_446=(char**)come_increment_ref_count(((char**)(__right_value605=(char**)come_calloc(1, sizeof(char*)*(1*(size_445)), "./comelang.h", 1621, "char*%"))));
    items_447=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value606=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_445)), "./comelang.h", 1622, "sVar*%"))));
    item_existance_448=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value607=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_445)), "./comelang.h", 1623, "bool"))));
    len_449=0;
    for(    it_450=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_450=map$2charphsVarph_next(self)    ){
        memset(&default_value_451,0,sizeof(struct sVar*));
        it2_452=map$2charphsVarph_at(self,it_450,default_value_451);
        hash_453=string_get_hash_key(it_450)%size_445;
        n_454=hash_453;
        while((_Bool)1) {
            if(            item_existance_448[n_454]) {
                n_454++;
                if(                n_454>=size_445) {
                    n_454=0;
                }
                else if(                n_454==hash_453) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_448[n_454]=(_Bool)1;
                keys_446[n_454]=it_450;
                items_447[n_454]=map$2charphsVarph_at(self,it_450,default_value_455);
                len_449++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_446;
    self->items=items_447;
    self->item_existance=item_existance_448;
    self->size=size_445;
    self->len=len_449;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_460;
int i_461;
    for(    i_460=0;    i_460<self->size;    i_460++    ){
        if(        self->item_existance[i_460]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_460],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_461=0;    i_461<self->size;    i_461++    ){
        if(        self->item_existance[i_461]) {
            if(            1) {
                self->keys[i_461] = come_decrement_ref_count2(self->keys[i_461], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_467;
int caller_line_468;
char* caller_sname_469;
_Bool comma_instead_of_semicolon_470;
char* last_code_471;
char* __dec_obj187;
char* last_code2_472;
char* __dec_obj188;
char* last_code3_473;
char* __dec_obj189;
void* __right_value625 = (void*)0;
char* sname_top_474;
int sline_top_475;
struct sFun* funX_476;
_Bool __result189__;
void* __right_value626 = (void*)0;
struct sType* result_type_477;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1sTypeph* param_types_478;
struct list$1sTypeph* o2_saved_479;
struct sType* it_482;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
struct sType* param_type_485;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct list$1charph* param_names_486;
void* __right_value633 = (void*)0;
struct list$1charph* param_default_parametors_487;
char* p_488;
int sline_489;
char* sname_490;
char* head_491;
struct buffer* source_492;
void* __right_value634 = (void*)0;
struct buffer* __dec_obj190;
struct sType* generics_type_saved_493;
void* __right_value635 = (void*)0;
struct sType* __dec_obj191;
struct list$1charph* method_generics_type_names_494;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1charph* __dec_obj192;
struct list$1charph* o2_saved_495;
char* it_496;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct list$1charph* __dec_obj193;
char* __dec_obj194;
void* __right_value640 = (void*)0;
struct sBlock* block_497;
struct buffer* __dec_obj195;
char* __dec_obj196;
_Bool var_args_498;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct sFun* fun_499;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value652 = (void*)0;
struct sNode* node_500;
_Bool in_generics_fun_502;
void* __if_result__1_503 = (void*)0;
_Bool __result198__;
struct sType* __dec_obj201;
struct list$1charph* __dec_obj202;
void* __right_value653 = (void*)0;
char* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
char* __dec_obj206;
_Bool __result199__;
    caller_fun_467=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_468=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_469=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_470=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_471=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj187=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_472=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj188=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_473=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj189=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_474=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_475=info->sline;
    if(    generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_476=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_476) {
        __result189__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_471 = come_decrement_ref_count2(last_code_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_472 = come_decrement_ref_count2(last_code2_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_473 = come_decrement_ref_count2(last_code3_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_474 = come_decrement_ref_count2(sname_top_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result189__;
    }
    result_type_477=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_478=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1555, "list$1sTypeph"))));
    for(    o2_saved_479=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_482=list$1sTypeph_begin((o2_saved_479));    !list$1sTypeph_end((o2_saved_479));    it_482=list$1sTypeph_next((o2_saved_479))    ){
        param_type_485=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value629=sType_clone(it_482))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value629,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_485->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_478,(struct sType*)come_increment_ref_count(sType_clone(param_type_485)));
        /*i*/come_call_finalizer3(param_type_485,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_479,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_486=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_487=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_488=info->p;
    sline_489=info->sline;
    sname_490=(char*)come_increment_ref_count(info->sname);
    head_491=info->head;
    source_492=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj190=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj190,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_493=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj191=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    come_call_finalizer3(__dec_obj191,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_494=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj192=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1582, "list$1charph"))));
    come_call_finalizer3(__dec_obj192,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_495=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_496=list$1charph_begin((o2_saved_495));    !list$1charph_end((o2_saved_495));    it_496=list$1charph_next((o2_saved_495))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_496)));
    }
    /*i*/come_call_finalizer3(o2_saved_495,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj193=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj193,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj194=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_497=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_491;
    __dec_obj195=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_492);
    come_call_finalizer3(__dec_obj195,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_488;
    info->sline=sline_489;
    __dec_obj196=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_490);
    /*G*/ __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_477->mInline=(_Bool)0;
    var_args_498=generics_fun->mVarArgs;
    fun_499=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_477),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_478)),(struct list$1charph*)come_increment_ref_count(param_names_486),(struct list$1charph*)come_increment_ref_count(param_default_parametors_487),(_Bool)0,var_args_498,(struct sBlock*)come_increment_ref_count(block_497),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_499));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1611, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value648=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1611, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_499),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_500=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value648,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_502=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    if(    !node_compile(node_500,info)) {
        __result198__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_471 = come_decrement_ref_count2(last_code_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_472 = come_decrement_ref_count2(last_code2_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_473 = come_decrement_ref_count2(last_code3_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_474 = come_decrement_ref_count2(sname_top_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_478,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_487,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_490 = come_decrement_ref_count2(sname_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_492,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_493,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_494,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_497,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_499,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_500) { node_500 = come_decrement_ref_count2(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result198__;
    }
    info->in_generics_fun=in_generics_fun_502;
    __dec_obj201=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_493);
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj202=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_494);
    come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj203=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_474));
    /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_475;
    __dec_obj204=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_471);
    /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_472);
    /*G*/ __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj206=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_473);
    /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_467;
    info->caller_line=caller_line_468;
    info->caller_sname=caller_sname_469;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_470;
    __result199__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_471 = come_decrement_ref_count2(last_code_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_472 = come_decrement_ref_count2(last_code2_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_473 = come_decrement_ref_count2(last_code3_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_474 = come_decrement_ref_count2(sname_top_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_477,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_478,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_486,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_487,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_490 = come_decrement_ref_count2(sname_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_492,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_493,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_494,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_497,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_499,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_500) { node_500 = come_decrement_ref_count2(node_500, ((struct sNode*)node_500)->finalize, ((struct sNode*)node_500)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result199__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_480;
struct sType* __result190__;
struct sType* __result191__;
struct sType* result_481;
struct sType* __result192__;
result_480 = (void*)0;
result_481 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_480,0,sizeof(struct sType*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_480;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->it=self->head;
    if(    self->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_481,0,sizeof(struct sType*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_481;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_483;
struct sType* __result193__;
struct sType* __result194__;
struct sType* result_484;
struct sType* __result195__;
result_483 = (void*)0;
result_484 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_483,0,sizeof(struct sType*));
        __result193__ = gComeFunResultObject = __result_obj__ = result_483;
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result194__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result194__;
    }
    memset(&result_484,0,sizeof(struct sType*));
    __result195__ = gComeFunResultObject = __result_obj__ = result_484;
    gComeFunResultObject = (void*)0;
    return __result195__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_504;
int caller_line_505;
char* caller_sname_506;
_Bool comma_instead_of_semicolon_507;
char* last_code_508;
char* __dec_obj207;
char* last_code2_509;
char* __dec_obj208;
char* last_code3_510;
char* __dec_obj209;
void* __right_value654 = (void*)0;
char* sname_top_511;
int sline_top_512;
struct sFun* funX_513;
_Bool __result200__;
void* __right_value655 = (void*)0;
struct sType* result_type_514;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct list$1sTypeph* param_types_515;
struct list$1sTypeph* o2_saved_516;
struct sType* it_517;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sType* param_type_518;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct list$1charph* param_names_519;
void* __right_value662 = (void*)0;
struct list$1charph* param_default_parametors_520;
char* p_521;
int sline_522;
char* sname_523;
char* head_524;
struct buffer* source_525;
void* __right_value663 = (void*)0;
struct buffer* __dec_obj210;
struct list$1charph* method_generics_type_names_526;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1charph* __dec_obj211;
struct list$1charph* o2_saved_527;
char* it_528;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1charph* __dec_obj212;
char* __dec_obj213;
void* __right_value668 = (void*)0;
struct sBlock* block_529;
struct buffer* __dec_obj214;
char* __dec_obj215;
_Bool var_args_530;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
struct sFun* fun_531;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value680 = (void*)0;
struct sNode* node_532;
void* __if_result__2_534 = (void*)0;
_Bool __result203__;
struct list$1charph* __dec_obj220;
void* __right_value681 = (void*)0;
char* __dec_obj221;
char* __dec_obj222;
char* __dec_obj223;
char* __dec_obj224;
_Bool __result204__;
    caller_fun_504=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_505=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_506=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_507=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_508=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj207=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_509=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj208=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_510=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj209=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_511=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_512=info->sline;
    funX_513=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(    funX_513) {
        __result200__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_508 = come_decrement_ref_count2(last_code_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_509 = come_decrement_ref_count2(last_code2_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_510 = come_decrement_ref_count2(last_code3_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_511 = come_decrement_ref_count2(sname_top_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result200__;
    }
    result_type_514=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_515=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1668, "list$1sTypeph"))));
    for(    o2_saved_516=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_517=list$1sTypeph_begin((o2_saved_516));    !list$1sTypeph_end((o2_saved_516));    it_517=list$1sTypeph_next((o2_saved_516))    ){
        param_type_518=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value658=sType_clone(it_517))),info));
        /*g*/come_call_finalizer3(__right_value658,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_518->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_515,(struct sType*)come_increment_ref_count(sType_clone(param_type_518)));
        /*i*/come_call_finalizer3(param_type_518,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_516,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_519=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_520=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_521=info->p;
    sline_522=info->sline;
    sname_523=(char*)come_increment_ref_count(info->sname);
    head_524=info->head;
    source_525=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj210=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_526=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj211=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1692, "list$1charph"))));
    come_call_finalizer3(__dec_obj211,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_527=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_528=list$1charph_begin((o2_saved_527));    !list$1charph_end((o2_saved_527));    it_528=list$1charph_next((o2_saved_527))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_528)));
    }
    /*i*/come_call_finalizer3(o2_saved_527,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj212=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj212,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj213=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_529=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_524;
    __dec_obj214=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_525);
    come_call_finalizer3(__dec_obj214,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_521;
    info->sline=sline_522;
    __dec_obj215=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_523);
    /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_514->mInline=(_Bool)0;
    var_args_530=generics_fun->mVarArgs;
    fun_531=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1714, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_514),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_515)),(struct list$1charph*)come_increment_ref_count(param_names_519),(struct list$1charph*)come_increment_ref_count(param_default_parametors_520),(_Bool)0,var_args_530,(struct sBlock*)come_increment_ref_count(block_529),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_531));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1721, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value676=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1721, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_531),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_532=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value676,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    if(    !node_compile(node_532,info)) {
        __result203__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_508 = come_decrement_ref_count2(last_code_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_509 = come_decrement_ref_count2(last_code2_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_510 = come_decrement_ref_count2(last_code3_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_511 = come_decrement_ref_count2(sname_top_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_514,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_515,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_519,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_520,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_523 = come_decrement_ref_count2(sname_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_526,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_529,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_531,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_532) { node_532 = come_decrement_ref_count2(node_532, ((struct sNode*)node_532)->finalize, ((struct sNode*)node_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result203__;
    }
    __dec_obj220=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_526);
    come_call_finalizer3(__dec_obj220,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj221=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_511));
    /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_512;
    __dec_obj222=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_508);
    /*G*/ __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj223=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_509);
    /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj224=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_510);
    /*G*/ __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_504;
    info->caller_line=caller_line_505;
    info->caller_sname=caller_sname_506;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_507;
    __result204__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_508 = come_decrement_ref_count2(last_code_508, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_509 = come_decrement_ref_count2(last_code2_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_510 = come_decrement_ref_count2(last_code3_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_511 = come_decrement_ref_count2(sname_top_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_514,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_515,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_519,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_520,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_523 = come_decrement_ref_count2(sname_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_525,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_526,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_529,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_531,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_532) { node_532 = come_decrement_ref_count2(node_532, ((struct sNode*)node_532)->finalize, ((struct sNode*)node_532)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result204__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_535;
char* source_head_536;
struct sType* result_type_537;
char* var_name_538;
_Bool constructor__539;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct sType* __dec_obj225;
void* __right_value684 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_540;
char* var_name2_541;
_Bool err_542;
struct sType* __dec_obj226;
char* __dec_obj227;
_Bool method_definition_543;
char* p_544;
int sline_545;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct buffer* buf2_546;
char* fun_name_547;
char* base_fun_name_548;
void* __right_value687 = (void*)0;
char* __dec_obj228;
void* __right_value688 = (void*)0;
char* __dec_obj229;
void* __right_value689 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_549;
char* name_550;
_Bool err_551;
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
struct list$1sTypeph* param_types_552;
struct list$1charph* param_names_553;
struct list$1charph* param_default_parametors_554;
_Bool var_args_555;
char* header_tail_556;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
struct buffer* header_buf_557;
int version_558;
int n_559;
void* __right_value699 = (void*)0;
struct sBlock* block_560;
void* __right_value700 = (void*)0;
char* fun_name_562;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
struct sFun* fun_563;
void* __right_value706 = (void*)0;
struct sFun* fun2_564;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value712 = (void*)0;
struct sNode* __result207__;
void* __right_value713 = (void*)0;
char* none_generics_name_566;
void* __right_value714 = (void*)0;
char* generics_sname_567;
int generics_sline_568;
void* __right_value715 = (void*)0;
char* block_569;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct sGenericsFun* fun_570;
void* __right_value722 = (void*)0;
char* fun_name3_571;
void* __right_value726 = (void*)0;
struct sNode* __result219__;
void* __right_value727 = (void*)0;
char* generics_sname_593;
int generics_sline_594;
void* __right_value728 = (void*)0;
char* block_595;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct sGenericsFun* fun_596;
void* __right_value735 = (void*)0;
char* fun_name3_597;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sNode* __result220__;
char* source_tail_598;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct buffer* header_599;
void* __right_value740 = (void*)0;
char* name_600;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
char* name_601;
void* __right_value743 = (void*)0;
int i_602;
struct sType* param_type_603;
char* param_name_607;
char* default_parametor_608;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
char* impl_name_609;
void* __right_value749 = (void*)0;
char* result_type_name_610;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
char* impl_name_611;
void* __right_value752 = (void*)0;
char* result_type_name_612;
void* __right_value753 = (void*)0;
int i_613;
struct sType* param_type_614;
char* param_name_615;
char* default_parametor_616;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sBlock* block_617;
_Bool static__618;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
char* new_fun_name_619;
void* __right_value762 = (void*)0;
char* __dec_obj241;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sFun* fun_620;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sFun* fun2_621;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value777 = (void*)0;
struct sNode* __result225__;
void* __right_value778 = (void*)0;
char* new_fun_name_623;
void* __right_value779 = (void*)0;
char* __dec_obj246;
_Bool result_type_static_624;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct sFun* fun_625;
void* __right_value785 = (void*)0;
struct sFun* fun2_626;
void* __right_value786 = (void*)0;
char* source_tail_627;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
struct buffer* header_628;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value795 = (void*)0;
struct sNode* __result228__;
void* __right_value796 = (void*)0;
char* asm_fun_630;
void* __right_value797 = (void*)0;
char* __dec_obj251;
_Bool result_type_static_631;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sFun* fun_632;
void* __right_value803 = (void*)0;
struct sFun* fun2_633;
void* __right_value804 = (void*)0;
char* source_tail_634;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
struct buffer* header_635;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value813 = (void*)0;
struct sNode* __result231__;
struct sNode* __result232__;
fun_name_547 = (void*)0;
    header_head_535=info->p;
    source_head_536=info->p;
    result_type_537=((void*)0);
    var_name_538=((void*)0);
    constructor__539=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value682=parse_word(info)));
        __right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj225=result_type_537;
        result_type_537=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_537->mHeap=(_Bool)1;
        constructor__539=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value684=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_540=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_541=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_542=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value684,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj226=result_type_537;
        result_type_537=(struct sType*)come_increment_ref_count(result_type2_540);
        come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj227=var_name_538;
        var_name_538=(char*)come_increment_ref_count(var_name2_541);
        /*G*/ __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_542) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_540,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_541 = come_decrement_ref_count2(var_name2_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_543=(_Bool)0;
    {
        p_544=info->p;
        sline_545=info->sline;
        buf2_546=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1786, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_546,*info->p);
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
        if(        buffer_length(buf2_546)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_543=(_Bool)1;
        }
        info->p=p_544;
        info->sline=sline_545;
        /*i*/come_call_finalizer3(buf2_546,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_548=((void*)0);
    if(    constructor__539) {
        __dec_obj228=base_fun_name_548;
        base_fun_name_548=(char*)come_increment_ref_count(__builtin_string("initialize"));
        /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj229=fun_name_547;
        fun_name_547=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_548,info,(_Bool)1));
        /*G*/ __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_543) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value689=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_549=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_550=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_551=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value689,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_551) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj230=base_fun_name_548;
        base_fun_name_548=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj231=fun_name_547;
        fun_name_547=(char*)come_increment_ref_count(create_method_name(obj_type_549,(_Bool)0,base_fun_name_548,info,(_Bool)1));
        /*G*/ __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_550 = come_decrement_ref_count2(name_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj232=base_fun_name_548;
        base_fun_name_548=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj233=fun_name_547;
        fun_name_547=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_548,info,(_Bool)1));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj234=fun_name_547;
        fun_name_547=(char*)come_increment_ref_count(parse_word(info));
        /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj235=base_fun_name_548;
        base_fun_name_548=(char*)come_increment_ref_count(__builtin_string(fun_name_547));
        /*G*/ __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_548,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value696=parse_params(info,constructor__539)));
    param_types_552=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_553=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_554=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_555=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value696,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_556=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_548,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_557=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1853, "buffer"))));
    buffer_append(header_buf_557,header_head_535,header_tail_556-header_head_535);
    buffer_append_char(header_buf_557,0);
    version_558=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_559=0;
        while(xisdigit(*info->p)) {
            n_559=n_559*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_558=n_559;
    }
    if(    charp_operator_equals(base_fun_name_548,"lambda")) {
        block_560=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_561=0;
        lambda_num_561++;
        fun_name_562=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_561));
        result_type_537->mStatic=(_Bool)0;
        fun_563=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1883, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_562)),(struct sType*)come_increment_ref_count(result_type_537),(struct list$1sTypeph*)come_increment_ref_count(param_types_552),(struct list$1charph*)come_increment_ref_count(param_names_553),(struct list$1charph*)come_increment_ref_count(param_default_parametors_554),(_Bool)0,var_args_555,(struct sBlock*)come_increment_ref_count(block_560),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_557)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_564=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value706=__builtin_string(fun_name_562))));
        __right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_564==((void*)0)||fun2_564->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_562)),(struct sFun*)come_increment_ref_count(fun_563));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1893, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value709=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1893, "sLambdaNode")),fun_563,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result207__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value712=_inf_value5));
        /*i*/come_call_finalizer3(block_560,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_562 = come_decrement_ref_count2(fun_name_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_563,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_548 = come_decrement_ref_count2(base_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value709,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value712) { __right_value712 = come_decrement_ref_count2(__right_value712, ((struct sNode*)__right_value712)->finalize, ((struct sNode*)__right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result207__;
        /*i*/come_call_finalizer3(block_560,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_562 = come_decrement_ref_count2(fun_name_562, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_563,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
        none_generics_name_566=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_567=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_568=info->sline;
        block_569=(char*)come_increment_ref_count(skip_block(info));
        fun_570=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1903, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value717=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value718=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sType*)come_increment_ref_count(result_type_537),(struct list$1sTypeph*)come_increment_ref_count(param_types_552),(struct list$1charph*)come_increment_ref_count(param_names_553),(struct list$1charph*)come_increment_ref_count(param_default_parametors_554),var_args_555,(char*)come_increment_ref_count(block_569),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_567)),generics_sline_568));
        /*g*/come_call_finalizer3(__right_value717,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value718,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_571=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_566,base_fun_name_548));
        map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_571)),(struct sGenericsFun*)come_increment_ref_count(fun_570));
        __result219__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_566 = come_decrement_ref_count2(none_generics_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_567 = come_decrement_ref_count2(generics_sname_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_569 = come_decrement_ref_count2(block_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_570,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_571 = come_decrement_ref_count2(fun_name3_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_548 = come_decrement_ref_count2(base_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result219__;
        none_generics_name_566 = come_decrement_ref_count2(none_generics_name_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_567 = come_decrement_ref_count2(generics_sname_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_569 = come_decrement_ref_count2(block_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_570,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_571 = come_decrement_ref_count2(fun_name3_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charph_length(info->method_generics_type_names)>0) {
        generics_sname_593=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_594=info->sline;
        block_595=(char*)come_increment_ref_count(skip_block(info));
        fun_596=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1917, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value730=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value731=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sType*)come_increment_ref_count(result_type_537),(struct list$1sTypeph*)come_increment_ref_count(param_types_552),(struct list$1charph*)come_increment_ref_count(param_names_553),(struct list$1charph*)come_increment_ref_count(param_default_parametors_554),var_args_555,(char*)come_increment_ref_count(block_595),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_593)),generics_sline_594));
        /*g*/come_call_finalizer3(__right_value730,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        /*g*/come_call_finalizer3(__right_value731,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_597=(char*)come_increment_ref_count(charp_clone(base_fun_name_548));
        if(        method_definition_543) {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sGenericsFun*)come_increment_ref_count(fun_596));
        }
        else {
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_597)),(struct sGenericsFun*)come_increment_ref_count(fun_596));
        }
        __result220__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_593 = come_decrement_ref_count2(generics_sname_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_595 = come_decrement_ref_count2(block_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_596,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_597 = come_decrement_ref_count2(fun_name3_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_548 = come_decrement_ref_count2(base_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result220__;
        generics_sname_593 = come_decrement_ref_count2(generics_sname_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_595 = come_decrement_ref_count2(block_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_596,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_597 = come_decrement_ref_count2(fun_name3_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_598=info->p-1;
        header_599=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1933, "buffer"))));
        if(        constructor__539) {
            if(            list$1sTypeph_length(param_types_552)==1) {
                name_600=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_599,((char*)(__right_value741=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_600,name_600,name_600))));
                __right_value741 = come_decrement_ref_count2(__right_value741, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_601=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                buffer_append_str(header_599,((char*)(__right_value743=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_601,name_601,name_601))));
                __right_value743 = come_decrement_ref_count2(__right_value743, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_602=1;                i_602<list$1sTypeph_length(param_types_552);                i_602++                ){
                    param_type_603=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_552,i_602), "05function.c", 1945, 1));
                    param_name_607=((char*)come_null_check(list$1charphp_operator_load_element(param_names_553,i_602), "05function.c", 1946, 2));
                    default_parametor_608=list$1charphp_operator_load_element(param_default_parametors_554,i_602);
                    if(                    default_parametor_608) {
                        buffer_append_str(header_599,((char*)(__right_value745=xsprintf("extern %s %s=%s",((char*)(__right_value744=make_come_type_name_string_no_solved(param_type_603,(_Bool)0,info))),param_name_607,default_parametor_608))));
                        __right_value744 = come_decrement_ref_count2(__right_value744, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_599,((char*)(__right_value747=xsprintf("extern %s %s",((char*)(__right_value746=make_come_type_name_string_no_solved(param_type_603,(_Bool)0,info))),param_name_607))));
                        __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_602!=list$1sTypeph_length(param_types_552)-1) {
                        buffer_append_str(header_599,",");
                    }
                }
                buffer_append_str(header_599,");\n");
                name_601 = come_decrement_ref_count2(name_601, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypeph_length(param_types_552)==1) {
                impl_name_609=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_610=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_537,(_Bool)0,info));
                buffer_append_str(header_599,((char*)(__right_value750=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_610,impl_name_609,base_fun_name_548,impl_name_609))));
                __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                impl_name_609 = come_decrement_ref_count2(impl_name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_610 = come_decrement_ref_count2(result_type_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_611=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                result_type_name_612=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_537,(_Bool)0,info));
                buffer_append_str(header_599,((char*)(__right_value753=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_612,impl_name_611,base_fun_name_548,impl_name_611))));
                __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                for(                i_613=1;                i_613<list$1sTypeph_length(param_types_552);                i_613++                ){
                    param_type_614=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_552,i_613), "05function.c", 1976, 3));
                    param_name_615=((char*)come_null_check(list$1charphp_operator_load_element(param_names_553,i_613), "05function.c", 1977, 4));
                    default_parametor_616=list$1charphp_operator_load_element(param_default_parametors_554,i_613);
                    if(                    default_parametor_616) {
                        buffer_append_str(header_599,((char*)(__right_value755=xsprintf("extern %s %s=%s",((char*)(__right_value754=make_come_type_name_string_no_solved(param_type_614,(_Bool)0,info))),param_name_615,default_parametor_616))));
                        __right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_str(header_599,((char*)(__right_value757=xsprintf("extern %s %s",((char*)(__right_value756=make_come_type_name_string_no_solved(param_type_614,(_Bool)0,info))),param_name_615))));
                        __right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_613!=list$1sTypeph_length(param_types_552)-1) {
                        buffer_append_str(header_599,",");
                    }
                }
                buffer_append_str(header_599,");\n");
                impl_name_611 = come_decrement_ref_count2(impl_name_611, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_612 = come_decrement_ref_count2(result_type_name_612, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_599,source_head_536,source_tail_598-source_head_536);
            buffer_append_str(header_599,";\n");
        }
        if(        !result_type_537->mStatic) {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value758=buffer_to_string(header_599))));
            __right_value758 = come_decrement_ref_count2(__right_value758, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        block_617=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__539,(_Bool)1));
        static__618=(_Bool)0;
        if(        result_type_537->mStatic) {
            result_type_537->mStatic=(_Bool)0;
            static__618=(_Bool)1;
        }
        if(        version_558>0) {
            new_fun_name_619=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value760=__builtin_string(fun_name_547))),version_558));
            __right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj241=fun_name_547;
            fun_name_547=(char*)come_increment_ref_count(__builtin_string(new_fun_name_619));
            /*G*/ __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_619 = come_decrement_ref_count2(new_fun_name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_620=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2017, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sType*)come_increment_ref_count(result_type_537),(struct list$1sTypeph*)come_increment_ref_count(param_types_552),(struct list$1charph*)come_increment_ref_count(param_names_553),(struct list$1charph*)come_increment_ref_count(param_default_parametors_554),(_Bool)0,var_args_555,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_617)),static__618,(char*)come_increment_ref_count(buffer_to_string(header_buf_557)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
        if(        info->in_class) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_547)),(struct sFun*)come_increment_ref_count(fun_620));
        }
        else {
            fun2_621=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value770=__builtin_string(fun_name_547))));
            __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_621==((void*)0)||fun2_621->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_547)),(struct sFun*)come_increment_ref_count(fun_620));
            }
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2037, "struct sNode");
        _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value773=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2037, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_620),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value777=_inf_value6));
        /*i*/come_call_finalizer3(header_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_617,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_620,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_548 = come_decrement_ref_count2(base_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value773,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value777) { __right_value777 = come_decrement_ref_count2(__right_value777, ((struct sNode*)__right_value777)->finalize, ((struct sNode*)__right_value777)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result225__;
        /*i*/come_call_finalizer3(header_599,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_617,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_620,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_558>0) {
            new_fun_name_623=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_547,version_558));
            __dec_obj246=fun_name_547;
            fun_name_547=(char*)come_increment_ref_count(__builtin_string(new_fun_name_623));
            /*G*/ __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_623 = come_decrement_ref_count2(new_fun_name_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_static_624=result_type_537->mStatic;
            result_type_537->mStatic=(_Bool)0;
            fun_625=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2052, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sType*)come_increment_ref_count(result_type_537),(struct list$1sTypeph*)come_increment_ref_count(param_types_552),(struct list$1charph*)come_increment_ref_count(param_names_553),(struct list$1charph*)come_increment_ref_count(param_default_parametors_554),(_Bool)1,var_args_555,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_557)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_626=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value785=__builtin_string(fun_name_547))));
            __right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_626==((void*)0)||fun2_626->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_547)),(struct sFun*)come_increment_ref_count(fun_625));
            }
            source_tail_627=info->p;
            header_628=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2066, "buffer"))));
            buffer_append(header_628,source_head_536,source_tail_627-source_head_536);
            if(            !result_type_static_624) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value789=buffer_to_string(header_628))));
                __right_value789 = come_decrement_ref_count2(__right_value789, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2073, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value791=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2073, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_625),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result228__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value795=_inf_value7));
            /*i*/come_call_finalizer3(fun_625,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_548 = come_decrement_ref_count2(base_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value791,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value795) { __right_value795 = come_decrement_ref_count2(__right_value795, ((struct sNode*)__right_value795)->finalize, ((struct sNode*)__right_value795)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result228__;
            /*i*/come_call_finalizer3(fun_625,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_628,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            asm_fun_630=(char*)come_increment_ref_count(parse_attribute(info));
            if(            string_operator_not_equals(asm_fun_630,"")) {
                __dec_obj251=fun_name_547;
                fun_name_547=(char*)come_increment_ref_count(__builtin_string(asm_fun_630));
                /*G*/ __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            expected_next_character(59,info);
            result_type_static_631=result_type_537->mStatic;
            result_type_537->mStatic=(_Bool)0;
            fun_632=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2087, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_547)),(struct sType*)come_increment_ref_count(result_type_537),(struct list$1sTypeph*)come_increment_ref_count(param_types_552),(struct list$1charph*)come_increment_ref_count(param_names_553),(struct list$1charph*)come_increment_ref_count(param_default_parametors_554),(_Bool)1,var_args_555,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_557)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
            fun2_633=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value803=__builtin_string(fun_name_547))));
            __right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_633==((void*)0)||fun2_633->mExternal) {
                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_547)),(struct sFun*)come_increment_ref_count(fun_632));
            }
            source_tail_634=info->p;
            header_635=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2101, "buffer"))));
            buffer_append(header_635,source_head_536,source_tail_634-source_head_536);
            if(            !result_type_static_631) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value807=buffer_to_string(header_635))));
                __right_value807 = come_decrement_ref_count2(__right_value807, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2108, "struct sNode");
            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value809=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2108, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_632),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result231__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value813=_inf_value8));
            asm_fun_630 = come_decrement_ref_count2(asm_fun_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_632,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_635,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_548 = come_decrement_ref_count2(base_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value809,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value813) { __right_value813 = come_decrement_ref_count2(__right_value813, ((struct sNode*)__right_value813)->finalize, ((struct sNode*)__right_value813)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result231__;
            asm_fun_630 = come_decrement_ref_count2(asm_fun_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_632,sFun_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_635,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    __result232__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_538 = come_decrement_ref_count2(var_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_547 = come_decrement_ref_count2(fun_name_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_548 = come_decrement_ref_count2(base_fun_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_552,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_553,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_554,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_557,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
struct sLambdaNode* result_565;
void* __right_value711 = (void*)0;
char* __dec_obj240;
struct sLambdaNode* __result206__;
    if(    self==(void*)0) {
        __result205__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_565=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(    self!=((void*)0)) {
        result_565->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj240=result_565->sname;
        result_565->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_565->mFun=self->mFun;
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_565;
    /*i*/come_call_finalizer3(result_565,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
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
unsigned int hash_589;
unsigned int it_590;
_Bool same_key_exist_591;
char* it2_592;
struct map$2charphsGenericsFunph* __result218__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_589=string_get_hash_key(key)%self->size;
    it_590=hash_589;
    while((_Bool)1) {
        if(        self->item_existance[it_590]) {
            if(            string_equals(self->keys[it_590],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_590]);
                    self->keys[it_590] = come_decrement_ref_count2(self->keys[it_590], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_590]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_590]);
                    self->keys[it_590]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_590],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_590]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_590]=item;
                }
                break;
            }
            it_590++;
            if(            it_590>=self->size) {
                it_590=0;
            }
            else if(            it_590==hash_589) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_590]=(_Bool)1;
            if(            1) {
                self->keys[it_590]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_590]=key;
            }
            if(            1) {
                self->items[it_590]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_590]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_591=(_Bool)0;
    for(    it2_592=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_592=list$1charp_next(self->key_list)    ){
        if(        string_equals(it2_592,key)) {
            same_key_exist_591=(_Bool)1;
        }
    }
    if(    !same_key_exist_591) {
        list$1charp_push_back(self->key_list,key);
    }
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_572;
void* __right_value723 = (void*)0;
char** keys_573;
void* __right_value724 = (void*)0;
struct sGenericsFun** items_574;
void* __right_value725 = (void*)0;
_Bool* item_existance_575;
int len_576;
char* it_579;
struct sGenericsFun* default_value_582;
struct sGenericsFun* it2_583;
unsigned int hash_586;
int n_587;
struct sGenericsFun* default_value_588;
default_value_582 = (void*)0;
default_value_588 = (void*)0;
    size_572=self->size*10;
    keys_573=(char**)come_increment_ref_count(((char**)(__right_value723=(char**)come_calloc(1, sizeof(char*)*(1*(size_572)), "./comelang.h", 1621, "char*%"))));
    items_574=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value724=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_572)), "./comelang.h", 1622, "sGenericsFun*%"))));
    item_existance_575=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value725=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_572)), "./comelang.h", 1623, "bool"))));
    len_576=0;
    for(    it_579=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_579=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_582,0,sizeof(struct sGenericsFun*));
        it2_583=map$2charphsGenericsFunph_at(self,it_579,default_value_582);
        hash_586=string_get_hash_key(it_579)%size_572;
        n_587=hash_586;
        while((_Bool)1) {
            if(            item_existance_575[n_587]) {
                n_587++;
                if(                n_587>=size_572) {
                    n_587=0;
                }
                else if(                n_587==hash_586) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_575[n_587]=(_Bool)1;
                keys_573[n_587]=it_579;
                items_574[n_587]=map$2charphsGenericsFunph_at(self,it_579,default_value_588);
                len_576++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_573;
    self->items=items_574;
    self->item_existance=item_existance_575;
    self->size=size_572;
    self->len=len_576;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_577;
char* __result208__;
char* __result209__;
char* result_578;
char* __result210__;
result_577 = (void*)0;
result_578 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_577,0,sizeof(char*));
        __result208__ = gComeFunResultObject = __result_obj__ = result_577;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result209__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    memset(&result_578,0,sizeof(char*));
    __result210__ = gComeFunResultObject = __result_obj__ = result_578;
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_580;
char* __result211__;
char* __result212__;
char* result_581;
char* __result213__;
result_580 = (void*)0;
result_581 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_580,0,sizeof(char*));
        __result211__ = gComeFunResultObject = __result_obj__ = result_580;
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result212__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    memset(&result_581,0,sizeof(char*));
    __result213__ = gComeFunResultObject = __result_obj__ = result_581;
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_584;
unsigned int it_585;
struct sGenericsFun* __result214__;
struct sGenericsFun* __result215__;
struct sGenericsFun* __result216__;
struct sGenericsFun* __result217__;
    hash_584=string_get_hash_key(((char*)key))%self->size;
    it_585=hash_584;
    while((_Bool)1) {
        if(        self->item_existance[it_585]) {
            if(            string_equals(self->keys[it_585],key)) {
                __result214__ = gComeFunResultObject = __result_obj__ = self->items[it_585];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result214__;
            }
            it_585++;
            if(            it_585>=self->size) {
                it_585=0;
            }
            else if(            it_585==hash_584) {
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
struct list_item$1charph* it_604;
int i_605;
char* __result221__;
char* default_value_606;
char* __result222__;
default_value_606 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_604=self->head;
    i_605=0;
    while(it_604!=((void*)0)) {
        if(        position==i_605) {
            __result221__ = gComeFunResultObject = __result_obj__ = it_604->item;
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
        it_604=it_604->next;
        i_605++;
    }
    memset(&default_value_606,0,sizeof(char*));
    __result222__ = gComeFunResultObject = __result_obj__ = default_value_606;
    default_value_606 = come_decrement_ref_count2(default_value_606, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_637;
char* __dec_obj256;
char* last_code2_638;
char* __dec_obj257;
char* last_code3_639;
_Bool comma_instead_of_semicolon_640;
char* __dec_obj258;
struct sClass* current_stack_frame_struct_641;
struct sFun* finalizer_642;
void* __right_value814 = (void*)0;
char* real_fun_name_643;
void* __right_value815 = (void*)0;
char* user_real_fun_name_644;
struct sFun* user_finalizer_645;
void* __right_value816 = (void*)0;
struct sType* type2_646;
struct sClass* klass_647;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct buffer* source_648;
struct list$1tuple2$2charphsTypephph* o2_saved_657;
struct tuple2$2charphsTypeph* it_660;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_663;
struct sType* field_type_664;
char* p_666;
int sline_667;
char* sname_668;
char* head_669;
struct buffer* source3_670;
struct buffer* __dec_obj266;
void* __right_value819 = (void*)0;
char* __dec_obj267;
void* __right_value820 = (void*)0;
struct sBlock* block_671;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct sType* result_type_672;
void* __right_value823 = (void*)0;
char* name_673;
void* __right_value824 = (void*)0;
struct sType* self_type_674;
struct sType* __list_values21___675[1];
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1sTypeph* param_types_676;
void* __right_value827 = (void*)0;
char* __list_values22___677[1];
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
struct list$1charph* param_names_678;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct list$1charph* param_default_parametors_679;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct buffer* header_buf_680;
void* __right_value834 = (void*)0;
int i_681;
struct sType* param_type_682;
char* param_name_683;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
struct sFun* fun_684;
void* __right_value840 = (void*)0;
struct sFun* fun2_685;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value847 = (void*)0;
struct sNode* node_686;
struct buffer* __dec_obj272;
char* __dec_obj273;
char* __dec_obj274;
char* __dec_obj275;
char* __dec_obj276;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct tuple2$2sFunpcharph* __result246__;
    last_code_637=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj256=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_638=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj257=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_639=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_640=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj258=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_641=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_642=((void*)0);
    real_fun_name_643=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_644=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_645=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_644);
    type2_646=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_646;
    klass_647=type->mClass;
    if(    type->mPointerNum>0&&klass_647->mStruct) {
        source_648=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2150, "buffer"))));
        buffer_append_char(source_648,123);
        if(        user_finalizer_645) {
            char source2_649[1024];
            memset(&source2_649, 0, sizeof(char)            *(1024)            );
            snprintf(source2_649,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_644);
            buffer_append_str(source_648,source2_649);
        }
        klass_647=map$2charphsClassphp_operator_load_element(info->classes,klass_647->mName);
        for(        o2_saved_657=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_647->mFields)),it_660=list$1tuple2$2charphsTypephph_begin((o2_saved_657));        !list$1tuple2$2charphsTypephph_end((o2_saved_657));        it_660=list$1tuple2$2charphsTypephph_next((o2_saved_657))        ){
            multiple_assign_var10=it_660;
            name_663=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_664=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_664->mClass->mName)&&type->mPointerNum==field_type_664->mPointerNum&&field_type_664->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_664->mHeap) {
                char source2_665[1024];
                memset(&source2_665, 0, sizeof(char)                *(1024)                );
                snprintf(source2_665,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_663,name_663,name_663,name_663);
                buffer_append_str(source_648,source2_665);
            }
            name_663 = come_decrement_ref_count2(name_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_664,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_657,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_648,125);
        p_666=info->p;
        sline_667=info->sline;
        sname_668=(char*)come_increment_ref_count(info->sname);
        head_669=info->head;
        source3_670=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj266=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_648);
        come_call_finalizer3(__dec_obj266,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_648->buf;
        info->head=source_648->buf;
        __dec_obj267=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_643));
        /*G*/ __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_671=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_672=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2196, "sType")),"void",(_Bool)0,info));
        name_673=(char*)come_increment_ref_count(string_clone(real_fun_name_643));
        self_type_674=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_674->mHeap=(_Bool)0;
        if(        self_type_674->mPointerNum>1) {
            self_type_674->mPointerNum=1;
        }
        {__list_values21___675[0]=come_increment_ref_count(self_type_674);
}        param_types_676=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2203, "struct list$1sTypeph")),1,__list_values21___675));
        {__list_values22___677[0]=come_increment_ref_count(((char*)(__right_value827=__builtin_string("self"))));
}        param_names_678=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2204, "struct list$1charph")),1,__list_values22___677));
        __right_value827 = come_decrement_ref_count2(__right_value827, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_679=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2205, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_679,((void*)0));
        header_buf_680=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2208, "buffer"))));
        buffer_append_str(header_buf_680,((char*)(__right_value834=make_come_type_name_string(result_type_672,info))));
        __right_value834 = come_decrement_ref_count2(__right_value834, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_680," ");
        buffer_append_str(header_buf_680,real_fun_name_643);
        buffer_append_str(header_buf_680,"(");
        for(        i_681=0;        i_681<list$1sTypeph_length(param_types_676);        i_681++        ){
            param_type_682=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_676,i_681), "05function.c", 2216, 5));
            param_name_683=((char*)come_null_check(list$1charphp_operator_load_element(param_names_678,i_681), "05function.c", 2217, 6));
            buffer_append_str(header_buf_680,((char*)(__right_value835=make_come_type_name_string(param_type_682,info))));
            __right_value835 = come_decrement_ref_count2(__right_value835, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_680," ");
            buffer_append_str(header_buf_680,param_name_683);
            if(            i_681!=list$1sTypeph_length(param_types_676)-1) {
                buffer_append_str(header_buf_680,",");
            }
        }
        buffer_append_str(header_buf_680,")");
        result_type_672->mStatic=(_Bool)0;
        fun_684=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2231, "sFun")),(char*)come_increment_ref_count(name_673),(struct sType*)come_increment_ref_count(result_type_672),(struct list$1sTypeph*)come_increment_ref_count(param_types_676),(struct list$1charph*)come_increment_ref_count(param_names_678),(struct list$1charph*)come_increment_ref_count(param_default_parametors_679),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_671),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_680)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_685=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value840=__builtin_string(fun_name))));
        __right_value840 = come_decrement_ref_count2(__right_value840, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_685==((void*)0)||fun2_685->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_673)),(struct sFun*)come_increment_ref_count(fun_684));
        }
        finalizer_642=fun_684;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2247, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value843=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2247, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_684),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_686=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value843,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_686,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj272=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_670);
        come_call_finalizer3(__dec_obj272,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_666;
        info->head=head_669;
        info->sline=sline_667;
        __dec_obj273=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_668);
        /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_648,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_668 = come_decrement_ref_count2(sname_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_670,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_671,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_672,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_673 = come_decrement_ref_count2(name_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_676,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_678,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_679,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_680,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_684,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_686) { node_686 = come_decrement_ref_count2(node_686, ((struct sNode*)node_686)->finalize, ((struct sNode*)node_686)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_641;
    __dec_obj274=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_637);
    /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj275=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_638);
    /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj276=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_639);
    /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_640;
    __result246__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value849=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2268, "struct tuple2$2sFunpcharph")),finalizer_642,(char*)come_increment_ref_count(real_fun_name_643))));
    last_code_637 = come_decrement_ref_count2(last_code_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_638 = come_decrement_ref_count2(last_code2_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_639 = come_decrement_ref_count2(last_code3_639, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_643 = come_decrement_ref_count2(real_fun_name_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_644 = come_decrement_ref_count2(user_real_fun_name_644, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_646,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value849,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_650;
unsigned int hash_651;
unsigned int it_652;
struct sClass* __result233__;
struct sClass* __result234__;
struct sClass* __result235__;
struct sClass* __result236__;
default_value_650 = (void*)0;
    memset(&default_value_650,0,sizeof(struct sClass*));
    hash_651=string_get_hash_key(((char*)key))%self->size;
    it_652=hash_651;
    while((_Bool)1) {
        if(        self->item_existance[it_652]) {
            if(            string_equals(self->keys[it_652],key)) {
                __result233__ = gComeFunResultObject = __result_obj__ = self->items[it_652];
                /*i*/come_call_finalizer3(default_value_650,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result233__;
            }
            it_652++;
            if(            it_652>=self->size) {
                it_652=0;
            }
            else if(            it_652==hash_651) {
                __result234__ = gComeFunResultObject = __result_obj__ = default_value_650;
                /*i*/come_call_finalizer3(default_value_650,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
        }
        else {
            __result235__ = gComeFunResultObject = __result_obj__ = default_value_650;
            /*i*/come_call_finalizer3(default_value_650,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result235__;
        }
    }
    __result236__ = gComeFunResultObject = __result_obj__ = default_value_650;
    /*i*/come_call_finalizer3(default_value_650,sClass_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_653;
struct list_item$1tuple2$2charphsTypephph* prev_it_654;
    it_653=self->head;
    while(it_653!=((void*)0)) {
        prev_it_654=it_653;
        it_653=it_653->next;
        /*i*/come_call_finalizer3(prev_it_654,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1tuple2$2charphsTypephph* it_655;
struct list_item$1tuple2$2charphsTypephph* prev_it_656;
    it_655=self->head;
    while(it_655!=((void*)0)) {
        prev_it_656=it_655;
        it_655=it_655->next;
        /*i*/come_call_finalizer3(prev_it_656,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_658;
struct tuple2$2charphsTypeph* __result237__;
struct tuple2$2charphsTypeph* __result238__;
struct tuple2$2charphsTypeph* result_659;
struct tuple2$2charphsTypeph* __result239__;
result_658 = (void*)0;
result_659 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_658,0,sizeof(struct tuple2$2charphsTypeph*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_658;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->head;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_659,0,sizeof(struct tuple2$2charphsTypeph*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_659;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_661;
struct tuple2$2charphsTypeph* __result240__;
struct tuple2$2charphsTypeph* __result241__;
struct tuple2$2charphsTypeph* result_662;
struct tuple2$2charphsTypeph* __result242__;
result_661 = (void*)0;
result_662 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_661,0,sizeof(struct tuple2$2charphsTypeph*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_661;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_662,0,sizeof(struct tuple2$2charphsTypeph*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_662;
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
char* last_code_688;
char* __dec_obj279;
char* last_code2_689;
char* __dec_obj280;
char* last_code3_690;
_Bool comma_instead_of_semicolon_691;
char* __dec_obj281;
struct sClass* current_stack_frame_struct_692;
struct sFun* finalizer_693;
void* __right_value850 = (void*)0;
char* real_fun_name_694;
void* __right_value851 = (void*)0;
struct sType* type2_695;
struct sClass* klass_696;
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct buffer* source_697;
struct list$1tuple2$2charphsTypephph* o2_saved_698;
struct tuple2$2charphsTypeph* it_699;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_700;
struct sType* field_type_701;
char* p_703;
int sline_704;
char* sname_705;
char* head_706;
struct buffer* source3_707;
struct buffer* __dec_obj282;
void* __right_value854 = (void*)0;
char* __dec_obj283;
void* __right_value855 = (void*)0;
struct sBlock* block_708;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct sType* result_type_709;
void* __right_value858 = (void*)0;
char* name_710;
void* __right_value859 = (void*)0;
struct sType* self_type_711;
struct sType* __list_values23___712[1];
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct list$1sTypeph* param_types_713;
void* __right_value862 = (void*)0;
char* __list_values24___714[1];
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1charph* param_names_715;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct list$1charph* param_default_parametors_716;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct buffer* header_buf_717;
void* __right_value869 = (void*)0;
int i_718;
struct sType* param_type_719;
char* param_name_720;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct sFun* fun_721;
void* __right_value875 = (void*)0;
struct sFun* fun2_722;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value882 = (void*)0;
struct sNode* node_723;
struct buffer* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct tuple2$2sFunpcharph* __result249__;
    last_code_688=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj279=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_689=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj280=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_690=(char*)come_increment_ref_count(info->module->mLastCode3);
    comma_instead_of_semicolon_691=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    __dec_obj281=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_692=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_693=((void*)0);
    real_fun_name_694=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_695=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_695;
    klass_696=type->mClass;
    if(    type->mPointerNum>0&&klass_696->mStruct) {
        source_697=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2297, "buffer"))));
        buffer_append_char(source_697,123);
        klass_696=map$2charphsClassphp_operator_load_element(info->classes,klass_696->mName);
        for(        o2_saved_698=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_696->mFields)),it_699=list$1tuple2$2charphsTypephph_begin((o2_saved_698));        !list$1tuple2$2charphsTypephph_end((o2_saved_698));        it_699=list$1tuple2$2charphsTypephph_next((o2_saved_698))        ){
            multiple_assign_var11=it_699;
            name_700=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_701=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_701->mClass->mName)&&type->mPointerNum==field_type_701->mPointerNum&&field_type_701->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            field_type_701->mHeap) {
                char source2_702[1024];
                memset(&source2_702, 0, sizeof(char)                *(1024)                );
                snprintf(source2_702,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_700,name_700,name_700,name_700);
                buffer_append_str(source_697,source2_702);
            }
            name_700 = come_decrement_ref_count2(name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_698,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_697,125);
        p_703=info->p;
        sline_704=info->sline;
        sname_705=(char*)come_increment_ref_count(info->sname);
        head_706=info->head;
        source3_707=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj282=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_697);
        come_call_finalizer3(__dec_obj282,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_697->buf;
        info->head=source_697->buf;
        __dec_obj283=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_694));
        /*G*/ __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_708=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_709=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2336, "sType")),"void",(_Bool)0,info));
        name_710=(char*)come_increment_ref_count(string_clone(real_fun_name_694));
        self_type_711=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_711->mHeap=(_Bool)0;
        if(        self_type_711->mPointerNum>1) {
            self_type_711->mPointerNum=1;
        }
        {__list_values23___712[0]=come_increment_ref_count(self_type_711);
}        param_types_713=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2343, "struct list$1sTypeph")),1,__list_values23___712));
        {__list_values24___714[0]=come_increment_ref_count(((char*)(__right_value862=__builtin_string("self"))));
}        param_names_715=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2344, "struct list$1charph")),1,__list_values24___714));
        __right_value862 = come_decrement_ref_count2(__right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_716=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2345, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_716,((void*)0));
        header_buf_717=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2348, "buffer"))));
        buffer_append_str(header_buf_717,((char*)(__right_value869=make_come_type_name_string(result_type_709,info))));
        __right_value869 = come_decrement_ref_count2(__right_value869, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_717," ");
        buffer_append_str(header_buf_717,real_fun_name_694);
        buffer_append_str(header_buf_717,"(");
        for(        i_718=0;        i_718<list$1sTypeph_length(param_types_713);        i_718++        ){
            param_type_719=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_713,i_718), "05function.c", 2356, 7));
            param_name_720=((char*)come_null_check(list$1charphp_operator_load_element(param_names_715,i_718), "05function.c", 2357, 8));
            buffer_append_str(header_buf_717,((char*)(__right_value870=make_come_type_name_string(param_type_719,info))));
            __right_value870 = come_decrement_ref_count2(__right_value870, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_717," ");
            buffer_append_str(header_buf_717,param_name_720);
            if(            i_718!=list$1sTypeph_length(param_types_713)-1) {
                buffer_append_str(header_buf_717,",");
            }
        }
        buffer_append_str(header_buf_717,")");
        result_type_709->mStatic=(_Bool)0;
        fun_721=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2371, "sFun")),(char*)come_increment_ref_count(name_710),(struct sType*)come_increment_ref_count(result_type_709),(struct list$1sTypeph*)come_increment_ref_count(param_types_713),(struct list$1charph*)come_increment_ref_count(param_names_715),(struct list$1charph*)come_increment_ref_count(param_default_parametors_716),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_708),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_717)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_722=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value875=__builtin_string(fun_name))));
        __right_value875 = come_decrement_ref_count2(__right_value875, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_722==((void*)0)||fun2_722->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_710)),(struct sFun*)come_increment_ref_count(fun_721));
        }
        finalizer_693=fun_721;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2387, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value878=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2387, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_721),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_723=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value878,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_723,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj288=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_707);
        come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_703;
        info->head=head_706;
        info->sline=sline_704;
        __dec_obj289=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_705);
        /*G*/ __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_697,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_705 = come_decrement_ref_count2(sname_705, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_708,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_710 = come_decrement_ref_count2(name_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_711,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_713,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_715,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_716,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_717,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_721,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_723) { node_723 = come_decrement_ref_count2(node_723, ((struct sNode*)node_723)->finalize, ((struct sNode*)node_723)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_692;
    __dec_obj290=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_688);
    /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_689);
    /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_690);
    /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_691;
    __result249__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value884=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2408, "struct tuple2$2sFunpcharph")),finalizer_693,(char*)come_increment_ref_count(real_fun_name_694))));
    last_code_688 = come_decrement_ref_count2(last_code_688, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_689 = come_decrement_ref_count2(last_code2_689, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_690 = come_decrement_ref_count2(last_code3_690, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_694 = come_decrement_ref_count2(real_fun_name_694, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_695,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value884,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_725;
char* __dec_obj293;
char* last_code2_726;
char* __dec_obj294;
char* last_code3_727;
char* __dec_obj295;
_Bool comma_instead_of_semicolon_728;
struct sClass* current_stack_frame_struct_729;
struct sFun* equaler_730;
void* __right_value885 = (void*)0;
char* real_fun_name_731;
void* __right_value886 = (void*)0;
struct sType* type2_732;
struct sClass* klass_733;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct buffer* source_734;
char* name_735;
struct list$1tuple2$2charphsTypephph* o2_saved_737;
struct tuple2$2charphsTypeph* it_738;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_739;
struct sType* field_type_740;
char* p_742;
int sline_743;
char* sname_744;
char* head_745;
struct buffer* source3_746;
struct buffer* __dec_obj296;
void* __right_value889 = (void*)0;
char* __dec_obj297;
void* __right_value890 = (void*)0;
struct sBlock* block_747;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct sType* result_type_748;
void* __right_value893 = (void*)0;
char* name_749;
void* __right_value894 = (void*)0;
struct sType* left_type_750;
void* __right_value895 = (void*)0;
struct sType* right_type_751;
struct sType* __list_values25___752[2];
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct list$1sTypeph* param_types_753;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
char* __list_values26___754[2];
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
struct list$1charph* param_names_755;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1charph* param_default_parametors_756;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct buffer* header_buf_757;
void* __right_value906 = (void*)0;
int i_758;
struct sType* param_type_759;
char* param_name_760;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sFun* fun_761;
void* __right_value912 = (void*)0;
struct sFun* fun2_762;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value919 = (void*)0;
struct sNode* node_763;
struct buffer* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct tuple2$2sFunpcharph* __result252__;
    last_code_725=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj293=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_726=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj294=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_727=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj295=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_728=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_729=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_730=((void*)0);
    real_fun_name_731=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_732=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_732;
    klass_733=type->mClass;
    if(    type->mPointerNum>0&&!klass_733->mNumber) {
        source_734=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2435, "buffer"))));
        buffer_append_char(source_734,123);
        if(        klass_733->mProtocol) {
            name_735="_protocol_obj";
            char source2_736[1024];
            memset(&source2_736, 0, sizeof(char)            *(1024)            );
            snprintf(source2_736,1024,"return left.%s.equals(right.%s);\n",name_735,name_735);
            buffer_append_str(source_734,source2_736);
        }
        else {
            klass_733=map$2charphsClassphp_operator_load_element(info->classes,klass_733->mName);
            for(            o2_saved_737=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_733->mFields)),it_738=list$1tuple2$2charphsTypephph_begin((o2_saved_737));            !list$1tuple2$2charphsTypephph_end((o2_saved_737));            it_738=list$1tuple2$2charphsTypephph_next((o2_saved_737))            ){
                multiple_assign_var12=it_738;
                name_739=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_740=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_740->mClass->mName)&&type->mPointerNum==field_type_740->mPointerNum&&field_type_740->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_741[1024];
                memset(&source2_741, 0, sizeof(char)                *(1024)                );
                snprintf(source2_741,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_739,name_739);
                buffer_append_str(source_734,source2_741);
                name_739 = come_decrement_ref_count2(name_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_740,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_737,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_734,"return true;");
        buffer_append_char(source_734,125);
        p_742=info->p;
        sline_743=info->sline;
        sname_744=(char*)come_increment_ref_count(info->sname);
        head_745=info->head;
        source3_746=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj296=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_734);
        come_call_finalizer3(__dec_obj296,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_734->buf;
        info->head=source_734->buf;
        __dec_obj297=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_731));
        /*G*/ __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_747=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_748=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2481, "sType")),"bool",(_Bool)0,info));
        name_749=(char*)come_increment_ref_count(string_clone(real_fun_name_731));
        left_type_750=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_750->mHeap=(_Bool)0;
        right_type_751=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_751->mHeap=(_Bool)0;
        {__list_values25___752[0]=come_increment_ref_count(left_type_750);
__list_values25___752[1]=come_increment_ref_count(right_type_751);
}        param_types_753=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2487, "struct list$1sTypeph")),2,__list_values25___752));
        {__list_values26___754[0]=come_increment_ref_count(((char*)(__right_value898=__builtin_string("left"))));
__list_values26___754[1]=come_increment_ref_count(((char*)(__right_value899=__builtin_string("right"))));
}        param_names_755=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2488, "struct list$1charph")),2,__list_values26___754));
        __right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value899 = come_decrement_ref_count2(__right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_756=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2489, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_756,((void*)0));
        list$1charph_push_back(param_default_parametors_756,((void*)0));
        header_buf_757=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2493, "buffer"))));
        buffer_append_str(header_buf_757,((char*)(__right_value906=make_come_type_name_string(result_type_748,info))));
        __right_value906 = come_decrement_ref_count2(__right_value906, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_757," ");
        buffer_append_str(header_buf_757,real_fun_name_731);
        buffer_append_str(header_buf_757,"(");
        for(        i_758=0;        i_758<list$1sTypeph_length(param_types_753);        i_758++        ){
            param_type_759=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_753,i_758), "05function.c", 2501, 9));
            param_name_760=((char*)come_null_check(list$1charphp_operator_load_element(param_names_755,i_758), "05function.c", 2502, 10));
            buffer_append_str(header_buf_757,((char*)(__right_value907=make_come_type_name_string(param_type_759,info))));
            __right_value907 = come_decrement_ref_count2(__right_value907, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_757," ");
            buffer_append_str(header_buf_757,param_name_760);
            if(            i_758!=list$1sTypeph_length(param_types_753)-1) {
                buffer_append_str(header_buf_757,",");
            }
        }
        buffer_append_str(header_buf_757,")");
        result_type_748->mStatic=(_Bool)0;
        fun_761=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2516, "sFun")),(char*)come_increment_ref_count(name_749),(struct sType*)come_increment_ref_count(result_type_748),(struct list$1sTypeph*)come_increment_ref_count(param_types_753),(struct list$1charph*)come_increment_ref_count(param_names_755),(struct list$1charph*)come_increment_ref_count(param_default_parametors_756),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_747),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_757)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_762=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value912=__builtin_string(fun_name))));
        __right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_762==((void*)0)||fun2_762->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_749)),(struct sFun*)come_increment_ref_count(fun_761));
        }
        equaler_730=fun_761;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2532, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value915=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2532, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_761),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_763=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value915,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_763,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_746);
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_742;
        info->head=head_745;
        info->sline=sline_743;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_744);
        /*G*/ __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_734,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_744 = come_decrement_ref_count2(sname_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_746,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_747,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_748,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_749 = come_decrement_ref_count2(name_749, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_750,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_751,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_753,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_755,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_756,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_757,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_761,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_763) { node_763 = come_decrement_ref_count2(node_763, ((struct sNode*)node_763)->finalize, ((struct sNode*)node_763)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_729;
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_725);
    /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_726);
    /*G*/ __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj306=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_727);
    /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_728;
    __result252__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value921=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2553, "struct tuple2$2sFunpcharph")),equaler_730,(char*)come_increment_ref_count(real_fun_name_731))));
    last_code_725 = come_decrement_ref_count2(last_code_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_726 = come_decrement_ref_count2(last_code2_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_727 = come_decrement_ref_count2(last_code3_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_731 = come_decrement_ref_count2(real_fun_name_731, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_732,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value921,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_765;
char* __dec_obj307;
char* last_code2_766;
char* __dec_obj308;
char* last_code3_767;
char* __dec_obj309;
_Bool comma_instead_of_semicolon_768;
struct sClass* current_stack_frame_struct_769;
struct sFun* equaler_770;
void* __right_value922 = (void*)0;
char* real_fun_name_771;
void* __right_value923 = (void*)0;
struct sType* type2_772;
struct sClass* klass_773;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct buffer* source_774;
char* name_775;
int i_778;
struct list$1tuple2$2charphsTypephph* o2_saved_779;
struct tuple2$2charphsTypeph* it_780;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_781;
struct sType* field_type_782;
char* p_786;
int sline_787;
char* sname_788;
char* head_789;
struct buffer* source3_790;
struct buffer* __dec_obj310;
void* __right_value926 = (void*)0;
char* __dec_obj311;
void* __right_value927 = (void*)0;
struct sBlock* block_791;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sType* result_type_792;
void* __right_value930 = (void*)0;
char* name_793;
void* __right_value931 = (void*)0;
struct sType* left_type_794;
void* __right_value932 = (void*)0;
struct sType* right_type_795;
struct sType* __list_values27___796[2];
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct list$1sTypeph* param_types_797;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
char* __list_values28___798[2];
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
struct list$1charph* param_names_799;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct list$1charph* param_default_parametors_800;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
struct buffer* header_buf_801;
void* __right_value943 = (void*)0;
int i_802;
struct sType* param_type_803;
char* param_name_804;
void* __right_value944 = (void*)0;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
struct sFun* fun_805;
void* __right_value949 = (void*)0;
struct sFun* fun2_806;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value956 = (void*)0;
struct sNode* node_807;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct tuple2$2sFunpcharph* __result255__;
    last_code_765=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj307=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_766=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj308=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_767=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj309=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_768=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_769=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_770=((void*)0);
    real_fun_name_771=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_772=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_772;
    klass_773=type->mClass;
    if(    type->mPointerNum>0&&!klass_773->mNumber) {
        source_774=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2580, "buffer"))));
        buffer_append_char(source_774,123);
        if(        klass_773->mProtocol) {
            name_775="_protocol_obj";
            char source2_776[1024];
            memset(&source2_776, 0, sizeof(char)            *(1024)            );
            snprintf(source2_776,1024,"return !left.%s.equals(right.%s);\n",name_775,name_775);
            buffer_append_str(source_774,source2_776);
        }
        else {
            char source2_777[1024];
            memset(&source2_777, 0, sizeof(char)            *(1024)            );
            snprintf(source2_777,1024,"return !(");
            buffer_append_str(source_774,source2_777);
            i_778=0;
            klass_773=map$2charphsClassphp_operator_load_element(info->classes,klass_773->mName);
            for(            o2_saved_779=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_773->mFields)),it_780=list$1tuple2$2charphsTypephph_begin((o2_saved_779));            !list$1tuple2$2charphsTypephph_end((o2_saved_779));            it_780=list$1tuple2$2charphsTypephph_next((o2_saved_779))            ){
                multiple_assign_var13=it_780;
                name_781=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_782=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_782->mClass->mName)&&type->mPointerNum==field_type_782->mPointerNum&&field_type_782->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_783[1024];
                memset(&source2_783, 0, sizeof(char)                *(1024)                );
                snprintf(source2_783,1024,"left.%s.equals(right.%s)",name_781,name_781);
                buffer_append_str(source_774,source2_783);
                if(                i_778==list$1tuple2$2charphsTypephph_length(klass_773->mFields)-1) {
                    char source2_784[1024];
                    memset(&source2_784, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_784,1024,");");
                    buffer_append_str(source_774,source2_784);
                }
                else {
                    char source2_785[1024];
                    memset(&source2_785, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_785,1024," && ");
                    buffer_append_str(source_774,source2_785);
                }
                i_778++;
                name_781 = come_decrement_ref_count2(name_781, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_782,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_779,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_774,125);
        p_786=info->p;
        sline_787=info->sline;
        sname_788=(char*)come_increment_ref_count(info->sname);
        head_789=info->head;
        source3_790=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj310=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_774);
        come_call_finalizer3(__dec_obj310,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_774->buf;
        info->head=source_774->buf;
        __dec_obj311=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_771));
        /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_791=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_792=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2643, "sType")),"bool",(_Bool)0,info));
        name_793=(char*)come_increment_ref_count(string_clone(real_fun_name_771));
        left_type_794=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_794->mHeap=(_Bool)0;
        right_type_795=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_795->mHeap=(_Bool)0;
        {__list_values27___796[0]=come_increment_ref_count(left_type_794);
__list_values27___796[1]=come_increment_ref_count(right_type_795);
}        param_types_797=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2649, "struct list$1sTypeph")),2,__list_values27___796));
        {__list_values28___798[0]=come_increment_ref_count(((char*)(__right_value935=__builtin_string("left"))));
__list_values28___798[1]=come_increment_ref_count(((char*)(__right_value936=__builtin_string("right"))));
}        param_names_799=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2650, "struct list$1charph")),2,__list_values28___798));
        __right_value935 = come_decrement_ref_count2(__right_value935, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value936 = come_decrement_ref_count2(__right_value936, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_800=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2651, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_800,((void*)0));
        list$1charph_push_back(param_default_parametors_800,((void*)0));
        header_buf_801=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2655, "buffer"))));
        buffer_append_str(header_buf_801,((char*)(__right_value943=make_come_type_name_string(result_type_792,info))));
        __right_value943 = come_decrement_ref_count2(__right_value943, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_801," ");
        buffer_append_str(header_buf_801,real_fun_name_771);
        buffer_append_str(header_buf_801,"(");
        for(        i_802=0;        i_802<list$1sTypeph_length(param_types_797);        i_802++        ){
            param_type_803=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_797,i_802), "05function.c", 2663, 11));
            param_name_804=((char*)come_null_check(list$1charphp_operator_load_element(param_names_799,i_802), "05function.c", 2664, 12));
            buffer_append_str(header_buf_801,((char*)(__right_value944=make_come_type_name_string(param_type_803,info))));
            __right_value944 = come_decrement_ref_count2(__right_value944, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_801," ");
            buffer_append_str(header_buf_801,param_name_804);
            if(            i_802!=list$1sTypeph_length(param_types_797)-1) {
                buffer_append_str(header_buf_801,",");
            }
        }
        buffer_append_str(header_buf_801,")");
        result_type_792->mStatic=(_Bool)0;
        fun_805=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2678, "sFun")),(char*)come_increment_ref_count(name_793),(struct sType*)come_increment_ref_count(result_type_792),(struct list$1sTypeph*)come_increment_ref_count(param_types_797),(struct list$1charph*)come_increment_ref_count(param_names_799),(struct list$1charph*)come_increment_ref_count(param_default_parametors_800),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_791),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_801)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_806=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value949=__builtin_string(fun_name))));
        __right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_806==((void*)0)||fun2_806->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_793)),(struct sFun*)come_increment_ref_count(fun_805));
        }
        equaler_770=fun_805;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2694, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value952=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2694, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_805),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_807=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value952,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_807,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_790);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_786;
        info->head=head_789;
        info->sline=sline_787;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_788);
        /*G*/ __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_774,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_788 = come_decrement_ref_count2(sname_788, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_790,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_791,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_792,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_793 = come_decrement_ref_count2(name_793, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_794,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_795,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_797,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_799,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_800,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_801,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_805,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_807) { node_807 = come_decrement_ref_count2(node_807, ((struct sNode*)node_807)->finalize, ((struct sNode*)node_807)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_769;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_765);
    /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_766);
    /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_767);
    /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_768;
    __result255__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value958=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2715, "struct tuple2$2sFunpcharph")),equaler_770,(char*)come_increment_ref_count(real_fun_name_771))));
    last_code_765 = come_decrement_ref_count2(last_code_765, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_766 = come_decrement_ref_count2(last_code2_766, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_767 = come_decrement_ref_count2(last_code3_767, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_771 = come_decrement_ref_count2(real_fun_name_771, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_772,sType_finalize, 0, 0, 0, 0, (void*)0);
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

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_809;
char* __dec_obj321;
char* last_code2_810;
char* __dec_obj322;
char* last_code3_811;
char* __dec_obj323;
_Bool comma_instead_of_semicolon_812;
struct sClass* current_stack_frame_struct_813;
struct sFun* equaler_814;
void* __right_value959 = (void*)0;
char* real_fun_name_815;
void* __right_value960 = (void*)0;
struct sType* type2_816;
struct sClass* klass_817;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
struct buffer* source_818;
char* name_819;
struct list$1tuple2$2charphsTypephph* o2_saved_821;
struct tuple2$2charphsTypeph* it_822;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_823;
struct sType* field_type_824;
char* p_826;
int sline_827;
char* sname_828;
char* head_829;
struct buffer* source3_830;
struct buffer* __dec_obj324;
void* __right_value963 = (void*)0;
char* __dec_obj325;
void* __right_value964 = (void*)0;
struct sBlock* block_831;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sType* result_type_832;
void* __right_value967 = (void*)0;
char* name_833;
void* __right_value968 = (void*)0;
struct sType* left_type_834;
void* __right_value969 = (void*)0;
struct sType* right_type_835;
struct sType* __list_values29___836[2];
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct list$1sTypeph* param_types_837;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
char* __list_values30___838[2];
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct list$1charph* param_names_839;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct list$1charph* param_default_parametors_840;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct buffer* header_buf_841;
void* __right_value980 = (void*)0;
int i_842;
struct sType* param_type_843;
char* param_name_844;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sFun* fun_845;
void* __right_value986 = (void*)0;
struct sFun* fun2_846;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value993 = (void*)0;
struct sNode* node_847;
struct buffer* __dec_obj330;
char* __dec_obj331;
char* __dec_obj332;
char* __dec_obj333;
char* __dec_obj334;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
struct tuple2$2sFunpcharph* __result258__;
    last_code_809=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_810=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_811=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj323=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_812=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_813=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_814=((void*)0);
    real_fun_name_815=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_816=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_816;
    klass_817=type->mClass;
    if(    type->mPointerNum>0&&!klass_817->mNumber) {
        source_818=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2742, "buffer"))));
        buffer_append_char(source_818,123);
        if(        klass_817->mProtocol) {
            name_819="_protocol_obj";
            char source2_820[1024];
            memset(&source2_820, 0, sizeof(char)            *(1024)            );
            snprintf(source2_820,1024,"return left.%s.equals(right.%s);\n",name_819,name_819);
            buffer_append_str(source_818,source2_820);
        }
        else {
            klass_817=map$2charphsClassphp_operator_load_element(info->classes,klass_817->mName);
            for(            o2_saved_821=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_817->mFields)),it_822=list$1tuple2$2charphsTypephph_begin((o2_saved_821));            !list$1tuple2$2charphsTypephph_end((o2_saved_821));            it_822=list$1tuple2$2charphsTypephph_next((o2_saved_821))            ){
                multiple_assign_var14=it_822;
                name_823=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_824=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_824->mClass->mName)&&type->mPointerNum==field_type_824->mPointerNum&&field_type_824->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_825[1024];
                memset(&source2_825, 0, sizeof(char)                *(1024)                );
                snprintf(source2_825,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_823,name_823);
                buffer_append_str(source_818,source2_825);
                name_823 = come_decrement_ref_count2(name_823, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_824,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_821,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_818,"return true;\n");
        buffer_append_char(source_818,125);
        p_826=info->p;
        sline_827=info->sline;
        sname_828=(char*)come_increment_ref_count(info->sname);
        head_829=info->head;
        source3_830=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_818);
        come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_818->buf;
        info->head=source_818->buf;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_815));
        /*G*/ __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_831=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_832=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2788, "sType")),"bool",(_Bool)0,info));
        name_833=(char*)come_increment_ref_count(string_clone(real_fun_name_815));
        left_type_834=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_834->mHeap=(_Bool)0;
        right_type_835=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_835->mHeap=(_Bool)0;
        {__list_values29___836[0]=come_increment_ref_count(left_type_834);
__list_values29___836[1]=come_increment_ref_count(right_type_835);
}        param_types_837=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2794, "struct list$1sTypeph")),2,__list_values29___836));
        {__list_values30___838[0]=come_increment_ref_count(((char*)(__right_value972=__builtin_string("left"))));
__list_values30___838[1]=come_increment_ref_count(((char*)(__right_value973=__builtin_string("right"))));
}        param_names_839=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2795, "struct list$1charph")),2,__list_values30___838));
        __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_840=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2796, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_840,((void*)0));
        list$1charph_push_back(param_default_parametors_840,((void*)0));
        header_buf_841=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2800, "buffer"))));
        buffer_append_str(header_buf_841,((char*)(__right_value980=make_come_type_name_string(result_type_832,info))));
        __right_value980 = come_decrement_ref_count2(__right_value980, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_841," ");
        buffer_append_str(header_buf_841,real_fun_name_815);
        buffer_append_str(header_buf_841,"(");
        for(        i_842=0;        i_842<list$1sTypeph_length(param_types_837);        i_842++        ){
            param_type_843=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_837,i_842), "05function.c", 2808, 13));
            param_name_844=((char*)come_null_check(list$1charphp_operator_load_element(param_names_839,i_842), "05function.c", 2809, 14));
            buffer_append_str(header_buf_841,((char*)(__right_value981=make_come_type_name_string(param_type_843,info))));
            __right_value981 = come_decrement_ref_count2(__right_value981, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_841," ");
            buffer_append_str(header_buf_841,param_name_844);
            if(            i_842!=list$1sTypeph_length(param_types_837)-1) {
                buffer_append_str(header_buf_841,",");
            }
        }
        buffer_append_str(header_buf_841,")");
        result_type_832->mStatic=(_Bool)0;
        fun_845=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2823, "sFun")),(char*)come_increment_ref_count(name_833),(struct sType*)come_increment_ref_count(result_type_832),(struct list$1sTypeph*)come_increment_ref_count(param_types_837),(struct list$1charph*)come_increment_ref_count(param_names_839),(struct list$1charph*)come_increment_ref_count(param_default_parametors_840),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_831),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_841)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_846=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value986=__builtin_string(fun_name))));
        __right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_846==((void*)0)||fun2_846->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_833)),(struct sFun*)come_increment_ref_count(fun_845));
        }
        equaler_814=fun_845;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2839, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value989=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2839, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_845),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_847=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value989,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_847,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj330=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_830);
        come_call_finalizer3(__dec_obj330,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_826;
        info->head=head_829;
        info->sline=sline_827;
        __dec_obj331=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_828);
        /*G*/ __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_818,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_828 = come_decrement_ref_count2(sname_828, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_830,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_831,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_832,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_833 = come_decrement_ref_count2(name_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_834,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_835,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_837,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_839,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_840,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_841,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_845,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_847) { node_847 = come_decrement_ref_count2(node_847, ((struct sNode*)node_847)->finalize, ((struct sNode*)node_847)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_813;
    __dec_obj332=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_809);
    /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj333=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_810);
    /*G*/ __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj334=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_811);
    /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_812;
    __result258__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value995=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2860, "struct tuple2$2sFunpcharph")),equaler_814,(char*)come_increment_ref_count(real_fun_name_815))));
    last_code_809 = come_decrement_ref_count2(last_code_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_810 = come_decrement_ref_count2(last_code2_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_811 = come_decrement_ref_count2(last_code3_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_815 = come_decrement_ref_count2(real_fun_name_815, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_816,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value995,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_849;
char* __dec_obj335;
char* last_code2_850;
char* __dec_obj336;
char* last_code3_851;
char* __dec_obj337;
_Bool comma_instead_of_semicolon_852;
struct sClass* current_stack_frame_struct_853;
struct sFun* cloner_854;
void* __right_value996 = (void*)0;
char* real_fun_name_855;
void* __right_value997 = (void*)0;
struct sType* type2_856;
struct sClass* klass_857;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct buffer* source_858;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
char* name_859;
struct list$1tuple2$2charphsTypephph* o2_saved_861;
struct tuple2$2charphsTypeph* it_862;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_863;
struct sType* field_type_864;
struct list$1tuple2$2charphsTypephph* o2_saved_867;
struct tuple2$2charphsTypeph* it_868;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_869;
struct sType* field_type_870;
void* __right_value1002 = (void*)0;
char* p_874;
int sline_875;
char* sname_876;
struct buffer* source3_877;
char* head_878;
struct buffer* __dec_obj338;
void* __right_value1003 = (void*)0;
char* __dec_obj339;
void* __right_value1004 = (void*)0;
struct sBlock* block_879;
void* __right_value1005 = (void*)0;
struct sType* result_type_880;
void* __right_value1006 = (void*)0;
char* name_881;
void* __right_value1007 = (void*)0;
struct sType* self_type_882;
struct sType* __list_values31___883[1];
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct list$1sTypeph* param_types_884;
void* __right_value1010 = (void*)0;
char* __list_values32___885[1];
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct list$1charph* param_names_886;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct list$1charph* param_default_parametors_887;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct buffer* header_buf_888;
void* __right_value1017 = (void*)0;
int i_889;
struct sType* param_type_890;
char* param_name_891;
void* __right_value1018 = (void*)0;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sFun* fun_892;
void* __right_value1023 = (void*)0;
struct sFun* fun2_893;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1030 = (void*)0;
struct sNode* node_894;
char* __dec_obj344;
struct buffer* __dec_obj345;
char* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct tuple2$2sFunpcharph* __result261__;
    last_code_849=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj335=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_850=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj336=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_851=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj337=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_852=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_853=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_854=((void*)0);
    real_fun_name_855=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_856=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_856;
    klass_857=type->mClass;
    if(    type->mPointerNum>0&&!klass_857->mNumber) {
        source_858=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2887, "buffer"))));
        buffer_append_str(source_858,"{\n");
        buffer_append_str(source_858,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_858,((char*)(__right_value1001=xsprintf("var result = new %s;\n",((char*)(__right_value1000=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_857->mProtocol) {
            name_859="_protocol_obj";
            char source2_860[1024];
            memset(&source2_860, 0, sizeof(char)            *(1024)            );
            snprintf(source2_860,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_858,source2_860);
            klass_857=map$2charphsClassphp_operator_load_element(info->classes,klass_857->mName);
            for(            o2_saved_861=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_857->mFields)),it_862=list$1tuple2$2charphsTypephph_begin((o2_saved_861));            !list$1tuple2$2charphsTypephph_end((o2_saved_861));            it_862=list$1tuple2$2charphsTypephph_next((o2_saved_861))            ){
                multiple_assign_var15=it_862;
                name_863=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_864=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_864->mClass->mName)&&type->mPointerNum==field_type_864->mPointerNum&&field_type_864->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                string_operator_equals(name_863,"_protocol_obj")) {
                }
                else if(                list$1sNodeph_length(field_type_864->mArrayNum)>0) {
                    char source2_865[1024];
                    memset(&source2_865, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_865,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_863,name_863,name_863);
                    buffer_append_str(source_858,source2_865);
                }
                else {
                    char source2_866[1024];
                    memset(&source2_866, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_866,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_863,name_863);
                    buffer_append_str(source_858,source2_866);
                }
                name_863 = come_decrement_ref_count2(name_863, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_864,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_861,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_857=map$2charphsClassphp_operator_load_element(info->classes,klass_857->mName);
            for(            o2_saved_867=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_857->mFields)),it_868=list$1tuple2$2charphsTypephph_begin((o2_saved_867));            !list$1tuple2$2charphsTypephph_end((o2_saved_867));            it_868=list$1tuple2$2charphsTypephph_next((o2_saved_867))            ){
                multiple_assign_var16=it_868;
                name_869=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_870=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(                string_operator_equals(type->mClass->mName,field_type_870->mClass->mName)&&type->mPointerNum==field_type_870->mPointerNum&&field_type_870->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(                field_type_870->mHeap) {
                    char source2_871[1024];
                    memset(&source2_871, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_871,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_869,name_869,name_869);
                    buffer_append_str(source_858,source2_871);
                }
                else if(                list$1sNodeph_length(field_type_870->mArrayNum)>0) {
                    char source2_872[1024];
                    memset(&source2_872, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_872,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_869,name_869,name_869);
                    buffer_append_str(source_858,source2_872);
                }
                else {
                    char source2_873[1024];
                    memset(&source2_873, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_873,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_869,name_869);
                    buffer_append_str(source_858,source2_873);
                }
                name_869 = come_decrement_ref_count2(name_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_870,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_867,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_858,((char*)(__right_value1002=xsprintf("return result;"))));
        __right_value1002 = come_decrement_ref_count2(__right_value1002, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_858,125);
        p_874=info->p;
        sline_875=info->sline;
        sname_876=(char*)come_increment_ref_count(info->sname);
        source3_877=(struct buffer*)come_increment_ref_count(info->source);
        head_878=info->head;
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_858);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj339=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_855));
        /*G*/ __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_879=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_880=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_881=(char*)come_increment_ref_count(string_clone(real_fun_name_855));
        self_type_882=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_882->mHeap=(_Bool)0;
        {__list_values31___883[0]=come_increment_ref_count(self_type_882);
}        param_types_884=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2981, "struct list$1sTypeph")),1,__list_values31___883));
        {__list_values32___885[0]=come_increment_ref_count(((char*)(__right_value1010=__builtin_string("self"))));
}        param_names_886=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2982, "struct list$1charph")),1,__list_values32___885));
        __right_value1010 = come_decrement_ref_count2(__right_value1010, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_887=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2983, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_887,((void*)0));
        header_buf_888=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2986, "buffer"))));
        buffer_append_str(header_buf_888,((char*)(__right_value1017=make_come_type_name_string(result_type_880,info))));
        __right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_888," ");
        buffer_append_str(header_buf_888,real_fun_name_855);
        buffer_append_str(header_buf_888,"(");
        for(        i_889=0;        i_889<list$1sTypeph_length(param_types_884);        i_889++        ){
            param_type_890=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_884,i_889), "05function.c", 2994, 15));
            param_name_891=((char*)come_null_check(list$1charphp_operator_load_element(param_names_886,i_889), "05function.c", 2995, 16));
            buffer_append_str(header_buf_888,((char*)(__right_value1018=make_come_type_name_string(param_type_890,info))));
            __right_value1018 = come_decrement_ref_count2(__right_value1018, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_888," ");
            buffer_append_str(header_buf_888,param_name_891);
            if(            i_889!=list$1sTypeph_length(param_types_884)-1) {
                buffer_append_str(header_buf_888,",");
            }
        }
        buffer_append_str(header_buf_888,")");
        result_type_880->mStatic=(_Bool)0;
        fun_892=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3009, "sFun")),(char*)come_increment_ref_count(name_881),(struct sType*)come_increment_ref_count(result_type_880),(struct list$1sTypeph*)come_increment_ref_count(param_types_884),(struct list$1charph*)come_increment_ref_count(param_names_886),(struct list$1charph*)come_increment_ref_count(param_default_parametors_887),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_879),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_888)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_892->mCloner=(_Bool)1;
        fun2_893=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1023=__builtin_string(fun_name))));
        __right_value1023 = come_decrement_ref_count2(__right_value1023, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_893==((void*)0)||fun2_893->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_881)),(struct sFun*)come_increment_ref_count(fun_892));
        }
        cloner_854=fun_892;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3026, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1026=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3026, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_892),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_894=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1026,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_894,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj344=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_876);
        /*G*/ __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_875;
        __dec_obj345=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_877);
        come_call_finalizer3(__dec_obj345,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_874;
        info->head=head_878;
        info->sline=sline_875;
        /*i*/come_call_finalizer3(source_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_876 = come_decrement_ref_count2(sname_876, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_877,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_879,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_880,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_881 = come_decrement_ref_count2(name_881, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_882,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_884,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_887,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_888,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_892,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_894) { node_894 = come_decrement_ref_count2(node_894, ((struct sNode*)node_894)->finalize, ((struct sNode*)node_894)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_853;
    __dec_obj346=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_849);
    /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj347=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_850);
    /*G*/ __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj348=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_851);
    /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_852;
    __result261__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1032=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3049, "struct tuple2$2sFunpcharph")),cloner_854,(char*)come_increment_ref_count(real_fun_name_855))));
    last_code_849 = come_decrement_ref_count2(last_code_849, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_850 = come_decrement_ref_count2(last_code2_850, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_851 = come_decrement_ref_count2(last_code3_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_855 = come_decrement_ref_count2(real_fun_name_855, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_856,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1032,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_896;
char* __dec_obj349;
char* last_code2_897;
char* __dec_obj350;
char* last_code3_898;
char* __dec_obj351;
_Bool comma_instead_of_semicolon_899;
struct sClass* current_stack_frame_struct_900;
struct sFun* cloner_901;
void* __right_value1033 = (void*)0;
char* real_fun_name_902;
void* __right_value1034 = (void*)0;
struct sType* type2_903;
struct sClass* klass_904;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
struct buffer* source_905;
void* __right_value1037 = (void*)0;
int i_906;
struct list$1tuple2$2charphsTypephph* o2_saved_907;
struct tuple2$2charphsTypeph* it_908;
struct tuple2$2charphsTypeph* multiple_assign_var17;
char* name_909;
struct sType* field_type_910;
void* __right_value1038 = (void*)0;
char* p_913;
int sline_914;
char* sname_915;
struct buffer* source3_916;
char* head_917;
struct buffer* __dec_obj352;
void* __right_value1039 = (void*)0;
char* __dec_obj353;
void* __right_value1040 = (void*)0;
struct sBlock* block_918;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sType* result_type_919;
void* __right_value1043 = (void*)0;
char* name_920;
void* __right_value1044 = (void*)0;
struct sType* self_type_921;
struct sType* __list_values33___922[1];
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct list$1sTypeph* param_types_923;
void* __right_value1047 = (void*)0;
char* __list_values34___924[1];
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
struct list$1charph* param_names_925;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct list$1charph* param_default_parametors_926;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct buffer* header_buf_927;
void* __right_value1054 = (void*)0;
int i_928;
struct sType* param_type_929;
char* param_name_930;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
void* __right_value1059 = (void*)0;
struct sFun* fun_931;
void* __right_value1060 = (void*)0;
struct sFun* fun2_932;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1067 = (void*)0;
struct sNode* node_933;
char* __dec_obj358;
struct buffer* __dec_obj359;
char* __dec_obj360;
char* __dec_obj361;
char* __dec_obj362;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
struct tuple2$2sFunpcharph* __result264__;
    last_code_896=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj349=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    /*G*/ __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_897=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj350=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    /*G*/ __dec_obj350 = come_decrement_ref_count2(__dec_obj350, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_898=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj351=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    /*G*/ __dec_obj351 = come_decrement_ref_count2(__dec_obj351, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_899=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_900=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_901=((void*)0);
    real_fun_name_902=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_903=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_903;
    klass_904=type->mClass;
    if(    type->mPointerNum>0&&!klass_904->mNumber) {
        source_905=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3076, "buffer"))));
        buffer_append_str(source_905,"{\n");
        buffer_append_str(source_905,"var result = new buffer();\n");
        buffer_append_str(source_905,((char*)(__right_value1037=xsprintf("result.append_str(\"%s {\");\n",klass_904->mName))));
        __right_value1037 = come_decrement_ref_count2(__right_value1037, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        i_906=0;
        klass_904=map$2charphsClassphp_operator_load_element(info->classes,klass_904->mName);
        for(        o2_saved_907=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_904->mFields)),it_908=list$1tuple2$2charphsTypephph_begin((o2_saved_907));        !list$1tuple2$2charphsTypephph_end((o2_saved_907));        it_908=list$1tuple2$2charphsTypephph_next((o2_saved_907))        ){
            multiple_assign_var17=it_908;
            name_909=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            field_type_910=(struct sType*)come_increment_ref_count(multiple_assign_var17->v2);
            if(            string_operator_equals(type->mClass->mName,field_type_910->mClass->mName)&&type->mPointerNum==field_type_910->mPointerNum&&field_type_910->mHeap) {
                err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(            i_906==list$1tuple2$2charphsTypephph_length(klass_904->mFields)-1) {
                char source2_911[1024];
                memset(&source2_911, 0, sizeof(char)                *(1024)                );
                snprintf(source2_911,1024,"result.append_str(\"%s:\");\n",name_909);
                buffer_append_str(source_905,source2_911);
                snprintf(source2_911,1024,"result.append_str(self.%s.to_string());\n",name_909);
                buffer_append_str(source_905,source2_911);
            }
            else {
                char source2_912[1024];
                memset(&source2_912, 0, sizeof(char)                *(1024)                );
                snprintf(source2_912,1024,"result.append_str(\"%s:\");\n",name_909);
                buffer_append_str(source_905,source2_912);
                snprintf(source2_912,1024,"result.append_str(self.%s.to_string());\n",name_909);
                buffer_append_str(source_905,source2_912);
                snprintf(source2_912,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_905,source2_912);
            }
            i_906++;
            name_909 = come_decrement_ref_count2(name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_910,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_907,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_905,"result.append_str(\"}\");\n");
        buffer_append_str(source_905,((char*)(__right_value1038=xsprintf("return result.to_string();\n"))));
        __right_value1038 = come_decrement_ref_count2(__right_value1038, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_905,125);
        p_913=info->p;
        sline_914=info->sline;
        sname_915=(char*)come_increment_ref_count(info->sname);
        source3_916=(struct buffer*)come_increment_ref_count(info->source);
        head_917=info->head;
        __dec_obj352=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_905);
        come_call_finalizer3(__dec_obj352,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj353=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_902));
        /*G*/ __dec_obj353 = come_decrement_ref_count2(__dec_obj353, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_918=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_919=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3143, "sType")),"char*",(_Bool)0,info));
        result_type_919->mHeap=(_Bool)1;
        name_920=(char*)come_increment_ref_count(string_clone(real_fun_name_902));
        self_type_921=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_921->mHeap=(_Bool)0;
        {__list_values33___922[0]=come_increment_ref_count(self_type_921);
}        param_types_923=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3148, "struct list$1sTypeph")),1,__list_values33___922));
        {__list_values34___924[0]=come_increment_ref_count(((char*)(__right_value1047=__builtin_string("self"))));
}        param_names_925=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3149, "struct list$1charph")),1,__list_values34___924));
        __right_value1047 = come_decrement_ref_count2(__right_value1047, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_926=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3150, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_926,((void*)0));
        header_buf_927=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3153, "buffer"))));
        buffer_append_str(header_buf_927,((char*)(__right_value1054=make_come_type_name_string(result_type_919,info))));
        __right_value1054 = come_decrement_ref_count2(__right_value1054, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_927," ");
        buffer_append_str(header_buf_927,real_fun_name_902);
        buffer_append_str(header_buf_927,"(");
        for(        i_928=0;        i_928<list$1sTypeph_length(param_types_923);        i_928++        ){
            param_type_929=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_923,i_928), "05function.c", 3161, 17));
            param_name_930=((char*)come_null_check(list$1charphp_operator_load_element(param_names_925,i_928), "05function.c", 3162, 18));
            buffer_append_str(header_buf_927,((char*)(__right_value1055=make_come_type_name_string(param_type_929,info))));
            __right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_927," ");
            buffer_append_str(header_buf_927,param_name_930);
            if(            i_928!=list$1sTypeph_length(param_types_923)-1) {
                buffer_append_str(header_buf_927,",");
            }
        }
        buffer_append_str(header_buf_927,")");
        result_type_919->mStatic=(_Bool)0;
        fun_931=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3176, "sFun")),(char*)come_increment_ref_count(name_920),(struct sType*)come_increment_ref_count(result_type_919),(struct list$1sTypeph*)come_increment_ref_count(param_types_923),(struct list$1charph*)come_increment_ref_count(param_names_925),(struct list$1charph*)come_increment_ref_count(param_default_parametors_926),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_918),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_927)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_931->mCloner=(_Bool)1;
        fun2_932=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1060=__builtin_string(fun_name))));
        __right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_932==((void*)0)||fun2_932->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_920)),(struct sFun*)come_increment_ref_count(fun_931));
        }
        cloner_901=fun_931;
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3193, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sFunNode*)(__right_value1063=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3193, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_931),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sFunNode_finalize;
        _inf_value15->clone=(void*)sFunNode_clone;
        _inf_value15->compile=(void*)sFunNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sFunNode_kind;
        node_933=(struct sNode*)come_increment_ref_count(_inf_value15);
        /*g*/come_call_finalizer3(__right_value1063,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !node_compile(node_933,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj358=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_915);
        /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_914;
        __dec_obj359=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_916);
        come_call_finalizer3(__dec_obj359,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_913;
        info->head=head_917;
        info->sline=sline_914;
        /*i*/come_call_finalizer3(source_905,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_915 = come_decrement_ref_count2(sname_915, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_916,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_918,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_919,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_920 = come_decrement_ref_count2(name_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_921,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_923,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_925,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_926,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_927,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_931,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_933) { node_933 = come_decrement_ref_count2(node_933, ((struct sNode*)node_933)->finalize, ((struct sNode*)node_933)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_900;
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_896);
    /*G*/ __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_897);
    /*G*/ __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj362=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_898);
    /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_899;
    __result264__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1069=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3216, "struct tuple2$2sFunpcharph")),cloner_901,(char*)come_increment_ref_count(real_fun_name_902))));
    last_code_896 = come_decrement_ref_count2(last_code_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_897 = come_decrement_ref_count2(last_code2_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_898 = come_decrement_ref_count2(last_code3_898, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_902 = come_decrement_ref_count2(real_fun_name_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_903,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1069,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj354;
struct sFun* __dec_obj355;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj354=self->sname;
            /*G*/ __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj355=self->mFun;
            come_call_finalizer3(__dec_obj355,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result262__;
void* __right_value1064 = (void*)0;
struct sFunNode* result_934;
void* __right_value1065 = (void*)0;
char* __dec_obj356;
void* __right_value1066 = (void*)0;
struct sFun* __dec_obj357;
struct sFunNode* __result263__;
    if(    self==(void*)0) {
        __result262__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_934=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(    self!=((void*)0)) {
        result_934->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj356=result_934->sname;
        result_934->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj357=result_934->mFun;
        result_934->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        come_call_finalizer3(__dec_obj357,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_934;
    /*i*/come_call_finalizer3(result_934,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

