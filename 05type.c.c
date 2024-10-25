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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};
struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
char* skip_block(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
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
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
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










_Bool is_type_name(char* buf, struct sInfo* info){
struct sClass* klass_64;
struct sType* type_84;
struct sClass* generics_class_88;
void* __right_value116 = (void*)0;
_Bool generics_type_name_89;
void* __right_value117 = (void*)0;
_Bool mgenerics_type_name_95;
    klass_64=map$2charphsClassphp_operator_load_element(info->classes,buf);
    type_84=map$2charphsTypephp_operator_load_element(info->types,buf);
    generics_class_88=map$2charphsClassphp_operator_load_element(info->generics_classes,buf);
    generics_type_name_89=list$1charph_contained(info->generics_type_names,((char*)(__right_value116=__builtin_string(buf))));
    __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_95=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value117=__builtin_string(buf))));
    __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(gComeC) {
        return (type_84&&type_84->mTypedef)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||(klass_64&&klass_64->mNumber)||(klass_64&&klass_64->mFloat)||charp_operator_equals(buf,"void")||charp_operator_equals(buf,"_Nullable");
    }
    else {
        return generics_class_88||generics_type_name_89||mgenerics_type_name_95||klass_64||type_84||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"uniq")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"record")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"immutable")||charp_operator_equals(buf,"mutable")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"exception");
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_65;
unsigned int hash_66;
unsigned int it_67;
struct sClass* __result65__;
struct sClass* __result66__;
struct sClass* __result67__;
struct sClass* __result68__;
default_value_65 = (void*)0;
    memset(&default_value_65,0,sizeof(struct sClass*));
    hash_66=string_get_hash_key(((char*)key))%self->size;
    it_67=hash_66;
    while((_Bool)1) {
        if(self->item_existance[it_67]) {
            if(string_equals(self->keys[it_67],key)) {
                __result65__ = gComeFunResultObject = __result_obj__ = self->items[it_67];
                /*i*/come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result65__;
            }
            it_67++;
            if(it_67>=self->size) {
                it_67=0;
            }
            else {
                if(it_67==hash_66) {
                    __result66__ = gComeFunResultObject = __result_obj__ = default_value_65;
                    /*i*/come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result66__;
                }
            }
        }
        else {
            __result67__ = gComeFunResultObject = __result_obj__ = default_value_65;
            /*i*/come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result67__;
        }
    }
    __result68__ = gComeFunResultObject = __result_obj__ = default_value_65;
    /*i*/come_call_finalizer3(default_value_65,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj15;
struct list$1tuple2$2charphsTypephph* __dec_obj16;
char* __dec_obj40;
char* __dec_obj41;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj15=self->mName;
            __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj16=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj16,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj40=self->mDeclareSName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj41=self->mParentClassName;
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_68;
struct list_item$1tuple2$2charphsTypephph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        /*i*/come_call_finalizer3(prev_it_69,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj17;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj17=self->item;
            /* a*/come_call_finalizer3(__dec_obj17,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj18;
struct sType* __dec_obj19;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj18=self->v1;
            __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj19=self->v2;
            /* a*/come_call_finalizer3(__dec_obj19,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
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

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_82;
struct list_item$1tuple2$2charphsTypephph* prev_it_83;
    it_82=self->head;
    while(it_82!=((void*)0)) {
        prev_it_83=it_82;
        it_82=it_82->next;
        /*i*/come_call_finalizer3(prev_it_83,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_85;
unsigned int hash_86;
unsigned int it_87;
struct sType* __result69__;
struct sType* __result70__;
struct sType* __result71__;
struct sType* __result72__;
default_value_85 = (void*)0;
    memset(&default_value_85,0,sizeof(struct sType*));
    hash_86=string_get_hash_key(((char*)key))%self->size;
    it_87=hash_86;
    while((_Bool)1) {
        if(self->item_existance[it_87]) {
            if(string_equals(self->keys[it_87],key)) {
                __result69__ = gComeFunResultObject = __result_obj__ = self->items[it_87];
                /*i*/come_call_finalizer3(default_value_85,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result69__;
            }
            it_87++;
            if(it_87>=self->size) {
                it_87=0;
            }
            else {
                if(it_87==hash_86) {
                    __result70__ = gComeFunResultObject = __result_obj__ = default_value_85;
                    /*i*/come_call_finalizer3(default_value_85,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result70__;
                }
            }
        }
        else {
            __result71__ = gComeFunResultObject = __result_obj__ = default_value_85;
            /*i*/come_call_finalizer3(default_value_85,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result71__;
        }
    }
    __result72__ = gComeFunResultObject = __result_obj__ = default_value_85;
    /*i*/come_call_finalizer3(default_value_85,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_92;
    for(    it_92=list$1charph_begin(self);    !list$1charph_end(self);    it_92=list$1charph_next(self)    ){
        if(string_operator_equals(it_92,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_90;
char* __result73__;
char* __result74__;
char* result_91;
char* __result75__;
result_90 = (void*)0;
result_91 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_90,0,sizeof(char*));
        __result73__ = gComeFunResultObject = __result_obj__ = result_90;
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    self->it=self->head;
    if(self->it) {
        __result74__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    memset(&result_91,0,sizeof(char*));
    __result75__ = gComeFunResultObject = __result_obj__ = result_91;
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_93;
char* __result76__;
char* __result77__;
char* result_94;
char* __result78__;
result_93 = (void*)0;
result_94 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_93,0,sizeof(char*));
        __result76__ = gComeFunResultObject = __result_obj__ = result_93;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result77__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    memset(&result_94,0,sizeof(char*));
    __result78__ = gComeFunResultObject = __result_obj__ = result_94;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

void skip_paren(struct sInfo* info){
int nest_96;
    nest_96=0;
    while((_Bool)1) {
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_96++;
        }
        else {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                nest_96--;
                if(nest_96==0) {
                    break;
                }
            }
            else {
                info->p++;
            }
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_97;
void* __right_value118 = (void*)0;
void* __right_value119 = (void*)0;
struct buffer* fname_98;
void* __right_value120 = (void*)0;
char* __dec_obj42;
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
    while(*info->p==35) {
        skip_spaces_and_lf(info);
        info->p++;
        skip_spaces_and_lf(info);
        if(strmemcmp(info->p,"pragma")) {
            while(*info->p) {
                if(*info->p==10) {
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else {
            if(xisdigit(*info->p)) {
                line_97=0;
                fname_98=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 74, "buffer"))));
                while(xisdigit(*info->p)) {
                    line_97=line_97*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf(info);
                if(*info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_98,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_97;
                __dec_obj42=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_98));
                __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf(info);
                /*i*/come_call_finalizer3(fname_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(*info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
    }
    while(strmemcmp(info->p,"__attribute__")) {
        info->p+=strlen("__attribute__");
        skip_spaces_and_lf(info);
        skip_paren(info);
    }
    while(strmemcmp(info->p,"__extension__")) {
        info->p+=strlen("__extension__");
        skip_spaces_and_lf(info);
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_99;
    c_99=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_99==59||c_99==32||c_99==9||c_99==10||c_99==10);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value121 = (void*)0;
void* __right_value122 = (void*)0;
struct buffer* buf_100;
void* __right_value123 = (void*)0;
_Bool _if_conditional1;
void* __right_value124 = (void*)0;
char* __result79__;
void* __right_value125 = (void*)0;
char* result_101;
void* __right_value126 = (void*)0;
char* __result84__;
char* __result85__;
    buf_100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 136, "buffer"))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_100,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if((_if_conditional1=(string_length(((char*)(__right_value123=buffer_to_string(buf_100))))==0)),    (__right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c). expected word character",*info->p);
        __result79__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value124=__builtin_string("")));
        /*i*/come_call_finalizer3(buf_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value124 = come_decrement_ref_count2(__right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_101=(char*)come_increment_ref_count(buffer_to_string(buf_100));
    if(info->module_params&&map$2charphcharphp_operator_load_element(info->module_params,result_101)) {
        __result84__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value126=__builtin_string(((char*)come_null_check(map$2charphcharphp_operator_load_element(info->module_params,result_101), "05type.c", 154, 0)))));
        /*i*/come_call_finalizer3(buf_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_101 = come_decrement_ref_count2(result_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    __result85__ = gComeFunResultObject = __result_obj__ = result_101;
    /*i*/come_call_finalizer3(buf_100,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_101 = come_decrement_ref_count2(result_101, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_102;
unsigned int hash_103;
unsigned int it_104;
char* __result80__;
char* __result81__;
char* __result82__;
char* __result83__;
default_value_102 = (void*)0;
    memset(&default_value_102,0,sizeof(char*));
    hash_103=string_get_hash_key(((char*)key))%self->size;
    it_104=hash_103;
    while((_Bool)1) {
        if(self->item_existance[it_104]) {
            if(string_equals(self->keys[it_104],key)) {
                __result80__ = gComeFunResultObject = __result_obj__ = self->items[it_104];
                default_value_102 = come_decrement_ref_count2(default_value_102, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result80__;
            }
            it_104++;
            if(it_104>=self->size) {
                it_104=0;
            }
            else {
                if(it_104==hash_103) {
                    __result81__ = gComeFunResultObject = __result_obj__ = default_value_102;
                    default_value_102 = come_decrement_ref_count2(default_value_102, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result81__;
                }
            }
        }
        else {
            __result82__ = gComeFunResultObject = __result_obj__ = default_value_102;
            default_value_102 = come_decrement_ref_count2(default_value_102, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result82__;
        }
    }
    __result83__ = gComeFunResultObject = __result_obj__ = default_value_102;
    default_value_102 = come_decrement_ref_count2(default_value_102, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_105;
int sline_106;
char* buf_107;
void* __right_value127 = (void*)0;
char* __dec_obj43;
void* __right_value128 = (void*)0;
char* __dec_obj44;
char* __result86__;
buf_107 = (void*)0;
    p_105=info->p;
    sline_106=info->sline;
    if(xisalpha(*info->p)||*info->p==95) {
        __dec_obj43=buf_107;
        buf_107=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj44=buf_107;
        buf_107=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_105;
    info->sline=sline_106;
    __result86__ = gComeFunResultObject = __result_obj__ = buf_107;
    buf_107 = come_decrement_ref_count2(buf_107, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(*info->p==32||*info->p==9) {
            info->p++;
        }
        else {
            if(*info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                break;
            }
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1sTypeph* o2_saved_108;
struct sType* it_111;
_Bool __result93__;
    for(    o2_saved_108=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_111=list$1sTypeph_begin((o2_saved_108));    !list$1sTypeph_end((o2_saved_108));    it_111=list$1sTypeph_next((o2_saved_108))    ){
        if(is_contained_generics_class(it_111,info)) {
            __result93__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_108,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result93__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_108,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_109;
struct sType* __result87__;
struct sType* __result88__;
struct sType* result_110;
struct sType* __result89__;
result_109 = (void*)0;
result_110 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_109,0,sizeof(struct sType*));
        __result87__ = gComeFunResultObject = __result_obj__ = result_109;
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    self->it=self->head;
    if(self->it) {
        __result88__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    memset(&result_110,0,sizeof(struct sType*));
    __result89__ = gComeFunResultObject = __result_obj__ = result_110;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_112;
struct sType* __result90__;
struct sType* __result91__;
struct sType* result_113;
struct sType* __result92__;
result_112 = (void*)0;
result_113 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_112,0,sizeof(struct sType*));
        __result90__ = gComeFunResultObject = __result_obj__ = result_112;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result91__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    memset(&result_113,0,sizeof(struct sType*));
    __result92__ = gComeFunResultObject = __result_obj__ = result_113;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value129 = (void*)0;
void* __right_value130 = (void*)0;
struct list$1sTypeph* param_types_114;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1charph* param_names_115;
void* __right_value133 = (void*)0;
void* __right_value134 = (void*)0;
struct list$1charph* param_default_parametors_116;
_Bool var_args_117;
void* __right_value138 = (void*)0;
void* __right_value171 = (void*)0;
struct sType* type__121;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
_Bool void_param_137;
char* p_138;
int sline_139;
void* __right_value174 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1;
struct sType* param_type_140;
char* param_name_141;
_Bool err_142;
void* __right_value175 = (void*)0;
void* __right_value176 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result113__;
void* __right_value177 = (void*)0;
struct sType* param_type2_143;
void* __right_value181 = (void*)0;
void* __right_value185 = (void*)0;
char* p_150;
_Bool no_comma_151;
void* __right_value186 = (void*)0;
struct sNode* node_152;
char* p2_153;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result117__;
    param_types_114=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 215, "list$1sTypeph"))));
    param_names_115=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 216, "list$1charph"))));
    param_default_parametors_116=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 217, "list$1charph"))));
    var_args_117=(_Bool)0;
    if(in_constructor_) {
        list$1charph_add(param_names_115,(char*)come_increment_ref_count(xsprintf("self")));
        type__121=(struct sType*)come_increment_ref_count(sType_clone(info->impl_type));
        type__121->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_114,(struct sType*)come_increment_ref_count(type__121));
        list$1charph_add(param_default_parametors_116,((void*)0));
        /*i*/come_call_finalizer3(type__121,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(info->in_class) {
            list$1charph_add(param_names_115,(char*)come_increment_ref_count(xsprintf("self")));
            list$1sTypeph_add(param_types_114,(struct sType*)come_increment_ref_count(sType_clone(info->impl_type)));
            list$1charph_add(param_default_parametors_116,((void*)0));
        }
    }
    expected_next_character(40,info);
    void_param_137=(_Bool)0;
    {
        p_138=info->p;
        sline_139=info->sline;
        if(strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                void_param_137=(_Bool)1;
            }
        }
        info->p=p_138;
        info->sline=sline_139;
    }
    if(void_param_137) {
        if(strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value174=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_140=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_141=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_142=multiple_assign_var1->v3;
            /*g*/come_call_finalizer3(__right_value174,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_142) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result113__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value176=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 279, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool")),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                /*i*/come_call_finalizer3(param_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_141 = come_decrement_ref_count2(param_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_114,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_115,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_116,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value176,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result113__;
            }
            param_type2_143=(struct sType*)come_increment_ref_count(solve_generics(param_type_140,info->generics_type,info));
            param_type2_143->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_114,(struct sType*)come_increment_ref_count(sType_clone(param_type2_143)));
            list$1charph_push_back(param_names_115,(char*)come_increment_ref_count(string_clone(param_name_141)));
            if(*info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_150=info->p;
                no_comma_151=info->no_comma;
                info->no_comma=(_Bool)1;
                node_152=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_151;
                p2_153=info->p;
                char buf_154[p2_153-p_150+1];
                memset(&buf_154, 0, sizeof(char)                *(p2_153-p_150+1)                );
                memcpy(buf_154,p_150,p2_153-p_150);
                buf_154[p2_153-p_150]=0;
                list$1charph_push_back(param_default_parametors_116,(char*)come_increment_ref_count(__builtin_string(buf_154)));
                if(node_152) { node_152 = come_decrement_ref_count2(node_152, ((struct sNode*)node_152)->finalize, ((struct sNode*)node_152)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_116,((void*)0));
            }
            parse_sharp_v5(info);
            if(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_117=(_Bool)1;
                    expected_next_character(41,info);
                    /*i*/come_call_finalizer3(param_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_141 = come_decrement_ref_count2(param_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_type2_143,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else {
                if(*info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /*i*/come_call_finalizer3(param_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_141 = come_decrement_ref_count2(param_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(param_type2_143,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            /*i*/come_call_finalizer3(param_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_141 = come_decrement_ref_count2(param_name_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_type2_143,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value189=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 339, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool")),(struct list$1sTypeph*)come_increment_ref_count(param_types_114),(struct list$1charph*)come_increment_ref_count(param_names_115),(struct list$1charph*)come_increment_ref_count(param_default_parametors_116),var_args_117)));
    /*i*/come_call_finalizer3(param_types_114,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_names_115,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(param_default_parametors_116,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value189,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result95__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value135 = (void*)0;
struct list_item$1charph* litem_118;
char* __dec_obj45;
void* __right_value136 = (void*)0;
struct list_item$1charph* litem_119;
char* __dec_obj46;
void* __right_value137 = (void*)0;
struct list_item$1charph* litem_120;
char* __dec_obj47;
struct list$1charph* __result96__;
    if(self->len==0) {
        litem_118=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value135=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 151, "list_item$1charph"))));
        litem_118->prev=((void*)0);
        litem_118->next=((void*)0);
        __dec_obj45=litem_118->item;
        litem_118->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_118;
        self->head=litem_118;
    }
    else {
        if(self->len==1) {
            litem_119=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value136=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 161, "list_item$1charph"))));
            litem_119->prev=self->head;
            litem_119->next=((void*)0);
            __dec_obj46=litem_119->item;
            litem_119->item=(char*)come_increment_ref_count(item);
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_119;
            self->head->next=litem_119;
        }
        else {
            litem_120=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value137=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 171, "list_item$1charph"))));
            litem_120->prev=self->tail;
            litem_120->next=((void*)0);
            __dec_obj47=litem_120->item;
            litem_120->item=(char*)come_increment_ref_count(item);
            __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_120;
            self->tail=litem_120;
        }
    }
    self->len++;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result97__;
void* __right_value139 = (void*)0;
struct sType* result_122;
void* __right_value142 = (void*)0;
struct tuple1$1sTypeph* __dec_obj50;
void* __right_value143 = (void*)0;
struct tuple1$1sTypeph* __dec_obj51;
void* __right_value144 = (void*)0;
struct tuple1$1sTypeph* __dec_obj52;
void* __right_value145 = (void*)0;
char* __dec_obj53;
void* __right_value152 = (void*)0;
struct list$1sTypeph* __dec_obj57;
void* __right_value160 = (void*)0;
struct list$1sNodeph* __dec_obj61;
void* __right_value161 = (void*)0;
struct list$1sTypeph* __dec_obj62;
void* __right_value165 = (void*)0;
struct list$1charph* __dec_obj63;
void* __right_value166 = (void*)0;
struct tuple1$1sTypeph* __dec_obj64;
void* __right_value167 = (void*)0;
struct sNode* __dec_obj65;
void* __right_value168 = (void*)0;
struct sNode* __dec_obj66;
void* __right_value169 = (void*)0;
char* __dec_obj67;
void* __right_value170 = (void*)0;
char* __dec_obj68;
struct sType* __result111__;
    if(self==(void*)0) {
        __result97__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    result_122=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_122->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj50=result_122->mNoSolvedGenericsType;
        result_122->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj50,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj51=result_122->mOriginalLoadVarType;
        result_122->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj51,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj52=result_122->mNoExceptionType;
        result_122->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj52,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj53=result_122->mGenericsName;
        result_122->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj57=result_122->mGenericsTypes;
        result_122->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj57,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj61=result_122->mArrayNum;
        result_122->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj61,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_122->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj62=result_122->mParamTypes;
        result_122->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj63=result_122->mParamNames;
        result_122->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj63,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj64=result_122->mResultType;
        result_122->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj64,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_122->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj65=result_122->mAlignas;
        result_122->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_122->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_122->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_122->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_122->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_122->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_122->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_122->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_122->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_122->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_122->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_122->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_122->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_122->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_122->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_122->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_122->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_122->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_122->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_122->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_122->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_122->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_122->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_122->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_122->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_122->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_122->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_122->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj66=result_122->mSizeNum;
        result_122->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_122->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_122->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_122->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj67=result_122->mOriginalTypeName;
        result_122->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_122->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_122->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_122->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_122->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_122->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_122->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_122->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_122->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_122->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj68=result_122->mAsmName;
        result_122->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_122->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_122->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_122->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_122->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_122->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_122->mOriginIsArray=self->mOriginIsArray;
    }
    __result111__ = gComeFunResultObject = __result_obj__ = result_122;
    /*i*/come_call_finalizer3(result_122,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result98__;
void* __right_value140 = (void*)0;
struct tuple1$1sTypeph* result_123;
void* __right_value141 = (void*)0;
struct sType* __dec_obj48;
struct tuple1$1sTypeph* __result99__;
    if(self==(void*)0) {
        __result98__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    result_123=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj48=result_123->v1;
        result_123->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result99__ = gComeFunResultObject = __result_obj__ = result_123;
    /*i*/come_call_finalizer3(result_123,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj49;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj49=self->v1;
            /* a*/come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result100__;
void* __right_value146 = (void*)0;
void* __right_value147 = (void*)0;
struct list$1sTypeph* result_124;
struct list_item$1sTypeph* it_125;
void* __right_value151 = (void*)0;
struct list$1sTypeph* __result102__;
    if(self==((void*)0)) {
        __result100__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    result_124=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 137, "list$1sTypeph"))));
    it_125=self->head;
    while(it_125!=((void*)0)) {
        list$1sTypeph_add(result_124,(struct sType*)come_increment_ref_count(sType_clone(it_125->item)));
        it_125=it_125->next;
    }
    __result102__ = gComeFunResultObject = __result_obj__ = result_124;
    /*i*/come_call_finalizer3(result_124,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value148 = (void*)0;
struct list_item$1sTypeph* litem_126;
struct sType* __dec_obj54;
void* __right_value149 = (void*)0;
struct list_item$1sTypeph* litem_127;
struct sType* __dec_obj55;
void* __right_value150 = (void*)0;
struct list_item$1sTypeph* litem_128;
struct sType* __dec_obj56;
struct list$1sTypeph* __result101__;
    if(self->len==0) {
        litem_126=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value148=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 151, "list_item$1sTypeph"))));
        litem_126->prev=((void*)0);
        litem_126->next=((void*)0);
        __dec_obj54=litem_126->item;
        litem_126->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_126;
        self->head=litem_126;
    }
    else {
        if(self->len==1) {
            litem_127=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value149=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 161, "list_item$1sTypeph"))));
            litem_127->prev=self->head;
            litem_127->next=((void*)0);
            __dec_obj55=litem_127->item;
            litem_127->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_127;
            self->head->next=litem_127;
        }
        else {
            litem_128=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value150=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 171, "list_item$1sTypeph"))));
            litem_128->prev=self->tail;
            litem_128->next=((void*)0);
            __dec_obj56=litem_128->item;
            litem_128->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_128;
            self->tail=litem_128;
        }
    }
    self->len++;
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result103__;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct list$1sNodeph* result_129;
struct list_item$1sNodeph* it_130;
void* __right_value159 = (void*)0;
struct list$1sNodeph* __result108__;
    if(self==((void*)0)) {
        __result103__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    result_129=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 137, "list$1sNodeph"))));
    it_130=self->head;
    while(it_130!=((void*)0)) {
        list$1sNodeph_add(result_129,(struct sNode*)come_increment_ref_count(sNode_clone(it_130->item)));
        it_130=it_130->next;
    }
    __result108__ = gComeFunResultObject = __result_obj__ = result_129;
    /*i*/come_call_finalizer3(result_129,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value155 = (void*)0;
struct list_item$1sNodeph* litem_131;
struct sNode* __dec_obj58;
void* __right_value156 = (void*)0;
struct list_item$1sNodeph* litem_132;
struct sNode* __dec_obj59;
void* __right_value157 = (void*)0;
struct list_item$1sNodeph* litem_133;
struct sNode* __dec_obj60;
struct list$1sNodeph* __result105__;
    if(self->len==0) {
        litem_131=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value155=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 151, "list_item$1sNodeph"))));
        litem_131->prev=((void*)0);
        litem_131->next=((void*)0);
        __dec_obj58=litem_131->item;
        litem_131->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_131;
        self->head=litem_131;
    }
    else {
        if(self->len==1) {
            litem_132=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value156=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 161, "list_item$1sNodeph"))));
            litem_132->prev=self->head;
            litem_132->next=((void*)0);
            __dec_obj59=litem_132->item;
            litem_132->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_132;
            self->head->next=litem_132;
        }
        else {
            litem_133=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value157=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 171, "list_item$1sNodeph"))));
            litem_133->prev=self->tail;
            litem_133->next=((void*)0);
            __dec_obj60=litem_133->item;
            litem_133->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_133;
            self->tail=litem_133;
        }
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result106__;
void* __right_value158 = (void*)0;
struct sNode* result_134;
struct sNode* __result107__;
    if(self==(void*)0) {
        __result106__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    result_134=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_134->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_134->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_134->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_134->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_134->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_134->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_134->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_134->kind=self->kind;
    }
    __result107__ = gComeFunResultObject = __result_obj__ = result_134;
    if(result_134) { result_134 = come_decrement_ref_count2(result_134, ((struct sNode*)result_134)->finalize, ((struct sNode*)result_134)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result109__;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
struct list$1charph* result_135;
struct list_item$1charph* it_136;
void* __right_value164 = (void*)0;
struct list$1charph* __result110__;
    if(self==((void*)0)) {
        __result109__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    result_135=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 137, "list$1charph"))));
    it_136=self->head;
    while(it_136!=((void*)0)) {
        list$1charph_add(result_135,(char*)come_increment_ref_count(string_clone(it_136->item)));
        it_136=it_136->next;
    }
    __result110__ = gComeFunResultObject = __result_obj__ = result_135;
    /*i*/come_call_finalizer3(result_135,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj69;
char* __dec_obj70;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj69=self->v1;
            /* a*/come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj70=self->v2;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result112__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj71;
void* __right_value179 = (void*)0;
struct list_item$1sTypeph* litem_145;
struct sType* __dec_obj72;
void* __right_value180 = (void*)0;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj73;
struct list$1sTypeph* __result114__;
    if(self->len==0) {
        litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value178=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 221, "list_item$1sTypeph"))));
        litem_144->prev=((void*)0);
        litem_144->next=((void*)0);
        __dec_obj71=litem_144->item;
        litem_144->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_144;
        self->head=litem_144;
    }
    else {
        if(self->len==1) {
            litem_145=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value179=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 231, "list_item$1sTypeph"))));
            litem_145->prev=self->head;
            litem_145->next=((void*)0);
            __dec_obj72=litem_145->item;
            litem_145->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_145;
            self->head->next=litem_145;
        }
        else {
            litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value180=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 241, "list_item$1sTypeph"))));
            litem_146->prev=self->tail;
            litem_146->next=((void*)0);
            __dec_obj73=litem_146->item;
            litem_146->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_146;
            self->tail=litem_146;
        }
    }
    self->len++;
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
struct list_item$1charph* litem_147;
char* __dec_obj74;
void* __right_value183 = (void*)0;
struct list_item$1charph* litem_148;
char* __dec_obj75;
void* __right_value184 = (void*)0;
struct list_item$1charph* litem_149;
char* __dec_obj76;
struct list$1charph* __result115__;
    if(self->len==0) {
        litem_147=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value182=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        __dec_obj74=litem_147->item;
        litem_147->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_147;
        self->head=litem_147;
    }
    else {
        if(self->len==1) {
            litem_148=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value183=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
            litem_148->prev=self->head;
            litem_148->next=((void*)0);
            __dec_obj75=litem_148->item;
            litem_148->item=(char*)come_increment_ref_count(item);
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_148;
            self->head->next=litem_148;
        }
        else {
            litem_149=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value184=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
            litem_149->prev=self->tail;
            litem_149->next=((void*)0);
            __dec_obj76=litem_149->item;
            litem_149->item=(char*)come_increment_ref_count(item);
            __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_149;
            self->tail=litem_149;
        }
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj77;
struct list$1charph* __dec_obj78;
struct list$1charph* __dec_obj79;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result116__;
    __dec_obj77=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj77,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj78=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj78,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj79=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    /* a*/come_call_finalizer3(__dec_obj79,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj80;
struct list$1charph* __dec_obj81;
struct list$1charph* __dec_obj82;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj80=self->v1;
            /* a*/come_call_finalizer3(__dec_obj80,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj81=self->v2;
            /* a*/come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj82=self->v3;
            /* a*/come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info){
void* __right_value190 = (void*)0;
struct sType* right_type2_155;
struct sType* left_no_solved_generics_type_156;
struct sType* right_no_solved_generics_type_157;
struct sClass* left_class_158;
struct sClass* right_class_159;
_Bool parent_class_160;
_Bool __result118__;
int i_161;
void* __right_value191 = (void*)0;
char* __dec_obj83;
void* __right_value192 = (void*)0;
struct sType* __dec_obj84;
void* __right_value193 = (void*)0;
struct sType* __dec_obj85;
_Bool __result121__;
_Bool __result122__;
_Bool __result123__;
_Bool __result124__;
_Bool __result125__;
void* __right_value194 = (void*)0;
void* __right_value195 = (void*)0;
struct buffer* buf2_165;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
void* __right_value198 = (void*)0;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
char* __dec_obj86;
void* __right_value202 = (void*)0;
struct sType* __dec_obj87;
void* __right_value203 = (void*)0;
struct sType* __dec_obj88;
_Bool __result126__;
_Bool __result127__;
_Bool __result128__;
void* __right_value204 = (void*)0;
char* method_name_166;
struct sType* obj_type_169;
struct sType* obj_type2_170;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
char* __dec_obj104;
_Bool __result133__;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
struct buffer* buf2_171;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
struct sType* type_172;
void* __right_value211 = (void*)0;
char* __dec_obj105;
void* __right_value212 = (void*)0;
struct sType* __dec_obj106;
void* __right_value213 = (void*)0;
struct sType* __dec_obj107;
void* __right_value214 = (void*)0;
char* method_name_173;
struct sType* obj_type_174;
struct sType* obj_type2_175;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
char* __dec_obj108;
_Bool __result134__;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct buffer* buf2_176;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
struct sType* type_177;
void* __right_value221 = (void*)0;
char* __dec_obj109;
void* __right_value222 = (void*)0;
struct sType* __dec_obj110;
void* __right_value223 = (void*)0;
struct sType* __dec_obj111;
_Bool __result135__;
_Bool __result136__;
_Bool __result137__;
_Bool __result138__;
void* __right_value224 = (void*)0;
char* tmp_178;
void* __right_value225 = (void*)0;
char* __dec_obj112;
void* __right_value226 = (void*)0;
struct sType* __dec_obj113;
void* __right_value227 = (void*)0;
struct sType* __dec_obj114;
_Bool __result139__;
_Bool __result140__;
void* __right_value228 = (void*)0;
char* tmp_179;
void* __right_value229 = (void*)0;
char* __dec_obj115;
void* __right_value230 = (void*)0;
struct sType* __dec_obj116;
_Bool __result141__;
int i_180;
_Bool __result142__;
    right_type2_155=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    left_no_solved_generics_type_156=left_type->mNoSolvedGenericsType->v1;
    right_no_solved_generics_type_157=right_type2_155->mNoSolvedGenericsType->v1;
    left_class_158=left_type->mClass;
    right_class_159=right_type2_155->mClass;
    parent_class_160=(_Bool)0;
    if(string_operator_not_equals(left_class_158->mName,right_class_159->mName)) {
        while(left_class_158&&right_class_159) {
            if(string_operator_equals(left_class_158->mName,right_class_159->mName)) {
                parent_class_160=(_Bool)1;
            }
            if(right_class_159->mParentClassName) {
                right_class_159=map$2charphsClassphp_operator_load_element(info->classes,right_class_159->mParentClassName);
            }
            else {
                right_class_159=((void*)0);
            }
        }
    }
    if(left_no_solved_generics_type_156&&right_no_solved_generics_type_157) {
        if(right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else {
            if(string_operator_equals(left_type->mClass->mName,right_type2_155->mClass->mName)&&left_type->mPointerNum==right_type2_155->mPointerNum) {
            }
            else {
                if(string_operator_equals(left_type->mClass->mName,right_type2_155->mClass->mName)&&(left_type->mPointerNum!=right_type2_155->mPointerNum||left_type->mHeap!=right_type2_155->mHeap)) {
                    err_msg(info,"poinetr num err");
                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_156->mGenericsTypes),left_no_solved_generics_type_156->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_157->mGenericsTypes),right_no_solved_generics_type_157->mClass->mName,right_type2_155->mClass->mName);
                    exit(2);
                }
                else {
                    if(list$1sTypeph_length(left_no_solved_generics_type_156->mGenericsTypes)>0) {
                        if((string_operator_equals(left_no_solved_generics_type_156->mClass->mName,"void")&&left_no_solved_generics_type_156->mPointerNum>0&&right_no_solved_generics_type_157->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_157->mClass->mName,"void")&&right_no_solved_generics_type_157->mPointerNum>0&&left_no_solved_generics_type_156->mPointerNum>0)) {
                        }
                        else {
                            if(list$1sTypeph_length(left_no_solved_generics_type_156->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_157->mGenericsTypes)) {
                                if(print_err_msg) {
                                    err_msg(info,"generics type parametor number error");
                                    printf("left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_156->mGenericsTypes),left_no_solved_generics_type_156->mClass->mName,left_type->mClass->mName);
                                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_157->mGenericsTypes),right_no_solved_generics_type_157->mClass->mName,right_type2_155->mClass->mName);
                                    exit(2);
                                }
                                __result118__ = (_Bool)0;
                                /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result118__;
                            }
                            for(                            i_161=0;                            i_161<list$1sTypeph_length(left_no_solved_generics_type_156->mGenericsTypes);                            i_161++                            ){
                                check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_no_solved_generics_type_156->mGenericsTypes,i_161), "05type.c", 396, 1)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_no_solved_generics_type_157->mGenericsTypes,i_161), "05type.c", 396, 2)),come_value,(_Bool)0,(_Bool)1,info);
                            }
                            check_assign_type(msg,left_no_solved_generics_type_156,right_no_solved_generics_type_157,come_value,(_Bool)0,(_Bool)1,info);
                        }
                    }
                }
            }
        }
    }
    else {
        if(left_type->mHeap&&!right_type2_155->mHeap&&left_type->mPointerNum>0&&right_type2_155->mPointerNum>0&&string_operator_not_equals(right_type2_155->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
            err_msg(info,"%s",msg);
            err_msg(info,"type error heap");
            printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
            printf("right type is %s pointer num %d heap %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum,right_type2_155->mHeap);
            exit(2);
        }
        else {
            if(parent_class_160&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
                __dec_obj83=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
                __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj84=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                /* a*/come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj85=right_type2_155;
                right_type2_155=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                /* a*/come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(check_no_pointer) {
                    if(left_type->mPointerNum>0) {
                        if(right_type2_155->mPointerNum>0) {
                            if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_155->mClass->mName,"void")) {
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list")) {
                                }
                                else {
                                    if(string_operator_not_equals(left_type->mClass->mName,right_type2_155->mClass->mName)) {
                                        if(print_err_msg) {
                                            err_msg(info,"type error1");
                                            printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                            printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                            exit(2);
                                        }
                                        __result121__ = (_Bool)0;
                                        /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result121__;
                                    }
                                }
                            }
                        }
                        else {
                            if(right_type->mPointerNum==0) {
                            }
                            else {
                                if(print_err_msg) {
                                    err_msg(info,"type error2");
                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                    printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                    exit(2);
                                }
                                __result122__ = (_Bool)0;
                                /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result122__;
                            }
                        }
                    }
                    else {
                        if(left_type->mPointerNum==0&&right_type2_155->mPointerNum>0) {
                            if(print_err_msg) {
                                err_msg(info,"type error3");
                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                exit(2);
                            }
                            __result123__ = (_Bool)0;
                            /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result123__;
                        }
                        else {
                            if(left_type->mPointerNum>0&&right_type2_155->mPointerNum==0&&string_operator_equals(right_type2_155->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
                            }
                            else {
                                if(string_operator_not_equals(left_type->mClass->mName,right_type2_155->mClass->mName)) {
                                    if(print_err_msg) {
                                        err_msg(info,"type error4");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                        exit(2);
                                    }
                                    __result124__ = (_Bool)0;
                                    /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result124__;
                                }
                            }
                        }
                    }
                }
                else {
                    if(!left_type->mNullValue&&right_type2_155->mNullValue) {
                        if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_155->mClass->mName,"__builtin_va_list")) {
                        }
                        else {
                            if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list")) {
                            }
                            else {
                                if(string_operator_equals(right_type2_155->mClass->mName,"void")&&right_type2_155->mPointerNum==0) {
                                    if(print_err_msg) {
                                        err_msg(info,"type error6");
                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                        printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                        exit(2);
                                    }
                                    __result125__ = (_Bool)0;
                                    /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result125__;
                                }
                                else {
                                    buf2_165=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 484, "buffer"))));
                                    buffer_append_str(buf2_165,((char*)(__right_value200=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value196=string_to_string(come_value->c_value))),((char*)(__right_value197=string_to_string(info->sname))),((char*)(__right_value198=int_to_string(info->sline))),((char*)(__right_value199=int_to_string(gComeDebugStackFrameID++)))))));
                                    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __dec_obj86=come_value->c_value;
                                    come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_165));
                                    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj87=come_value->type;
                                    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                    /* a*/come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value->var=((void*)0);
                                    __dec_obj88=right_type2_155;
                                    right_type2_155=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                    /* a*/come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(buf2_165,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                    else {
                        if(string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
                            if(string_operator_equals(right_type2_155->mClass->mName,"integer")&&right_type2_155->mPointerNum==1) {
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_155->mClass->mName,"__builtin_va_list")) {
                                }
                                else {
                                    if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list")) {
                                    }
                                    else {
                                        if(string_operator_equals(right_type2_155->mClass->mName,"lambda")) {
                                            if(print_err_msg) {
                                                err_msg(info,"type error7");
                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                exit(2);
                                            }
                                            __result126__ = (_Bool)0;
                                            /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result126__;
                                        }
                                        else {
                                            if(string_operator_equals(right_type2_155->mClass->mName,"void")&&right_type2_155->mPointerNum>0) {
                                            }
                                            else {
                                                if(string_operator_equals(right_type2_155->mClass->mName,"void")) {
                                                    if(print_err_msg) {
                                                        err_msg(info,"type error8");
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                        exit(2);
                                                    }
                                                    __result127__ = (_Bool)0;
                                                    /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    return __result127__;
                                                }
                                                else {
                                                    if(string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_155->mClass->mName,"lambda")) {
                                                    }
                                                    else {
                                                        if(right_type2_155->mPointerNum>0) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error9");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result128__ = (_Bool)0;
                                                            /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result128__;
                                                        }
                                                        else {
                                                            method_name_166=(char*)come_increment_ref_count(create_method_name(right_type2_155,(_Bool)0,"to_integer",info,(_Bool)1));
                                                            if(map$2charphsFunph_at(info->funcs,method_name_166,((void*)0))==((void*)0)) {
                                                                obj_type_169=right_type2_155->mNoSolvedGenericsType->v1;
                                                                if(obj_type_169&&list$1sTypeph_length(obj_type_169->mGenericsTypes)>0) {
                                                                    obj_type2_170=right_type2_155;
                                                                    __dec_obj104=method_name_166;
                                                                    method_name_166=(char*)come_increment_ref_count(make_generics_function(obj_type2_170,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                                                                    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                }
                                                                else {
                                                                    if(print_err_msg) {
                                                                        err_msg(info,"require to_string implementation(%s)",right_type2_155->mClass->mName);
                                                                        exit(2);
                                                                    }
                                                                    __result133__ = (_Bool)0;
                                                                    method_name_166 = come_decrement_ref_count2(method_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result133__;
                                                                }
                                                            }
                                                            buf2_171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 551, "buffer"))));
                                                            buffer_append_str(buf2_171,method_name_166);
                                                            buffer_append_str(buf2_171,"(");
                                                            buffer_append_str(buf2_171,come_value->c_value);
                                                            buffer_append_str(buf2_171,")");
                                                            type_172=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 558, "sType")),"integer",(_Bool)0,info));
                                                            type_172->mHeap=(_Bool)1;
                                                            type_172->mPointerNum=1;
                                                            __dec_obj105=come_value->c_value;
                                                            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_171));
                                                            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            __dec_obj106=come_value->type;
                                                            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_172));
                                                            /* a*/come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            come_value->var=((void*)0);
                                                            append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_172),info,(_Bool)0);
                                                            __dec_obj107=right_type2_155;
                                                            right_type2_155=(struct sType*)come_increment_ref_count(sType_clone(type_172));
                                                            /* a*/come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            method_name_166 = come_decrement_ref_count2(method_name_166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            /*i*/come_call_finalizer3(buf2_171,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                                            /*i*/come_call_finalizer3(type_172,sType_finalize, 0, 0, 0, 0, (void*)0);
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
                            if(string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
                                method_name_173=(char*)come_increment_ref_count(create_method_name(right_type2_155,(_Bool)0,"to_int",info,(_Bool)1));
                                if(map$2charphsFunph_at(info->funcs,method_name_173,((void*)0))==((void*)0)) {
                                    obj_type_174=right_type2_155->mNoSolvedGenericsType->v1;
                                    if(obj_type_174&&list$1sTypeph_length(obj_type_174->mGenericsTypes)>0) {
                                        obj_type2_175=right_type2_155;
                                        __dec_obj108=method_name_173;
                                        method_name_173=(char*)come_increment_ref_count(make_generics_function(obj_type2_175,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    else {
                                        if(print_err_msg) {
                                            err_msg(info,"require to_string implementation(%s)",right_type2_155->mClass->mName);
                                            exit(1);
                                        }
                                        __result134__ = (_Bool)0;
                                        method_name_173 = come_decrement_ref_count2(method_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result134__;
                                    }
                                }
                                buf2_176=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 588, "buffer"))));
                                buffer_append_str(buf2_176,method_name_173);
                                buffer_append_str(buf2_176,"(");
                                buffer_append_str(buf2_176,come_value->c_value);
                                buffer_append_str(buf2_176,")");
                                type_177=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 595, "sType")),"int",(_Bool)0,info));
                                __dec_obj109=come_value->c_value;
                                come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_176));
                                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj110=come_value->type;
                                come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_177));
                                /* a*/come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value->var=((void*)0);
                                __dec_obj111=right_type2_155;
                                right_type2_155=(struct sType*)come_increment_ref_count(sType_clone(type_177));
                                /* a*/come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
                                method_name_173 = come_decrement_ref_count2(method_name_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(buf2_176,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(type_177,sType_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
                                    if(string_operator_equals(right_type2_155->mClass->mName,"char")&&right_type2_155->mPointerNum==1) {
                                    }
                                    else {
                                        if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_155->mClass->mName,"__builtin_va_list")) {
                                        }
                                        else {
                                            if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list")) {
                                            }
                                            else {
                                                if(string_operator_equals(right_type2_155->mClass->mName,"lambda")) {
                                                    if(print_err_msg) {
                                                        err_msg(info,"type error10");
                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                        printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                        exit(2);
                                                    }
                                                    __result135__ = (_Bool)0;
                                                    /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                    return __result135__;
                                                }
                                                else {
                                                    if(string_operator_equals(right_type2_155->mClass->mName,"void")&&right_type2_155->mPointerNum>0) {
                                                    }
                                                    else {
                                                        if(string_operator_equals(right_type2_155->mClass->mName,"void")) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error11");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result136__ = (_Bool)0;
                                                            /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result136__;
                                                        }
                                                        else {
                                                            if(string_operator_not_equals(left_type->mClass->mName,right_type2_155->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_155->mPointerNum==0)) {
                                                                if(print_err_msg) {
                                                                    err_msg(info,"type error12");
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                                    exit(2);
                                                                }
                                                                __result137__ = (_Bool)0;
                                                                /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result137__;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else {
                                    if(string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
                                        if(string_operator_equals(right_type2_155->mClass->mName,"void")&&right_type2_155->mPointerNum==1) {
                                        }
                                        else {
                                            if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_155->mClass->mName,"__builtin_va_list")) {
                                            }
                                            else {
                                                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list")) {
                                                }
                                                else {
                                                    if(string_operator_equals(right_type2_155->mClass->mName,"lambda")) {
                                                    }
                                                    else {
                                                        if(string_operator_equals(right_type2_155->mClass->mName,"void")&&right_type2_155->mPointerNum>0) {
                                                        }
                                                        else {
                                                            if(string_operator_equals(right_type2_155->mClass->mName,"void")) {
                                                                if(print_err_msg) {
                                                                    err_msg(info,"type error13");
                                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                    printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                                    exit(2);
                                                                }
                                                                __result138__ = (_Bool)0;
                                                                /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                return __result138__;
                                                            }
                                                            else {
                                                                if(right_type2_155->mPointerNum==0) {
                                                                    tmp_178=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                                                                    __dec_obj112=come_value->c_value;
                                                                    come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_178));
                                                                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    __dec_obj113=come_value->type;
                                                                    come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                                                    /* a*/come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    come_value->var=((void*)0);
                                                                    __dec_obj114=right_type2_155;
                                                                    right_type2_155=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                                                    /* a*/come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    tmp_178 = come_decrement_ref_count2(tmp_178, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
                                            if(right_type2_155->mPointerNum>0||(right_type2_155->mPointerNum==0&&right_type2_155->mClass->mStruct)) {
                                                if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_155->mClass->mName,"void")) {
                                                }
                                                else {
                                                    if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list")) {
                                                    }
                                                    else {
                                                        if(string_operator_not_equals(left_type->mClass->mName,right_type2_155->mClass->mName)) {
                                                            if(print_err_msg) {
                                                                err_msg(info,"type error14");
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                                exit(2);
                                                            }
                                                            __result139__ = (_Bool)0;
                                                            /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                            return __result139__;
                                                        }
                                                        else {
                                                            if(left_type->mPointerNum!=right_type2_155->mPointerNum) {
                                                                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                            }
                                                            else {
                                                                if(list$1sNodeph_length(right_type2_155->mArrayNum)>0) {
                                                                    printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                                                                    printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                                                                    printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum,list$1sNodeph_length(right_type2_155->mArrayNum));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else {
                                                if(string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_155->mClass->mName,"void")) {
                                                }
                                                else {
                                                    if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_155->mClass->mName,"va_list")) {
                                                    }
                                                    else {
                                                        if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_155->mClass->mName,"__builtin_va_list")) {
                                                        }
                                                        else {
                                                            if(string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_155->mClass->mName,"lambda")) {
                                                            }
                                                            else {
                                                                if(left_type->mPointerNum>0&&right_type2_155->mPointerNum==0&&string_operator_equals(right_type2_155->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
                                                                    if(print_err_msg) {
                                                                        err_msg(info,"type error15");
                                                                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                                        printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                                        exit(2);
                                                                    }
                                                                    __result140__ = (_Bool)0;
                                                                    /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                    return __result140__;
                                                                }
                                                                else {
                                                                    if(left_type->mPointerNum>0&&!(string_operator_equals(right_type2_155->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_155->mPointerNum==0) {
                                                                        tmp_179=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
                                                                        __dec_obj115=come_value->c_value;
                                                                        come_value->c_value=(char*)come_increment_ref_count(string_clone(tmp_179));
                                                                        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                        __dec_obj116=come_value->type;
                                                                        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(left_type));
                                                                        /* a*/come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        __result141__ = (_Bool)1;
                                                                        tmp_179 = come_decrement_ref_count2(tmp_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                                        return __result141__;
                                                                        tmp_179 = come_decrement_ref_count2(tmp_179, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            if(list$1sTypeph_length(left_type->mGenericsTypes)>0) {
                                                if(list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_155->mGenericsTypes)) {
                                                    err_msg(info,"generics type number error");
                                                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                                                    printf("right type is %s pointer num %d\n",right_type2_155->mClass->mName,right_type2_155->mPointerNum);
                                                    exit(2);
                                                }
                                                for(                                                i_180=0;                                                i_180<list$1sTypeph_length(left_type->mGenericsTypes);                                                i_180++                                                ){
                                                    check_assign_type(msg,((struct sType*)come_null_check(list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_180), "05type.c", 763, 3)),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type2_155->mGenericsTypes,i_180), "05type.c", 763, 4)),come_value,(_Bool)0,(_Bool)1,info);
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
    }
    __result142__ = (_Bool)1;
    /*i*/come_call_finalizer3(right_type2_155,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result142__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_162;
int i_163;
struct sType* __result119__;
struct sType* default_value_164;
struct sType* __result120__;
default_value_164 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_162=self->head;
    i_163=0;
    while(it_162!=((void*)0)) {
        if(position==i_163) {
            __result119__ = gComeFunResultObject = __result_obj__ = it_162->item;
            gComeFunResultObject = (void*)0;
            return __result119__;
        }
        it_162=it_162->next;
        i_163++;
    }
    memset(&default_value_164,0,sizeof(struct sType*));
    __result120__ = gComeFunResultObject = __result_obj__ = default_value_164;
    /*i*/come_call_finalizer3(default_value_164,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_167;
unsigned int it_168;
struct sFun* __result129__;
struct sFun* __result130__;
struct sFun* __result131__;
struct sFun* __result132__;
    hash_167=string_get_hash_key(((char*)key))%self->size;
    it_168=hash_167;
    while((_Bool)1) {
        if(self->item_existance[it_168]) {
            if(string_equals(self->keys[it_168],key)) {
                __result129__ = gComeFunResultObject = __result_obj__ = self->items[it_168];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result129__;
            }
            it_168++;
            if(it_168>=self->size) {
                it_168=0;
            }
            else {
                if(it_168==hash_167) {
                    __result130__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result130__;
                }
            }
        }
        else {
            __result131__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result131__;
        }
    }
    __result132__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1sTypeph* __dec_obj91;
struct list$1charph* __dec_obj92;
struct list$1charph* __dec_obj93;
struct sType* __dec_obj94;
struct sBlock* __dec_obj95;
struct buffer* __dec_obj98;
struct buffer* __dec_obj99;
struct buffer* __dec_obj100;
struct buffer* __dec_obj101;
char* __dec_obj102;
char* __dec_obj103;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj89=self->mName;
            __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj90=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj91=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj91,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj92=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj93=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj94=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj95=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj98=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj99=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj100=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj100,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj101=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj102=self->mComeHeader;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj103=self->mDeclareSName;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj96;
struct sVarTable* __dec_obj97;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj96=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj96,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj97=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj97,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
void* __right_value231 = (void*)0;
struct sType* right_type2_181;
void* __right_value232 = (void*)0;
char* method_name_182;
struct sType* obj_type_183;
struct sType* obj_type2_184;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
char* __dec_obj117;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct buffer* buf2_185;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
struct sType* type_186;
void* __right_value239 = (void*)0;
char* __dec_obj118;
void* __right_value240 = (void*)0;
struct sType* __dec_obj119;
void* __right_value241 = (void*)0;
struct sType* __dec_obj120;
void* __right_value242 = (void*)0;
char* method_name_187;
struct sType* obj_type_188;
struct sType* obj_type2_189;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
char* __dec_obj121;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
struct buffer* buf2_190;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sType* type_191;
void* __right_value249 = (void*)0;
char* __dec_obj122;
void* __right_value250 = (void*)0;
struct sType* __dec_obj123;
void* __right_value251 = (void*)0;
struct sType* __dec_obj124;
    right_type2_181=(struct sType*)come_increment_ref_count(sType_clone(right_type));
    if(string_operator_equals(left_type->mClass->mName,"integer")&&left_type->mPointerNum==1) {
        if(string_operator_equals(right_type2_181->mClass->mName,"integer")&&right_type2_181->mPointerNum==1) {
        }
        else {
            if(string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_181->mClass->mName,"__builtin_va_list")) {
            }
            else {
                if(string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_181->mClass->mName,"va_list")) {
                }
                else {
                    if(string_operator_equals(right_type2_181->mClass->mName,"lambda")) {
                    }
                    else {
                        if(string_operator_equals(right_type2_181->mClass->mName,"void")&&right_type2_181->mPointerNum>0) {
                        }
                        else {
                            if(string_operator_equals(right_type2_181->mClass->mName,"void")) {
                            }
                            else {
                                if(left_type->mPointerNum>0&&right_type2_181->mPointerNum==0&&string_operator_equals(right_type2_181->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
                                }
                                else {
                                    if(right_type->mPointerNum>0) {
                                    }
                                    else {
                                        method_name_182=(char*)come_increment_ref_count(create_method_name(right_type2_181,(_Bool)0,"to_integer",info,(_Bool)1));
                                        if(map$2charphsFunph_at(info->funcs,method_name_182,((void*)0))==((void*)0)) {
                                            obj_type_183=right_type2_181->mNoSolvedGenericsType->v1;
                                            if(obj_type_183&&list$1sTypeph_length(obj_type_183->mGenericsTypes)>0) {
                                                obj_type2_184=right_type2_181;
                                                __dec_obj117=method_name_182;
                                                method_name_182=(char*)come_increment_ref_count(make_generics_function(obj_type2_184,(char*)come_increment_ref_count(__builtin_string("to_integer")),info,(_Bool)1));
                                                __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            }
                                            else {
                                                err_msg(info,"require to_string implementation(%s)",right_type2_181->mClass->mName);
                                                exit(1);
                                            }
                                        }
                                        buf2_185=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 806, "buffer"))));
                                        buffer_append_str(buf2_185,method_name_182);
                                        buffer_append_str(buf2_185,"(");
                                        buffer_append_str(buf2_185,come_value->c_value);
                                        buffer_append_str(buf2_185,")");
                                        type_186=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 813, "sType")),"integer",(_Bool)0,info));
                                        type_186->mHeap=(_Bool)1;
                                        type_186->mPointerNum=1;
                                        __dec_obj118=come_value->c_value;
                                        come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_185));
                                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj119=come_value->type;
                                        come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_186));
                                        /* a*/come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_value->var=((void*)0);
                                        append_object_to_right_values2(come_value,(struct sType*)come_increment_ref_count(type_186),info,(_Bool)0);
                                        __dec_obj120=right_type2_181;
                                        right_type2_181=(struct sType*)come_increment_ref_count(sType_clone(type_186));
                                        /* a*/come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        method_name_182 = come_decrement_ref_count2(method_name_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(buf2_185,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(type_186,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        if(string_operator_equals(left_type->mClass->mName,"int")&&(string_operator_equals(right_type->mClass->mName,"integer")&&right_type->mPointerNum==1)) {
            method_name_187=(char*)come_increment_ref_count(create_method_name(right_type2_181,(_Bool)0,"to_int",info,(_Bool)1));
            if(map$2charphsFunph_at(info->funcs,method_name_187,((void*)0))==((void*)0)) {
                obj_type_188=right_type2_181->mNoSolvedGenericsType->v1;
                if(obj_type_188&&list$1sTypeph_length(obj_type_188->mGenericsTypes)>0) {
                    obj_type2_189=right_type2_181;
                    __dec_obj121=method_name_187;
                    method_name_187=(char*)come_increment_ref_count(make_generics_function(obj_type2_189,(char*)come_increment_ref_count(__builtin_string("to_int")),info,(_Bool)1));
                    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",right_type2_181->mClass->mName);
                    exit(1);
                }
            }
            buf2_190=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 840, "buffer"))));
            buffer_append_str(buf2_190,method_name_187);
            buffer_append_str(buf2_190,"(");
            buffer_append_str(buf2_190,come_value->c_value);
            buffer_append_str(buf2_190,")");
            type_191=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 847, "sType")),"int",(_Bool)0,info));
            __dec_obj122=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_190));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj123=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(sType_clone(type_191));
            /* a*/come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj124=right_type2_181;
            right_type2_181=(struct sType*)come_increment_ref_count(sType_clone(type_191));
            /* a*/come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            method_name_187 = come_decrement_ref_count2(method_name_187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf2_190,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_191,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    /*i*/come_call_finalizer3(right_type2_181,sType_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
struct sType* result_type_192;
char* var_name_193;
char* p_194;
int sline_195;
void* __right_value253 = (void*)0;
char* word_196;
_Bool between_brace_197;
char* p_198;
int sline_199;
void* __right_value254 = (void*)0;
char* word_200;
char* p_201;
int sline_202;
void* __right_value255 = (void*)0;
char* word_203;
void* __right_value256 = (void*)0;
char* __dec_obj125;
void* __right_value257 = (void*)0;
char* __dec_obj126;
_Bool no_comma_205;
void* __right_value258 = (void*)0;
struct sNode* node_206;
struct sNode* __dec_obj127;
char* p_207;
int sline_208;
void* __right_value259 = (void*)0;
char* word_209;
void* __right_value260 = (void*)0;
struct sNode* node_210;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct tuple2$2sTypephcharph* __result145__;
    result_type_192=(struct sType*)come_increment_ref_count(sType_clone(base_type_name));
    if(!first) {
        result_type_192->mPointerNum=result_type_192->mTypedefOriginalPointerNum;
    }
    var_name_193=((void*)0);
    {
        p_194=info->p;
        sline_195=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            word_196=(char*)come_increment_ref_count(parse_word(info));
            if(string_operator_equals(word_196,"const")||string_operator_equals(word_196,"__restrict")||string_operator_equals(word_196,"restrict")||string_operator_equals(word_196,"__user")||string_operator_equals(word_196,"volatile")||string_operator_equals(word_196,"_Nonnull")||string_operator_equals(word_196,"_Nullable")||string_operator_equals(word_196,"_Null_unspecified")||string_operator_equals(word_196,"__user")||string_operator_equals(word_196,"_Addr")) {
            }
            else {
                info->p=p_194;
                info->sline=sline_195;
            }
            word_196 = come_decrement_ref_count2(word_196, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_194;
            info->sline=sline_195;
        }
    }
    between_brace_197=(_Bool)0;
    {
        p_198=info->p;
        sline_199=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_200=(char*)come_increment_ref_count(parse_word(info));
                if(is_type_name(word_200,info)) {
                }
                else {
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p!=40) {
                            between_brace_197=(_Bool)1;
                        }
                    }
                }
                word_200 = come_decrement_ref_count2(word_200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_198;
        info->sline=sline_199;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        {
            p_201=info->p;
            sline_202=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_203=(char*)come_increment_ref_count(parse_word(info));
                if(string_operator_equals(word_203,"const")||string_operator_equals(word_203,"__restrict")||string_operator_equals(word_203,"restrict")||string_operator_equals(word_203,"__user")||string_operator_equals(word_203,"volatile")||string_operator_equals(word_203,"_Nonnull")||string_operator_equals(word_203,"_Nullable")||string_operator_equals(word_203,"_Null_unspecified")||string_operator_equals(word_203,"__user")||string_operator_equals(word_203,"_Addr")) {
                }
                else {
                    info->p=p_201;
                    info->sline=sline_202;
                }
                word_203 = come_decrement_ref_count2(word_203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_201;
                info->sline=sline_202;
            }
        }
        result_type_192->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(between_brace_197&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(xisalnum(*info->p)||*info->p==95) {
        __dec_obj125=var_name_193;
        var_name_193=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_204=0;
        num_anonymous_var_name_204++;
        __dec_obj126=var_name_193;
        var_name_193=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_204));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(between_brace_197&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(*info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_205=info->no_comma;
        info->no_comma=(_Bool)1;
        node_206=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_205;
        __dec_obj127=result_type_192->mSizeNum;
        result_type_192->mSizeNum=(struct sNode*)come_increment_ref_count(node_206);
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
        if(node_206) { node_206 = come_decrement_ref_count2(node_206, ((struct sNode*)node_206)->finalize, ((struct sNode*)node_206)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_207=info->p;
            sline_208=info->sline;
            if(xisalpha(*info->p)||*info->p==95) {
                word_209=(char*)come_increment_ref_count(parse_word(info));
                if(string_operator_equals(word_209,"const")||string_operator_equals(word_209,"__restrict")||string_operator_equals(word_209,"restrict")||string_operator_equals(word_209,"__user")||string_operator_equals(word_209,"volatile")||string_operator_equals(word_209,"_Nonnull")||string_operator_equals(word_209,"_Nullable")||string_operator_equals(word_209,"_Null_unspecified")||string_operator_equals(word_209,"__user")||string_operator_equals(word_209,"_Addr")) {
                }
                else {
                    info->p=p_207;
                    info->sline=sline_208;
                }
                word_209 = come_decrement_ref_count2(word_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_207;
                info->sline=sline_208;
            }
        }
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_192->mArrayPointerType=(_Bool)1;
            result_type_192->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_210=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(result_type_192->mArrayNum,(struct sNode*)come_increment_ref_count(node_210));
        parse_sharp_v5(info);
        result_type_192->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_210) { node_210 = come_decrement_ref_count2(node_210, ((struct sNode*)node_210)->finalize, ((struct sNode*)node_210)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    ((char*)(__right_value264=parse_attribute(info)));
    __right_value264 = come_decrement_ref_count2(__right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result145__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value266=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1020, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_192),(char*)come_increment_ref_count(var_name_193))));
    /*i*/come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_192,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_193 = come_decrement_ref_count2(var_name_193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value266,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1sNodeph* litem_211;
struct sNode* __dec_obj128;
void* __right_value262 = (void*)0;
struct list_item$1sNodeph* litem_212;
struct sNode* __dec_obj129;
void* __right_value263 = (void*)0;
struct list_item$1sNodeph* litem_213;
struct sNode* __dec_obj130;
struct list$1sNodeph* __result143__;
    if(self->len==0) {
        litem_211=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value261=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 221, "list_item$1sNodeph"))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        __dec_obj128=litem_211->item;
        litem_211->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_211;
        self->head=litem_211;
    }
    else {
        if(self->len==1) {
            litem_212=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value262=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 231, "list_item$1sNodeph"))));
            litem_212->prev=self->head;
            litem_212->next=((void*)0);
            __dec_obj129=litem_212->item;
            litem_212->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_212;
            self->head->next=litem_212;
        }
        else {
            litem_213=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value263=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 241, "list_item$1sNodeph"))));
            litem_213->prev=self->tail;
            litem_213->next=((void*)0);
            __dec_obj130=litem_213->item;
            litem_213->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_213;
            self->tail=litem_213;
        }
    }
    self->len++;
    __result143__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result143__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj131;
char* __dec_obj132;
struct tuple2$2sTypephcharph* __result144__;
    __dec_obj131=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj132=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj133;
char* __dec_obj134;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj133=self->v1;
            /* a*/come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj134=self->v2;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_214;
int sline_215;
void* __right_value267 = (void*)0;
char* word_216;
    p_214=info->p;
    sline_215=info->sline;
    if(xisalpha(*info->p)||*info->p==95) {
        word_216=(char*)come_increment_ref_count(parse_word(info));
        if(string_operator_equals(word_216,"const")||string_operator_equals(word_216,"__restrict")||string_operator_equals(word_216,"restrict")||string_operator_equals(word_216,"__user")||string_operator_equals(word_216,"volatile")||string_operator_equals(word_216,"_Nonnull")||string_operator_equals(word_216,"_Nullable")||string_operator_equals(word_216,"_Null_unspecified")||string_operator_equals(word_216,"__user")||string_operator_equals(word_216,"_Addr")) {
        }
        else {
            info->p=p_214;
            info->sline=sline_215;
        }
        word_216 = come_decrement_ref_count2(word_216, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_214;
        info->sline=sline_215;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_217;
void* __right_value268 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2;
struct sType* type_218;
char* name_219;
_Bool err_220;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct tuple3$3sTypephcharphbool* __result147__;
    no_output_err_217=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value268=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_218=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_219=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_220=multiple_assign_var2->v3;
    /*g*/come_call_finalizer3(__right_value268,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_217;
    __result147__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value270=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1052, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_218),(char*)come_increment_ref_count(name_219),err_220)));
    /*i*/come_call_finalizer3(type_218,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_219 = come_decrement_ref_count2(name_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value270,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj135;
char* __dec_obj136;
struct tuple3$3sTypephcharphbool* __result146__;
    __dec_obj135=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj136=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result146__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_221;
int head_sline_222;
void* __right_value271 = (void*)0;
char* type_name_223;
void* __right_value272 = (void*)0;
char* __dec_obj137;
_Bool record__224;
_Bool exception__225;
_Bool constant_226;
_Bool static__227;
_Bool volatile__228;
_Bool register__229;
_Bool unsigned__230;
_Bool long__231;
_Bool long_long_232;
_Bool short__233;
_Bool restrict__234;
_Bool struct__235;
_Bool union__236;
_Bool enum__237;
_Bool no_heap_238;
_Bool extern__239;
_Bool inline__240;
_Bool come_mem_core__241;
_Bool uniq__242;
struct sNode* alignas__243;
_Bool anonymous_type_244;
_Bool anonymous_name_245;
char* p_246;
int sline_247;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
char* __dec_obj138;
void* __right_value275 = (void*)0;
char* __dec_obj139;
void* __right_value276 = (void*)0;
char* __dec_obj140;
char* p_248;
int sline_249;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct tuple3$3sTypephcharphbool* __result148__;
char* p_250;
int sline_251;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct tuple3$3sTypephcharphbool* __result149__;
void* __right_value283 = (void*)0;
struct sNode* node_252;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct tuple3$3sTypephcharphbool* __result150__;
char* p_253;
int sline_254;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
char* __dec_obj141;
void* __right_value289 = (void*)0;
char* __dec_obj142;
void* __right_value290 = (void*)0;
char* __dec_obj143;
char* p_255;
int sline_256;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct tuple3$3sTypephcharphbool* __result151__;
void* __right_value294 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_257;
char* name_258;
_Bool err_259;
char* p_260;
int sline_261;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct tuple3$3sTypephcharphbool* __result152__;
void* __right_value299 = (void*)0;
char* __dec_obj144;
void* __right_value300 = (void*)0;
char* __dec_obj145;
void* __right_value301 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_262;
char* name_263;
_Bool err_264;
char* p_265;
int sline_266;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct tuple3$3sTypephcharphbool* __result153__;
void* __right_value305 = (void*)0;
struct sNode* exp_267;
struct sNode* __dec_obj146;
void* __right_value306 = (void*)0;
char* __dec_obj147;
void* __right_value307 = (void*)0;
char* __dec_obj148;
void* __right_value308 = (void*)0;
char* __dec_obj149;
void* __right_value309 = (void*)0;
char* __dec_obj150;
void* __right_value310 = (void*)0;
char* __dec_obj151;
void* __right_value311 = (void*)0;
char* __dec_obj152;
void* __right_value312 = (void*)0;
char* __dec_obj153;
void* __right_value313 = (void*)0;
char* __dec_obj154;
void* __right_value314 = (void*)0;
char* __dec_obj155;
void* __right_value315 = (void*)0;
char* __dec_obj156;
void* __right_value316 = (void*)0;
char* __dec_obj157;
void* __right_value317 = (void*)0;
char* __dec_obj158;
char* p_268;
int sline_269;
void* __right_value318 = (void*)0;
char* __dec_obj159;
void* __right_value319 = (void*)0;
char* __dec_obj160;
void* __right_value320 = (void*)0;
char* __dec_obj161;
void* __right_value321 = (void*)0;
char* __dec_obj162;
void* __right_value322 = (void*)0;
char* __dec_obj163;
void* __right_value323 = (void*)0;
char* __dec_obj164;
char* p_270;
int sline_271;
void* __right_value324 = (void*)0;
char* __dec_obj165;
char* p_272;
int sline_273;
void* __right_value325 = (void*)0;
char* __dec_obj166;
void* __right_value326 = (void*)0;
char* __dec_obj167;
void* __right_value327 = (void*)0;
char* __dec_obj168;
char* p_274;
int sline_275;
void* __right_value328 = (void*)0;
char* __dec_obj169;
void* __right_value329 = (void*)0;
char* __dec_obj170;
void* __right_value330 = (void*)0;
char* __dec_obj171;
void* __right_value331 = (void*)0;
char* __dec_obj172;
void* __right_value332 = (void*)0;
char* __dec_obj173;
void* __right_value333 = (void*)0;
char* __dec_obj174;
void* __right_value334 = (void*)0;
char* __dec_obj175;
void* __right_value335 = (void*)0;
char* __dec_obj176;
void* __right_value336 = (void*)0;
char* __dec_obj177;
void* __right_value337 = (void*)0;
char* __dec_obj178;
char* p_276;
int sline_277;
void* __right_value338 = (void*)0;
char* __dec_obj179;
void* __right_value339 = (void*)0;
char* __dec_obj180;
int pointer_num_278;
_Bool heap_279;
_Bool lambda_flag_280;
char* pX_281;
int slineX_282;
void* __right_value340 = (void*)0;
struct sType* type_283;
char* var_name_284;
_Bool function_pointer_flag_285;
char* p_286;
int sline_287;
void* __right_value341 = (void*)0;
char* word_288;
_Bool var_name_between_brace_289;
char* p_290;
int sline_291;
void* __right_value342 = (void*)0;
char* word_292;
void* __right_value343 = (void*)0;
char* __dec_obj181;
void* __right_value344 = (void*)0;
struct sNode* node_294;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct tuple3$3sTypephcharphbool* __result154__;
int pointer_num_295;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sType* __dec_obj182;
void* __right_value349 = (void*)0;
char* __dec_obj183;
void* __right_value350 = (void*)0;
struct sNode* node_296;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct tuple3$3sTypephcharphbool* __result155__;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sType* __dec_obj184;
void* __right_value355 = (void*)0;
char* __dec_obj185;
void* __right_value356 = (void*)0;
struct sNode* node_297;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct tuple3$3sTypephcharphbool* __result156__;
int pointer_num_298;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
struct sType* __dec_obj186;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple3$3sTypephcharphbool* __result157__;
void* __right_value363 = (void*)0;
char* __dec_obj187;
void* __right_value364 = (void*)0;
char* __dec_obj188;
void* __right_value365 = (void*)0;
char* __dec_obj189;
void* __right_value366 = (void*)0;
char* __dec_obj190;
_Bool no_comma_301;
void* __right_value367 = (void*)0;
struct sNode* node_302;
struct sNode* __dec_obj191;
struct sType* result_type_303;
void* __right_value368 = (void*)0;
struct sType* __dec_obj192;
int i_304;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct sType* __dec_obj193;
int i_308;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sType* __dec_obj194;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sType* __dec_obj195;
struct sNode* __dec_obj196;
void* __right_value377 = (void*)0;
char* __dec_obj197;
void* __right_value378 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5;
struct list$1sTypeph* param_types_309;
struct list$1charph* param_names_310;
struct list$1charph* param_default_parametors_311;
_Bool var_args_312;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sType* __dec_obj198;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct tuple1$1sTypeph* __dec_obj200;
struct list$1sTypeph* __dec_obj201;
struct list$1charph* __dec_obj202;
int function_pointer_num_313;
struct sType* result_type_314;
void* __right_value383 = (void*)0;
struct sType* __dec_obj203;
int i_315;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sType* __dec_obj204;
int i_316;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sType* __dec_obj205;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct sType* __dec_obj206;
struct sNode* __dec_obj207;
void* __right_value392 = (void*)0;
char* __dec_obj208;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct tuple3$3sTypephcharphbool* __result161__;
void* __right_value395 = (void*)0;
char* __dec_obj209;
_Bool function_pointer_array_318;
void* __right_value396 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6;
struct list$1sTypeph* param_types_319;
struct list$1charph* param_names_320;
struct list$1charph* param_default_parametors_321;
_Bool var_args_322;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct sType* __dec_obj210;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct tuple1$1sTypeph* __dec_obj211;
struct list$1sTypeph* __dec_obj212;
struct list$1charph* __dec_obj213;
void* __right_value402 = (void*)0;
struct sNode* exp_323;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct tuple3$3sTypephcharphbool* __result163__;
void* __right_value405 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value406 = (void*)0;
struct sType* __dec_obj216;
void* __right_value407 = (void*)0;
char* __dec_obj217;
void* __right_value408 = (void*)0;
char* __dec_obj218;
void* __right_value409 = (void*)0;
char* __dec_obj219;
void* __right_value410 = (void*)0;
char* __dec_obj220;
_Bool no_comma_327;
void* __right_value411 = (void*)0;
struct sNode* node_328;
struct sNode* __dec_obj221;
void* __right_value412 = (void*)0;
struct sType* __dec_obj225;
void* __right_value413 = (void*)0;
char* __dec_obj226;
struct sNode* __dec_obj227;
int i_329;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
struct sType* __dec_obj228;
struct sNode* __dec_obj229;
int i_330;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sType* __dec_obj230;
struct sNode* __dec_obj231;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple3$3sTypephcharphbool* __result164__;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* __dec_obj232;
void* __right_value424 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* generics_type_331;
char* var_name_332;
_Bool err_333;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct tuple3$3sTypephcharphbool* __result165__;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple3$3sTypephcharphbool* __result166__;
void* __right_value429 = (void*)0;
struct sType* __dec_obj233;
void* __right_value430 = (void*)0;
char* new_name_334;
struct sNode* __dec_obj234;
struct sClass* klass_335;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sClass* klass_377;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sType* __dec_obj235;
struct sNode* __dec_obj236;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1sTypeph* types_378;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type2_379;
char* name_380;
_Bool err_381;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct tuple3$3sTypephcharphbool* __result188__;
void* __right_value446 = (void*)0;
int num_tuples_382;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct sType* __dec_obj237;
struct list$1sTypeph* o2_saved_383;
struct sType* it_384;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sType* __dec_obj238;
void* __right_value452 = (void*)0;
char* new_name_385;
void* __right_value453 = (void*)0;
char* __dec_obj239;
void* __right_value454 = (void*)0;
char* __dec_obj240;
void* __right_value455 = (void*)0;
char* __dec_obj241;
void* __right_value456 = (void*)0;
char* __dec_obj242;
_Bool no_comma_388;
void* __right_value457 = (void*)0;
struct sNode* node_389;
struct sNode* __dec_obj243;
void* __right_value458 = (void*)0;
struct sNode* node_390;
void* __right_value459 = (void*)0;
char* asm_name_391;
char* __dec_obj244;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct sType* type2_392;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct sType* type3_398;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sType* type4_399;
void* __right_value471 = (void*)0;
struct sType* __dec_obj246;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct tuple3$3sTypephcharphbool* __result192__;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
struct tuple3$3sTypephcharphbool* __result193__;
type_283 = (void*)0;
var_name_284 = (void*)0;
result_type_303 = (void*)0;
result_type_314 = (void*)0;
    head_221=info->p;
    head_sline_222=info->sline;
    info->define_struct=(_Bool)0;
    type_name_223=(char*)come_increment_ref_count(parse_word(info));
    while(string_operator_equals(type_name_223,"__extension__")) {
        __dec_obj137=type_name_223;
        type_name_223=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    record__224=(_Bool)0;
    exception__225=(_Bool)0;
    constant_226=(_Bool)0;
    static__227=(_Bool)0;
    volatile__228=(_Bool)0;
    register__229=(_Bool)0;
    unsigned__230=(_Bool)0;
    long__231=(_Bool)0;
    long_long_232=(_Bool)0;
    short__233=(_Bool)0;
    restrict__234=(_Bool)0;
    struct__235=(_Bool)0;
    union__236=(_Bool)0;
    enum__237=(_Bool)0;
    no_heap_238=(_Bool)0;
    extern__239=(_Bool)0;
    inline__240=(_Bool)0;
    come_mem_core__241=(_Bool)0;
    uniq__242=(_Bool)0;
    alignas__243=((void*)0);
    anonymous_type_244=(_Bool)0;
    anonymous_name_245=(_Bool)0;
    while((_Bool)1) {
        if(string_operator_equals(type_name_223,"struct")) {
            struct__235=(_Bool)1;
            if(*info->p==123) {
                p_246=info->p;
                sline_247=info->sline;
                ((char*)(__right_value273=skip_block(info)));
                __right_value273 = come_decrement_ref_count2(__right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(*info->p==59) {
                    anonymous_name_245=(_Bool)1;
                    anonymous_type_244=(_Bool)1;
                    __dec_obj138=type_name_223;
                    type_name_223=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_246;
                    info->sline=sline_247;
                    break;
                }
                else {
                    anonymous_type_244=(_Bool)1;
                    __dec_obj139=type_name_223;
                    type_name_223=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_246;
                    info->sline=sline_247;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(*info->p!=62) {
                __dec_obj140=type_name_223;
                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(*info->p==60) {
                    p_248=info->p;
                    sline_249=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(*info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(*info->p==123) {
                            }
                            else {
                                info->p=p_248;
                                info->sline=sline_249;
                            }
                            break;
                        }
                        else {
                            if(*info->p==0) {
                                err_msg(info,"invalid struct definition");
                                __result148__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value278=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1147, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*g*/come_call_finalizer3(__right_value278,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                gComeFunResultObject = (void*)0;
                                return __result148__;
                            }
                            else {
                                info->p++;
                            }
                        }
                    }
                }
                if(*info->p==123) {
                    p_250=info->p;
                    sline_251=info->sline;
                    ((char*)(__right_value279=skip_block(info)));
                    __right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                        ((char*)(__right_value280=parse_attribute(info)));
                        __right_value280 = come_decrement_ref_count2(__right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(*info->p==59) {
                        info->p=head_221;
                        info->sline=head_sline_222;
                        info->define_struct=(_Bool)1;
                        __result149__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value282=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1169, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value282,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result149__;
                    }
                    else {
                        info->p=p_250;
                        info->sline=sline_251;
                        node_252=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_223),info));
                        if(!node_compile(node_252,info)) {
                            __result150__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value285=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1181, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_252) { node_252 = come_decrement_ref_count2(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value285,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result150__;
                        }
                        if(node_252) { node_252 = come_decrement_ref_count2(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_252) { node_252 = come_decrement_ref_count2(node_252, ((struct sNode*)node_252)->finalize, ((struct sNode*)node_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else {
            if(string_operator_equals(type_name_223,"union")) {
                union__236=(_Bool)1;
                if(*info->p==123) {
                    p_253=info->p;
                    sline_254=info->sline;
                    ((char*)(__right_value286=skip_block(info)));
                    __right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                        ((char*)(__right_value287=parse_attribute(info)));
                        __right_value287 = come_decrement_ref_count2(__right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(*info->p==59) {
                        info->p=head_221;
                        info->sline=head_sline_222;
                        info->define_struct=(_Bool)0;
                        anonymous_type_244=(_Bool)1;
                        __dec_obj141=type_name_223;
                        type_name_223=(char*)come_increment_ref_count(__builtin_string(""));
                        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
                        info->p=p_253;
                        info->sline=sline_254;
                        break;
                    }
                    else {
                        anonymous_type_244=(_Bool)1;
                        __dec_obj142=type_name_223;
                        type_name_223=(char*)come_increment_ref_count(__builtin_string(""));
                        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                        info->p=p_253;
                        info->sline=sline_254;
                        break;
                    }
                }
                parse_sharp_v5(info);
                __dec_obj143=type_name_223;
                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(*info->p==123) {
                    p_255=info->p;
                    sline_256=info->sline;
                    ((char*)(__right_value291=skip_block(info)));
                    __right_value291 = come_decrement_ref_count2(__right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==59) {
                        info->p=head_221;
                        info->sline=head_sline_222;
                        info->define_struct=(_Bool)1;
                        __result151__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value293=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1238, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*g*/come_call_finalizer3(__right_value293,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result151__;
                    }
                    else {
                        anonymous_type_244=(_Bool)1;
                        info->p=p_255;
                        info->sline=sline_256;
                        break;
                    }
                }
            }
            else {
                if(string_operator_equals(type_name_223,"enum")) {
                    enum__237=(_Bool)1;
                    parse_sharp_v5(info);
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value294=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        type_257=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                        name_258=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                        err_259=multiple_assign_var3->v3;
                        /*g*/come_call_finalizer3(__right_value294,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        /*i*/come_call_finalizer3(type_257,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_258 = come_decrement_ref_count2(name_258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==123) {
                        p_260=info->p;
                        sline_261=info->sline;
                        ((char*)(__right_value295=skip_block(info)));
                        __right_value295 = come_decrement_ref_count2(__right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                            ((char*)(__right_value296=parse_attribute(info)));
                            __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(*info->p==59) {
                            info->p=head_221;
                            info->sline=head_sline_222;
                            info->define_struct=(_Bool)1;
                            __result152__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value298=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1276, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value298,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result152__;
                        }
                        else {
                            anonymous_type_244=(_Bool)1;
                            __dec_obj144=type_name_223;
                            type_name_223=(char*)come_increment_ref_count(__builtin_string(""));
                            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_260;
                            info->sline=sline_261;
                            break;
                        }
                    }
                    parse_sharp_v5(info);
                    __dec_obj145=type_name_223;
                    type_name_223=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                    parse_sharp_v5(info);
                    if(*info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value301=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        type_262=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                        name_263=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                        err_264=multiple_assign_var4->v3;
                        /*g*/come_call_finalizer3(__right_value301,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        /*i*/come_call_finalizer3(type_262,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_263 = come_decrement_ref_count2(name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==123) {
                        p_265=info->p;
                        sline_266=info->sline;
                        ((char*)(__right_value302=skip_block(info)));
                        __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        if(*info->p==59) {
                            info->p=head_221;
                            info->sline=head_sline_222;
                            info->define_struct=(_Bool)1;
                            __result153__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value304=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1312, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            /*g*/come_call_finalizer3(__right_value304,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result153__;
                        }
                        else {
                            anonymous_type_244=(_Bool)1;
                            info->p=p_265;
                            info->sline=sline_266;
                            break;
                        }
                    }
                }
                else {
                    if(string_operator_equals(type_name_223,"_Alignas")) {
                        expected_next_character(40,info);
                        exp_267=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        __dec_obj146=alignas__243;
                        alignas__243=(struct sNode*)come_increment_ref_count(exp_267);
                        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
                        expected_next_character(41,info);
                        __dec_obj147=type_name_223;
                        type_name_223=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(exp_267) { exp_267 = come_decrement_ref_count2(exp_267, ((struct sNode*)exp_267)->finalize, ((struct sNode*)exp_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(string_operator_equals(type_name_223,"const")) {
                            constant_226=(_Bool)1;
                            __dec_obj148=type_name_223;
                            type_name_223=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            if(string_operator_equals(type_name_223,"static")) {
                                static__227=(_Bool)1;
                                __dec_obj149=type_name_223;
                                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                if(string_operator_equals(type_name_223,"uniq")) {
                                    uniq__242=(_Bool)1;
                                    __dec_obj150=type_name_223;
                                    type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                else {
                                    if(string_operator_equals(type_name_223,"_Nullable")) {
                                        __dec_obj151=type_name_223;
                                        type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    }
                                    else {
                                        if(string_operator_equals(type_name_223,"record")) {
                                            record__224=(_Bool)1;
                                            __dec_obj152=type_name_223;
                                            type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        else {
                                            if(string_operator_equals(type_name_223,"exception")) {
                                                exception__225=(_Bool)1;
                                                __dec_obj153=type_name_223;
                                                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            }
                                            else {
                                                if(string_operator_equals(type_name_223,"come_mem_core")) {
                                                    come_mem_core__241=(_Bool)1;
                                                    __dec_obj154=type_name_223;
                                                    type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                }
                                                else {
                                                    if(string_operator_equals(type_name_223,"extern")) {
                                                        extern__239=(_Bool)1;
                                                        __dec_obj155=type_name_223;
                                                        type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    }
                                                    else {
                                                        if(string_operator_equals(type_name_223,"_Noreturn")) {
                                                            __dec_obj156=type_name_223;
                                                            type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        }
                                                        else {
                                                            if(string_operator_equals(type_name_223,"inline")||string_operator_equals(type_name_223,"__inline")||string_operator_equals(type_name_223,"__inline__")||string_operator_equals(type_name_223,"__always_inline")) {
                                                                inline__240=(_Bool)1;
                                                                __dec_obj157=type_name_223;
                                                                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            }
                                                            else {
                                                                if(string_operator_equals(type_name_223,"volatile")) {
                                                                    volatile__228=(_Bool)1;
                                                                    __dec_obj158=type_name_223;
                                                                    type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                }
                                                                else {
                                                                    if(string_operator_equals(type_name_223,"long")) {
                                                                        {
                                                                            p_268=info->p;
                                                                            sline_269=info->sline;
                                                                            if(!xisalpha(*info->p)) {
                                                                                info->p=p_268;
                                                                                info->sline=sline_269;
                                                                                __dec_obj159=type_name_223;
                                                                                type_name_223=(char*)come_increment_ref_count(__builtin_string("long"));
                                                                                __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                break;
                                                                            }
                                                                            else {
                                                                                __dec_obj160=type_name_223;
                                                                                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                if(string_operator_equals(type_name_223,"unsigned")) {
                                                                                    __dec_obj161=type_name_223;
                                                                                    type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    if(string_operator_equals(type_name_223,"int")) {
                                                                                        long__231=(_Bool)1;
                                                                                        unsigned__230=(_Bool)1;
                                                                                        break;
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(string_operator_equals(type_name_223,"long")) {
                                                                                        p_268=info->p;
                                                                                        sline_269=info->sline;
                                                                                        if(xisalpha(*info->p)) {
                                                                                            long_long_232=(_Bool)1;
                                                                                            __dec_obj162=type_name_223;
                                                                                            type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            long__231=(_Bool)1;
                                                                                            break;
                                                                                        }
                                                                                        if(string_operator_equals(type_name_223,"int")) {
                                                                                            long_long_232=(_Bool)1;
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            if(!is_type_name(type_name_223,info)) {
                                                                                                __dec_obj163=type_name_223;
                                                                                                type_name_223=(char*)come_increment_ref_count(__builtin_string("long"));
                                                                                                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                long_long_232=(_Bool)1;
                                                                                                info->p=p_268;
                                                                                                info->sline=sline_269;
                                                                                                break;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(is_type_name(type_name_223,info)) {
                                                                                            if(long__231) {
                                                                                                long_long_232=(_Bool)1;
                                                                                                long__231=(_Bool)0;
                                                                                            }
                                                                                            else {
                                                                                                long__231=(_Bool)1;
                                                                                            }
                                                                                            break;
                                                                                        }
                                                                                        else {
                                                                                            info->p=p_268;
                                                                                            info->sline=sline_269;
                                                                                            __dec_obj164=type_name_223;
                                                                                            type_name_223=(char*)come_increment_ref_count(__builtin_string("long"));
                                                                                            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(string_operator_equals(type_name_223,"unsigned")) {
                                                                            unsigned__230=(_Bool)1;
                                                                            if(xisalpha(*info->p)||*info->p==95) {
                                                                                p_270=info->p;
                                                                                sline_271=info->sline;
                                                                                __dec_obj165=type_name_223;
                                                                                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                if(string_operator_equals(type_name_223,"short")) {
                                                                                    if(xisalpha(*info->p)||*info->p==95) {
                                                                                        p_272=info->p;
                                                                                        sline_273=info->sline;
                                                                                        __dec_obj166=type_name_223;
                                                                                        type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        if(is_type_name(type_name_223,info)) {
                                                                                            short__233=(_Bool)1;
                                                                                        }
                                                                                        else {
                                                                                            short__233=(_Bool)1;
                                                                                            __dec_obj167=type_name_223;
                                                                                            type_name_223=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            info->p=p_272;
                                                                                            info->sline=sline_273;
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        short__233=(_Bool)1;
                                                                                        __dec_obj168=type_name_223;
                                                                                        type_name_223=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        break;
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(string_operator_equals(type_name_223,"long")) {
                                                                                        if(xisalpha(*info->p)||*info->p==95) {
                                                                                            p_274=info->p;
                                                                                            sline_275=info->sline;
                                                                                            __dec_obj169=type_name_223;
                                                                                            type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            if(is_type_name(type_name_223,info)) {
                                                                                                long__231=(_Bool)1;
                                                                                            }
                                                                                            else {
                                                                                                long__231=(_Bool)1;
                                                                                                __dec_obj170=type_name_223;
                                                                                                type_name_223=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                info->p=p_274;
                                                                                                info->sline=sline_275;
                                                                                            }
                                                                                        }
                                                                                        else {
                                                                                            long__231=(_Bool)1;
                                                                                            __dec_obj171=type_name_223;
                                                                                            type_name_223=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                    else {
                                                                                        if(!is_type_name(type_name_223,info)) {
                                                                                            __dec_obj172=type_name_223;
                                                                                            type_name_223=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            info->p=p_270;
                                                                                            info->sline=sline_271;
                                                                                            break;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                            else {
                                                                                __dec_obj173=type_name_223;
                                                                                type_name_223=(char*)come_increment_ref_count(__builtin_string("int"));
                                                                                __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                break;
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(string_operator_equals(type_name_223,"signed")||string_operator_equals(type_name_223,"__signed__")) {
                                                                                unsigned__230=(_Bool)0;
                                                                                __dec_obj174=type_name_223;
                                                                                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                            }
                                                                            else {
                                                                                if(string_operator_equals(type_name_223,"register")) {
                                                                                    register__229=(_Bool)1;
                                                                                    __dec_obj175=type_name_223;
                                                                                    type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    if(string_operator_equals(type_name_223,"restrict")) {
                                                                                        restrict__234=(_Bool)1;
                                                                                        __dec_obj176=type_name_223;
                                                                                        type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        if(string_operator_equals(type_name_223,"_Addr")) {
                                                                                            __dec_obj177=type_name_223;
                                                                                            type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            if(string_operator_equals(type_name_223,"__restrict")) {
                                                                                                restrict__234=(_Bool)1;
                                                                                                __dec_obj178=type_name_223;
                                                                                                type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                                __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            }
                                                                                            else {
                                                                                                if(string_operator_equals(type_name_223,"short")) {
                                                                                                    short__233=(_Bool)1;
                                                                                                    if(*info->p==58) {
                                                                                                        break;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(xisalnum(*info->p)) {
                                                                                                            p_276=info->p;
                                                                                                            sline_277=info->sline;
                                                                                                            __dec_obj179=type_name_223;
                                                                                                            type_name_223=(char*)come_increment_ref_count(parse_word(info));
                                                                                                            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                            if(string_operator_equals(type_name_223,"int")) {
                                                                                                                break;
                                                                                                            }
                                                                                                            else {
                                                                                                                if(string_operator_equals(type_name_223,"short")) {
                                                                                                                    short__233=(_Bool)0;
                                                                                                                    break;
                                                                                                                }
                                                                                                                else {
                                                                                                                    if(is_type_name(type_name_223,info)) {
                                                                                                                        info->p=p_276;
                                                                                                                        info->sline=sline_277;
                                                                                                                    }
                                                                                                                    else {
                                                                                                                        __dec_obj180=type_name_223;
                                                                                                                        type_name_223=(char*)come_increment_ref_count(__builtin_string("short"));
                                                                                                                        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                                        info->p=p_276;
                                                                                                                        info->sline=sline_277;
                                                                                                                        break;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                        else {
                                                                                                            break;
                                                                                                        }
                                                                                                    }
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
                }
            }
        }
    }
    skip_pointer_attribute(info);
    pointer_num_278=0;
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        pointer_num_278++;
    }
    heap_279=(_Bool)0;
    if(*info->p==37) {
        info->p++;
        skip_spaces_and_lf(info);
        heap_279=(_Bool)1;
    }
    lambda_flag_280=(_Bool)0;
    {
        pX_281=info->p;
        slineX_282=info->sline;
        if(xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value340=parse_word(info)));
            __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(*info->p==40&&info->in_typedef) {
                lambda_flag_280=(_Bool)1;
            }
        }
        info->p=pX_281;
        info->sline=slineX_282;
    }
    function_pointer_flag_285=(_Bool)0;
    {
        p_286=info->p;
        sline_287=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(*info->p==42||*info->p==94) {
                function_pointer_flag_285=(_Bool)1;
            }
            else {
                if(xisalpha(*info->p)||*info->p==95) {
                    word_288=(char*)come_increment_ref_count(parse_word(info));
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p==40) {
                            function_pointer_flag_285=(_Bool)1;
                        }
                    }
                    word_288 = come_decrement_ref_count2(word_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        info->p=p_286;
        info->sline=sline_287;
    }
    var_name_between_brace_289=(_Bool)0;
    {
        p_290=info->p;
        sline_291=info->sline;
        if(*info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(xisalpha(*info->p)||*info->p==95) {
                word_292=(char*)come_increment_ref_count(parse_word(info));
                if(is_type_name(word_292,info)) {
                }
                else {
                    if(*info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(*info->p!=40) {
                            var_name_between_brace_289=(_Bool)1;
                        }
                    }
                }
                word_292 = come_decrement_ref_count2(word_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_290;
        info->sline=sline_291;
    }
    if(anonymous_type_244&&*info->p==123) {
        static int anonymous_num_293=0;
        if(struct__235) {
            if(string_operator_equals(type_name_223,"")) {
                __dec_obj181=type_name_223;
                type_name_223=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_293));
                __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_294=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_223),info));
            if(!node_compile(node_294,info)) {
                err_msg(info,"parse_struct is failed");
                __result154__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value346=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1697, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value346,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result154__;
            }
            pointer_num_295=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                pointer_num_295++;
            }
            __dec_obj182=type_283;
            type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1707, "sType")),type_name_223,(_Bool)0,info));
            /* a*/come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_283->mPointerNum=pointer_num_295;
            if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(enum__237) {
                if(string_operator_equals(type_name_223,"")) {
                    __dec_obj183=type_name_223;
                    type_name_223=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_293));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                node_296=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_223),info));
                if(!info->no_output_err) {
                    if(!node_compile(node_296,info)) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result155__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value352=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1721, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value352,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result155__;
                    }
                }
                __dec_obj184=type_283;
                type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1725, "sType")),type_name_223,(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(union__236) {
                    if(string_operator_equals(type_name_223,"")) {
                        __dec_obj185=type_name_223;
                        type_name_223=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_293));
                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    node_297=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_223),info));
                    if(!node_compile(node_297,info)) {
                        printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                        __result156__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value358=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1737, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value358,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result156__;
                    }
                    pointer_num_298=0;
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        pointer_num_298++;
                    }
                    __dec_obj186=type_283;
                    type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1748, "sType")),type_name_223,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
                    type_283->mPointerNum=pointer_num_298;
                    if(node_297) { node_297 = come_decrement_ref_count2(node_297, ((struct sNode*)node_297)->finalize, ((struct sNode*)node_297)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __result157__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value362=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1754, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*g*/come_call_finalizer3(__right_value362,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result157__;
                }
            }
        }
        if(parse_variable_name) {
            parse_sharp_v5(info);
            if(var_name_between_brace_289&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                __dec_obj187=var_name_284;
                var_name_284=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                if(anonymous_name_245) {
                    static int num_anonymous_var_name_299=0;
                    num_anonymous_var_name_299++;
                    __dec_obj188=var_name_284;
                    var_name_284=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_299));
                    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                else {
                    if(xisalnum(*info->p)||*info->p==95) {
                        __dec_obj189=var_name_284;
                        var_name_284=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        static int num_anonymous_var_name_300=0;
                        num_anonymous_var_name_300++;
                        __dec_obj190=var_name_284;
                        var_name_284=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_300));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
            }
            if(var_name_between_brace_289&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_301=info->no_comma;
                info->no_comma=(_Bool)1;
                node_302=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_301;
                __dec_obj191=type_283->mSizeNum;
                type_283->mSizeNum=(struct sNode*)come_increment_ref_count(node_302);
                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); }
                if(node_302) { node_302 = come_decrement_ref_count2(node_302, ((struct sNode*)node_302)->finalize, ((struct sNode*)node_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
    }
    else {
        if(lambda_flag_280) {
            if(map$2charphsTypephp_operator_load_element(info->types,type_name_223)) {
                __dec_obj192=result_type_303;
                result_type_303=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_223)));
                /* a*/come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_type_303->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_303->mClass->mName), "05type.c", 1803, 5));
            }
            else {
                if(list$1charph_contained(info->generics_type_names,type_name_223)) {
                    for(                    i_304=0;                    i_304<list$1charph_length(info->generics_type_names);                    i_304++                    ){
                        if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_304), "05type.c", 1807, 6)),type_name_223)) {
                            __dec_obj193=result_type_303;
                            result_type_303=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1808, "sType")),((char*)(__right_value370=xsprintf("generics_type%d",i_304))),(_Bool)0,info));
                            /* a*/come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
                            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                    }
                }
                else {
                    if(list$1charph_contained(info->method_generics_type_names,type_name_223)) {
                        for(                        i_308=0;                        i_308<list$1charph_length(info->method_generics_type_names);                        i_308++                        ){
                            if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_308), "05type.c", 1814, 7)),type_name_223)) {
                                __dec_obj194=result_type_303;
                                result_type_303=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1815, "sType")),((char*)(__right_value373=xsprintf("mgenerics_type%d",i_308))),(_Bool)0,info));
                                /* a*/come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __right_value373 = come_decrement_ref_count2(__right_value373, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        __dec_obj195=result_type_303;
                        result_type_303=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1820, "sType")),type_name_223,(_Bool)0,info));
                        /* a*/come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
            }
            result_type_303->mConstant=result_type_303->mConstant||constant_226;
            __dec_obj196=result_type_303->mAlignas;
            result_type_303->mAlignas=(struct sNode*)come_increment_ref_count(alignas__243);
            if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
            result_type_303->mComeMemCore=result_type_303->mComeMemCore||come_mem_core__241;
            result_type_303->mRegister=register__229;
            result_type_303->mUnsigned=result_type_303->mUnsigned||unsigned__230;
            result_type_303->mVolatile=volatile__228;
            result_type_303->mRecord=result_type_303->mStatic||static__227;
            result_type_303->mUniq=result_type_303->mUniq||uniq__242;
            result_type_303->mStatic=result_type_303->mRecord||record__224;
            result_type_303->mException=result_type_303->mException||exception__225;
            result_type_303->mExtern=result_type_303->mExtern||extern__239;
            result_type_303->mInline=result_type_303->mInline||inline__240;
            result_type_303->mRestrict=result_type_303->mRestrict||restrict__234;
            result_type_303->mLongLong=result_type_303->mLongLong||long_long_232;
            result_type_303->mLong=result_type_303->mLong||long__231;
            result_type_303->mShort=result_type_303->mShort||short__233;
            result_type_303->mPointerNum=pointer_num_278;
            result_type_303->mHeap=result_type_303->mHeap||heap_279;
            __dec_obj197=var_name_284;
            var_name_284=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value378=parse_params(info,(_Bool)0)));
            param_types_309=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
            param_names_310=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
            param_default_parametors_311=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
            var_args_312=multiple_assign_var5->v4;
            /*g*/come_call_finalizer3(__right_value378,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj198=type_283;
            type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1846, "sType")),"lambda",(_Bool)0,info));
            /* a*/come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj200=type_283->mResultType;
            type_283->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1848, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_303)));
            /* a*/come_call_finalizer3(__dec_obj200,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj201=type_283->mParamTypes;
            type_283->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_309);
            /* a*/come_call_finalizer3(__dec_obj201,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj202=type_283->mParamNames;
            type_283->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_310);
            /* a*/come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            type_283->mVarArgs=var_args_312;
            type_283->mExtern=extern__239;
            /*i*/come_call_finalizer3(result_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_types_309,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_names_310,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(param_default_parametors_311,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(function_pointer_flag_285) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                function_pointer_num_313=0;
                while(*info->p==42||*info->p==94) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    function_pointer_num_313++;
                }
                skip_pointer_attribute(info);
                if(map$2charphsTypephp_operator_load_element(info->types,type_name_223)) {
                    __dec_obj203=result_type_314;
                    result_type_314=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_223)));
                    /* a*/come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
                    result_type_314->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,result_type_314->mClass->mName), "05type.c", 1872, 8));
                }
                else {
                    if(list$1charph_contained(info->generics_type_names,type_name_223)) {
                        for(                        i_315=0;                        i_315<list$1charph_length(info->generics_type_names);                        i_315++                        ){
                            if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_315), "05type.c", 1877, 9)),type_name_223)) {
                                __dec_obj204=result_type_314;
                                result_type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1878, "sType")),((char*)(__right_value385=xsprintf("generics_type%d",i_315))),(_Bool)0,info));
                                /* a*/come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
                                __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                        }
                    }
                    else {
                        if(list$1charph_contained(info->method_generics_type_names,type_name_223)) {
                            for(                            i_316=0;                            i_316<list$1charph_length(info->method_generics_type_names);                            i_316++                            ){
                                if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_316), "05type.c", 1884, 10)),type_name_223)) {
                                    __dec_obj205=result_type_314;
                                    result_type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1885, "sType")),((char*)(__right_value388=xsprintf("mgenerics_type%d",i_316))),(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                        }
                        else {
                            __dec_obj206=result_type_314;
                            result_type_314=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1890, "sType")),type_name_223,(_Bool)0,info));
                            /* a*/come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                result_type_314->mConstant=result_type_314->mConstant||constant_226;
                __dec_obj207=result_type_314->mAlignas;
                result_type_314->mAlignas=(struct sNode*)come_increment_ref_count(alignas__243);
                if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); }
                result_type_314->mComeMemCore=result_type_314->mComeMemCore||come_mem_core__241;
                result_type_314->mRegister=register__229;
                result_type_314->mUnsigned=result_type_314->mUnsigned||unsigned__230;
                result_type_314->mVolatile=volatile__228;
                result_type_314->mStatic=result_type_314->mStatic||static__227;
                result_type_314->mUniq=result_type_314->mUniq||uniq__242;
                result_type_314->mRecord=result_type_314->mRecord||record__224;
                result_type_314->mException=result_type_314->mException||exception__225;
                result_type_314->mExtern=result_type_314->mExtern||extern__239;
                result_type_314->mInline=result_type_314->mInline||inline__240;
                result_type_314->mRestrict=result_type_314->mRestrict||restrict__234;
                result_type_314->mLongLong=result_type_314->mLongLong||long_long_232;
                result_type_314->mLong=result_type_314->mLong||long__231;
                result_type_314->mShort=result_type_314->mShort||short__233;
                result_type_314->mPointerNum+=pointer_num_278;
                result_type_314->mHeap=result_type_314->mHeap||heap_279;
                if(xisalnum(*info->p)||*info->p==95) {
                    __dec_obj208=var_name_284;
                    var_name_284=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(*info->p==40) {
                        __result161__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value394=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1915, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(result_type_314),(char*)come_increment_ref_count(var_name_284),(_Bool)0)));
                        /*i*/come_call_finalizer3(result_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value394,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result161__;
                    }
                }
                else {
                    static int num_anonymous_var_name_317=0;
                    num_anonymous_var_name_317++;
                    __dec_obj209=var_name_284;
                    var_name_284=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_317));
                    __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                function_pointer_array_318=(_Bool)0;
                if(*info->p==91) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        function_pointer_array_318=(_Bool)1;
                    }
                }
                expected_next_character(41,info);
                multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value396=parse_params(info,(_Bool)0)));
                param_types_319=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
                param_names_320=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
                param_default_parametors_321=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
                var_args_322=multiple_assign_var6->v4;
                /*g*/come_call_finalizer3(__right_value396,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                __dec_obj210=type_283;
                type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1937, "sType")),"lambda",(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj211=type_283->mResultType;
                type_283->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 1939, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(sType_clone(result_type_314))));
                /* a*/come_call_finalizer3(__dec_obj211,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj212=type_283->mParamTypes;
                type_283->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_319);
                /* a*/come_call_finalizer3(__dec_obj212,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj213=type_283->mParamNames;
                type_283->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_320);
                /* a*/come_call_finalizer3(__dec_obj213,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                type_283->mVarArgs=var_args_322;
                type_283->mExtern=extern__239;
                if(function_pointer_array_318) {
                    type_283->mLambdaArray=(_Bool)1;
                }
                type_283->mFunctionPointerNum=function_pointer_num_313;
                /*i*/come_call_finalizer3(result_type_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_types_319,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_names_320,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(param_default_parametors_321,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(string_operator_equals(type_name_223,"__typeof__")&&*info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    exp_323=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    expected_next_character(41,info);
                    if(!node_compile(exp_323,info)) {
                        err_msg(info,"invalid __typeof__ expression");
                        __result163__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(__right_value404=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count((struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 1960, "struct tuple3$3sTypepcharphbool")),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        if(exp_323) { exp_323 = come_decrement_ref_count2(exp_323, ((struct sNode*)exp_323)->finalize, ((struct sNode*)exp_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                        var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*g*/come_call_finalizer3(__right_value404,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result163__;
                    }
                    come_value_324=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    __dec_obj216=type_283;
                    type_283=(struct sType*)come_increment_ref_count(sType_clone(come_value_324->type));
                    /* a*/come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(var_name_between_brace_289&&*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            __dec_obj217=var_name_284;
                            var_name_284=(char*)come_increment_ref_count(__builtin_string(""));
                            __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            if(anonymous_name_245) {
                                static int num_anonymous_var_name_325=0;
                                num_anonymous_var_name_325++;
                                __dec_obj218=var_name_284;
                                var_name_284=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_325));
                                __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                if(xisalnum(*info->p)||*info->p==95) {
                                    __dec_obj219=var_name_284;
                                    var_name_284=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                else {
                                    static int num_anonymous_var_name_326=0;
                                    num_anonymous_var_name_326++;
                                    __dec_obj220=var_name_284;
                                    var_name_284=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_326));
                                    __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                            }
                        }
                        if(var_name_between_brace_289&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_327=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_328=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_327;
                            __dec_obj221=type_283->mSizeNum;
                            type_283->mSizeNum=(struct sNode*)come_increment_ref_count(node_328);
                            if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                    if(exp_323) { exp_323 = come_decrement_ref_count2(exp_323, ((struct sNode*)exp_323)->finalize, ((struct sNode*)exp_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(map$2charphsTypephp_operator_load_element(info->types,type_name_223)) {
                        __dec_obj225=type_283;
                        type_283=(struct sType*)come_increment_ref_count(sType_clone(map$2charphsTypephp_operator_load_element(info->types,type_name_223)));
                        /* a*/come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
                        type_283->mTypedefOriginalPointerNum=type_283->mPointerNum;
                        type_283->mClass=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_283->mClass->mName), "05type.c", 2015, 11));
                        __dec_obj226=type_283->mOriginalTypeName;
                        type_283->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_223));
                        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                        type_283->mOriginalTypeNamePointerNum=pointer_num_278;
                        type_283->mOriginalTypeNameHeap=heap_279;
                        type_283->mConstant=type_283->mConstant||constant_226;
                        __dec_obj227=type_283->mAlignas;
                        type_283->mAlignas=(struct sNode*)come_increment_ref_count(alignas__243);
                        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                        type_283->mComeMemCore=type_283->mComeMemCore||come_mem_core__241;
                        type_283->mRegister=register__229;
                        type_283->mUnsigned=type_283->mUnsigned||unsigned__230;
                        type_283->mVolatile=volatile__228;
                        type_283->mStatic=type_283->mStatic||static__227;
                        type_283->mUniq=type_283->mUniq||uniq__242;
                        type_283->mRecord=type_283->mRecord||record__224;
                        type_283->mException=type_283->mException||exception__225;
                        type_283->mExtern=type_283->mExtern||extern__239;
                        type_283->mInline=type_283->mInline||inline__240;
                        type_283->mRestrict=type_283->mRestrict||restrict__234;
                        type_283->mLongLong=type_283->mLongLong||long_long_232;
                        type_283->mLong=type_283->mLong||long__231;
                        type_283->mShort=type_283->mShort||short__233;
                        type_283->mPointerNum+=pointer_num_278;
                        type_283->mHeap=type_283->mHeap||heap_279;
                    }
                    else {
                        if(list$1charph_contained(info->generics_type_names,type_name_223)) {
                            for(                            i_329=0;                            i_329<list$1charph_length(info->generics_type_names);                            i_329++                            ){
                                if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->generics_type_names,i_329), "05type.c", 2041, 12)),type_name_223)) {
                                    __dec_obj228=type_283;
                                    type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2042, "sType")),((char*)(__right_value415=xsprintf("generics_type%d",i_329))),(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                            }
                            type_283->mConstant=type_283->mConstant||constant_226;
                            __dec_obj229=type_283->mAlignas;
                            type_283->mAlignas=(struct sNode*)come_increment_ref_count(alignas__243);
                            if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); }
                            type_283->mComeMemCore=type_283->mComeMemCore||come_mem_core__241;
                            type_283->mRegister=register__229;
                            type_283->mUnsigned=type_283->mUnsigned||unsigned__230;
                            type_283->mVolatile=volatile__228;
                            type_283->mStatic=type_283->mStatic||static__227;
                            type_283->mUniq=type_283->mUniq||uniq__242;
                            type_283->mRecord=type_283->mRecord||record__224;
                            type_283->mException=type_283->mException||exception__225;
                            type_283->mExtern=type_283->mExtern||extern__239;
                            type_283->mInline=type_283->mInline||inline__240;
                            type_283->mRestrict=type_283->mRestrict||restrict__234;
                            type_283->mLongLong=type_283->mLongLong||long_long_232;
                            type_283->mLong=type_283->mLong||long__231;
                            type_283->mShort=type_283->mShort||short__233;
                            type_283->mPointerNum+=pointer_num_278;
                            type_283->mHeap=type_283->mHeap||heap_279;
                        }
                        else {
                            if(list$1charph_contained(info->method_generics_type_names,type_name_223)) {
                                for(                                i_330=0;                                i_330<list$1charph_length(info->method_generics_type_names);                                i_330++                                ){
                                    if(string_operator_equals(((char*)come_null_check(list$1charphp_operator_load_element(info->method_generics_type_names,i_330), "05type.c", 2067, 13)),type_name_223)) {
                                        __dec_obj230=type_283;
                                        type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2068, "sType")),((char*)(__right_value418=xsprintf("mgenerics_type%d",i_330))),(_Bool)0,info));
                                        /* a*/come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                }
                                type_283->mConstant=type_283->mConstant||constant_226;
                                __dec_obj231=type_283->mAlignas;
                                type_283->mAlignas=(struct sNode*)come_increment_ref_count(alignas__243);
                                if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); }
                                type_283->mComeMemCore=type_283->mComeMemCore||come_mem_core__241;
                                type_283->mRegister=register__229;
                                type_283->mUnsigned=type_283->mUnsigned||unsigned__230;
                                type_283->mVolatile=volatile__228;
                                type_283->mStatic=type_283->mStatic||static__227;
                                type_283->mUniq=type_283->mUniq||uniq__242;
                                type_283->mRecord=type_283->mRecord||record__224;
                                type_283->mException=type_283->mException||exception__225;
                                type_283->mExtern=type_283->mExtern||extern__239;
                                type_283->mInline=type_283->mInline||inline__240;
                                type_283->mRestrict=type_283->mRestrict||restrict__234;
                                type_283->mLongLong=type_283->mLongLong||long_long_232;
                                type_283->mLong=type_283->mLong||long__231;
                                type_283->mShort=type_283->mShort||short__233;
                                type_283->mPointerNum+=pointer_num_278;
                                type_283->mHeap=type_283->mHeap||heap_279;
                            }
                            else {
                                if(*info->p==60) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    if(map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_223)==((void*)0)) {
                                        __result164__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value421=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2097, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*g*/come_call_finalizer3(__right_value421,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        gComeFunResultObject = (void*)0;
                                        return __result164__;
                                    }
                                    __dec_obj232=type_283;
                                    type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2100, "sType")),type_name_223,(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    while((_Bool)1) {
                                        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value424=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                                        generics_type_331=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                        var_name_332=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                        err_333=multiple_assign_var7->v3;
                                        /*g*/come_call_finalizer3(__right_value424,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(!err_333) {
                                            __result165__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value426=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2106, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                            /*i*/come_call_finalizer3(generics_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_332 = come_decrement_ref_count2(var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                            var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            /*g*/come_call_finalizer3(__right_value426,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                            gComeFunResultObject = (void*)0;
                                            return __result165__;
                                        }
                                        list$1sTypeph_push_back(type_283->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_331));
                                        if(*info->p==44) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        else {
                                            if(*info->p==62) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                /*i*/come_call_finalizer3(generics_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_332 = come_decrement_ref_count2(var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid generics type\n");
                                                __result166__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value428=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2123, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                                /*i*/come_call_finalizer3(generics_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_332 = come_decrement_ref_count2(var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                                var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                /*g*/come_call_finalizer3(__right_value428,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                                gComeFunResultObject = (void*)0;
                                                return __result166__;
                                            }
                                        }
                                        /*i*/come_call_finalizer3(generics_type_331,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        var_name_332 = come_decrement_ref_count2(var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
                                    if(is_contained_generics_class(type_283,info)) {
                                        __dec_obj233=type_283;
                                        type_283=(struct sType*)come_increment_ref_count(solve_generics(type_283,info->generics_type,info));
                                        /* a*/come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        if(!output_generics_struct(type_283,type_283,info)) {
                                            new_name_334=(char*)come_increment_ref_count(create_generics_name(type_283,info));
                                            printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_334);
                                            exit(7);
                                            new_name_334 = come_decrement_ref_count2(new_name_334, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
                                    }
                                    type_283->mConstant=type_283->mConstant||constant_226;
                                    __dec_obj234=type_283->mAlignas;
                                    type_283->mAlignas=(struct sNode*)come_increment_ref_count(alignas__243);
                                    if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_283->mComeMemCore=type_283->mComeMemCore||come_mem_core__241;
                                    type_283->mRegister=register__229;
                                    type_283->mUnsigned=type_283->mUnsigned||unsigned__230;
                                    type_283->mVolatile=volatile__228;
                                    type_283->mStatic=type_283->mStatic||static__227;
                                    type_283->mUniq=type_283->mUniq||uniq__242;
                                    type_283->mRecord=type_283->mRecord||record__224;
                                    type_283->mException=type_283->mException||exception__225;
                                    type_283->mExtern=type_283->mExtern||extern__239;
                                    type_283->mInline=type_283->mInline||inline__240;
                                    type_283->mRestrict=type_283->mRestrict||restrict__234;
                                    type_283->mLongLong=type_283->mLongLong||long_long_232;
                                    type_283->mLong=type_283->mLong||long__231;
                                    type_283->mShort=type_283->mShort||short__233;
                                    type_283->mPointerNum+=pointer_num_278;
                                    type_283->mHeap=type_283->mHeap||heap_279;
                                }
                                else {
                                    if(struct__235) {
                                        klass_335=map$2charphsClassphp_operator_load_element(info->classes,type_name_223);
                                        if(klass_335==((void*)0)&&*info->p!=60) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_223),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2163, "sClass")),type_name_223,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                                        }
                                    }
                                    if(union__236) {
                                        klass_377=map$2charphsClassphp_operator_load_element(info->classes,type_name_223);
                                        if(klass_377==((void*)0)&&*info->p!=60) {
                                            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_223),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2170, "sClass")),type_name_223,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                                        }
                                    }
                                    __dec_obj235=type_283;
                                    type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2174, "sType")),type_name_223,(_Bool)0,info));
                                    /* a*/come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    type_283->mConstant=type_283->mConstant||constant_226;
                                    __dec_obj236=type_283->mAlignas;
                                    type_283->mAlignas=(struct sNode*)come_increment_ref_count(alignas__243);
                                    if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); }
                                    type_283->mComeMemCore=type_283->mComeMemCore||come_mem_core__241;
                                    type_283->mRegister=register__229;
                                    type_283->mUnsigned=type_283->mUnsigned||unsigned__230;
                                    type_283->mVolatile=volatile__228;
                                    type_283->mStatic=type_283->mStatic||static__227;
                                    type_283->mUniq=type_283->mUniq||uniq__242;
                                    type_283->mRecord=type_283->mRecord||record__224;
                                    type_283->mException=type_283->mException||exception__225;
                                    type_283->mExtern=type_283->mExtern||extern__239;
                                    type_283->mInline=type_283->mInline||inline__240;
                                    type_283->mRestrict=type_283->mRestrict||restrict__234;
                                    type_283->mLongLong=type_283->mLongLong||long_long_232;
                                    type_283->mLong=type_283->mLong||long__231;
                                    type_283->mShort=type_283->mShort||short__233;
                                    type_283->mPointerNum+=pointer_num_278;
                                    type_283->mHeap=type_283->mHeap||heap_279;
                                }
                            }
                        }
                    }
                    skip_pointer_attribute(info);
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_283->mPointerNum++;
                        if(type_283->mNoSolvedGenericsType->v1) {
                            type_283->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(*info->p==37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_283->mHeap=(_Bool)1;
                        if(type_283->mNoSolvedGenericsType->v1) {
                            type_283->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(*info->p==38) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_283->mNoHeap=(_Bool)1;
                        if(type_283->mNoSolvedGenericsType->v1) {
                            type_283->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                        }
                    }
                    if(*info->p==63) {
                        info->p++;
                        if(*info->p==63) {
                            info->p++;
                            type_283->mGuardValue=(_Bool)1;
                        }
                        else {
                            type_283->mNullValue=(_Bool)1;
                        }
                        skip_spaces_and_lf(info);
                    }
                    if(*info->p==96) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_283->mNoCallingDestructor=(_Bool)1;
                    }
                    skip_pointer_attribute(info);
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        skip_pointer_attribute(info);
                        type_283->mPointerNum++;
                        if(type_283->mNoSolvedGenericsType->v1) {
                            type_283->mNoSolvedGenericsType->v1->mPointerNum++;
                        }
                    }
                    if(*info->p==37) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        type_283->mHeap=(_Bool)1;
                        if(type_283->mNoSolvedGenericsType->v1) {
                            type_283->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                        }
                    }
                    if(parse_multiple_type&&*info->p==44) {
                        types_378=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2277, "list$1sTypeph"))));
                        list$1sTypeph_push_back(types_378,(struct sType*)come_increment_ref_count(sType_clone(type_283)));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value443=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                            type2_379=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                            name_380=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                            err_381=multiple_assign_var8->v3;
                            /*g*/come_call_finalizer3(__right_value443,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(!err_381) {
                                __result188__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value445=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2288, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                                /*i*/come_call_finalizer3(type2_379,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_380 = come_decrement_ref_count2(name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(types_378,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
                                var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*g*/come_call_finalizer3(__right_value445,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                gComeFunResultObject = (void*)0;
                                return __result188__;
                            }
                            list$1sTypeph_push_back(types_378,(struct sType*)come_increment_ref_count(sType_clone(type2_379)));
                            /*i*/come_call_finalizer3(type2_379,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_380 = come_decrement_ref_count2(name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        num_tuples_382=list$1sTypeph_length(types_378);
                        __dec_obj237=type_283;
                        type_283=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2296, "sType")),((char*)(__right_value448=xsprintf("tuple%d",num_tuples_382))),(_Bool)0,info));
                        /* a*/come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
                        __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        type_283->mPointerNum++;
                        type_283->mHeap=(_Bool)1;
                        for(                        o2_saved_383=(struct list$1sTypeph*)come_increment_ref_count((types_378)),it_384=list$1sTypeph_begin((o2_saved_383));                        !list$1sTypeph_end((o2_saved_383));                        it_384=list$1sTypeph_next((o2_saved_383))                        ){
                            list$1sTypeph_push_back(type_283->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_384)));
                        }
                        /*i*/come_call_finalizer3(o2_saved_383,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        if(is_contained_generics_class(type_283,info)) {
                            __dec_obj238=type_283;
                            type_283=(struct sType*)come_increment_ref_count(solve_generics(type_283,info->generics_type,info));
                            /* a*/come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(!output_generics_struct(type_283,type_283,info)) {
                                new_name_385=(char*)come_increment_ref_count(create_generics_name(type_283,info));
                                printf("output generics is failed(%s)\n",new_name_385);
                                exit(9);
                                new_name_385 = come_decrement_ref_count2(new_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                        }
                        type_283->mMultipleTypes=(_Bool)1;
                        /*i*/come_call_finalizer3(types_378,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(parse_variable_name) {
                        parse_sharp_v5(info);
                        if(var_name_between_brace_289&&*info->p==40) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            __dec_obj239=var_name_284;
                            var_name_284=(char*)come_increment_ref_count(__builtin_string(""));
                            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            if(anonymous_name_245) {
                                static int num_anonymous_var_name_386=0;
                                num_anonymous_var_name_386++;
                                __dec_obj240=var_name_284;
                                var_name_284=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_386));
                                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                if(xisalnum(*info->p)||*info->p==95) {
                                    __dec_obj241=var_name_284;
                                    var_name_284=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                                else {
                                    static int num_anonymous_var_name_387=0;
                                    num_anonymous_var_name_387++;
                                    __dec_obj242=var_name_284;
                                    var_name_284=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_387));
                                    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                            }
                        }
                        if(var_name_between_brace_289&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        if(*info->p==58) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            no_comma_388=info->no_comma;
                            info->no_comma=(_Bool)1;
                            node_389=(struct sNode*)come_increment_ref_count(expression_v13(info));
                            info->no_comma=no_comma_388;
                            __dec_obj243=type_283->mSizeNum;
                            type_283->mSizeNum=(struct sNode*)come_increment_ref_count(node_389);
                            if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); }
                            if(node_389) { node_389 = come_decrement_ref_count2(node_389, ((struct sNode*)node_389)->finalize, ((struct sNode*)node_389)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(*info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_283->mArrayPointerType=(_Bool)1;
            type_283->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_390=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(type_283->mArrayNum,(struct sNode*)come_increment_ref_count(node_390));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_390) { node_390 = come_decrement_ref_count2(node_390, ((struct sNode*)node_390)->finalize, ((struct sNode*)node_390)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    asm_name_391=(char*)come_increment_ref_count(parse_attribute(info));
    __dec_obj244=type_283->mAsmName;
    type_283->mAsmName=(char*)come_increment_ref_count(asm_name_391);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(type_283->mException) {
        type2_392=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2393, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type2_392->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2394, "sType")),"generics_type0",(_Bool)0,info)));
        list$1sTypephp_operator_store_element(type2_392->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2395, "sType")),"generics_type1",(_Bool)0,info)));
        type2_392->mPointerNum=1;
        type2_392->mHeap=(_Bool)1;
        type3_398=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2399, "sType")),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type3_398->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_283));
        list$1sTypephp_operator_store_element(type3_398->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2401, "sType")),"char*",(_Bool)0,info)));
        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type3_398->mGenericsTypes,1), "05type.c", 2402, 14))->mHeap=(_Bool)1;
        type4_399=(struct sType*)come_increment_ref_count(solve_generics(type2_392,type3_398,info));
        type4_399->mException=(_Bool)1;
        __dec_obj246=type4_399->mNoExceptionType->v1;
        type4_399->mNoExceptionType->v1=(struct sType*)come_increment_ref_count(sType_clone(type_283));
        /* a*/come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 0, 0, (void*)0);
        __result192__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value473=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2409, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type4_399),(char*)come_increment_ref_count(var_name_284),(_Bool)1)));
        /*i*/come_call_finalizer3(type2_392,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type4_399,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_391 = come_decrement_ref_count2(asm_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value473,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result192__;
        /*i*/come_call_finalizer3(type2_392,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_398,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type4_399,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result193__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value475=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2412, "struct tuple3$3sTypephcharphbool")),(struct sType*)come_increment_ref_count(type_283),(char*)come_increment_ref_count(var_name_284),(_Bool)1)));
    type_name_223 = come_decrement_ref_count2(type_name_223, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__243) { alignas__243 = come_decrement_ref_count2(alignas__243, ((struct sNode*)alignas__243)->finalize, ((struct sNode*)alignas__243)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(type_283,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_284 = come_decrement_ref_count2(var_name_284, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_391 = come_decrement_ref_count2(asm_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value475,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_305;
int i_306;
char* __result158__;
char* default_value_307;
char* __result159__;
default_value_307 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_305=self->head;
    i_306=0;
    while(it_305!=((void*)0)) {
        if(position==i_306) {
            __result158__ = gComeFunResultObject = __result_obj__ = it_305->item;
            gComeFunResultObject = (void*)0;
            return __result158__;
        }
        it_305=it_305->next;
        i_306++;
    }
    memset(&default_value_307,0,sizeof(char*));
    __result159__ = gComeFunResultObject = __result_obj__ = default_value_307;
    default_value_307 = come_decrement_ref_count2(default_value_307, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj199;
struct tuple1$1sTypeph* __result160__;
    __dec_obj199=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result160__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
char* __dec_obj214;
struct tuple3$3sTypepcharphbool* __result162__;
    self->v1=v1;
    __dec_obj214=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
char* __dec_obj215;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj215=self->v2;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj222;
struct sType* __dec_obj223;
char* __dec_obj224;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj222=self->c_value;
            __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj223=self->type;
            /* a*/come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj224=self->c_value_without_right_value_objects;
            __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_353;
unsigned int it_354;
_Bool same_key_exist_371;
char* it2_374;
struct map$2charphsClassph* __result187__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_353=string_get_hash_key(key)%self->size;
    it_354=hash_353;
    while((_Bool)1) {
        if(self->item_existance[it_354]) {
            if(string_equals(self->keys[it_354],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_354]);
                    self->keys[it_354] = come_decrement_ref_count2(self->keys[it_354], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_354]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_354]);
                    self->keys[it_354]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_354],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_354]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_354]=item;
                }
                break;
            }
            it_354++;
            if(it_354>=self->size) {
                it_354=0;
            }
            else {
                if(it_354==hash_353) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_354]=(_Bool)1;
            if(1) {
                self->keys[it_354]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_354]=key;
            }
            if(1) {
                self->items[it_354]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_354]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_371=(_Bool)0;
    for(    it2_374=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_374=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_374,key)) {
            same_key_exist_371=(_Bool)1;
        }
    }
    if(!same_key_exist_371) {
        list$1charp_push_back(self->key_list,key);
    }
    __result187__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_336;
