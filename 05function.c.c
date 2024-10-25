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
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);
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
struct sNode* create_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_catch_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
struct sNode* condtional_node(struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);
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
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
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
static void sVar_finalize(struct sVar* self);
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
    /* a*/come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            /* a*/come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            /* a*/come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            /* a*/come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            /* a*/come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            /* a*/come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            /* a*/come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(self!=((void*)0)&&self->memory!=((void*)0)) {
        if(self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            /* a*/come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    if(self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 221, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else {
        if(self->len==1) {
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
    if(self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 221, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else {
        if(self->len==1) {
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
    if(self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 221, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else {
        if(self->len==1) {
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
    if(self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 221, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else {
        if(self->len==1) {
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
    if(self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 221, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else {
        if(self->len==1) {
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
    if(self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 221, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else {
        if(self->len==1) {
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
    if(self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 221, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else {
        if(self->len==1) {
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
    if(0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(self&&self->items) {
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
    if(0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self&&self->items) {
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
    if(0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(self&&self->items) {
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
    if(0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(self&&self->items) {
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
    if(0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(self&&self->items) {
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
    if(0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(self&&self->items) {
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
    if(0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(self&&self->items) {
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
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(!gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value122=make_define_var(result_type_65,"__result_obj__",(_Bool)0,info))));
        __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_66=info->block_level;
    info->block_level=0;
    if(self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_66;
    come_value_67=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "CVALUE"))));
    __dec_obj18=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(sType_clone(self->mFun->mLambdaType));
    /* a*/come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_67->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_67->c_value);
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
    if(self==(void*)0) {
        __result69__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    result_68=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_68->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_68->mNoSolvedGenericsType;
        result_68->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_68->mOriginalLoadVarType;
        result_68->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj43=result_68->mNoExceptionType;
        result_68->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj43,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj44=result_68->mGenericsName;
        result_68->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj48=result_68->mGenericsTypes;
        result_68->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj52=result_68->mArrayNum;
        result_68->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj53=result_68->mParamTypes;
        result_68->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj53,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj57=result_68->mParamNames;
        result_68->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj57,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj58=result_68->mResultType;
        result_68->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj58,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj59=result_68->mAlignas;
        result_68->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_68->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_68->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_68->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_68->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_68->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_68->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_68->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_68->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_68->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_68->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_68->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_68->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_68->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_68->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_68->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_68->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_68->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_68->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_68->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_68->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_68->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_68->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_68->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_68->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj60=result_68->mSizeNum;
        result_68->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_68->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_68->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_68->mOriginalTypeName;
        result_68->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_68->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_68->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_68->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_68->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_68->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_68->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_68->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_68->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_68->mAsmName;
        result_68->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_68->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_68->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_68->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_68->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_68->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
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
    if(self==(void*)0) {
        __result70__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    result_69=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj19=result_69->v1;
        result_69->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 0, 0, (void*)0);
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
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj20=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj22=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj22,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj24=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj24,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj26=self->mGenericsName;
            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj27=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj29=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj29,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj31=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj31,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj32=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj32,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj34=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj36=self->mAlignas;
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj37=self->mSizeNum;
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj38=self->mOriginalTypeName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj39=self->mAsmName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /* a*/come_call_finalizer3(__dec_obj28,sType_finalize, 0, 0, 1, 0, (void*)0);
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
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, ((struct sNode*)__dec_obj30)->finalize, ((struct sNode*)__dec_obj30)->_protocol_obj, 0,0,0, (void*)0); }
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
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            /* a*/come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj40;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj40=self->v1;
            /* a*/come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
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
    if(self==((void*)0)) {
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
    if(self->len==0) {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value135=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 151, "list_item$1sTypeph"))));
        litem_84->prev=((void*)0);
        litem_84->next=((void*)0);
        __dec_obj45=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_84;
        self->head=litem_84;
    }
    else {
        if(self->len==1) {
            litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value136=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 161, "list_item$1sTypeph"))));
            litem_85->prev=self->head;
            litem_85->next=((void*)0);
            __dec_obj46=litem_85->item;
            litem_85->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_85;
            self->head->next=litem_85;
        }
        else {
            litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value137=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 171, "list_item$1sTypeph"))));
            litem_86->prev=self->tail;
            litem_86->next=((void*)0);
            __dec_obj47=litem_86->item;
            litem_86->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_86;
            self->tail=litem_86;
        }
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
    if(self==((void*)0)) {
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
    if(self->len==0) {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value142=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 151, "list_item$1sNodeph"))));
        litem_89->prev=((void*)0);
        litem_89->next=((void*)0);
        __dec_obj49=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_89;
        self->head=litem_89;
    }
    else {
        if(self->len==1) {
            litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value143=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 161, "list_item$1sNodeph"))));
            litem_90->prev=self->head;
            litem_90->next=((void*)0);
            __dec_obj50=litem_90->item;
            litem_90->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_90;
            self->head->next=litem_90;
        }
        else {
            litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value144=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 171, "list_item$1sNodeph"))));
            litem_91->prev=self->tail;
            litem_91->next=((void*)0);
            __dec_obj51=litem_91->item;
            litem_91->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_91;
            self->tail=litem_91;
        }
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
    if(self==(void*)0) {
        __result79__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_92=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_92->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_92->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_92->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_92->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_92->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_92->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_92->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
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
    if(self==((void*)0)) {
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
    if(self->len==0) {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value151=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 151, "list_item$1charph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj54=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_95;
        self->head=litem_95;
    }
    else {
        if(self->len==1) {
            litem_96=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value152=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 161, "list_item$1charph"))));
            litem_96->prev=self->head;
            litem_96->next=((void*)0);
            __dec_obj55=litem_96->item;
            litem_96->item=(char*)come_increment_ref_count(item);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_96;
            self->head->next=litem_96;
        }
        else {
            litem_97=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value153=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 171, "list_item$1charph"))));
            litem_97->prev=self->tail;
            litem_97->next=((void*)0);
            __dec_obj56=litem_97->item;
            litem_97->item=(char*)come_increment_ref_count(item);
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_97;
            self->tail=litem_97;
        }
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
    if(self->len==0) {
        litem_98=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value162=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 221, "list_item$1CVALUEph"))));
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj64=litem_98->item;
        litem_98->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj64,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else {
        if(self->len==1) {
            litem_99=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value163=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 231, "list_item$1CVALUEph"))));
            litem_99->prev=self->head;
            litem_99->next=((void*)0);
            __dec_obj68=litem_99->item;
            litem_99->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj68,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_99;
            self->head->next=litem_99;
        }
        else {
            litem_100=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value164=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 241, "list_item$1CVALUEph"))));
            litem_100->prev=self->tail;
            litem_100->next=((void*)0);
            __dec_obj69=litem_100->item;
            litem_100->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_100;
            self->tail=litem_100;
        }
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
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj65=self->c_value;
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj66=self->type;
            /* a*/come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj67=self->c_value_without_right_value_objects;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj70,sFun_finalize, 0, 0, 0, 0, (void*)0);
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
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(self->mFun->mBlock) {
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_103=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "sType")),"void*",(_Bool)0,info));
        if(!gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value170=make_define_var(result_type_103,"__result_obj__",(_Bool)0,info))));
            __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_104=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_104;
        if(!gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value171=xsprintf("come_heap_final();\n"))));
            __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(result_type_103,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_101;
    __dec_obj89=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_102);
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj71=self->mName;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj72=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj73=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj73,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj74=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj74,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj75=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj76=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj77=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj77,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj80=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj80,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj81=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj81,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj82=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj82,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj83=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj83,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj84=self->mComeHeader;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj85=self->mDeclareSName;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj78;
struct sVarTable* __dec_obj79;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj78=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj78,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj79=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj79,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
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
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 128, "list$1sNodeph"))));
    /* a*/come_call_finalizer3(__dec_obj90,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
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
    /* a*/come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj92=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_type_names));
    /* a*/come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj93=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(method_generics_type_names));
    /* a*/come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    /* a*/come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    /* a*/come_call_finalizer3(__dec_obj96,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    /* a*/come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    /* a*/come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj99=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj100=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj101=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj101,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj102=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj103=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj105=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj106=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj106,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj107=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj108=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj109=self->mBlock;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj110=self->mGenericsSName;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
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
int block_level_106;
char* p_107;
int sline_108;
char* sname_109;
void* __right_value180 = (void*)0;
struct sNode* node_110;
void* __right_value181 = (void*)0;
char* __dec_obj111;
_Bool omit_semicolon_114;
void* __right_value185 = (void*)0;
char* __dec_obj115;
char* head_129;
void* __right_value186 = (void*)0;
struct sNode* value_130;
char* tail_131;
void* __right_value187 = (void*)0;
struct sNode* __dec_obj116;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct sNode* node_133;
struct sNode* node_134;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value194 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value195 = (void*)0;
struct sNode* __dec_obj120;
char* p_136;
char* head_137;
void* __right_value196 = (void*)0;
char* source_138;
void* __right_value197 = (void*)0;
struct sNode* node_139;
struct sBlock* __result100__;
node_134 = (void*)0;
    result_105=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 158, "sBlock")),info));
    block_level_106=info->block_level;
    if(!no_block_level) {
        info->block_level++;
    }
    if(*info->p==123) {
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            parse_sharp_v5(info);
            if(*info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            p_107=info->p;
            sline_108=info->sline;
            sname_109=info->sname;
            node_110=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj111=info->sname;
            info->sname=(char*)come_increment_ref_count(node_110->sname(node_110->_protocol_obj));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_110->sline(node_110->_protocol_obj);
            if(node_110==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_110));
            parse_sharp_v5(info);
            if(node_110->terminated(node_110->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_114=(_Bool)1;
            if(node_110->terminated(node_110->_protocol_obj)) {
                omit_semicolon_114=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_114=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(*info->p==125) {
                result_105->mOmitSemicolon=omit_semicolon_114;
                if(omit_semicolon_114&&in_function) {
                    list$1sNodeph_delete(result_105->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_107;
                    info->sline=sline_108;
                    __dec_obj115=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_109));
                    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_129=info->p;
                    value_130=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_131=info->p;
                    __dec_obj116=value_130;
                    value_130=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_130),info));
                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
                    char buf_132[tail_131-head_129+1];
                    memset(&buf_132, 0, sizeof(char)                    *(tail_131-head_129+1)                    );
                    memcpy(buf_132,head_129,tail_131-head_129);
                    buf_132[tail_131-head_129]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_133=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_130),(char*)come_increment_ref_count(__builtin_string(buf_132)),info));
                    list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_133));
                    if(value_130) { value_130 = come_decrement_ref_count2(value_130, ((struct sNode*)value_130)->finalize, ((struct sNode*)value_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_133) { node_133 = come_decrement_ref_count2(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_110) { node_110 = come_decrement_ref_count2(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_130) { value_130 = come_decrement_ref_count2(value_130, ((struct sNode*)value_130)->finalize, ((struct sNode*)value_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_133) { node_133 = come_decrement_ref_count2(node_133, ((struct sNode*)node_133)->finalize, ((struct sNode*)node_133)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node_110) { node_110 = come_decrement_ref_count2(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            if(node_110) { node_110 = come_decrement_ref_count2(node_110, ((struct sNode*)node_110)->finalize, ((struct sNode*)node_110)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        parse_sharp_v5(info);
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 263, "struct sNode");
            _inf_obj_value1=come_increment_ref_count(((struct sSemicolonNode*)(__right_value191=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 263, "sSemicolonNode")),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj119=node_134;
            node_134=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
            /*g*/come_call_finalizer3(__right_value191,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj120=node_134;
            node_134=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
            parse_sharp_v5(info);
            if(node_134==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            if(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_134));
        if(node_134) { node_134 = come_decrement_ref_count2(node_134, ((struct sNode*)node_134)->finalize, ((struct sNode*)node_134)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(return_self_at_last) {
        p_136=info->p;
        head_137=info->head;
        source_138=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_138;
        info->head=source_138;
        node_139=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(node_139==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodeph_push_back(result_105->mNodes,(struct sNode*)come_increment_ref_count(node_139));
        info->p=p_136;
        info->head=head_137;
        source_138 = come_decrement_ref_count2(source_138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_106;
    __result100__ = gComeFunResultObject = __result_obj__ = result_105;
    /*i*/come_call_finalizer3(result_105,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
struct list_item$1sNodeph* litem_111;
struct sNode* __dec_obj112;
void* __right_value183 = (void*)0;
struct list_item$1sNodeph* litem_112;
struct sNode* __dec_obj113;
void* __right_value184 = (void*)0;
struct list_item$1sNodeph* litem_113;
struct sNode* __dec_obj114;
struct list$1sNodeph* __result94__;
    if(self->len==0) {
        litem_111=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value182=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 221, "list_item$1sNodeph"))));
        litem_111->prev=((void*)0);
        litem_111->next=((void*)0);
        __dec_obj112=litem_111->item;
        litem_111->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_111;
        self->head=litem_111;
    }
    else {
        if(self->len==1) {
            litem_112=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value183=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 231, "list_item$1sNodeph"))));
            litem_112->prev=self->head;
            litem_112->next=((void*)0);
            __dec_obj113=litem_112->item;
            litem_112->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_112;
            self->head->next=litem_112;
        }
        else {
            litem_113=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value184=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 241, "list_item$1sNodeph"))));
            litem_113->prev=self->tail;
            litem_113->next=((void*)0);
            __dec_obj114=litem_113->item;
            litem_113->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_113;
            self->tail=litem_113;
        }
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_115;
struct list$1sNodeph* __result95__;
struct list_item$1sNodeph* it_118;
int i_119;
struct list_item$1sNodeph* prev_it_120;
struct list_item$1sNodeph* it_121;
int i_122;
struct list_item$1sNodeph* prev_it_123;
struct list_item$1sNodeph* it_124;
struct list_item$1sNodeph* head_prev_it_125;
struct list_item$1sNodeph* tail_it_126;
int i_127;
struct list_item$1sNodeph* prev_it_128;
struct list$1sNodeph* __result97__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_115=tail;
        tail=head;
        head=tmp_115;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result95__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    if(head==0&&tail==self->len) {
        list$1sNodeph_reset(self);
    }
    else {
        if(head==0) {
            it_118=self->head;
            i_119=0;
            while(it_118!=((void*)0)) {
                if(i_119<tail) {
                    prev_it_120=it_118;
                    it_118=it_118->next;
                    i_119++;
                    /*i*/come_call_finalizer3(prev_it_120,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_119==tail) {
                        self->head=it_118;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_118=it_118->next;
                        i_119++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_121=self->head;
                i_122=0;
                while(it_121!=((void*)0)) {
                    if(i_122==head) {
                        self->tail=it_121->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_122>=head) {
                        prev_it_123=it_121;
                        it_121=it_121->next;
                        i_122++;
                        /*i*/come_call_finalizer3(prev_it_123,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_121=it_121->next;
                        i_122++;
                    }
                }
            }
            else {
                it_124=self->head;
                head_prev_it_125=((void*)0);
                tail_it_126=((void*)0);
                i_127=0;
                while(it_124!=((void*)0)) {
                    if(i_127==head) {
                        head_prev_it_125=it_124->prev;
                    }
                    if(i_127==tail) {
                        tail_it_126=it_124;
                    }
                    if(i_127>=head&&i_127<tail) {
                        prev_it_128=it_124;
                        it_124=it_124->next;
                        i_127++;
                        /*i*/come_call_finalizer3(prev_it_128,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_124=it_124->next;
                        i_127++;
                    }
                }
                if(head_prev_it_125!=((void*)0)) {
                    head_prev_it_125->next=tail_it_126;
                }
                if(tail_it_126!=((void*)0)) {
                    tail_it_126->prev=head_prev_it_125;
                }
            }
        }
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_116;
struct list_item$1sNodeph* prev_it_117;
struct list$1sNodeph* __result96__;
    it_116=self->head;
    while(it_116!=((void*)0)) {
        prev_it_117=it_116;
        it_116=it_116->next;
        /*i*/come_call_finalizer3(prev_it_117,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
char* __dec_obj117;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj117=self->sname;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result98__;
void* __right_value192 = (void*)0;
struct sSemicolonNode* result_135;
void* __right_value193 = (void*)0;
char* __dec_obj118;
struct sSemicolonNode* __result99__;
    if(self==(void*)0) {
        __result98__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    result_135=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "sSemicolonNode"));
    if(self!=((void*)0)) {
        result_135->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj118=result_135->sname;
        result_135->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_135;
    /*i*/come_call_finalizer3(result_135,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_140;
struct sVarTable* old_table_141;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
struct sVarTable* __dec_obj121;
struct sVarTable* current_loop_vtable_142;
struct list$1sTypeph* param_types__143;
struct list$1charph* param_names__144;
int i_145;
struct list$1charph* o2_saved_146;
char* name_149;
void* __right_value200 = (void*)0;
struct sType* type_152;
void* __right_value201 = (void*)0;
int block_level_156;
int i_157;
struct list$1sNodeph* o2_saved_158;
struct sNode* node_161;
struct list$1sRightValueObjectph* right_value_objects_164;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
char* __dec_obj129;
int stack_num_before_169;
int sline_170;
void* __right_value204 = (void*)0;
char* sname_171;
void* __right_value205 = (void*)0;
char* __dec_obj130;
void* __right_value206 = (void*)0;
struct CVALUE* come_value_172;
void* __right_value211 = (void*)0;
struct CVALUE* come_value2_173;
void* __right_value212 = (void*)0;
char* __dec_obj134;
void* __right_value213 = (void*)0;
struct CVALUE* come_value2_175;
struct sVar* var__176;
void* __right_value214 = (void*)0;
char* __dec_obj135;
void* __right_value215 = (void*)0;
char* __dec_obj136;
void* __right_value216 = (void*)0;
char* __dec_obj137;
void* __right_value217 = (void*)0;
char* __dec_obj138;
struct list$1sRightValueObjectph* __dec_obj139;
memset(&i_145, 0, sizeof(int));
memset(&i_157, 0, sizeof(int));
    if(info->output_header_file) {
        return 0;
    }
    inhibits_output_code_140=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_141=info->lv_table;
    if(!no_var_table) {
        __dec_obj121=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 321, "sVarTable")),(_Bool)0,old_table_141));
        /* a*/come_call_finalizer3(__dec_obj121,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_142=info->current_loop_vtable;
    if(loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__143=info->param_types;
    param_names__144=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(param_types&&param_names) {
        for(        o2_saved_146=(param_names),name_149=list$1charph_begin((o2_saved_146));        !list$1charph_end((o2_saved_146));        name_149=list$1charph_next((o2_saved_146))        ){
            type_152=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types,i_145), "05function.c", 339, 0))));
            type_152->mFunctionParam=(_Bool)1;
            type_152->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_149,(struct sType*)come_increment_ref_count(sType_clone(type_152)),info);
            i_145++;
            /*i*/come_call_finalizer3(type_152,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_156=info->block_level;
    if(!no_var_table) {
        info->block_level++;
    }
    if(list$1sNodeph_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_158=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_161=list$1sNodeph_begin((o2_saved_158));        !list$1sNodeph_end((o2_saved_158));        node_161=list$1sNodeph_next((o2_saved_158))        ){
            right_value_objects_164=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj126=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 358, "list$1sRightValueObjectph"))));
            /* a*/come_call_finalizer3(__dec_obj126,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj127=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj128=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=info->module->mLastCode3;
            info->module->mLastCode3=((void*)0);
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_169=list$1CVALUEph_length(info->stack);
            sline_170=info->sline;
            sname_171=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_161->sline(node_161->_protocol_obj);
            __dec_obj130=info->sname;
            info->sname=(char*)come_increment_ref_count(node_161->sname(node_161->_protocol_obj));
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->writing_source_file_position=(_Bool)1;
            if(i_157==list$1sNodeph_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                if(!node_compile(node_161,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                if(list$1CVALUEph_length(info->stack)==stack_num_before_169+1) {
                    come_value_172=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(string_operator_equals(come_value_172->type->mClass->mName,"void")&&come_value_172->type->mPointerNum==0) {
                        come_value2_173=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_172));
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_173));
                        __dec_obj134=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_173->c_value));
                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_173,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_175=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_172));
                        var__176=get_variable_from_table(info->lv_table,"__if_result__");
                        if(var__176) {
                            if(come_value2_175->type->mHeap) {
                                __dec_obj135=come_value2_175->c_value;
                                come_value2_175->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(come_increment_ref_count(%s))",var__176->mCValueName,come_value_172->c_value));
                                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                __dec_obj136=come_value2_175->c_value;
                                come_value2_175->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__176->mCValueName,come_value_172->c_value));
                                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_175));
                        __dec_obj137=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_175->c_value));
                        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
                        /*i*/come_call_finalizer3(come_value2_175,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(come_value_172,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                if(!node_compile(node_161,info)) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
            }
            info->sline=sline_170;
            __dec_obj138=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_171));
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_169);
            free_right_value_objects(info,(_Bool)0);
            if(info->right_value_objects) {
                list$1sRightValueObjectph_reset(info->right_value_objects);
            }
            __dec_obj139=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_164);
            /* a*/come_call_finalizer3(__dec_obj139,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_157++;
            /*i*/come_call_finalizer3(right_value_objects_164,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_171 = come_decrement_ref_count2(sname_171, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_158,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(!no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
    }
    info->lv_table=old_table_141;
    info->block_level=block_level_156;
    info->param_types=param_types__143;
    info->param_names=param_names__144;
    if(string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_142;
    info->inhibits_output_code=inhibits_output_code_140;
    return 0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_147;
char* __result101__;
char* __result102__;
char* result_148;
char* __result103__;
result_147 = (void*)0;
result_148 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_147,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_147;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->it=self->head;
    if(self->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_148,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_148;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_150;
char* __result104__;
char* __result105__;
char* result_151;
char* __result106__;
result_150 = (void*)0;
result_151 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_150,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_150;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_151,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_151;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_153;
int i_154;
struct sType* __result107__;
struct sType* default_value_155;
struct sType* __result108__;
default_value_155 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_153=self->head;
    i_154=0;
    while(it_153!=((void*)0)) {
        if(position==i_154) {
            __result107__ = gComeFunResultObject = __result_obj__ = it_153->item;
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
        it_153=it_153->next;
        i_154++;
    }
    memset(&default_value_155,0,sizeof(struct sType*));
    __result108__ = gComeFunResultObject = __result_obj__ = default_value_155;
    /*i*/come_call_finalizer3(default_value_155,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_159;
struct sNode* __result109__;
struct sNode* __result110__;
struct sNode* result_160;
struct sNode* __result111__;
result_159 = (void*)0;
result_160 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_159,0,sizeof(struct sNode*));
        __result109__ = gComeFunResultObject = __result_obj__ = result_159;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    self->it=self->head;
    if(self->it) {
        __result110__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result110__;
    }
    memset(&result_160,0,sizeof(struct sNode*));
    __result111__ = gComeFunResultObject = __result_obj__ = result_160;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_162;
struct sNode* __result112__;
struct sNode* __result113__;
struct sNode* result_163;
struct sNode* __result114__;
result_162 = (void*)0;
result_163 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_162,0,sizeof(struct sNode*));
        __result112__ = gComeFunResultObject = __result_obj__ = result_162;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result113__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    memset(&result_163,0,sizeof(struct sNode*));
    __result114__ = gComeFunResultObject = __result_obj__ = result_163;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_165;
struct list_item$1sRightValueObjectph* prev_it_166;
    it_165=self->head;
    while(it_165!=((void*)0)) {
        prev_it_166=it_165;
        it_165=it_165->next;
        /*i*/come_call_finalizer3(prev_it_166,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj122;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj122=self->item;
            /* a*/come_call_finalizer3(__dec_obj122,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj123;
char* __dec_obj124;
char* __dec_obj125;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj123=self->mType;
            /* a*/come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj124=self->mVarName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj125=self->mFunName;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_167;
struct list_item$1sRightValueObjectph* prev_it_168;
    it_167=self->head;
    while(it_167!=((void*)0)) {
        prev_it_168=it_167;
        it_167=it_167->next;
        /*i*/come_call_finalizer3(prev_it_168,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result116__;
void* __right_value207 = (void*)0;
struct CVALUE* result_174;
void* __right_value208 = (void*)0;
char* __dec_obj131;
void* __right_value209 = (void*)0;
struct sType* __dec_obj132;
void* __right_value210 = (void*)0;
char* __dec_obj133;
struct CVALUE* __result117__;
    if(self==(void*)0) {
        __result116__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    result_174=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj131=result_174->c_value;
        result_174->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj132=result_174->type;
        result_174->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_174->var=self->var;
    }
    if(self!=((void*)0)) {
        result_174->right_value_objects=self->right_value_objects;
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj133=result_174->c_value_without_right_value_objects;
        result_174->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result117__ = gComeFunResultObject = __result_obj__ = result_174;
    /*i*/come_call_finalizer3(result_174,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_177;
struct list_item$1sRightValueObjectph* prev_it_178;
struct list$1sRightValueObjectph* __result118__;
    it_177=self->head;
    while(it_177!=((void*)0)) {
        prev_it_178=it_177;
        it_177=it_177->next;
        /*i*/come_call_finalizer3(prev_it_178,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

void arrange_stack(struct sInfo* info, int top){
    if(list$1CVALUEph_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEph_length(info->stack)-top,info);
    }
    if(list$1CVALUEph_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEph_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(*info->p!=c) {
        if(!info->no_output_err) {
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
char* head_179;
_Bool dquort_180;
_Bool squort_181;
int sline_182;
int nest_183;
char* tail_184;
void* __right_value218 = (void*)0;
char* buf_185;
void* __right_value219 = (void*)0;
char* __result119__;
    head_179=info->p;
    if(*info->p==123) {
        info->p++;
        dquort_180=(_Bool)0;
        squort_181=(_Bool)0;
        sline_182=0;
        nest_183=0;
        while(1) {
            if(dquort_180) {
                if(*info->p==92) {
                    info->p++;
                    if(*info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_182);
                        exit(2);
                    }
                    if(*info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else {
                    if(*info->p==34) {
                        info->p++;
                        dquort_180=!dquort_180;
                    }
                    else {
                        if(*info->p==10) {
                            info->p++;
                            info->sline++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_182);
                                exit(2);
                            }
                        }
                        else {
                            info->p++;
                            if(*info->p==0) {
                                err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_182);
                                exit(2);
                            }
                        }
                    }
                }
            }
            else {
                if(squort_181) {
                    if(*info->p==92) {
                        info->p++;
                        if(*info->p==0) {
                            err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_182);
                            exit(2);
                        }
                        if(*info->p==10) {
                            info->sline++;
                        }
                        info->p++;
                    }
                    else {
                        if(*info->p==39) {
                            info->p++;
                            squort_181=!squort_181;
                        }
                        else {
                            if(*info->p==10) {
                                info->p++;
                                info->sline++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_182);
                                    exit(2);
                                }
                            }
                            else {
                                info->p++;
                                if(*info->p==0) {
                                    err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_182);
                                    exit(2);
                                }
                            }
                        }
                    }
                }
                else {
                    if(*info->p==39) {
                        sline_182=info->sline;
                        info->p++;
                        squort_181=!squort_181;
                    }
                    else {
                        if(*info->p==34) {
                            sline_182=info->sline;
                            info->p++;
                            dquort_180=!dquort_180;
                        }
                        else {
                            if(*info->p==35) {
                                parse_sharp_v5(info);
                            }
                            else {
                                if(*info->p==123) {
                                    info->p++;
                                    nest_183++;
                                }
                                else {
                                    if(*info->p==125) {
                                        info->p++;
                                        if(nest_183==0) {
                                            skip_spaces_and_lf(info);
                                            break;
                                        }
                                        nest_183--;
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"The block requires } character for closing block");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==10) {
                                                info->p++;
                                                info->sline++;
                                            }
                                            else {
                                                info->p++;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_184=info->p;
    buf_185=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_184-head_179+1)), "05function.c", 611, "char"));
    memcpy(buf_185,head_179,tail_184-head_179);
    buf_185[tail_184-head_179]=0;
    __result119__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value219=__builtin_string(buf_185)));
    buf_185 = come_decrement_ref_count2(buf_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_186;
char* p3_187;
int i_188;
    terminated_186=(_Bool)0;
    p3_187=p;
    for(    i_188=0;    i_188<strlen(p2);    i_188++    ){
        if(*p3_187==0) {
            terminated_186=(_Bool)1;
            break;
        }
        p3_187++;
    }
    return !terminated_186&&memcmp(p,p2,strlen(p2))==0;
}

char* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct buffer* asm_fun_name_189;
int brace_num_190;
int len_191;
_Bool in_dquort_192;
int brace_num_193;
int brace_num_194;
void* __right_value222 = (void*)0;
char* __result120__;
    asm_fun_name_189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 634, "buffer"))));
    while((_Bool)1) {
        if(strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else {
            if(strmemcmp(info->p,"__attribute_malloc__")) {
                info->p+=strlen("__attribute_malloc__");
                skip_spaces_and_lf(info);
            }
            else {
                if(strmemcmp(info->p,"__attr_dealloc_fclose")) {
                    info->p+=strlen("__attr_dealloc_fclose");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(strmemcmp(info->p,"__wur")) {
                        info->p+=strlen("__wur");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(strmemcmp(info->p,"__noreturn")) {
                            info->p+=strlen("__noreturn");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            if(strmemcmp(info->p,"__attribute__")) {
                                info->p+=strlen("__attribute__");
                                skip_spaces_and_lf(info);
                                brace_num_190=0;
                                while(*info->p) {
                                    if(*info->p==40) {
                                        info->p++;
                                        brace_num_190++;
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            brace_num_190--;
                                            if(brace_num_190==0) {
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
                                if(strmemcmp(info->p,"__asm__")) {
                                    info->p+=strlen("__asm__");
                                    skip_spaces_and_lf(info);
                                    len_191=0;
                                    in_dquort_192=(_Bool)0;
                                    brace_num_193=0;
                                    while(*info->p) {
                                        if(*info->p==34) {
                                            info->p++;
                                            in_dquort_192=!in_dquort_192;
                                        }
                                        else {
                                            if(in_dquort_192) {
                                                buffer_append_char(asm_fun_name_189,*info->p);
                                                info->p++;
                                            }
                                            else {
                                                if(*info->p==40) {
                                                    info->p++;
                                                    brace_num_193++;
                                                }
                                                else {
                                                    if(*info->p==41) {
                                                        info->p++;
                                                        brace_num_193--;
                                                        if(brace_num_193==0) {
                                                            break;
                                                        }
                                                    }
                                                    else {
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(strmemcmp(info->p,"__asm")) {
                                        info->p+=strlen("__asm");
                                        skip_spaces_and_lf(info);
                                        brace_num_194=0;
                                        while(*info->p) {
                                            if(*info->p==40) {
                                                info->p++;
                                                brace_num_194++;
                                            }
                                            else {
                                                if(*info->p==41) {
                                                    info->p++;
                                                    brace_num_194--;
                                                    if(brace_num_194==0) {
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
                            }
                        }
                    }
                }
            }
        }
    }
    __result120__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=buffer_to_string(asm_fun_name_189)));
    /*i*/come_call_finalizer3(asm_fun_name_189,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
char* head_195;
int head_sline_196;
void* __right_value223 = (void*)0;
char* buf_197;
void* __right_value224 = (void*)0;
struct sNode* node_198;
    while(*info->p) {
        parse_sharp_v5(info);
        head_195=info->p;
        head_sline_196=info->sline;
        buf_197=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_197 = come_decrement_ref_count2(buf_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_198=(struct sNode*)come_increment_ref_count(top_level_v99(buf_197,head_195,head_sline_196,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(node_198!=((void*)0)) {
            if(!node_compile(node_198,info)) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_197 = come_decrement_ref_count2(buf_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_197 = come_decrement_ref_count2(buf_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_198) { node_198 = come_decrement_ref_count2(node_198, ((struct sNode*)node_198)->finalize, ((struct sNode*)node_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value225 = (void*)0;
char* name_199;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
struct sType* result_type_200;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct sType* __list_values1___201[5];
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
struct list$1sTypeph* param_types_206;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
char* __list_values2___207[5];
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1charph* param_names_212;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct list$1charph* param_default_parametors_213;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct sFun* main_fun_214;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
char* name_256;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* result_type_257;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sType* __list_values3___258[1];
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1sTypeph* param_types_259;
void* __right_value273 = (void*)0;
char* __list_values4___260[1];
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* param_names_261;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1charph* param_default_parametors_262;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
struct sFun* main_fun_263;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
char* name_264;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* result_type_265;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct sType* __list_values5___266[7];
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1sTypeph* param_types_267;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
char* __list_values6___268[7];
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct list$1charph* param_names_269;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1charph* param_default_parametors_270;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
struct sFun* main_fun_271;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* name_272;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct sType* result_type_273;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __list_values7___274[5];
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1sTypeph* param_types_275;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
char* __list_values8___276[5];
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct list$1charph* param_names_277;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1charph* param_default_parametors_278;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct sFun* main_fun_279;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* name_280;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct sType* result_type_281;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sType* __list_values9___282[1];
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1sTypeph* param_types_283;
void* __right_value354 = (void*)0;
char* __list_values10___284[1];
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct list$1charph* param_names_285;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct list$1charph* param_default_parametors_286;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sFun* main_fun_287;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
char* name_288;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sType* result_type_289;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* __list_values11___290[4];
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct list$1sTypeph* param_types_291;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
char* __list_values12___292[4];
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct list$1charph* param_names_293;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1charph* param_default_parametors_294;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sFun* main_fun_295;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
char* name_296;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct sType* result_type_297;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct sType* __list_values13___298[3];
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1sTypeph* param_types_299;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
char* __list_values14___300[3];
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1charph* param_names_301;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1charph* param_default_parametors_302;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sFun* main_fun_303;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
char* name_304;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sType* result_type_305;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct sType* __list_values15___306[1];
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct list$1sTypeph* param_types_307;
void* __right_value423 = (void*)0;
char* __list_values16___308[1];
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct list$1charph* param_names_309;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct list$1charph* param_default_parametors_310;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sFun* main_fun_311;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
char* name_312;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* result_type_313;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct sType* __list_values17___314[3];
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1sTypeph* param_types_315;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* __list_values18___316[3];
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct list$1charph* param_names_317;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct list$1charph* param_default_parametors_318;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sFun* main_fun_319;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
char* name_320;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sType* result_type_321;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1sTypeph* param_types_322;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct list$1charph* param_names_323;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1charph* param_default_parametors_324;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sFun* main_fun_325;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
char* name_326;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sType* result_type_327;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sType* __list_values19___328[4];
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1sTypeph* param_types_329;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
char* __list_values20___330[4];
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct list$1charph* param_names_331;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct list$1charph* param_default_parametors_332;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sFun* main_fun_333;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* name_334;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sType* result_type_335;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct list$1sTypeph* param_types_336;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct list$1charph* param_names_337;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1charph* param_default_parametors_338;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sFun* fun_339;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
char* name_340;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
struct sType* result_type_341;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1sTypeph* param_types_342;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct list$1charph* param_names_343;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct list$1charph* param_default_parametors_344;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sFun* fun_345;
void* __right_value523 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_199=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_200=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 803, "sType")),"void*",(_Bool)0,info));
        {__list_values1___201[0]=come_increment_ref_count(((struct sType*)(__right_value229=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"int",(_Bool)0,info))));
__list_values1___201[1]=come_increment_ref_count(((struct sType*)(__right_value231=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"int",(_Bool)0,info))));
__list_values1___201[2]=come_increment_ref_count(((struct sType*)(__right_value233=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"char*",(_Bool)0,info))));
__list_values1___201[3]=come_increment_ref_count(((struct sType*)(__right_value235=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"int",(_Bool)0,info))));
__list_values1___201[4]=come_increment_ref_count(((struct sType*)(__right_value237=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 804, "sType")),"char*",(_Bool)0,info))));
}        param_types_206=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 804, "struct list$1sTypeph")),5,__list_values1___201));
        /*g*/come_call_finalizer3(__right_value229,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value231,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value233,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value235,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value237,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values2___207[0]=come_increment_ref_count(((char*)(__right_value243=__builtin_string("count"))));
__list_values2___207[1]=come_increment_ref_count(((char*)(__right_value244=__builtin_string("size"))));
__list_values2___207[2]=come_increment_ref_count(((char*)(__right_value245=__builtin_string("sname"))));
__list_values2___207[3]=come_increment_ref_count(((char*)(__right_value246=__builtin_string("sline"))));
__list_values2___207[4]=come_increment_ref_count(((char*)(__right_value247=__builtin_string("class_name"))));
}        param_names_212=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 805, "struct list$1charph")),5,__list_values2___207));
        __right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_213=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 806, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_213,((void*)0));
        list$1charph_push_back(param_default_parametors_213,((void*)0));
        list$1charph_push_back(param_default_parametors_213,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_213,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_213,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_214=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 812, "sFun")),(char*)come_increment_ref_count(name_199),(struct sType*)come_increment_ref_count(result_type_200),(struct list$1sTypeph*)come_increment_ref_count(param_types_206),(struct list$1charph*)come_increment_ref_count(param_names_212),(struct list$1charph*)come_increment_ref_count(param_default_parametors_213),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_199)),(struct sFun*)come_increment_ref_count(main_fun_214));
        name_199 = come_decrement_ref_count2(name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_206,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_212,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_213,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_214,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_256=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_257=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 823, "sType")),"void*",(_Bool)0,info));
        {__list_values3___258[0]=come_increment_ref_count(((struct sType*)(__right_value270=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 824, "sType")),"void*",(_Bool)0,info))));
}        param_types_259=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 824, "struct list$1sTypeph")),1,__list_values3___258));
        /*g*/come_call_finalizer3(__right_value270,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values4___260[0]=come_increment_ref_count(((char*)(__right_value273=__builtin_string("mem"))));
}        param_names_261=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 825, "struct list$1charph")),1,__list_values4___260));
        __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_262=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 826, "list$1charph"))));
        main_fun_263=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 827, "sFun")),(char*)come_increment_ref_count(name_256),(struct sType*)come_increment_ref_count(result_type_257),(struct list$1sTypeph*)come_increment_ref_count(param_types_259),(struct list$1charph*)come_increment_ref_count(param_names_261),(struct list$1charph*)come_increment_ref_count(param_default_parametors_262),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_256)),(struct sFun*)come_increment_ref_count(main_fun_263));
        name_256 = come_decrement_ref_count2(name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_257,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_259,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_261,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_262,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_263,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_264=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_265=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 838, "sType")),"void",(_Bool)0,info));
        {__list_values5___266[0]=come_increment_ref_count(((struct sType*)(__right_value287=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"void*",(_Bool)0,info))));
