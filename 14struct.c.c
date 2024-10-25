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
    char* if_result_var_name;
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
struct sStructNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
};
struct sClassNode
{
    int sline;
    char* sname;
    char* mName;
    struct sClass* mClass;
    struct list$1sNodeph* mMethods;
    _Bool mOutput;
};
struct list_item$1sClassp
{
    struct sClass* item;
    struct list_item$1sClassp* prev;
    struct list_item$1sClassp* next;
};
struct list$1sClassp
{
    struct list_item$1sClassp* head;
    struct list_item$1sClassp* tail;
    int len;
    struct list_item$1sClassp* it;
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
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
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
char* get_none_generics_name(char* class_name);
char* create_generics_name(struct sType* generics_type, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
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
void output_struct(struct sClass* klass, struct sInfo* info);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
void output_struct_header(struct sClass* klass, struct sInfo* info);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);
static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
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
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);
_Bool sStructNode_terminated(struct sStructNode* self);
char* sStructNode_kind(struct sStructNode* self);
_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);
_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self);
char* sStructNobodyNode_kind(struct sStructNobodyNode* self);
_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);
struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);
_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self);
char* sGenericsStructNode_kind(struct sGenericsStructNode* self);
_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);
struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info);
_Bool sClassNode_terminated(struct sClassNode* self);
char* sClassNode_kind(struct sClassNode* self);
_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);
static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self);
static void list$1sClasspp_finalize(struct list$1sClassp* self);
static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self);
static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item);
static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self);
static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item);
static struct sClass* list$1sClassp_begin(struct list$1sClassp* self);
static _Bool list$1sClassp_end(struct list$1sClassp* self);
static struct sClass* list$1sClassp_next(struct list$1sClassp* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charph_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharph_rehash(struct map$2charphcharph* self);
static char* map$2charphcharph_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharph_end(struct map$2charphcharph* self);
static char* map$2charphcharph_next(struct map$2charphcharph* self);
static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value);
static void sClassNode_finalize(struct sClassNode* self);
static struct sClassNode* sClassNode_clone(struct sClassNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
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










char* get_none_generics_name(char* class_name){
void* __result_obj__=(void*)0;
char* p_64;
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
char* __result65__;
void* __right_value118 = (void*)0;
char* __result66__;
    p_64=class_name;
    while(*p_64) {
        if(*p_64==36) {
            __result65__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value117=string_substring(((char*)(__right_value116=__builtin_string(class_name))),0,p_64-class_name)));
            __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result65__;
        }
        else {
            p_64++;
        }
    }
    __result66__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value118=__builtin_string(class_name)));
    __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value120 = (void*)0;
struct buffer* buf_65;
struct sClass* klass_66;
char* class_name_67;
int i_68;
struct sType* type_69;
void* __right_value121 = (void*)0;
char* type_name_85;
int i_86;
void* __right_value122 = (void*)0;
char* __result69__;
    buf_65=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20, "buffer"))));
    klass_66=generics_type->mClass;
    class_name_67=klass_66->mName;
    buffer_append_str(buf_65,class_name_67);
    if(list$1sTypeph_length(generics_type->mGenericsTypes)>0) {
        buffer_append_char(buf_65,36);
        buffer_append_char(buf_65,list$1sTypeph_length(generics_type->mGenericsTypes)+48);
        for(        i_68=0;        i_68<list$1sTypeph_length(generics_type->mGenericsTypes);        i_68++        ){
            type_69=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,i_68), "14struct.c", 33, 0));
            type_name_85=(char*)come_increment_ref_count(create_generics_name(type_69,info));
            buffer_append_str(buf_65,type_name_85);
            for(            i_86=0;            i_86<type_69->mPointerNum;            i_86++            ){
                buffer_append_char(buf_65,112);
            }
            if(type_69->mHeap) {
                buffer_append_str(buf_65,"h");
            }
            type_name_85 = come_decrement_ref_count2(type_name_85, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result69__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value122=buffer_to_string(buf_65)));
    /*i*/come_call_finalizer3(buf_65,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value122 = come_decrement_ref_count2(__right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_70;
int i_71;
struct sType* __result67__;
struct sType* default_value_72;
struct sType* __result68__;
default_value_72 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_70=self->head;
    i_71=0;
    while(it_70!=((void*)0)) {
        if(position==i_71) {
            __result67__ = gComeFunResultObject = __result_obj__ = it_70->item;
            gComeFunResultObject = (void*)0;
            return __result67__;
        }
        it_70=it_70->next;
        i_71++;
    }
    memset(&default_value_72,0,sizeof(struct sType*));
    __result68__ = gComeFunResultObject = __result_obj__ = default_value_72;
    /*i*/come_call_finalizer3(default_value_72,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj15;
struct tuple1$1sTypeph* __dec_obj17;
struct tuple1$1sTypeph* __dec_obj19;
char* __dec_obj21;
struct list$1sTypeph* __dec_obj22;
struct list$1sNodeph* __dec_obj24;
struct list$1sTypeph* __dec_obj26;
struct list$1charph* __dec_obj27;
struct tuple1$1sTypeph* __dec_obj29;
struct sNode* __dec_obj31;
struct sNode* __dec_obj32;
char* __dec_obj33;
char* __dec_obj34;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj15=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj15,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj17=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj17,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj19=self->mNoExceptionType;
            /* a*/come_call_finalizer3(__dec_obj19,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj21=self->mGenericsName;
            __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj22=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj22,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj24=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj24,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj26=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj26,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj27=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj27,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj29=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj29,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj31=self->mAlignas;
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj32=self->mSizeNum;
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj33=self->mOriginalTypeName;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj34=self->mAsmName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_73;
struct list_item$1sTypeph* prev_it_74;
    it_73=self->head;
    while(it_73!=((void*)0)) {
        prev_it_74=it_73;
        it_73=it_73->next;
        /*i*/come_call_finalizer3(prev_it_74,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj23;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj23=self->item;
            /* a*/come_call_finalizer3(__dec_obj23,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_75;
struct list_item$1sTypeph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_77;
struct list_item$1sNodeph* prev_it_78;
    it_77=self->head;
    while(it_77!=((void*)0)) {
        prev_it_78=it_77;
        it_77=it_77->next;
        /*i*/come_call_finalizer3(prev_it_78,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj25;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj25=self->item;
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_79;
struct list_item$1sNodeph* prev_it_80;
    it_79=self->head;
    while(it_79!=((void*)0)) {
        prev_it_80=it_79;
        it_79=it_79->next;
        /*i*/come_call_finalizer3(prev_it_80,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_81;
struct list_item$1charph* prev_it_82;
    it_81=self->head;
    while(it_81!=((void*)0)) {
        prev_it_82=it_81;
        it_81=it_81->next;
        /*i*/come_call_finalizer3(prev_it_82,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_83;
struct list_item$1charph* prev_it_84;
    it_83=self->head;
    while(it_83!=((void*)0)) {
        prev_it_84=it_83;
        it_83=it_83->next;
        /*i*/come_call_finalizer3(prev_it_84,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj30;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj30=self->v1;
            /* a*/come_call_finalizer3(__dec_obj30,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct buffer* buf_87;
void* __right_value125 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_88;
struct tuple2$2charphsTypeph* it_91;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_94;
struct sType* type_95;
void* __right_value126 = (void*)0;
void* __right_value127 = (void*)0;
    if(!klass->mOutputed) {
        klass->mOutputed=(_Bool)1;
        buf_87=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61, "buffer"))));
        buffer_append_str(buf_87,((char*)(__right_value125=xsprintf("struct %s\n{\n",klass->mName))));
        __right_value125 = come_decrement_ref_count2(__right_value125, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        for(        o2_saved_88=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_91=list$1tuple2$2charphsTypephph_begin((o2_saved_88));        !list$1tuple2$2charphsTypephph_end((o2_saved_88));        it_91=list$1tuple2$2charphsTypephph_next((o2_saved_88))        ){
            multiple_assign_var1=it_91;
            name_94=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            type_95=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
            type_95->mStatic=(_Bool)0;
            buffer_append_str(buf_87,"    ");
            buffer_append_str(buf_87,((char*)(__right_value126=make_define_var(type_95,name_94,(_Bool)0,info))));
            __right_value126 = come_decrement_ref_count2(__right_value126, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_87,";\n");
            name_94 = come_decrement_ref_count2(name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_95,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_88,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_87,"};\n");
        if(info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(__right_value127=buffer_to_string(buf_87))));
            __right_value127 = come_decrement_ref_count2(__right_value127, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(buf_87,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_89;
struct tuple2$2charphsTypeph* __result70__;
struct tuple2$2charphsTypeph* __result71__;
struct tuple2$2charphsTypeph* result_90;
struct tuple2$2charphsTypeph* __result72__;
result_89 = (void*)0;
result_90 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_89,0,sizeof(struct tuple2$2charphsTypeph*));
        __result70__ = gComeFunResultObject = __result_obj__ = result_89;
        gComeFunResultObject = (void*)0;
        return __result70__;
    }
    self->it=self->head;
    if(self->it) {
        __result71__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    memset(&result_90,0,sizeof(struct tuple2$2charphsTypeph*));
    __result72__ = gComeFunResultObject = __result_obj__ = result_90;
    gComeFunResultObject = (void*)0;
    return __result72__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_92;
struct tuple2$2charphsTypeph* __result73__;
struct tuple2$2charphsTypeph* __result74__;
struct tuple2$2charphsTypeph* result_93;
struct tuple2$2charphsTypeph* __result75__;
result_92 = (void*)0;
result_93 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_92,0,sizeof(struct tuple2$2charphsTypeph*));
        __result73__ = gComeFunResultObject = __result_obj__ = result_92;
        gComeFunResultObject = (void*)0;
        return __result73__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result74__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    memset(&result_93,0,sizeof(struct tuple2$2charphsTypeph*));
    __result75__ = gComeFunResultObject = __result_obj__ = result_93;
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_96;
struct list_item$1tuple2$2charphsTypephph* prev_it_97;
    it_96=self->head;
    while(it_96!=((void*)0)) {
        prev_it_97=it_96;
        it_96=it_96->next;
        /*i*/come_call_finalizer3(prev_it_97,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj35;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj35=self->item;
            /* a*/come_call_finalizer3(__dec_obj35,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

void output_struct_header(struct sClass* klass, struct sInfo* info){
void* __right_value128 = (void*)0;
void* __right_value129 = (void*)0;
struct buffer* buf_98;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_99;
struct tuple2$2charphsTypeph* it_100;
struct tuple2$2charphsTypeph* multiple_assign_var2;
char* name_101;
struct sType* type_102;
void* __right_value132 = (void*)0;
void* __right_value133 = (void*)0;
    if(!klass->mOutputed2) {
        klass->mOutputed2=(_Bool)1;
        buf_98=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 98, "buffer"))));
        if(klass->mParentClassName) {
            buffer_append_str(buf_98,((char*)(__right_value130=xsprintf("struct %s extends %s\n{\n",klass->mName,klass->mParentClassName))));
            __right_value130 = come_decrement_ref_count2(__right_value130, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            buffer_append_str(buf_98,((char*)(__right_value131=xsprintf("struct %s\n{\n",klass->mName))));
            __right_value131 = come_decrement_ref_count2(__right_value131, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        for(        o2_saved_99=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass->mFields)),it_100=list$1tuple2$2charphsTypephph_begin((o2_saved_99));        !list$1tuple2$2charphsTypephph_end((o2_saved_99));        it_100=list$1tuple2$2charphsTypephph_next((o2_saved_99))        ){
            multiple_assign_var2=it_100;
            name_101=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            type_102=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
            type_102->mStatic=(_Bool)0;
            buffer_append_str(buf_98,"    ");
            buffer_append_str(buf_98,((char*)(__right_value132=make_define_var_no_solved(type_102,name_101,(_Bool)0,(_Bool)0,info))));
            __right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            buffer_append_str(buf_98,";\n");
            name_101 = come_decrement_ref_count2(name_101, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_102,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_99,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_98,"};\n");
        if(info->output_header_file&&string_operator_not_equals(klass->mDeclareSName,info->base_sname)) {
        }
        else {
            add_come_code_at_come_header(info,"%s",((char*)(__right_value133=buffer_to_string(buf_98))));
            __right_value133 = come_decrement_ref_count2(__right_value133, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(buf_98,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_103;
struct sClass* klass_104;
int i_105;
_Bool result_106;
    type2_103=type->mNoSolvedGenericsType->v1;
    if(type2_103&&is_no_contained_generics_types(type2_103,info)) {
        return (_Bool)0;
    }
    klass_104=type->mClass;
    if(klass_104->mGenerics) {
        return (_Bool)0;
    }
    if(klass_104->mMethodGenerics) {
        return (_Bool)0;
    }
    for(    i_105=0;    i_105<list$1sTypeph_length(type->mGenericsTypes);    i_105++    ){
        result_106=is_no_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_105), "14struct.c", 144, 1)),info);
        if(!result_106) {
            return (_Bool)0;
        }
    }
    return (_Bool)1;
}

_Bool is_contained_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_107;
struct sClass* klass_108;
int i_109;
_Bool result_110;
    type2_107=type->mNoSolvedGenericsType->v1;
    if(type2_107&&is_contained_generics_types(type2_107,info)) {
        return (_Bool)1;
    }
    klass_108=type->mClass;
    if(klass_108->mGenerics) {
        return (_Bool)1;
    }
    for(    i_109=0;    i_109<list$1sTypeph_length(type->mGenericsTypes);    i_109++    ){
        result_110=is_contained_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_109), "14struct.c", 168, 2)),info);
        if(result_110) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info){
struct sType* type2_111;
struct sClass* klass_112;
int i_113;
_Bool result_114;
    type2_111=type->mNoSolvedGenericsType->v1;
    if(type2_111&&is_contained_method_generics_types(type2_111,info)) {
        return (_Bool)1;
    }
    klass_112=type->mClass;
    if(klass_112->mMethodGenerics) {
        return (_Bool)1;
    }
    for(    i_113=0;    i_113<list$1sTypeph_length(type->mGenericsTypes);    i_113++    ){
        result_114=is_contained_method_generics_types(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(type->mGenericsTypes,i_113), "14struct.c", 192, 3)),info);
        if(result_114) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __right_value134 = (void*)0;
char* new_name_115;
void* __right_value170 = (void*)0;
struct sType* type2_118;
struct sClass* generics_class_137;
_Bool __result98__;
void* __right_value171 = (void*)0;
void* __right_value172 = (void*)0;
struct sClass* new_class_143;
void* __right_value176 = (void*)0;
int i_185;
struct list$1tuple2$2charphsTypephph* o2_saved_186;
struct tuple2$2charphsTypeph* it_187;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_188;
struct sType* type_189;
void* __right_value177 = (void*)0;
struct sType* new_type_190;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
void* __right_value185 = (void*)0;
struct sType* __dec_obj77;
struct sClass* generics_class_196;
_Bool __result123__;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct sClass* new_class_197;
void* __right_value188 = (void*)0;
_Bool existance_method_generics_198;
int i_199;
struct list$1tuple2$2charphsTypephph* o2_saved_200;
struct tuple2$2charphsTypeph* it_201;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_202;
struct sType* type_203;
void* __right_value189 = (void*)0;
struct sType* new_type_204;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
void* __right_value194 = (void*)0;
struct sType* __dec_obj78;
void* __right_value195 = (void*)0;
struct sType* __dec_obj79;
_Bool __result124__;
    new_name_115=(char*)come_increment_ref_count(create_generics_name(type,info));
    if(is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(info->classes,new_name_115)) {
        type2_118=(struct sType*)come_increment_ref_count(sType_clone(type));
        generics_class_137=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
        if(generics_class_137==((void*)0)) {
            err_msg(info,"generics_class(%s) is null",type->mClass->mName);
            __result98__ = (_Bool)0;
            /*i*/come_call_finalizer3(type2_118,sType_finalize, 0, 0, 0, 0, (void*)0);
            new_name_115 = come_decrement_ref_count2(new_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result98__;
        }
        new_class_143=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 216, "sClass")),new_name_115,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_115)),(struct sClass*)come_increment_ref_count(new_class_143));
        i_185=0;
        for(        o2_saved_186=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_137->mFields)),it_187=list$1tuple2$2charphsTypephph_begin((o2_saved_186));        !list$1tuple2$2charphsTypephph_end((o2_saved_186));        it_187=list$1tuple2$2charphsTypephph_next((o2_saved_186))        ){
            multiple_assign_var3=it_187;
            name_188=(char*)come_increment_ref_count(multiple_assign_var3->v1);
            type_189=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
            new_type_190=(struct sType*)come_increment_ref_count(solve_generics(type_189,type2_118,info));
            list$1tuple2$2charphsTypephph_push_back(new_class_143->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 226, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_188)),(struct sType*)come_increment_ref_count(sType_clone(new_type_190)))));
            name_188 = come_decrement_ref_count2(name_188, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_189,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(new_type_190,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_186,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj77=type->mNoSolvedGenericsType->v1;
        type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
        /* a*/come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
        type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
        type->mClass=new_class_143;
        list$1sTypeph_reset(type->mGenericsTypes);
        output_struct(new_class_143,info);
        /*i*/come_call_finalizer3(type2_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(new_class_143,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(!map$2charphsClassph_find(info->classes,new_name_115)) {
            generics_class_196=map$2charphsClassphp_operator_load_element(info->generics_classes,type->mClass->mName);
            if(generics_class_196==((void*)0)) {
                err_msg(info,"generics_class(%s) is null",type->mClass->mName);
                __result123__ = (_Bool)0;
                new_name_115 = come_decrement_ref_count2(new_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result123__;
            }
            new_class_197=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 244, "sClass")),new_name_115,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
            map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(new_name_115)),(struct sClass*)come_increment_ref_count(new_class_197));
            existance_method_generics_198=(_Bool)0;
            i_199=0;
            for(            o2_saved_200=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((generics_class_196->mFields)),it_201=list$1tuple2$2charphsTypephph_begin((o2_saved_200));            !list$1tuple2$2charphsTypephph_end((o2_saved_200));            it_201=list$1tuple2$2charphsTypephph_next((o2_saved_200))            ){
                multiple_assign_var4=it_201;
                name_202=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                type_203=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                new_type_204=(struct sType*)come_increment_ref_count(solve_generics(type_203,generics_type,info));
                if(is_contained_method_generics_types(new_type_204,info)) {
                    existance_method_generics_198=(_Bool)1;
                }
                list$1tuple2$2charphsTypephph_push_back(new_class_197->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 259, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(string_clone(name_202)),(struct sType*)come_increment_ref_count(sType_clone(new_type_204)))));
                name_202 = come_decrement_ref_count2(name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_203,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(new_type_204,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_200,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj78=type->mNoSolvedGenericsType->v1;
            type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
            /* a*/come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
            type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            type->mClass=new_class_197;
            list$1sTypeph_reset(type->mGenericsTypes);
            if(!existance_method_generics_198) {
                output_struct(new_class_197,info);
            }
            /*i*/come_call_finalizer3(new_class_197,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(type->mNoSolvedGenericsType->v1==((void*)0)) {
                __dec_obj79=type->mNoSolvedGenericsType->v1;
                type->mNoSolvedGenericsType->v1=(struct sType*)come_increment_ref_count(sType_clone(type));
                /* a*/come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
                type->mNoSolvedGenericsType->v1->mPointerNum=type->mPointerNum;
            }
            type->mClass=map$2charphsClassphp_operator_load_element(info->classes,new_name_115);
            list$1sTypeph_reset(type->mGenericsTypes);
        }
    }
    __result124__ = (_Bool)1;
    new_name_115 = come_decrement_ref_count2(new_name_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result124__;
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
unsigned int hash_116;
int it_117;
    hash_116=string_get_hash_key(((char*)key))%self->size;
    it_117=hash_116;
    while((_Bool)1) {
        if(self->item_existance[it_117]) {
            if(string_equals(self->keys[it_117],key)) {
                return (_Bool)1;
            }
            it_117++;
            if(it_117>=self->size) {
                it_117=0;
            }
            else {
                if(it_117==hash_116) {
                    return (_Bool)0;
                }
            }
        }
        else {
            return (_Bool)0;
        }
    }
    return (_Bool)0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result76__;
void* __right_value135 = (void*)0;
struct sType* result_119;
void* __right_value138 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value139 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value140 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value141 = (void*)0;
char* __dec_obj43;
void* __right_value148 = (void*)0;
struct list$1sTypeph* __dec_obj47;
void* __right_value156 = (void*)0;
struct list$1sNodeph* __dec_obj51;
void* __right_value157 = (void*)0;
struct list$1sTypeph* __dec_obj52;
void* __right_value164 = (void*)0;
struct list$1charph* __dec_obj56;
void* __right_value165 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value166 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value167 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value168 = (void*)0;
char* __dec_obj60;
void* __right_value169 = (void*)0;
char* __dec_obj61;
struct sType* __result93__;
    if(self==(void*)0) {
        __result76__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result76__;
    }
    result_119=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_119->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj40=result_119->mNoSolvedGenericsType;
        result_119->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj41=result_119->mOriginalLoadVarType;
        result_119->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj42=result_119->mNoExceptionType;
        result_119->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj43=result_119->mGenericsName;
        result_119->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_119->mGenericsTypes;
        result_119->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj51=result_119->mArrayNum;
        result_119->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_119->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj52=result_119->mParamTypes;
        result_119->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj56=result_119->mParamNames;
        result_119->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj56,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj57=result_119->mResultType;
        result_119->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_119->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj58=result_119->mAlignas;
        result_119->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_119->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_119->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_119->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_119->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_119->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_119->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_119->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_119->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_119->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_119->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_119->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_119->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_119->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_119->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_119->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_119->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_119->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_119->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_119->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_119->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_119->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_119->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_119->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_119->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_119->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_119->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_119->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj59=result_119->mSizeNum;
        result_119->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_119->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_119->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_119->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj60=result_119->mOriginalTypeName;
        result_119->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_119->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_119->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_119->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_119->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_119->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_119->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_119->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_119->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_119->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj61=result_119->mAsmName;
        result_119->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_119->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_119->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_119->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_119->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_119->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_119->mOriginIsArray=self->mOriginIsArray;
    }
    __result93__ = gComeFunResultObject = __result_obj__ = result_119;
    /*i*/come_call_finalizer3(result_119,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result93__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result77__;
void* __right_value136 = (void*)0;
struct tuple1$1sTypeph* result_120;
void* __right_value137 = (void*)0;
struct sType* __dec_obj38;
struct tuple1$1sTypeph* __result78__;
    if(self==(void*)0) {
        __result77__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result77__;
    }
    result_120=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj38=result_120->v1;
        result_120->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result78__ = gComeFunResultObject = __result_obj__ = result_120;
    /*i*/come_call_finalizer3(result_120,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj39;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj39=self->v1;
            /* a*/come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result79__;
void* __right_value142 = (void*)0;
void* __right_value143 = (void*)0;
struct list$1sTypeph* result_121;
struct list_item$1sTypeph* it_122;
void* __right_value147 = (void*)0;
struct list$1sTypeph* __result82__;
    if(self==((void*)0)) {
        __result79__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result79__;
    }
    result_121=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 137, "list$1sTypeph"))));
    it_122=self->head;
    while(it_122!=((void*)0)) {
        list$1sTypeph_add(result_121,(struct sType*)come_increment_ref_count(sType_clone(it_122->item)));
        it_122=it_122->next;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_121;
    /*i*/come_call_finalizer3(result_121,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result80__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value144 = (void*)0;
struct list_item$1sTypeph* litem_123;
struct sType* __dec_obj44;
void* __right_value145 = (void*)0;
struct list_item$1sTypeph* litem_124;
struct sType* __dec_obj45;
void* __right_value146 = (void*)0;
struct list_item$1sTypeph* litem_125;
struct sType* __dec_obj46;
struct list$1sTypeph* __result81__;
    if(self->len==0) {
        litem_123=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value144=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 151, "list_item$1sTypeph"))));
        litem_123->prev=((void*)0);
        litem_123->next=((void*)0);
        __dec_obj44=litem_123->item;
        litem_123->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_123;
        self->head=litem_123;
    }
    else {
        if(self->len==1) {
            litem_124=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value145=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 161, "list_item$1sTypeph"))));
            litem_124->prev=self->head;
            litem_124->next=((void*)0);
            __dec_obj45=litem_124->item;
            litem_124->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_124;
            self->head->next=litem_124;
        }
        else {
            litem_125=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value146=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 171, "list_item$1sTypeph"))));
            litem_125->prev=self->tail;
            litem_125->next=((void*)0);
            __dec_obj46=litem_125->item;
            litem_125->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_125;
            self->tail=litem_125;
        }
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result83__;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
struct list$1sNodeph* result_126;
struct list_item$1sNodeph* it_127;
void* __right_value155 = (void*)0;
struct list$1sNodeph* __result88__;
    if(self==((void*)0)) {
        __result83__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result83__;
    }
    result_126=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 137, "list$1sNodeph"))));
    it_127=self->head;
    while(it_127!=((void*)0)) {
        list$1sNodeph_add(result_126,(struct sNode*)come_increment_ref_count(sNode_clone(it_127->item)));
        it_127=it_127->next;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_126;
    /*i*/come_call_finalizer3(result_126,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result84__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
struct list_item$1sNodeph* litem_128;
struct sNode* __dec_obj48;
void* __right_value152 = (void*)0;
struct list_item$1sNodeph* litem_129;
struct sNode* __dec_obj49;
void* __right_value153 = (void*)0;
struct list_item$1sNodeph* litem_130;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result85__;
    if(self->len==0) {
        litem_128=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value151=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 151, "list_item$1sNodeph"))));
        litem_128->prev=((void*)0);
        litem_128->next=((void*)0);
        __dec_obj48=litem_128->item;
        litem_128->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_128;
        self->head=litem_128;
    }
    else {
        if(self->len==1) {
            litem_129=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value152=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 161, "list_item$1sNodeph"))));
            litem_129->prev=self->head;
            litem_129->next=((void*)0);
            __dec_obj49=litem_129->item;
            litem_129->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_129;
            self->head->next=litem_129;
        }
        else {
            litem_130=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value153=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 171, "list_item$1sNodeph"))));
            litem_130->prev=self->tail;
            litem_130->next=((void*)0);
            __dec_obj50=litem_130->item;
            litem_130->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_130;
            self->tail=litem_130;
        }
    }
    self->len++;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result86__;
