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
struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};
struct list$1voidp
{
    struct list_item$1voidp* head;
    struct list_item$1voidp* tail;
    int len;
    struct list_item$1voidp* it;
};
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
    _Bool va_arg;
    _Bool in_fun_param;
    _Bool inhibits_output_code;
    _Bool inhibits_output_code2;
    _Bool in_generics_fun;
    _Bool in_clone_object;
};
struct tuple2$2sTypephcharph
{
    struct sType* v1;
    char* v2;
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
struct sStoreNode
{
    int sline;
    char* sname;
    char* name;
    _Bool alloc;
    struct sType* type;
    struct sNode* right_value;
    struct list$1charph* multiple_assign;
    struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare;
};
struct sLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct sFunLoadNode
{
    int sline;
    char* sname;
    char* name;
};
struct tuple2$2sNodephsNodeph
{
    struct sNode* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2sNodephsNodephph
{
    struct tuple2$2sNodephsNodeph* item;
    struct list_item$1tuple2$2sNodephsNodephph* prev;
    struct list_item$1tuple2$2sNodephsNodephph* next;
};
struct list$1tuple2$2sNodephsNodephph
{
    struct list_item$1tuple2$2sNodephsNodephph* head;
    struct list_item$1tuple2$2sNodephsNodephph* tail;
    int len;
    struct list_item$1tuple2$2sNodephsNodephph* it;
};
struct sArrayInitializer
{
    int sline;
    char* sname;
    struct list$1tuple2$2sNodephsNodephph* initializer;
};
struct tuple2$2voidpsNodeph
{
    void* v1;
    struct sNode* v2;
};
struct tuple3$3sTypephcharphvoidp
{
    struct sType* v1;
    char* v2;
    void* v3;
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
struct sNode* parse_normal_block(_Bool clang, struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block);
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
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v10(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v11(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* string_node_v12(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_null_node(struct sInfo* info);
_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);
struct sNode* expression_v13(struct sInfo* info);
struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);
struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);
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
struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
char* sStoreNode_kind(struct sStoreNode* self);
_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
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
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self);
static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self);
static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self);
static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self);
static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self);
static void CVALUE_finalize(struct CVALUE* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info);
char* sLoadNode_kind(struct sLoadNode* self);
_Bool sLoadNode_terminated(struct sLoadNode* self);
_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info);
char* sFunLoadNode_kind(struct sFunLoadNode* self);
_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info);
static void sFunLoadNode_finalize(struct sFunLoadNode* self);
struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info);
char* sArrayInitializer_kind(struct sArrayInitializer* self);
_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self);
static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self);
static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item);
static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self);
static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self);
static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self);
static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self);
static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self);
static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self);
struct sNode* parse_array_initializer(struct sInfo* info);
static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2);
static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2);
static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self);
static void sArrayInitializer_finalize(struct sArrayInitializer* self);
static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item);
static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3);
static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3);
static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void sLoadNode_finalize(struct sLoadNode* self);
static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self);
static void sStoreNode_finalize(struct sStoreNode* self);
static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self);
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
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2204, "buffer"))));
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
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2211, "buffer"))));
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
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2220, "buffer"))));
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
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2227, "buffer"))));
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
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2234, "buffer"))));
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
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2241, "buffer"))));
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
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2248, "buffer"))));
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
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2548, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2553, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2558, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2563, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2568, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2601, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2603, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
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
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2608, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2610, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
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
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2615, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2617, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
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
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2622, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2624, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
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
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2629, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2631, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
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
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2636, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2638, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
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
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2643, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2645, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
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
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2650, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2655, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2660, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2665, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2670, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2675, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2680, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2685, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2690, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short short* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2695, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2700, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2705, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2710, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long unsigned  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2715, "vector$1double")),len,self)));
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
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 998, "char")));
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
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 998, "char*")));
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
    self->items=((short short*)(__right_value99=(short short*)come_calloc(1, sizeof(short short)*(1*(self->size)), "./comelang.h", 998, "short")));
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
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 998, "int")));
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
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 998, "long")));
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
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 998, "float")));
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
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 998, "double")));
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