__list_values5___266[1]=come_increment_ref_count(((struct sType*)(__right_value289=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"void*",(_Bool)0,info))));
__list_values5___266[2]=come_increment_ref_count(((struct sType*)(__right_value291=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"void*",(_Bool)0,info))));
__list_values5___266[3]=come_increment_ref_count(((struct sType*)(__right_value293=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"void*",(_Bool)0,info))));
__list_values5___266[4]=come_increment_ref_count(((struct sType*)(__right_value295=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"int",(_Bool)0,info))));
__list_values5___266[5]=come_increment_ref_count(((struct sType*)(__right_value297=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"int",(_Bool)0,info))));
__list_values5___266[6]=come_increment_ref_count(((struct sType*)(__right_value299=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 839, "sType")),"int",(_Bool)0,info))));
}        param_types_267=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 839, "struct list$1sTypeph")),7,__list_values5___266));
        /*g*/come_call_finalizer3(__right_value287,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value289,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value291,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value293,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value295,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value297,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value299,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values6___268[0]=come_increment_ref_count(((char*)(__right_value302=__builtin_string("fun"))));
__list_values6___268[1]=come_increment_ref_count(((char*)(__right_value303=__builtin_string("mem"))));
__list_values6___268[2]=come_increment_ref_count(((char*)(__right_value304=__builtin_string("protocol_fun"))));
__list_values6___268[3]=come_increment_ref_count(((char*)(__right_value305=__builtin_string("protocol_obj"))));
__list_values6___268[4]=come_increment_ref_count(((char*)(__right_value306=__builtin_string("call_finalizer_only"))));
__list_values6___268[5]=come_increment_ref_count(((char*)(__right_value307=__builtin_string("no_decrement"))));
__list_values6___268[6]=come_increment_ref_count(((char*)(__right_value308=__builtin_string("no_free"))));
}        param_names_269=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 840, "struct list$1charph")),7,__list_values6___268));
        __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_270=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 841, "list$1charph"))));
        main_fun_271=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 842, "sFun")),(char*)come_increment_ref_count(name_264),(struct sType*)come_increment_ref_count(result_type_265),(struct list$1sTypeph*)come_increment_ref_count(param_types_267),(struct list$1charph*)come_increment_ref_count(param_names_269),(struct list$1charph*)come_increment_ref_count(param_default_parametors_270),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_264)),(struct sFun*)come_increment_ref_count(main_fun_271));
        name_264 = come_decrement_ref_count2(name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_267,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_269,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_270,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_271,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_272=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_273=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 853, "sType")),"void*",(_Bool)0,info));
        {__list_values7___274[0]=come_increment_ref_count(((struct sType*)(__right_value322=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 854, "sType")),"void*",(_Bool)0,info))));
__list_values7___274[1]=come_increment_ref_count(((struct sType*)(__right_value324=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 854, "sType")),"void*",(_Bool)0,info))));
__list_values7___274[2]=come_increment_ref_count(((struct sType*)(__right_value326=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 854, "sType")),"void*",(_Bool)0,info))));
__list_values7___274[3]=come_increment_ref_count(((struct sType*)(__right_value328=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 854, "sType")),"bool",(_Bool)0,info))));
__list_values7___274[4]=come_increment_ref_count(((struct sType*)(__right_value330=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 854, "sType")),"bool",(_Bool)0,info))));
}        param_types_275=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 854, "struct list$1sTypeph")),5,__list_values7___274));
        /*g*/come_call_finalizer3(__right_value322,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value324,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value326,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value328,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value330,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values8___276[0]=come_increment_ref_count(((char*)(__right_value333=__builtin_string("mem"))));
__list_values8___276[1]=come_increment_ref_count(((char*)(__right_value334=__builtin_string("protocol_fun"))));
__list_values8___276[2]=come_increment_ref_count(((char*)(__right_value335=__builtin_string("protocol_obj"))));
__list_values8___276[3]=come_increment_ref_count(((char*)(__right_value336=__builtin_string("no_decrement"))));
__list_values8___276[4]=come_increment_ref_count(((char*)(__right_value337=__builtin_string("no_free"))));
}        param_names_277=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 855, "struct list$1charph")),5,__list_values8___276));
        __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_278=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 856, "list$1charph"))));
        main_fun_279=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 857, "sFun")),(char*)come_increment_ref_count(name_272),(struct sType*)come_increment_ref_count(result_type_273),(struct list$1sTypeph*)come_increment_ref_count(param_types_275),(struct list$1charph*)come_increment_ref_count(param_names_277),(struct list$1charph*)come_increment_ref_count(param_default_parametors_278),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_272)),(struct sFun*)come_increment_ref_count(main_fun_279));
        name_272 = come_decrement_ref_count2(name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_273,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_275,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_277,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_278,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_279,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_280=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_281=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 868, "sType")),"void",(_Bool)0,info));
        {__list_values9___282[0]=come_increment_ref_count(((struct sType*)(__right_value351=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 869, "sType")),"void*",(_Bool)0,info))));
}        param_types_283=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 869, "struct list$1sTypeph")),1,__list_values9___282));
        /*g*/come_call_finalizer3(__right_value351,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values10___284[0]=come_increment_ref_count(((char*)(__right_value354=__builtin_string("mem"))));
}        param_names_285=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 870, "struct list$1charph")),1,__list_values10___284));
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_286=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 871, "list$1charph"))));
        main_fun_287=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 872, "sFun")),(char*)come_increment_ref_count(name_280),(struct sType*)come_increment_ref_count(result_type_281),(struct list$1sTypeph*)come_increment_ref_count(param_types_283),(struct list$1charph*)come_increment_ref_count(param_names_285),(struct list$1charph*)come_increment_ref_count(param_default_parametors_286),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_280)),(struct sFun*)come_increment_ref_count(main_fun_287));
        name_280 = come_decrement_ref_count2(name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_283,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_285,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_286,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_287,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_288=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_289=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 883, "sType")),"void*",(_Bool)0,info));
        {__list_values11___290[0]=come_increment_ref_count(((struct sType*)(__right_value368=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"void*",(_Bool)0,info))));
__list_values11___290[1]=come_increment_ref_count(((struct sType*)(__right_value370=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"char*",(_Bool)0,info))));
__list_values11___290[2]=come_increment_ref_count(((struct sType*)(__right_value372=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"int",(_Bool)0,info))));
__list_values11___290[3]=come_increment_ref_count(((struct sType*)(__right_value374=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 884, "sType")),"char*",(_Bool)0,info))));
}        param_types_291=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 884, "struct list$1sTypeph")),4,__list_values11___290));
        /*g*/come_call_finalizer3(__right_value368,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value370,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value372,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value374,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values12___292[0]=come_increment_ref_count(((char*)(__right_value377=__builtin_string("block"))));
__list_values12___292[1]=come_increment_ref_count(((char*)(__right_value378=__builtin_string("sname"))));
__list_values12___292[2]=come_increment_ref_count(((char*)(__right_value379=__builtin_string("sline"))));
__list_values12___292[3]=come_increment_ref_count(((char*)(__right_value380=__builtin_string("class_name"))));
}        param_names_293=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 885, "struct list$1charph")),4,__list_values12___292));
        __right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value379 = come_decrement_ref_count2(__right_value379, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value380 = come_decrement_ref_count2(__right_value380, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_294=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 886, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_294,((void*)0));
        list$1charph_push_back(param_default_parametors_294,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charph_push_back(param_default_parametors_294,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charph_push_back(param_default_parametors_294,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_295=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 891, "sFun")),(char*)come_increment_ref_count(name_288),(struct sType*)come_increment_ref_count(result_type_289),(struct list$1sTypeph*)come_increment_ref_count(param_types_291),(struct list$1charph*)come_increment_ref_count(param_names_293),(struct list$1charph*)come_increment_ref_count(param_default_parametors_294),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_288)),(struct sFun*)come_increment_ref_count(main_fun_295));
        name_288 = come_decrement_ref_count2(name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_289,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_291,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_293,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_294,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_295,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_296=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_297=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 902, "sType")),"void*",(_Bool)0,info));
        {__list_values13___298[0]=come_increment_ref_count(((struct sType*)(__right_value397=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 903, "sType")),"void*",(_Bool)0,info))));