void* __right_value154 = (void*)0;
struct sNode* result_131;
struct sNode* __result87__;
    if(self==(void*)0) {
        __result86__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    result_131=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_131->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_131->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_131->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_131->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_131->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_131->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_131->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_131->kind=self->kind;
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_131;
    if(result_131) { result_131 = come_decrement_ref_count2(result_131, ((struct sNode*)result_131)->finalize, ((struct sNode*)result_131)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result89__;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
struct list$1charph* result_132;
struct list_item$1charph* it_133;
void* __right_value163 = (void*)0;
struct list$1charph* __result92__;
    if(self==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    result_132=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 137, "list$1charph"))));
    it_133=self->head;
    while(it_133!=((void*)0)) {
        list$1charph_add(result_132,(char*)come_increment_ref_count(string_clone(it_133->item)));
        it_133=it_133->next;
    }
    __result92__ = gComeFunResultObject = __result_obj__ = result_132;
    /*i*/come_call_finalizer3(result_132,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result90__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value160 = (void*)0;
struct list_item$1charph* litem_134;
char* __dec_obj53;
void* __right_value161 = (void*)0;
struct list_item$1charph* litem_135;
char* __dec_obj54;
void* __right_value162 = (void*)0;
struct list_item$1charph* litem_136;
char* __dec_obj55;
struct list$1charph* __result91__;
    if(self->len==0) {
        litem_134=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value160=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 151, "list_item$1charph"))));
        litem_134->prev=((void*)0);
        litem_134->next=((void*)0);
        __dec_obj53=litem_134->item;
        litem_134->item=(char*)come_increment_ref_count(item);
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_134;
        self->head=litem_134;
    }
    else {
        if(self->len==1) {
            litem_135=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value161=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 161, "list_item$1charph"))));
            litem_135->prev=self->head;
            litem_135->next=((void*)0);
            __dec_obj54=litem_135->item;
            litem_135->item=(char*)come_increment_ref_count(item);
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_135;
            self->head->next=litem_135;
        }
        else {
            litem_136=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value162=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 171, "list_item$1charph"))));
            litem_136->prev=self->tail;
            litem_136->next=((void*)0);
            __dec_obj55=litem_136->item;
            litem_136->item=(char*)come_increment_ref_count(item);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_136;
            self->tail=litem_136;
        }
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_138;
unsigned int hash_139;
unsigned int it_140;
struct sClass* __result94__;
struct sClass* __result95__;
struct sClass* __result96__;
struct sClass* __result97__;
default_value_138 = (void*)0;
    memset(&default_value_138,0,sizeof(struct sClass*));
    hash_139=string_get_hash_key(((char*)key))%self->size;
    it_140=hash_139;
    while((_Bool)1) {
        if(self->item_existance[it_140]) {
            if(string_equals(self->keys[it_140],key)) {
                __result94__ = gComeFunResultObject = __result_obj__ = self->items[it_140];
                /*i*/come_call_finalizer3(default_value_138,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result94__;
            }
            it_140++;
            if(it_140>=self->size) {
                it_140=0;
            }
            else {
                if(it_140==hash_139) {
                    __result95__ = gComeFunResultObject = __result_obj__ = default_value_138;
                    /*i*/come_call_finalizer3(default_value_138,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result95__;
                }
            }
        }
        else {
            __result96__ = gComeFunResultObject = __result_obj__ = default_value_138;
            /*i*/come_call_finalizer3(default_value_138,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result96__;
        }
    }
    __result97__ = gComeFunResultObject = __result_obj__ = default_value_138;
    /*i*/come_call_finalizer3(default_value_138,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj62;
struct list$1tuple2$2charphsTypephph* __dec_obj63;
char* __dec_obj64;
char* __dec_obj65;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj62=self->mName;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj63=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj63,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj64=self->mDeclareSName;
            __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj65=self->mParentClassName;
            __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_141;
struct list_item$1tuple2$2charphsTypephph* prev_it_142;
    it_141=self->head;
    while(it_141!=((void*)0)) {
        prev_it_142=it_141;
        it_141=it_141->next;
        /*i*/come_call_finalizer3(prev_it_142,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_161;
unsigned int it_162;
_Bool same_key_exist_179;
char* it2_182;
struct map$2charphsClassph* __result119__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_161=string_get_hash_key(key)%self->size;
    it_162=hash_161;
    while((_Bool)1) {
        if(self->item_existance[it_162]) {
            if(string_equals(self->keys[it_162],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_162]);
                    self->keys[it_162] = come_decrement_ref_count2(self->keys[it_162], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_162]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_162]);
                    self->keys[it_162]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_162],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_162]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_162]=item;
                }
                break;
            }
            it_162++;
            if(it_162>=self->size) {
                it_162=0;
            }
            else {
                if(it_162==hash_161) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_162]=(_Bool)1;
            if(1) {
                self->keys[it_162]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_162]=key;
            }
            if(1) {
                self->items[it_162]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_162]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_179=(_Bool)0;
    for(    it2_182=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_182=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_182,key)) {
            same_key_exist_179=(_Bool)1;
        }
    }
    if(!same_key_exist_179) {
        list$1charp_push_back(self->key_list,key);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_144;
void* __right_value173 = (void*)0;
char** keys_145;
void* __right_value174 = (void*)0;
struct sClass** items_146;
void* __right_value175 = (void*)0;
_Bool* item_existance_147;
int len_148;
char* it_151;
struct sClass* default_value_154;
struct sClass* it2_155;
unsigned int hash_158;
int n_159;
struct sClass* default_value_160;
default_value_154 = (void*)0;
default_value_160 = (void*)0;
    size_144=self->size*10;
    keys_145=(char**)come_increment_ref_count(((char**)(__right_value173=(char**)come_calloc(1, sizeof(char*)*(1*(size_144)), "./comelang.h", 1621, "char*%"))));
    items_146=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value174=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_144)), "./comelang.h", 1622, "sClass*%"))));
    item_existance_147=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value175=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_144)), "./comelang.h", 1623, "bool"))));
    len_148=0;
    for(    it_151=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_151=map$2charphsClassph_next(self)    ){
        memset(&default_value_154,0,sizeof(struct sClass*));
        it2_155=map$2charphsClassph_at(self,it_151,default_value_154);
        hash_158=string_get_hash_key(it_151)%size_144;
        n_159=hash_158;
        while((_Bool)1) {
            if(item_existance_147[n_159]) {
                n_159++;
                if(n_159>=size_144) {
                    n_159=0;
                }
                else {
                    if(n_159==hash_158) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_147[n_159]=(_Bool)1;
                keys_145[n_159]=it_151;
                items_146[n_159]=map$2charphsClassph_at(self,it_151,default_value_160);
                len_148++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_145;
    self->items=items_146;
    self->item_existance=item_existance_147;
    self->size=size_144;
    self->len=len_148;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_149;
char* __result99__;
char* __result100__;
char* result_150;
char* __result101__;
result_149 = (void*)0;
result_150 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_149,0,sizeof(char*));
        __result99__ = gComeFunResultObject = __result_obj__ = result_149;
        gComeFunResultObject = (void*)0;
        return __result99__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result100__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    memset(&result_150,0,sizeof(char*));
    __result101__ = gComeFunResultObject = __result_obj__ = result_150;
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_152;
char* __result102__;
char* __result103__;
char* result_153;
char* __result104__;
result_152 = (void*)0;
result_153 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_152,0,sizeof(char*));
        __result102__ = gComeFunResultObject = __result_obj__ = result_152;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result103__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    memset(&result_153,0,sizeof(char*));
    __result104__ = gComeFunResultObject = __result_obj__ = result_153;
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_156;
unsigned int it_157;
struct sClass* __result105__;
struct sClass* __result106__;
struct sClass* __result107__;
struct sClass* __result108__;
    hash_156=string_get_hash_key(((char*)key))%self->size;
    it_157=hash_156;
    while((_Bool)1) {
        if(self->item_existance[it_157]) {
            if(string_equals(self->keys[it_157],key)) {
                __result105__ = gComeFunResultObject = __result_obj__ = self->items[it_157];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result105__;
            }
            it_157++;
            if(it_157>=self->size) {
                it_157=0;
            }
            else {
                if(it_157==hash_156) {
                    __result106__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result106__;
                }
            }
        }
        else {
            __result107__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result107__;
        }
    }
    __result108__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_163;
struct list_item$1charp* it_164;
struct list$1charp* __result112__;
    it2_163=0;
    it_164=self->head;
    while(it_164!=((void*)0)) {
        if(charp_equals(it_164->item,item)) {
            list$1charp_delete(self,it2_163,it2_163+1);
            break;
        }
        it2_163++;
        it_164=it_164->next;
    }
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_165;
struct list$1charp* __result109__;
struct list_item$1charp* it_168;
int i_169;
struct list_item$1charp* prev_it_170;
struct list_item$1charp* it_171;
int i_172;
struct list_item$1charp* prev_it_173;
struct list_item$1charp* it_174;
struct list_item$1charp* head_prev_it_175;
struct list_item$1charp* tail_it_176;
int i_177;
struct list_item$1charp* prev_it_178;
struct list$1charp* __result111__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_165=tail;
        tail=head;
        head=tmp_165;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result109__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_168=self->head;
            i_169=0;
            while(it_168!=((void*)0)) {
                if(i_169<tail) {
                    prev_it_170=it_168;
                    it_168=it_168->next;
                    i_169++;
                    /*i*/come_call_finalizer3(prev_it_170,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_169==tail) {
                        self->head=it_168;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_168=it_168->next;
                        i_169++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_171=self->head;
                i_172=0;
                while(it_171!=((void*)0)) {
                    if(i_172==head) {
                        self->tail=it_171->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_172>=head) {
                        prev_it_173=it_171;
                        it_171=it_171->next;
                        i_172++;
                        /*i*/come_call_finalizer3(prev_it_173,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_171=it_171->next;
                        i_172++;
                    }
                }
            }
            else {
                it_174=self->head;
                head_prev_it_175=((void*)0);
                tail_it_176=((void*)0);
                i_177=0;
                while(it_174!=((void*)0)) {
                    if(i_177==head) {
                        head_prev_it_175=it_174->prev;
                    }
                    if(i_177==tail) {
                        tail_it_176=it_174;
                    }
                    if(i_177>=head&&i_177<tail) {
                        prev_it_178=it_174;
                        it_174=it_174->next;
                        i_177++;
                        /*i*/come_call_finalizer3(prev_it_178,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_174=it_174->next;
                        i_177++;
                    }
                }
                if(head_prev_it_175!=((void*)0)) {
                    head_prev_it_175->next=tail_it_176;
                }
                if(tail_it_176!=((void*)0)) {
                    tail_it_176->prev=head_prev_it_175;
                }
            }
        }
    }
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_166;
struct list_item$1charp* prev_it_167;
struct list$1charp* __result110__;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        prev_it_167=it_166;
        it_166=it_166->next;
        /*i*/come_call_finalizer3(prev_it_167,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_180;
char* __result113__;
char* __result114__;
char* result_181;
char* __result115__;
result_180 = (void*)0;
result_181 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_180,0,sizeof(char*));
        __result113__ = gComeFunResultObject = __result_obj__ = result_180;
        gComeFunResultObject = (void*)0;
        return __result113__;
    }
    self->it=self->head;
    if(self->it) {
        __result114__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result114__;
    }
    memset(&result_181,0,sizeof(char*));
    __result115__ = gComeFunResultObject = __result_obj__ = result_181;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_183;
char* __result116__;
char* __result117__;
char* result_184;
char* __result118__;
result_183 = (void*)0;
result_184 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_183,0,sizeof(char*));
        __result116__ = gComeFunResultObject = __result_obj__ = result_183;
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result117__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result117__;
    }
    memset(&result_184,0,sizeof(char*));
    __result118__ = gComeFunResultObject = __result_obj__ = result_184;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value178 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_191;
struct tuple2$2charphsTypeph* __dec_obj66;
void* __right_value179 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_192;
struct tuple2$2charphsTypeph* __dec_obj69;
void* __right_value180 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_193;
struct tuple2$2charphsTypeph* __dec_obj72;
struct list$1tuple2$2charphsTypephph* __result120__;
    if(self->len==0) {
        litem_191=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value178=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 221, "list_item$1tuple2$2charphsTypephph"))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        __dec_obj66=litem_191->item;
        litem_191->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj66,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_191;
        self->head=litem_191;
    }
    else {
        if(self->len==1) {
            litem_192=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value179=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 231, "list_item$1tuple2$2charphsTypephph"))));
            litem_192->prev=self->head;
            litem_192->next=((void*)0);
            __dec_obj69=litem_192->item;
            litem_192->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj69,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_192;
            self->head->next=litem_192;
        }
        else {
            litem_193=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value180=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 241, "list_item$1tuple2$2charphsTypephph"))));
            litem_193->prev=self->tail;
            litem_193->next=((void*)0);
            __dec_obj72=litem_193->item;
            litem_193->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj72,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_193;
            self->tail=litem_193;
        }
    }
    self->len++;
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj75;
struct sType* __dec_obj76;
struct tuple2$2charphsTypeph* __result121__;
    __dec_obj75=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj76=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_194;