struct sStoreNode* sStoreNode_initialize(struct sStoreNode* self, char* name, struct list$1charph* multiple_assign, struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
char* __dec_obj16;
void* __right_value152 = (void*)0;
struct sType* __dec_obj58;
struct sNode* __dec_obj59;
void* __right_value153 = (void*)0;
struct list$1charph* __dec_obj60;
void* __right_value164 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj83;
struct sStoreNode* __result89__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj16=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->alloc=alloc;
    ((void*)0);
    __dec_obj58=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj59=self->right_value;
    self->right_value=(struct sNode*)come_increment_ref_count(right_value);
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    ((void*)0);
    __dec_obj60=self->multiple_assign;
    self->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(multiple_assign));
    /* a*/come_call_finalizer3(__dec_obj60,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    ((void*)0);
    __dec_obj83=self->multiple_declare;
    self->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(multiple_declare));
    /* a*/come_call_finalizer3(__dec_obj83,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(right_value) { right_value = come_decrement_ref_count2(right_value, ((struct sNode*)right_value)->finalize, ((struct sNode*)right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result89__;
}

char* sStoreNode_kind(struct sStoreNode* self){
void* __result_obj__=(void*)0;
void* __right_value165 = (void*)0;
char* __result90__;
    __result90__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("sStoreNode")));
    __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

_Bool sStoreNode_compile(struct sStoreNode* self, struct sInfo* info){
struct sVar* var__104;
void* __right_value166 = (void*)0;
struct sType* type_108;
struct list$1tuple3$3sTypephcharphsNodephph* o2_saved_109;
struct tuple3$3sTypephcharphsNodeph* it_112;
struct tuple3$3sTypephcharphsNodeph* multiple_assign_var1;
struct sType* type_115;
char* var_name_116;
struct sNode* right_value_117;
void* __right_value167 = (void*)0;
_Bool __result101__;
void* __right_value168 = (void*)0;
struct sType* left_type_118;
_Bool __result102__;
void* __right_value169 = (void*)0;
struct CVALUE* come_value_119;
void* __right_value170 = (void*)0;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct CVALUE* right_value_120;
struct sType* right_type_121;
int i_122;
struct list$1charph* o2_saved_123;
char* it_126;
struct sType* right_type2_129;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* multiple_var_name_134;
void* __right_value176 = (void*)0;
void* __right_value177 = (void*)0;
char* __dec_obj97;
struct list$1charph* o2_saved_135;
char* it_136;
void* __right_value178 = (void*)0;
struct sType* right_type2_137;
struct sVar* var__138;
void* __right_value179 = (void*)0;
struct sType* var_type_139;
void* __right_value180 = (void*)0;
struct sType* left_type_140;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
struct CVALUE* right_value2_141;
void* __right_value183 = (void*)0;
char* __dec_obj98;
void* __right_value184 = (void*)0;
struct sType* __dec_obj99;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
struct CVALUE* come_value_142;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
char* __dec_obj100;
void* __right_value190 = (void*)0;
char* __dec_obj101;
void* __right_value191 = (void*)0;
struct sType* __dec_obj102;
void* __right_value192 = (void*)0;
struct sVar* var__143;
void* __right_value193 = (void*)0;
struct sType* type_144;
void* __right_value194 = (void*)0;
_Bool __result111__;
void* __right_value195 = (void*)0;
struct sType* left_type_145;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
struct list$1sNodeph* o2_saved_146;
struct sNode* it_149;
void* __right_value198 = (void*)0;
struct CVALUE* come_value_152;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct CVALUE* come_value_153;
void* __right_value203 = (void*)0;
char* __dec_obj103;
void* __right_value204 = (void*)0;
struct sType* __dec_obj104;
struct sVar* var__157;
void* __right_value208 = (void*)0;
struct sType* type_158;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
_Bool array_initializer_159;
void* __right_value211 = (void*)0;
struct CVALUE* right_value_160;
struct sType* right_type_161;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
struct sType* var_type_162;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
struct sType* left_type_163;
struct sVar* var__164;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct CVALUE* come_value_165;
void* __right_value219 = (void*)0;
char* __dec_obj108;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct CVALUE* come_value_166;
void* __right_value225 = (void*)0;
char* __dec_obj109;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
struct CVALUE* come_value_167;
void* __right_value231 = (void*)0;
char* __dec_obj110;
void* __right_value232 = (void*)0;
struct sType* __dec_obj111;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct CVALUE* come_value_168;
void* __right_value238 = (void*)0;
char* __dec_obj112;
void* __right_value239 = (void*)0;
struct sType* __dec_obj113;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
_Bool __result119__;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct CVALUE* come_value_169;
void* __right_value245 = (void*)0;
char* __dec_obj114;
void* __right_value246 = (void*)0;
struct sType* __dec_obj115;
void* __right_value247 = (void*)0;
struct CVALUE* right_value_170;
struct sType* right_type_171;
struct sClass* current_stack_frame_struct_172;
struct sVar* parent_var_173;
struct sType* left_type_174;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
char* c_value_175;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct CVALUE* come_value_176;
void* __right_value253 = (void*)0;
char* __dec_obj116;
void* __right_value254 = (void*)0;
struct sType* __dec_obj117;
_Bool __result120__;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
char* c_value_177;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct CVALUE* come_value_178;
void* __right_value260 = (void*)0;
char* __dec_obj118;
void* __right_value261 = (void*)0;
struct sType* __dec_obj119;
_Bool __result121__;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
_Bool __result122__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct CVALUE* come_value_179;
void* __right_value266 = (void*)0;
char* __dec_obj120;
void* __right_value267 = (void*)0;
struct sType* __dec_obj121;
_Bool __result123__;
struct sVar* var__180;
_Bool __result124__;
void* __right_value268 = (void*)0;
struct sType* __dec_obj122;
void* __right_value269 = (void*)0;
struct sType* left_type_181;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct CVALUE* come_value_182;
void* __right_value274 = (void*)0;
char* __dec_obj123;
void* __right_value275 = (void*)0;
struct sType* __dec_obj124;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct CVALUE* come_value_183;
void* __right_value280 = (void*)0;
char* __dec_obj125;
void* __right_value281 = (void*)0;
struct sType* __dec_obj126;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct CVALUE* come_value_184;
void* __right_value286 = (void*)0;
char* __dec_obj127;
void* __right_value287 = (void*)0;
struct sType* __dec_obj128;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
_Bool __result125__;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct CVALUE* come_value_185;
void* __right_value292 = (void*)0;
char* __dec_obj129;
void* __right_value293 = (void*)0;
struct sType* __dec_obj130;
    if(self->multiple_declare) {
        var__104=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
        if(var__104) {
            err_msg(info,"Already appended this var name(%s)(1)",self->name);
            return (_Bool)0;
        }
        if(self->type==((void*)0)) {
            err_msg(info,"Require concrete variable type(%s)",self->name);
            return (_Bool)0;
        }
        type_108=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
        type_108->mFunctionParam=(_Bool)0;
        for(        o2_saved_109=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((self->multiple_declare)),it_112=list$1tuple3$3sTypephcharphsNodephph_begin((o2_saved_109));        !list$1tuple3$3sTypephcharphsNodephph_end((o2_saved_109));        it_112=list$1tuple3$3sTypephcharphsNodephph_next((o2_saved_109))        ){
            multiple_assign_var1=it_112;
            type_115=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            var_name_116=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            right_value_117=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v3);
            add_variable_to_table(var_name_116,(struct sType*)come_increment_ref_count(sType_clone(type_115)),info);
            var__104=get_variable_from_table(info->lv_table,var_name_116);
            if(var__104==((void*)0)) {
                err_msg(info,"var not found(%s)(ZY) at definition of variable\n",it_112);
                __result101__ = (_Bool)1;
                /*i*/come_call_finalizer3(type_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value_117) { right_value_117 = come_decrement_ref_count2(right_value_117, ((struct sNode*)right_value_117)->finalize, ((struct sNode*)right_value_117)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(o2_saved_109,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_108,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result101__;
            }
            left_type_118=(struct sType*)come_increment_ref_count(sType_clone(var__104->mType));
            if(right_value_117) {
                if(!node_compile(right_value_117,info)) {
                    __result102__ = (_Bool)0;
                    /*i*/come_call_finalizer3(type_115,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(right_value_117) { right_value_117 = come_decrement_ref_count2(right_value_117, ((struct sNode*)right_value_117)->finalize, ((struct sNode*)right_value_117)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(left_type_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(o2_saved_109,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_108,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result102__;
                }
                come_value_119=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s=%s;\n",((char*)(__right_value170=make_define_var(left_type_118,var__104->mCValueName,(_Bool)0,info))),come_value_119->c_value);
                __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_119,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__104->mCValueName,((char*)(__right_value171=make_type_name_string(left_type_118,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value172=make_define_var(left_type_118,var__104->mCValueName,(_Bool)0,info))));
                __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(type_115,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_116 = come_decrement_ref_count2(var_name_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_value_117) { right_value_117 = come_decrement_ref_count2(right_value_117, ((struct sNode*)right_value_117)->finalize, ((struct sNode*)right_value_117)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(left_type_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_109,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_108,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(self->multiple_assign) {
            if(!node_compile(self->right_value,info)) {
                return (_Bool)0;
            }
            right_value_120=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            right_type_121=right_value_120->type;
            dec_stack_ptr(1,info);
            if(right_type_121->mNoSolvedGenericsType->v1) {
                right_type_121=right_type_121->mNoSolvedGenericsType->v1;
            }
            i_122=0;
            for(            o2_saved_123=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_126=list$1charph_begin((o2_saved_123));            !list$1charph_end((o2_saved_123));            it_126=list$1charph_next((o2_saved_123))            ){
                if(i_122<list$1sTypeph_length(right_type_121->mGenericsTypes)) {
                    right_type2_129=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_121->mGenericsTypes,i_122), "07var.c", 86, 0));
                    right_type2_129->mFunctionParam=(_Bool)0;
                    add_variable_to_table(it_126,(struct sType*)come_increment_ref_count(sType_clone(right_type2_129)),info);
                }
                i_122++;
            }
            /*i*/come_call_finalizer3(o2_saved_123,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            static int num_multiple_var_133=0;
            multiple_var_name_134=(char*)come_increment_ref_count(xsprintf("multiple_assign_var%d",++num_multiple_var_133));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value176=make_define_var(right_value_120->type,multiple_var_name_134,(_Bool)0,info))));
            __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            add_come_code(info,"%s=%s;\n",multiple_var_name_134,right_value_120->c_value);
            __dec_obj97=right_value_120->c_value;
            right_value_120->c_value=(char*)come_increment_ref_count(string_clone(multiple_var_name_134));
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
            i_122=0;
            for(            o2_saved_135=(struct list$1charph*)come_increment_ref_count((self->multiple_assign)),it_136=list$1charph_begin((o2_saved_135));            !list$1charph_end((o2_saved_135));            it_136=list$1charph_next((o2_saved_135))            ){
                if(i_122<list$1sTypeph_length(right_type_121->mGenericsTypes)) {
                    right_type2_137=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(right_type_121->mGenericsTypes,i_122), "07var.c", 105, 1))));
                    var__138=get_variable_from_table(info->lv_table,it_136);
                    var_type_139=(struct sType*)come_increment_ref_count(sType_clone(var__138->mType));
                    var_type_139->mStatic=(_Bool)0;
                    left_type_140=(struct sType*)come_increment_ref_count(sType_clone(var__138->mType));
                    right_value2_141=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 114, "CVALUE"))));
                    __dec_obj98=right_value2_141->c_value;
                    right_value2_141->c_value=(char*)come_increment_ref_count(xsprintf("%s->v%d",right_value_120->c_value,i_122+1));
                    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj99=right_value2_141->type;
                    right_value2_141->type=(struct sType*)come_increment_ref_count(sType_clone(right_type2_137));
                    /* a*/come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
                    right_value2_141->var=((void*)0);
                    come_value_142=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 120, "CVALUE"))));
                    check_assign_type(((char*)(__right_value188=xsprintf("\%s is assining to}",((char*)(__right_value187=string_to_string(self->name)))))),left_type_140,right_type2_137,come_value_142,(_Bool)0,(_Bool)1,info);
                    __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(right_type2_137->mHeap&&left_type_140->mHeap&&left_type_140->mPointerNum>0&&right_type2_137->mPointerNum>0) {
                        std_move(left_type_140,right_type2_137,right_value2_141,info,(_Bool)0);
                        __dec_obj100=come_value_142->c_value;
                        come_value_142->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__138->mCValueName,right_value2_141->c_value));
                        __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        __dec_obj101=come_value_142->c_value;
                        come_value_142->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__138->mCValueName,right_value2_141->c_value));
                        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    __dec_obj102=come_value_142->type;
                    come_value_142->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_140));
                    /* a*/come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_142->var=var__138;
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value192=make_define_var(left_type_140,var__138->mCValueName,(_Bool)0,info))));
                    __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"%s;\n",come_value_142->c_value);
                    /*i*/come_call_finalizer3(right_type2_137,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(var_type_139,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(left_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(right_value2_141,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(come_value_142,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                i_122++;
            }
            /*i*/come_call_finalizer3(o2_saved_135,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_value_120,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            multiple_var_name_134 = come_decrement_ref_count2(multiple_var_name_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(self->right_value==((void*)0)) {
                var__143=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                if(var__143) {
                    err_msg(info,"Already appended this var name(%s)(1)",self->name);
                    return (_Bool)0;
                }
                if(self->type==((void*)0)) {
                    err_msg(info,"Require concrete variable type(%s)",self->name);
                    return (_Bool)0;
                }
                type_144=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
                type_144->mFunctionParam=(_Bool)0;
                add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_144)),info);
                var__143=get_variable_from_table(info->lv_table,self->name);
                if(var__143==((void*)0)) {
                    var__143=get_variable_from_table(info->gv_table,self->name);
                    if(var__143==((void*)0)) {
                        err_msg(info,"var not found(%s)(Y) at definition of variable\n",self->name);
                        __result111__ = (_Bool)1;
                        /*i*/come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result111__;
                    }
                }
                left_type_145=(struct sType*)come_increment_ref_count(sType_clone(var__143->mType));
                if(list$1sNodeph_length(left_type_145->mArrayNum)>0) {
                    add_come_code(info,"%s;\n",((char*)(__right_value196=make_define_var(left_type_145,var__143->mCValueName,(_Bool)0,info))));
                    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    add_come_code(info,"memset(&%s, 0, sizeof(%s)",var__143->mCValueName,((char*)(__right_value197=make_type_name_string(left_type_145,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    for(                    o2_saved_146=(struct list$1sNodeph*)come_increment_ref_count((left_type_145->mArrayNum)),it_149=list$1sNodeph_begin((o2_saved_146));                    !list$1sNodeph_end((o2_saved_146));                    it_149=list$1sNodeph_next((o2_saved_146))                    ){
                        if(!node_compile(it_149,info)) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        come_value_152=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        add_come_code(info,"*(%s)",come_value_152->c_value);
                        /*i*/come_call_finalizer3(come_value_152,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_146,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    add_come_code(info,");\n");
                }
                else {
                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value199=make_define_var(left_type_145,var__143->mCValueName,(_Bool)0,info))));
                    __right_value199 = come_decrement_ref_count2(__right_value199, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    if(left_type_145->mPointerNum>0) {
                        add_come_code_at_function_head2(info,"%s = (void*)0;\n",var__143->mCValueName);
                    }
                    else {
                        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__143->mCValueName,((char*)(__right_value200=make_type_name_string(left_type_145,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                        __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    }
                }
                come_value_153=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 203, "CVALUE"))));
                __dec_obj103=come_value_153->c_value;
                come_value_153->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__143->mCValueName));
                __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj104=come_value_153->type;
                come_value_153->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_145));
                /* a*/come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_153->var=var__143;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_153));
                if(!left_type_145->mClass->mNumber&&left_type_145->mPointerNum==0) {
                    var__143->mType->mAllocaValue=(_Bool)1;
                }
                /*i*/come_call_finalizer3(type_144,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(self->alloc) {
                    var__157=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                    if(var__157) {
                        err_msg(info,"Already appended this var name(%s)(2)",self->name);
                        return (_Bool)0;
                    }
                    if(self->type==((void*)0)) {
                    }
                    else {
                        type_158=(struct sType*)come_increment_ref_count(solve_generics(self->type,info->generics_type,info));
                        type_158->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(type_158)),info);
                        /*i*/come_call_finalizer3(type_158,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(!node_compile(self->right_value,info)) {
                        return (_Bool)0;
                    }
                    array_initializer_159=string_operator_equals(((char*)(__right_value210=self->right_value->kind(self->right_value->_protocol_obj))),"sArrayInitializer");
                    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    right_value_160=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    right_type_161=right_value_160->type;
                    dec_stack_ptr(1,info);
                    if(self->type==((void*)0)) {
                        right_type_161->mFunctionParam=(_Bool)0;
                        add_variable_to_table(self->name,(struct sType*)come_increment_ref_count(sType_clone(right_type_161)),info);
                    }
                    else {
                    }
                    var__157=get_variable_from_table(info->lv_table,self->name);
                    var_type_162=(struct sType*)come_increment_ref_count(sType_clone(var__157->mType));
                    var_type_162->mStatic=(_Bool)0;
                    if(!array_initializer_159&&!var__157->mType->mStatic&&!var_type_162->mConstant&&list$1sNodeph_length(var_type_162->mArrayNum)==0) {
                        if(var_type_162->mClass->mNumber) {
                        }
                        else {
                            if((var_type_162->mClass->mStruct||var_type_162->mClass->mUnion||var_type_162->mClass->mEnum)||var_type_162->mPointerNum>0) {
                            }
                            else {
                                add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var__157->mCValueName,((char*)(__right_value214=make_type_name_string(var_type_162,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
                                __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                    left_type_163=(struct sType*)come_increment_ref_count(sType_clone(var__157->mType));
                    if(array_initializer_159) {
                        var__164=map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name);
                        add_come_code(info,"%s=%s;\n",((char*)(__right_value216=make_define_var(var__164->mType,var__164->mCValueName,(_Bool)0,info))),right_value_160->c_value);
                        __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_value_165=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 269, "CVALUE"))));
                        __dec_obj108=come_value_165->c_value;
                        come_value_165->c_value=(char*)come_increment_ref_count(__builtin_string(""));
                        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_165));
                        transpiler_clear_last_code(info);
                        /*i*/come_call_finalizer3(come_value_165,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(var__157->mType->mStatic||var__157->mType->mConstant) {
                            check_assign_type(((char*)(__right_value221=xsprintf("\%s is assining to",((char*)(__right_value220=string_to_string(self->name)))))),left_type_163,right_type_161,right_value_160,(_Bool)0,(_Bool)1,info);
                            __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            add_come_code(info,"%s=%s;\n",((char*)(__right_value222=make_define_var(left_type_163,var__157->mCValueName,(_Bool)0,info))),right_value_160->c_value);
                            __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            come_value_166=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 280, "CVALUE"))));
                            __dec_obj109=come_value_166->c_value;
                            come_value_166->c_value=(char*)come_increment_ref_count(__builtin_string(""));
                            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
                            transpiler_clear_last_code(info);
                            /*i*/come_call_finalizer3(come_value_166,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(right_type_161->mHeap&&left_type_163->mHeap&&left_type_163->mPointerNum>0&&right_type_161->mPointerNum>0) {
                                check_assign_type(((char*)(__right_value227=xsprintf("\%s is assining to",((char*)(__right_value226=string_to_string(self->name)))))),left_type_163,right_type_161,right_value_160,(_Bool)0,(_Bool)1,info);
                                __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                std_move(left_type_163,right_type_161,right_value_160,info,(_Bool)0);
                                add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value228=make_define_var(left_type_163,var__157->mCValueName,(_Bool)0,info))));
                                __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                come_value_167=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 294, "CVALUE"))));
                                __dec_obj110=come_value_167->c_value;
                                come_value_167->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__157->mCValueName,right_value_160->c_value));
                                __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj111=come_value_167->type;
                                come_value_167->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_163));
                                /* a*/come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_167->var=var__157;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
                                add_come_last_code(info,"%s;\n",come_value_167->c_value);
                                /*i*/come_call_finalizer3(come_value_167,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                if(left_type_163->mPointerNum>0&&left_type_163->mHeap&&string_operator_equals(right_type_161->mClass->mName,"void")&&right_type_161->mPointerNum>0) {
                                    check_assign_type(((char*)(__right_value234=xsprintf("\%s is assining to",((char*)(__right_value233=string_to_string(self->name)))))),left_type_163,right_type_161,right_value_160,(_Bool)0,(_Bool)1,info);
                                    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value235=make_define_var(left_type_163,var__157->mCValueName,(_Bool)0,info))));
                                    __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    come_value_168=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 311, "CVALUE"))));
                                    __dec_obj112=come_value_168->c_value;
                                    come_value_168->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__157->mCValueName,right_value_160->c_value));
                                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj113=come_value_168->type;
                                    come_value_168->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_163));
                                    /* a*/come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value_168->var=var__157;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_168));
                                    add_come_last_code(info,"%s;\n",come_value_168->c_value);
                                    /*i*/come_call_finalizer3(come_value_168,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    check_assign_type(((char*)(__right_value241=xsprintf("\%s is assining to",((char*)(__right_value240=string_to_string(self->name)))))),left_type_163,right_type_161,right_value_160,(_Bool)0,(_Bool)1,info);
                                    __right_value240 = come_decrement_ref_count2(__right_value240, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value241 = come_decrement_ref_count2(__right_value241, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    if(left_type_163->mHeap&&!right_value_160->type->mHeap) {
                                        err_msg(info,"require right value as heap object(%s)",self->name);
                                        __result119__ = (_Bool)0;
                                        /*i*/come_call_finalizer3(right_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(var_type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(left_type_163,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result119__;
                                    }
                                    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value242=make_define_var(left_type_163,var__157->mCValueName,(_Bool)0,info))));
                                    __right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    come_value_169=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 331, "CVALUE"))));
                                    __dec_obj114=come_value_169->c_value;
                                    come_value_169->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__157->mCValueName,right_value_160->c_value));
                                    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj115=come_value_169->type;
                                    come_value_169->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_163));
                                    /* a*/come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value_169->var=var__157;
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_169));
                                    add_come_last_code(info,"%s;\n",come_value_169->c_value);
                                    /*i*/come_call_finalizer3(come_value_169,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                    /*i*/come_call_finalizer3(right_value_160,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(var_type_162,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(left_type_163,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(!node_compile(self->right_value,info)) {
                        return (_Bool)0;
                    }
                    right_value_170=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    right_type_171=right_value_170->type;
                    dec_stack_ptr(1,info);
                    current_stack_frame_struct_172=info->current_stack_frame_struct;
                    if(current_stack_frame_struct_172&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0)) {
                        parent_var_173=get_variable_from_table(info->lv_table->mParent,self->name);
                        if(parent_var_173!=((void*)0)) {
                            if(string_operator_not_equals(parent_var_173->mFunName,info->come_fun->mName)) {
                                left_type_174=parent_var_173->mType;
                                if(left_type_174->mPointerNum>0&&right_type_171->mPointerNum>0&&right_type_171->mHeap&&left_type_174->mHeap) {
                                    check_assign_type(((char*)(__right_value249=xsprintf("\%s is assigning to",((char*)(__right_value248=string_to_string(self->name)))))),left_type_174,right_type_171,right_value_170,(_Bool)0,(_Bool)1,info);
                                    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value249 = come_decrement_ref_count2(__right_value249, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    c_value_175=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_173->mCValueName));
                                    decrement_ref_count_object(parent_var_173->mType,c_value_175,info,(_Bool)0,(_Bool)0);
                                    std_move(left_type_174,right_type_171,right_value_170,info,(_Bool)0);
                                    come_value_176=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 368, "CVALUE"))));
                                    __dec_obj116=come_value_176->c_value;
                                    come_value_176->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_173->mCValueName,right_value_170->c_value));
                                    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    __dec_obj117=come_value_176->type;
                                    come_value_176->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_174));
                                    /* a*/come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    come_value_176->var=((void*)0);
                                    add_come_last_code(info,"%s;\n",come_value_176->c_value);
                                    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_176));
                                    __result120__ = (_Bool)1;
                                    c_value_175 = come_decrement_ref_count2(c_value_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result120__;
                                    c_value_175 = come_decrement_ref_count2(c_value_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(come_value_176,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                }
                                else {
                                    if(left_type_174->mPointerNum>0&&right_type_171->mPointerNum>0&&string_operator_equals(right_type_171->mClass->mName,"void")&&left_type_174->mHeap) {
                                        check_assign_type(((char*)(__right_value256=xsprintf("\%s is assigning to",((char*)(__right_value255=string_to_string(self->name)))))),left_type_174,right_type_171,right_value_170,(_Bool)0,(_Bool)1,info);
                                        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        c_value_177=(char*)come_increment_ref_count(xsprintf("*(parent->%s)",parent_var_173->mCValueName));
                                        decrement_ref_count_object(parent_var_173->mType,c_value_177,info,(_Bool)0,(_Bool)0);
                                        come_value_178=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 387, "CVALUE"))));
                                        __dec_obj118=come_value_178->c_value;
                                        come_value_178->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_173->mCValueName,right_value_170->c_value));
                                        __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj119=come_value_178->type;
                                        come_value_178->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_174));
                                        /* a*/come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_value_178->var=((void*)0);
                                        add_come_last_code(info,"%s;\n",come_value_178->c_value);
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
                                        __result121__ = (_Bool)1;
                                        c_value_177 = come_decrement_ref_count2(c_value_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result121__;
                                        c_value_177 = come_decrement_ref_count2(c_value_177, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    else {
                                        check_assign_type(((char*)(__right_value263=xsprintf("\%s is assigning to",((char*)(__right_value262=string_to_string(self->name)))))),left_type_174,right_type_171,right_value_170,(_Bool)0,(_Bool)1,info);
                                        __right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value263 = come_decrement_ref_count2(__right_value263, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        if(left_type_174->mHeap&&!right_value_170->type->mHeap) {
                                            err_msg(info,"require right value as heap object(%s)",self->name);
                                            __result122__ = (_Bool)0;
                                            /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                            return __result122__;
                                        }
                                        come_value_179=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 407, "CVALUE"))));
                                        __dec_obj120=come_value_179->c_value;
                                        come_value_179->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))=%s",parent_var_173->mCValueName,right_value_170->c_value));
                                        __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj121=come_value_179->type;
                                        come_value_179->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_174));
                                        /* a*/come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        come_value_179->var=((void*)0);
                                        add_come_last_code(info,"%s;\n",come_value_179->c_value);
                                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_179));
                                        __result123__ = (_Bool)1;
                                        /*i*/come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                        return __result123__;
                                        /*i*/come_call_finalizer3(come_value_179,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                }
                            }
                        }
                    }
                    var__180=get_variable_from_table(info->lv_table,self->name);
                    if(var__180==((void*)0)) {
                        var__180=get_variable_from_table(info->gv_table,self->name);
                        if(var__180==((void*)0)) {
                            err_msg(info,"var not found(%s)(X) at storing variable\n",self->name);
                            __result124__ = (_Bool)1;
                            /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            return __result124__;
                        }
                    }
                    if(var__180->mType==((void*)0)) {
                        __dec_obj122=var__180->mType;
                        var__180->mType=(struct sType*)come_increment_ref_count(sType_clone(right_type_171));
                        /* a*/come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    left_type_181=(struct sType*)come_increment_ref_count(sType_clone(var__180->mType));
                    if((var__180->mType->mStatic||var__180->mType->mConstant)&&!var__180->mGlobal) {
                        check_assign_type(((char*)(__right_value271=xsprintf("\%s is assining to",((char*)(__right_value270=string_to_string(self->name)))))),left_type_181,right_type_171,right_value_170,(_Bool)0,(_Bool)1,info);
                        __right_value270 = come_decrement_ref_count2(__right_value270, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_value_182=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 443, "CVALUE"))));
                        __dec_obj123=come_value_182->c_value;
                        come_value_182->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__180->mCValueName,right_value_170->c_value));
                        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj124=come_value_182->type;
                        come_value_182->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_181));
                        /* a*/come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_value_182->var=var__180;
                        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
                        add_come_last_code(info,"%s;\n",come_value_182->c_value);
                        /*i*/come_call_finalizer3(come_value_182,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(right_type_171->mHeap&&left_type_181->mHeap&&left_type_181->mPointerNum>0&&right_type_171->mPointerNum>0) {
                            check_assign_type(((char*)(__right_value277=xsprintf("\%s is assining to",((char*)(__right_value276=string_to_string(self->name)))))),left_type_181,right_type_171,right_value_170,(_Bool)0,(_Bool)1,info);
                            __right_value276 = come_decrement_ref_count2(__right_value276, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value277 = come_decrement_ref_count2(__right_value277, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            decrement_ref_count_object(left_type_181,var__180->mCValueName,info,(_Bool)0,(_Bool)0);
                            std_move(left_type_181,right_type_171,right_value_170,info,(_Bool)0);
                            come_value_183=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 460, "CVALUE"))));
                            __dec_obj125=come_value_183->c_value;
                            come_value_183->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__180->mCValueName,right_value_170->c_value));
                            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __dec_obj126=come_value_183->type;
                            come_value_183->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_181));
                            /* a*/come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                            come_value_183->var=var__180;
                            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
                            add_come_last_code(info,"%s;\n",come_value_183->c_value);
                            /*i*/come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            if(left_type_181->mPointerNum>0&&left_type_181->mHeap&&string_operator_equals(right_type_171->mClass->mName,"void")&&right_type_171->mPointerNum>0) {
                                check_assign_type(((char*)(__right_value283=xsprintf("\%s is assining to",((char*)(__right_value282=string_to_string(self->name)))))),left_type_181,right_type_171,right_value_170,(_Bool)0,(_Bool)1,info);
                                __right_value282 = come_decrement_ref_count2(__right_value282, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value283 = come_decrement_ref_count2(__right_value283, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                decrement_ref_count_object(left_type_181,var__180->mCValueName,info,(_Bool)0,(_Bool)0);
                                come_value_184=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 476, "CVALUE"))));
                                __dec_obj127=come_value_184->c_value;
                                come_value_184->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__180->mCValueName,right_value_170->c_value));
                                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj128=come_value_184->type;
                                come_value_184->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_181));
                                /* a*/come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_184->var=var__180;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
                                add_come_last_code(info,"%s;\n",come_value_184->c_value);
                                /*i*/come_call_finalizer3(come_value_184,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                            else {
                                check_assign_type(((char*)(__right_value289=xsprintf("\%s is assining to",((char*)(__right_value288=string_to_string(self->name)))))),left_type_181,right_type_171,right_value_170,(_Bool)0,(_Bool)1,info);
                                __right_value288 = come_decrement_ref_count2(__right_value288, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value289 = come_decrement_ref_count2(__right_value289, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                if(left_type_181->mHeap&&!right_value_170->type->mHeap) {
                                    err_msg(info,"require right value as heap object(%s)",self->name);
                                    __result125__ = (_Bool)0;
                                    /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(left_type_181,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result125__;
                                }
                                come_value_185=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 494, "CVALUE"))));
                                __dec_obj129=come_value_185->c_value;
                                come_value_185->c_value=(char*)come_increment_ref_count(xsprintf("%s=%s",var__180->mCValueName,right_value_170->c_value));
                                __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
                                __dec_obj130=come_value_185->type;
                                come_value_185->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_181));
                                /* a*/come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_value_185->var=var__180;
                                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_185));
                                add_come_last_code(info,"%s;\n",come_value_185->c_value);
                                /*i*/come_call_finalizer3(come_value_185,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            }
                        }
                    }
                    /*i*/come_call_finalizer3(right_value_170,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(left_type_181,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result65__;
void* __right_value118 = (void*)0;
struct sType* result_64;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj37;
void* __right_value122 = (void*)0;
struct tuple1$1sTypeph* __dec_obj38;
void* __right_value123 = (void*)0;
char* __dec_obj39;
void* __right_value130 = (void*)0;
struct list$1sTypeph* __dec_obj43;
void* __right_value138 = (void*)0;
struct list$1sNodeph* __dec_obj47;
void* __right_value139 = (void*)0;
struct list$1sTypeph* __dec_obj48;
void* __right_value146 = (void*)0;
struct list$1charph* __dec_obj52;
void* __right_value147 = (void*)0;
struct tuple1$1sTypeph* __dec_obj53;
void* __right_value148 = (void*)0;
struct sNode* __dec_obj54;
void* __right_value149 = (void*)0;
struct sNode* __dec_obj55;
void* __right_value150 = (void*)0;
char* __dec_obj56;
void* __right_value151 = (void*)0;
char* __dec_obj57;
struct sType* __result82__;
    if(self==(void*)0) {
        __result65__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_64=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_64->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj37=result_64->mNoSolvedGenericsType;
        result_64->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj37,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj38=result_64->mOriginalLoadVarType;
        result_64->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj38,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj39=result_64->mGenericsName;
        result_64->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj43=result_64->mGenericsTypes;
        result_64->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj47=result_64->mArrayNum;
        result_64->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj47,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj48=result_64->mParamTypes;
        result_64->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj52=result_64->mParamNames;
        result_64->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj53=result_64->mResultType;
        result_64->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj53,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj54=result_64->mAlignas;
        result_64->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_64->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_64->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_64->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_64->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_64->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_64->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_64->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_64->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_64->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_64->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_64->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_64->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_64->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_64->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_64->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_64->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_64->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_64->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_64->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_64->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_64->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_64->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_64->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_64->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj55=result_64->mSizeNum;
        result_64->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_64->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_64->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj56=result_64->mOriginalTypeName;
        result_64->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_64->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_64->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_64->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_64->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_64->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_64->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_64->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_64->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj57=result_64->mAsmName;
        result_64->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_64->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_64->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_64->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_64->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_64->mMultipleTypes=self->mMultipleTypes;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_64;
    /*i*/come_call_finalizer3(result_64,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result66__;
void* __right_value119 = (void*)0;
struct tuple1$1sTypeph* result_65;
void* __right_value120 = (void*)0;
struct sType* __dec_obj17;
struct tuple1$1sTypeph* __result67__;
    if(self==(void*)0) {
        __result66__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    result_65=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj17=result_65->v1;
        result_65->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj17,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = result_65;
    /*i*/come_call_finalizer3(result_65,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void sType_finalize(struct sType* self){
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
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj18=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj18,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj20=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj20,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj22=self->mGenericsName;
            __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj23=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj23,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj25=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj25,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj27=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj27,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj28=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj28,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj30=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj30,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj32=self->mAlignas;
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj33=self->mSizeNum;
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj34=self->mOriginalTypeName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj35=self->mAsmName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_66;
struct list_item$1sTypeph* prev_it_67;
    it_66=self->head;
    while(it_66!=((void*)0)) {
        prev_it_67=it_66;
        it_66=it_66->next;
        /*i*/come_call_finalizer3(prev_it_67,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj24;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj24=self->item;
            /* a*/come_call_finalizer3(__dec_obj24,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_68;
struct list_item$1sTypeph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        /*i*/come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_70;
struct list_item$1sNodeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj26;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj26=self->item;
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_72;
struct list_item$1sNodeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_74;
struct list_item$1charph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj29;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj29=self->item;
            __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_76;
struct list_item$1charph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj31;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj31=self->v1;
            /* a*/come_call_finalizer3(__dec_obj31,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj36;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj36=self->v1;
            /* a*/come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result68__;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1sTypeph* result_78;
struct list_item$1sTypeph* it_79;
void* __right_value129 = (void*)0;
struct list$1sTypeph* __result71__;
    if(self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_78=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 137, "list$1sTypeph"))));
    it_79=self->head;
    while(it_79!=((void*)0)) {
        list$1sTypeph_add(result_78,(struct sType*)come_increment_ref_count(sType_clone(it_79->item)));
        it_79=it_79->next;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_78;
    /*i*/come_call_finalizer3(result_78,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj40;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj41;
void* __right_value128 = (void*)0;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj42;
struct list$1sTypeph* __result70__;
    if(self->len==0) {
        litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 151, "list_item$1sTypeph"))));
        litem_80->prev=((void*)0);
        litem_80->next=((void*)0);
        __dec_obj40=litem_80->item;
        litem_80->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_80;
        self->head=litem_80;
    }
    else {
        if(self->len==1) {
            litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 161, "list_item$1sTypeph"))));
            litem_81->prev=self->head;
            litem_81->next=((void*)0);
            __dec_obj41=litem_81->item;
            litem_81->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj41,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_81;
            self->head->next=litem_81;
        }
        else {
            litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 171, "list_item$1sTypeph"))));
            litem_82->prev=self->tail;
            litem_82->next=((void*)0);
            __dec_obj42=litem_82->item;
            litem_82->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_82;
            self->tail=litem_82;
        }
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
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1sNodeph* result_83;
struct list_item$1sNodeph* it_84;
void* __right_value137 = (void*)0;
struct list$1sNodeph* __result77__;
    if(self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_83=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 137, "list$1sNodeph"))));
    it_84=self->head;
    while(it_84!=((void*)0)) {
        list$1sNodeph_add(result_83,(struct sNode*)come_increment_ref_count(sNode_clone(it_84->item)));
        it_84=it_84->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_83;
    /*i*/come_call_finalizer3(result_83,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_85;
struct sNode* __dec_obj44;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_86;
struct sNode* __dec_obj45;
void* __right_value135 = (void*)0;
struct list_item$1sNodeph* litem_87;
struct sNode* __dec_obj46;
struct list$1sNodeph* __result74__;
    if(self->len==0) {
        litem_85=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 151, "list_item$1sNodeph"))));
        litem_85->prev=((void*)0);
        litem_85->next=((void*)0);
        __dec_obj44=litem_85->item;
        litem_85->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_85;
        self->head=litem_85;
    }
    else {
        if(self->len==1) {
            litem_86=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 161, "list_item$1sNodeph"))));
            litem_86->prev=self->head;
            litem_86->next=((void*)0);
            __dec_obj45=litem_86->item;
            litem_86->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count2(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_86;
            self->head->next=litem_86;
        }
        else {
            litem_87=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 171, "list_item$1sNodeph"))));
            litem_87->prev=self->tail;
            litem_87->next=((void*)0);
            __dec_obj46=litem_87->item;
            litem_87->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_87;
            self->tail=litem_87;
        }
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
void* __right_value136 = (void*)0;
struct sNode* result_88;
struct sNode* __result76__;
    if(self==(void*)0) {
        __result75__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    result_88=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_88->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_88->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_88->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_88->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_88->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_88->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_88->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_88->kind=self->kind;
    }
    __result76__ = gComeFunResultObject = __result_obj__ = result_88;
    if(result_88) { result_88 = come_decrement_ref_count2(result_88, ((struct sNode*)result_88)->finalize, ((struct sNode*)result_88)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result78__;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1charph* result_89;
struct list_item$1charph* it_90;
void* __right_value145 = (void*)0;
struct list$1charph* __result81__;
    if(self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_89=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 137, "list$1charph"))));
    it_90=self->head;
    while(it_90!=((void*)0)) {
        list$1charph_add(result_89,(char*)come_increment_ref_count(string_clone(it_90->item)));
        it_90=it_90->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_89;
    /*i*/come_call_finalizer3(result_89,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_91;
char* __dec_obj49;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_92;
char* __dec_obj50;
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_93;
char* __dec_obj51;
struct list$1charph* __result80__;
    if(self->len==0) {
        litem_91=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 151, "list_item$1charph"))));
        litem_91->prev=((void*)0);
        litem_91->next=((void*)0);
        __dec_obj49=litem_91->item;
        litem_91->item=(char*)come_increment_ref_count(item);
        __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_91;
        self->head=litem_91;
    }
    else {
        if(self->len==1) {
            litem_92=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 161, "list_item$1charph"))));
            litem_92->prev=self->head;
            litem_92->next=((void*)0);
            __dec_obj50=litem_92->item;
            litem_92->item=(char*)come_increment_ref_count(item);
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_92;
            self->head->next=litem_92;
        }
        else {
            litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 171, "list_item$1charph"))));
            litem_93->prev=self->tail;
            litem_93->next=((void*)0);
            __dec_obj51=litem_93->item;
            litem_93->item=(char*)come_increment_ref_count(item);
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_93;
            self->tail=litem_93;
        }
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephphp_clone(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result83__;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* result_96;
struct list_item$1tuple3$3sTypephcharphsNodephph* it_97;
void* __right_value163 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result88__;
    if(self==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    result_96=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 137, "list$1tuple3$3sTypephcharphsNodephph"))));
    it_97=self->head;
    while(it_97!=((void*)0)) {
        list$1tuple3$3sTypephcharphsNodephph_add(result_96,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodephp_clone(it_97->item)));
        it_97=it_97->next;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_96;
    /*i*/come_call_finalizer3(result_96,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_initialize(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1tuple3$3sTypephcharphsNodephphp_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_94;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_95;
    it_94=self->head;
    while(it_94!=((void*)0)) {
        prev_it_95=it_94;
        it_94=it_94->next;
        /*i*/come_call_finalizer3(prev_it_95,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple3$3sTypephcharphsNodephphp_finalize(struct list_item$1tuple3$3sTypephcharphsNodephph* self){
struct tuple3$3sTypephcharphsNodeph* __dec_obj61;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj61=self->item;
            /* a*/come_call_finalizer3(__dec_obj61,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_add(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value156 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_98;
struct tuple3$3sTypephcharphsNodeph* __dec_obj65;
void* __right_value157 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_99;
struct tuple3$3sTypephcharphsNodeph* __dec_obj69;
void* __right_value158 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_100;
struct tuple3$3sTypephcharphsNodeph* __dec_obj73;
struct list$1tuple3$3sTypephcharphsNodephph* __result85__;
    if(self->len==0) {
        litem_98=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value156=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 151, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_98->prev=((void*)0);
        litem_98->next=((void*)0);
        __dec_obj65=litem_98->item;
        litem_98->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj65,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_98;
        self->head=litem_98;
    }
    else {
        if(self->len==1) {
            litem_99=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value157=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 161, "list_item$1tuple3$3sTypephcharphsNodephph"))));
            litem_99->prev=self->head;
            litem_99->next=((void*)0);
            __dec_obj69=litem_99->item;
            litem_99->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_99;
            self->head->next=litem_99;
        }
        else {
            litem_100=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value158=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 171, "list_item$1tuple3$3sTypephcharphsNodephph"))));
            litem_100->prev=self->tail;
            litem_100->next=((void*)0);
            __dec_obj73=litem_100->item;
            litem_100->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj73,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_100;
            self->tail=litem_100;
        }
    }
    self->len++;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static void tuple3$3sTypephcharphsNodephp_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj74;