__list_values13___298[1]=come_increment_ref_count(((struct sType*)(__right_value399=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 903, "sType")),"int",(_Bool)0,info))));
__list_values13___298[2]=come_increment_ref_count(((struct sType*)(__right_value401=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 903, "sType")),"long",(_Bool)0,info))));
}        param_types_299=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 903, "struct list$1sTypeph")),3,__list_values13___298));
        /*g*/come_call_finalizer3(__right_value397,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value399,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value401,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values14___300[0]=come_increment_ref_count(((char*)(__right_value404=__builtin_string("b"))));
__list_values14___300[1]=come_increment_ref_count(((char*)(__right_value405=__builtin_string("c"))));
__list_values14___300[2]=come_increment_ref_count(((char*)(__right_value406=__builtin_string("len"))));
}        param_names_301=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 904, "struct list$1charph")),3,__list_values14___300));
        __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_302=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 905, "list$1charph"))));
        main_fun_303=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 906, "sFun")),(char*)come_increment_ref_count(name_296),(struct sType*)come_increment_ref_count(result_type_297),(struct list$1sTypeph*)come_increment_ref_count(param_types_299),(struct list$1charph*)come_increment_ref_count(param_names_301),(struct list$1charph*)come_increment_ref_count(param_default_parametors_302),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_296)),(struct sFun*)come_increment_ref_count(main_fun_303));
        name_296 = come_decrement_ref_count2(name_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_297,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_299,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_301,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_302,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_303,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_304=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 917, "sType")),"char*",(_Bool)0,info));
        {__list_values15___306[0]=come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 918, "sType")),"char*",(_Bool)0,info))));
}        param_types_307=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 918, "struct list$1sTypeph")),1,__list_values15___306));
        /*g*/come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values16___308[0]=come_increment_ref_count(((char*)(__right_value423=__builtin_string("str"))));
}        param_names_309=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 919, "struct list$1charph")),1,__list_values16___308));
        __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_310=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 920, "list$1charph"))));
        main_fun_311=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 921, "sFun")),(char*)come_increment_ref_count(name_304),(struct sType*)come_increment_ref_count(result_type_305),(struct list$1sTypeph*)come_increment_ref_count(param_types_307),(struct list$1charph*)come_increment_ref_count(param_names_309),(struct list$1charph*)come_increment_ref_count(param_default_parametors_310),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_304)),(struct sFun*)come_increment_ref_count(main_fun_311));
        name_304 = come_decrement_ref_count2(name_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_305,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_307,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_309,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_310,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_311,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_312=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_313=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 932, "sType")),"void",(_Bool)0,info));
        {__list_values17___314[0]=come_increment_ref_count(((struct sType*)(__right_value437=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 933, "sType")),"int",(_Bool)0,info))));
__list_values17___314[1]=come_increment_ref_count(((struct sType*)(__right_value439=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 933, "sType")),"int",(_Bool)0,info))));
__list_values17___314[2]=come_increment_ref_count(((struct sType*)(__right_value441=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 933, "sType")),"int",(_Bool)0,info))));
}        param_types_315=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 933, "struct list$1sTypeph")),3,__list_values17___314));
        /*g*/come_call_finalizer3(__right_value437,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value439,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values18___316[0]=come_increment_ref_count(((char*)(__right_value444=xsprintf("come_malloc"))));
__list_values18___316[1]=come_increment_ref_count(((char*)(__right_value445=xsprintf("come_debug"))));
__list_values18___316[2]=come_increment_ref_count(((char*)(__right_value446=xsprintf("come_gc"))));
}        param_names_317=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 934, "struct list$1charph")),3,__list_values18___316));
        __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_318=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 935, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_318,((void*)0));
        main_fun_319=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 937, "sFun")),(char*)come_increment_ref_count(name_312),(struct sType*)come_increment_ref_count(result_type_313),(struct list$1sTypeph*)come_increment_ref_count(param_types_315),(struct list$1charph*)come_increment_ref_count(param_names_317),(struct list$1charph*)come_increment_ref_count(param_default_parametors_318),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_312)),(struct sFun*)come_increment_ref_count(main_fun_319));
        name_312 = come_decrement_ref_count2(name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_315,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_317,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_318,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_319,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_320=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_321=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 948, "sType")),"void",(_Bool)0,info));
        param_types_322=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 949, "list$1sTypeph"))));
        param_names_323=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 950, "list$1charph"))));
        param_default_parametors_324=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 951, "list$1charph"))));
        main_fun_325=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 952, "sFun")),(char*)come_increment_ref_count(name_320),(struct sType*)come_increment_ref_count(result_type_321),(struct list$1sTypeph*)come_increment_ref_count(param_types_322),(struct list$1charph*)come_increment_ref_count(param_names_323),(struct list$1charph*)come_increment_ref_count(param_default_parametors_324),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_320)),(struct sFun*)come_increment_ref_count(main_fun_325));
        name_320 = come_decrement_ref_count2(name_320, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_321,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_322,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_323,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_324,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_325,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_326=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_327=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 963, "sType")),"void*",(_Bool)0,info));
        {__list_values19___328[0]=come_increment_ref_count(((struct sType*)(__right_value474=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 964, "sType")),"void*",(_Bool)0,info))));
__list_values19___328[1]=come_increment_ref_count(((struct sType*)(__right_value476=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 964, "sType")),"char*",(_Bool)0,info))));
__list_values19___328[2]=come_increment_ref_count(((struct sType*)(__right_value478=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 964, "sType")),"int",(_Bool)0,info))));
__list_values19___328[3]=come_increment_ref_count(((struct sType*)(__right_value480=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 964, "sType")),"int",(_Bool)0,info))));
}        param_types_329=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 964, "struct list$1sTypeph")),4,__list_values19___328));
        /*g*/come_call_finalizer3(__right_value474,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value476,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value478,sType_finalize, 0, 1, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value480,sType_finalize, 0, 1, 0, 0, (void*)0);
        {__list_values20___330[0]=come_increment_ref_count(((char*)(__right_value483=__builtin_string("mem"))));
__list_values20___330[1]=come_increment_ref_count(((char*)(__right_value484=__builtin_string("sname"))));
__list_values20___330[2]=come_increment_ref_count(((char*)(__right_value485=__builtin_string("sline"))));
__list_values20___330[3]=come_increment_ref_count(((char*)(__right_value486=__builtin_string("id"))));
}        param_names_331=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 965, "struct list$1charph")),4,__list_values20___330));
        __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_332=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 966, "list$1charph"))));
        main_fun_333=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 967, "sFun")),(char*)come_increment_ref_count(name_326),(struct sType*)come_increment_ref_count(result_type_327),(struct list$1sTypeph*)come_increment_ref_count(param_types_329),(struct list$1charph*)come_increment_ref_count(param_names_331),(struct list$1charph*)come_increment_ref_count(param_default_parametors_332),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_326)),(struct sFun*)come_increment_ref_count(main_fun_333));
        name_326 = come_decrement_ref_count2(name_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_329,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_331,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_332,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(main_fun_333,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_334=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_335=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 978, "sType")),"void",(_Bool)0,info));
        param_types_336=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 979, "list$1sTypeph"))));
        param_names_337=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 980, "list$1charph"))));
        param_default_parametors_338=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 981, "list$1charph"))));
        fun_339=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 982, "sFun")),(char*)come_increment_ref_count(name_334),(struct sType*)come_increment_ref_count(result_type_335),(struct list$1sTypeph*)come_increment_ref_count(param_types_336),(struct list$1charph*)come_increment_ref_count(param_names_337),(struct list$1charph*)come_increment_ref_count(param_default_parametors_338),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_334)),(struct sFun*)come_increment_ref_count(fun_339));
        name_334 = come_decrement_ref_count2(name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_335,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_336,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_337,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_338,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_339,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_340=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_341=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 993, "sType")),"void",(_Bool)0,info));
        param_types_342=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 994, "list$1sTypeph"))));
        param_names_343=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 995, "list$1charph"))));
        param_default_parametors_344=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 996, "list$1charph"))));
        fun_345=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 997, "sFun")),(char*)come_increment_ref_count(name_340),(struct sType*)come_increment_ref_count(result_type_341),(struct list$1sTypeph*)come_increment_ref_count(param_types_342),(struct list$1charph*)come_increment_ref_count(param_names_343),(struct list$1charph*)come_increment_ref_count(param_default_parametors_344),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info));
        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_340)),(struct sFun*)come_increment_ref_count(fun_345));
        name_340 = come_decrement_ref_count2(name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_341,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_342,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_343,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_344,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_345,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_202;
struct list$1sTypeph* __result122__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0;    i_202<num_value;    i_202++    ){
        list$1sTypeph_push_back(self,values[i_202]);
    }
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
struct list_item$1sTypeph* litem_203;
struct sType* __dec_obj140;
void* __right_value239 = (void*)0;
struct list_item$1sTypeph* litem_204;
struct sType* __dec_obj141;
void* __right_value240 = (void*)0;
struct list_item$1sTypeph* litem_205;
struct sType* __dec_obj142;
struct list$1sTypeph* __result121__;
    if(self->len==0) {
        litem_203=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value238=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 221, "list_item$1sTypeph"))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        __dec_obj140=litem_203->item;
        litem_203->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_203;
        self->head=litem_203;
    }
    else {
        if(self->len==1) {
            litem_204=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value239=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 231, "list_item$1sTypeph"))));
            litem_204->prev=self->head;
            litem_204->next=((void*)0);
            __dec_obj141=litem_204->item;
            litem_204->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_204;
            self->head->next=litem_204;
        }
        else {
            litem_205=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value240=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 241, "list_item$1sTypeph"))));
            litem_205->prev=self->tail;
            litem_205->next=((void*)0);
            __dec_obj142=litem_205->item;
            litem_205->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_205;
            self->tail=litem_205;
        }
    }
    self->len++;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_208;
struct list$1charph* __result124__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_208=0;    i_208<num_value;    i_208++    ){
        list$1charph_push_back(self,values[i_208]);
    }
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value248 = (void*)0;
struct list_item$1charph* litem_209;
char* __dec_obj143;
void* __right_value249 = (void*)0;
struct list_item$1charph* litem_210;
char* __dec_obj144;
void* __right_value250 = (void*)0;
struct list_item$1charph* litem_211;
char* __dec_obj145;
struct list$1charph* __result123__;
    if(self->len==0) {
        litem_209=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value248=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_209->prev=((void*)0);
        litem_209->next=((void*)0);
        __dec_obj143=litem_209->item;
        litem_209->item=(char*)come_increment_ref_count(item);
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_209;
        self->head=litem_209;
    }
    else {
        if(self->len==1) {
            litem_210=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value249=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
            litem_210->prev=self->head;
            litem_210->next=((void*)0);
            __dec_obj144=litem_210->item;
            litem_210->item=(char*)come_increment_ref_count(item);
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_210;
            self->head->next=litem_210;
        }
        else {
            litem_211=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value250=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
            litem_211->prev=self->tail;
            litem_211->next=((void*)0);
            __dec_obj145=litem_211->item;
            litem_211->item=(char*)come_increment_ref_count(item);
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_211;
            self->tail=litem_211;
        }
    }
    self->len++;
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_232;
unsigned int it_233;
_Bool same_key_exist_250;
char* it2_253;
struct map$2charphsFunph* __result145__;
    if(self->len*10>=self->size) {
        map$2charphsFunph_rehash(self);
    }
    hash_232=string_get_hash_key(key)%self->size;
    it_233=hash_232;
    while((_Bool)1) {
        if(self->item_existance[it_233]) {
            if(string_equals(self->keys[it_233],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_233]);
                    self->keys[it_233] = come_decrement_ref_count2(self->keys[it_233], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_233]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_233]);
                    self->keys[it_233]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_233],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_233]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_233]=item;
                }
                break;
            }
            it_233++;
            if(it_233>=self->size) {
                it_233=0;
            }
            else {
                if(it_233==hash_232) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_233]=(_Bool)1;
            if(1) {
                self->keys[it_233]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_233]=key;
            }
            if(1) {
                self->items[it_233]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_233]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_250=(_Bool)0;
    for(    it2_253=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_253=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_253,key)) {
            same_key_exist_250=(_Bool)1;
        }
    }
    if(!same_key_exist_250) {
        list$1charp_push_back(self->key_list,key);
    }
    __result145__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