void* __right_value431 = (void*)0;
char** keys_337;
void* __right_value432 = (void*)0;
struct sClass** items_338;
void* __right_value433 = (void*)0;
_Bool* item_existance_339;
int len_340;
char* it_343;
struct sClass* default_value_346;
struct sClass* it2_347;
unsigned int hash_350;
int n_351;
struct sClass* default_value_352;
default_value_346 = (void*)0;
default_value_352 = (void*)0;
    size_336=self->size*10;
    keys_337=(char**)come_increment_ref_count(((char**)(__right_value431=(char**)come_calloc(1, sizeof(char*)*(1*(size_336)), "./comelang.h", 1621, "char*%"))));
    items_338=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value432=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_336)), "./comelang.h", 1622, "sClass*%"))));
    item_existance_339=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value433=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_336)), "./comelang.h", 1623, "bool"))));
    len_340=0;
    for(    it_343=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_343=map$2charphsClassph_next(self)    ){
        memset(&default_value_346,0,sizeof(struct sClass*));
        it2_347=map$2charphsClassph_at(self,it_343,default_value_346);
        hash_350=string_get_hash_key(it_343)%size_336;
        n_351=hash_350;
        while((_Bool)1) {
            if(item_existance_339[n_351]) {
                n_351++;
                if(n_351>=size_336) {
                    n_351=0;
                }
                else {
                    if(n_351==hash_350) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_339[n_351]=(_Bool)1;
                keys_337[n_351]=it_343;
                items_338[n_351]=map$2charphsClassph_at(self,it_343,default_value_352);
                len_340++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_337;
    self->items=items_338;
    self->item_existance=item_existance_339;
    self->size=size_336;
    self->len=len_340;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_341;
char* __result167__;
char* __result168__;
char* result_342;
char* __result169__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_341,0,sizeof(char*));
        __result167__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result167__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result168__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    memset(&result_342,0,sizeof(char*));
    __result169__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_344;
char* __result170__;
char* __result171__;
char* result_345;
char* __result172__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_344,0,sizeof(char*));
        __result170__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result171__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    memset(&result_345,0,sizeof(char*));
    __result172__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_348;
unsigned int it_349;
struct sClass* __result173__;
struct sClass* __result174__;
struct sClass* __result175__;
struct sClass* __result176__;
    hash_348=string_get_hash_key(((char*)key))%self->size;
    it_349=hash_348;
    while((_Bool)1) {
        if(self->item_existance[it_349]) {
            if(string_equals(self->keys[it_349],key)) {
                __result173__ = gComeFunResultObject = __result_obj__ = self->items[it_349];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result173__;
            }
            it_349++;
            if(it_349>=self->size) {
                it_349=0;
            }
            else {
                if(it_349==hash_348) {
                    __result174__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result174__;
                }
            }
        }
        else {
            __result175__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result175__;
        }
    }
    __result176__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_355;
struct list_item$1charp* it_356;
struct list$1charp* __result180__;
    it2_355=0;
    it_356=self->head;
    while(it_356!=((void*)0)) {
        if(charp_equals(it_356->item,item)) {
            list$1charp_delete(self,it2_355,it2_355+1);
            break;
        }
        it2_355++;
        it_356=it_356->next;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_357;
struct list$1charp* __result177__;
struct list_item$1charp* it_360;
int i_361;
struct list_item$1charp* prev_it_362;
struct list_item$1charp* it_363;
int i_364;
struct list_item$1charp* prev_it_365;
struct list_item$1charp* it_366;
struct list_item$1charp* head_prev_it_367;
struct list_item$1charp* tail_it_368;
int i_369;
struct list_item$1charp* prev_it_370;
struct list$1charp* __result179__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_357=tail;
        tail=head;
        head=tmp_357;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result177__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_360=self->head;
            i_361=0;
            while(it_360!=((void*)0)) {
                if(i_361<tail) {
                    prev_it_362=it_360;
                    it_360=it_360->next;
                    i_361++;
                    /*i*/come_call_finalizer3(prev_it_362,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_361==tail) {
                        self->head=it_360;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_360=it_360->next;
                        i_361++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_363=self->head;
                i_364=0;
                while(it_363!=((void*)0)) {
                    if(i_364==head) {
                        self->tail=it_363->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_364>=head) {
                        prev_it_365=it_363;
                        it_363=it_363->next;
                        i_364++;
                        /*i*/come_call_finalizer3(prev_it_365,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_363=it_363->next;
                        i_364++;
                    }
                }
            }
            else {
                it_366=self->head;
                head_prev_it_367=((void*)0);
                tail_it_368=((void*)0);
                i_369=0;
                while(it_366!=((void*)0)) {
                    if(i_369==head) {
                        head_prev_it_367=it_366->prev;
                    }
                    if(i_369==tail) {
                        tail_it_368=it_366;
                    }
                    if(i_369>=head&&i_369<tail) {
                        prev_it_370=it_366;
                        it_366=it_366->next;
                        i_369++;
                        /*i*/come_call_finalizer3(prev_it_370,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_366=it_366->next;
                        i_369++;
                    }
                }
                if(head_prev_it_367!=((void*)0)) {
                    head_prev_it_367->next=tail_it_368;
                }
                if(tail_it_368!=((void*)0)) {
                    tail_it_368->prev=head_prev_it_367;
                }
            }
        }
    }
    __result179__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result179__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_358;
struct list_item$1charp* prev_it_359;
struct list$1charp* __result178__;
    it_358=self->head;
    while(it_358!=((void*)0)) {
        prev_it_359=it_358;
        it_358=it_358->next;
        /*i*/come_call_finalizer3(prev_it_359,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result178__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result178__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_372;
char* __result181__;
char* __result182__;
char* result_373;
char* __result183__;
result_372 = (void*)0;
result_373 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_372,0,sizeof(char*));
        __result181__ = gComeFunResultObject = __result_obj__ = result_372;
        gComeFunResultObject = (void*)0;
        return __result181__;
    }
    self->it=self->head;
    if(self->it) {
        __result182__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    memset(&result_373,0,sizeof(char*));
    __result183__ = gComeFunResultObject = __result_obj__ = result_373;
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_375;
char* __result184__;
char* __result185__;
char* result_376;
char* __result186__;
result_375 = (void*)0;
result_376 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_375,0,sizeof(char*));
        __result184__ = gComeFunResultObject = __result_obj__ = result_375;
        gComeFunResultObject = (void*)0;
        return __result184__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result185__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result185__;
    }
    memset(&result_376,0,sizeof(char*));
    __result186__ = gComeFunResultObject = __result_obj__ = result_376;
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result191__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result191__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_393;
int i_394;
struct sType* default_value_395;
struct list$1sTypeph* __result189__;
struct list_item$1sTypeph* it_396;
int i_397;
struct sType* __dec_obj245;
struct list$1sTypeph* __result190__;
default_value_395 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_393=self->len;
        for(        i_394=0;        i_394<position-len_393;        i_394++        ){
            memset(&default_value_395,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_395));
            /*i*/come_call_finalizer3(default_value_395,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result189__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result189__;
    }
    it_396=self->head;
    i_397=0;
    while(it_396!=((void*)0)) {
        if(position==i_397) {
            __dec_obj245=it_396->item;
            it_396->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj245,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_396=it_396->next;
        i_397++;
    }
    __result190__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