struct list_item$1sTypeph* prev_it_195;
struct list$1sTypeph* __result122__;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        /*i*/come_call_finalizer3(prev_it_195,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result122__;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
char* __dec_obj81;
void* __right_value212 = (void*)0;
struct sClass* __dec_obj99;
struct sStructNode* __result133__;
    ((struct sNodeBase*)(__right_value196=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value196,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /* a*/come_call_finalizer3(__dec_obj99,sClass_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

_Bool sStructNode_terminated(struct sStructNode* self){
    return (_Bool)1;
}

char* sStructNode_kind(struct sStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
char* __result134__;
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value213=__builtin_string("sStructNode")));
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __right_value214 = (void*)0;
struct sClass* klass_212;
void* __right_value215 = (void*)0;
char* name_213;
void* __right_value216 = (void*)0;
struct sClass* klass2_214;
void* __right_value217 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj103;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
struct sType* type_218;
void* __right_value223 = (void*)0;
_Bool __result150__;
    klass_212=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_213=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(map$2charphsClassph_at(info->classes,name_213,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_213),(struct sClass*)come_increment_ref_count(sClass_clone(klass_212)));
    }
    else {
        if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_213,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_212->mFields)>0) {
            klass2_214=map$2charphsClassph_at(info->classes,name_213,((void*)0));
            __dec_obj103=klass2_214->mFields;
            klass2_214->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_212->mFields));
            /* a*/come_call_finalizer3(__dec_obj103,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(map$2charphsTypephp_operator_load_element(info->types,name_213)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_213), "14struct.c", 318, 4))->mTypedef) {
    }
    else {
        type_218=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 321, "sType")),name_213,(_Bool)0,info));
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_213),(struct sType*)come_increment_ref_count(sType_clone(type_218)));
        /*i*/come_call_finalizer3(type_218,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self->mOutput) {
        output_struct(klass_212,info);
    }
    __result150__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_212,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_213 = come_decrement_ref_count2(name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result150__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj80;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj80=self->sname;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__=(void*)0;
struct sClass* __result125__;
void* __right_value198 = (void*)0;
struct sClass* result_205;
void* __right_value199 = (void*)0;
char* __dec_obj82;
void* __right_value209 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj96;
void* __right_value210 = (void*)0;
char* __dec_obj97;
void* __right_value211 = (void*)0;
char* __dec_obj98;
struct sClass* __result132__;
    if(self==(void*)0) {
        __result125__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    result_205=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3, "sClass"));
    if(self!=((void*)0)) {
        result_205->mStruct=self->mStruct;
    }
    if(self!=((void*)0)) {
        result_205->mFloat=self->mFloat;
    }
    if(self!=((void*)0)) {
        result_205->mUnion=self->mUnion;
    }
    if(self!=((void*)0)) {
        result_205->mGenerics=self->mGenerics;
    }
    if(self!=((void*)0)) {
        result_205->mMethodGenerics=self->mMethodGenerics;
    }
    if(self!=((void*)0)) {
        result_205->mEnum=self->mEnum;
    }
    if(self!=((void*)0)) {
        result_205->mProtocol=self->mProtocol;
    }
    if(self!=((void*)0)) {
        result_205->mNumber=self->mNumber;
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj82=result_205->mName;
        result_205->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_205->mGenericsNum=self->mGenericsNum;
    }
    if(self!=((void*)0)) {
        result_205->mMethodGenericsNum=self->mMethodGenericsNum;
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        __dec_obj96=result_205->mFields;
        result_205->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(self->mFields));
        /* a*/come_call_finalizer3(__dec_obj96,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_205->mOutputed=self->mOutputed;
    }
    if(self!=((void*)0)) {
        result_205->mOutputed2=self->mOutputed2;
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj97=result_205->mDeclareSName;
        result_205->mDeclareSName=(char*)come_increment_ref_count(string_clone(self->mDeclareSName));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_205->mNobodyStruct=self->mNobodyStruct;
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        __dec_obj98=result_205->mParentClassName;
        result_205->mParentClassName=(char*)come_increment_ref_count(string_clone(self->mParentClassName));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = result_205;
    /*i*/come_call_finalizer3(result_205,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result126__;
void* __right_value200 = (void*)0;
void* __right_value201 = (void*)0;
struct list$1tuple2$2charphsTypephph* result_206;
struct list_item$1tuple2$2charphsTypephph* it_207;
void* __right_value208 = (void*)0;
struct list$1tuple2$2charphsTypephph* __result131__;
    if(self==((void*)0)) {
        __result126__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    result_206=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang.h", 137, "list$1tuple2$2charphsTypephph"))));
    it_207=self->head;
    while(it_207!=((void*)0)) {
        list$1tuple2$2charphsTypephph_add(result_206,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_207->item)));
        it_207=it_207->next;
    }
    __result131__ = gComeFunResultObject = __result_obj__ = result_206;
    /*i*/come_call_finalizer3(result_206,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result127__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value202 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_208;
struct tuple2$2charphsTypeph* __dec_obj83;
void* __right_value203 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_209;
struct tuple2$2charphsTypeph* __dec_obj86;
void* __right_value204 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_210;
struct tuple2$2charphsTypeph* __dec_obj89;
struct list$1tuple2$2charphsTypephph* __result128__;
    if(self->len==0) {
        litem_208=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value202=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 151, "list_item$1tuple2$2charphsTypephph"))));
        litem_208->prev=((void*)0);
        litem_208->next=((void*)0);
        __dec_obj83=litem_208->item;
        litem_208->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj83,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_208;
        self->head=litem_208;
    }
    else {
        if(self->len==1) {
            litem_209=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value203=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 161, "list_item$1tuple2$2charphsTypephph"))));
            litem_209->prev=self->head;
            litem_209->next=((void*)0);
            __dec_obj86=litem_209->item;
            litem_209->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj86,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_209;
            self->head->next=litem_209;
        }
        else {
            litem_210=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value204=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 171, "list_item$1tuple2$2charphsTypephph"))));
            litem_210->prev=self->tail;
            litem_210->next=((void*)0);
            __dec_obj89=litem_210->item;
            litem_210->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj89,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_210;
            self->tail=litem_210;
        }
    }
    self->len++;
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj90;
struct sType* __dec_obj91;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            /* a*/come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result129__;
void* __right_value205 = (void*)0;
struct tuple2$2charphsTypeph* result_211;
void* __right_value206 = (void*)0;
char* __dec_obj92;
void* __right_value207 = (void*)0;
struct sType* __dec_obj93;
struct tuple2$2charphsTypeph* __result130__;
    if(self==(void*)0) {
        __result129__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    result_211=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3, "tuple2$2charphsTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj92=result_211->v1;
        result_211->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj93=result_211->v2;
        result_211->v2=(struct sType*)come_increment_ref_count(sType_clone(self->v2));
        /* a*/come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = result_211;
    /*i*/come_call_finalizer3(result_211,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj94;
struct sType* __dec_obj95;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj94=self->v1;
            __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj95=self->v2;
            /* a*/come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_215;
unsigned int hash_216;
unsigned int it_217;
struct sType* __result135__;
struct sType* __result136__;
struct sType* __result137__;
struct sType* __result138__;
default_value_215 = (void*)0;
    memset(&default_value_215,0,sizeof(struct sType*));
    hash_216=string_get_hash_key(((char*)key))%self->size;
    it_217=hash_216;
    while((_Bool)1) {
        if(self->item_existance[it_217]) {
            if(string_equals(self->keys[it_217],key)) {
                __result135__ = gComeFunResultObject = __result_obj__ = self->items[it_217];
                /*i*/come_call_finalizer3(default_value_215,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result135__;
            }
            it_217++;
            if(it_217>=self->size) {
                it_217=0;
            }
            else {
                if(it_217==hash_216) {
                    __result136__ = gComeFunResultObject = __result_obj__ = default_value_215;
                    /*i*/come_call_finalizer3(default_value_215,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result136__;
                }
            }
        }
        else {
            __result137__ = gComeFunResultObject = __result_obj__ = default_value_215;
            /*i*/come_call_finalizer3(default_value_215,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result137__;
        }
    }
    __result138__ = gComeFunResultObject = __result_obj__ = default_value_215;
    /*i*/come_call_finalizer3(default_value_215,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_236;
unsigned int it_237;
_Bool same_key_exist_238;
char* it2_239;
struct map$2charphsTypeph* __result149__;
    if(self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
    }
    hash_236=string_get_hash_key(key)%self->size;
    it_237=hash_236;
    while((_Bool)1) {
        if(self->item_existance[it_237]) {
            if(string_equals(self->keys[it_237],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_237]);
                    self->keys[it_237] = come_decrement_ref_count2(self->keys[it_237], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_237]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_237]);
                    self->keys[it_237]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_237],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_237]=(struct sType*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_237]=item;
                }
                break;
            }
            it_237++;
            if(it_237>=self->size) {
                it_237=0;
            }
            else {
                if(it_237==hash_236) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_237]=(_Bool)1;
            if(1) {
                self->keys[it_237]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_237]=key;
            }
            if(1) {
                self->items[it_237]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_237]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_238=(_Bool)0;
    for(    it2_239=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_239=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_239,key)) {
            same_key_exist_238=(_Bool)1;
        }
    }
    if(!same_key_exist_238) {
        list$1charp_push_back(self->key_list,key);
    }
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_219;
void* __right_value220 = (void*)0;
char** keys_220;
void* __right_value221 = (void*)0;
struct sType** items_221;
void* __right_value222 = (void*)0;
_Bool* item_existance_222;
int len_223;
char* it_226;
struct sType* default_value_229;
struct sType* it2_230;
unsigned int hash_233;
int n_234;
struct sType* default_value_235;
default_value_229 = (void*)0;
default_value_235 = (void*)0;
    size_219=self->size*10;
    keys_220=(char**)come_increment_ref_count(((char**)(__right_value220=(char**)come_calloc(1, sizeof(char*)*(1*(size_219)), "./comelang.h", 1621, "char*%"))));
    items_221=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value221=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_219)), "./comelang.h", 1622, "sType*%"))));
    item_existance_222=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value222=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_219)), "./comelang.h", 1623, "bool"))));
    len_223=0;
    for(    it_226=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_226=map$2charphsTypeph_next(self)    ){
        memset(&default_value_229,0,sizeof(struct sType*));
        it2_230=map$2charphsTypeph_at(self,it_226,default_value_229);
        hash_233=string_get_hash_key(it_226)%size_219;
        n_234=hash_233;
        while((_Bool)1) {
            if(item_existance_222[n_234]) {
                n_234++;
                if(n_234>=size_219) {
                    n_234=0;
                }
                else {
                    if(n_234==hash_233) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_222[n_234]=(_Bool)1;
                keys_220[n_234]=it_226;
                items_221[n_234]=map$2charphsTypeph_at(self,it_226,default_value_235);
                len_223++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_220;
    self->items=items_221;
    self->item_existance=item_existance_222;
    self->size=size_219;
    self->len=len_223;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_224;
char* __result139__;
char* __result140__;
char* result_225;
char* __result141__;
result_224 = (void*)0;
result_225 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_224,0,sizeof(char*));
        __result139__ = gComeFunResultObject = __result_obj__ = result_224;
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result140__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    memset(&result_225,0,sizeof(char*));
    __result141__ = gComeFunResultObject = __result_obj__ = result_225;
    gComeFunResultObject = (void*)0;
    return __result141__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_227;
char* __result142__;
char* __result143__;
char* result_228;
char* __result144__;
result_227 = (void*)0;
result_228 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_227,0,sizeof(char*));
        __result142__ = gComeFunResultObject = __result_obj__ = result_227;
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result143__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result143__;
    }
    memset(&result_228,0,sizeof(char*));
    __result144__ = gComeFunResultObject = __result_obj__ = result_228;
    gComeFunResultObject = (void*)0;
    return __result144__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_231;
unsigned int it_232;
struct sType* __result145__;
struct sType* __result146__;
struct sType* __result147__;
struct sType* __result148__;
    hash_231=string_get_hash_key(((char*)key))%self->size;
    it_232=hash_231;
    while((_Bool)1) {
        if(self->item_existance[it_232]) {
            if(string_equals(self->keys[it_232],key)) {
                __result145__ = gComeFunResultObject = __result_obj__ = self->items[it_232];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result145__;
            }
            it_232++;
            if(it_232>=self->size) {
                it_232=0;
            }
            else {
                if(it_232==hash_231) {
                    __result146__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result146__;
                }
            }
        }
        else {
            __result147__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
char* __dec_obj104;
void* __right_value226 = (void*)0;
struct sClass* __dec_obj105;
struct sStructNobodyNode* __result151__;
    ((struct sNodeBase*)(__right_value224=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value224,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj104=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj105=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /* a*/come_call_finalizer3(__dec_obj105,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

_Bool sStructNobodyNode_terminated(struct sStructNobodyNode* self){
    return (_Bool)1;
}

char* sStructNobodyNode_kind(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
void* __right_value227 = (void*)0;
char* __result152__;
    __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string("sStructNobodyNode")));
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result152__;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __right_value228 = (void*)0;
char* name_240;
struct sClass* klass_241;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sType* type_242;
void* __right_value232 = (void*)0;
_Bool __result153__;
    name_240=(char*)come_increment_ref_count(__builtin_string(self->mName));
    klass_241=self->mClass;
    if(map$2charphsClassph_at(info->classes,name_240,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_240),(struct sClass*)come_increment_ref_count(sClass_clone(klass_241)));
    }
    type_242=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 362, "sType")),name_240,(_Bool)0,info));
    if(map$2charphsTypephp_operator_load_element(info->types,name_240)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_240), "14struct.c", 364, 5))->mTypedef) {
    }
    else {
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_240),(struct sType*)come_increment_ref_count(sType_clone(type_242)));
    }
    if(info->output_header_file&&string_operator_not_equals(klass_241->mDeclareSName,info->base_sname)) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_240);
    }
    __result153__ = (_Bool)1;
    name_240 = come_decrement_ref_count2(name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_242,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result153__;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value233 = (void*)0;
struct sGenericsStructNode* __result154__;
    ((struct sNodeBase*)(__right_value233=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value233,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result154__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

_Bool sGenericsStructNode_terminated(struct sGenericsStructNode* self){
    return (_Bool)1;
}

char* sGenericsStructNode_kind(struct sGenericsStructNode* self){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result155__;
    __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=__builtin_string("sGenericsStructNode")));
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result155__;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
    return (_Bool)1;
}

struct sClassNode* sClassNode_initialize(struct sClassNode* self, char* name, struct sClass* klass, struct list$1sNodeph* methods, _Bool output, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
char* __dec_obj110;
void* __right_value237 = (void*)0;
struct sClass* __dec_obj111;
struct list$1sNodeph* __dec_obj112;
struct sClassNode* __result156__;
    ((struct sNodeBase*)(__right_value235=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value235,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj110=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj111=self->mClass;
    self->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(klass));
    /* a*/come_call_finalizer3(__dec_obj111,sClass_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mMethods;
    self->mMethods=(struct list$1sNodeph*)come_increment_ref_count(methods);
    /* a*/come_call_finalizer3(__dec_obj112,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOutput=output;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(methods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

_Bool sClassNode_terminated(struct sClassNode* self){
    return (_Bool)1;
}

char* sClassNode_kind(struct sClassNode* self){
void* __result_obj__=(void*)0;
void* __right_value238 = (void*)0;
char* __result157__;
    __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value238=__builtin_string("sClassNode")));
    __right_value238 = come_decrement_ref_count2(__right_value238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

_Bool sClassNode_compile(struct sClassNode* self, struct sInfo* info){
void* __right_value239 = (void*)0;
struct sClass* klass_243;
void* __right_value240 = (void*)0;
char* name_244;
void* __right_value241 = (void*)0;
struct sClass* klass2_245;
void* __right_value242 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj117;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
struct sType* type_246;
void* __right_value245 = (void*)0;
struct list$1sNodeph* o2_saved_247;
struct sNode* it_250;
_Bool __result164__;
_Bool __result165__;
    klass_243=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
    name_244=(char*)come_increment_ref_count(__builtin_string(self->mName));
    if(map$2charphsClassph_at(info->classes,name_244,((void*)0))==((void*)0)) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(name_244),(struct sClass*)come_increment_ref_count(sClass_clone(klass_243)));
    }
    else {
        if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,name_244,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(klass_243->mFields)>0) {
            klass2_245=map$2charphsClassph_at(info->classes,name_244,((void*)0));
            __dec_obj117=klass2_245->mFields;
            klass2_245->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephphp_clone(klass_243->mFields));
            /* a*/come_call_finalizer3(__dec_obj117,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    type_246=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 441, "sType")),name_244,(_Bool)0,info));
    if(map$2charphsTypephp_operator_load_element(info->types,name_244)!=((void*)0)&&((struct sType*)come_null_check(map$2charphsTypephp_operator_load_element(info->types,name_244), "14struct.c", 442, 6))->mTypedef) {
    }
    else {
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(name_244),(struct sType*)come_increment_ref_count(sType_clone(type_246)));
    }
    if(self->mOutput) {
        output_struct(klass_243,info);
    }
    for(    o2_saved_247=(struct list$1sNodeph*)come_increment_ref_count((self->mMethods)),it_250=list$1sNodeph_begin((o2_saved_247));    !list$1sNodeph_end((o2_saved_247));    it_250=list$1sNodeph_next((o2_saved_247))    ){
        if(!node_compile(it_250,info)) {
            __result164__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_247,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(klass_243,sClass_finalize, 0, 0, 0, 0, (void*)0);
            name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result164__;
        }
    }
    /*i*/come_call_finalizer3(o2_saved_247,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(self->mOutput) {
        output_struct_header(klass_243,info);
    }
    __result165__ = (_Bool)1;
    /*i*/come_call_finalizer3(klass_243,sClass_finalize, 0, 0, 0, 0, (void*)0);
    name_244 = come_decrement_ref_count2(name_244, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_246,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result165__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_248;
struct sNode* __result158__;
struct sNode* __result159__;
struct sNode* result_249;
struct sNode* __result160__;
result_248 = (void*)0;
result_249 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_248,0,sizeof(struct sNode*));
        __result158__ = gComeFunResultObject = __result_obj__ = result_248;
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    self->it=self->head;
    if(self->it) {
        __result159__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    memset(&result_249,0,sizeof(struct sNode*));
    __result160__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result160__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_251;
struct sNode* __result161__;
struct sNode* __result162__;
struct sNode* result_252;
struct sNode* __result163__;
result_251 = (void*)0;
result_252 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_251,0,sizeof(struct sNode*));
        __result161__ = gComeFunResultObject = __result_obj__ = result_251;
        gComeFunResultObject = (void*)0;
        return __result161__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result162__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    memset(&result_252,0,sizeof(struct sNode*));
    __result163__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result163__;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sClass* klass_253;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sClass* __dec_obj118;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sClass* __dec_obj119;
_Bool output_254;
struct sClass* parent_class_255;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
char* parent_class_name_256;
struct sNode* __result166__;
_Bool multiple_declare_257;
char* p_258;
int sline_259;
void* __right_value253 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* type_260;
char* name_261;
_Bool err_262;
void* __right_value254 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* base_type_263;
char* name_264;
_Bool err_265;
void* __right_value255 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var7;
struct sType* type2_266;
char* name2_267;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var8;
struct sType* type2_268;
char* name2_269;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type2_270;
char* name_271;
_Bool err_272;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
char* __dec_obj124;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* __right_value273 = (void*)0;
struct sNode* __result169__;
klass_253 = (void*)0;
memset(&output_254, 0, sizeof(_Bool));
    if(map$2charphsClassph_at(info->classes,type_name,((void*)0))==((void*)0)) {
        __dec_obj118=klass_253;
        klass_253=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 471, "sClass")),((char*)(__right_value247=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        /* a*/come_call_finalizer3(__dec_obj118,sClass_finalize, 0, 0, 0, 0, (void*)0);
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_253));
    }
    else {
        __dec_obj119=klass_253;
        klass_253=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name,((void*)0))));
        /* a*/come_call_finalizer3(__dec_obj119,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(list$1tuple2$2charphsTypephph_length(klass_253->mFields)>0) {
        output_254=(_Bool)0;
    }
    else {
        output_254=(_Bool)1;
    }
    parent_class_255=((void*)0);
    if(parsecmp("extends",info)) {
        ((char*)(__right_value251=parse_word(info)));
        __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        parent_class_name_256=(char*)come_increment_ref_count(parse_word(info));
        parent_class_255=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_256);
        if(parent_class_255==((void*)0)) {
            err_msg(info,"invalid class name(%s)",parent_class_name_256);
            __result166__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            parent_class_name_256 = come_decrement_ref_count2(parent_class_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(klass_253,sClass_finalize, 0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result166__;
        }
        parent_class_name_256 = come_decrement_ref_count2(parent_class_name_256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    expected_next_character(123,info);
    while((_Bool)1) {
        multiple_declare_257=(_Bool)0;
        {
            p_258=info->p;
            sline_259=info->sline;
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value253=backtrace_parse_type((_Bool)1,info)));
            type_260=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_261=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_262=multiple_assign_var5->v3;
            /*g*/come_call_finalizer3(__right_value253,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(err_262&&*info->p==44) {
                multiple_declare_257=(_Bool)1;
            }
            info->p=p_258;
            info->sline=sline_259;
            /*i*/come_call_finalizer3(type_260,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_261 = come_decrement_ref_count2(name_261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(multiple_declare_257) {
            multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value254=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            base_type_263=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
            name_264=(char*)come_increment_ref_count(multiple_assign_var6->v2);
            err_265=multiple_assign_var6->v3;
            /*g*/come_call_finalizer3(__right_value254,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            multiple_assign_var7=((struct tuple2$2sTypephcharph*)(__right_value255=parse_variable_name((struct sType*)come_increment_ref_count(base_type_263),(_Bool)1,info)));
            type2_266=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
            name2_267=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            /*g*/come_call_finalizer3(__right_value255,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(output_254) {
                list$1tuple2$2charphsTypephph_push_back(klass_253->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 524, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_267),(struct sType*)come_increment_ref_count(type2_266))));
            }
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple2$2sTypephcharph*)(__right_value258=parse_variable_name((struct sType*)come_increment_ref_count(base_type_263),(_Bool)0,info)));
                type2_268=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name2_269=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                /*g*/come_call_finalizer3(__right_value258,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                if(output_254) {
                    list$1tuple2$2charphsTypephph_push_back(klass_253->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 534, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_269),(struct sType*)come_increment_ref_count(type2_268))));
                }
                /*i*/come_call_finalizer3(type2_268,sType_finalize, 0, 0, 0, 0, (void*)0);
                name2_269 = come_decrement_ref_count2(name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(base_type_263,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_264 = come_decrement_ref_count2(name_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_266,sType_finalize, 0, 0, 0, 0, (void*)0);
            name2_267 = come_decrement_ref_count2(name2_267, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            parse_sharp_v5(info);
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value261=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
            type2_270=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_271=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_272=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value261,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(!err_272) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            if(output_254) {
                list$1tuple2$2charphsTypephph_push_back(klass_253->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 547, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_271),(struct sType*)come_increment_ref_count(type2_270))));
            }
            /*i*/come_call_finalizer3(type2_270,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_271 = come_decrement_ref_count2(name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
        parse_sharp_v5(info);
    }
    if(parent_class_255) {
        __dec_obj124=klass_253->mParentClassName;
        klass_253->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_255->mName));
        __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(klass_253->mName),(struct sClass*)come_increment_ref_count(sClass_clone(klass_253)));
    }
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 569, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(__right_value268=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 569, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name)),(struct sClass*)come_increment_ref_count(klass_253),output_254,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result169__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value273=_inf_value1));
    type_name = come_decrement_ref_count2(type_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(klass_253,sClass_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value268,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value273) { __right_value273 = come_decrement_ref_count2(__right_value273, ((struct sNode*)__right_value273)->finalize, ((struct sNode*)__right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result169__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj120;
char* __dec_obj121;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj120=self->v1;
            /* a*/come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj121=self->v2;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj122;
char* __dec_obj123;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj122=self->v1;
            /* a*/come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj123=self->v2;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_274;
void* __right_value274 = (void*)0;
char* type_name_275;
struct sClass* struct_class_276;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct sClass* __dec_obj131;
struct sClass* __dec_obj132;
char* source_tail_277;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct buffer* header_278;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* __right_value287 = (void*)0;
struct sNode* __result172__;
void* __right_value288 = (void*)0;
char* T_282;
void* __right_value292 = (void*)0;
struct sClass* generics_class_286;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct sClass* __dec_obj142;
void* __right_value295 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type2_287;
char* name_288;
_Bool err_289;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
char* name2_290;
void* __right_value299 = (void*)0;
struct sType* type3_291;
_Bool no_comma_292;
void* __right_value300 = (void*)0;
struct sNode* node_293;
struct sNode* __dec_obj143;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
char* source_tail_294;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct buffer* header_295;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* __right_value313 = (void*)0;
struct sNode* __result177__;
_Bool output_297;
struct sClass* struct_class_298;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sClass* __dec_obj146;
void* __right_value316 = (void*)0;
struct sClass* __dec_obj147;
struct sClass* parent_class_299;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* parent_class_name_300;
struct sNode* __result178__;
_Bool multiple_declare_301;
char* p_302;
int sline_303;
void* __right_value319 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type_304;
char* name_305;
_Bool err_306;
void* __right_value320 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12;
struct sType* base_type_307;
char* name_308;
_Bool err_309;
void* __right_value321 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var13;
struct sType* type2_310;
char* name2_311;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var14;
struct sType* type2_312;
char* name2_313;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15;
struct sType* type2_314;
char* name_315;
_Bool err_316;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sClass* klass2_317;
char* source_tail_318;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct buffer* header_319;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* __dec_obj148;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* __right_value344 = (void*)0;
struct sNode* __result181__;
char* source_head_321;
void* __right_value345 = (void*)0;
char* type_name_322;
struct sClass* parent_class_323;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
char* parent_class_name_324;
struct sNode* __result182__;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct list$1sClassp* parent_classes_325;
struct sClass* parent_class2_328;
_Bool output_332;
struct sClass* struct_class_333;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sClass* __dec_obj155;
void* __right_value355 = (void*)0;
struct sClass* __dec_obj156;
struct sClass* defining_class_334;
void* __right_value356 = (void*)0;
char* __dec_obj157;
void* __right_value357 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1sClassp* o2_saved_340;
struct sClass* parent_343;
struct list$1tuple2$2charphsTypephph* o2_saved_346;
struct tuple2$2charphsTypeph* it_347;
void* __right_value364 = (void*)0;
struct sClass* klass2_348;
void* __right_value365 = (void*)0;
char* __dec_obj158;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1sClassp* o2_saved_349;
struct sClass* parent_350;
struct list$1tuple2$2charphsTypephph* o2_saved_351;
struct tuple2$2charphsTypeph* it_352;
void* __right_value368 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_353;
struct tuple2$2charphsTypeph* it_354;
void* __right_value369 = (void*)0;
char* head_355;
char* p_saved_356;
int sline_saved_357;
char* sname_saved_358;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1sNodeph* methods_359;
void* __right_value372 = (void*)0;
char* __dec_obj159;
char* __dec_obj160;
struct map$2charphcharph* __dec_obj161;
_Bool include__362;
_Bool multiple_declare_363;
char* p_364;
int sline_365;
void* __right_value373 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var16;
struct sType* type_366;
char* name_367;
_Bool err_368;
_Bool define_function_flag_369;
char* p_370;
int sline_371;
_Bool invalid_type_372;
void* __right_value374 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var17;
struct sType* result_type_373;
char* fun_name_374;
_Bool err_375;
char* word_376;
void* __right_value375 = (void*)0;
char* __dec_obj162;
void* __right_value376 = (void*)0;
char* __dec_obj163;
char* __dec_obj164;
void* __right_value377 = (void*)0;
char* __dec_obj165;
char* tail_377;
int pointer_num_378;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sType* __dec_obj166;
void* __right_value380 = (void*)0;
struct sNode* method_379;
struct sType* __dec_obj167;
void* __right_value384 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var18;
struct sType* base_type_383;
char* name_384;
_Bool err_385;
void* __right_value385 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var19;
struct sType* type2_386;
char* name2_387;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var20;
struct sType* type2_388;
char* name2_389;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* module_name_390;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct list$1charph* params_391;
void* __right_value395 = (void*)0;
char* word_392;
void* __right_value396 = (void*)0;
char* __dec_obj171;
void* __right_value397 = (void*)0;
char* __dec_obj172;
struct sNode* __result198__;
struct sClassModule* module_396;
void* __right_value398 = (void*)0;
void* __right_value404 = (void*)0;
struct map$2charphcharph* __dec_obj178;
int i_400;
struct list$1charph* o2_saved_401;
char* it_404;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
char* __dec_obj179;
void* __right_value412 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var21;
struct sType* type2_431;
char* name_432;
_Bool err_433;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
char* __dec_obj180;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct sNode* _inf_value5;
struct sClassNode* _inf_obj_value5;
void* __right_value425 = (void*)0;
struct sNode* __result223__;
void* __right_value426 = (void*)0;
struct sNode* __result224__;
struct_class_276 = (void*)0;
generics_class_286 = (void*)0;
struct_class_298 = (void*)0;
struct_class_333 = (void*)0;
    if(charp_operator_equals(buf,"struct")) {
        source_head_274=head;
        type_name_275=(char*)come_increment_ref_count(parse_word(info));
        if(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            if(map$2charphsClassph_at(info->classes,type_name_275,((void*)0))==((void*)0)) {
                __dec_obj131=struct_class_276;
                struct_class_276=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 585, "sClass")),type_name_275,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj131,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_276->mNobodyStruct=(_Bool)1;
            }
            else {
                __dec_obj132=struct_class_276;
                struct_class_276=(struct sClass*)come_increment_ref_count(map$2charphsClassph_at(info->classes,type_name_275,((void*)0)));
                /* a*/come_call_finalizer3(__dec_obj132,sClass_finalize, 0, 0, 0, 0, (void*)0);
                struct_class_276->mNobodyStruct=(_Bool)1;
            }
            source_tail_277=info->p;
            header_278=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 595, "buffer"))));
            buffer_append(header_278,source_head_274,source_tail_277-source_head_274);
            add_come_code_at_come_header(info,"%s",((char*)(__right_value279=buffer_to_string(header_278))));
            __right_value279 = come_decrement_ref_count2(__right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 600, "struct sNode");
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(__right_value282=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 600, "sStructNobodyNode")),(char*)come_increment_ref_count(__builtin_string(type_name_275)),(struct sClass*)come_increment_ref_count(struct_class_276),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sNodeBase_sline;
            _inf_value2->sname=(void*)sNodeBase_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result172__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value287=_inf_value2));
            /*i*/come_call_finalizer3(struct_class_276,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_278,buffer_finalize, 0, 0, 0, 0, (void*)0);
            type_name_275 = come_decrement_ref_count2(type_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value282,sStructNobodyNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value287) { __right_value287 = come_decrement_ref_count2(__right_value287, ((struct sNode*)__right_value287)->finalize, ((struct sNode*)__right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result172__;
            /*i*/come_call_finalizer3(struct_class_276,sClass_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(header_278,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(*info->p==60) {
                list$1charph_reset(info->generics_type_names);
                info->p++;
                skip_spaces_and_lf(info);
                while((_Bool)1) {
                    T_282=(char*)come_increment_ref_count(parse_word(info));
                    list$1charph_push_back(info->generics_type_names,(char*)come_increment_ref_count(string_clone(T_282)));
                    if(*info->p==62) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        T_282 = come_decrement_ref_count2(T_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        if(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            exit(2);
                        }
                    }
                    T_282 = come_decrement_ref_count2(T_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(map$2charphsClassph_at(info->generics_classes,type_name_275,((void*)0))!=((void*)0)) {
                    err_msg(info,"redifined generics struct(%s)",type_name_275);
                    exit(2);
                }
                else {
                    __dec_obj142=generics_class_286;
                    generics_class_286=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 634, "sClass")),type_name_275,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj142,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(map$2charphsClassph_at(info->generics_classes,type_name_275,((void*)0))==((void*)0)) {
                    map$2charphsClassph_insert(info->generics_classes,(char*)come_increment_ref_count(type_name_275),(struct sClass*)come_increment_ref_count(generics_class_286));
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value295=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                    type2_287=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                    name_288=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                    err_289=multiple_assign_var10->v3;
                    /*g*/come_call_finalizer3(__right_value295,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(!err_289) {
                        printf("%s %d: parse_type failed\n",info->sname,info->sline);
                        exit(2);
                    }
                    if(*info->p==44) {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_286->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 654, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_288),(struct sType*)come_increment_ref_count(type2_287))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            name2_290=(char*)come_increment_ref_count(parse_word(info));
                            type3_291=(struct sType*)come_increment_ref_count(sType_clone(type2_287));
                            if(*info->p==58) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                no_comma_292=info->no_comma;
                                info->no_comma=(_Bool)1;
                                node_293=(struct sNode*)come_increment_ref_count(expression_v13(info));
                                info->no_comma=no_comma_292;
                                __dec_obj143=type3_291->mSizeNum;
                                type3_291->mSizeNum=(struct sNode*)come_increment_ref_count(node_293);
                                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
                                if(node_293) { node_293 = come_decrement_ref_count2(node_293, ((struct sNode*)node_293)->finalize, ((struct sNode*)node_293)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            list$1tuple2$2charphsTypephph_push_back(generics_class_286->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 676, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_290),(struct sType*)come_increment_ref_count(type3_291))));
                            name2_290 = come_decrement_ref_count2(name2_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(type3_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(generics_class_286->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 680, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_288),(struct sType*)come_increment_ref_count(type2_287))));
                    }
                    if(*info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        /*i*/come_call_finalizer3(type2_287,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_288 = come_decrement_ref_count2(name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    parse_sharp_v5(info);
                    /*i*/come_call_finalizer3(type2_287,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_288 = come_decrement_ref_count2(name_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                ((char*)(__right_value305=parse_attribute(info)));
                __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_reset(info->generics_type_names);
                source_tail_294=info->p;
                header_295=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 705, "buffer"))));
                buffer_append_str(header_295,"struct ");
                buffer_append(header_295,source_head_274,source_tail_294-source_head_274);
                add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value308=buffer_to_string(header_295))));
                __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 711, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(__right_value310=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count((struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 711, "sGenericsStructNode")),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result177__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value313=_inf_value3));
                /*i*/come_call_finalizer3(generics_class_286,sClass_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
                type_name_275 = come_decrement_ref_count2(type_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value310,sGenericsStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value313) { __right_value313 = come_decrement_ref_count2(__right_value313, ((struct sNode*)__right_value313)->finalize, ((struct sNode*)__right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result177__;
                /*i*/come_call_finalizer3(generics_class_286,sClass_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(header_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                output_297=(_Bool)1;
                if(map$2charphsClassph_at(info->classes,type_name_275,((void*)0))==((void*)0)) {
                    __dec_obj146=struct_class_298;
                    struct_class_298=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 718, "sClass")),type_name_275,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj146,sClass_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj147=struct_class_298;
                    struct_class_298=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_275,((void*)0))));
                    /* a*/come_call_finalizer3(__dec_obj147,sClass_finalize, 0, 0, 0, 0, (void*)0);
                    if(list$1tuple2$2charphsTypephph_length(struct_class_298->mFields)>0) {
                        output_297=(_Bool)0;
                    }
                }
                parent_class_299=((void*)0);
                if(parsecmp("extends",info)) {
                    ((char*)(__right_value317=parse_word(info)));
                    __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    parent_class_name_300=(char*)come_increment_ref_count(parse_word(info));
                    parent_class_299=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_300);
                    if(parent_class_299==((void*)0)) {
                        err_msg(info,"invalid class name(%s)",parent_class_name_300);
                        __result178__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                        parent_class_name_300 = come_decrement_ref_count2(parent_class_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(struct_class_298,sClass_finalize, 0, 0, 0, 0, (void*)0);
                        type_name_275 = come_decrement_ref_count2(type_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        gComeFunResultObject = (void*)0;
                        return __result178__;
                    }
                    parent_class_name_300 = come_decrement_ref_count2(parent_class_name_300, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                expected_next_character(123,info);
                while((_Bool)1) {
                    parse_sharp_v5(info);
                    multiple_declare_301=(_Bool)0;
                    {
                        p_302=info->p;
                        sline_303=info->sline;
                        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value319=backtrace_parse_type((_Bool)1,info)));
                        type_304=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
                        name_305=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        err_306=multiple_assign_var11->v3;
                        /*g*/come_call_finalizer3(__right_value319,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(err_306&&*info->p==44) {
                            multiple_declare_301=(_Bool)1;
                        }
                        info->p=p_302;
                        info->sline=sline_303;
                        /*i*/come_call_finalizer3(type_304,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_305 = come_decrement_ref_count2(name_305, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(multiple_declare_301) {
                        multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value320=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_307=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
                        name_308=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        err_309=multiple_assign_var12->v3;
                        /*g*/come_call_finalizer3(__right_value320,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var13=((struct tuple2$2sTypephcharph*)(__right_value321=parse_variable_name((struct sType*)come_increment_ref_count(base_type_307),(_Bool)1,info)));
                        type2_310=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
                        name2_311=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        /*g*/come_call_finalizer3(__right_value321,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_298->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 766, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_311),(struct sType*)come_increment_ref_count(type2_310))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var14=((struct tuple2$2sTypephcharph*)(__right_value324=parse_variable_name((struct sType*)come_increment_ref_count(base_type_307),(_Bool)0,info)));
                            type2_312=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
                            name2_313=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                            /*g*/come_call_finalizer3(__right_value324,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_298->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 774, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_313),(struct sType*)come_increment_ref_count(type2_312))));
                            /*i*/come_call_finalizer3(type2_312,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_313 = come_decrement_ref_count2(name2_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(base_type_307,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_308 = come_decrement_ref_count2(name_308, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type2_310,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_311 = come_decrement_ref_count2(name2_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value327=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                        type2_314=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                        name_315=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        err_316=multiple_assign_var15->v3;
                        /*g*/come_call_finalizer3(__right_value327,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(!err_316) {
                            printf("%s %d: parse_type failed\n",info->sname,info->sline);
                            exit(2);
                        }
                        list$1tuple2$2charphsTypephph_push_back(struct_class_298->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 784, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_315),(struct sType*)come_increment_ref_count(type2_314))));
                        /*i*/come_call_finalizer3(type2_314,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_315 = come_decrement_ref_count2(name_315, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    if(*info->p==59) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    parse_sharp_v5(info);
                    if(*info->p==125) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        break;
                    }
                    parse_sharp_v5(info);
                }
                ((char*)(__right_value330=parse_attribute(info)));
                __right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1charph_reset(info->generics_type_names);
                klass2_317=map$2charphsClassph_at(info->classes,type_name_275,((void*)0));
                if(klass2_317==((void*)0)||klass2_317->mNobodyStruct) {
                    if(klass2_317) {
                        klass2_317->mNobodyStruct=(_Bool)0;
                    }
                    source_tail_318=info->p;
                    header_319=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 813, "buffer"))));
                    buffer_append(header_319,source_head_274,source_tail_318-source_head_274);
                    add_come_code_at_come_header(info,"%s;\n",((char*)(__right_value333=buffer_to_string(header_319))));
                    __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    /*i*/come_call_finalizer3(header_319,buffer_finalize, 0, 0, 0, 0, (void*)0);
                }
                if(parent_class_299) {
                    __dec_obj148=struct_class_298->mParentClassName;
                    struct_class_298->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_299->mName));
                    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(struct_class_298->mName),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_298)));
                }
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 824, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(__right_value339=sStructNode_initialize((struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 824, "sStructNode")),(char*)come_increment_ref_count(__builtin_string(type_name_275)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_298)),output_297,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result181__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value344=_inf_value4));
                /*i*/come_call_finalizer3(struct_class_298,sClass_finalize, 0, 0, 0, 0, (void*)0);
                type_name_275 = come_decrement_ref_count2(type_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value339,sStructNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value344) { __right_value344 = come_decrement_ref_count2(__right_value344, ((struct sNode*)__right_value344)->finalize, ((struct sNode*)__right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result181__;
                /*i*/come_call_finalizer3(struct_class_298,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        type_name_275 = come_decrement_ref_count2(type_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(buf,"class")) {
            source_head_321=head;
            type_name_322=(char*)come_increment_ref_count(parse_word(info));
            add_come_code_at_come_header(info,"struct %s;\n",type_name_322);
            parent_class_323=((void*)0);
            if(parsecmp("extends",info)) {
                ((char*)(__right_value346=parse_word(info)));
                __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                parent_class_name_324=(char*)come_increment_ref_count(parse_word(info));
                parent_class_323=map$2charphsClassphp_operator_load_element(info->classes,parent_class_name_324);
                if(parent_class_323==((void*)0)) {
                    err_msg(info,"invalid class name(%s)",parent_class_name_324);
                    __result182__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    parent_class_name_324 = come_decrement_ref_count2(parent_class_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_322 = come_decrement_ref_count2(type_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result182__;
                }
                parent_class_name_324 = come_decrement_ref_count2(parent_class_name_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parent_classes_325=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "14struct.c", 849, "list$1sClassp"))));
            parent_class2_328=parent_class_323;
            while(parent_class2_328) {
                list$1sClassp_add(parent_classes_325,parent_class2_328);
                if(parent_class_323->mParentClassName) {
                    parent_class2_328=map$2charphsClassphp_operator_load_element(info->classes,parent_class_323->mParentClassName);
                }
                else {
                    parent_class2_328=((void*)0);
                }
            }
            output_332=(_Bool)1;
            if(map$2charphsClassph_at(info->classes,type_name_322,((void*)0))==((void*)0)) {
                __dec_obj155=struct_class_333;
                struct_class_333=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 866, "sClass")),type_name_322,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
                /* a*/come_call_finalizer3(__dec_obj155,sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj156=struct_class_333;
                struct_class_333=(struct sClass*)come_increment_ref_count(sClass_clone(map$2charphsClassph_at(info->classes,type_name_322,((void*)0))));
                /* a*/come_call_finalizer3(__dec_obj156,sClass_finalize, 0, 0, 0, 0, (void*)0);
                if(list$1tuple2$2charphsTypephph_length(struct_class_333->mFields)>0) {
                    output_332=(_Bool)0;
                }
            }
            defining_class_334=info->defining_class;
            info->defining_class=struct_class_333;
            if(map$2charphsClassph_at(info->classes,type_name_322,((void*)0))==((void*)0)) {
                if(parent_class_323) {
                    __dec_obj157=struct_class_333->mParentClassName;
                    struct_class_333->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_323->mName));
                    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
                map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_322),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_333)));
                for(                o2_saved_340=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value363=list$1sClassp_reverse(parent_classes_325))))),parent_343=list$1sClassp_begin((o2_saved_340)) ,                /*f*/come_call_finalizer3(__right_value363,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                0;                !list$1sClassp_end((o2_saved_340));                parent_343=list$1sClassp_next((o2_saved_340))                ){
                    for(                    o2_saved_346=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_343->mFields)),it_347=list$1tuple2$2charphsTypephph_begin((o2_saved_346));                    !list$1tuple2$2charphsTypephph_end((o2_saved_346));                    it_347=list$1tuple2$2charphsTypephph_next((o2_saved_346))                    ){
                        list$1tuple2$2charphsTypephph_add(struct_class_333->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_347)));
                    }
                    /*i*/come_call_finalizer3(o2_saved_346,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(o2_saved_340,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(list$1tuple2$2charphsTypephph_length(map$2charphsClassph_at(info->classes,type_name_322,((void*)0))->mFields)==0&&list$1tuple2$2charphsTypephph_length(struct_class_333->mFields)>0) {
                    klass2_348=map$2charphsClassph_at(info->classes,type_name_322,((void*)0));
                    if(parent_class_323) {
                        __dec_obj158=klass2_348->mParentClassName;
                        klass2_348->mParentClassName=(char*)come_increment_ref_count(string_clone(parent_class_323->mName));
                        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_322),(struct sClass*)come_increment_ref_count(sClass_clone(klass2_348)));
                    for(                    o2_saved_349=(struct list$1sClassp*)come_increment_ref_count((((struct list$1sClassp*)(__right_value367=list$1sClassp_reverse(parent_classes_325))))),parent_350=list$1sClassp_begin((o2_saved_349)) ,                    /*f*/come_call_finalizer3(__right_value367,list$1sClasspp_finalize, 0, 1, 0, 0, __result_obj__),
                    0;                    !list$1sClassp_end((o2_saved_349));                    parent_350=list$1sClassp_next((o2_saved_349))                    ){
                        for(                        o2_saved_351=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((parent_350->mFields)),it_352=list$1tuple2$2charphsTypephph_begin((o2_saved_351));                        !list$1tuple2$2charphsTypephph_end((o2_saved_351));                        it_352=list$1tuple2$2charphsTypephph_next((o2_saved_351))                        ){
                            list$1tuple2$2charphsTypephph_add(klass2_348->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_352)));
                        }
                        /*i*/come_call_finalizer3(o2_saved_351,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_349,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                    for(                    o2_saved_353=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct_class_333->mFields)),it_354=list$1tuple2$2charphsTypephph_begin((o2_saved_353));                    !list$1tuple2$2charphsTypephph_end((o2_saved_353));                    it_354=list$1tuple2$2charphsTypephph_next((o2_saved_353))                    ){
                        list$1tuple2$2charphsTypephph_add(klass2_348->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypephp_clone(it_354)));
                    }
                    /*i*/come_call_finalizer3(o2_saved_353,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(123,info);
            head_355=info->p;
            p_saved_356=((void*)0);
            sline_saved_357=0;
            sname_saved_358=((void*)0);
            methods_359=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "14struct.c", 916, "list$1sNodeph"))));
            while((_Bool)1) {
                if(p_saved_356) {
                    if(*info->p==0) {
                        info->p=p_saved_356;
                        info->sline=sline_saved_357;
                        __dec_obj159=info->sname;
                        info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_358));
                        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
                        p_saved_356=((void*)0);
                        sline_saved_357=0;
                        __dec_obj160=sname_saved_358;
                        sname_saved_358=((void*)0);
                        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __dec_obj161=info->module_params;
                        info->module_params=((void*)0);
                        /* a*/come_call_finalizer3(__dec_obj161,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                parse_sharp_v5(info);
                if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
                include__362=parsecmp("include",info);
                multiple_declare_363=(_Bool)0;
                if(include__362==(_Bool)0) {
                    p_364=info->p;
                    sline_365=info->sline;
                    if(memcmp(info->p,"new(",4)!=0) {
                        multiple_assign_var16=((struct tuple3$3sTypephcharphbool*)(__right_value373=backtrace_parse_type((_Bool)1,info)));
                        type_366=(struct sType*)come_increment_ref_count(multiple_assign_var16->v1);
                        name_367=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                        err_368=multiple_assign_var16->v3;
                        /*g*/come_call_finalizer3(__right_value373,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(err_368&&*info->p==44) {
                            multiple_declare_363=(_Bool)1;
                        }
                        /*i*/come_call_finalizer3(type_366,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_367 = come_decrement_ref_count2(name_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_364;
                    info->sline=sline_365;
                }
                define_function_flag_369=(_Bool)0;
                if(include__362==(_Bool)0) {
                    p_370=info->p;
                    sline_371=info->sline;
                    if(memcmp(info->p,"new(",4)==0) {
                        define_function_flag_369=(_Bool)1;
                    }
                    else {
                        invalid_type_372=(_Bool)0;
                        if(xisalpha(*info->p)||*info->p==95) {
                            multiple_assign_var17=((struct tuple3$3sTypephcharphbool*)(__right_value374=backtrace_parse_type((_Bool)0,info)));
                            result_type_373=(struct sType*)come_increment_ref_count(multiple_assign_var17->v1);
                            fun_name_374=(char*)come_increment_ref_count(multiple_assign_var17->v2);
                            err_375=multiple_assign_var17->v3;
                            /*g*/come_call_finalizer3(__right_value374,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            /*i*/come_call_finalizer3(result_type_373,sType_finalize, 0, 0, 0, 0, (void*)0);
                            fun_name_374 = come_decrement_ref_count2(fun_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        word_376=((void*)0);
                        if(xisalnum(*info->p)||*info->p==95) {
                            __dec_obj162=word_376;
                            word_376=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                            if(string_operator_equals(word_376,"extern")) {
                                __dec_obj163=word_376;
                                word_376=(char*)come_increment_ref_count(parse_word(info));
                                __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                        }
                        else {
                            __dec_obj164=word_376;
                            word_376=((void*)0);
                            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        info->no_output_err=(_Bool)0;
                        if(word_376) {
                            if(is_type_name(word_376,info)) {
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
                                    __dec_obj165=word_376;
                                    word_376=(char*)come_increment_ref_count(parse_word(info));
                                    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                                }
                            }
                            if(strlen(word_376)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                                define_function_flag_369=(_Bool)1;
                            }
                        }
                        word_376 = come_decrement_ref_count2(word_376, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    info->p=p_370;
                    info->sline=sline_371;
                }
                if(define_function_flag_369) {
                    tail_377=info->p;
                    pointer_num_378=1;
                    __dec_obj166=info->impl_type;
                    info->impl_type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 1026, "sType")),type_name_322,(_Bool)0,info));
                    /* a*/come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 0, 0, (void*)0);
                    info->impl_type->mPointerNum=pointer_num_378;
                    info->in_class=(_Bool)1;
                    method_379=(struct sNode*)come_increment_ref_count(parse_function(info));
                    __dec_obj167=info->impl_type;
                    info->impl_type=((void*)0);
                    /* a*/come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
                    info->in_class=(_Bool)0;
                    list$1sNodeph_push_back(methods_359,(struct sNode*)come_increment_ref_count(method_379));
                    if(method_379) { method_379 = come_decrement_ref_count2(method_379, ((struct sNode*)method_379)->finalize, ((struct sNode*)method_379)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(multiple_declare_363) {
                        multiple_assign_var18=((struct tuple3$3sTypephcharphbool*)(__right_value384=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                        base_type_383=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
                        name_384=(char*)come_increment_ref_count(multiple_assign_var18->v2);
                        err_385=multiple_assign_var18->v3;
                        /*g*/come_call_finalizer3(__right_value384,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        multiple_assign_var19=((struct tuple2$2sTypephcharph*)(__right_value385=parse_variable_name((struct sType*)come_increment_ref_count(base_type_383),(_Bool)1,info)));
                        type2_386=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
                        name2_387=(char*)come_increment_ref_count(multiple_assign_var19->v2);
                        /*g*/come_call_finalizer3(__right_value385,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                        list$1tuple2$2charphsTypephph_push_back(struct_class_333->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1045, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_387),(struct sType*)come_increment_ref_count(type2_386))));
                        while(*info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            multiple_assign_var20=((struct tuple2$2sTypephcharph*)(__right_value388=parse_variable_name((struct sType*)come_increment_ref_count(base_type_383),(_Bool)0,info)));
                            type2_388=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
                            name2_389=(char*)come_increment_ref_count(multiple_assign_var20->v2);
                            /*g*/come_call_finalizer3(__right_value388,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                            list$1tuple2$2charphsTypephph_push_back(struct_class_333->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1053, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name2_389),(struct sType*)come_increment_ref_count(type2_388))));
                            /*i*/come_call_finalizer3(type2_388,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name2_389 = come_decrement_ref_count2(name2_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        expected_next_character(59,info);
                        /*i*/come_call_finalizer3(base_type_383,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name_384 = come_decrement_ref_count2(name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(type2_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                        name2_387 = come_decrement_ref_count2(name2_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(parsecmp("include",info)) {
                            ((char*)(__right_value391=parse_word(info)));
                            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            module_name_390=(char*)come_increment_ref_count(parse_word(info));
                            params_391=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "14struct.c", 1062, "list$1charph"))));
                            if(*info->p==60) {
                                info->p++;
                                skip_spaces_and_lf(info);
                                while((_Bool)1) {
                                    word_392=(char*)come_increment_ref_count(parse_word(info));
                                    list$1charph_add(params_391,(char*)come_increment_ref_count(word_392));
                                    if(*info->p==44) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    else {
                                        if(*info->p==0) {
                                            err_msg(info,"invalid source end");
                                            exit(2);
                                        }
                                        else {
                                            if(*info->p==62) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                word_392 = come_decrement_ref_count2(word_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                break;
                                            }
                                            else {
                                                err_msg(info,"invalid charactor(%c)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    word_392 = come_decrement_ref_count2(word_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                            if(*info->p==59) {
                                info->p++;
                            }
                            skip_spaces_and_lf(info);
                            p_saved_356=info->p;
                            sline_saved_357=info->sline;
                            __dec_obj171=sname_saved_358;
                            sname_saved_358=(char*)come_increment_ref_count(__builtin_string(info->sname));
                            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __dec_obj172=info->sname;
                            info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_390));
                            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->sline=0;
                            if(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_390)==((void*)0)) {
                                err_msg(info,"module not found");
                                __result198__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                                module_name_390 = come_decrement_ref_count2(module_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(params_391,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                type_name_322 = come_decrement_ref_count2(type_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(parent_classes_325,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(struct_class_333,sClass_finalize, 0, 0, 0, 0, (void*)0);
                                sname_saved_358 = come_decrement_ref_count2(sname_saved_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                /*i*/come_call_finalizer3(methods_359,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                                gComeFunResultObject = (void*)0;
                                return __result198__;
                            }
                            module_396=((struct sClassModule*)come_null_check(map$2charphsClassModulephp_operator_load_element(info->modules,module_name_390), "14struct.c", 1109, 7));
                            if(list$1charph_length(module_396->mParams)!=list$1charph_length(params_391)) {
                                err_msg(info,"invalid parametor number");
                                exit(1);
                            }
                            __dec_obj178=info->module_params;
                            info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharph_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "14struct.c", 1116, "map$2charphcharph"))));
                            /* a*/come_call_finalizer3(__dec_obj178,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                            i_400=0;
                            for(                            o2_saved_401=(struct list$1charph*)come_increment_ref_count((module_396->mParams)),it_404=list$1charph_begin((o2_saved_401));                            !list$1charph_end((o2_saved_401));                            it_404=list$1charph_next((o2_saved_401))                            ){
                                ((char*)(__right_value410=map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_404)),(char*)come_increment_ref_count(__builtin_string(((char*)come_null_check(list$1charphp_operator_load_element(params_391,i_400), "14struct.c", 1120, 8)))))));
                                __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            /*i*/come_call_finalizer3(o2_saved_401,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                            info->p=module_396->mText;
                            info->sline=module_396->mSLine;
                            __dec_obj179=info->sname;
                            info->sname=(char*)come_increment_ref_count(__builtin_string(module_396->mSName));
                            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                            module_name_390 = come_decrement_ref_count2(module_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(params_391,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        else {
                            multiple_assign_var21=((struct tuple3$3sTypephcharphbool*)(__right_value412=parse_type(info,(_Bool)1,(_Bool)1,(_Bool)0)));
                            type2_431=(struct sType*)come_increment_ref_count(multiple_assign_var21->v1);
                            name_432=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                            err_433=multiple_assign_var21->v3;
                            /*g*/come_call_finalizer3(__right_value412,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            if(!err_433) {
                                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                                exit(2);
                            }
                            list$1tuple2$2charphsTypephph_push_back(struct_class_333->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 1134, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(name_432),(struct sType*)come_increment_ref_count(type2_431))));
                            if(*info->p==59) {
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            /*i*/come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                            name_432 = come_decrement_ref_count2(name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                }
                parse_sharp_v5(info);
                if(*info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                parse_sharp_v5(info);
            }
            if(p_saved_356) {
                if(info->p==0) {
                    info->p=p_saved_356;
                    info->sline=sline_saved_357;
                    __dec_obj180=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_358));
                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_356=((void*)0);
                    sline_saved_357=0;
                }
            }
            list$1charph_reset(info->generics_type_names);
            info->defining_class=defining_class_334;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 1167, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sClassNode*)(__right_value419=sClassNode_initialize((struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "14struct.c", 1167, "sClassNode")),(char*)come_increment_ref_count(__builtin_string(type_name_322)),(struct sClass*)come_increment_ref_count(sClass_clone(struct_class_333)),(struct list$1sNodeph*)come_increment_ref_count(methods_359),output_332,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sClassNode_finalize;
            _inf_value5->clone=(void*)sClassNode_clone;
            _inf_value5->compile=(void*)sClassNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sClassNode_terminated;
            _inf_value5->kind=(void*)sClassNode_kind;
            __result223__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=_inf_value5));
            type_name_322 = come_decrement_ref_count2(type_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(parent_classes_325,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(struct_class_333,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_358 = come_decrement_ref_count2(sname_saved_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(methods_359,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value419,sClassNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result223__;
            type_name_322 = come_decrement_ref_count2(type_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(parent_classes_325,list$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(struct_class_333,sClass_finalize, 0, 0, 0, 0, (void*)0);
            sname_saved_358 = come_decrement_ref_count2(sname_saved_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(methods_359,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result224__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value426=top_level_v97(buf,head,head_sline,info)));
    if(__right_value426) { __right_value426 = come_decrement_ref_count2(__right_value426, ((struct sNode*)__right_value426)->finalize, ((struct sNode*)__right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
char* __dec_obj133;
char* __dec_obj134;
struct sClass* __dec_obj135;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj133=self->sname;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj134=self->mName;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(self->mClass==gComeFunResultObject) {
            __dec_obj135=self->mClass;
            /* a*/come_call_finalizer3(__dec_obj135,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__=(void*)0;
struct sStructNobodyNode* __result170__;
void* __right_value283 = (void*)0;
struct sStructNobodyNode* result_279;
void* __right_value284 = (void*)0;
char* __dec_obj136;
void* __right_value285 = (void*)0;
char* __dec_obj137;
void* __right_value286 = (void*)0;
struct sClass* __dec_obj138;
struct sStructNobodyNode* __result171__;
    if(self==(void*)0) {
        __result170__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    result_279=(struct sStructNobodyNode*)come_increment_ref_count((struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3, "sStructNobodyNode"));
    if(self!=((void*)0)) {
        result_279->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj136=result_279->sname;
        result_279->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj137=result_279->mName;
        result_279->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj138=result_279->mClass;
        result_279->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /* a*/come_call_finalizer3(__dec_obj138,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result171__ = gComeFunResultObject = __result_obj__ = result_279;
    /*i*/come_call_finalizer3(result_279,sStructNobodyNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_280;
struct list_item$1charph* prev_it_281;
struct list$1charph* __result173__;
    it_280=self->head;
    while(it_280!=((void*)0)) {
        prev_it_281=it_280;
        it_280=it_280->next;
        /*i*/come_call_finalizer3(prev_it_281,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result173__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct list_item$1charph* litem_283;
char* __dec_obj139;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_284;
char* __dec_obj140;
void* __right_value291 = (void*)0;
struct list_item$1charph* litem_285;
char* __dec_obj141;
struct list$1charph* __result174__;
    if(self->len==0) {
        litem_283=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value289=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_283->prev=((void*)0);
        litem_283->next=((void*)0);
        __dec_obj139=litem_283->item;
        litem_283->item=(char*)come_increment_ref_count(item);
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_283;
        self->head=litem_283;
    }
    else {
        if(self->len==1) {
            litem_284=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
            litem_284->prev=self->head;
            litem_284->next=((void*)0);
            __dec_obj140=litem_284->item;
            litem_284->item=(char*)come_increment_ref_count(item);
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_284;
            self->head->next=litem_284;
        }
        else {
            litem_285=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value291=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
            litem_285->prev=self->tail;
            litem_285->next=((void*)0);
            __dec_obj141=litem_285->item;
            litem_285->item=(char*)come_increment_ref_count(item);
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_285;
            self->tail=litem_285;
        }
    }
    self->len++;
    __result174__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
char* __dec_obj144;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj144=self->sname;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__=(void*)0;
struct sGenericsStructNode* __result175__;
void* __right_value311 = (void*)0;
struct sGenericsStructNode* result_296;
void* __right_value312 = (void*)0;
char* __dec_obj145;
struct sGenericsStructNode* __result176__;
    if(self==(void*)0) {
        __result175__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    result_296=(struct sGenericsStructNode*)come_increment_ref_count((struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3, "sGenericsStructNode"));
    if(self!=((void*)0)) {
        result_296->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj145=result_296->sname;
        result_296->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result176__ = gComeFunResultObject = __result_obj__ = result_296;
    /*i*/come_call_finalizer3(result_296,sGenericsStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result176__;
}

static void sStructNode_finalize(struct sStructNode* self){
char* __dec_obj149;
char* __dec_obj150;
struct sClass* __dec_obj151;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj149=self->sname;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj150=self->mName;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(self->mClass==gComeFunResultObject) {
            __dec_obj151=self->mClass;
            /* a*/come_call_finalizer3(__dec_obj151,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__=(void*)0;
struct sStructNode* __result179__;
void* __right_value340 = (void*)0;
struct sStructNode* result_320;
void* __right_value341 = (void*)0;
char* __dec_obj152;
void* __right_value342 = (void*)0;
char* __dec_obj153;
void* __right_value343 = (void*)0;
struct sClass* __dec_obj154;
struct sStructNode* __result180__;
    if(self==(void*)0) {
        __result179__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    result_320=(struct sStructNode*)come_increment_ref_count((struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3, "sStructNode"));
    if(self!=((void*)0)) {
        result_320->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj152=result_320->sname;
        result_320->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj153=result_320->mName;
        result_320->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj154=result_320->mClass;
        result_320->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /* a*/come_call_finalizer3(__dec_obj154,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_320->mOutput=self->mOutput;
    }
    __result180__ = gComeFunResultObject = __result_obj__ = result_320;
    /*i*/come_call_finalizer3(result_320,sStructNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result180__;
}

static struct list$1sClassp* list$1sClassp_initialize(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct list$1sClassp* __result183__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result183__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result183__;
}

static void list$1sClasspp_finalize(struct list$1sClassp* self){
struct list_item$1sClassp* it_326;
struct list_item$1sClassp* prev_it_327;
    it_326=self->head;
    while(it_326!=((void*)0)) {
        prev_it_327=it_326;
        it_326=it_326->next;
        /*i*/come_call_finalizer3(prev_it_327,list_item$1sClasspp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sClasspp_finalize(struct list_item$1sClassp* self){
}

static struct list$1sClassp* list$1sClassp_add(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
struct list_item$1sClassp* litem_329;
void* __right_value351 = (void*)0;
struct list_item$1sClassp* litem_330;
void* __right_value352 = (void*)0;
struct list_item$1sClassp* litem_331;
struct list$1sClassp* __result184__;
    if(self->len==0) {
        litem_329=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value350=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 151, "list_item$1sClassp"))));
        litem_329->prev=((void*)0);
        litem_329->next=((void*)0);
        litem_329->item=item;
        self->tail=litem_329;
        self->head=litem_329;
    }
    else {
        if(self->len==1) {
            litem_330=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value351=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 161, "list_item$1sClassp"))));
            litem_330->prev=self->head;
            litem_330->next=((void*)0);
            litem_330->item=item;
            self->tail=litem_330;
            self->head->next=litem_330;
        }
        else {
            litem_331=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value352=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 171, "list_item$1sClassp"))));
            litem_331->prev=self->tail;
            litem_331->next=((void*)0);
            litem_331->item=item;
            self->tail->next=litem_331;
            self->tail=litem_331;
        }
    }
    self->len++;
    __result184__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result184__;
}

static struct list$1sClassp* list$1sClassp_reverse(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1sClassp* result_335;
struct list_item$1sClassp* it_336;
struct list$1sClassp* __result186__;
    result_335=(struct list$1sClassp*)come_increment_ref_count(list$1sClassp_initialize((struct list$1sClassp*)come_increment_ref_count((struct list$1sClassp*)come_calloc(1, sizeof(struct list$1sClassp)*(1), "./comelang.h", 874, "list$1sClassp"))));
    it_336=self->tail;
    while(it_336!=((void*)0)) {
        list$1sClassp_push_back(result_335,it_336->item);
        it_336=it_336->prev;
    }
    __result186__ = gComeFunResultObject = __result_obj__ = result_335;
    /*i*/come_call_finalizer3(result_335,list$1sClasspp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

static struct list$1sClassp* list$1sClassp_push_back(struct list$1sClassp* self, struct sClass* item){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
struct list_item$1sClassp* litem_337;
void* __right_value361 = (void*)0;
struct list_item$1sClassp* litem_338;
void* __right_value362 = (void*)0;
struct list_item$1sClassp* litem_339;
struct list$1sClassp* __result185__;
    if(self->len==0) {
        litem_337=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value360=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 221, "list_item$1sClassp"))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        litem_337->item=item;
        self->tail=litem_337;
        self->head=litem_337;
    }
    else {
        if(self->len==1) {
            litem_338=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value361=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 231, "list_item$1sClassp"))));
            litem_338->prev=self->head;
            litem_338->next=((void*)0);
            litem_338->item=item;
            self->tail=litem_338;
            self->head->next=litem_338;
        }
        else {
            litem_339=(struct list_item$1sClassp*)come_increment_ref_count(((struct list_item$1sClassp*)(__right_value362=(struct list_item$1sClassp*)come_calloc(1, sizeof(struct list_item$1sClassp)*(1), "./comelang.h", 241, "list_item$1sClassp"))));
            litem_339->prev=self->tail;
            litem_339->next=((void*)0);
            litem_339->item=item;
            self->tail->next=litem_339;
            self->tail=litem_339;
        }
    }
    self->len++;
    __result185__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result185__;
}

static struct sClass* list$1sClassp_begin(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_341;
struct sClass* __result187__;
struct sClass* __result188__;
struct sClass* result_342;
struct sClass* __result189__;
result_341 = (void*)0;
result_342 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_341,0,sizeof(struct sClass*));
        __result187__ = gComeFunResultObject = __result_obj__ = result_341;
        gComeFunResultObject = (void*)0;
        return __result187__;
    }
    self->it=self->head;
    if(self->it) {
        __result188__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result188__;
    }
    memset(&result_342,0,sizeof(struct sClass*));
    __result189__ = gComeFunResultObject = __result_obj__ = result_342;
    gComeFunResultObject = (void*)0;
    return __result189__;
}

static _Bool list$1sClassp_end(struct list$1sClassp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sClass* list$1sClassp_next(struct list$1sClassp* self){
void* __result_obj__=(void*)0;
struct sClass* result_344;
struct sClass* __result190__;
struct sClass* __result191__;
struct sClass* result_345;
struct sClass* __result192__;
result_344 = (void*)0;
result_345 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_344,0,sizeof(struct sClass*));
        __result190__ = gComeFunResultObject = __result_obj__ = result_344;
        gComeFunResultObject = (void*)0;
        return __result190__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result191__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    memset(&result_345,0,sizeof(struct sClass*));
    __result192__ = gComeFunResultObject = __result_obj__ = result_345;
    gComeFunResultObject = (void*)0;
    return __result192__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_360;
int i_361;
    for(    i_360=0;    i_360<self->size;    i_360++    ){
        if(self->item_existance[i_360]) {
            if(1) {
                self->items[i_360] = come_decrement_ref_count2(self->items[i_360], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_361=0;    i_361<self->size;    i_361++    ){
        if(self->item_existance[i_361]) {
            if(1) {
                self->keys[i_361] = come_decrement_ref_count2(self->keys[i_361], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
struct list_item$1sNodeph* litem_380;
struct sNode* __dec_obj168;
void* __right_value382 = (void*)0;
struct list_item$1sNodeph* litem_381;
struct sNode* __dec_obj169;
void* __right_value383 = (void*)0;
struct list_item$1sNodeph* litem_382;
struct sNode* __dec_obj170;
struct list$1sNodeph* __result193__;
    if(self->len==0) {
        litem_380=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value381=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 221, "list_item$1sNodeph"))));
        litem_380->prev=((void*)0);
        litem_380->next=((void*)0);
        __dec_obj168=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count2(__dec_obj168, ((struct sNode*)__dec_obj168)->finalize, ((struct sNode*)__dec_obj168)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_380;
        self->head=litem_380;
    }
    else {
        if(self->len==1) {
            litem_381=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value382=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 231, "list_item$1sNodeph"))));
            litem_381->prev=self->head;
            litem_381->next=((void*)0);
            __dec_obj169=litem_381->item;
            litem_381->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_381;
            self->head->next=litem_381;
        }
        else {
            litem_382=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value383=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 241, "list_item$1sNodeph"))));
            litem_382->prev=self->tail;
            litem_382->next=((void*)0);
            __dec_obj170=litem_382->item;
            litem_382->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count2(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_382;
            self->tail=litem_382;
        }
    }
    self->len++;
    __result193__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result193__;
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_393;
unsigned int hash_394;
unsigned int it_395;
struct sClassModule* __result194__;
struct sClassModule* __result195__;
struct sClassModule* __result196__;
struct sClassModule* __result197__;
default_value_393 = (void*)0;
    memset(&default_value_393,0,sizeof(struct sClassModule*));
    hash_394=string_get_hash_key(((char*)key))%self->size;
    it_395=hash_394;
    while((_Bool)1) {
        if(self->item_existance[it_395]) {
            if(string_equals(self->keys[it_395],key)) {
                __result194__ = gComeFunResultObject = __result_obj__ = self->items[it_395];
                /*i*/come_call_finalizer3(default_value_393,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result194__;
            }
            it_395++;
            if(it_395>=self->size) {
                it_395=0;
            }
            else {
                if(it_395==hash_394) {
                    __result195__ = gComeFunResultObject = __result_obj__ = default_value_393;
                    /*i*/come_call_finalizer3(default_value_393,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result195__;
                }
            }
        }
        else {
            __result196__ = gComeFunResultObject = __result_obj__ = default_value_393;
            /*i*/come_call_finalizer3(default_value_393,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result196__;
        }
    }
    __result197__ = gComeFunResultObject = __result_obj__ = default_value_393;
    /*i*/come_call_finalizer3(default_value_393,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result197__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj173;
char* __dec_obj174;
struct list$1charph* __dec_obj175;
char* __dec_obj176;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj173=self->mName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        if(self->mText==gComeFunResultObject) {
            __dec_obj174=self->mText;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(self->mParams==gComeFunResultObject) {
            __dec_obj175=self->mParams;
            /* a*/come_call_finalizer3(__dec_obj175,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(self->mSName==gComeFunResultObject) {
            __dec_obj176=self->mSName;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharph_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
int i_397;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1charp* __dec_obj177;
struct map$2charphcharph* __result200__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value399=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1370, "char*%"))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value400=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1371, "char*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value401=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1372, "bool"))));
    for(    i_397=0;    i_397<128;    i_397++    ){
        self->item_existance[i_397]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj177=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1382, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj177,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result199__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result199__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_398;
int i_399;
    for(    i_398=0;    i_398<self->size;    i_398++    ){
        if(self->item_existance[i_398]) {
            if(1) {
                self->items[i_398] = come_decrement_ref_count2(self->items[i_398], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_399=0;    i_399<self->size;    i_399++    ){
        if(self->item_existance[i_399]) {
            if(1) {
                self->keys[i_399] = come_decrement_ref_count2(self->keys[i_399], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_402;
char* __result201__;
char* __result202__;
char* result_403;
char* __result203__;
result_402 = (void*)0;
result_403 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_402,0,sizeof(char*));
        __result201__ = gComeFunResultObject = __result_obj__ = result_402;
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    self->it=self->head;
    if(self->it) {
        __result202__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    memset(&result_403,0,sizeof(char*));
    __result203__ = gComeFunResultObject = __result_obj__ = result_403;
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_405;
char* __result204__;
char* __result205__;
char* result_406;
char* __result206__;
result_405 = (void*)0;
result_406 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_405,0,sizeof(char*));
        __result204__ = gComeFunResultObject = __result_obj__ = result_405;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result205__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    memset(&result_406,0,sizeof(char*));
    __result206__ = gComeFunResultObject = __result_obj__ = result_406;
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_407;
int i_408;
char* __result207__;
char* default_value_409;
char* __result208__;
default_value_409 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_407=self->head;
    i_408=0;
    while(it_407!=((void*)0)) {
        if(position==i_408) {
            __result207__ = gComeFunResultObject = __result_obj__ = it_407->item;
            gComeFunResultObject = (void*)0;
            return __result207__;
        }
        it_407=it_407->next;
        i_408++;
    }
    memset(&default_value_409,0,sizeof(char*));
    __result208__ = gComeFunResultObject = __result_obj__ = default_value_409;
    default_value_409 = come_decrement_ref_count2(default_value_409, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static char* map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
char* __result220__;
    map$2charphcharph_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    __result220__ = gComeFunResultObject = __result_obj__ = item;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct map$2charphcharph* map$2charphcharph_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_427;
unsigned int it_428;
_Bool same_key_exist_429;
char* it2_430;
struct map$2charphcharph* __result219__;
    if(self->len*10>=self->size) {
        map$2charphcharph_rehash(self);
    }
    hash_427=string_get_hash_key(key)%self->size;
    it_428=hash_427;
    while((_Bool)1) {
        if(self->item_existance[it_428]) {
            if(string_equals(self->keys[it_428],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_428]);
                    self->keys[it_428] = come_decrement_ref_count2(self->keys[it_428], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_428]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_428]);
                    self->keys[it_428]=key;
                }
                if(1) {
                    self->items[it_428] = come_decrement_ref_count2(self->items[it_428], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_428]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_428]=item;
                }
                break;
            }
            it_428++;
            if(it_428>=self->size) {
                it_428=0;
            }
            else {
                if(it_428==hash_427) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_428]=(_Bool)1;
            if(1) {
                self->keys[it_428]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_428]=key;
            }
            if(1) {
                self->items[it_428]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_428]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_429=(_Bool)0;
    for(    it2_430=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_430=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_430,key)) {
            same_key_exist_429=(_Bool)1;
        }
    }
    if(!same_key_exist_429) {
        list$1charp_push_back(self->key_list,key);
    }
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void map$2charphcharph_rehash(struct map$2charphcharph* self){
int size_410;
void* __right_value407 = (void*)0;
char** keys_411;
void* __right_value408 = (void*)0;
char** items_412;
void* __right_value409 = (void*)0;
_Bool* item_existance_413;
int len_414;
char* it_417;
char* default_value_420;
char* it2_421;
unsigned int hash_424;
int n_425;
char* default_value_426;
default_value_420 = (void*)0;
default_value_426 = (void*)0;
    size_410=self->size*10;
    keys_411=(char**)come_increment_ref_count(((char**)(__right_value407=(char**)come_calloc(1, sizeof(char*)*(1*(size_410)), "./comelang.h", 1621, "char*%"))));
    items_412=(char**)come_increment_ref_count(((char**)(__right_value408=(char**)come_calloc(1, sizeof(char*)*(1*(size_410)), "./comelang.h", 1622, "char*%"))));
    item_existance_413=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value409=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_410)), "./comelang.h", 1623, "bool"))));
    len_414=0;
    for(    it_417=map$2charphcharph_begin(self);    !map$2charphcharph_end(self);    it_417=map$2charphcharph_next(self)    ){
        memset(&default_value_420,0,sizeof(char*));
        it2_421=map$2charphcharph_at(self,it_417,default_value_420);
        hash_424=string_get_hash_key(it_417)%size_410;
        n_425=hash_424;
        while((_Bool)1) {
            if(item_existance_413[n_425]) {
                n_425++;
                if(n_425>=size_410) {
                    n_425=0;
                }
                else {
                    if(n_425==hash_424) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_413[n_425]=(_Bool)1;
                keys_411[n_425]=it_417;
                items_412[n_425]=map$2charphcharph_at(self,it_417,default_value_426);
                len_414++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_411;
    self->items=items_412;
    self->item_existance=item_existance_413;
    self->size=size_410;
    self->len=len_414;
}

static char* map$2charphcharph_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_415;
char* __result209__;
char* __result210__;
char* result_416;
char* __result211__;
result_415 = (void*)0;
result_416 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_415,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_415;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_416,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_416;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static _Bool map$2charphcharph_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharph_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_418;
char* __result212__;
char* __result213__;
char* result_419;
char* __result214__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_418,0,sizeof(char*));
        __result212__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result213__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    memset(&result_419,0,sizeof(char*));
    __result214__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static char* map$2charphcharph_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_422;
unsigned int it_423;
char* __result215__;
char* __result216__;
char* __result217__;
char* __result218__;
    hash_422=string_get_hash_key(((char*)key))%self->size;
    it_423=hash_422;
    while((_Bool)1) {
        if(self->item_existance[it_423]) {
            if(string_equals(self->keys[it_423],key)) {
                __result215__ = gComeFunResultObject = __result_obj__ = self->items[it_423];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
            it_423++;
            if(it_423>=self->size) {
                it_423=0;
            }
            else {
                if(it_423==hash_422) {
                    __result216__ = gComeFunResultObject = __result_obj__ = default_value;
                    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result216__;
                }
            }
        }
        else {
            __result217__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result217__;
        }
    }
    __result218__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void sClassNode_finalize(struct sClassNode* self){
char* __dec_obj181;
char* __dec_obj182;
struct sClass* __dec_obj183;
struct list$1sNodeph* __dec_obj184;
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj181=self->sname;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj182=self->mName;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        if(self->mClass==gComeFunResultObject) {
            __dec_obj183=self->mClass;
            /* a*/come_call_finalizer3(__dec_obj183,sClass_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mClass,sClass_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethods!=((void*)0)) {
        if(self->mMethods==gComeFunResultObject) {
            __dec_obj184=self->mMethods;
            /* a*/come_call_finalizer3(__dec_obj184,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethods,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClassNode* sClassNode_clone(struct sClassNode* self){
void* __result_obj__=(void*)0;
struct sClassNode* __result221__;
void* __right_value420 = (void*)0;
struct sClassNode* result_434;
void* __right_value421 = (void*)0;
char* __dec_obj185;
void* __right_value422 = (void*)0;
char* __dec_obj186;
void* __right_value423 = (void*)0;
struct sClass* __dec_obj187;
void* __right_value424 = (void*)0;
struct list$1sNodeph* __dec_obj188;
struct sClassNode* __result222__;
    if(self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_434=(struct sClassNode*)come_increment_ref_count((struct sClassNode*)come_calloc(1, sizeof(struct sClassNode)*(1), "sClassNode_clone", 3, "sClassNode"));
    if(self!=((void*)0)) {
        result_434->sline=self->sline;
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj185=result_434->sname;
        result_434->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj186=result_434->mName;
        result_434->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mClass!=((void*)0)) {
        __dec_obj187=result_434->mClass;
        result_434->mClass=(struct sClass*)come_increment_ref_count(sClass_clone(self->mClass));
        /* a*/come_call_finalizer3(__dec_obj187,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mMethods!=((void*)0)) {
        __dec_obj188=result_434->mMethods;
        result_434->mMethods=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mMethods));
        /* a*/come_call_finalizer3(__dec_obj188,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_434->mOutput=self->mOutput;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_434;
    /*i*/come_call_finalizer3(result_434,sClassNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool define_struct_435;
char* p_436;
int sline_437;
void* __right_value427 = (void*)0;
char* type_name_438;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* type_name_439;
void* __right_value432 = (void*)0;
struct sNode* __result225__;
void* __right_value433 = (void*)0;
struct sNode* __result226__;
    define_struct_435=(_Bool)0;
    {
        p_436=info->p;
        sline_437=info->sline;
        if(charp_operator_equals(buf,"struct")) {
            if(xisalpha(*info->p)||*info->p==95) {
                type_name_438=(char*)come_increment_ref_count(parse_word(info));
                if(parsecmp("extends",info)) {
                    ((char*)(__right_value428=parse_word(info)));
                    __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    ((char*)(__right_value429=parse_word(info)));
                    __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(*info->p==123) {
                    ((char*)(__right_value430=skip_block(info)));
                    __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(*info->p==59) {
                        define_struct_435=(_Bool)1;
                    }
                }
                type_name_438 = come_decrement_ref_count2(type_name_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_436;
        info->sline=sline_437;
    }
    if(define_struct_435) {
        type_name_439=(char*)come_increment_ref_count(parse_word(info));
        __result225__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value432=parse_struct((char*)come_increment_ref_count(type_name_439),info)));
        type_name_439 = come_decrement_ref_count2(type_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(__right_value432) { __right_value432 = come_decrement_ref_count2(__right_value432, ((struct sNode*)__right_value432)->finalize, ((struct sNode*)__right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result225__;
        type_name_439 = come_decrement_ref_count2(type_name_439, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result226__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value433=string_node_v13(buf,head,head_sline,info)));
    if(__right_value433) { __right_value433 = come_decrement_ref_count2(__right_value433, ((struct sNode*)__right_value433)->finalize, ((struct sNode*)__right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result226__;
}