char* __dec_obj75;
struct sNode* __dec_obj76;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj74=self->v1;
            /* a*/come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj75=self->v2;
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj76=self->v3;
            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodephp_clone(struct tuple3$3sTypephcharphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* __result86__;
void* __right_value159 = (void*)0;
struct tuple3$3sTypephcharphsNodeph* result_101;
void* __right_value160 = (void*)0;
struct sType* __dec_obj77;
void* __right_value161 = (void*)0;
char* __dec_obj78;
void* __right_value162 = (void*)0;
struct sNode* __dec_obj79;
struct tuple3$3sTypephcharphsNodeph* __result87__;
    if(self==(void*)0) {
        __result86__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    result_101=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "tuple3$3sTypephcharphsNodephp_clone", 3, "tuple3$3sTypephcharphsNodeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj77=result_101->v1;
        result_101->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj78=result_101->v2;
        result_101->v2=(char*)come_increment_ref_count(string_clone(self->v2));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj79=result_101->v3;
        result_101->v3=(struct sNode*)come_increment_ref_count(sNode_clone(self->v3));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_101;
    /*i*/come_call_finalizer3(result_101,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void tuple3$3sTypephcharphsNodeph_finalize(struct tuple3$3sTypephcharphsNodeph* self){
struct sType* __dec_obj80;
char* __dec_obj81;
struct sNode* __dec_obj82;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj80=self->v1;
            /* a*/come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj81=self->v2;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v3!=((void*)0)) {
        if(self->v3==gComeFunResultObject) {
            __dec_obj82=self->v3;
            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v3) { self->v3 = come_decrement_ref_count2(self->v3, ((struct sNode*)self->v3)->finalize, ((struct sNode*)self->v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple3$3sTypephcharphsNodephph_finalize(struct list$1tuple3$3sTypephcharphsNodephph* self){
struct list_item$1tuple3$3sTypephcharphsNodephph* it_102;
struct list_item$1tuple3$3sTypephcharphsNodephph* prev_it_103;
    it_102=self->head;
    while(it_102!=((void*)0)) {
        prev_it_103=it_102;
        it_102=it_102->next;
        /*i*/come_call_finalizer3(prev_it_103,list_item$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_105;
unsigned int hash_106;
unsigned int it_107;
struct sVar* __result91__;
struct sVar* __result92__;
struct sVar* __result93__;
struct sVar* __result94__;
default_value_105 = (void*)0;
    memset(&default_value_105,0,sizeof(struct sVar*));
    hash_106=string_get_hash_key(((char*)key))%self->size;
    it_107=hash_106;
    while((_Bool)1) {
        if(self->item_existance[it_107]) {
            if(string_equals(self->keys[it_107],key)) {
                __result91__ = gComeFunResultObject = __result_obj__ = self->items[it_107];
                /*i*/come_call_finalizer3(default_value_105,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result91__;
            }
            it_107++;
            if(it_107>=self->size) {
                it_107=0;
            }
            else {
                if(it_107==hash_106) {
                    __result92__ = gComeFunResultObject = __result_obj__ = default_value_105;
                    /*i*/come_call_finalizer3(default_value_105,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result92__;
                }
            }
        }
        else {
            __result93__ = gComeFunResultObject = __result_obj__ = default_value_105;
            /*i*/come_call_finalizer3(default_value_105,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result93__;
        }
    }
    __result94__ = gComeFunResultObject = __result_obj__ = default_value_105;
    /*i*/come_call_finalizer3(default_value_105,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj90;
char* __dec_obj91;
struct sType* __dec_obj92;
char* __dec_obj93;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj90=self->mName;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj91=self->mCValueName;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj92=self->mType;
            /* a*/come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj93=self->mFunName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_begin(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_110;
struct tuple3$3sTypephcharphsNodeph* __result95__;
struct tuple3$3sTypephcharphsNodeph* __result96__;
struct tuple3$3sTypephcharphsNodeph* result_111;
struct tuple3$3sTypephcharphsNodeph* __result97__;
result_110 = (void*)0;
result_111 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_110,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result95__ = gComeFunResultObject = __result_obj__ = result_110;
        gComeFunResultObject = (void*)0;
        return __result95__;
    }
    self->it=self->head;
    if(self->it) {
        __result96__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    memset(&result_111,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result97__ = gComeFunResultObject = __result_obj__ = result_111;
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static _Bool list$1tuple3$3sTypephcharphsNodephph_end(struct list$1tuple3$3sTypephcharphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple3$3sTypephcharphsNodeph* list$1tuple3$3sTypephcharphsNodephph_next(struct list$1tuple3$3sTypephcharphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphsNodeph* result_113;
struct tuple3$3sTypephcharphsNodeph* __result98__;
struct tuple3$3sTypephcharphsNodeph* __result99__;
struct tuple3$3sTypephcharphsNodeph* result_114;
struct tuple3$3sTypephcharphsNodeph* __result100__;
result_113 = (void*)0;
result_114 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_113,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
        __result98__ = gComeFunResultObject = __result_obj__ = result_113;
        gComeFunResultObject = (void*)0;
        return __result98__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result99__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    memset(&result_114,0,sizeof(struct tuple3$3sTypephcharphsNodeph*));
    __result100__ = gComeFunResultObject = __result_obj__ = result_114;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj94;
struct sType* __dec_obj95;
char* __dec_obj96;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj94=self->c_value;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj95=self->type;
            /* a*/come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj96=self->c_value_without_right_value_objects;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_124;
char* __result103__;
char* __result104__;
char* result_125;
char* __result105__;
result_124 = (void*)0;
result_125 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_124,0,sizeof(char*));
        __result103__ = gComeFunResultObject = __result_obj__ = result_124;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    self->it=self->head;
    if(self->it) {
        __result104__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    memset(&result_125,0,sizeof(char*));
    __result105__ = gComeFunResultObject = __result_obj__ = result_125;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_127;
char* __result106__;
char* __result107__;
char* result_128;
char* __result108__;
result_127 = (void*)0;
result_128 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_127,0,sizeof(char*));
        __result106__ = gComeFunResultObject = __result_obj__ = result_127;
        gComeFunResultObject = (void*)0;
        return __result106__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result107__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result107__;
    }
    memset(&result_128,0,sizeof(char*));
    __result108__ = gComeFunResultObject = __result_obj__ = result_128;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_130;
int i_131;
struct sType* __result109__;
struct sType* default_value_132;
struct sType* __result110__;
default_value_132 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_130=self->head;
    i_131=0;
    while(it_130!=((void*)0)) {
        if(position==i_131) {
            __result109__ = gComeFunResultObject = __result_obj__ = it_130->item;
            gComeFunResultObject = (void*)0;
            return __result109__;
        }
        it_130=it_130->next;
        i_131++;
    }
    memset(&default_value_132,0,sizeof(struct sType*));
    __result110__ = gComeFunResultObject = __result_obj__ = default_value_132;
    /*i*/come_call_finalizer3(default_value_132,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_147;
struct sNode* __result112__;
struct sNode* __result113__;
struct sNode* result_148;
struct sNode* __result114__;
result_147 = (void*)0;
result_148 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_147,0,sizeof(struct sNode*));
        __result112__ = gComeFunResultObject = __result_obj__ = result_147;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    self->it=self->head;
    if(self->it) {
        __result113__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    memset(&result_148,0,sizeof(struct sNode*));
    __result114__ = gComeFunResultObject = __result_obj__ = result_148;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_150;
struct sNode* __result115__;
struct sNode* __result116__;
struct sNode* result_151;
struct sNode* __result117__;
result_150 = (void*)0;
result_151 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_150,0,sizeof(struct sNode*));
        __result115__ = gComeFunResultObject = __result_obj__ = result_150;
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result116__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    memset(&result_151,0,sizeof(struct sNode*));
    __result117__ = gComeFunResultObject = __result_obj__ = result_151;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value205 = (void*)0;
struct list_item$1CVALUEph* litem_154;
struct CVALUE* __dec_obj105;
void* __right_value206 = (void*)0;
struct list_item$1CVALUEph* litem_155;
struct CVALUE* __dec_obj106;
void* __right_value207 = (void*)0;
struct list_item$1CVALUEph* litem_156;
struct CVALUE* __dec_obj107;
struct list$1CVALUEph* __result118__;
    if(self->len==0) {
        litem_154=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value205=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 221, "list_item$1CVALUEph"))));
        litem_154->prev=((void*)0);
        litem_154->next=((void*)0);
        __dec_obj105=litem_154->item;
        litem_154->item=(struct CVALUE*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj105,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_154;
        self->head=litem_154;
    }
    else {
        if(self->len==1) {
            litem_155=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value206=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 231, "list_item$1CVALUEph"))));
            litem_155->prev=self->head;
            litem_155->next=((void*)0);
            __dec_obj106=litem_155->item;
            litem_155->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_155;
            self->head->next=litem_155;
        }
        else {
            litem_156=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value207=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 241, "list_item$1CVALUEph"))));
            litem_156->prev=self->tail;
            litem_156->next=((void*)0);
            __dec_obj107=litem_156->item;
            litem_156->item=(struct CVALUE*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_156;
            self->tail=litem_156;
        }
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

struct sLoadNode* sLoadNode_initialize(struct sLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
char* __dec_obj131;
struct sLoadNode* __result126__;
    ((struct sNodeBase*)(__right_value294=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value294,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj131=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* sLoadNode_kind(struct sLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __result127__;
    __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value296=__builtin_string("sLoadNode")));
    __right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

_Bool sLoadNode_terminated(struct sLoadNode* self){
    return (_Bool)0;
}

_Bool sLoadNode_compile(struct sLoadNode* self, struct sInfo* info){
struct sClass* current_stack_frame_struct_186;
struct sVar* parent_var_187;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct CVALUE* come_value_188;
struct sType* type_189;
void* __right_value299 = (void*)0;
char* __dec_obj134;
void* __right_value300 = (void*)0;
struct sType* __dec_obj135;
_Bool __result128__;
struct sVar* var__190;
struct sFun* fun_191;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct CVALUE* come_value_195;
void* __right_value303 = (void*)0;
char* __dec_obj151;
struct sType* __dec_obj152;
_Bool __result133__;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct CVALUE* come_value_196;
void* __right_value306 = (void*)0;
char* __dec_obj153;
void* __right_value307 = (void*)0;
struct sType* __dec_obj154;
void* __right_value308 = (void*)0;
struct sType* __dec_obj155;
_Bool __result135__;
    current_stack_frame_struct_186=info->current_stack_frame_struct;
    if(current_stack_frame_struct_186&&map$2charphsVarphp_operator_load_element(info->lv_table->mVars,self->name)==((void*)0)) {
        parent_var_187=get_variable_from_table(info->lv_table->mParent,self->name);
        if(parent_var_187!=((void*)0)) {
            if(string_operator_not_equals(parent_var_187->mFunName,info->come_fun->mName)) {
                come_value_188=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 537, "CVALUE"))));
                type_189=parent_var_187->mType;
                __dec_obj134=come_value_188->c_value;
                come_value_188->c_value=(char*)come_increment_ref_count(xsprintf("(*(parent->%s))",parent_var_187->mCValueName));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj135=come_value_188->type;
                come_value_188->type=(struct sType*)come_increment_ref_count(sType_clone(type_189));
                /* a*/come_call_finalizer3(__dec_obj135,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_188->var=((void*)0);
                add_come_last_code(info,"%s;\n",come_value_188->c_value);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
                __result128__ = (_Bool)1;
                /*i*/come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result128__;
                /*i*/come_call_finalizer3(come_value_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    var__190=get_variable_from_table(info->lv_table,self->name);
    if(var__190==((void*)0)) {
        var__190=get_variable_from_table(info->gv_table,self->name);
        if(var__190==((void*)0)) {
            fun_191=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
            if(fun_191) {
                come_value_195=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 564, "CVALUE"))));
                __dec_obj151=come_value_195->c_value;
                come_value_195->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_191->mName));
                __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj152=come_value_195->type;
                come_value_195->type=(struct sType*)come_increment_ref_count(fun_191->mLambdaType);
                /* a*/come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value_195->var=((void*)0);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_195));
                __result133__ = (_Bool)1;
                /*i*/come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                return __result133__;
                /*i*/come_call_finalizer3(come_value_195,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"var not found(%s)(Z) at loading variable\n",self->name);
                return (_Bool)1;
            }
        }
    }
    come_value_196=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 581, "CVALUE"))));
    __dec_obj153=come_value_196->c_value;
    come_value_196->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__190->mCValueName));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj154=come_value_196->type;
    come_value_196->type=(struct sType*)come_increment_ref_count(sType_clone(var__190->mType));
    /* a*/come_call_finalizer3(__dec_obj154,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_196->var=var__190;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
    if(list$1sNodeph_length(come_value_196->type->mArrayNum)==1) {
        __dec_obj155=come_value_196->type->mOriginalLoadVarType->v1;
        come_value_196->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(sType_clone(come_value_196->type));
        /* a*/come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1sNodeph_reset(come_value_196->type->mArrayNum);
        come_value_196->type->mPointerNum++;
        come_value_196->type->mOriginalTypeNamePointerNum=come_value_196->type->mPointerNum;
    }
    __result135__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_196,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result135__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_192;
unsigned int hash_193;
unsigned int it_194;
struct sFun* __result129__;
struct sFun* __result130__;
struct sFun* __result131__;
struct sFun* __result132__;
default_value_192 = (void*)0;
    memset(&default_value_192,0,sizeof(struct sFun*));
    hash_193=string_get_hash_key(((char*)key))%self->size;
    it_194=hash_193;
    while((_Bool)1) {
        if(self->item_existance[it_194]) {
            if(string_equals(self->keys[it_194],key)) {
                __result129__ = gComeFunResultObject = __result_obj__ = self->items[it_194];
                /*i*/come_call_finalizer3(default_value_192,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result129__;
            }
            it_194++;
            if(it_194>=self->size) {
                it_194=0;
            }
            else {
                if(it_194==hash_193) {
                    __result130__ = gComeFunResultObject = __result_obj__ = default_value_192;
                    /*i*/come_call_finalizer3(default_value_192,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result130__;
                }
            }
        }
        else {
            __result131__ = gComeFunResultObject = __result_obj__ = default_value_192;
            /*i*/come_call_finalizer3(default_value_192,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result131__;
        }
    }
    __result132__ = gComeFunResultObject = __result_obj__ = default_value_192;
    /*i*/come_call_finalizer3(default_value_192,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj136;
struct sType* __dec_obj137;
struct list$1sTypeph* __dec_obj138;
struct list$1charph* __dec_obj139;
struct list$1charph* __dec_obj140;
struct sType* __dec_obj141;
struct sBlock* __dec_obj142;
struct buffer* __dec_obj145;
struct buffer* __dec_obj146;
struct buffer* __dec_obj147;
struct buffer* __dec_obj148;
char* __dec_obj149;
char* __dec_obj150;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj136=self->mName;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj137=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj138=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj138,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj139=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj139,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj140=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj140,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj141=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj142=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj142,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj145=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj145,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj146=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj146,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj147=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj147,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj148=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj148,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj149=self->mComeHeader;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj150=self->mDeclareSName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj143;
struct sVarTable* __dec_obj144;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj143=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj143,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj144=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj144,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_197;
struct list_item$1sNodeph* prev_it_198;
struct list$1sNodeph* __result134__;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        /*i*/come_call_finalizer3(prev_it_198,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result134__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result134__;
}

struct sFunLoadNode* sFunLoadNode_initialize(struct sFunLoadNode* self, char* name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
char* __dec_obj156;
struct sFunLoadNode* __result136__;
    ((struct sNodeBase*)(__right_value309=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value309,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj156=self->name;
    self->name=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFunLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

char* sFunLoadNode_kind(struct sFunLoadNode* self){
void* __result_obj__=(void*)0;
void* __right_value311 = (void*)0;
char* __result137__;
    __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value311=__builtin_string("sFunLoadNode")));
    __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result137__;
}

_Bool sFunLoadNode_compile(struct sFunLoadNode* self, struct sInfo* info){
struct sFun* fun_199;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct CVALUE* come_value_200;
void* __right_value314 = (void*)0;
char* __dec_obj159;
struct sType* __dec_obj160;
    fun_199=map$2charphsFunphp_operator_load_element(info->funcs,self->name);
    if(fun_199==((void*)0)) {
        err_msg(info,"fun not found(%s) at loading variable\n",self->name);
        return (_Bool)0;
    }
    else {
        come_value_200=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 623, "CVALUE"))));
        __dec_obj159=come_value_200->c_value;
        come_value_200->c_value=(char*)come_increment_ref_count(xsprintf("%s",fun_199->mName));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj160=come_value_200->type;
        come_value_200->type=(struct sType*)come_increment_ref_count(fun_199->mLambdaType);
        /* a*/come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_200->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_200));
        /*i*/come_call_finalizer3(come_value_200,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

static void sFunLoadNode_finalize(struct sFunLoadNode* self){
char* __dec_obj157;
char* __dec_obj158;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj157=self->sname;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        if(self->name==gComeFunResultObject) {
            __dec_obj158=self->name;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sArrayInitializer* sArrayInitializer_initialize(struct sArrayInitializer* self, struct list$1tuple2$2sNodephsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
void* __right_value325 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj177;
struct sArrayInitializer* __result144__;
    ((struct sNodeBase*)(__right_value315=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value315,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj177=self->initializer;
    self->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(initializer));
    /* a*/come_call_finalizer3(__dec_obj177,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result144__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

char* sArrayInitializer_kind(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
void* __right_value326 = (void*)0;
char* __result145__;
    __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value326=__builtin_string("sArrayInitializer")));
    __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result145__;
}

_Bool sArrayInitializer_compile(struct sArrayInitializer* self, struct sInfo* info){
struct list$1tuple2$2sNodephsNodephph* initializer_211;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct buffer* buf_212;
int i_213;
struct sType* element_type_214;
struct list$1tuple2$2sNodephsNodephph* o2_saved_215;
struct tuple2$2sNodephsNodeph* it_218;
struct tuple2$2sNodephsNodeph* multiple_assign_var2;
struct sNode* index_221;
struct sNode* value_222;
struct CVALUE* come_value_223;
_Bool __result152__;
void* __right_value329 = (void*)0;
struct CVALUE* __dec_obj180;
_Bool __result153__;
void* __right_value330 = (void*)0;
struct CVALUE* come_value2_224;
void* __right_value331 = (void*)0;
struct sType* __dec_obj181;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct CVALUE* come_value_225;
void* __right_value335 = (void*)0;
char* __dec_obj182;
void* __right_value336 = (void*)0;
struct sType* __dec_obj183;
_Bool __result154__;
    initializer_211=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(self->initializer);
    buf_212=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "07var.c", 654, "buffer"))));
    buffer_append_str(buf_212,"{");
    i_213=0;
    element_type_214=((void*)0);
    for(    o2_saved_215=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((initializer_211)),it_218=list$1tuple2$2sNodephsNodephph_begin((o2_saved_215));    !list$1tuple2$2sNodephsNodephph_end((o2_saved_215));    it_218=list$1tuple2$2sNodephsNodephph_next((o2_saved_215))    ){
        multiple_assign_var2=it_218;
        index_221=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v1);
        value_222=(struct sNode*)come_increment_ref_count(multiple_assign_var2->v2);
        come_value_223=((void*)0);
        if(index_221) {
            if(!node_compile(index_221,info)) {
                __result152__ = (_Bool)0;
                if(index_221) { index_221 = come_decrement_ref_count2(index_221, ((struct sNode*)index_221)->finalize, ((struct sNode*)index_221)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(o2_saved_215,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(initializer_211,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result152__;
            }
            __dec_obj180=come_value_223;
            come_value_223=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            /* a*/come_call_finalizer3(__dec_obj180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
        if(!node_compile(value_222,info)) {
            __result153__ = (_Bool)0;
            if(index_221) { index_221 = come_decrement_ref_count2(index_221, ((struct sNode*)index_221)->finalize, ((struct sNode*)index_221)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(o2_saved_215,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(initializer_211,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result153__;
        }
        come_value2_224=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj181=element_type_214;
        element_type_214=(struct sType*)come_increment_ref_count(sType_clone(come_value2_224->type));
        /* a*/come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(come_value_223) {
            buffer_append_str(buf_212,((char*)(__right_value332=xsprintf("[%s] = %s",come_value_223->c_value,come_value2_224->c_value))));
            __right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf_212,come_value2_224->c_value);
        }
        i_213++;
        if(i_213!=list$1tuple2$2sNodephsNodephph_length(initializer_211)) {
            buffer_append_str(buf_212,",");
        }
        if(index_221) { index_221 = come_decrement_ref_count2(index_221, ((struct sNode*)index_221)->finalize, ((struct sNode*)index_221)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(value_222) { value_222 = come_decrement_ref_count2(value_222, ((struct sNode*)value_222)->finalize, ((struct sNode*)value_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_215,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_212,"}");
    come_value_225=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "07var.c", 693, "CVALUE"))));
    __dec_obj182=come_value_225->c_value;
    come_value_225->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_212));
    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj183=come_value_225->type;
    come_value_225->type=(struct sType*)come_increment_ref_count(sType_clone(element_type_214));
    /* a*/come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_225->type->mPointerNum++;
    come_value_225->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_225));
    __result154__ = (_Bool)1;
    /*i*/come_call_finalizer3(initializer_211,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_212,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_225,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result154__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephphp_clone(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result138__;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* result_203;
struct list_item$1tuple2$2sNodephsNodephph* it_204;
void* __right_value324 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __result143__;
    if(self==((void*)0)) {
        __result138__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result138__;
    }
    result_203=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 137, "list$1tuple2$2sNodephsNodephph"))));
    it_204=self->head;
    while(it_204!=((void*)0)) {
        list$1tuple2$2sNodephsNodephph_add(result_203,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodephp_clone(it_204->item)));
        it_204=it_204->next;
    }
    __result143__ = gComeFunResultObject = __result_obj__ = result_203;
    /*i*/come_call_finalizer3(result_203,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_initialize(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2sNodephsNodephph* __result139__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result139__;
}

static void list$1tuple2$2sNodephsNodephphp_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_201;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_202;
    it_201=self->head;
    while(it_201!=((void*)0)) {
        prev_it_202=it_201;
        it_201=it_201->next;
        /*i*/come_call_finalizer3(prev_it_202,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2sNodephsNodephphp_finalize(struct list_item$1tuple2$2sNodephsNodephph* self){
struct tuple2$2sNodephsNodeph* __dec_obj161;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj161=self->item;
            /* a*/come_call_finalizer3(__dec_obj161,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2sNodephsNodephph* list$1tuple2$2sNodephsNodephph_add(struct list$1tuple2$2sNodephsNodephph* self, struct tuple2$2sNodephsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value318 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_205;
struct tuple2$2sNodephsNodeph* __dec_obj164;
void* __right_value319 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_206;
struct tuple2$2sNodephsNodeph* __dec_obj167;
void* __right_value320 = (void*)0;
struct list_item$1tuple2$2sNodephsNodephph* litem_207;
struct tuple2$2sNodephsNodeph* __dec_obj170;
struct list$1tuple2$2sNodephsNodephph* __result140__;
    if(self->len==0) {
        litem_205=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value318=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 151, "list_item$1tuple2$2sNodephsNodephph"))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        __dec_obj164=litem_205->item;
        litem_205->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj164,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_205;
        self->head=litem_205;
    }
    else {
        if(self->len==1) {
            litem_206=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value319=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 161, "list_item$1tuple2$2sNodephsNodephph"))));
            litem_206->prev=self->head;
            litem_206->next=((void*)0);
            __dec_obj167=litem_206->item;
            litem_206->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj167,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_206;
            self->head->next=litem_206;
        }
        else {
            litem_207=(struct list_item$1tuple2$2sNodephsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2sNodephsNodephph*)(__right_value320=(struct list_item$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2sNodephsNodephph)*(1), "./comelang.h", 171, "list_item$1tuple2$2sNodephsNodephph"))));
            litem_207->prev=self->tail;
            litem_207->next=((void*)0);
            __dec_obj170=litem_207->item;
            litem_207->item=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj170,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_207;
            self->tail=litem_207;
        }
    }
    self->len++;
    __result140__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2sNodephsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

static void tuple2$2sNodephsNodephp_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj171;
struct sNode* __dec_obj172;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj171=self->v1;
            if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj172=self->v2;
            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodephp_clone(struct tuple2$2sNodephsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* __result141__;
void* __right_value321 = (void*)0;
struct tuple2$2sNodephsNodeph* result_208;
void* __right_value322 = (void*)0;
struct sNode* __dec_obj173;
void* __right_value323 = (void*)0;
struct sNode* __dec_obj174;
struct tuple2$2sNodephsNodeph* __result142__;
    if(self==(void*)0) {
        __result141__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    result_208=(struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "tuple2$2sNodephsNodephp_clone", 3, "tuple2$2sNodephsNodeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj173=result_208->v1;
        result_208->v1=(struct sNode*)come_increment_ref_count(sNode_clone(self->v1));
        if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj174=result_208->v2;
        result_208->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
    }
    __result142__ = gComeFunResultObject = __result_obj__ = result_208;
    /*i*/come_call_finalizer3(result_208,tuple2$2sNodephsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result142__;
}

static void tuple2$2sNodephsNodeph_finalize(struct tuple2$2sNodephsNodeph* self){
struct sNode* __dec_obj175;
struct sNode* __dec_obj176;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj175=self->v1;
            if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v1) { self->v1 = come_decrement_ref_count2(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj176=self->v2;
            if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2sNodephsNodephph_finalize(struct list$1tuple2$2sNodephsNodephph* self){
struct list_item$1tuple2$2sNodephsNodephph* it_209;
struct list_item$1tuple2$2sNodephsNodephph* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        /*i*/come_call_finalizer3(prev_it_210,list_item$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_begin(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_216;
struct tuple2$2sNodephsNodeph* __result146__;
struct tuple2$2sNodephsNodeph* __result147__;
struct tuple2$2sNodephsNodeph* result_217;
struct tuple2$2sNodephsNodeph* __result148__;
result_216 = (void*)0;
result_217 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_216,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result146__ = gComeFunResultObject = __result_obj__ = result_216;
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    self->it=self->head;
    if(self->it) {
        __result147__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    memset(&result_217,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result148__ = gComeFunResultObject = __result_obj__ = result_217;
    gComeFunResultObject = (void*)0;
    return __result148__;
}

static _Bool list$1tuple2$2sNodephsNodephph_end(struct list$1tuple2$2sNodephsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2sNodephsNodeph* list$1tuple2$2sNodephsNodephph_next(struct list$1tuple2$2sNodephsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sNodephsNodeph* result_219;
struct tuple2$2sNodephsNodeph* __result149__;
struct tuple2$2sNodephsNodeph* __result150__;
struct tuple2$2sNodephsNodeph* result_220;
struct tuple2$2sNodephsNodeph* __result151__;
result_219 = (void*)0;
result_220 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_219,0,sizeof(struct tuple2$2sNodephsNodeph*));
        __result149__ = gComeFunResultObject = __result_obj__ = result_219;
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result150__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    memset(&result_220,0,sizeof(struct tuple2$2sNodephsNodeph*));
    __result151__ = gComeFunResultObject = __result_obj__ = result_220;
    gComeFunResultObject = (void*)0;
    return __result151__;
}

static int list$1tuple2$2sNodephsNodephph_length(struct list$1tuple2$2sNodephsNodephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* parse_array_initializer(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* initializer_226;
void* __right_value339 = (void*)0;
struct sNode* index_227;
_Bool no_comma_228;
void* __right_value340 = (void*)0;
struct sNode* exp_229;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
_Bool no_comma_230;
void* __right_value343 = (void*)0;
struct sNode* exp_231;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sNode* index_232;
_Bool no_comma_233;
void* __right_value347 = (void*)0;
struct sNode* exp_234;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
_Bool no_comma_235;
void* __right_value350 = (void*)0;
struct sNode* exp_236;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* _inf_value1;
struct sArrayInitializer* _inf_obj_value1;
void* __right_value358 = (void*)0;
struct sNode* __result159__;
    expected_next_character(123,info);
    initializer_226=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephph_initialize((struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count((struct list$1tuple2$2sNodephsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2sNodephsNodephph)*(1), "07var.c", 711, "list$1tuple2$2sNodephsNodephph"))));
    if(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        index_227=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(93,info);
        expected_next_character(61,info);
        no_comma_228=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_229=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_228;
        list$1tuple2$2sNodephsNodephph_add(initializer_226,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 727, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_227),(struct sNode*)come_increment_ref_count(exp_229))));
        if(index_227) { index_227 = come_decrement_ref_count2(index_227, ((struct sNode*)index_227)->finalize, ((struct sNode*)index_227)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(exp_229) { exp_229 = come_decrement_ref_count2(exp_229, ((struct sNode*)exp_229)->finalize, ((struct sNode*)exp_229)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else {
        no_comma_230=info->no_comma;
        info->no_comma=(_Bool)1;
        exp_231=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_230;
        list$1tuple2$2sNodephsNodephph_add(initializer_226,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 735, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_231))));
        if(exp_231) { exp_231 = come_decrement_ref_count2(exp_231, ((struct sNode*)exp_231)->finalize, ((struct sNode*)exp_231)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==44) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        if(*info->p==125) {
            break;
        }
        if(*info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            index_232=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(93,info);
            expected_next_character(61,info);
            no_comma_233=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_234=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_233;
            list$1tuple2$2sNodephsNodephph_add(initializer_226,(struct tuple2$2sNodephsNodeph*)come_increment_ref_count(tuple2$2sNodephsNodeph_initialize((struct tuple2$2sNodephsNodeph*)come_increment_ref_count((struct tuple2$2sNodephsNodeph*)come_calloc(1, sizeof(struct tuple2$2sNodephsNodeph)*(1), "07var.c", 762, "struct tuple2$2sNodephsNodeph")),(struct sNode*)come_increment_ref_count(index_232),(struct sNode*)come_increment_ref_count(exp_234))));
            if(index_232) { index_232 = come_decrement_ref_count2(index_232, ((struct sNode*)index_232)->finalize, ((struct sNode*)index_232)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_234) { exp_234 = come_decrement_ref_count2(exp_234, ((struct sNode*)exp_234)->finalize, ((struct sNode*)exp_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_comma_235=info->no_comma;
            info->no_comma=(_Bool)1;
            exp_236=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_235;
            list$1tuple2$2sNodephsNodephph_add(initializer_226,(struct tuple2$2voidpsNodeph*)come_increment_ref_count(tuple2$2voidpsNodeph_initialize((struct tuple2$2voidpsNodeph*)come_increment_ref_count((struct tuple2$2voidpsNodeph*)come_calloc(1, sizeof(struct tuple2$2voidpsNodeph)*(1), "07var.c", 770, "struct tuple2$2voidpsNodeph")),((void*)0),(struct sNode*)come_increment_ref_count(exp_236))));
            if(exp_236) { exp_236 = come_decrement_ref_count2(exp_236, ((struct sNode*)exp_236)->finalize, ((struct sNode*)exp_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    expected_next_character(125,info);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 776, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sArrayInitializer*)(__right_value354=sArrayInitializer_initialize((struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "07var.c", 776, "sArrayInitializer")),(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(initializer_226),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sArrayInitializer_finalize;
    _inf_value1->clone=(void*)sArrayInitializer_clone;
    _inf_value1->compile=(void*)sArrayInitializer_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sArrayInitializer_kind;
    __result159__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value358=_inf_value1));
    /*i*/come_call_finalizer3(initializer_226,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value354,sArrayInitializer_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value358) { __right_value358 = come_decrement_ref_count2(__right_value358, ((struct sNode*)__right_value358)->finalize, ((struct sNode*)__right_value358)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result159__;
}

static struct tuple2$2sNodephsNodeph* tuple2$2sNodephsNodeph_initialize(struct tuple2$2sNodephsNodeph* self, struct sNode* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj184;
struct sNode* __dec_obj185;
struct tuple2$2sNodephsNodeph* __result155__;
    __dec_obj184=self->v1;
    self->v1=(struct sNode*)come_increment_ref_count(v1);
    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
    __dec_obj185=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sNodephsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v1) { v1 = come_decrement_ref_count2(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result155__;
}

static struct tuple2$2voidpsNodeph* tuple2$2voidpsNodeph_initialize(struct tuple2$2voidpsNodeph* self, void* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
struct sNode* __dec_obj186;
struct tuple2$2voidpsNodeph* __result156__;
    self->v1=v1;
    __dec_obj186=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2voidpsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void tuple2$2voidpsNodephp_finalize(struct tuple2$2voidpsNodeph* self){
struct sNode* __dec_obj187;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj187=self->v2;
            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sArrayInitializer_finalize(struct sArrayInitializer* self){
char* __dec_obj188;
struct list$1tuple2$2sNodephsNodephph* __dec_obj189;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj188=self->sname;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(self->initializer==gComeFunResultObject) {
            __dec_obj189=self->initializer;
            /* a*/come_call_finalizer3(__dec_obj189,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->initializer,list$1tuple2$2sNodephsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sArrayInitializer* sArrayInitializer_clone(struct sArrayInitializer* self){
void* __result_obj__=(void*)0;
struct sArrayInitializer* __result157__;
void* __right_value355 = (void*)0;
struct sArrayInitializer* result_237;
void* __right_value356 = (void*)0;
char* __dec_obj190;
void* __right_value357 = (void*)0;
struct list$1tuple2$2sNodephsNodephph* __dec_obj191;
struct sArrayInitializer* __result158__;
    if(self==(void*)0) {
        __result157__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    result_237=(struct sArrayInitializer*)come_increment_ref_count((struct sArrayInitializer*)come_calloc(1, sizeof(struct sArrayInitializer)*(1), "sArrayInitializer_clone", 3, "sArrayInitializer"));
    if(self!=((void*)0)) {
        result_237->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj190=result_237->sname;
        result_237->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj191=result_237->initializer;
        result_237->initializer=(struct list$1tuple2$2sNodephsNodephph*)come_increment_ref_count(list$1tuple2$2sNodephsNodephphp_clone(self->initializer));
        /* a*/come_call_finalizer3(__dec_obj191,list$1tuple2$2sNodephsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result158__ = gComeFunResultObject = __result_obj__ = result_237;
    /*i*/come_call_finalizer3(result_237,sArrayInitializer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result158__;
}

void add_variable_to_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value359 = (void*)0;
struct sVar* self_238;
void* __right_value360 = (void*)0;
char* __dec_obj192;
void* __right_value361 = (void*)0;
struct sType* __dec_obj193;
void* __right_value362 = (void*)0;
char* __dec_obj194;
void* __right_value363 = (void*)0;
char* __dec_obj195;
void* __right_value364 = (void*)0;
char* __dec_obj196;
char* __dec_obj197;
void* __right_value368 = (void*)0;
    self_238=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 781, "sVar"));
    __dec_obj192=self_238->mName;
    self_238->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj193=self_238->mType;
    self_238->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj193,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(type->mFunctionParam) {
        __dec_obj194=self_238->mCValueName;
        self_238->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int n_239=0;
        __dec_obj195=self_238->mCValueName;
        self_238->mCValueName=(char*)come_increment_ref_count(xsprintf("%s_%d",name,n_239++));
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    self_238->mBlockLevel=info->block_level;
    self_238->mAllocaValue=(_Bool)0;
    self_238->mFunctionParam=(_Bool)0;
    self_238->mNoFree=(_Bool)0;
    if(info->come_fun) {
        __dec_obj196=self_238->mFunName;
        self_238->mFunName=(char*)come_increment_ref_count(string_clone(info->come_fun->mName));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj197=self_238->mFunName;
        self_238->mFunName=((void*)0);
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    map$2charphsVarph_insert(info->lv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_238));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(self_238,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

static struct map$2charphsVarph* map$2charphsVarph_insert(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_257;
unsigned int it_258;
_Bool same_key_exist_275;
char* it2_278;
struct map$2charphsVarph* __result180__;
    if(self->len*10>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_257=string_get_hash_key(key)%self->size;
    it_258=hash_257;
    while((_Bool)1) {
        if(self->item_existance[it_258]) {
            if(string_equals(self->keys[it_258],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_258]);
                    self->keys[it_258] = come_decrement_ref_count2(self->keys[it_258], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_258]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_258]);
                    self->keys[it_258]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_258],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_258]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_258]=item;
                }
                break;
            }
            it_258++;
            if(it_258>=self->size) {
                it_258=0;
            }
            else {
                if(it_258==hash_257) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_258]=(_Bool)1;
            if(1) {
                self->keys[it_258]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_258]=key;
            }
            if(1) {
                self->items[it_258]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_258]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_275=(_Bool)0;
    for(    it2_278=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_278=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_278,key)) {
            same_key_exist_275=(_Bool)1;
        }
    }
    if(!same_key_exist_275) {
        list$1charp_push_back(self->key_list,key);
    }
    __result180__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_240;
void* __right_value365 = (void*)0;
char** keys_241;
void* __right_value366 = (void*)0;
struct sVar** items_242;
void* __right_value367 = (void*)0;
_Bool* item_existance_243;
int len_244;
char* it_247;
struct sVar* default_value_250;
struct sVar* it2_251;
unsigned int hash_254;
int n_255;
struct sVar* default_value_256;
default_value_250 = (void*)0;
default_value_256 = (void*)0;
    size_240=self->size*10;
    keys_241=(char**)come_increment_ref_count(((char**)(__right_value365=(char**)come_calloc(1, sizeof(char*)*(1*(size_240)), "./comelang.h", 1620, "char*%"))));
    items_242=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value366=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_240)), "./comelang.h", 1621, "sVar*%"))));
    item_existance_243=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value367=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_240)), "./comelang.h", 1622, "bool"))));
    len_244=0;
    for(    it_247=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_247=map$2charphsVarph_next(self)    ){
        memset(&default_value_250,0,sizeof(struct sVar*));
        it2_251=map$2charphsVarph_at(self,it_247,default_value_250);
        hash_254=string_get_hash_key(it_247)%size_240;
        n_255=hash_254;
        while((_Bool)1) {
            if(item_existance_243[n_255]) {
                n_255++;
                if(n_255>=size_240) {
                    n_255=0;
                }
                else {
                    if(n_255==hash_254) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_243[n_255]=(_Bool)1;
                keys_241[n_255]=it_247;
                items_242[n_255]=map$2charphsVarph_at(self,it_247,default_value_256);
                len_244++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_241;
    self->items=items_242;
    self->item_existance=item_existance_243;
    self->size=size_240;
    self->len=len_244;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_245;
char* __result160__;
char* __result161__;
char* result_246;
char* __result162__;
result_245 = (void*)0;
result_246 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_245,0,sizeof(char*));
        __result160__ = gComeFunResultObject = __result_obj__ = result_245;
        gComeFunResultObject = (void*)0;
        return __result160__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result161__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    memset(&result_246,0,sizeof(char*));
    __result162__ = gComeFunResultObject = __result_obj__ = result_246;
    gComeFunResultObject = (void*)0;
    return __result162__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_248;
char* __result163__;
char* __result164__;
char* result_249;
char* __result165__;
result_248 = (void*)0;
result_249 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_248,0,sizeof(char*));
        __result163__ = gComeFunResultObject = __result_obj__ = result_248;
        gComeFunResultObject = (void*)0;
        return __result163__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result164__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result164__;
    }
    memset(&result_249,0,sizeof(char*));
    __result165__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result165__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_252;
unsigned int it_253;
struct sVar* __result166__;
struct sVar* __result167__;
struct sVar* __result168__;
struct sVar* __result169__;
    hash_252=string_get_hash_key(((char*)key))%self->size;
    it_253=hash_252;
    while((_Bool)1) {
        if(self->item_existance[it_253]) {
            if(string_equals(self->keys[it_253],key)) {
                __result166__ = gComeFunResultObject = __result_obj__ = self->items[it_253];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result166__;
            }
            it_253++;
            if(it_253>=self->size) {
                it_253=0;
            }
            else {
                if(it_253==hash_252) {
                    __result167__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result167__;
                }
            }
        }
        else {
            __result168__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result168__;
        }
    }
    __result169__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_259;
struct list_item$1charp* it_260;
struct list$1charp* __result173__;
    it2_259=0;
    it_260=self->head;
    while(it_260!=((void*)0)) {
        if(charp_equals(it_260->item,item)) {
            list$1charp_delete(self,it2_259,it2_259+1);
            break;
        }
        it2_259++;
        it_260=it_260->next;
    }
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_261;
struct list$1charp* __result170__;
struct list_item$1charp* it_264;
int i_265;
struct list_item$1charp* prev_it_266;
struct list_item$1charp* it_267;
int i_268;
struct list_item$1charp* prev_it_269;
struct list_item$1charp* it_270;
struct list_item$1charp* head_prev_it_271;
struct list_item$1charp* tail_it_272;
int i_273;
struct list_item$1charp* prev_it_274;
struct list$1charp* __result172__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_261=tail;
        tail=head;
        head=tmp_261;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result170__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_264=self->head;
            i_265=0;
            while(it_264!=((void*)0)) {
                if(i_265<tail) {
                    prev_it_266=it_264;
                    it_264=it_264->next;
                    i_265++;
                    /*i*/come_call_finalizer3(prev_it_266,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_265==tail) {
                        self->head=it_264;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_264=it_264->next;
                        i_265++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_267=self->head;
                i_268=0;
                while(it_267!=((void*)0)) {
                    if(i_268==head) {
                        self->tail=it_267->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_268>=head) {
                        prev_it_269=it_267;
                        it_267=it_267->next;
                        i_268++;
                        /*i*/come_call_finalizer3(prev_it_269,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_267=it_267->next;
                        i_268++;
                    }
                }
            }
            else {
                it_270=self->head;
                head_prev_it_271=((void*)0);
                tail_it_272=((void*)0);
                i_273=0;
                while(it_270!=((void*)0)) {
                    if(i_273==head) {
                        head_prev_it_271=it_270->prev;
                    }
                    if(i_273==tail) {
                        tail_it_272=it_270;
                    }
                    if(i_273>=head&&i_273<tail) {
                        prev_it_274=it_270;
                        it_270=it_270->next;
                        i_273++;
                        /*i*/come_call_finalizer3(prev_it_274,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_270=it_270->next;
                        i_273++;
                    }
                }
                if(head_prev_it_271!=((void*)0)) {
                    head_prev_it_271->next=tail_it_272;
                }
                if(tail_it_272!=((void*)0)) {
                    tail_it_272->prev=head_prev_it_271;
                }
            }
        }
    }
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result172__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_262;
struct list_item$1charp* prev_it_263;
struct list$1charp* __result171__;
    it_262=self->head;
    while(it_262!=((void*)0)) {
        prev_it_263=it_262;
        it_262=it_262->next;
        /*i*/come_call_finalizer3(prev_it_263,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_276;
char* __result174__;
char* __result175__;
char* result_277;
char* __result176__;
result_276 = (void*)0;
result_277 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_276,0,sizeof(char*));
        __result174__ = gComeFunResultObject = __result_obj__ = result_276;
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    self->it=self->head;
    if(self->it) {
        __result175__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    memset(&result_277,0,sizeof(char*));
    __result176__ = gComeFunResultObject = __result_obj__ = result_277;
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_279;
char* __result177__;
char* __result178__;
char* result_280;
char* __result179__;
result_279 = (void*)0;
result_280 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_279,0,sizeof(char*));
        __result177__ = gComeFunResultObject = __result_obj__ = result_279;
        gComeFunResultObject = (void*)0;
        return __result177__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result178__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
    memset(&result_280,0,sizeof(char*));
    __result179__ = gComeFunResultObject = __result_obj__ = result_280;
    gComeFunResultObject = (void*)0;
    return __result179__;
}

void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info){
void* __right_value369 = (void*)0;
struct sVar* self_281;
void* __right_value370 = (void*)0;
char* __dec_obj198;
void* __right_value371 = (void*)0;
struct sType* __dec_obj199;
void* __right_value372 = (void*)0;
char* __dec_obj200;
void* __right_value373 = (void*)0;
    self_281=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 810, "sVar"));
    __dec_obj198=self_281->mName;
    self_281->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj199=self_281->mType;
    self_281->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_281->mGlobal=(_Bool)1;
    __dec_obj200=self_281->mCValueName;
    self_281->mCValueName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_281->mBlockLevel=info->block_level;
    self_281->mAllocaValue=(_Bool)0;
    self_281->mFunctionParam=(_Bool)0;
    self_281->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_281));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(self_281,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info){
void* __right_value374 = (void*)0;
struct sVar* self_282;
void* __right_value375 = (void*)0;
char* __dec_obj201;
void* __right_value376 = (void*)0;
struct sType* __dec_obj202;
void* __right_value377 = (void*)0;
char* __dec_obj203;
void* __right_value378 = (void*)0;
    self_282=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "07var.c", 829, "sVar"));
    __dec_obj201=self_282->mName;
    self_282->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj202=self_282->mType;
    self_282->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    /* a*/come_call_finalizer3(__dec_obj202,sType_finalize, 0, 0, 0, 0, (void*)0);
    self_282->mGlobal=(_Bool)1;
    __dec_obj203=self_282->mCValueName;
    self_282->mCValueName=(char*)come_increment_ref_count(__builtin_string(c_value));
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    self_282->mBlockLevel=info->block_level;
    self_282->mAllocaValue=(_Bool)0;
    self_282->mFunctionParam=(_Bool)0;
    self_282->mNoFree=(_Bool)0;
    map$2charphsVarph_insert(info->gv_table->mVars,(char*)come_increment_ref_count(__builtin_string(name)),(struct sVar*)come_increment_ref_count(self_282));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(self_282,sVar_finalize, 0, 0, 0, 0, (void*)0);
}

struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool is_type_name_flag_283;
_Bool multiple_declare_284;
char* p_285;
int sline_286;
void* __right_value379 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3;
struct sType* type_287;
char* name_288;
_Bool err_289;
void* __right_value380 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var4;
struct sType* type_290;
char* name_291;
void* __right_value381 = (void*)0;
_Bool no_output_err_292;
_Bool no_comma_293;
_Bool no_output_come_code_294;
void* __right_value382 = (void*)0;
struct sNode* exp_295;
_Bool attr_define_296;
char* p_297;
int sline_298;
void* __right_value383 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_299;
char* name_300;
_Bool err_301;
struct sFun* fun_302;
void* __right_value384 = (void*)0;
char* buf2_303;
struct list$1charph* multiple_assign_304;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1charph* __dec_obj208;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
char* buf3_308;
void* __right_value392 = (void*)0;
_Bool no_comma_309;
void* __right_value393 = (void*)0;
struct sNode* right_value_310;
void* __right_value394 = (void*)0;
struct sNode* __dec_obj212;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sNode* _inf_value2;
struct sStoreNode* _inf_obj_value2;
void* __right_value405 = (void*)0;
struct sNode* __result184__;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* multiple_declare_312;
void* __right_value408 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_313;
char* name_314;
_Bool err_315;
void* __right_value409 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_316;
char* var_name_317;
_Bool no_comma_318;
void* __right_value410 = (void*)0;
struct sNode* exp_319;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_323;
char* var_name_324;
_Bool no_comma_325;
void* __right_value419 = (void*)0;
struct sNode* exp_326;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* right_node_327;
void* __right_value424 = (void*)0;
char* var_name2_328;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* _inf_value3;
struct sStoreNode* _inf_obj_value3;
void* __right_value435 = (void*)0;
struct sNode* __result190__;
void* __right_value436 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_330;
char* name_331;
_Bool err_332;
void* __right_value437 = (void*)0;
char* __dec_obj247;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct sNode* _inf_value4;
struct sLoadNode* _inf_obj_value4;
void* __right_value449 = (void*)0;
struct sNode* self_node_336;
void* __right_value450 = (void*)0;
struct sNode* right_node_338;
void* __right_value451 = (void*)0;
struct sNode* __result195__;
void* __right_value452 = (void*)0;
struct sNode* __result196__;
void* __right_value453 = (void*)0;
struct sNode* right_value_339;
void* __right_value454 = (void*)0;
struct sNode* __dec_obj263;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* _inf_value5;
struct sStoreNode* _inf_obj_value5;
void* __right_value465 = (void*)0;
struct sNode* __result199__;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sNode* _inf_value6;
struct sLoadNode* _inf_obj_value6;
void* __right_value472 = (void*)0;
struct sNode* node_341;
void* __right_value473 = (void*)0;
struct sNode* __dec_obj280;
struct sNode* __result202__;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value7;
struct sLoadNode* _inf_obj_value7;
void* __right_value480 = (void*)0;
struct sNode* node_343;
void* __right_value481 = (void*)0;
struct sNode* __dec_obj285;
struct sNode* __result205__;
char* word_345;
void* __right_value482 = (void*)0;
char* __dec_obj286;
void* __right_value483 = (void*)0;
char* __dec_obj287;
_Bool is_type_name_flag_346;
void* __right_value484 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_347;
char* name_348;
_Bool err_349;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* _inf_value8;
struct sLoadNode* _inf_obj_value8;
void* __right_value490 = (void*)0;
struct sNode* __result208__;
void* __right_value491 = (void*)0;
struct sNode* right_value_351;
void* __right_value492 = (void*)0;
struct sNode* __dec_obj292;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sNode* _inf_value9;
struct sStoreNode* _inf_obj_value9;
void* __right_value502 = (void*)0;
struct sNode* __result211__;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct sNode* _inf_value10;
struct sStoreNode* _inf_obj_value10;
void* __right_value512 = (void*)0;
struct sNode* __result214__;
word_345 = (void*)0;
    is_type_name_flag_283=is_type_name(buf,info);
    multiple_declare_284=(_Bool)0;
    if(is_type_name_flag_283) {
        p_285=info->p;
        sline_286=info->sline;
        info->p=head;
        info->sline=head_sline;
        if(xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value379=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_287=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            name_288=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_289=multiple_assign_var3->v3;
            /*g*/come_call_finalizer3(__right_value379,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_289) {
                multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value380=parse_variable_name((struct sType*)come_increment_ref_count(type_287),(_Bool)1,info)));
                type_290=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_291=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                /*g*/come_call_finalizer3(__right_value380,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(*info->p==61&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(*info->p==123) {
                        ((char*)(__right_value381=skip_block(info)));
                        __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        no_output_err_292=info->no_output_err;
                        no_comma_293=info->no_comma;
                        no_output_come_code_294=info->no_output_come_code;
                        info->no_output_err=(_Bool)1;
                        info->no_comma=(_Bool)1;
                        info->no_output_come_code=(_Bool)1;
                        exp_295=(struct sNode*)come_increment_ref_count(expression_v13(info));
                        info->no_comma=no_comma_293;
                        info->no_output_err=no_output_err_292;
                        info->no_output_come_code=no_output_come_code_294;
                        if(exp_295) { exp_295 = come_decrement_ref_count2(exp_295, ((struct sNode*)exp_295)->finalize, ((struct sNode*)exp_295)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
                if(!is_type_name(name_291,info)&&*info->p==44) {
                    multiple_declare_284=(_Bool)1;
                }
                /*i*/come_call_finalizer3(type_290,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_291 = come_decrement_ref_count2(name_291, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_288 = come_decrement_ref_count2(name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_285;
        info->sline=sline_286;
    }
    attr_define_296=(_Bool)0;
    if(is_type_name_flag_283&&info->defining_class) {
        p_297=info->p;
        sline_298=info->sline;
        info->p=head;
        info->sline=head_sline;
        multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value383=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_299=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        name_300=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        err_301=multiple_assign_var5->v3;
        /*g*/come_call_finalizer3(__right_value383,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(err_301&&strmemcmp(info->p,"self")) {
            attr_define_296=(_Bool)1;
        }
        info->p=p_297;
        info->sline=sline_298;
        /*i*/come_call_finalizer3(type_299,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_300 = come_decrement_ref_count2(name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    fun_302=map$2charphsFunphp_operator_load_element(info->funcs,buf);
    if((!gComeC&&charp_operator_equals(buf,"var"))||charp_operator_equals(buf,"auto")) {
        parse_sharp_v5(info);
        buf2_303=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        multiple_assign_304=((void*)0);
        if(*info->p==44) {
            __dec_obj208=multiple_assign_304;
            multiple_assign_304=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "07var.c", 933, "list$1charph"))));
            /* a*/come_call_finalizer3(__dec_obj208,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
            list$1charph_push_back(multiple_assign_304,(char*)come_increment_ref_count(string_clone(buf2_303)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                buf3_308=(char*)come_increment_ref_count(parse_word(info));
                parse_sharp_v5(info);
                list$1charph_push_back(multiple_assign_304,(char*)come_increment_ref_count(string_clone(buf3_308)));
                buf3_308 = come_decrement_ref_count2(buf3_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        parse_sharp_v5(info);
        if(*info->p==61&&*(info->p+1)!=61&&!info->no_assign) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            no_comma_309=info->no_comma;
            info->no_comma=(_Bool)1;
            right_value_310=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_309;
            parse_sharp_v5(info);
            __dec_obj212=right_value_310;
            right_value_310=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_310),info));
            if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); }
            parse_sharp_v5(info);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 963, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStoreNode*)(__right_value397=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 963, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf2_303)),(struct list$1charph*)come_increment_ref_count(multiple_assign_304),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_310),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStoreNode_finalize;
            _inf_value2->clone=(void*)sStoreNode_clone;
            _inf_value2->compile=(void*)sStoreNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sNodeBase_terminated;
            _inf_value2->kind=(void*)sStoreNode_kind;
            __result184__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value405=_inf_value2));
            if(right_value_310) { right_value_310 = come_decrement_ref_count2(right_value_310, ((struct sNode*)right_value_310)->finalize, ((struct sNode*)right_value_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
            buf2_303 = come_decrement_ref_count2(buf2_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(multiple_assign_304,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value397,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value405) { __right_value405 = come_decrement_ref_count2(__right_value405, ((struct sNode*)__right_value405)->finalize, ((struct sNode*)__right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result184__;
            if(right_value_310) { right_value_310 = come_decrement_ref_count2(right_value_310, ((struct sNode*)right_value_310)->finalize, ((struct sNode*)right_value_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"var requires a right value(%c)",*info->p);
            exit(1);
        }
        buf2_303 = come_decrement_ref_count2(buf2_303, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(multiple_assign_304,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(multiple_declare_284) {
            info->p=head;
            info->sline=head_sline;
            multiple_declare_312=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephph_initialize((struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count((struct list$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list$1tuple3$3sTypephcharphsNodephph)*(1), "07var.c", 974, "list$1tuple3$3sTypephcharphsNodephph"))));
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value408=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_313=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_314=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_315=multiple_assign_var6->v3;
            /*g*/come_call_finalizer3(__right_value408,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_315) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value409=parse_variable_name((struct sType*)come_increment_ref_count(base_type_313),(_Bool)1,info)));
            type2_316=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            var_name_317=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            /*g*/come_call_finalizer3(__right_value409,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            if(*info->p==61) {
                info->p++;
                skip_spaces_and_lf(info);
                info->array_initializer=(_Bool)1;
                no_comma_318=info->no_comma;
                info->no_comma=(_Bool)1;
                exp_319=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_318;
                info->array_initializer=(_Bool)0;
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_312,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 999, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_316),(char*)come_increment_ref_count(var_name_317),(struct sNode*)come_increment_ref_count(exp_319))));
                if(exp_319) { exp_319 = come_decrement_ref_count2(exp_319, ((struct sNode*)exp_319)->finalize, ((struct sNode*)exp_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_312,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1002, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_316),(char*)come_increment_ref_count(var_name_317),((void*)0))));
            }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value418=parse_variable_name((struct sType*)come_increment_ref_count(base_type_313),(_Bool)0,info)));
                type2_323=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                var_name_324=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                /*g*/come_call_finalizer3(__right_value418,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                parse_sharp_v5(info);
                if(*info->p==61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_325=info->no_comma;
                    info->no_comma=(_Bool)1;
                    info->array_initializer=(_Bool)1;
                    exp_326=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_325;
                    info->array_initializer=(_Bool)0;
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_312,(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(tuple3$3sTypephcharphsNodeph_initialize((struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count((struct tuple3$3sTypephcharphsNodeph*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphsNodeph)*(1), "07var.c", 1026, "struct tuple3$3sTypephcharphsNodeph")),(struct sType*)come_increment_ref_count(type2_323),(char*)come_increment_ref_count(var_name_324),(struct sNode*)come_increment_ref_count(exp_326))));
                    if(exp_326) { exp_326 = come_decrement_ref_count2(exp_326, ((struct sNode*)exp_326)->finalize, ((struct sNode*)exp_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    list$1tuple3$3sTypephcharphsNodephph_push_back(multiple_declare_312,(struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count(tuple3$3sTypephcharphvoidp_initialize((struct tuple3$3sTypephcharphvoidp*)come_increment_ref_count((struct tuple3$3sTypephcharphvoidp*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphvoidp)*(1), "07var.c", 1029, "struct tuple3$3sTypephcharphvoidp")),(struct sType*)come_increment_ref_count(type2_323),(char*)come_increment_ref_count(var_name_324),((void*)0))));
                }
                /*i*/come_call_finalizer3(type2_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_324 = come_decrement_ref_count2(var_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            right_node_327=((void*)0);
            var_name2_328=(char*)come_increment_ref_count(__builtin_string(""));
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1036, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sStoreNode*)(__right_value427=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1036, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(multiple_declare_312),(struct sType*)come_increment_ref_count(base_type_313),(_Bool)1,((void*)0),info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sStoreNode_finalize;
            _inf_value3->clone=(void*)sStoreNode_clone;
            _inf_value3->compile=(void*)sStoreNode_compile;
            _inf_value3->sline=(void*)sNodeBase_sline;
            _inf_value3->sname=(void*)sNodeBase_sname;
            _inf_value3->terminated=(void*)sNodeBase_terminated;
            _inf_value3->kind=(void*)sStoreNode_kind;
            __result190__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value435=_inf_value3));
            /*i*/come_call_finalizer3(multiple_declare_312,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(base_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_314 = come_decrement_ref_count2(name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_317 = come_decrement_ref_count2(var_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_327) { right_node_327 = come_decrement_ref_count2(right_node_327, ((struct sNode*)right_node_327)->finalize, ((struct sNode*)right_node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_328 = come_decrement_ref_count2(var_name2_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value427,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value435) { __right_value435 = come_decrement_ref_count2(__right_value435, ((struct sNode*)__right_value435)->finalize, ((struct sNode*)__right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result190__;
            /*i*/come_call_finalizer3(multiple_declare_312,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(base_type_313,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_314 = come_decrement_ref_count2(name_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_316,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_317 = come_decrement_ref_count2(var_name_317, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(right_node_327) { right_node_327 = come_decrement_ref_count2(right_node_327, ((struct sNode*)right_node_327)->finalize, ((struct sNode*)right_node_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
            var_name2_328 = come_decrement_ref_count2(var_name2_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(attr_define_296) {
                info->p=head;
                info->sline=head_sline;
                parse_sharp_v5(info);
                multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value436=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_330=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                name_331=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                err_332=multiple_assign_var9->v3;
                /*g*/come_call_finalizer3(__right_value436,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(!err_332) {
                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                    exit(2);
                }
                info->p+=strlen("self.");
                __dec_obj247=name_331;
                name_331=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                list$1tuple2$2charphsTypephph_add(info->defining_class->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "07var.c", 1056, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_331),(struct sType*)come_increment_ref_count(type_330))));
                if(*info->p==61&&*(info->p+1)!=61) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1064, "struct sNode");
                    _inf_obj_value4=come_increment_ref_count(((struct sLoadNode*)(__right_value445=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1064, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string("self")),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sLoadNode_finalize;
                    _inf_value4->clone=(void*)sLoadNode_clone;
                    _inf_value4->compile=(void*)sLoadNode_compile;
                    _inf_value4->sline=(void*)sNodeBase_sline;
                    _inf_value4->sname=(void*)sNodeBase_sname;
                    _inf_value4->terminated=(void*)sLoadNode_terminated;
                    _inf_value4->kind=(void*)sLoadNode_kind;
                    self_node_336=(struct sNode*)come_increment_ref_count(_inf_value4);
                    /*g*/come_call_finalizer3(__right_value445,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                    right_node_338=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    __result195__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value451=store_field(self_node_336,(struct sNode*)come_increment_ref_count(right_node_338),(char*)come_increment_ref_count(name_331),info)));
                    if(self_node_336) { self_node_336 = come_decrement_ref_count2(self_node_336, ((struct sNode*)self_node_336)->finalize, ((struct sNode*)self_node_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_338) { right_node_338 = come_decrement_ref_count2(right_node_338, ((struct sNode*)right_node_338)->finalize, ((struct sNode*)right_node_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_331 = come_decrement_ref_count2(name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(__right_value451) { __right_value451 = come_decrement_ref_count2(__right_value451, ((struct sNode*)__right_value451)->finalize, ((struct sNode*)__right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result195__;
                    if(self_node_336) { self_node_336 = come_decrement_ref_count2(self_node_336, ((struct sNode*)self_node_336)->finalize, ((struct sNode*)self_node_336)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(right_node_338) { right_node_338 = come_decrement_ref_count2(right_node_338, ((struct sNode*)right_node_338)->finalize, ((struct sNode*)right_node_338)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    __result196__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value452=create_null_node(info)));
                    /*i*/come_call_finalizer3(type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_331 = come_decrement_ref_count2(name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(__right_value452) { __right_value452 = come_decrement_ref_count2(__right_value452, ((struct sNode*)__right_value452)->finalize, ((struct sNode*)__right_value452)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result196__;
                }
                /*i*/come_call_finalizer3(type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_331 = come_decrement_ref_count2(name_331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(!is_type_name_flag_283&&*info->p==61&&*(info->p+1)!=61&&!info->no_assign) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    right_value_339=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    parse_sharp_v5(info);
                    __dec_obj263=right_value_339;
                    right_value_339=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_339),info));
                    if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
                    parse_sharp_v5(info);
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1086, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sStoreNode*)(__right_value457=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1086, "sStoreNode")),(char*)come_increment_ref_count(__builtin_string(buf)),((void*)0),((void*)0),((void*)0),(_Bool)0,(struct sNode*)come_increment_ref_count(right_value_339),info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sStoreNode_finalize;
                    _inf_value5->clone=(void*)sStoreNode_clone;
                    _inf_value5->compile=(void*)sStoreNode_compile;
                    _inf_value5->sline=(void*)sNodeBase_sline;
                    _inf_value5->sname=(void*)sNodeBase_sname;
                    _inf_value5->terminated=(void*)sNodeBase_terminated;
                    _inf_value5->kind=(void*)sStoreNode_kind;
                    __result199__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value465=_inf_value5));
                    if(right_value_339) { right_value_339 = come_decrement_ref_count2(right_value_339, ((struct sNode*)right_value_339)->finalize, ((struct sNode*)right_value_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*g*/come_call_finalizer3(__right_value457,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                    if(__right_value465) { __right_value465 = come_decrement_ref_count2(__right_value465, ((struct sNode*)__right_value465)->finalize, ((struct sNode*)__right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    gComeFunResultObject = (void*)0;
                    return __result199__;
                    if(right_value_339) { right_value_339 = come_decrement_ref_count2(right_value_339, ((struct sNode*)right_value_339)->finalize, ((struct sNode*)right_value_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(!is_type_name_flag_283||map$2charphsFunphp_operator_load_element(info->funcs,buf)) {
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1089, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sLoadNode*)(__right_value468=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1089, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sLoadNode_finalize;
                        _inf_value6->clone=(void*)sLoadNode_clone;
                        _inf_value6->compile=(void*)sLoadNode_compile;
                        _inf_value6->sline=(void*)sNodeBase_sline;
                        _inf_value6->sname=(void*)sNodeBase_sname;
                        _inf_value6->terminated=(void*)sLoadNode_terminated;
                        _inf_value6->kind=(void*)sLoadNode_kind;
                        node_341=(struct sNode*)come_increment_ref_count(_inf_value6);
                        /*g*/come_call_finalizer3(__right_value468,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                        __dec_obj280=node_341;
                        node_341=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_341),info));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); }
                        __result202__ = gComeFunResultObject = __result_obj__ = node_341;
                        if(node_341) { node_341 = come_decrement_ref_count2(node_341, ((struct sNode*)node_341)->finalize, ((struct sNode*)node_341)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        gComeFunResultObject = (void*)0;
                        return __result202__;
                        if(node_341) { node_341 = come_decrement_ref_count2(node_341, ((struct sNode*)node_341)->finalize, ((struct sNode*)node_341)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(!is_type_name_flag_283) {
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1096, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sLoadNode*)(__right_value476=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1096, "sLoadNode")),(char*)come_increment_ref_count(__builtin_string(buf)),info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sLoadNode_finalize;
                            _inf_value7->clone=(void*)sLoadNode_clone;
                            _inf_value7->compile=(void*)sLoadNode_compile;
                            _inf_value7->sline=(void*)sNodeBase_sline;
                            _inf_value7->sname=(void*)sNodeBase_sname;
                            _inf_value7->terminated=(void*)sLoadNode_terminated;
                            _inf_value7->kind=(void*)sLoadNode_kind;
                            node_343=(struct sNode*)come_increment_ref_count(_inf_value7);
                            /*g*/come_call_finalizer3(__right_value476,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                            __dec_obj285=node_343;
                            node_343=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_343),info));
                            if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); }
                            __result205__ = gComeFunResultObject = __result_obj__ = node_343;
                            if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 1, 0, (void*)0); } 
                            gComeFunResultObject = (void*)0;
                            return __result205__;
                            if(node_343) { node_343 = come_decrement_ref_count2(node_343, ((struct sNode*)node_343)->finalize, ((struct sNode*)node_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            info->p=head;
                            info->sline=head_sline;
                            if(xisalpha(*info->p)||*info->p==95) {
                                __dec_obj286=word_345;
                                word_345=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            else {
                                __dec_obj287=word_345;
                                word_345=(char*)come_increment_ref_count(__builtin_string(""));
                                __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            is_type_name_flag_346=is_type_name(word_345,info);
                            info->p=head;
                            info->sline=head_sline;
                            if(is_type_name_flag_346) {
                                parse_sharp_v5(info);
                                multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value484=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                                type_347=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                name_348=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                err_349=multiple_assign_var10->v3;
                                /*g*/come_call_finalizer3(__right_value484,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                                if(!err_349) {
                                    printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                    exit(2);
                                }
                                parse_sharp_v5(info);
                                if(*info->p==61&&info->no_assign) {
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1131, "struct sNode");
                                    _inf_obj_value8=come_increment_ref_count(((struct sLoadNode*)(__right_value486=sLoadNode_initialize((struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "07var.c", 1131, "sLoadNode")),(char*)come_increment_ref_count(name_348),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLoadNode_finalize;
                                    _inf_value8->clone=(void*)sLoadNode_clone;
                                    _inf_value8->compile=(void*)sLoadNode_compile;
                                    _inf_value8->sline=(void*)sNodeBase_sline;
                                    _inf_value8->sname=(void*)sNodeBase_sname;
                                    _inf_value8->terminated=(void*)sLoadNode_terminated;
                                    _inf_value8->kind=(void*)sLoadNode_kind;
                                    __result208__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value490=_inf_value8));
                                    /*i*/come_call_finalizer3(type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                                    name_348 = come_decrement_ref_count2(name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    word_345 = come_decrement_ref_count2(word_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    /*g*/come_call_finalizer3(__right_value486,sLoadNode_finalize, 0, 1, 0, 0, __result_obj__);
                                    if(__right_value490) { __right_value490 = come_decrement_ref_count2(__right_value490, ((struct sNode*)__right_value490)->finalize, ((struct sNode*)__right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    gComeFunResultObject = (void*)0;
                                    return __result208__;
                                }
                                else {
                                    if(*info->p==61&&!info->no_assign) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        parse_sharp_v5(info);
                                        info->array_initializer=(_Bool)1;
                                        parse_sharp_v5(info);
                                        right_value_351=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                        parse_sharp_v5(info);
                                        info->array_initializer=(_Bool)0;
                                        __dec_obj292=right_value_351;
                                        right_value_351=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(right_value_351),info));
                                        if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0, (void*)0); }
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1147, "struct sNode");
                                        _inf_obj_value9=come_increment_ref_count(((struct sStoreNode*)(__right_value494=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1147, "sStoreNode")),(char*)come_increment_ref_count(name_348),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_347),(_Bool)1,(struct sNode*)come_increment_ref_count(right_value_351),info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sStoreNode_finalize;
                                        _inf_value9->clone=(void*)sStoreNode_clone;
                                        _inf_value9->compile=(void*)sStoreNode_compile;
                                        _inf_value9->sline=(void*)sNodeBase_sline;
                                        _inf_value9->sname=(void*)sNodeBase_sname;
                                        _inf_value9->terminated=(void*)sNodeBase_terminated;
                                        _inf_value9->kind=(void*)sStoreNode_kind;
                                        __result211__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value502=_inf_value9));
                                        if(right_value_351) { right_value_351 = come_decrement_ref_count2(right_value_351, ((struct sNode*)right_value_351)->finalize, ((struct sNode*)right_value_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        /*i*/come_call_finalizer3(type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        name_348 = come_decrement_ref_count2(name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        word_345 = come_decrement_ref_count2(word_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*g*/come_call_finalizer3(__right_value494,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value502) { __right_value502 = come_decrement_ref_count2(__right_value502, ((struct sNode*)__right_value502)->finalize, ((struct sNode*)__right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result211__;
                                        if(right_value_351) { right_value_351 = come_decrement_ref_count2(right_value_351, ((struct sNode*)right_value_351)->finalize, ((struct sNode*)right_value_351)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "07var.c", 1150, "struct sNode");
                                        _inf_obj_value10=come_increment_ref_count(((struct sStoreNode*)(__right_value504=sStoreNode_initialize((struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "07var.c", 1150, "sStoreNode")),(char*)come_increment_ref_count(name_348),((void*)0),((void*)0),(struct sType*)come_increment_ref_count(type_347),(_Bool)1,((void*)0),info))));
                                        _inf_value10->_protocol_obj=_inf_obj_value10;
                                        _inf_value10->finalize=(void*)sStoreNode_finalize;
                                        _inf_value10->clone=(void*)sStoreNode_clone;
                                        _inf_value10->compile=(void*)sStoreNode_compile;
                                        _inf_value10->sline=(void*)sNodeBase_sline;
                                        _inf_value10->sname=(void*)sNodeBase_sname;
                                        _inf_value10->terminated=(void*)sNodeBase_terminated;
                                        _inf_value10->kind=(void*)sStoreNode_kind;
                                        __result214__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value512=_inf_value10));
                                        /*i*/come_call_finalizer3(type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                                        name_348 = come_decrement_ref_count2(name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        word_345 = come_decrement_ref_count2(word_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        /*g*/come_call_finalizer3(__right_value504,sStoreNode_finalize, 0, 1, 0, 0, __result_obj__);
                                        if(__right_value512) { __right_value512 = come_decrement_ref_count2(__right_value512, ((struct sNode*)__right_value512)->finalize, ((struct sNode*)__right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        gComeFunResultObject = (void*)0;
                                        return __result214__;
                                    }
                                }
                                /*i*/come_call_finalizer3(type_347,sType_finalize, 0, 0, 0, 0, (void*)0);
                                name_348 = come_decrement_ref_count2(name_348, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            word_345 = come_decrement_ref_count2(word_345, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
    }
    err_msg(info,"unexpected word(%s)(1)\n",buf);
    exit(2);
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj204;
char* __dec_obj205;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj204=self->v1;
            /* a*/come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj205=self->v2;
            __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj206;
char* __dec_obj207;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj206=self->v1;
            /* a*/come_call_finalizer3(__dec_obj206,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj207=self->v2;
            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct list_item$1charph* litem_305;
char* __dec_obj209;
void* __right_value388 = (void*)0;
struct list_item$1charph* litem_306;
char* __dec_obj210;
void* __right_value389 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj211;
struct list$1charph* __result181__;
    if(self->len==0) {
        litem_305=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value387=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj209=litem_305->item;
        litem_305->item=(char*)come_increment_ref_count(item);
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else {
        if(self->len==1) {
            litem_306=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value388=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
            litem_306->prev=self->head;
            litem_306->next=((void*)0);
            __dec_obj210=litem_306->item;
            litem_306->item=(char*)come_increment_ref_count(item);
            __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_306;
            self->head->next=litem_306;
        }
        else {
            litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value389=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
            litem_307->prev=self->tail;
            litem_307->next=((void*)0);
            __dec_obj211=litem_307->item;
            litem_307->item=(char*)come_increment_ref_count(item);
            __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_307;
            self->tail=litem_307;
        }
    }
    self->len++;
    __result181__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

static struct list$1tuple3$3sTypephcharphsNodephph* list$1tuple3$3sTypephcharphsNodephph_push_back(struct list$1tuple3$3sTypephcharphsNodephph* self, struct tuple3$3sTypephcharphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value411 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_320;
struct tuple3$3sTypephcharphsNodeph* __dec_obj225;
void* __right_value412 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_321;
struct tuple3$3sTypephcharphsNodeph* __dec_obj226;
void* __right_value413 = (void*)0;
struct list_item$1tuple3$3sTypephcharphsNodephph* litem_322;
struct tuple3$3sTypephcharphsNodeph* __dec_obj227;
struct list$1tuple3$3sTypephcharphsNodephph* __result185__;
    if(self->len==0) {
        litem_320=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value411=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 221, "list_item$1tuple3$3sTypephcharphsNodephph"))));
        litem_320->prev=((void*)0);
        litem_320->next=((void*)0);
        __dec_obj225=litem_320->item;
        litem_320->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj225,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_320;
        self->head=litem_320;
    }
    else {
        if(self->len==1) {
            litem_321=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value412=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 231, "list_item$1tuple3$3sTypephcharphsNodephph"))));
            litem_321->prev=self->head;
            litem_321->next=((void*)0);
            __dec_obj226=litem_321->item;
            litem_321->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj226,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_321;
            self->head->next=litem_321;
        }
        else {
            litem_322=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(((struct list_item$1tuple3$3sTypephcharphsNodephph*)(__right_value413=(struct list_item$1tuple3$3sTypephcharphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple3$3sTypephcharphsNodephph)*(1), "./comelang.h", 241, "list_item$1tuple3$3sTypephcharphsNodephph"))));
            litem_322->prev=self->tail;
            litem_322->next=((void*)0);
            __dec_obj227=litem_322->item;
            litem_322->item=(struct tuple3$3sTypephcharphsNodeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj227,tuple3$3sTypephcharphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_322;
            self->tail=litem_322;
        }
    }
    self->len++;
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

static struct tuple3$3sTypephcharphsNodeph* tuple3$3sTypephcharphsNodeph_initialize(struct tuple3$3sTypephcharphsNodeph* self, struct sType* v1, char* v2, struct sNode* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj228;
char* __dec_obj229;
struct sNode* __dec_obj230;
struct tuple3$3sTypephcharphsNodeph* __result186__;
    __dec_obj228=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj229=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj230=self->v3;
    self->v3=(struct sNode*)come_increment_ref_count(v3);
    if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
    __result186__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypephcharphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v3) { v3 = come_decrement_ref_count2(v3, ((struct sNode*)v3)->finalize, ((struct sNode*)v3)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct tuple3$3sTypephcharphvoidp* tuple3$3sTypephcharphvoidp_initialize(struct tuple3$3sTypephcharphvoidp* self, struct sType* v1, char* v2, void* v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj231;
char* __dec_obj232;
struct tuple3$3sTypephcharphvoidp* __result187__;
    __dec_obj231=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj232=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result187__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple3$3sTypephcharphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

static void tuple3$3sTypephcharphvoidpp_finalize(struct tuple3$3sTypephcharphvoidp* self){
struct sType* __dec_obj233;
char* __dec_obj234;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj233=self->v1;
            /* a*/come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj234=self->v2;
            __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value438 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_333;
struct tuple2$2charphsTypeph* __dec_obj248;
void* __right_value439 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_334;
struct tuple2$2charphsTypeph* __dec_obj251;
void* __right_value440 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_335;
struct tuple2$2charphsTypeph* __dec_obj254;
struct list$1tuple2$2charphsTypephph* __result191__;
    if(self->len==0) {
        litem_333=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value438=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 151, "list_item$1tuple2$2charphsTypephph"))));
        litem_333->prev=((void*)0);
        litem_333->next=((void*)0);
        __dec_obj248=litem_333->item;
        litem_333->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj248,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_333;
        self->head=litem_333;
    }
    else {
        if(self->len==1) {
            litem_334=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value439=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 161, "list_item$1tuple2$2charphsTypephph"))));
            litem_334->prev=self->head;
            litem_334->next=((void*)0);
            __dec_obj251=litem_334->item;
            litem_334->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj251,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_334;
            self->head->next=litem_334;
        }
        else {
            litem_335=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value440=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 171, "list_item$1tuple2$2charphsTypephph"))));
            litem_335->prev=self->tail;
            litem_335->next=((void*)0);
            __dec_obj254=litem_335->item;
            litem_335->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj254,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_335;
            self->tail=litem_335;
        }
    }
    self->len++;
    __result191__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result191__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj255;
struct sType* __dec_obj256;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj255=self->v1;
            __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj256=self->v2;
            /* a*/come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj257;
struct sType* __dec_obj258;
struct tuple2$2charphsTypeph* __result192__;
    __dec_obj257=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj258=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result192__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static void sLoadNode_finalize(struct sLoadNode* self){
char* __dec_obj288;
char* __dec_obj289;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj288=self->sname;
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        if(self->name==gComeFunResultObject) {
            __dec_obj289=self->name;
            __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLoadNode* sLoadNode_clone(struct sLoadNode* self){
void* __result_obj__=(void*)0;
struct sLoadNode* __result206__;
void* __right_value487 = (void*)0;
struct sLoadNode* result_350;
void* __right_value488 = (void*)0;
char* __dec_obj290;
void* __right_value489 = (void*)0;
char* __dec_obj291;
struct sLoadNode* __result207__;
    if(self==(void*)0) {
        __result206__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    result_350=(struct sLoadNode*)come_increment_ref_count((struct sLoadNode*)come_calloc(1, sizeof(struct sLoadNode)*(1), "sLoadNode_clone", 3, "sLoadNode"));
    if(self!=((void*)0)) {
        result_350->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj290=result_350->sname;
        result_350->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj291=result_350->name;
        result_350->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result207__ = gComeFunResultObject = __result_obj__ = result_350;
    /*i*/come_call_finalizer3(result_350,sLoadNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static void sStoreNode_finalize(struct sStoreNode* self){
char* __dec_obj305;
char* __dec_obj306;
struct sType* __dec_obj307;
struct sNode* __dec_obj308;
struct list$1charph* __dec_obj309;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj310;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj305=self->sname;
            __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        if(self->name==gComeFunResultObject) {
            __dec_obj306=self->name;
            __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->name = come_decrement_ref_count2(self->name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj307=self->type;
            /* a*/come_call_finalizer3(__dec_obj307,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        if(self->right_value==gComeFunResultObject) {
            __dec_obj308=self->right_value;
            if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->right_value) { self->right_value = come_decrement_ref_count2(self->right_value, ((struct sNode*)self->right_value)->finalize, ((struct sNode*)self->right_value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        if(self->multiple_assign==gComeFunResultObject) {
            __dec_obj309=self->multiple_assign;
            /* a*/come_call_finalizer3(__dec_obj309,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->multiple_assign,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        if(self->multiple_declare==gComeFunResultObject) {
            __dec_obj310=self->multiple_declare;
            /* a*/come_call_finalizer3(__dec_obj310,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->multiple_declare,list$1tuple3$3sTypephcharphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStoreNode* sStoreNode_clone(struct sStoreNode* self){
void* __result_obj__=(void*)0;
struct sStoreNode* __result212__;
void* __right_value505 = (void*)0;
struct sStoreNode* result_353;
void* __right_value506 = (void*)0;
char* __dec_obj311;
void* __right_value507 = (void*)0;
char* __dec_obj312;
void* __right_value508 = (void*)0;
struct sType* __dec_obj313;
void* __right_value509 = (void*)0;
struct sNode* __dec_obj314;
void* __right_value510 = (void*)0;
struct list$1charph* __dec_obj315;
void* __right_value511 = (void*)0;
struct list$1tuple3$3sTypephcharphsNodephph* __dec_obj316;
struct sStoreNode* __result213__;
    if(self==(void*)0) {
        __result212__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    result_353=(struct sStoreNode*)come_increment_ref_count((struct sStoreNode*)come_calloc(1, sizeof(struct sStoreNode)*(1), "sStoreNode_clone", 3, "sStoreNode"));
    if(self!=((void*)0)) {
        result_353->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj311=result_353->sname;
        result_353->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->name!=((void*)0)) {
        __dec_obj312=result_353->name;
        result_353->name=(char*)come_increment_ref_count(string_clone(self->name));
        __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_353->alloc=self->alloc;
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj313=result_353->type;
        result_353->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        /* a*/come_call_finalizer3(__dec_obj313,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->right_value!=((void*)0)) {
        __dec_obj314=result_353->right_value;
        result_353->right_value=(struct sNode*)come_increment_ref_count(sNode_clone(self->right_value));
        if(__dec_obj314) { __dec_obj314 = come_decrement_ref_count2(__dec_obj314, ((struct sNode*)__dec_obj314)->finalize, ((struct sNode*)__dec_obj314)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)&&self->multiple_assign!=((void*)0)) {
        __dec_obj315=result_353->multiple_assign;
        result_353->multiple_assign=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->multiple_assign));
        /* a*/come_call_finalizer3(__dec_obj315,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->multiple_declare!=((void*)0)) {
        __dec_obj316=result_353->multiple_declare;
        result_353->multiple_declare=(struct list$1tuple3$3sTypephcharphsNodephph*)come_increment_ref_count(list$1tuple3$3sTypephcharphsNodephphp_clone(self->multiple_declare));
        /* a*/come_call_finalizer3(__dec_obj316,list$1tuple3$3sTypephcharphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_353;
    /*i*/come_call_finalizer3(result_353,sStoreNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