int size_215;
void* __right_value262 = (void*)0;
char** keys_216;
void* __right_value263 = (void*)0;
struct sFun** items_217;
void* __right_value264 = (void*)0;
_Bool* item_existance_218;
int len_219;
char* it_222;
struct sFun* default_value_225;
struct sFun* it2_226;
unsigned int hash_229;
int n_230;
struct sFun* default_value_231;
default_value_225 = (void*)0;
default_value_231 = (void*)0;
    size_215=self->size*10;
    keys_216=(char**)come_increment_ref_count(((char**)(__right_value262=(char**)come_calloc(1, sizeof(char*)*(1*(size_215)), "./comelang.h", 1621, "char*%"))));
    items_217=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value263=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_215)), "./comelang.h", 1622, "sFun*%"))));
    item_existance_218=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value264=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_215)), "./comelang.h", 1623, "bool"))));
    len_219=0;
    for(    it_222=map$2charphsFunph_begin(self);    !map$2charphsFunph_end(self);    it_222=map$2charphsFunph_next(self)    ){
        memset(&default_value_225,0,sizeof(struct sFun*));
        it2_226=map$2charphsFunph_at(self,it_222,default_value_225);
        hash_229=string_get_hash_key(it_222)%size_215;
        n_230=hash_229;
        while((_Bool)1) {
            if(item_existance_218[n_230]) {
                n_230++;
                if(n_230>=size_215) {
                    n_230=0;
                }
                else {
                    if(n_230==hash_229) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_218[n_230]=(_Bool)1;
                keys_216[n_230]=it_222;
                items_217[n_230]=map$2charphsFunph_at(self,it_222,default_value_231);
                len_219++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_216;
    self->items=items_217;
    self->item_existance=item_existance_218;
    self->size=size_215;
    self->len=len_219;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_220;
char* __result125__;
char* __result126__;
char* result_221;
char* __result127__;
result_220 = (void*)0;
result_221 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_220,0,sizeof(char*));
        __result125__ = gComeFunResultObject = __result_obj__ = result_220;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result126__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    memset(&result_221,0,sizeof(char*));
    __result127__ = gComeFunResultObject = __result_obj__ = result_221;
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_223;
char* __result128__;
char* __result129__;
char* result_224;
char* __result130__;
result_223 = (void*)0;
result_224 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_223,0,sizeof(char*));
        __result128__ = gComeFunResultObject = __result_obj__ = result_223;
        gComeFunResultObject = (void*)0;
        return __result128__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result129__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    memset(&result_224,0,sizeof(char*));
    __result130__ = gComeFunResultObject = __result_obj__ = result_224;
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_227;
unsigned int it_228;
struct sFun* __result131__;
struct sFun* __result132__;
struct sFun* __result133__;
struct sFun* __result134__;
    hash_227=string_get_hash_key(((char*)key))%self->size;
    it_228=hash_227;
    while((_Bool)1) {
        if(self->item_existance[it_228]) {
            if(string_equals(self->keys[it_228],key)) {
                __result131__ = gComeFunResultObject = __result_obj__ = self->items[it_228];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result131__;
            }
            it_228++;
            if(it_228>=self->size) {
                it_228=0;
            }
            else {
                if(it_228==hash_227) {
                    __result132__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result132__;
                }
            }
        }
        else {
            __result133__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result133__;
        }
    }
    __result134__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_234;
struct list_item$1charp* it_235;
struct list$1charp* __result138__;
    it2_234=0;
    it_235=self->head;
    while(it_235!=((void*)0)) {
        if(charp_equals(it_235->item,item)) {
            list$1charp_delete(self,it2_234,it2_234+1);
            break;
        }
        it2_234++;
        it_235=it_235->next;
    }
    __result138__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_236;
struct list$1charp* __result135__;
struct list_item$1charp* it_239;
int i_240;
struct list_item$1charp* prev_it_241;
struct list_item$1charp* it_242;
int i_243;
struct list_item$1charp* prev_it_244;
struct list_item$1charp* it_245;
struct list_item$1charp* head_prev_it_246;
struct list_item$1charp* tail_it_247;
int i_248;
struct list_item$1charp* prev_it_249;
struct list$1charp* __result137__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_236=tail;
        tail=head;
        head=tmp_236;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result135__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_239=self->head;
            i_240=0;
            while(it_239!=((void*)0)) {
                if(i_240<tail) {
                    prev_it_241=it_239;
                    it_239=it_239->next;
                    i_240++;
                    /*i*/come_call_finalizer3(prev_it_241,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_240==tail) {
                        self->head=it_239;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_239=it_239->next;
                        i_240++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_242=self->head;
                i_243=0;
                while(it_242!=((void*)0)) {
                    if(i_243==head) {
                        self->tail=it_242->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_243>=head) {
                        prev_it_244=it_242;
                        it_242=it_242->next;
                        i_243++;
                        /*i*/come_call_finalizer3(prev_it_244,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_242=it_242->next;
                        i_243++;
                    }
                }
            }
            else {
                it_245=self->head;
                head_prev_it_246=((void*)0);
                tail_it_247=((void*)0);
                i_248=0;
                while(it_245!=((void*)0)) {
                    if(i_248==head) {
                        head_prev_it_246=it_245->prev;
                    }
                    if(i_248==tail) {
                        tail_it_247=it_245;
                    }
                    if(i_248>=head&&i_248<tail) {
                        prev_it_249=it_245;
                        it_245=it_245->next;
                        i_248++;
                        /*i*/come_call_finalizer3(prev_it_249,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_245=it_245->next;
                        i_248++;
                    }
                }
                if(head_prev_it_246!=((void*)0)) {
                    head_prev_it_246->next=tail_it_247;
                }
                if(tail_it_247!=((void*)0)) {
                    tail_it_247->prev=head_prev_it_246;
                }
            }
        }
    }
    __result137__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result137__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_237;
struct list_item$1charp* prev_it_238;
struct list$1charp* __result136__;
    it_237=self->head;
    while(it_237!=((void*)0)) {
        prev_it_238=it_237;
        it_237=it_237->next;
        /*i*/come_call_finalizer3(prev_it_238,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result136__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_251;
char* __result139__;
char* __result140__;
char* result_252;
char* __result141__;
result_251 = (void*)0;
result_252 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_251,0,sizeof(char*));
        __result139__ = gComeFunResultObject = __result_obj__ = result_251;
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    self->it=self->head;
    if(self->it) {
        __result140__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    memset(&result_252,0,sizeof(char*));
    __result141__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_254;
char* __result142__;
char* __result143__;
char* result_255;
char* __result144__;
result_254 = (void*)0;
result_255 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_254,0,sizeof(char*));
        __result142__ = gComeFunResultObject = __result_obj__ = result_254;
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result143__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    memset(&result_255,0,sizeof(char*));
    __result144__ = gComeFunResultObject = __result_obj__ = result_255;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_346;
_Bool is_type_name_flag_347;
int sline_348;
_Bool define_struct_nobody_349;
char* p_350;
int sline_351;
void* __right_value524 = (void*)0;
char* word_352;
_Bool define_function_pointer_result_function_353;
_Bool define_variable_between_brace_354;
char* p_355;
void* __right_value525 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* result_type_356;
char* fun_name_357;
_Bool err_358;
void* __right_value526 = (void*)0;
char* word_359;
_Bool define_function_flag_360;
char* p_361;
void* __right_value527 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* result_type_362;
char* fun_name_363;
_Bool err_364;
char* word_365;
void* __right_value528 = (void*)0;
char* __dec_obj148;
void* __right_value529 = (void*)0;
char* __dec_obj149;
char* __dec_obj150;
void* __right_value530 = (void*)0;
char* __dec_obj151;
_Bool define_variable_366;
char* p_367;
void* __right_value531 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* result_type_368;
char* fun_name_369;
_Bool err_370;
void* __right_value532 = (void*)0;
char* word_371;
void* __right_value533 = (void*)0;
char* word_372;
char* p_373;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
char* word_374;
void* __right_value536 = (void*)0;
char* __dec_obj152;
void* __right_value537 = (void*)0;
char* word_375;
void* __right_value538 = (void*)0;
char* word_378;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sNode* node_379;
struct sNode* __result147__;
void* __right_value541 = (void*)0;
struct sNode* __result148__;
char* header_head_380;
void* __right_value542 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* result_type_381;
char* fun_name_382;
_Bool err_383;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1sTypeph* param_types_384;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1charph* param_names_385;
void* __right_value547 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_386;
char* param_name_387;
_Bool err_388;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1sTypeph* param_types2_390;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct list$1charph* param_names2_391;
void* __right_value554 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* param_type_392;
char* param_name_393;
_Bool err_394;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
char* header_tail_396;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* result_type2_397;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct tuple1$1sTypeph* __dec_obj154;
void* __right_value561 = (void*)0;
struct list$1sTypeph* __dec_obj155;
void* __right_value562 = (void*)0;
struct list$1charph* __dec_obj156;
_Bool var_args_398;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct buffer* header_buf_399;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct list$1charph* param_default_parametors_400;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sFun* fun_401;
void* __right_value572 = (void*)0;
struct sFun* fun2_405;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value610 = (void*)0;
struct sNode* __result177__;
void* __right_value611 = (void*)0;
struct sNode* node_440;
struct sNode* __result178__;
void* __right_value612 = (void*)0;
struct sNode* node_441;
char* source_tail_442;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct buffer* header_443;
struct sNode* __result179__;
void* __right_value615 = (void*)0;
char* buf2_444;
void* __right_value616 = (void*)0;
struct sNode* __result180__;
    source_head_346=info->p;
    is_type_name_flag_347=is_type_name(buf,info);
    sline_348=info->sline;
    define_struct_nobody_349=(_Bool)0;
    {
        p_350=info->p;
        sline_351=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                word_352=(char*)come_increment_ref_count(parse_word(info));
                if(*info->p==59) {
                    define_struct_nobody_349=(_Bool)1;
                }
                word_352 = come_decrement_ref_count2(word_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_351;
    }
    define_function_pointer_result_function_353=(_Bool)0;
    define_variable_between_brace_354=(_Bool)0;
    if(is_type_name_flag_347) {
        p_355=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value525=backtrace_parse_type((_Bool)0,info)));
            result_type_356=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_357=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_358=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value525,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p!=42) {
                    define_function_pointer_result_function_353=(_Bool)1;
                    if(xisalpha(*info->p)||*info->p==95) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        word_359=(char*)come_increment_ref_count(parse_word(info));
                        if(!is_type_name(word_359,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                            }
                            else {
                                define_variable_between_brace_354=(_Bool)1;
                            }
                        }
                        word_359 = come_decrement_ref_count2(word_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_356,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_357 = come_decrement_ref_count2(fun_name_357, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_348;
    }
    define_function_flag_360=(_Bool)0;
    if(is_type_name_flag_347&&!define_function_pointer_result_function_353&&charp_operator_not_equals(buf,"__typeof__")) {
        p_361=info->p;
        info->p=head;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value527=backtrace_parse_type((_Bool)0,info)));
            result_type_362=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_363=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_364=multiple_assign_var2->v3;
            /*g*/come_call_finalizer3(__right_value527,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            /*i*/come_call_finalizer3(result_type_362,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_363 = come_decrement_ref_count2(fun_name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(!info->define_struct) {
            info->define_struct=(_Bool)0;
            word_365=((void*)0);
            if(xisalnum(*info->p)||*info->p==95) {
                __dec_obj148=word_365;
                word_365=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(string_operator_equals(word_365,"extern")) {
                    __dec_obj149=word_365;
                    word_365=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj150=word_365;
                word_365=((void*)0);
                __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(word_365) {
                if(is_type_name(word_365,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj151=word_365;
                        word_365=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(strlen(word_365)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(is_type_name_flag_347) {
                        define_function_flag_360=(_Bool)1;
                    }
                }
            }
            word_365 = come_decrement_ref_count2(word_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_361;
        info->sline=sline_348;
    }
    define_variable_366=(_Bool)1;
    if(is_type_name_flag_347&&!define_function_pointer_result_function_353) {
        p_367=info->p;
        info->p=head;
        if(!is_type_name_flag_347) {
            define_variable_366=(_Bool)0;
        }
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value531=backtrace_parse_type((_Bool)0,info)));
            result_type_368=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_369=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_370=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value531,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_371=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==40) {
                                define_variable_366=(_Bool)1;
                            }
                        }
                        word_371 = come_decrement_ref_count2(word_371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95) {
                        word_372=(char*)come_increment_ref_count(parse_word(info));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(!is_type_name(word_372,info)&&*info->p!=40) {
                                define_variable_366=(_Bool)1;
                            }
                        }
                        word_372 = come_decrement_ref_count2(word_372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            /*i*/come_call_finalizer3(result_type_368,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_369 = come_decrement_ref_count2(fun_name_369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_366=(_Bool)0;
        }
        else {
            if(define_variable_366) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_366=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_366=(_Bool)0;
                }
            }
        }
        info->p=p_367;
        info->sline=sline_348;
    }
    else {
        define_variable_366=(_Bool)0;
    }
    {
        p_373=info->p;
        info->p=head;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value534=parse_word(info)));
                __right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(xisalpha(*info->p)||*info->p==95) {
                    word_374=(char*)come_increment_ref_count(parse_word(info));
                    if(xisalpha(*info->p)||*info->p==95) {
                        __dec_obj152=word_374;
                        word_374=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(string_operator_equals(word_374,"extends")) {
                            define_variable_366=(_Bool)0;
                        }
                    }
                    word_374 = come_decrement_ref_count2(word_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_366=(_Bool)0;
        }
        else {
            if(define_variable_366) {
            }
            else {
                if(!(xisalpha(*info->p)||*info->p==95)) {
                    define_variable_366=(_Bool)0;
                }
                while(xisalpha(*info->p)||*info->p==95) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==40||*info->p==58) {
                    define_variable_366=(_Bool)0;
                }
            }
        }
        info->p=p_373;
        info->sline=sline_348;
    }
    if(charp_operator_equals(buf,"template")) {
        word_375=(char*)come_increment_ref_count(parse_word(info));
        if(*info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charph_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(*info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    if(*info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(*info->p==0) {
                            err_msg(info,"unexpected source end");
                            exit(2);
                        }
                        else {
                            word_378=(char*)come_increment_ref_count(parse_word(info));
                            list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(word_378)));
                            word_378 = come_decrement_ref_count2(word_378, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
            node_379=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charph_reset(info->method_generics_type_names);
            __result147__ = gComeFunResultObject = __result_obj__ = node_379;
            if(node_379) { node_379 = come_decrement_ref_count2(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_375 = come_decrement_ref_count2(word_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
            if(node_379) { node_379 = come_decrement_ref_count2(node_379, ((struct sNode*)node_379)->finalize, ((struct sNode*)node_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_375 = come_decrement_ref_count2(word_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(define_struct_nobody_349) {
        }
        else {
            if(define_variable_between_brace_354) {
                info->p=head;
                info->sline=sline_348;
                __result148__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value541=parse_global_variable(info)));
                if(__right_value541) { __right_value541 = come_decrement_ref_count2(__right_value541, ((struct sNode*)__right_value541)->finalize, ((struct sNode*)__right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result148__;
            }
            else {
                if(define_function_pointer_result_function_353) {
                    header_head_380=info->p;
                    multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value542=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                    result_type_381=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                    fun_name_382=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    err_383=multiple_assign_var4->v3;
                    /*g*/come_call_finalizer3(__right_value542,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(*info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        param_types_384=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1321, "list$1sTypeph"))));
                        param_names_385=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1322, "list$1charph"))));
                        if(*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            while((_Bool)1) {
                                multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value547=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                param_type_386=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                param_name_387=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                err_388=multiple_assign_var5->v3;
                                /*g*/come_call_finalizer3(__right_value547,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_388) {
                                    err_msg(info,"parse_type is failed");
                                    exit(2);
                                }
                                list$1sTypeph_push_back(param_types_384,(struct sType*)come_increment_ref_count(param_type_386));
                                static int num_function_pointer_result_var_name_a_389=0;
                                list$1charph_push_back(param_names_385,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_389)));
                                if(xisalpha(*info->p)||*info->p==95) {
                                    (void)((char*)(__right_value549=parse_word(info)));
                                    __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(*info->p==44) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                }
                                else {
                                    if(*info->p==41) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        /*i*/come_call_finalizer3(param_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        param_name_387 = come_decrement_ref_count2(param_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        break;
                                    }
                                    else {
                                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                                        exit(2);
                                    }
                                }
                                /*i*/come_call_finalizer3(param_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                                param_name_387 = come_decrement_ref_count2(param_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        expected_next_character(41,info);
                        if(*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            param_types2_390=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1368, "list$1sTypeph"))));
                            param_names2_391=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1369, "list$1charph"))));
                            if(*info->p==41) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            else {
                                while((_Bool)1) {
                                    multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value554=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                    param_type_392=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                    param_name_393=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                    err_394=multiple_assign_var6->v3;
                                    /*g*/come_call_finalizer3(__right_value554,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(!err_394) {
                                        err_msg(info,"parse_type is failed");
                                        exit(2);
                                    }
                                    list$1sTypeph_push_back(param_types2_390,(struct sType*)come_increment_ref_count(param_type_392));
                                    static int num_function_pointer_result_var_name_b_395=0;
                                    list$1charph_push_back(param_names2_391,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_395)));
                                    if(xisalpha(*info->p)||*info->p==95) {
                                        (void)((char*)(__right_value556=parse_word(info)));
                                        __right_value556 = come_decrement_ref_count2(__right_value556, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==41) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            /*i*/come_call_finalizer3(param_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            param_name_393 = come_decrement_ref_count2(param_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            break;
                                        }
                                        else {
                                            err_msg(info,"require , or ) (2)");
                                            exit(2);
                                        }
                                    }
                                    /*i*/come_call_finalizer3(param_type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    param_name_393 = come_decrement_ref_count2(param_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            header_tail_396=info->p;
                            result_type2_397=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1411, "sType")),"lambda",(_Bool)0,info));
                            __dec_obj154=result_type2_397->mResultType;
                            result_type2_397->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function.c", 1413, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_381)));
                            /* a*/come_call_finalizer3(__dec_obj154,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj155=result_type2_397->mParamTypes;
                            result_type2_397->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types2_390));
                            /* a*/come_call_finalizer3(__dec_obj155,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                            __dec_obj156=result_type2_397->mParamNames;
                            result_type2_397->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(param_names2_391));
                            /* a*/come_call_finalizer3(__dec_obj156,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                            result_type2_397->mVarArgs=(_Bool)0;
                            result_type2_397->mStatic=(_Bool)0;
                            var_args_398=(_Bool)0;
                            header_buf_399=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1421, "buffer"))));
                            buffer_append(header_buf_399,header_head_380,header_tail_396-header_head_380);
                            buffer_append_char(header_buf_399,0);
                            param_default_parametors_400=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1425, "list$1charph"))));
                            fun_401=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1427, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_382)),(struct sType*)come_increment_ref_count(result_type2_397),(struct list$1sTypeph*)come_increment_ref_count(param_types_384),(struct list$1charph*)come_increment_ref_count(param_names_385),(struct list$1charph*)come_increment_ref_count(param_default_parametors_400),(_Bool)1,var_args_398,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_399)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_405=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value572=__builtin_string(fun_name_382))));
                            __right_value572 = come_decrement_ref_count2(__right_value572, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_405==((void*)0)||fun2_405->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_382)),(struct sFun*)come_increment_ref_count(fun_401));
                            }
                            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1439, "struct sNode");
                            _inf_obj_value2=come_increment_ref_count(((struct sFunNode*)(__right_value575=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1439, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_401),info))));
                            _inf_value2->_protocol_obj=_inf_obj_value2;
                            _inf_value2->finalize=(void*)sFunNode_finalize;
                            _inf_value2->clone=(void*)sFunNode_clone;
                            _inf_value2->compile=(void*)sFunNode_compile;
                            _inf_value2->sline=(void*)sNodeBase_sline;
                            _inf_value2->sname=(void*)sNodeBase_sname;
                            _inf_value2->terminated=(void*)sNodeBase_terminated;
                            _inf_value2->kind=(void*)sFunNode_kind;
                            __result177__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value610=_inf_value2));
                            /*i*/come_call_finalizer3(param_types2_390,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names2_391,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type2_397,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_399,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_400,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_401,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_384,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_385,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_382 = come_decrement_ref_count2(fun_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value575,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value610) { __right_value610 = come_decrement_ref_count2(__right_value610, ((struct sNode*)__right_value610)->finalize, ((struct sNode*)__right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result177__;
                            /*i*/come_call_finalizer3(param_types2_390,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names2_391,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type2_397,sType_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_399,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_400,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_401,sFun_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            err_msg(info,"require (");
                            exit(2);
                        }
                        /*i*/come_call_finalizer3(param_types_384,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(param_names_385,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(result_type_381,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_382 = come_decrement_ref_count2(fun_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(define_function_flag_360) {
                        info->p=head;
                        info->sline=sline_348;
                        node_440=(struct sNode*)come_increment_ref_count(parse_function(info));
                        __result178__ = gComeFunResultObject = __result_obj__ = node_440;
                        if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        gComeFunResultObject = (void*)0;
                        return __result178__;
                        if(node_440) { node_440 = come_decrement_ref_count2(node_440, ((struct sNode*)node_440)->finalize, ((struct sNode*)node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(define_variable_366) {
                            info->p=head;
                            info->sline=sline_348;
                            node_441=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
                            source_tail_442=info->p;
                            header_443=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1463, "buffer"))));
                            buffer_append(header_443,source_head_346,source_tail_442-source_head_346);
                            __result179__ = gComeFunResultObject = __result_obj__ = node_441;
                            if(node_441) { node_441 = come_decrement_ref_count2(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(header_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            gComeFunResultObject = (void*)0;
                            return __result179__;
                            if(node_441) { node_441 = come_decrement_ref_count2(node_441, ((struct sNode*)node_441)->finalize, ((struct sNode*)node_441)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*i*/come_call_finalizer3(header_443,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    info->p=head;
    info->sline=sline_348;
    buf2_444=(char*)come_increment_ref_count(parse_word(info));
    __result180__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value616=top_level_v98(buf2_444,head,head_sline,info)));
    buf2_444 = come_decrement_ref_count2(buf2_444, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value616) { __right_value616 = come_decrement_ref_count2(__right_value616, ((struct sNode*)__right_value616)->finalize, ((struct sNode*)__right_value616)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj146;
char* __dec_obj147;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj146=self->v1;
            /* a*/come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj147=self->v2;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_376;
struct list_item$1charph* prev_it_377;
struct list$1charph* __result146__;
    it_376=self->head;
    while(it_376!=((void*)0)) {
        prev_it_377=it_376;
        it_376=it_376->next;
        /*i*/come_call_finalizer3(prev_it_377,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result146__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj153;
struct tuple1$1sTypeph* __result149__;
    __dec_obj153=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_402;
unsigned int hash_403;
unsigned int it_404;
struct sFun* __result150__;
struct sFun* __result151__;
struct sFun* __result152__;
struct sFun* __result153__;
default_value_402 = (void*)0;
    memset(&default_value_402,0,sizeof(struct sFun*));
    hash_403=string_get_hash_key(((char*)key))%self->size;
    it_404=hash_403;
    while((_Bool)1) {
        if(self->item_existance[it_404]) {
            if(string_equals(self->keys[it_404],key)) {
                __result150__ = gComeFunResultObject = __result_obj__ = self->items[it_404];
                /*i*/come_call_finalizer3(default_value_402,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result150__;
            }
            it_404++;
            if(it_404>=self->size) {
                it_404=0;
            }
            else {
                if(it_404==hash_403) {
                    __result151__ = gComeFunResultObject = __result_obj__ = default_value_402;
                    /*i*/come_call_finalizer3(default_value_402,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result151__;
                }
            }
        }
        else {
            __result152__ = gComeFunResultObject = __result_obj__ = default_value_402;
            /*i*/come_call_finalizer3(default_value_402,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result152__;
        }
    }
    __result153__ = gComeFunResultObject = __result_obj__ = default_value_402;
    /*i*/come_call_finalizer3(default_value_402,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result155__;
void* __right_value578 = (void*)0;
struct sFun* result_407;
void* __right_value579 = (void*)0;
char* __dec_obj160;
void* __right_value580 = (void*)0;
struct sType* __dec_obj161;
void* __right_value581 = (void*)0;
struct list$1sTypeph* __dec_obj162;
void* __right_value582 = (void*)0;
struct list$1charph* __dec_obj163;
void* __right_value583 = (void*)0;
struct list$1charph* __dec_obj164;
void* __right_value584 = (void*)0;
struct sType* __dec_obj165;
void* __right_value602 = (void*)0;
struct sBlock* __dec_obj175;
void* __right_value603 = (void*)0;
struct buffer* __dec_obj176;
void* __right_value604 = (void*)0;
struct buffer* __dec_obj177;
void* __right_value605 = (void*)0;
struct buffer* __dec_obj178;
void* __right_value606 = (void*)0;
struct buffer* __dec_obj179;
void* __right_value607 = (void*)0;
char* __dec_obj180;
void* __right_value608 = (void*)0;
char* __dec_obj181;
struct sFun* __result175__;
    if(self==(void*)0) {
        __result155__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    result_407=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "sFun"));
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj160=result_407->mName;
        result_407->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj161=result_407->mResultType;
        result_407->mResultType=(struct sType*)come_increment_ref_count(sType_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj162=result_407->mParamTypes;
        result_407->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj162,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj163=result_407->mParamNames;
        result_407->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj163,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj164=result_407->mParamDefaultParametors;
        result_407->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamDefaultParametors));
        /* a*/come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj165=result_407->mLambdaType;
        result_407->mLambdaType=(struct sType*)come_increment_ref_count(sType_clone(self->mLambdaType));
        /* a*/come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj175=result_407->mBlock;
        result_407->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        /* a*/come_call_finalizer3(__dec_obj175,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_407->mExternal=self->mExternal;
    }
    if(self!=((void*)0)) {
        result_407->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj176=result_407->mSource;
        result_407->mSource=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSource));
        /* a*/come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj177=result_407->mSourceHead;
        result_407->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead));
        /* a*/come_call_finalizer3(__dec_obj177,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj178=result_407->mSourceHead2;
        result_407->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceHead2));
        /* a*/come_call_finalizer3(__dec_obj178,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj179=result_407->mSourceDefer;
        result_407->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_clone(self->mSourceDefer));
        /* a*/come_call_finalizer3(__dec_obj179,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_407->mStatic=self->mStatic;
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj180=result_407->mComeHeader;
        result_407->mComeHeader=(char*)come_increment_ref_count(string_clone(self->mComeHeader));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_407->mCloner=self->mCloner;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj181=result_407->mDeclareSName;
        result_407->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_407->mNoResultType=self->mNoResultType;
    }
    if(self!=((void*)0)) {
        result_407->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    __result175__ = gComeFunResultObject = __result_obj__ = result_407;
    /*i*/come_call_finalizer3(result_407,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result175__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result156__;
void* __right_value585 = (void*)0;
struct sBlock* result_408;
void* __right_value586 = (void*)0;
struct list$1sNodeph* __dec_obj166;
void* __right_value601 = (void*)0;
struct sVarTable* __dec_obj174;
struct sBlock* __result174__;
    if(self==(void*)0) {
        __result156__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result156__;
    }
    result_408=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj166=result_408->mNodes;
        result_408->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        /* a*/come_call_finalizer3(__dec_obj166,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj174=result_408->mVarTable;
        result_408->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        /* a*/come_call_finalizer3(__dec_obj174,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_408->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result174__ = gComeFunResultObject = __result_obj__ = result_408;
    /*i*/come_call_finalizer3(result_408,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result157__;
void* __right_value587 = (void*)0;
struct sVarTable* result_409;
void* __right_value600 = (void*)0;
struct map$2charphsVarph* __dec_obj173;
struct sVarTable* __result173__;
    if(self==(void*)0) {
        __result157__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    result_409=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj173=result_409->mVars;
        result_409->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        /* a*/come_call_finalizer3(__dec_obj173,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_409->mGlobal=self->mGlobal;
    }
    if(self!=((void*)0)) {
        result_409->mParent=self->mParent;
    }
    if(self!=((void*)0)) {
        result_409->mID=self->mID;
    }
    __result173__ = gComeFunResultObject = __result_obj__ = result_409;
    /*i*/come_call_finalizer3(result_409,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result158__;
void* __right_value588 = (void*)0;
void* __right_value594 = (void*)0;
struct map$2charphsVarph* result_413;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct list$1charp* __dec_obj172;
char* it_416;
struct sVar* default_value_419;
struct sVar* it2_422;
struct map$2charphsVarph* __result172__;
default_value_419 = (void*)0;
    if(self==((void*)0)) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    result_413=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 1464, "map$2charphsVarph"))));
    __dec_obj172=result_413->key_list;
    result_413->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1466, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj172,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_416=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_416=map$2charphsVarph_next(self)    ){
        memset(&default_value_419,0,sizeof(struct sVar*));
        it2_422=map$2charphsVarph_at(self,it_416,default_value_419);
        map$2charphsVarph_put(result_413,it_416,it2_422);
    }
    __result172__ = gComeFunResultObject = __result_obj__ = result_413;
    /*i*/come_call_finalizer3(result_413,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
int i_410;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1charp* __dec_obj167;
struct map$2charphsVarph* __result160__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value589=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1370, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value590=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 1371, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value591=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1372, "bool"))));
    for(    i_410=0;    i_410<128;    i_410++    ){
        self->item_existance[i_410]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj167=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj167,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result159__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result159__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_411;
int i_412;
    for(    i_411=0;    i_411<self->size;    i_411++    ){
        if(self->item_existance[i_411]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_411],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_412=0;    i_412<self->size;    i_412++    ){
        if(self->item_existance[i_412]) {
            if(1) {
                self->keys[i_412] = come_decrement_ref_count2(self->keys[i_412], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj168;
char* __dec_obj169;
struct sType* __dec_obj170;
char* __dec_obj171;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj168=self->mName;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj169=self->mCValueName;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj170=self->mType;
            /* a*/come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj171=self->mFunName;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_414;
char* __result161__;
char* __result162__;
char* result_415;
char* __result163__;
result_414 = (void*)0;
result_415 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_414,0,sizeof(char*));
        __result161__ = gComeFunResultObject = __result_obj__ = result_414;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result162__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    memset(&result_415,0,sizeof(char*));
    __result163__ = gComeFunResultObject = __result_obj__ = result_415;
    gComeFunResultObject = (void*)0;
    return __result163__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_417;
char* __result164__;
char* __result165__;
char* result_418;
char* __result166__;
result_417 = (void*)0;
result_418 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_417,0,sizeof(char*));
        __result164__ = gComeFunResultObject = __result_obj__ = result_417;
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result165__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result165__;
    }
    memset(&result_418,0,sizeof(char*));
    __result166__ = gComeFunResultObject = __result_obj__ = result_418;
    gComeFunResultObject = (void*)0;
    return __result166__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_420;
unsigned int it_421;
struct sVar* __result167__;
struct sVar* __result168__;
struct sVar* __result169__;
struct sVar* __result170__;
    hash_420=string_get_hash_key(((char*)key))%self->size;
    it_421=hash_420;
    while((_Bool)1) {
        if(self->item_existance[it_421]) {
            if(string_equals(self->keys[it_421],key)) {
                __result167__ = gComeFunResultObject = __result_obj__ = self->items[it_421];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result167__;
            }
            it_421++;
            if(it_421>=self->size) {
                it_421=0;
            }
            else {
                if(it_421==hash_420) {
                    __result168__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result168__;
                }
            }
        }
        else {
            __result169__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result169__;
        }
    }
    __result170__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_434;
int it_435;
_Bool same_key_exist_436;
char* it2_437;
struct map$2charphsVarph* __result171__;
    if(self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_434=string_get_hash_key(key)%self->size;
    it_435=hash_434;
    while((_Bool)1) {
        if(self->item_existance[it_435]) {
            if(string_equals(self->keys[it_435],key)) {
                if(1) {
                    self->keys[it_435] = come_decrement_ref_count2(self->keys[it_435], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_435]);
                    self->keys[it_435]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_435]);
                    self->keys[it_435]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_435],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_435]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_435]=item;
                }
                break;
            }
            it_435++;
            if(it_435>=self->size) {
                it_435=0;
            }
            else {
                if(it_435==hash_434) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_435]=(_Bool)1;
            if(1) {
                self->keys[it_435]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_435]=key;
            }
            if(1) {
                self->items[it_435]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_435]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_436=(_Bool)0;
    for(    it2_437=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_437=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_437,key)) {
            same_key_exist_436=(_Bool)1;
        }
    }
    if(!same_key_exist_436) {
        list$1charp_push_back(self->key_list,key);
    }
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_423;
void* __right_value597 = (void*)0;
char** keys_424;
void* __right_value598 = (void*)0;
struct sVar** items_425;
void* __right_value599 = (void*)0;
_Bool* item_existance_426;
int len_427;
char* it_428;
struct sVar* default_value_429;
struct sVar* it2_430;
unsigned int hash_431;
int n_432;
struct sVar* default_value_433;
default_value_429 = (void*)0;
default_value_433 = (void*)0;
    size_423=self->size*10;
    keys_424=(char**)come_increment_ref_count(((char**)(__right_value597=(char**)come_calloc(1, sizeof(char*)*(1*(size_423)), "./comelang.h", 1621, "char*%"))));
    items_425=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value598=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_423)), "./comelang.h", 1622, "sVar*%"))));
    item_existance_426=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value599=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_423)), "./comelang.h", 1623, "bool"))));
    len_427=0;
    for(    it_428=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_428=map$2charphsVarph_next(self)    ){
        memset(&default_value_429,0,sizeof(struct sVar*));
        it2_430=map$2charphsVarph_at(self,it_428,default_value_429);
        hash_431=string_get_hash_key(it_428)%size_423;
        n_432=hash_431;
        while((_Bool)1) {
            if(item_existance_426[n_432]) {
                n_432++;
                if(n_432>=size_423) {
                    n_432=0;
                }
                else {
                    if(n_432==hash_431) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_426[n_432]=(_Bool)1;
                keys_424[n_432]=it_428;
                items_425[n_432]=map$2charphsVarph_at(self,it_428,default_value_433);
                len_427++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_424;
    self->items=items_425;
    self->item_existance=item_existance_426;
    self->size=size_423;
    self->len=len_427;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_438;
int i_439;
    for(    i_438=0;    i_438<self->size;    i_438++    ){
        if(self->item_existance[i_438]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_438],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_439=0;    i_439<self->size;    i_439++    ){
        if(self->item_existance[i_439]) {
            if(1) {
                self->keys[i_439] = come_decrement_ref_count2(self->keys[i_439], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_445;
int caller_line_446;
char* caller_sname_447;
char* last_code_448;
char* __dec_obj183;
char* last_code2_449;
char* __dec_obj184;
char* last_code3_450;
char* __dec_obj185;
void* __right_value617 = (void*)0;
char* sname_top_451;
int sline_top_452;
struct sFun* funX_453;
_Bool __result181__;
void* __right_value618 = (void*)0;
struct sType* result_type_454;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct list$1sTypeph* param_types_455;
struct list$1sTypeph* o2_saved_456;
struct sType* it_459;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sType* param_type_462;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct list$1charph* param_names_463;
void* __right_value625 = (void*)0;
struct list$1charph* param_default_parametors_464;
char* p_465;
int sline_466;
char* sname_467;
char* head_468;
struct buffer* source_469;
void* __right_value626 = (void*)0;
struct buffer* __dec_obj186;
struct sType* generics_type_saved_470;
void* __right_value627 = (void*)0;
struct sType* __dec_obj187;
struct list$1charph* method_generics_type_names_471;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1charph* __dec_obj188;
struct list$1charph* o2_saved_472;
char* it_473;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct list$1charph* __dec_obj189;
char* __dec_obj190;
void* __right_value632 = (void*)0;
struct sBlock* block_474;
struct buffer* __dec_obj191;
char* __dec_obj192;
_Bool var_args_475;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sFun* fun_476;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value644 = (void*)0;
struct sNode* node_477;
_Bool in_generics_fun_479;
_Bool __result190__;
struct sType* __dec_obj197;
struct list$1charph* __dec_obj198;
void* __right_value645 = (void*)0;
char* __dec_obj199;
char* __dec_obj200;
char* __dec_obj201;
char* __dec_obj202;
_Bool __result191__;
    caller_fun_445=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_446=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_447=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_448=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj183=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_449=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj184=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_450=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj185=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_451=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_452=info->sline;
    if(generics_type->mNoSolvedGenericsType->v1) {
        generics_type=generics_type->mNoSolvedGenericsType->v1;
    }
    funX_453=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_453) {
        __result181__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_448 = come_decrement_ref_count2(last_code_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_449 = come_decrement_ref_count2(last_code2_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_450 = come_decrement_ref_count2(last_code3_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_451 = come_decrement_ref_count2(sname_top_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result181__;
    }
    result_type_454=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_455=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1509, "list$1sTypeph"))));
    for(    o2_saved_456=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_459=list$1sTypeph_begin((o2_saved_456));    !list$1sTypeph_end((o2_saved_456));    it_459=list$1sTypeph_next((o2_saved_456))    ){
        param_type_462=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value621=sType_clone(it_459))),generics_type,info));
        /*g*/come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_462->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_455,(struct sType*)come_increment_ref_count(sType_clone(param_type_462)));
        /*i*/come_call_finalizer3(param_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_456,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_463=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_464=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_465=info->p;
    sline_466=info->sline;
    sname_467=(char*)come_increment_ref_count(info->sname);
    head_468=info->head;
    source_469=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj186=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj186,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_470=(struct sType*)come_increment_ref_count(info->generics_type);
    __dec_obj187=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(sType_clone(generics_type));
    /* a*/come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_471=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj188=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1536, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj188,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_472=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_473=list$1charph_begin((o2_saved_472));    !list$1charph_end((o2_saved_472));    it_473=list$1charph_next((o2_saved_472))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_473)));
    }
    /*i*/come_call_finalizer3(o2_saved_472,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj189=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj189,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj190=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_474=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_468;
    __dec_obj191=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_469);
    /* a*/come_call_finalizer3(__dec_obj191,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_465;
    info->sline=sline_466;
    __dec_obj192=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_467);
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_454->mInline=(_Bool)0;
    var_args_475=generics_fun->mVarArgs;
    fun_476=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1558, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_454),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_455)),(struct list$1charph*)come_increment_ref_count(param_names_463),(struct list$1charph*)come_increment_ref_count(param_default_parametors_464),(_Bool)0,var_args_475,(struct sBlock*)come_increment_ref_count(block_474),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_476));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1565, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFunNode*)(__right_value640=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1565, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_476),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_477=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value640,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_479=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    void* __if_result___480 = (void*)0;
    if(!node_compile(node_477,info)) {
        __result190__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_448 = come_decrement_ref_count2(last_code_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_449 = come_decrement_ref_count2(last_code2_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_450 = come_decrement_ref_count2(last_code3_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_451 = come_decrement_ref_count2(sname_top_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_455,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_463,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_464,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_467 = come_decrement_ref_count2(sname_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_469,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(generics_type_saved_470,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_471,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_474,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_476,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_477) { node_477 = come_decrement_ref_count2(node_477, ((struct sNode*)node_477)->finalize, ((struct sNode*)node_477)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result190__;
    }
    info->in_generics_fun=in_generics_fun_479;
    __dec_obj197=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_470);
    /* a*/come_call_finalizer3(__dec_obj197,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj198=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_471);
    /* a*/come_call_finalizer3(__dec_obj198,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj199=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_451));
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_452;
    __dec_obj200=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_448);
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj201=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_449);
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_450);
    __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_445;
    info->caller_line=caller_line_446;
    info->caller_sname=caller_sname_447;
    __result191__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_448 = come_decrement_ref_count2(last_code_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_449 = come_decrement_ref_count2(last_code2_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_450 = come_decrement_ref_count2(last_code3_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_451 = come_decrement_ref_count2(sname_top_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_454,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_455,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_463,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_464,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_467 = come_decrement_ref_count2(sname_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_469,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(generics_type_saved_470,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_471,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_474,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_476,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_477) { node_477 = come_decrement_ref_count2(node_477, ((struct sNode*)node_477)->finalize, ((struct sNode*)node_477)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result191__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_457;
struct sType* __result182__;
struct sType* __result183__;
struct sType* result_458;
struct sType* __result184__;
result_457 = (void*)0;
result_458 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_457,0,sizeof(struct sType*));
        __result182__ = gComeFunResultObject = __result_obj__ = result_457;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    self->it=self->head;
    if(self->it) {
        __result183__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
    memset(&result_458,0,sizeof(struct sType*));
    __result184__ = gComeFunResultObject = __result_obj__ = result_458;
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_460;
struct sType* __result185__;
struct sType* __result186__;
struct sType* result_461;
struct sType* __result187__;
result_460 = (void*)0;
result_461 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_460,0,sizeof(struct sType*));
        __result185__ = gComeFunResultObject = __result_obj__ = result_460;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result186__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result186__;
    }
    memset(&result_461,0,sizeof(struct sType*));
    __result187__ = gComeFunResultObject = __result_obj__ = result_461;
    gComeFunResultObject = (void*)0;
    return __result187__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_481;
int caller_line_482;
char* caller_sname_483;
char* last_code_484;
char* __dec_obj203;
char* last_code2_485;
char* __dec_obj204;
char* last_code3_486;
char* __dec_obj205;
void* __right_value646 = (void*)0;
char* sname_top_487;
int sline_top_488;
struct sFun* funX_489;
_Bool __result192__;
void* __right_value647 = (void*)0;
struct sType* result_type_490;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1sTypeph* param_types_491;
struct list$1sTypeph* o2_saved_492;
struct sType* it_493;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sType* param_type_494;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1charph* param_names_495;
void* __right_value654 = (void*)0;
struct list$1charph* param_default_parametors_496;
char* p_497;
int sline_498;
char* sname_499;
char* head_500;
struct buffer* source_501;
void* __right_value655 = (void*)0;
struct buffer* __dec_obj206;
struct list$1charph* method_generics_type_names_502;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct list$1charph* __dec_obj207;
struct list$1charph* o2_saved_503;
char* it_504;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct list$1charph* __dec_obj208;
char* __dec_obj209;
void* __right_value660 = (void*)0;
struct sBlock* block_505;
struct buffer* __dec_obj210;
char* __dec_obj211;
_Bool var_args_506;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sFun* fun_507;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value672 = (void*)0;
struct sNode* node_508;
_Bool __result195__;
struct list$1charph* __dec_obj216;
void* __right_value673 = (void*)0;
char* __dec_obj217;
char* __dec_obj218;
char* __dec_obj219;
char* __dec_obj220;
_Bool __result196__;
    caller_fun_481=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_482=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_483=info->caller_sname;
    info->caller_sname=info->sname;
    last_code_484=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj203=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_485=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj204=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_486=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj205=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_487=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_488=info->sline;
    funX_489=map$2charphsFunphp_operator_load_element(info->funcs,fun_name);
    if(funX_489) {
        __result192__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_484 = come_decrement_ref_count2(last_code_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_485 = come_decrement_ref_count2(last_code2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_486 = come_decrement_ref_count2(last_code3_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_487 = come_decrement_ref_count2(sname_top_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result192__;
    }
    result_type_490=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_491=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1619, "list$1sTypeph"))));
    for(    o2_saved_492=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_493=list$1sTypeph_begin((o2_saved_492));    !list$1sTypeph_end((o2_saved_492));    it_493=list$1sTypeph_next((o2_saved_492))    ){
        param_type_494=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value650=sType_clone(it_493))),info));
        /*g*/come_call_finalizer3(__right_value650,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_494->mFunctionParam=(_Bool)1;
        list$1sTypeph_add(param_types_491,(struct sType*)come_increment_ref_count(sType_clone(param_type_494)));
        /*i*/come_call_finalizer3(param_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_492,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_495=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamNames));
    param_default_parametors_496=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mParamDefaultParametors));
    p_497=info->p;
    sline_498=info->sline;
    sname_499=(char*)come_increment_ref_count(info->sname);
    head_500=info->head;
    source_501=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj206=info->source;
    info->source=(struct buffer*)come_increment_ref_count(string_to_buffer(generics_fun->mBlock));
    /* a*/come_call_finalizer3(__dec_obj206,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_502=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj207=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1643, "list$1charph"))));
    /* a*/come_call_finalizer3(__dec_obj207,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_503=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_504=list$1charph_begin((o2_saved_503));    !list$1charph_end((o2_saved_503));    it_504=list$1charph_next((o2_saved_503))    ){
        list$1charph_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(string_clone(it_504)));
    }
    /*i*/come_call_finalizer3(o2_saved_503,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj208=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(generics_fun->mGenericsTypeNames));
    /* a*/come_call_finalizer3(__dec_obj208,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj209=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_505=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_500;
    __dec_obj210=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_501);
    /* a*/come_call_finalizer3(__dec_obj210,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_497;
    info->sline=sline_498;
    __dec_obj211=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_499);
    __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_490->mInline=(_Bool)0;
    var_args_506=generics_fun->mVarArgs;
    fun_507=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1665, "sFun")),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_490),(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(param_types_491)),(struct list$1charph*)come_increment_ref_count(param_names_495),(struct list$1charph*)come_increment_ref_count(param_default_parametors_496),(_Bool)0,var_args_506,(struct sBlock*)come_increment_ref_count(block_505),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info));
    map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name)),(struct sFun*)come_increment_ref_count(fun_507));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1672, "struct sNode");
    _inf_obj_value4=come_increment_ref_count(((struct sFunNode*)(__right_value668=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1672, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_507),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_508=(struct sNode*)come_increment_ref_count(_inf_value4);
    /*g*/come_call_finalizer3(__right_value668,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    void* __if_result___510 = (void*)0;
    if(!node_compile(node_508,info)) {
        __result195__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_484 = come_decrement_ref_count2(last_code_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_485 = come_decrement_ref_count2(last_code2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code3_486 = come_decrement_ref_count2(last_code3_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_487 = come_decrement_ref_count2(sname_top_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_491,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_495,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_499 = come_decrement_ref_count2(sname_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_type_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_505,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_507,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_508) { node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result195__;
    }
    __dec_obj216=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_502);
    /* a*/come_call_finalizer3(__dec_obj216,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charph_reset(info->generics_type_names);
    __dec_obj217=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_487));
    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_488;
    __dec_obj218=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_484);
    __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj219=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_485);
    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj220=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_486);
    __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_481;
    info->caller_line=caller_line_482;
    info->caller_sname=caller_sname_483;
    __result196__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_484 = come_decrement_ref_count2(last_code_484, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_485 = come_decrement_ref_count2(last_code2_485, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_486 = come_decrement_ref_count2(last_code3_486, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_487 = come_decrement_ref_count2(sname_top_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_491,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_495,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_496,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_499 = come_decrement_ref_count2(sname_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_501,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(method_generics_type_names_502,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(block_505,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(fun_507,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_508) { node_508 = come_decrement_ref_count2(node_508, ((struct sNode*)node_508)->finalize, ((struct sNode*)node_508)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result196__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_511;
char* source_head_512;
struct sType* result_type_513;
char* var_name_514;
_Bool constructor__515;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* __dec_obj221;
void* __right_value676 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* result_type2_516;
char* var_name2_517;
_Bool err_518;
struct sType* __dec_obj222;
char* __dec_obj223;
_Bool method_definition_519;
char* p_520;
int sline_521;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
struct buffer* buf2_522;
char* fun_name_523;
char* base_fun_name_524;
void* __right_value679 = (void*)0;
char* __dec_obj224;
void* __right_value680 = (void*)0;
char* __dec_obj225;
void* __right_value681 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* obj_type_525;
char* name_526;
_Bool err_527;
void* __right_value682 = (void*)0;
char* __dec_obj226;
void* __right_value683 = (void*)0;
char* __dec_obj227;
void* __right_value684 = (void*)0;
char* __dec_obj228;
void* __right_value685 = (void*)0;
char* __dec_obj229;
void* __right_value686 = (void*)0;
char* __dec_obj230;
void* __right_value687 = (void*)0;
char* __dec_obj231;
void* __right_value688 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9;
struct list$1sTypeph* param_types_528;
struct list$1charph* param_names_529;
struct list$1charph* param_default_parametors_530;
_Bool var_args_531;
char* header_tail_532;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct buffer* header_buf_533;
int version_534;
int n_535;
void* __right_value691 = (void*)0;
struct sBlock* block_536;
void* __right_value692 = (void*)0;
char* fun_name_538;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sFun* fun_539;
void* __right_value698 = (void*)0;
struct sFun* fun2_540;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value704 = (void*)0;
struct sNode* __result199__;
void* __right_value705 = (void*)0;
char* none_generics_name_542;
void* __right_value706 = (void*)0;
char* generics_sname_543;
int generics_sline_544;
void* __right_value707 = (void*)0;
char* block_545;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct sGenericsFun* fun_546;
void* __right_value714 = (void*)0;
char* fun_name3_547;
void* __right_value718 = (void*)0;
struct sNode* __result211__;
void* __right_value719 = (void*)0;
char* generics_sname_569;
int generics_sline_570;
void* __right_value720 = (void*)0;
char* block_571;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sGenericsFun* fun_572;
void* __right_value727 = (void*)0;
char* fun_name3_573;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sNode* __result212__;
char* source_tail_574;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct buffer* header_575;
void* __right_value732 = (void*)0;
char* name_576;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
char* name_577;
void* __right_value735 = (void*)0;
int i_578;
struct sType* param_type_579;
char* param_name_583;
char* default_parametor_584;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
char* impl_name_585;
void* __right_value741 = (void*)0;
char* result_type_name_586;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
char* impl_name_587;
void* __right_value744 = (void*)0;
char* result_type_name_588;
void* __right_value745 = (void*)0;
int i_589;
struct sType* param_type_590;
char* param_name_591;
char* default_parametor_592;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct sBlock* block_593;
_Bool static__594;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
char* new_fun_name_595;
void* __right_value754 = (void*)0;
char* __dec_obj237;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct sFun* fun_596;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct sFun* fun2_597;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value769 = (void*)0;
struct sNode* __result217__;
void* __right_value770 = (void*)0;
char* new_fun_name_599;
void* __right_value771 = (void*)0;
char* __dec_obj242;
_Bool result_type_static_600;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct sFun* fun_601;
void* __right_value777 = (void*)0;
struct sFun* fun2_602;
void* __right_value778 = (void*)0;
char* source_tail_603;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct buffer* header_604;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value787 = (void*)0;
struct sNode* __result220__;
void* __right_value788 = (void*)0;
char* asm_fun_606;
void* __right_value789 = (void*)0;
char* __dec_obj247;
_Bool result_type_static_607;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
struct sFun* fun_608;
void* __right_value795 = (void*)0;
struct sFun* fun2_609;
void* __right_value796 = (void*)0;
char* source_tail_610;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct buffer* header_611;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value805 = (void*)0;
struct sNode* __result223__;
struct sNode* __result224__;
fun_name_523 = (void*)0;
    header_head_511=info->p;
    source_head_512=info->p;
    result_type_513=((void*)0);
    var_name_514=((void*)0);
    constructor__515=(_Bool)0;
    if(info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value674=parse_word(info)));
        __right_value674 = come_decrement_ref_count2(__right_value674, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj221=result_type_513;
        result_type_513=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        /* a*/come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_513->mHeap=(_Bool)1;
        constructor__515=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value676=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_516=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_517=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_518=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value676,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj222=result_type_513;
        result_type_513=(struct sType*)come_increment_ref_count(result_type2_516);
        /* a*/come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj223=var_name_514;
        var_name_514=(char*)come_increment_ref_count(var_name2_517);
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(info->in_class) {
        }
        if(!err_518) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        /*i*/come_call_finalizer3(result_type2_516,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_517 = come_decrement_ref_count2(var_name2_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_519=(_Bool)0;
    {
        p_520=info->p;
        sline_521=info->sline;
        buf2_522=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1736, "buffer"))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_522,*info->p);
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
        if(buffer_length(buf2_522)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_519=(_Bool)1;
        }
        info->p=p_520;
        info->sline=sline_521;
        /*i*/come_call_finalizer3(buf2_522,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_524=((void*)0);
    if(constructor__515) {
        __dec_obj224=base_fun_name_524;
        base_fun_name_524=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj225=fun_name_523;
        fun_name_523=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_524,info,(_Bool)1));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        if(method_definition_519) {
            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value681=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            obj_type_525=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
            name_526=(char*)come_increment_ref_count(multiple_assign_var8->v2);
            err_527=multiple_assign_var8->v3;
            /*g*/come_call_finalizer3(__right_value681,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_527) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            expected_next_character(58,info);
            expected_next_character(58,info);
            __dec_obj226=base_fun_name_524;
            base_fun_name_524=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj227=fun_name_523;
            fun_name_523=(char*)come_increment_ref_count(create_method_name(obj_type_525,(_Bool)0,base_fun_name_524,info,(_Bool)1));
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_526 = come_decrement_ref_count2(name_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(info->impl_type) {
                __dec_obj228=base_fun_name_524;
                base_fun_name_524=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj229=fun_name_523;
                fun_name_523=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_524,info,(_Bool)1));
                __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                __dec_obj230=fun_name_523;
                fun_name_523=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj231=base_fun_name_524;
                base_fun_name_524=(char*)come_increment_ref_count(__builtin_string(fun_name_523));
                __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
        }
    }
    if(info->in_class&&charp_operator_equals(base_fun_name_524,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value688=parse_params(info,constructor__515)));
    param_types_528=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_529=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_530=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_531=multiple_assign_var9->v4;
    /*g*/come_call_finalizer3(__right_value688,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_532=info->p;
    if(info->in_class&&charp_operator_equals(base_fun_name_524,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_533=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1803, "buffer"))));
    buffer_append(header_buf_533,header_head_511,header_tail_532-header_head_511);
    buffer_append_char(header_buf_533,0);
    version_534=0;
    if(parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_535=0;
        while(xisdigit(*info->p)) {
            n_535=n_535*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_534=n_535;
    }
    if(charp_operator_equals(base_fun_name_524,"lambda")) {
        block_536=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_537=0;
        lambda_num_537++;
        fun_name_538=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_537));
        result_type_513->mStatic=(_Bool)0;
        fun_539=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1833, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_538)),(struct sType*)come_increment_ref_count(result_type_513),(struct list$1sTypeph*)come_increment_ref_count(param_types_528),(struct list$1charph*)come_increment_ref_count(param_names_529),(struct list$1charph*)come_increment_ref_count(param_default_parametors_530),(_Bool)0,var_args_531,(struct sBlock*)come_increment_ref_count(block_536),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_533)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_540=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value698=__builtin_string(fun_name_538))));
        __right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_540==((void*)0)||fun2_540->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_538)),(struct sFun*)come_increment_ref_count(fun_539));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1843, "struct sNode");
        _inf_obj_value5=come_increment_ref_count(((struct sLambdaNode*)(__right_value701=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 1843, "sLambdaNode")),fun_539,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result199__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value704=_inf_value5));
        /*i*/come_call_finalizer3(block_536,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_539,sFun_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_514 = come_decrement_ref_count2(var_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_523 = come_decrement_ref_count2(fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_524 = come_decrement_ref_count2(base_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value701,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value704) { __right_value704 = come_decrement_ref_count2(__right_value704, ((struct sNode*)__right_value704)->finalize, ((struct sNode*)__right_value704)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result199__;
        /*i*/come_call_finalizer3(block_536,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_538 = come_decrement_ref_count2(fun_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_539,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->impl_type&&list$1charph_length(info->generics_type_names)>0) {
            none_generics_name_542=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
            generics_sname_543=(char*)come_increment_ref_count(__builtin_string(info->sname));
            generics_sline_544=info->sline;
            block_545=(char*)come_increment_ref_count(skip_block(info));
            fun_546=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1853, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value709=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value710=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_523)),(struct sType*)come_increment_ref_count(result_type_513),(struct list$1sTypeph*)come_increment_ref_count(param_types_528),(struct list$1charph*)come_increment_ref_count(param_names_529),(struct list$1charph*)come_increment_ref_count(param_default_parametors_530),var_args_531,(char*)come_increment_ref_count(block_545),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_543)),generics_sline_544));
            /*g*/come_call_finalizer3(__right_value709,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            /*g*/come_call_finalizer3(__right_value710,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
            fun_name3_547=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_542,base_fun_name_524));
            map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_547)),(struct sGenericsFun*)come_increment_ref_count(fun_546));
            __result211__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
            none_generics_name_542 = come_decrement_ref_count2(none_generics_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_543 = come_decrement_ref_count2(generics_sname_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_545 = come_decrement_ref_count2(block_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_546,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_547 = come_decrement_ref_count2(fun_name3_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_514 = come_decrement_ref_count2(var_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_523 = come_decrement_ref_count2(fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_524 = come_decrement_ref_count2(base_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result211__;
            none_generics_name_542 = come_decrement_ref_count2(none_generics_name_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_sname_543 = come_decrement_ref_count2(generics_sname_543, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            block_545 = come_decrement_ref_count2(block_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(fun_546,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_547 = come_decrement_ref_count2(fun_name3_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(list$1charph_length(info->method_generics_type_names)>0) {
                generics_sname_569=(char*)come_increment_ref_count(__builtin_string(info->sname));
                generics_sline_570=info->sline;
                block_571=(char*)come_increment_ref_count(skip_block(info));
                fun_572=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 1867, "sGenericsFun")),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value722=list$1charphp_clone(info->generics_type_names))),((struct list$1charph*)(__right_value723=list$1charphp_clone(info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_523)),(struct sType*)come_increment_ref_count(result_type_513),(struct list$1sTypeph*)come_increment_ref_count(param_types_528),(struct list$1charph*)come_increment_ref_count(param_names_529),(struct list$1charph*)come_increment_ref_count(param_default_parametors_530),var_args_531,(char*)come_increment_ref_count(block_571),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_569)),generics_sline_570));
                /*g*/come_call_finalizer3(__right_value722,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                /*g*/come_call_finalizer3(__right_value723,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name3_573=(char*)come_increment_ref_count(charp_clone(base_fun_name_524));
                if(method_definition_519) {
                    map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_523)),(struct sGenericsFun*)come_increment_ref_count(fun_572));
                }
                else {
                    map$2charphsGenericsFunph_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_573)),(struct sGenericsFun*)come_increment_ref_count(fun_572));
                }
                __result212__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
                generics_sname_569 = come_decrement_ref_count2(generics_sname_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_571 = come_decrement_ref_count2(block_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_572,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_573 = come_decrement_ref_count2(fun_name3_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_514 = come_decrement_ref_count2(var_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name_523 = come_decrement_ref_count2(fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                base_fun_name_524 = come_decrement_ref_count2(base_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result212__;
                generics_sname_569 = come_decrement_ref_count2(generics_sname_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                block_571 = come_decrement_ref_count2(block_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(fun_572,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_573 = come_decrement_ref_count2(fun_name3_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==123) {
                    source_tail_574=info->p-1;
                    header_575=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1883, "buffer"))));
                    if(constructor__515) {
                        if(list$1sTypeph_length(param_types_528)==1) {
                            name_576=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_575,((char*)(__right_value733=xsprintf("extern %s*%% %s*::initialize(%s*%% self);\n",name_576,name_576,name_576))));
                            __right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            name_576 = come_decrement_ref_count2(name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        else {
                            name_577=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                            buffer_append_str(header_575,((char*)(__right_value735=xsprintf("extern %s*%% %s*::initialize(%s*%% self, ",name_577,name_577,name_577))));
                            __right_value735 = come_decrement_ref_count2(__right_value735, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            for(                            i_578=1;                            i_578<list$1sTypeph_length(param_types_528);                            i_578++                            ){
                                param_type_579=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_528,i_578), "05function.c", 1895, 1));
                                param_name_583=((char*)come_null_check(list$1charphp_operator_load_element(param_names_529,i_578), "05function.c", 1896, 2));
                                default_parametor_584=list$1charphp_operator_load_element(param_default_parametors_530,i_578);
                                if(default_parametor_584) {
                                    buffer_append_str(header_575,((char*)(__right_value737=xsprintf("extern %s %s=%s",((char*)(__right_value736=make_come_type_name_string_no_solved(param_type_579,(_Bool)0,info))),param_name_583,default_parametor_584))));
                                    __right_value736 = come_decrement_ref_count2(__right_value736, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value737 = come_decrement_ref_count2(__right_value737, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                else {
                                    buffer_append_str(header_575,((char*)(__right_value739=xsprintf("extern %s %s",((char*)(__right_value738=make_come_type_name_string_no_solved(param_type_579,(_Bool)0,info))),param_name_583))));
                                    __right_value738 = come_decrement_ref_count2(__right_value738, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    __right_value739 = come_decrement_ref_count2(__right_value739, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                if(i_578!=list$1sTypeph_length(param_types_528)-1) {
                                    buffer_append_str(header_575,",");
                                }
                            }
                            buffer_append_str(header_575,");\n");
                            name_577 = come_decrement_ref_count2(name_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(info->in_class&&info->impl_type) {
                            if(list$1sTypeph_length(param_types_528)==1) {
                                impl_name_585=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_586=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_513,(_Bool)0,info));
                                buffer_append_str(header_575,((char*)(__right_value742=xsprintf("extern %s %s*::%s(%s* self);\n",result_type_name_586,impl_name_585,base_fun_name_524,impl_name_585))));
                                __right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                impl_name_585 = come_decrement_ref_count2(impl_name_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_586 = come_decrement_ref_count2(result_type_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                impl_name_587=(char*)come_increment_ref_count(string_clone(info->impl_type->mClass->mName));
                                result_type_name_588=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_513,(_Bool)0,info));
                                buffer_append_str(header_575,((char*)(__right_value745=xsprintf("extern %s %s*::%s(%s* self, ",result_type_name_588,impl_name_587,base_fun_name_524,impl_name_587))));
                                __right_value745 = come_decrement_ref_count2(__right_value745, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                for(                                i_589=1;                                i_589<list$1sTypeph_length(param_types_528);                                i_589++                                ){
                                    param_type_590=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_528,i_589), "05function.c", 1926, 3));
                                    param_name_591=((char*)come_null_check(list$1charphp_operator_load_element(param_names_529,i_589), "05function.c", 1927, 4));
                                    default_parametor_592=list$1charphp_operator_load_element(param_default_parametors_530,i_589);
                                    if(default_parametor_592) {
                                        buffer_append_str(header_575,((char*)(__right_value747=xsprintf("extern %s %s=%s",((char*)(__right_value746=make_come_type_name_string_no_solved(param_type_590,(_Bool)0,info))),param_name_591,default_parametor_592))));
                                        __right_value746 = come_decrement_ref_count2(__right_value746, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    else {
                                        buffer_append_str(header_575,((char*)(__right_value749=xsprintf("extern %s %s",((char*)(__right_value748=make_come_type_name_string_no_solved(param_type_590,(_Bool)0,info))),param_name_591))));
                                        __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        __right_value749 = come_decrement_ref_count2(__right_value749, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    if(i_589!=list$1sTypeph_length(param_types_528)-1) {
                                        buffer_append_str(header_575,",");
                                    }
                                }
                                buffer_append_str(header_575,");\n");
                                impl_name_587 = come_decrement_ref_count2(impl_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                result_type_name_588 = come_decrement_ref_count2(result_type_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        else {
                            buffer_append(header_575,source_head_512,source_tail_574-source_head_512);
                            buffer_append_str(header_575,";\n");
                        }
                    }
                    if(!result_type_513->mStatic) {
                        add_come_code_at_come_header(info,"%s",((char*)(__right_value750=buffer_to_string(header_575))));
                        __right_value750 = come_decrement_ref_count2(__right_value750, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    block_593=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__515,(_Bool)1));
                    static__594=(_Bool)0;
                    if(result_type_513->mStatic) {
                        result_type_513->mStatic=(_Bool)0;
                        static__594=(_Bool)1;
                    }
                    if(version_534>0) {
                        new_fun_name_595=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value752=__builtin_string(fun_name_523))),version_534));
                        __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj237=fun_name_523;
                        fun_name_523=(char*)come_increment_ref_count(__builtin_string(new_fun_name_595));
                        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_595 = come_decrement_ref_count2(new_fun_name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    fun_596=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1967, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_523)),(struct sType*)come_increment_ref_count(result_type_513),(struct list$1sTypeph*)come_increment_ref_count(param_types_528),(struct list$1charph*)come_increment_ref_count(param_names_529),(struct list$1charph*)come_increment_ref_count(param_default_parametors_530),(_Bool)0,var_args_531,(struct sBlock*)come_increment_ref_count(sBlock_clone(block_593)),static__594,(char*)come_increment_ref_count(buffer_to_string(header_buf_533)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                    if(info->in_class) {
                        map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_523)),(struct sFun*)come_increment_ref_count(fun_596));
                    }
                    else {
                        fun2_597=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value762=__builtin_string(fun_name_523))));
                        __right_value762 = come_decrement_ref_count2(__right_value762, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(fun2_597==((void*)0)||fun2_597->mExternal) {
                            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_523)),(struct sFun*)come_increment_ref_count(fun_596));
                        }
                    }
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 1987, "struct sNode");
                    _inf_obj_value6=come_increment_ref_count(((struct sFunNode*)(__right_value765=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 1987, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_596),info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sFunNode_finalize;
                    _inf_value6->clone=(void*)sFunNode_clone;
                    _inf_value6->compile=(void*)sFunNode_compile;
                    _inf_value6->sline=(void*)sNodeBase_sline;
                    _inf_value6->sname=(void*)sNodeBase_sname;
                    _inf_value6->terminated=(void*)sNodeBase_terminated;
                    _inf_value6->kind=(void*)sFunNode_kind;
                    __result217__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value769=_inf_value6));
                    /*i*/come_call_finalizer3(header_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_593,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_596,sFun_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_514 = come_decrement_ref_count2(var_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name_523 = come_decrement_ref_count2(fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    base_fun_name_524 = come_decrement_ref_count2(base_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_types_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(header_buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value765,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value769) { __right_value769 = come_decrement_ref_count2(__right_value769, ((struct sNode*)__right_value769)->finalize, ((struct sNode*)__right_value769)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result217__;
                    /*i*/come_call_finalizer3(header_575,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(block_593,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(fun_596,sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(xisalpha(*info->p)||*info->p==95||*info->p==59) {
                        if(version_534>0) {
                            new_fun_name_599=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_523,version_534));
                            __dec_obj242=fun_name_523;
                            fun_name_523=(char*)come_increment_ref_count(__builtin_string(new_fun_name_599));
                            __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
                            new_fun_name_599 = come_decrement_ref_count2(new_fun_name_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(*info->p==59) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            result_type_static_600=result_type_513->mStatic;
                            result_type_513->mStatic=(_Bool)0;
                            fun_601=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2002, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_523)),(struct sType*)come_increment_ref_count(result_type_513),(struct list$1sTypeph*)come_increment_ref_count(param_types_528),(struct list$1charph*)come_increment_ref_count(param_names_529),(struct list$1charph*)come_increment_ref_count(param_default_parametors_530),(_Bool)1,var_args_531,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_533)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_602=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value777=__builtin_string(fun_name_523))));
                            __right_value777 = come_decrement_ref_count2(__right_value777, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_602==((void*)0)||fun2_602->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_523)),(struct sFun*)come_increment_ref_count(fun_601));
                            }
                            source_tail_603=info->p;
                            header_604=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2016, "buffer"))));
                            buffer_append(header_604,source_head_512,source_tail_603-source_head_512);
                            if(!result_type_static_600) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value781=buffer_to_string(header_604))));
                                __right_value781 = come_decrement_ref_count2(__right_value781, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2023, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sFunNode*)(__right_value783=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2023, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_601),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sFunNode_finalize;
                            _inf_value7->clone=(void*)sFunNode_clone;
                            _inf_value7->compile=(void*)sFunNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sNodeBase_terminated;
                            _inf_value7->kind=(void*)sFunNode_kind;
                            __result220__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value787=_inf_value7));
                            /*i*/come_call_finalizer3(fun_601,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_514 = come_decrement_ref_count2(var_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_523 = come_decrement_ref_count2(fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_524 = come_decrement_ref_count2(base_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value783,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value787) { __right_value787 = come_decrement_ref_count2(__right_value787, ((struct sNode*)__right_value787)->finalize, ((struct sNode*)__right_value787)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result220__;
                            /*i*/come_call_finalizer3(fun_601,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_604,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            asm_fun_606=(char*)come_increment_ref_count(parse_attribute(info));
                            if(string_operator_not_equals(asm_fun_606,"")) {
                                __dec_obj247=fun_name_523;
                                fun_name_523=(char*)come_increment_ref_count(__builtin_string(asm_fun_606));
                                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            expected_next_character(59,info);
                            result_type_static_607=result_type_513->mStatic;
                            result_type_513->mStatic=(_Bool)0;
                            fun_608=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2037, "sFun")),(char*)come_increment_ref_count(__builtin_string(fun_name_523)),(struct sType*)come_increment_ref_count(result_type_513),(struct list$1sTypeph*)come_increment_ref_count(param_types_528),(struct list$1charph*)come_increment_ref_count(param_names_529),(struct list$1charph*)come_increment_ref_count(param_default_parametors_530),(_Bool)1,var_args_531,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_533)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info));
                            fun2_609=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value795=__builtin_string(fun_name_523))));
                            __right_value795 = come_decrement_ref_count2(__right_value795, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            if(fun2_609==((void*)0)||fun2_609->mExternal) {
                                map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(fun_name_523)),(struct sFun*)come_increment_ref_count(fun_608));
                            }
                            source_tail_610=info->p;
                            header_611=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2051, "buffer"))));
                            buffer_append(header_611,source_head_512,source_tail_610-source_head_512);
                            if(!result_type_static_607) {
                                add_come_code_at_come_header(info,"%s",((char*)(__right_value799=buffer_to_string(header_611))));
                                __right_value799 = come_decrement_ref_count2(__right_value799, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2058, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sFunNode*)(__right_value801=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2058, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_608),info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sFunNode_finalize;
                            _inf_value8->clone=(void*)sFunNode_clone;
                            _inf_value8->compile=(void*)sFunNode_compile;
                            _inf_value8->sline=(void*)sNodeBase_sline;
                            _inf_value8->sname=(void*)sNodeBase_sname;
                            _inf_value8->terminated=(void*)sNodeBase_terminated;
                            _inf_value8->kind=(void*)sFunNode_kind;
                            __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value805=_inf_value8));
                            asm_fun_606 = come_decrement_ref_count2(asm_fun_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_608,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                            var_name_514 = come_decrement_ref_count2(var_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_523 = come_decrement_ref_count2(fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            base_fun_name_524 = come_decrement_ref_count2(base_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_types_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            /*g*/come_call_finalizer3(__right_value801,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                            if(__right_value805) { __right_value805 = come_decrement_ref_count2(__right_value805, ((struct sNode*)__right_value805)->finalize, ((struct sNode*)__right_value805)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            gComeFunResultObject = (void*)0;
                            return __result223__;
                            asm_fun_606 = come_decrement_ref_count2(asm_fun_606, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(fun_608,sFun_finalize, 0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(header_611,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        err_msg(info,"invalid character(%c)(2)\n",*info->p);
                        exit(2);
                    }
                }
            }
        }
    }
    info->constructor_=(_Bool)0;
    __result224__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    /*i*/come_call_finalizer3(result_type_513,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_514 = come_decrement_ref_count2(var_name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_523 = come_decrement_ref_count2(fun_name_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_524 = come_decrement_ref_count2(base_fun_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_types_528,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_529,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_530,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(header_buf_533,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj232;
struct list$1charph* __dec_obj233;
struct list$1charph* __dec_obj234;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj232=self->v1;
            /* a*/come_call_finalizer3(__dec_obj232,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj233=self->v2;
            /* a*/come_call_finalizer3(__dec_obj233,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj234=self->v3;
            /* a*/come_call_finalizer3(__dec_obj234,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj235;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj235=self->sname;
            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result197__;
void* __right_value702 = (void*)0;
struct sLambdaNode* result_541;
void* __right_value703 = (void*)0;
char* __dec_obj236;
struct sLambdaNode* __result198__;
    if(self==(void*)0) {
        __result197__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    result_541=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "sLambdaNode"));
    if(self!=((void*)0)) {
        result_541->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj236=result_541->sname;
        result_541->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_541->mFun=self->mFun;
    }
    __result198__ = gComeFunResultObject = __result_obj__ = result_541;
    /*i*/come_call_finalizer3(result_541,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_565;
unsigned int it_566;
_Bool same_key_exist_567;
char* it2_568;
struct map$2charphsGenericsFunph* __result210__;
    if(self->len*10>=self->size) {
        map$2charphsGenericsFunph_rehash(self);
    }
    hash_565=string_get_hash_key(key)%self->size;
    it_566=hash_565;
    while((_Bool)1) {
        if(self->item_existance[it_566]) {
            if(string_equals(self->keys[it_566],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_566]);
                    self->keys[it_566] = come_decrement_ref_count2(self->keys[it_566], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_566]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_566]);
                    self->keys[it_566]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_566],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_566]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_566]=item;
                }
                break;
            }
            it_566++;
            if(it_566>=self->size) {
                it_566=0;
            }
            else {
                if(it_566==hash_565) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_566]=(_Bool)1;
            if(1) {
                self->keys[it_566]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_566]=key;
            }
            if(1) {
                self->items[it_566]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_566]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_567=(_Bool)0;
    for(    it2_568=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_568=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_568,key)) {
            same_key_exist_567=(_Bool)1;
        }
    }
    if(!same_key_exist_567) {
        list$1charp_push_back(self->key_list,key);
    }
    __result210__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static void map$2charphsGenericsFunph_rehash(struct map$2charphsGenericsFunph* self){
int size_548;
void* __right_value715 = (void*)0;
char** keys_549;
void* __right_value716 = (void*)0;
struct sGenericsFun** items_550;
void* __right_value717 = (void*)0;
_Bool* item_existance_551;
int len_552;
char* it_555;
struct sGenericsFun* default_value_558;
struct sGenericsFun* it2_559;
unsigned int hash_562;
int n_563;
struct sGenericsFun* default_value_564;
default_value_558 = (void*)0;
default_value_564 = (void*)0;
    size_548=self->size*10;
    keys_549=(char**)come_increment_ref_count(((char**)(__right_value715=(char**)come_calloc(1, sizeof(char*)*(1*(size_548)), "./comelang.h", 1621, "char*%"))));
    items_550=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value716=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_548)), "./comelang.h", 1622, "sGenericsFun*%"))));
    item_existance_551=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value717=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_548)), "./comelang.h", 1623, "bool"))));
    len_552=0;
    for(    it_555=map$2charphsGenericsFunph_begin(self);    !map$2charphsGenericsFunph_end(self);    it_555=map$2charphsGenericsFunph_next(self)    ){
        memset(&default_value_558,0,sizeof(struct sGenericsFun*));
        it2_559=map$2charphsGenericsFunph_at(self,it_555,default_value_558);
        hash_562=string_get_hash_key(it_555)%size_548;
        n_563=hash_562;
        while((_Bool)1) {
            if(item_existance_551[n_563]) {
                n_563++;
                if(n_563>=size_548) {
                    n_563=0;
                }
                else {
                    if(n_563==hash_562) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_551[n_563]=(_Bool)1;
                keys_549[n_563]=it_555;
                items_550[n_563]=map$2charphsGenericsFunph_at(self,it_555,default_value_564);
                len_552++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_549;
    self->items=items_550;
    self->item_existance=item_existance_551;
    self->size=size_548;
    self->len=len_552;
}

static char* map$2charphsGenericsFunph_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_553;
char* __result200__;
char* __result201__;
char* result_554;
char* __result202__;
result_553 = (void*)0;
result_554 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_553,0,sizeof(char*));
        __result200__ = gComeFunResultObject = __result_obj__ = result_553;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result201__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    memset(&result_554,0,sizeof(char*));
    __result202__ = gComeFunResultObject = __result_obj__ = result_554;
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static _Bool map$2charphsGenericsFunph_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunph_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_556;
char* __result203__;
char* __result204__;
char* result_557;
char* __result205__;
result_556 = (void*)0;
result_557 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_556,0,sizeof(char*));
        __result203__ = gComeFunResultObject = __result_obj__ = result_556;
        gComeFunResultObject = (void*)0;
        return __result203__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result204__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    memset(&result_557,0,sizeof(char*));
    __result205__ = gComeFunResultObject = __result_obj__ = result_557;
    gComeFunResultObject = (void*)0;
    return __result205__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_560;
unsigned int it_561;
struct sGenericsFun* __result206__;
struct sGenericsFun* __result207__;
struct sGenericsFun* __result208__;
struct sGenericsFun* __result209__;
    hash_560=string_get_hash_key(((char*)key))%self->size;
    it_561=hash_560;
    while((_Bool)1) {
        if(self->item_existance[it_561]) {
            if(string_equals(self->keys[it_561],key)) {
                __result206__ = gComeFunResultObject = __result_obj__ = self->items[it_561];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result206__;
            }
            it_561++;
            if(it_561>=self->size) {
                it_561=0;
            }
            else {
                if(it_561==hash_560) {
                    __result207__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result207__;
                }
            }
        }
        else {
            __result208__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result208__;
        }
    }
    __result209__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_580;
int i_581;
char* __result213__;
char* default_value_582;
char* __result214__;
default_value_582 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_580=self->head;
    i_581=0;
    while(it_580!=((void*)0)) {
        if(position==i_581) {
            __result213__ = gComeFunResultObject = __result_obj__ = it_580->item;
            gComeFunResultObject = (void*)0;
            return __result213__;
        }
        it_580=it_580->next;
        i_581++;
    }
    memset(&default_value_582,0,sizeof(char*));
    __result214__ = gComeFunResultObject = __result_obj__ = default_value_582;
    default_value_582 = come_decrement_ref_count2(default_value_582, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_613;
char* __dec_obj252;
char* last_code2_614;
char* __dec_obj253;
char* last_code3_615;
char* __dec_obj254;
struct sClass* current_stack_frame_struct_616;
struct sFun* finalizer_617;
void* __right_value806 = (void*)0;
char* real_fun_name_618;
void* __right_value807 = (void*)0;
char* user_real_fun_name_619;
struct sFun* user_finalizer_620;
void* __right_value808 = (void*)0;
struct sType* type2_621;
struct sClass* klass_622;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
struct buffer* source_623;
struct list$1tuple2$2charphsTypephph* o2_saved_632;
struct tuple2$2charphsTypeph* it_635;
struct tuple2$2charphsTypeph* multiple_assign_var10;
char* name_638;
struct sType* field_type_639;
char* p_641;
int sline_642;
char* sname_643;
char* head_644;
struct buffer* source3_645;
struct buffer* __dec_obj262;
void* __right_value811 = (void*)0;
char* __dec_obj263;
void* __right_value812 = (void*)0;
struct sBlock* block_646;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
struct sType* result_type_647;
void* __right_value815 = (void*)0;
char* name_648;
void* __right_value816 = (void*)0;
struct sType* self_type_649;
struct sType* __list_values21___650[1];
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct list$1sTypeph* param_types_651;
void* __right_value819 = (void*)0;
char* __list_values22___652[1];
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
struct list$1charph* param_names_653;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
struct list$1charph* param_default_parametors_654;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct buffer* header_buf_655;
void* __right_value826 = (void*)0;
int i_656;
struct sType* param_type_657;
char* param_name_658;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sFun* fun_659;
void* __right_value832 = (void*)0;
struct sFun* fun2_660;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value839 = (void*)0;
struct sNode* node_661;
struct buffer* __dec_obj268;
char* __dec_obj269;
char* __dec_obj270;
char* __dec_obj271;
char* __dec_obj272;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct tuple2$2sFunpcharph* __result238__;
    last_code_613=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj252=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_614=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj253=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_615=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj254=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_616=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_617=((void*)0);
    real_fun_name_618=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    user_real_fun_name_619=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
    user_finalizer_620=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_619);
    type2_621=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_621;
    klass_622=type->mClass;
    if(type->mPointerNum>0&&klass_622->mStruct) {
        source_623=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2098, "buffer"))));
        buffer_append_char(source_623,123);
        if(user_finalizer_620) {
            char source2_624[1024];
            memset(&source2_624, 0, sizeof(char)            *(1024)            );
            snprintf(source2_624,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_619);
            buffer_append_str(source_623,source2_624);
        }
        klass_622=map$2charphsClassphp_operator_load_element(info->classes,klass_622->mName);
        for(        o2_saved_632=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_622->mFields)),it_635=list$1tuple2$2charphsTypephph_begin((o2_saved_632));        !list$1tuple2$2charphsTypephph_end((o2_saved_632));        it_635=list$1tuple2$2charphsTypephph_next((o2_saved_632))        ){
            multiple_assign_var10=it_635;
            name_638=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            field_type_639=(struct sType*)come_increment_ref_count(multiple_assign_var10->v2);
            if(string_operator_equals(type->mClass->mName,field_type_639->mClass->mName)&&type->mPointerNum==field_type_639->mPointerNum&&field_type_639->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_639->mHeap) {
                char source2_640[1024];
                memset(&source2_640, 0, sizeof(char)                *(1024)                );
                snprintf(source2_640,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_638,name_638,name_638,name_638);
                buffer_append_str(source_623,source2_640);
            }
            name_638 = come_decrement_ref_count2(name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_632,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_623,125);
        p_641=info->p;
        sline_642=info->sline;
        sname_643=(char*)come_increment_ref_count(info->sname);
        head_644=info->head;
        source3_645=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj262=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_623);
        /* a*/come_call_finalizer3(__dec_obj262,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_623->buf;
        info->head=source_623->buf;
        __dec_obj263=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_618));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_646=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_647=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2144, "sType")),"void",(_Bool)0,info));
        name_648=(char*)come_increment_ref_count(string_clone(real_fun_name_618));
        self_type_649=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_649->mHeap=(_Bool)0;
        if(self_type_649->mPointerNum>1) {
            self_type_649->mPointerNum=1;
        }
        {__list_values21___650[0]=come_increment_ref_count(self_type_649);
}        param_types_651=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2151, "struct list$1sTypeph")),1,__list_values21___650));
        {__list_values22___652[0]=come_increment_ref_count(((char*)(__right_value819=__builtin_string("self"))));
}        param_names_653=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2152, "struct list$1charph")),1,__list_values22___652));
        __right_value819 = come_decrement_ref_count2(__right_value819, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_654=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2153, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_654,((void*)0));
        header_buf_655=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2156, "buffer"))));
        buffer_append_str(header_buf_655,((char*)(__right_value826=make_come_type_name_string(result_type_647,info))));
        __right_value826 = come_decrement_ref_count2(__right_value826, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_655," ");
        buffer_append_str(header_buf_655,real_fun_name_618);
        buffer_append_str(header_buf_655,"(");
        for(        i_656=0;        i_656<list$1sTypeph_length(param_types_651);        i_656++        ){
            param_type_657=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_651,i_656), "05function.c", 2164, 5));
            param_name_658=((char*)come_null_check(list$1charphp_operator_load_element(param_names_653,i_656), "05function.c", 2165, 6));
            buffer_append_str(header_buf_655,((char*)(__right_value827=make_come_type_name_string(param_type_657,info))));
            __right_value827 = come_decrement_ref_count2(__right_value827, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_655," ");
            buffer_append_str(header_buf_655,param_name_658);
            if(i_656!=list$1sTypeph_length(param_types_651)-1) {
                buffer_append_str(header_buf_655,",");
            }
        }
        buffer_append_str(header_buf_655,")");
        result_type_647->mStatic=(_Bool)0;
        fun_659=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2179, "sFun")),(char*)come_increment_ref_count(name_648),(struct sType*)come_increment_ref_count(result_type_647),(struct list$1sTypeph*)come_increment_ref_count(param_types_651),(struct list$1charph*)come_increment_ref_count(param_names_653),(struct list$1charph*)come_increment_ref_count(param_default_parametors_654),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_646),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_655)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_660=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value832=__builtin_string(fun_name))));
        __right_value832 = come_decrement_ref_count2(__right_value832, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_660==((void*)0)||fun2_660->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_648)),(struct sFun*)come_increment_ref_count(fun_659));
        }
        finalizer_617=fun_659;
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2195, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sFunNode*)(__right_value835=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2195, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_659),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sFunNode_finalize;
        _inf_value9->clone=(void*)sFunNode_clone;
        _inf_value9->compile=(void*)sFunNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sFunNode_kind;
        node_661=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value835,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_661,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj268=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_645);
        /* a*/come_call_finalizer3(__dec_obj268,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_641;
        info->head=head_644;
        info->sline=sline_642;
        __dec_obj269=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_643);
        __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_623,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_643 = come_decrement_ref_count2(sname_643, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_645,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_646,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_648 = come_decrement_ref_count2(name_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_649,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_651,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_653,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_654,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_655,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_659,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_661) { node_661 = come_decrement_ref_count2(node_661, ((struct sNode*)node_661)->finalize, ((struct sNode*)node_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_616;
    __dec_obj270=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_613);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj271=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_614);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj272=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_615);
    __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result238__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value841=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2215, "struct tuple2$2sFunpcharph")),finalizer_617,(char*)come_increment_ref_count(real_fun_name_618))));
    last_code_613 = come_decrement_ref_count2(last_code_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_614 = come_decrement_ref_count2(last_code2_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_615 = come_decrement_ref_count2(last_code3_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_618 = come_decrement_ref_count2(real_fun_name_618, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    user_real_fun_name_619 = come_decrement_ref_count2(user_real_fun_name_619, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_621,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value841,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_625;
unsigned int hash_626;
unsigned int it_627;
struct sClass* __result225__;
struct sClass* __result226__;
struct sClass* __result227__;
struct sClass* __result228__;
default_value_625 = (void*)0;
    memset(&default_value_625,0,sizeof(struct sClass*));
    hash_626=string_get_hash_key(((char*)key))%self->size;
    it_627=hash_626;
    while((_Bool)1) {
        if(self->item_existance[it_627]) {
            if(string_equals(self->keys[it_627],key)) {
                __result225__ = gComeFunResultObject = __result_obj__ = self->items[it_627];
                /*i*/come_call_finalizer3(default_value_625,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result225__;
            }
            it_627++;
            if(it_627>=self->size) {
                it_627=0;
            }
            else {
                if(it_627==hash_626) {
                    __result226__ = gComeFunResultObject = __result_obj__ = default_value_625;
                    /*i*/come_call_finalizer3(default_value_625,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result226__;
                }
            }
        }
        else {
            __result227__ = gComeFunResultObject = __result_obj__ = default_value_625;
            /*i*/come_call_finalizer3(default_value_625,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result227__;
        }
    }
    __result228__ = gComeFunResultObject = __result_obj__ = default_value_625;
    /*i*/come_call_finalizer3(default_value_625,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj255;
struct list$1tuple2$2charphsTypephph* __dec_obj256;
char* __dec_obj260;
char* __dec_obj261;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj255=self->mName;
            __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj256=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj256,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj260=self->mDeclareSName;
            __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj261=self->mParentClassName;
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_628;
struct list_item$1tuple2$2charphsTypephph* prev_it_629;
    it_628=self->head;
    while(it_628!=((void*)0)) {
        prev_it_629=it_628;
        it_628=it_628->next;
        /*i*/come_call_finalizer3(prev_it_629,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj257;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj257=self->item;
            /* a*/come_call_finalizer3(__dec_obj257,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj258;
struct sType* __dec_obj259;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj258=self->v1;
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj259=self->v2;
            /* a*/come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_630;
struct list_item$1tuple2$2charphsTypephph* prev_it_631;
    it_630=self->head;
    while(it_630!=((void*)0)) {
        prev_it_631=it_630;
        it_630=it_630->next;
        /*i*/come_call_finalizer3(prev_it_631,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_633;
struct tuple2$2charphsTypeph* __result229__;
struct tuple2$2charphsTypeph* __result230__;
struct tuple2$2charphsTypeph* result_634;
struct tuple2$2charphsTypeph* __result231__;
result_633 = (void*)0;
result_634 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_633,0,sizeof(struct tuple2$2charphsTypeph*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_633;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->it=self->head;
    if(self->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_634,0,sizeof(struct tuple2$2charphsTypeph*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_634;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_636;
struct tuple2$2charphsTypeph* __result232__;
struct tuple2$2charphsTypeph* __result233__;
struct tuple2$2charphsTypeph* result_637;
struct tuple2$2charphsTypeph* __result234__;
result_636 = (void*)0;
result_637 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_636,0,sizeof(struct tuple2$2charphsTypeph*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_636;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_637,0,sizeof(struct tuple2$2charphsTypeph*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_637;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj273;
struct tuple2$2sFunpcharph* __result237__;
    self->v1=v1;
    __dec_obj273=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj274;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj274=self->v2;
            __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_663;
char* __dec_obj275;
char* last_code2_664;
char* __dec_obj276;
char* last_code3_665;
char* __dec_obj277;
struct sClass* current_stack_frame_struct_666;
struct sFun* finalizer_667;
void* __right_value842 = (void*)0;
char* real_fun_name_668;
void* __right_value843 = (void*)0;
struct sType* type2_669;
struct sClass* klass_670;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct buffer* source_671;
struct list$1tuple2$2charphsTypephph* o2_saved_672;
struct tuple2$2charphsTypeph* it_673;
struct tuple2$2charphsTypeph* multiple_assign_var11;
char* name_674;
struct sType* field_type_675;
char* p_677;
int sline_678;
char* sname_679;
char* head_680;
struct buffer* source3_681;
struct buffer* __dec_obj278;
void* __right_value846 = (void*)0;
char* __dec_obj279;
void* __right_value847 = (void*)0;
struct sBlock* block_682;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct sType* result_type_683;
void* __right_value850 = (void*)0;
char* name_684;
void* __right_value851 = (void*)0;
struct sType* self_type_685;
struct sType* __list_values23___686[1];
void* __right_value852 = (void*)0;
void* __right_value853 = (void*)0;
struct list$1sTypeph* param_types_687;
void* __right_value854 = (void*)0;
char* __list_values24___688[1];
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
struct list$1charph* param_names_689;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct list$1charph* param_default_parametors_690;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct buffer* header_buf_691;
void* __right_value861 = (void*)0;
int i_692;
struct sType* param_type_693;
char* param_name_694;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct sFun* fun_695;
void* __right_value867 = (void*)0;
struct sFun* fun2_696;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value874 = (void*)0;
struct sNode* node_697;
struct buffer* __dec_obj284;
char* __dec_obj285;
char* __dec_obj286;
char* __dec_obj287;
char* __dec_obj288;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct tuple2$2sFunpcharph* __result241__;
    last_code_663=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj275=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_664=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj276=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_665=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj277=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_666=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    finalizer_667=((void*)0);
    real_fun_name_668=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_669=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_669;
    klass_670=type->mClass;
    if(type->mPointerNum>0&&klass_670->mStruct) {
        source_671=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2242, "buffer"))));
        buffer_append_char(source_671,123);
        klass_670=map$2charphsClassphp_operator_load_element(info->classes,klass_670->mName);
        for(        o2_saved_672=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_670->mFields)),it_673=list$1tuple2$2charphsTypephph_begin((o2_saved_672));        !list$1tuple2$2charphsTypephph_end((o2_saved_672));        it_673=list$1tuple2$2charphsTypephph_next((o2_saved_672))        ){
            multiple_assign_var11=it_673;
            name_674=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            field_type_675=(struct sType*)come_increment_ref_count(multiple_assign_var11->v2);
            if(string_operator_equals(type->mClass->mName,field_type_675->mClass->mName)&&type->mPointerNum==field_type_675->mPointerNum&&field_type_675->mHeap) {
                err_msg(info,"Define recusively the finalizer. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                exit(2);
            }
            if(field_type_675->mHeap) {
                char source2_676[1024];
                memset(&source2_676, 0, sizeof(char)                *(1024)                );
                snprintf(source2_676,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { force_delete borrow self.%s; }}\n",name_674,name_674,name_674,name_674);
                buffer_append_str(source_671,source2_676);
            }
            name_674 = come_decrement_ref_count2(name_674, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(field_type_675,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_672,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_char(source_671,125);
        p_677=info->p;
        sline_678=info->sline;
        sname_679=(char*)come_increment_ref_count(info->sname);
        head_680=info->head;
        source3_681=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj278=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_671);
        /* a*/come_call_finalizer3(__dec_obj278,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_671->buf;
        info->head=source_671->buf;
        __dec_obj279=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_668));
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_682=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_683=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2281, "sType")),"void",(_Bool)0,info));
        name_684=(char*)come_increment_ref_count(string_clone(real_fun_name_668));
        self_type_685=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_685->mHeap=(_Bool)0;
        if(self_type_685->mPointerNum>1) {
            self_type_685->mPointerNum=1;
        }
        {__list_values23___686[0]=come_increment_ref_count(self_type_685);
}        param_types_687=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2288, "struct list$1sTypeph")),1,__list_values23___686));
        {__list_values24___688[0]=come_increment_ref_count(((char*)(__right_value854=__builtin_string("self"))));
}        param_names_689=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2289, "struct list$1charph")),1,__list_values24___688));
        __right_value854 = come_decrement_ref_count2(__right_value854, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_690=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2290, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_690,((void*)0));
        header_buf_691=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2293, "buffer"))));
        buffer_append_str(header_buf_691,((char*)(__right_value861=make_come_type_name_string(result_type_683,info))));
        __right_value861 = come_decrement_ref_count2(__right_value861, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_691," ");
        buffer_append_str(header_buf_691,real_fun_name_668);
        buffer_append_str(header_buf_691,"(");
        for(        i_692=0;        i_692<list$1sTypeph_length(param_types_687);        i_692++        ){
            param_type_693=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_687,i_692), "05function.c", 2301, 7));
            param_name_694=((char*)come_null_check(list$1charphp_operator_load_element(param_names_689,i_692), "05function.c", 2302, 8));
            buffer_append_str(header_buf_691,((char*)(__right_value862=make_come_type_name_string(param_type_693,info))));
            __right_value862 = come_decrement_ref_count2(__right_value862, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_691," ");
            buffer_append_str(header_buf_691,param_name_694);
            if(i_692!=list$1sTypeph_length(param_types_687)-1) {
                buffer_append_str(header_buf_691,",");
            }
        }
        buffer_append_str(header_buf_691,")");
        result_type_683->mStatic=(_Bool)0;
        fun_695=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2316, "sFun")),(char*)come_increment_ref_count(name_684),(struct sType*)come_increment_ref_count(result_type_683),(struct list$1sTypeph*)come_increment_ref_count(param_types_687),(struct list$1charph*)come_increment_ref_count(param_names_689),(struct list$1charph*)come_increment_ref_count(param_default_parametors_690),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_682),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_691)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_696=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value867=__builtin_string(fun_name))));
        __right_value867 = come_decrement_ref_count2(__right_value867, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_696==((void*)0)||fun2_696->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_684)),(struct sFun*)come_increment_ref_count(fun_695));
        }
        finalizer_667=fun_695;
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2332, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sFunNode*)(__right_value870=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2332, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_695),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sFunNode_finalize;
        _inf_value10->clone=(void*)sFunNode_clone;
        _inf_value10->compile=(void*)sFunNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sFunNode_kind;
        node_697=(struct sNode*)come_increment_ref_count(_inf_value10);
        /*g*/come_call_finalizer3(__right_value870,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_697,info)) {
            printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
            exit(2);
        }
        __dec_obj284=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_681);
        /* a*/come_call_finalizer3(__dec_obj284,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_677;
        info->head=head_680;
        info->sline=sline_678;
        __dec_obj285=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_679);
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_671,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_679 = come_decrement_ref_count2(sname_679, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_681,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_682,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_683,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_685,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_687,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_691,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_695,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_697) { node_697 = come_decrement_ref_count2(node_697, ((struct sNode*)node_697)->finalize, ((struct sNode*)node_697)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_666;
    __dec_obj286=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_663);
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj287=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_664);
    __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj288=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_665);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result241__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value876=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2352, "struct tuple2$2sFunpcharph")),finalizer_667,(char*)come_increment_ref_count(real_fun_name_668))));
    last_code_663 = come_decrement_ref_count2(last_code_663, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_664 = come_decrement_ref_count2(last_code2_664, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_665 = come_decrement_ref_count2(last_code3_665, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_668 = come_decrement_ref_count2(real_fun_name_668, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_669,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value876,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_699;
char* __dec_obj289;
char* last_code2_700;
char* __dec_obj290;
char* last_code3_701;
char* __dec_obj291;
struct sClass* current_stack_frame_struct_702;
struct sFun* equaler_703;
void* __right_value877 = (void*)0;
char* real_fun_name_704;
void* __right_value878 = (void*)0;
struct sType* type2_705;
struct sClass* klass_706;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct buffer* source_707;
char* name_708;
struct list$1tuple2$2charphsTypephph* o2_saved_710;
struct tuple2$2charphsTypeph* it_711;
struct tuple2$2charphsTypeph* multiple_assign_var12;
char* name_712;
struct sType* field_type_713;
char* p_715;
int sline_716;
char* sname_717;
char* head_718;
struct buffer* source3_719;
struct buffer* __dec_obj292;
void* __right_value881 = (void*)0;
char* __dec_obj293;
void* __right_value882 = (void*)0;
struct sBlock* block_720;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct sType* result_type_721;
void* __right_value885 = (void*)0;
char* name_722;
void* __right_value886 = (void*)0;
struct sType* left_type_723;
void* __right_value887 = (void*)0;
struct sType* right_type_724;
struct sType* __list_values25___725[2];
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct list$1sTypeph* param_types_726;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
char* __list_values26___727[2];
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct list$1charph* param_names_728;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct list$1charph* param_default_parametors_729;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
struct buffer* header_buf_730;
void* __right_value898 = (void*)0;
int i_731;
struct sType* param_type_732;
char* param_name_733;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sFun* fun_734;
void* __right_value904 = (void*)0;
struct sFun* fun2_735;
void* __right_value905 = (void*)0;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value911 = (void*)0;
struct sNode* node_736;
struct buffer* __dec_obj298;
char* __dec_obj299;
char* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct tuple2$2sFunpcharph* __result244__;
    last_code_699=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj289=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_700=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj290=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_701=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj291=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_702=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_703=((void*)0);
    real_fun_name_704=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_705=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_705;
    klass_706=type->mClass;
    if(type->mPointerNum>0&&!klass_706->mNumber) {
        source_707=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2377, "buffer"))));
        buffer_append_char(source_707,123);
        if(klass_706->mProtocol) {
            name_708="_protocol_obj";
            char source2_709[1024];
            memset(&source2_709, 0, sizeof(char)            *(1024)            );
            snprintf(source2_709,1024,"return left.%s.equals(right.%s);\n",name_708,name_708);
            buffer_append_str(source_707,source2_709);
        }
        else {
            klass_706=map$2charphsClassphp_operator_load_element(info->classes,klass_706->mName);
            for(            o2_saved_710=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_706->mFields)),it_711=list$1tuple2$2charphsTypephph_begin((o2_saved_710));            !list$1tuple2$2charphsTypephph_end((o2_saved_710));            it_711=list$1tuple2$2charphsTypephph_next((o2_saved_710))            ){
                multiple_assign_var12=it_711;
                name_712=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_713=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(string_operator_equals(type->mClass->mName,field_type_713->mClass->mName)&&type->mPointerNum==field_type_713->mPointerNum&&field_type_713->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_714[1024];
                memset(&source2_714, 0, sizeof(char)                *(1024)                );
                snprintf(source2_714,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_712,name_712);
                buffer_append_str(source_707,source2_714);
                name_712 = come_decrement_ref_count2(name_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_713,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_710,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_707,"return true;");
        buffer_append_char(source_707,125);
        p_715=info->p;
        sline_716=info->sline;
        sname_717=(char*)come_increment_ref_count(info->sname);
        head_718=info->head;
        source3_719=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj292=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_707);
        /* a*/come_call_finalizer3(__dec_obj292,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_707->buf;
        info->head=source_707->buf;
        __dec_obj293=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_704));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_720=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_721=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2423, "sType")),"bool",(_Bool)0,info));
        name_722=(char*)come_increment_ref_count(string_clone(real_fun_name_704));
        left_type_723=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_723->mHeap=(_Bool)0;
        right_type_724=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_724->mHeap=(_Bool)0;
        {__list_values25___725[0]=come_increment_ref_count(left_type_723);
__list_values25___725[1]=come_increment_ref_count(right_type_724);
}        param_types_726=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2429, "struct list$1sTypeph")),2,__list_values25___725));
        {__list_values26___727[0]=come_increment_ref_count(((char*)(__right_value890=__builtin_string("left"))));
__list_values26___727[1]=come_increment_ref_count(((char*)(__right_value891=__builtin_string("right"))));
}        param_names_728=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2430, "struct list$1charph")),2,__list_values26___727));
        __right_value890 = come_decrement_ref_count2(__right_value890, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value891 = come_decrement_ref_count2(__right_value891, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_729=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2431, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_729,((void*)0));
        list$1charph_push_back(param_default_parametors_729,((void*)0));
        header_buf_730=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2435, "buffer"))));
        buffer_append_str(header_buf_730,((char*)(__right_value898=make_come_type_name_string(result_type_721,info))));
        __right_value898 = come_decrement_ref_count2(__right_value898, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_730," ");
        buffer_append_str(header_buf_730,real_fun_name_704);
        buffer_append_str(header_buf_730,"(");
        for(        i_731=0;        i_731<list$1sTypeph_length(param_types_726);        i_731++        ){
            param_type_732=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_726,i_731), "05function.c", 2443, 9));
            param_name_733=((char*)come_null_check(list$1charphp_operator_load_element(param_names_728,i_731), "05function.c", 2444, 10));
            buffer_append_str(header_buf_730,((char*)(__right_value899=make_come_type_name_string(param_type_732,info))));
            __right_value899 = come_decrement_ref_count2(__right_value899, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_730," ");
            buffer_append_str(header_buf_730,param_name_733);
            if(i_731!=list$1sTypeph_length(param_types_726)-1) {
                buffer_append_str(header_buf_730,",");
            }
        }
        buffer_append_str(header_buf_730,")");
        result_type_721->mStatic=(_Bool)0;
        fun_734=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2458, "sFun")),(char*)come_increment_ref_count(name_722),(struct sType*)come_increment_ref_count(result_type_721),(struct list$1sTypeph*)come_increment_ref_count(param_types_726),(struct list$1charph*)come_increment_ref_count(param_names_728),(struct list$1charph*)come_increment_ref_count(param_default_parametors_729),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_720),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_730)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_735=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value904=__builtin_string(fun_name))));
        __right_value904 = come_decrement_ref_count2(__right_value904, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_735==((void*)0)||fun2_735->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_722)),(struct sFun*)come_increment_ref_count(fun_734));
        }
        equaler_703=fun_734;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2474, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sFunNode*)(__right_value907=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2474, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_734),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sFunNode_finalize;
        _inf_value11->clone=(void*)sFunNode_clone;
        _inf_value11->compile=(void*)sFunNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sFunNode_kind;
        node_736=(struct sNode*)come_increment_ref_count(_inf_value11);
        /*g*/come_call_finalizer3(__right_value907,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_736,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_719);
        /* a*/come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_715;
        info->head=head_718;
        info->sline=sline_716;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_717);
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_707,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_717 = come_decrement_ref_count2(sname_717, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_719,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_720,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_721,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_722 = come_decrement_ref_count2(name_722, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_723,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_724,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_726,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_728,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_729,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_730,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_734,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_736) { node_736 = come_decrement_ref_count2(node_736, ((struct sNode*)node_736)->finalize, ((struct sNode*)node_736)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_702;
    __dec_obj300=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_699);
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj301=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_700);
    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj302=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_701);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result244__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value913=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2494, "struct tuple2$2sFunpcharph")),equaler_703,(char*)come_increment_ref_count(real_fun_name_704))));
    last_code_699 = come_decrement_ref_count2(last_code_699, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_700 = come_decrement_ref_count2(last_code2_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_701 = come_decrement_ref_count2(last_code3_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_704 = come_decrement_ref_count2(real_fun_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_705,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value913,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_738;
char* __dec_obj303;
char* last_code2_739;
char* __dec_obj304;
char* last_code3_740;
char* __dec_obj305;
struct sClass* current_stack_frame_struct_741;
struct sFun* equaler_742;
void* __right_value914 = (void*)0;
char* real_fun_name_743;
void* __right_value915 = (void*)0;
struct sType* type2_744;
struct sClass* klass_745;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct buffer* source_746;
char* name_747;
int i_750;
struct list$1tuple2$2charphsTypephph* o2_saved_751;
struct tuple2$2charphsTypeph* it_752;
struct tuple2$2charphsTypeph* multiple_assign_var13;
char* name_753;
struct sType* field_type_754;
char* p_758;
int sline_759;
char* sname_760;
char* head_761;
struct buffer* source3_762;
struct buffer* __dec_obj306;
void* __right_value918 = (void*)0;
char* __dec_obj307;
void* __right_value919 = (void*)0;
struct sBlock* block_763;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sType* result_type_764;
void* __right_value922 = (void*)0;
char* name_765;
void* __right_value923 = (void*)0;
struct sType* left_type_766;
void* __right_value924 = (void*)0;
struct sType* right_type_767;
struct sType* __list_values27___768[2];
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct list$1sTypeph* param_types_769;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
char* __list_values28___770[2];
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
struct list$1charph* param_names_771;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct list$1charph* param_default_parametors_772;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct buffer* header_buf_773;
void* __right_value935 = (void*)0;
int i_774;
struct sType* param_type_775;
char* param_name_776;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct sFun* fun_777;
void* __right_value941 = (void*)0;
struct sFun* fun2_778;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value948 = (void*)0;
struct sNode* node_779;
struct buffer* __dec_obj312;
char* __dec_obj313;
char* __dec_obj314;
char* __dec_obj315;
char* __dec_obj316;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct tuple2$2sFunpcharph* __result247__;
    last_code_738=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_739=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_740=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj305=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_741=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_742=((void*)0);
    real_fun_name_743=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_744=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_744;
    klass_745=type->mClass;
    if(type->mPointerNum>0&&!klass_745->mNumber) {
        source_746=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2519, "buffer"))));
        buffer_append_char(source_746,123);
        if(klass_745->mProtocol) {
            name_747="_protocol_obj";
            char source2_748[1024];
            memset(&source2_748, 0, sizeof(char)            *(1024)            );
            snprintf(source2_748,1024,"return !left.%s.equals(right.%s);\n",name_747,name_747);
            buffer_append_str(source_746,source2_748);
        }
        else {
            char source2_749[1024];
            memset(&source2_749, 0, sizeof(char)            *(1024)            );
            snprintf(source2_749,1024,"return !(");
            buffer_append_str(source_746,source2_749);
            i_750=0;
            klass_745=map$2charphsClassphp_operator_load_element(info->classes,klass_745->mName);
            for(            o2_saved_751=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_745->mFields)),it_752=list$1tuple2$2charphsTypephph_begin((o2_saved_751));            !list$1tuple2$2charphsTypephph_end((o2_saved_751));            it_752=list$1tuple2$2charphsTypephph_next((o2_saved_751))            ){
                multiple_assign_var13=it_752;
                name_753=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_754=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                if(string_operator_equals(type->mClass->mName,field_type_754->mClass->mName)&&type->mPointerNum==field_type_754->mPointerNum&&field_type_754->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_755[1024];
                memset(&source2_755, 0, sizeof(char)                *(1024)                );
                snprintf(source2_755,1024,"left.%s.equals(right.%s)",name_753,name_753);
                buffer_append_str(source_746,source2_755);
                if(i_750==list$1tuple2$2charphsTypephph_length(klass_745->mFields)-1) {
                    char source2_756[1024];
                    memset(&source2_756, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_756,1024,");");
                    buffer_append_str(source_746,source2_756);
                }
                else {
                    char source2_757[1024];
                    memset(&source2_757, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_757,1024," && ");
                    buffer_append_str(source_746,source2_757);
                }
                i_750++;
                name_753 = come_decrement_ref_count2(name_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_754,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_751,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_746,125);
        p_758=info->p;
        sline_759=info->sline;
        sname_760=(char*)come_increment_ref_count(info->sname);
        head_761=info->head;
        source3_762=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj306=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_746);
        /* a*/come_call_finalizer3(__dec_obj306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_746->buf;
        info->head=source_746->buf;
        __dec_obj307=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_743));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_763=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_764=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2582, "sType")),"bool",(_Bool)0,info));
        name_765=(char*)come_increment_ref_count(string_clone(real_fun_name_743));
        left_type_766=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_766->mHeap=(_Bool)0;
        right_type_767=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_767->mHeap=(_Bool)0;
        {__list_values27___768[0]=come_increment_ref_count(left_type_766);
__list_values27___768[1]=come_increment_ref_count(right_type_767);
}        param_types_769=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2588, "struct list$1sTypeph")),2,__list_values27___768));
        {__list_values28___770[0]=come_increment_ref_count(((char*)(__right_value927=__builtin_string("left"))));
__list_values28___770[1]=come_increment_ref_count(((char*)(__right_value928=__builtin_string("right"))));
}        param_names_771=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2589, "struct list$1charph")),2,__list_values28___770));
        __right_value927 = come_decrement_ref_count2(__right_value927, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value928 = come_decrement_ref_count2(__right_value928, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_772=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2590, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_772,((void*)0));
        list$1charph_push_back(param_default_parametors_772,((void*)0));
        header_buf_773=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2594, "buffer"))));
        buffer_append_str(header_buf_773,((char*)(__right_value935=make_come_type_name_string(result_type_764,info))));
        __right_value935 = come_decrement_ref_count2(__right_value935, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_773," ");
        buffer_append_str(header_buf_773,real_fun_name_743);
        buffer_append_str(header_buf_773,"(");
        for(        i_774=0;        i_774<list$1sTypeph_length(param_types_769);        i_774++        ){
            param_type_775=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_769,i_774), "05function.c", 2602, 11));
            param_name_776=((char*)come_null_check(list$1charphp_operator_load_element(param_names_771,i_774), "05function.c", 2603, 12));
            buffer_append_str(header_buf_773,((char*)(__right_value936=make_come_type_name_string(param_type_775,info))));
            __right_value936 = come_decrement_ref_count2(__right_value936, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_773," ");
            buffer_append_str(header_buf_773,param_name_776);
            if(i_774!=list$1sTypeph_length(param_types_769)-1) {
                buffer_append_str(header_buf_773,",");
            }
        }
        buffer_append_str(header_buf_773,")");
        result_type_764->mStatic=(_Bool)0;
        fun_777=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2617, "sFun")),(char*)come_increment_ref_count(name_765),(struct sType*)come_increment_ref_count(result_type_764),(struct list$1sTypeph*)come_increment_ref_count(param_types_769),(struct list$1charph*)come_increment_ref_count(param_names_771),(struct list$1charph*)come_increment_ref_count(param_default_parametors_772),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_763),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_773)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_778=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value941=__builtin_string(fun_name))));
        __right_value941 = come_decrement_ref_count2(__right_value941, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_778==((void*)0)||fun2_778->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_765)),(struct sFun*)come_increment_ref_count(fun_777));
        }
        equaler_742=fun_777;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2633, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sFunNode*)(__right_value944=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2633, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_777),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sFunNode_finalize;
        _inf_value12->clone=(void*)sFunNode_clone;
        _inf_value12->compile=(void*)sFunNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sFunNode_kind;
        node_779=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value944,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_779,info)) {
            err_msg(info,"compiling error");
            exit(2);
        }
        __dec_obj312=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_762);
        /* a*/come_call_finalizer3(__dec_obj312,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_758;
        info->head=head_761;
        info->sline=sline_759;
        __dec_obj313=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_760);
        __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_746,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_760 = come_decrement_ref_count2(sname_760, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_762,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_763,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_764,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_765 = come_decrement_ref_count2(name_765, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_766,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(right_type_767,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_769,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_771,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_772,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_773,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_777,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_779) { node_779 = come_decrement_ref_count2(node_779, ((struct sNode*)node_779)->finalize, ((struct sNode*)node_779)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_741;
    __dec_obj314=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_738);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj315=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_739);
    __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj316=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_740);
    __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result247__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value950=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2653, "struct tuple2$2sFunpcharph")),equaler_742,(char*)come_increment_ref_count(real_fun_name_743))));
    last_code_738 = come_decrement_ref_count2(last_code_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_739 = come_decrement_ref_count2(last_code2_739, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_740 = come_decrement_ref_count2(last_code3_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_743 = come_decrement_ref_count2(real_fun_name_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_744,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value950,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_781;
char* __dec_obj317;
char* last_code2_782;
char* __dec_obj318;
char* last_code3_783;
char* __dec_obj319;
struct sClass* current_stack_frame_struct_784;
struct sFun* equaler_785;
void* __right_value951 = (void*)0;
char* real_fun_name_786;
void* __right_value952 = (void*)0;
struct sType* type2_787;
struct sClass* klass_788;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct buffer* source_789;
char* name_790;
struct list$1tuple2$2charphsTypephph* o2_saved_792;
struct tuple2$2charphsTypeph* it_793;
struct tuple2$2charphsTypeph* multiple_assign_var14;
char* name_794;
struct sType* field_type_795;
char* p_797;
int sline_798;
char* sname_799;
char* head_800;
struct buffer* source3_801;
struct buffer* __dec_obj320;
void* __right_value955 = (void*)0;
char* __dec_obj321;
void* __right_value956 = (void*)0;
struct sBlock* block_802;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct sType* result_type_803;
void* __right_value959 = (void*)0;
char* name_804;
void* __right_value960 = (void*)0;
struct sType* left_type_805;
void* __right_value961 = (void*)0;
struct sType* right_type_806;
struct sType* __list_values29___807[2];
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct list$1sTypeph* param_types_808;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
char* __list_values30___809[2];
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
struct list$1charph* param_names_810;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct list$1charph* param_default_parametors_811;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct buffer* header_buf_812;
void* __right_value972 = (void*)0;
int i_813;
struct sType* param_type_814;
char* param_name_815;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct sFun* fun_816;
void* __right_value978 = (void*)0;
struct sFun* fun2_817;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value985 = (void*)0;
struct sNode* node_818;
struct buffer* __dec_obj326;
char* __dec_obj327;
char* __dec_obj328;
char* __dec_obj329;
char* __dec_obj330;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct tuple2$2sFunpcharph* __result250__;
    last_code_781=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj317=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_782=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj318=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_783=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj319=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_784=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_785=((void*)0);
    real_fun_name_786=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_787=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_787;
    klass_788=type->mClass;
    if(type->mPointerNum>0&&!klass_788->mNumber) {
        source_789=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2678, "buffer"))));
        buffer_append_char(source_789,123);
        if(klass_788->mProtocol) {
            name_790="_protocol_obj";
            char source2_791[1024];
            memset(&source2_791, 0, sizeof(char)            *(1024)            );
            snprintf(source2_791,1024,"return left.%s.equals(right.%s);\n",name_790,name_790);
            buffer_append_str(source_789,source2_791);
        }
        else {
            klass_788=map$2charphsClassphp_operator_load_element(info->classes,klass_788->mName);
            for(            o2_saved_792=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_788->mFields)),it_793=list$1tuple2$2charphsTypephph_begin((o2_saved_792));            !list$1tuple2$2charphsTypephph_end((o2_saved_792));            it_793=list$1tuple2$2charphsTypephph_next((o2_saved_792))            ){
                multiple_assign_var14=it_793;
                name_794=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_795=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                if(string_operator_equals(type->mClass->mName,field_type_795->mClass->mName)&&type->mPointerNum==field_type_795->mPointerNum&&field_type_795->mHeap) {
                    err_msg(info,"Define recusively the equals. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                char source2_796[1024];
                memset(&source2_796, 0, sizeof(char)                *(1024)                );
                snprintf(source2_796,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_794,name_794);
                buffer_append_str(source_789,source2_796);
                name_794 = come_decrement_ref_count2(name_794, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_795,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_792,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_789,"return true;\n");
        buffer_append_char(source_789,125);
        p_797=info->p;
        sline_798=info->sline;
        sname_799=(char*)come_increment_ref_count(info->sname);
        head_800=info->head;
        source3_801=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj320=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_789);
        /* a*/come_call_finalizer3(__dec_obj320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_789->buf;
        info->head=source_789->buf;
        __dec_obj321=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_786));
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_802=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_803=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2724, "sType")),"bool",(_Bool)0,info));
        name_804=(char*)come_increment_ref_count(string_clone(real_fun_name_786));
        left_type_805=(struct sType*)come_increment_ref_count(sType_clone(type));
        left_type_805->mHeap=(_Bool)0;
        right_type_806=(struct sType*)come_increment_ref_count(sType_clone(type));
        right_type_806->mHeap=(_Bool)0;
        {__list_values29___807[0]=come_increment_ref_count(left_type_805);
__list_values29___807[1]=come_increment_ref_count(right_type_806);
}        param_types_808=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2730, "struct list$1sTypeph")),2,__list_values29___807));
        {__list_values30___809[0]=come_increment_ref_count(((char*)(__right_value964=__builtin_string("left"))));
__list_values30___809[1]=come_increment_ref_count(((char*)(__right_value965=__builtin_string("right"))));
}        param_names_810=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2731, "struct list$1charph")),2,__list_values30___809));
        __right_value964 = come_decrement_ref_count2(__right_value964, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value965 = come_decrement_ref_count2(__right_value965, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_811=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2732, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_811,((void*)0));
        list$1charph_push_back(param_default_parametors_811,((void*)0));
        header_buf_812=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2736, "buffer"))));
        buffer_append_str(header_buf_812,((char*)(__right_value972=make_come_type_name_string(result_type_803,info))));
        __right_value972 = come_decrement_ref_count2(__right_value972, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_812," ");
        buffer_append_str(header_buf_812,real_fun_name_786);
        buffer_append_str(header_buf_812,"(");
        for(        i_813=0;        i_813<list$1sTypeph_length(param_types_808);        i_813++        ){
            param_type_814=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_808,i_813), "05function.c", 2744, 13));
            param_name_815=((char*)come_null_check(list$1charphp_operator_load_element(param_names_810,i_813), "05function.c", 2745, 14));
            buffer_append_str(header_buf_812,((char*)(__right_value973=make_come_type_name_string(param_type_814,info))));
            __right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_812," ");
            buffer_append_str(header_buf_812,param_name_815);
            if(i_813!=list$1sTypeph_length(param_types_808)-1) {
                buffer_append_str(header_buf_812,",");
            }
        }
        buffer_append_str(header_buf_812,")");
        result_type_803->mStatic=(_Bool)0;
        fun_816=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2759, "sFun")),(char*)come_increment_ref_count(name_804),(struct sType*)come_increment_ref_count(result_type_803),(struct list$1sTypeph*)come_increment_ref_count(param_types_808),(struct list$1charph*)come_increment_ref_count(param_names_810),(struct list$1charph*)come_increment_ref_count(param_default_parametors_811),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_802),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_812)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun2_817=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value978=__builtin_string(fun_name))));
        __right_value978 = come_decrement_ref_count2(__right_value978, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_817==((void*)0)||fun2_817->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_804)),(struct sFun*)come_increment_ref_count(fun_816));
        }
        equaler_785=fun_816;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2775, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sFunNode*)(__right_value981=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2775, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_816),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sFunNode_finalize;
        _inf_value13->clone=(void*)sFunNode_clone;
        _inf_value13->compile=(void*)sFunNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sFunNode_kind;
        node_818=(struct sNode*)come_increment_ref_count(_inf_value13);
        /*g*/come_call_finalizer3(__right_value981,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_818,info)) {
            err_msg(info,"compiling error(X)");
            exit(2);
        }
        __dec_obj326=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_801);
        /* a*/come_call_finalizer3(__dec_obj326,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_797;
        info->head=head_800;
        info->sline=sline_798;
        __dec_obj327=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_799);
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        /*i*/come_call_finalizer3(source_789,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    info->current_stack_frame_struct=current_stack_frame_struct_784;
    __dec_obj328=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_781);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj329=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_782);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj330=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_783);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value987=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2795, "struct tuple2$2sFunpcharph")),equaler_785,(char*)come_increment_ref_count(real_fun_name_786))));
    last_code_781 = come_decrement_ref_count2(last_code_781, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_782 = come_decrement_ref_count2(last_code2_782, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_783 = come_decrement_ref_count2(last_code3_783, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_786 = come_decrement_ref_count2(real_fun_name_786, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_787,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value987,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_820;
char* __dec_obj331;
char* last_code2_821;
char* __dec_obj332;
char* last_code3_822;
char* __dec_obj333;
struct sClass* current_stack_frame_struct_823;
struct sFun* cloner_824;
void* __right_value988 = (void*)0;
char* real_fun_name_825;
void* __right_value989 = (void*)0;
struct sType* type2_826;
struct sClass* klass_827;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
struct buffer* source_828;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
char* name_829;
struct list$1tuple2$2charphsTypephph* o2_saved_831;
struct tuple2$2charphsTypeph* it_832;
struct tuple2$2charphsTypeph* multiple_assign_var15;
char* name_833;
struct sType* field_type_834;
struct list$1tuple2$2charphsTypephph* o2_saved_837;
struct tuple2$2charphsTypeph* it_838;
struct tuple2$2charphsTypeph* multiple_assign_var16;
char* name_839;
struct sType* field_type_840;
void* __right_value994 = (void*)0;
char* p_844;
int sline_845;
char* sname_846;
struct buffer* source3_847;
char* head_848;
struct buffer* __dec_obj334;
void* __right_value995 = (void*)0;
char* __dec_obj335;
void* __right_value996 = (void*)0;
struct sBlock* block_849;
void* __right_value997 = (void*)0;
struct sType* result_type_850;
void* __right_value998 = (void*)0;
char* name_851;
void* __right_value999 = (void*)0;
struct sType* self_type_852;
struct sType* __list_values31___853[1];
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct list$1sTypeph* param_types_854;
void* __right_value1002 = (void*)0;
char* __list_values32___855[1];
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
struct list$1charph* param_names_856;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
struct list$1charph* param_default_parametors_857;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct buffer* header_buf_858;
void* __right_value1009 = (void*)0;
int i_859;
struct sType* param_type_860;
char* param_name_861;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
struct sFun* fun_862;
void* __right_value1015 = (void*)0;
struct sFun* fun2_863;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1022 = (void*)0;
struct sNode* node_864;
char* __dec_obj340;
struct buffer* __dec_obj341;
char* __dec_obj342;
char* __dec_obj343;
char* __dec_obj344;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct tuple2$2sFunpcharph* __result253__;
    last_code_820=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj331=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_821=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj332=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code3_822=(char*)come_increment_ref_count(info->module->mLastCode3);
    __dec_obj333=info->module->mLastCode3;
    info->module->mLastCode3=((void*)0);
    __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
    current_stack_frame_struct_823=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_824=((void*)0);
    real_fun_name_825=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_826=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_826;
    klass_827=type->mClass;
    if(type->mPointerNum>0&&!klass_827->mNumber) {
        source_828=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2820, "buffer"))));
        buffer_append_str(source_828,"{\n");
        buffer_append_str(source_828,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_str(source_828,((char*)(__right_value993=xsprintf("var result = new %s;\n",((char*)(__right_value992=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0)))))));
        __right_value992 = come_decrement_ref_count2(__right_value992, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value993 = come_decrement_ref_count2(__right_value993, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(klass_827->mProtocol) {
            name_829="_protocol_obj";
            char source2_830[1024];
            memset(&source2_830, 0, sizeof(char)            *(1024)            );
            snprintf(source2_830,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_828,source2_830);
            klass_827=map$2charphsClassphp_operator_load_element(info->classes,klass_827->mName);
            for(            o2_saved_831=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_827->mFields)),it_832=list$1tuple2$2charphsTypephph_begin((o2_saved_831));            !list$1tuple2$2charphsTypephph_end((o2_saved_831));            it_832=list$1tuple2$2charphsTypephph_next((o2_saved_831))            ){
                multiple_assign_var15=it_832;
                name_833=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_834=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                if(string_operator_equals(type->mClass->mName,field_type_834->mClass->mName)&&type->mPointerNum==field_type_834->mPointerNum&&field_type_834->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(string_operator_equals(name_833,"_protocol_obj")) {
                }
                else {
                    if(list$1sNodeph_length(field_type_834->mArrayNum)>0) {
                        char source2_835[1024];
                        memset(&source2_835, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_835,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_833,name_833,name_833);
                        buffer_append_str(source_828,source2_835);
                    }
                    else {
                        char source2_836[1024];
                        memset(&source2_836, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_836,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_833,name_833);
                        buffer_append_str(source_828,source2_836);
                    }
                }
                name_833 = come_decrement_ref_count2(name_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_834,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_831,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_827=map$2charphsClassphp_operator_load_element(info->classes,klass_827->mName);
            for(            o2_saved_837=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_827->mFields)),it_838=list$1tuple2$2charphsTypephph_begin((o2_saved_837));            !list$1tuple2$2charphsTypephph_end((o2_saved_837));            it_838=list$1tuple2$2charphsTypephph_next((o2_saved_837))            ){
                multiple_assign_var16=it_838;
                name_839=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_840=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                if(string_operator_equals(type->mClass->mName,field_type_840->mClass->mName)&&type->mPointerNum==field_type_840->mPointerNum&&field_type_840->mHeap) {
                    err_msg(info,"Define recusively the cloner. I recommanded tuple1<%s>*%.\n",type->mClass->mName);
                    exit(2);
                }
                if(field_type_840->mHeap) {
                    char source2_841[1024];
                    memset(&source2_841, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_841,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_839,name_839,name_839);
                    buffer_append_str(source_828,source2_841);
                }
                else {
                    if(list$1sNodeph_length(field_type_840->mArrayNum)>0) {
                        char source2_842[1024];
                        memset(&source2_842, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_842,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_839,name_839,name_839);
                        buffer_append_str(source_828,source2_842);
                    }
                    else {
                        char source2_843[1024];
                        memset(&source2_843, 0, sizeof(char)                        *(1024)                        );
                        snprintf(source2_843,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_839,name_839);
                        buffer_append_str(source_828,source2_843);
                    }
                }
                name_839 = come_decrement_ref_count2(name_839, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_840,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_837,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_828,((char*)(__right_value994=xsprintf("return result;"))));
        __right_value994 = come_decrement_ref_count2(__right_value994, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_char(source_828,125);
        p_844=info->p;
        sline_845=info->sline;
        sname_846=(char*)come_increment_ref_count(info->sname);
        source3_847=(struct buffer*)come_increment_ref_count(info->source);
        head_848=info->head;
        __dec_obj334=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_828);
        /* a*/come_call_finalizer3(__dec_obj334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj335=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_825));
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_849=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_850=(struct sType*)come_increment_ref_count(sType_clone(type));
        name_851=(char*)come_increment_ref_count(string_clone(real_fun_name_825));
        self_type_852=(struct sType*)come_increment_ref_count(sType_clone(type));
        self_type_852->mHeap=(_Bool)0;
        {__list_values31___853[0]=come_increment_ref_count(self_type_852);
}        param_types_854=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2914, "struct list$1sTypeph")),1,__list_values31___853));
        {__list_values32___855[0]=come_increment_ref_count(((char*)(__right_value1002=__builtin_string("self"))));
}        param_names_856=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2915, "struct list$1charph")),1,__list_values32___855));
        __right_value1002 = come_decrement_ref_count2(__right_value1002, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_857=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2916, "list$1charph"))));
        list$1charph_push_back(param_default_parametors_857,((void*)0));
        header_buf_858=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2919, "buffer"))));
        buffer_append_str(header_buf_858,((char*)(__right_value1009=make_come_type_name_string(result_type_850,info))));
        __right_value1009 = come_decrement_ref_count2(__right_value1009, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_858," ");
        buffer_append_str(header_buf_858,real_fun_name_825);
        buffer_append_str(header_buf_858,"(");
        for(        i_859=0;        i_859<list$1sTypeph_length(param_types_854);        i_859++        ){
            param_type_860=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(param_types_854,i_859), "05function.c", 2927, 15));
            param_name_861=((char*)come_null_check(list$1charphp_operator_load_element(param_names_856,i_859), "05function.c", 2928, 16));
            buffer_append_str(header_buf_858,((char*)(__right_value1010=make_come_type_name_string(param_type_860,info))));
            __right_value1010 = come_decrement_ref_count2(__right_value1010, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_858," ");
            buffer_append_str(header_buf_858,param_name_861);
            if(i_859!=list$1sTypeph_length(param_types_854)-1) {
                buffer_append_str(header_buf_858,",");
            }
        }
        buffer_append_str(header_buf_858,")");
        result_type_850->mStatic=(_Bool)0;
        fun_862=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2942, "sFun")),(char*)come_increment_ref_count(name_851),(struct sType*)come_increment_ref_count(result_type_850),(struct list$1sTypeph*)come_increment_ref_count(param_types_854),(struct list$1charph*)come_increment_ref_count(param_names_856),(struct list$1charph*)come_increment_ref_count(param_default_parametors_857),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_849),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_858)),(char*)come_increment_ref_count(__builtin_string("")),info));
        fun_862->mCloner=(_Bool)1;
        fun2_863=map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1015=__builtin_string(fun_name))));
        __right_value1015 = come_decrement_ref_count2(__right_value1015, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(fun2_863==((void*)0)||fun2_863->mExternal) {
            map$2charphsFunph_insert(info->funcs,(char*)come_increment_ref_count(string_clone(name_851)),(struct sFun*)come_increment_ref_count(fun_862));
        }
        cloner_824=fun_862;
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2959, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sFunNode*)(__right_value1018=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2959, "sFunNode")),(struct sFun*)come_increment_ref_count(fun_862),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sFunNode_finalize;
        _inf_value14->clone=(void*)sFunNode_clone;
        _inf_value14->compile=(void*)sFunNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sFunNode_kind;
        node_864=(struct sNode*)come_increment_ref_count(_inf_value14);
        /*g*/come_call_finalizer3(__right_value1018,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(!node_compile(node_864,info)) {
            err_msg(info,"compiling error(Y)");
            exit(2);
        }
        __dec_obj340=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_846);
        __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_845;
        __dec_obj341=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_847);
        /* a*/come_call_finalizer3(__dec_obj341,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_844;
        info->head=head_848;
        info->sline=sline_845;
        /*i*/come_call_finalizer3(source_828,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_846 = come_decrement_ref_count2(sname_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(source3_847,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(block_849,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_850,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_851 = come_decrement_ref_count2(name_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(self_type_852,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_types_854,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_names_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(param_default_parametors_857,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(header_buf_858,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(fun_862,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_864) { node_864 = come_decrement_ref_count2(node_864, ((struct sNode*)node_864)->finalize, ((struct sNode*)node_864)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->current_stack_frame_struct=current_stack_frame_struct_823;
    __dec_obj342=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_820);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj343=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_821);
    __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj344=info->module->mLastCode3;
    info->module->mLastCode3=(char*)come_increment_ref_count(last_code3_822);
    __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result253__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1024=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 2981, "struct tuple2$2sFunpcharph")),cloner_824,(char*)come_increment_ref_count(real_fun_name_825))));
    last_code_820 = come_decrement_ref_count2(last_code_820, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_821 = come_decrement_ref_count2(last_code2_821, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code3_822 = come_decrement_ref_count2(last_code3_822, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_825 = come_decrement_ref_count2(real_fun_name_825, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_826,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value1024,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj336;
struct sFun* __dec_obj337;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj336=self->sname;
            __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(self->mFun==gComeFunResultObject) {
            __dec_obj337=self->mFun;
            /* a*/come_call_finalizer3(__dec_obj337,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result251__;
void* __right_value1019 = (void*)0;
struct sFunNode* result_865;
void* __right_value1020 = (void*)0;
char* __dec_obj338;
void* __right_value1021 = (void*)0;
struct sFun* __dec_obj339;
struct sFunNode* __result252__;
    if(self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_865=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "sFunNode"));
    if(self!=((void*)0)) {
        result_865->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj338=result_865->sname;
        result_865->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj339=result_865->mFun;
        result_865->mFun=(struct sFun*)come_increment_ref_count(sFun_clone(self->mFun));
        /* a*/come_call_finalizer3(__dec_obj339,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_865;
    /*i*/come_call_finalizer3(result_865,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

