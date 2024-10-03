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
struct __current_stack1__
{
    int* n_73;
    char** msg2_67;
    char** p_69;
    char** last_lf_70;
    struct sInfo** info;
    char** msg;
};
struct __current_stack2__
{
    struct sInfo* info_312;
    struct buffer** clang_option_295;
    struct buffer** cpp_option_296;
    struct list$1charph** files_297;
    struct list$1charph** object_files_298;
    _Bool* output_object_file_299;
    _Bool* output_cpp_file_300;
    _Bool* output_source_file_flag_301;
    char** output_file_name_302;
    _Bool* verbose_303;
    _Bool* come_debug_304;
    _Bool* come_malloc_305;
    int* argc;
    char*** argv;
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
_Bool sNodeBase_terminated(struct sNodeBase* self);
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
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* store_var(char* name, struct list$1charph* multiple_assign, struct sType* type, _Bool alloc, struct sNode* right_node, struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table(char* name, struct sType* type, struct sInfo* info);
void add_variable_to_global_table_with_int_value(char* name, struct sType* type, char* c_value, struct sInfo* info);
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
static void write_source_file_position_to_source(struct sInfo* info);
_Bool node_compile(struct sNode* node, struct sInfo* info);
void err_msg(struct sInfo* info, char* msg, ...);
static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*));
char* method_block1_02transpilec(struct __current_stack1__* parent, char* it);
static char* list$1charph_join(struct list$1charph* self, char* sep);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static int list$1charph_length(struct list$1charph* self);
static void va_list_finalize(va_list self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
static void clear_tmp_file(struct sInfo* info);
static void clear_tmp_file_without_object_file(struct sInfo* info);
static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info);
static _Bool cpp(struct sInfo* info);
static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static _Bool linker(struct sInfo* info, struct list$1charph* object_files);
_Bool new_project(int argc, char** argv);
_Bool run_project(int argc, char** argv);
_Bool make_header_project(int argc, char** argv);
_Bool compile_project(int argc, char** argv);
_Bool debug_run_project(int argc, char** argv);
_Bool clean_project(int argc, char** argv);
_Bool install_project(int argc, char** argv, char* prefix);
static void init_classes(struct sInfo* info);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
int come_main_v2(int argc, char** argv);
static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void map$2charphsFunph_finalize(struct map$2charphsFunph* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self);
static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self);
static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self);
static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self);
static void map$2charphsClassph_finalize(struct map$2charphsClassph* self);
static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self);
static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self);
static void sClassModule_finalize(struct sClassModule* self);
static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self);
static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self);
static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self);
static void sModule_finalize(struct sModule* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void sInfo_finalize(struct sInfo* self);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
void method_block2_02transpilec(struct __current_stack2__* parent);
// uniq global variable
// source head3
_Bool gComeGC=(_Bool)0;
_Bool gComeLink=(_Bool)1;
_Bool gComeC=(_Bool)1;
_Bool gComeStr=(_Bool)0;
_Bool gComeNet=(_Bool)0;
char* gProgramName=((void*)0);
_Bool gCommonHeader=(_Bool)0;
_Bool gComeMalloc=(_Bool)0;
_Bool gComeDebug=(_Bool)0;
_Bool gComeOriginalSourcePosition=(_Bool)1;
int gComeDebugStackFrameID=0;
static char* RM="rm -rf";

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










static void write_source_file_position_to_source(struct sInfo* info){
void* __right_value116 = (void*)0;
void* __right_value117 = (void*)0;
void* __right_value118 = (void*)0;
    if(gComeOriginalSourcePosition) {
        if(info->writing_source_file_position) {
            add_come_code(info,((char*)(__right_value118=xsprintf("# \%s \"\%s\"\n",((char*)(__right_value116=int_to_string(info->sline))),((char*)(__right_value117=string_to_string(info->sname)))))));
            __right_value116 = come_decrement_ref_count2(__right_value116, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value117 = come_decrement_ref_count2(__right_value117, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value118 = come_decrement_ref_count2(__right_value118, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            info->writing_source_file_position=(_Bool)0;
        }
    }
}

_Bool node_compile(struct sNode* node, struct sInfo* info){
void* __right_value119 = (void*)0;
char* sname_64;
int sline_65;
void* __right_value120 = (void*)0;
void* __right_value121 = (void*)0;
char* __dec_obj15;
_Bool result_66;
void* __right_value122 = (void*)0;
char* __dec_obj16;
_Bool __result65__;
    sname_64=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_65=info->sline;
    __dec_obj15=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value120=node->sname(node->_protocol_obj)))));
    __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value120 = come_decrement_ref_count2(__right_value120, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    info->sline=node->sline(node->_protocol_obj);
    write_source_file_position_to_source(info);
    result_66=node->compile(node->_protocol_obj,info);
    __dec_obj16=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_64));
    __dec_obj16 = come_decrement_ref_count2(__dec_obj16, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_65;
    __result65__ = result_66;
    sname_64 = come_decrement_ref_count2(sname_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result65__;
}

void err_msg(struct sInfo* info, char* msg, ...){
char* msg2_67;
va_list args_68;
char* p_69;
char* last_lf_70;
int col_71;
int col_72;
int n_73;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
void* __right_value130 = (void*)0;
struct __current_stack1__ __current_stack1__;
void* __right_value135 = (void*)0;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
msg2_67 = (void*)0;
memset(&args_68, 0, sizeof(va_list));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
    if(!info->no_output_err) {
        __builtin_va_start(args_68,msg);
        vasprintf(&msg2_67,msg,args_68);
        __builtin_va_end(args_68);
        p_69=info->p;
        last_lf_70=((void*)0);
        while(p_69>=info->head) {
            if(*p_69==10) {
                last_lf_70=p_69;
                break;
            }
            p_69--;
        }
        if(last_lf_70) {
            col_71=info->p-last_lf_70;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_71,msg2_67);
        }
        else {
            col_72=info->p-info->head;
            printf("%s %d %d: %s\n",info->sname,info->sline,col_72,msg2_67);
        }
        info->err_num++;
        stackframe();
        if(info->come_fun) {
            n_73=info->sline-5;
            __current_stack1__.n_73 = &n_73;
            __current_stack1__.msg2_67 = &msg2_67;
            __current_stack1__.p_69 = &p_69;
            __current_stack1__.last_lf_70 = &last_lf_70;
            __current_stack1__.info = &info;
            __current_stack1__.msg = &msg;
            ((char*)(__right_value140=string_puts(((char*)(__right_value139=list$1charph_join(((struct list$1charph*)(__right_value135=list$1charph_map2(((struct list$1charph*)(__right_value130=list$1charph_sublist(((struct list$1charph*)(__right_value124=string_split_char(((char*)(__right_value123=buffer_to_string(info->original_source))),10))),n_73,n_73+10))),&__current_stack1__,(void*)method_block1_02transpilec))),"\n"))))));
            __right_value123 = come_decrement_ref_count2(__right_value123, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value124,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value130,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value135,list$1charphp_finalize, 0, 1, 0, 0, (void*)0);
            __right_value139 = come_decrement_ref_count2(__right_value139, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        free(msg2_67);
        /*i*/come_call_finalizer3((&args_68),va_list_finalize, 1, 0, 0, 0, (void*)0);
    }
}

static struct list$1charph* list$1charph_sublist(struct list$1charph* self, int begin, int tail){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
void* __right_value126 = (void*)0;
struct list$1charph* result_74;
struct list_item$1charph* it_77;
int i_78;
struct list$1charph* __result68__;
    result_74=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 651, "list$1charph"))));
    if(begin<0) {
        begin+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(begin<0) {
        begin=0;
    }
    if(tail>=self->len) {
        tail=self->len;
    }
    it_77=self->head;
    i_78=0;
    while(it_77!=((void*)0)) {
        if(i_78>=begin&&i_78<tail) {
            list$1charph_push_back(result_74,(char*)come_increment_ref_count(it_77->item));
        }
        it_77=it_77->next;
        i_78++;
    }
    __result68__ = gComeFunResultObject = __result_obj__ = result_74;
    /*i*/come_call_finalizer3(result_74,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result66__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_75;
struct list_item$1charph* prev_it_76;
    it_75=self->head;
    while(it_75!=((void*)0)) {
        prev_it_76=it_75;
        it_75=it_75->next;
        /*i*/come_call_finalizer3(prev_it_76,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj17;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj17=self->item;
            __dec_obj17 = come_decrement_ref_count2(__dec_obj17, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct list_item$1charph* litem_79;
char* __dec_obj18;
void* __right_value128 = (void*)0;
struct list_item$1charph* litem_80;
char* __dec_obj19;
void* __right_value129 = (void*)0;
struct list_item$1charph* litem_81;
char* __dec_obj20;
struct list$1charph* __result67__;
    if(self->len==0) {
        litem_79=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value127=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 221, "list_item$1charph"))));
        litem_79->prev=((void*)0);
        litem_79->next=((void*)0);
        __dec_obj18=litem_79->item;
        litem_79->item=(char*)come_increment_ref_count(item);
        __dec_obj18 = come_decrement_ref_count2(__dec_obj18, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_79;
        self->head=litem_79;
    }
    else {
        if(self->len==1) {
            litem_80=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value128=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 231, "list_item$1charph"))));
            litem_80->prev=self->head;
            litem_80->next=((void*)0);
            __dec_obj19=litem_80->item;
            litem_80->item=(char*)come_increment_ref_count(item);
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_80;
            self->head->next=litem_80;
        }
        else {
            litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value129=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 241, "list_item$1charph"))));
            litem_81->prev=self->tail;
            litem_81->next=((void*)0);
            __dec_obj20=litem_81->item;
            litem_81->item=(char*)come_increment_ref_count(item);
            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_81;
            self->tail=litem_81;
        }
    }
    self->len++;
    __result67__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static struct list$1charph* list$1charph_map2(struct list$1charph* self, void* parent, char* (*block)(void*,char*)){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1charph* result_82;
struct list_item$1charph* it_83;
void* __right_value133 = (void*)0;
char* item_84;
struct list$1charph* __result69__;
    result_82=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 860, "list$1charph"))));
    it_83=self->head;
    while(it_83!=((void*)0)) {
        item_84=(char*)come_increment_ref_count(block(parent,it_83->item));
        list$1charph_push_back(result_82,(char*)come_increment_ref_count(item_84));
        it_83=it_83->next;
        item_84 = come_decrement_ref_count2(item_84, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result69__ = gComeFunResultObject = __result_obj__ = result_82;
    /*i*/come_call_finalizer3(result_82,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

char* method_block1_02transpilec(struct __current_stack1__* parent, char* it){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
char* __result70__;
    __result70__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value134=xsprintf("%d %s",++(*(parent->n_73)),it)));
    __right_value134 = come_decrement_ref_count2(__right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static char* list$1charph_join(struct list$1charph* self, char* sep){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value137 = (void*)0;
struct buffer* buf_85;
int n_86;
char* it_89;
void* __right_value138 = (void*)0;
char* __result77__;
    buf_85=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 956, "buffer"))));
    n_86=0;
    for(    it_89=list$1charph_begin(self);    !list$1charph_end(self);    it_89=list$1charph_next(self)    ){
        buffer_append_str(buf_85,it_89);
        if(n_86<list$1charph_length(self)-1) {
            buffer_append_str(buf_85,sep);
        }
        n_86++;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value138=buffer_to_string(buf_85)));
    /*i*/come_call_finalizer3(buf_85,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value138 = come_decrement_ref_count2(__right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_87;
char* __result71__;
char* __result72__;
char* result_88;
char* __result73__;
result_87 = (void*)0;
result_88 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_87,0,sizeof(char*));
        __result71__ = gComeFunResultObject = __result_obj__ = result_87;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    self->it=self->head;
    if(self->it) {
        __result72__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    memset(&result_88,0,sizeof(char*));
    __result73__ = gComeFunResultObject = __result_obj__ = result_88;
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_90;
char* __result74__;
char* __result75__;
char* result_91;
char* __result76__;
result_90 = (void*)0;
result_91 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_90,0,sizeof(char*));
        __result74__ = gComeFunResultObject = __result_obj__ = result_90;
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result75__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    memset(&result_91,0,sizeof(char*));
    __result76__ = gComeFunResultObject = __result_obj__ = result_91;
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static int list$1charph_length(struct list$1charph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void va_list_finalize(va_list self){
}

int transpile_v2(struct sInfo* info){
    return 0;
}

_Bool output_source_file_v2(struct sInfo* info){
void* __right_value141 = (void*)0;
char* output_file_name_92;
void* __right_value142 = (void*)0;
_Bool __result78__;
    output_file_name_92=(char*)come_increment_ref_count(xsprintf("%s.c",info->sname));
    string_write(((char*)(__right_value142=__builtin_string("int main(int argc, char** argv) { return 0; }\n"))),output_file_name_92,(_Bool)0);
    __right_value142 = come_decrement_ref_count2(__right_value142, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result78__ = (_Bool)1;
    output_file_name_92 = come_decrement_ref_count2(output_file_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result78__;
}

static void clear_tmp_file(struct sInfo* info){
char* input_file_name_93;
void* __right_value143 = (void*)0;
    input_file_name_93=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_93!=((void*)0)&&string_operator_not_equals(input_file_name_93,"")) {
        system(((char*)(__right_value143=xsprintf("%s %s.*",RM,input_file_name_93))));
        __right_value143 = come_decrement_ref_count2(__right_value143, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_93 = come_decrement_ref_count2(input_file_name_93, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file(struct sInfo* info){
char* input_file_name_94;
void* __right_value144 = (void*)0;
    input_file_name_94=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_94!=((void*)0)&&string_operator_not_equals(input_file_name_94,"")) {
        system(((char*)(__right_value144=xsprintf("%s %s.i* %s.c*",RM,input_file_name_94,input_file_name_94))));
        __right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_94 = come_decrement_ref_count2(input_file_name_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void clear_tmp_file_without_object_file_and_ccfile(struct sInfo* info){
char* input_file_name_95;
void* __right_value145 = (void*)0;
    input_file_name_95=(char*)come_increment_ref_count(info->sname);
    if(input_file_name_95!=((void*)0)&&string_operator_not_equals(input_file_name_95,"")) {
        system(((char*)(__right_value145=xsprintf("%s %s.i* %s.c.out",RM,input_file_name_95,input_file_name_95))));
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    input_file_name_95 = come_decrement_ref_count2(input_file_name_95, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static _Bool cpp(struct sInfo* info){
char* input_file_name_96;
char* output_file_name_97;
void* __right_value146 = (void*)0;
char* __dec_obj21;
void* __right_value147 = (void*)0;
char* __dec_obj22;
void* __right_value148 = (void*)0;
char* cmd_98;
_Bool exist_common_h_99;
struct _IO_FILE* f_100;
int rc2_101;
int rc_102;
void* __right_value149 = (void*)0;
void* __right_value150 = (void*)0;
char* cmd3_103;
int rc_104;
void* __right_value151 = (void*)0;
char* command2_105;
void* __right_value152 = (void*)0;
void* __right_value153 = (void*)0;
char* cmd2_106;
int rc_107;
void* __right_value154 = (void*)0;
char* command2_108;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
char* cmd3_109;
void* __right_value157 = (void*)0;
char* cmd_debian_110;
int rc_debian_111;
void* __right_value158 = (void*)0;
void* __right_value159 = (void*)0;
char* __dec_obj23;
int rc_112;
void* __right_value160 = (void*)0;
char* command2_113;
void* __right_value161 = (void*)0;
void* __right_value162 = (void*)0;
char* cmd4_114;
void* __right_value163 = (void*)0;
void* __right_value164 = (void*)0;
char* __dec_obj24;
void* __right_value165 = (void*)0;
char* command_115;
void* __right_value166 = (void*)0;
char* command2_116;
_Bool __result79__;
output_file_name_97 = (void*)0;
    input_file_name_96=(char*)come_increment_ref_count(info->sname);
    if(!info->output_header_file&&info->output_file_name) {
        __dec_obj21=output_file_name_97;
        output_file_name_97=(char*)come_increment_ref_count(string_operator_add(info->output_file_name,".i"));
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj22=output_file_name_97;
        output_file_name_97=(char*)come_increment_ref_count(string_operator_add(info->sname,".i"));
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    cmd_98=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    exist_common_h_99=(_Bool)0;
    {
        f_100=fopen("common.h","r");
        if(f_100) {
            exist_common_h_99=(_Bool)1;
        }
        if(string_operator_equals(info->output_file_name,"common.h")) {
            exist_common_h_99=(_Bool)0;
        }
        if(f_100) {
            fclose(f_100);
        }
    }
    if(!gCommonHeader) {
        exist_common_h_99=(_Bool)0;
    }
    rc2_101=system("uname -a | grep Android 1> /dev/null 2>/dev/null");
    rc_102=system(cmd_98);
    if(rc2_101==0) {
        cmd3_103=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -U__GNUC__ -I/data/data/com.termux/files/usr/include/mariadb -D__ANDROID__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_99?((char*)(__right_value149=__builtin_string(" -include common.h "))):"",input_file_name_96,output_file_name_97,output_file_name_97));
        __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        if(info->verbose) {
            puts(cmd3_103);
        }
        rc_104=system(cmd3_103);
        command2_105=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_97));
        if(info->verbose) {
            puts(command2_105);
        }
        (void)system(command2_105);
        if(rc_104!=0) {
            printf("cpp failed\n");
            exit(2);
        }
        cmd3_103 = come_decrement_ref_count2(cmd3_103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_105 = come_decrement_ref_count2(command2_105, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(rc_102==0) {
            cmd2_106=(char*)come_increment_ref_count(xsprintf("gcc -E -lang-c %s -I. -I/usr/local/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -DNEO_C -D__MAC__ -I/opt/homebrew/opt/pcre/include -I/opt/homebrew/opt/boehmgc/include/ -I/opt/homebrew/opt/openssl/include -I/opt/homebrew/opt/mysql/include -U__GNUC__ %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_99?((char*)(__right_value152=__builtin_string(" -include common.h "))):"",input_file_name_96,output_file_name_97,output_file_name_97));
            __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            if(info->verbose) {
                puts(cmd2_106);
            }
            rc_107=system(cmd2_106);
            if(rc_107!=0) {
                printf("failed to cpp(2) (%s)\n",cmd2_106);
                exit(5);
            }
            command2_108=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_97));
            if(info->verbose) {
                puts(command2_108);
            }
            (void)system(command2_108);
            cmd2_106 = come_decrement_ref_count2(cmd2_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_108 = come_decrement_ref_count2(command2_108, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cmd3_109=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -U__GNUC__ -D__LINUX__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_99?((char*)(__right_value155=__builtin_string(" -include common.h "))):"",input_file_name_96,output_file_name_97,output_file_name_97));
            __right_value155 = come_decrement_ref_count2(__right_value155, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            cmd_debian_110=(char*)come_increment_ref_count(xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null"));
            rc_debian_111=system(cmd_debian_110);
            if(rc_debian_111==0) {
                __dec_obj23=cmd3_109;
                cmd3_109=(char*)come_increment_ref_count(xsprintf("cpp -lang-c %s -I. -D__DEBIAN__ -I%s/include -DPREFIX=\"\\\"%s\\\"\" -I%s/include -U__GNUC__ -D__LINUX__ %s %s > %s 2> %s.cpp.out",info->cpp_option,getenv("HOME"),"/usr/local/","/usr/local/",exist_common_h_99?((char*)(__right_value158=__builtin_string(" -include common.h "))):"",input_file_name_96,output_file_name_97,output_file_name_97));
                __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            if(info->verbose) {
                puts(cmd3_109);
            }
            rc_112=system(cmd3_109);
            command2_113=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_97));
            if(info->verbose) {
                puts(command2_113);
            }
            (void)system(command2_113);
            if(rc_112!=0) {
                cmd4_114=(char*)come_increment_ref_count(xsprintf("cpp -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_99?((char*)(__right_value161=__builtin_string(" -include common.h "))):"",input_file_name_96,output_file_name_97,output_file_name_97));
                __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(rc_debian_111==0) {
                    __dec_obj24=cmd4_114;
                    cmd4_114=(char*)come_increment_ref_count(xsprintf("cpp -D__DEBIAN__ -I. %s -DPREFIX=%s -I%s/include -D__LINUX__ -C %s %s > %s 2> %s.cpp.out",info->cpp_option,"/usr/local/","/usr/local/",exist_common_h_99?((char*)(__right_value163=__builtin_string(" -include common.h "))):"",input_file_name_96,output_file_name_97,output_file_name_97));
                    __dec_obj24 = come_decrement_ref_count2(__dec_obj24, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                command_115=(char*)come_increment_ref_count(xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_97,input_file_name_96,info->clang_option,input_file_name_96));
                if(info->verbose) {
                    puts(cmd4_114);
                }
                rc_112=system(cmd4_114);
                command2_116=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.cpp.out",output_file_name_97));
                if(info->verbose) {
                    puts(command2_116);
                }
                (void)system(command2_116);
                if(rc_112!=0) {
                    printf("failed to cpp(2) (%s)\n",cmd4_114);
                    exit(5);
                }
                cmd4_114 = come_decrement_ref_count2(cmd4_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                command_115 = come_decrement_ref_count2(command_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                command2_116 = come_decrement_ref_count2(command2_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            cmd3_109 = come_decrement_ref_count2(cmd3_109, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            cmd_debian_110 = come_decrement_ref_count2(cmd_debian_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            command2_113 = come_decrement_ref_count2(command2_113, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result79__ = (_Bool)1;
    input_file_name_96 = come_decrement_ref_count2(input_file_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_97 = come_decrement_ref_count2(output_file_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cmd_98 = come_decrement_ref_count2(cmd_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result79__;
}

static _Bool compile(struct sInfo* info, _Bool output_object_file, struct list$1charph* object_files){
void* __right_value167 = (void*)0;
char* input_file_name_117;
char* output_file_name_118;
void* __right_value168 = (void*)0;
char* __dec_obj25;
void* __right_value169 = (void*)0;
char* __dec_obj26;
void* __right_value170 = (void*)0;
char* command_119;
int rc_120;
void* __right_value171 = (void*)0;
char* command2_121;
_Bool __result80__;
void* __right_value175 = (void*)0;
_Bool __result83__;
    input_file_name_117=(char*)come_increment_ref_count(string_operator_add(info->sname,".c"));
    output_file_name_118=((void*)0);
    if(info->output_file_name&&output_object_file) {
        __dec_obj25=output_file_name_118;
        output_file_name_118=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj25 = come_decrement_ref_count2(__dec_obj25, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj26=output_file_name_118;
        output_file_name_118=(char*)come_increment_ref_count(string_operator_add(info->sname,".o"));
        __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_119=(char*)come_increment_ref_count(xsprintf("clang -o %s -c %s %s >> %s.out 2>&1",output_file_name_118,input_file_name_117,info->clang_option,input_file_name_117));
    if(info->verbose) {
        puts(command_119);
    }
    rc_120=system(command_119);
    command2_121=(char*)come_increment_ref_count(xsprintf("grep error\\: %s.out",input_file_name_117));
    if(info->verbose) {
        puts(command2_121);
    }
    (void)system(command2_121);
    if(rc_120!=0) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result80__ = (_Bool)0;
        input_file_name_117 = come_decrement_ref_count2(input_file_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        output_file_name_118 = come_decrement_ref_count2(output_file_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command_119 = come_decrement_ref_count2(command_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        command2_121 = come_decrement_ref_count2(command2_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result80__;
    }
    if(!output_object_file) {
        list$1charph_insert(object_files,0,(char*)come_increment_ref_count(__builtin_string(output_file_name_118)));
    }
    __result83__ = (_Bool)1;
    input_file_name_117 = come_decrement_ref_count2(input_file_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    output_file_name_118 = come_decrement_ref_count2(output_file_name_118, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command_119 = come_decrement_ref_count2(command_119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    command2_121 = come_decrement_ref_count2(command2_121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result83__;
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
void* __result_obj__=(void*)0;
int len_122;
int i_123;
char* default_value_124;
struct list$1charph* __result81__;
void* __right_value172 = (void*)0;
struct list_item$1charph* litem_125;
char* __dec_obj27;
void* __right_value173 = (void*)0;
struct list_item$1charph* litem_126;
char* __dec_obj28;
struct list_item$1charph* it_127;
int i_128;
void* __right_value174 = (void*)0;
struct list_item$1charph* litem_129;
char* __dec_obj29;
struct list$1charph* __result82__;
default_value_124 = (void*)0;
    if(position<0) {
        position+=self->len+1;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_122=self->len;
        for(        i_123=0;        i_123<position-len_122;        i_123++        ){
            memset(&default_value_124,0,sizeof(char*));
            list$1charph_push_back(self,(char*)come_increment_ref_count(default_value_124));
            default_value_124 = come_decrement_ref_count2(default_value_124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        list$1charph_push_back(self,(char*)come_increment_ref_count(item));
        __result81__ = gComeFunResultObject = __result_obj__ = self;
        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    if(position==0) {
        litem_125=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value172=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 381, "list_item$1charph"))));
        litem_125->prev=((void*)0);
        litem_125->next=self->head;
        __dec_obj27=litem_125->item;
        litem_125->item=(char*)come_increment_ref_count(item);
        __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->head->prev=litem_125;
        self->head=litem_125;
        self->len++;
    }
    else {
        if(self->len==1) {
            litem_126=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value173=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 393, "list_item$1charph"))));
            litem_126->prev=self->head;
            litem_126->next=self->tail;
            __dec_obj28=litem_126->item;
            litem_126->item=(char*)come_increment_ref_count(item);
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->prev=litem_126;
            self->head->next=litem_126;
            self->len++;
        }
        else {
            it_127=self->head;
            i_128=0;
            while(it_127!=((void*)0)) {
                if(position==i_128) {
                    litem_129=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value174=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 409, "list_item$1charph"))));
                    litem_129->prev=it_127->prev;
                    litem_129->next=it_127;
                    __dec_obj29=litem_129->item;
                    litem_129->item=(char*)come_increment_ref_count(item);
                    __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
                    it_127->prev->next=litem_129;
                    it_127->prev=litem_129;
                    self->len++;
                }
                it_127=it_127->next;
                i_128++;
            }
        }
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static _Bool linker(struct sInfo* info, struct list$1charph* object_files){
char* output_file_name_130;
void* __right_value176 = (void*)0;
char* __dec_obj30;
void* __right_value177 = (void*)0;
char* __dec_obj31;
void* __right_value178 = (void*)0;
void* __right_value179 = (void*)0;
struct buffer* command_131;
void* __right_value180 = (void*)0;
struct list$1charph* o2_saved_132;
char* it_133;
void* __right_value181 = (void*)0;
void* __right_value182 = (void*)0;
char* cmd_134;
int rc_135;
void* __right_value183 = (void*)0;
char* __dec_obj32;
void* __right_value184 = (void*)0;
char* __dec_obj33;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
char* __dec_obj34;
void* __right_value187 = (void*)0;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
char* __dec_obj35;
void* __right_value190 = (void*)0;
char* cmd2_136;
void* __right_value191 = (void*)0;
char* cmd3_137;
int rc2_138;
int rc3_139;
void* __right_value192 = (void*)0;
void* __right_value193 = (void*)0;
_Bool __result84__;
_Bool __result85__;
    output_file_name_130=((void*)0);
    if(info->output_file_name) {
        __dec_obj30=output_file_name_130;
        output_file_name_130=(char*)come_increment_ref_count(__builtin_string(info->output_file_name));
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj31=output_file_name_130;
        output_file_name_130=(char*)come_increment_ref_count(xnoextname(info->sname));
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    command_131=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 296, "buffer"))));
    buffer_append_str(command_131,((char*)(__right_value180=xsprintf("clang -o %s ",output_file_name_130))));
    __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_132=(object_files),it_133=list$1charph_begin((o2_saved_132));    !list$1charph_end((o2_saved_132));    it_133=list$1charph_next((o2_saved_132))    ){
        buffer_append_str(command_131,((char*)(__right_value181=xsprintf("%s ",it_133))));
        __right_value181 = come_decrement_ref_count2(__right_value181, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    cmd_134=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    rc_135=system(cmd_134);
    if(rc_135==0) {
        buffer_append_str(command_131," -L/opt/homebrew/opt/pcre/lib -L/opt/homebrew/opt/openssl/lib -L/opt/homebrew/opt/boehmgc/lib -L/opt/homebrew/opt/mysql/lib -L/opt/homebrew/opt/zstd/lib ");
    }
    __dec_obj32=cmd_134;
    cmd_134=(char*)come_increment_ref_count(xsprintf("ls /usr/local/lib 1> /dev/null 2>/dev/null"));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_135=system(cmd_134);
    if(rc_135==0) {
        buffer_append_str(command_131," -L/usr/local/lib ");
    }
    __dec_obj33=cmd_134;
    cmd_134=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null",getenv("HOME")));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_135=system(cmd_134);
    if(rc_135==0) {
        buffer_append_str(command_131,((char*)(__right_value185=xsprintf(" -L%s/lib ",getenv("HOME")))));
        __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    __dec_obj34=cmd_134;
    cmd_134=(char*)come_increment_ref_count(xsprintf("ls %s/lib 1> /dev/null 2>/dev/null","/usr/local/"));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    rc_135=system(cmd_134);
    if(rc_135==0) {
        buffer_append_str(command_131,((char*)(__right_value187=xsprintf(" -L%s/lib ","/usr/local/"))));
        __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    buffer_append_str(command_131,((char*)(__right_value188=xsprintf(" %s ",info->clang_option))));
    __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(gComeStr) {
        buffer_append_str(command_131," -lcomelang-str -lpcre ");
    }
    if(gComeGC) {
        buffer_append_str(command_131," -lcomelang-gc -lgc ");
    }
    if(gComeNet) {
        __dec_obj35=cmd_134;
        cmd_134=(char*)come_increment_ref_count(xsprintf("which apk 1> /dev/null 2>/dev/null"));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        cmd2_136=(char*)come_increment_ref_count(xsprintf("uname -a | grep Debian 1> /dev/null 2>/dev/null"));
        cmd3_137=(char*)come_increment_ref_count(xsprintf("uname -a | grep Android 1>/dev/null 2>/dev/null"));
        rc_135=system(cmd_134);
        rc2_138=system(cmd2_136);
        rc3_139=system(cmd3_137);
        if(rc3_139==0) {
            buffer_append_str(command_131," -lcomelang-net -lssl -I/data/data/com.termux/files/usr/include/mariadb -lmariadb");
        }
        else {
            if(rc_135==0||rc2_138==0) {
                buffer_append_str(command_131," -lcomelang-net -lssl -I/usr/include/mariadb -L/usr/lib -lmariadb");
            }
            else {
                buffer_append_str(command_131," -lcomelang-net -lssl `mysql_config --cflags --libs`");
            }
        }
        cmd2_136 = come_decrement_ref_count2(cmd2_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        cmd3_137 = come_decrement_ref_count2(cmd3_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(command_131," -lcomelang ");
    if(info->verbose) {
        puts(((char*)(__right_value192=buffer_to_string(command_131))));
        __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    rc_135=system(((char*)(__right_value193=buffer_to_string(command_131))));
    __right_value193 = come_decrement_ref_count2(__right_value193, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(rc_135!=0) {
        printf("%s %d: clang is faild\n",info->sname,info->sline);
        __result84__ = (_Bool)0;
        output_file_name_130 = come_decrement_ref_count2(output_file_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(command_131,buffer_finalize, 0, 0, 0, 0, (void*)0);
        cmd_134 = come_decrement_ref_count2(cmd_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result84__;
    }
    __result85__ = (_Bool)1;
    output_file_name_130 = come_decrement_ref_count2(output_file_name_130, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(command_131,buffer_finalize, 0, 0, 0, 0, (void*)0);
    cmd_134 = come_decrement_ref_count2(cmd_134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result85__;
}

_Bool new_project(int argc, char** argv){
void* __right_value194 = (void*)0;
char* project_name_140;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
void* __right_value197 = (void*)0;
char* project_name_debug_141;
void* __right_value198 = (void*)0;
char* cc_142;
void* __right_value199 = (void*)0;
char* install_143;
void* __right_value200 = (void*)0;
char* libs_144;
void* __right_value201 = (void*)0;
char* os_145;
void* __right_value202 = (void*)0;
char* prefix_146;
void* __right_value203 = (void*)0;
char* cflags_147;
void* __right_value204 = (void*)0;
char* cflags_debug_148;
void* __right_value205 = (void*)0;
void* __right_value206 = (void*)0;
_Bool _or_conditional1;
_Bool __exception_result_var_b1;
void* __right_value207 = (void*)0;
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
void* __right_value210 = (void*)0;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
void* __right_value227 = (void*)0;
void* __right_value228 = (void*)0;
void* __right_value229 = (void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
_Bool __result86__;
    project_name_140=(char*)come_increment_ref_count(__builtin_string(argv[2]));
    project_name_debug_141=(char*)come_increment_ref_count(string_operator_add(((char*)(__right_value195=__builtin_string(argv[2]))),((char*)(__right_value196=__builtin_string("-debug")))));
    __right_value195 = come_decrement_ref_count2(__right_value195, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value196 = come_decrement_ref_count2(__right_value196, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    cc_142=(char*)come_increment_ref_count(__builtin_string("comelang"));
    install_143=(char*)come_increment_ref_count(__builtin_string("install"));
    libs_144=(char*)come_increment_ref_count(__builtin_string("-lpcre"));
    os_145=(char*)come_increment_ref_count(__builtin_string("linux"));
    prefix_146=(char*)come_increment_ref_count(__builtin_string("/usr/local/"));
    cflags_147=(char*)come_increment_ref_count(__builtin_string(" -common-header -O2 "));
    cflags_debug_148=(char*)come_increment_ref_count(__builtin_string(" -common-header -gdwarf-4 -cg "));
    if((_or_conditional1=(system(((char*)(__right_value206=xsprintf("mkdir \%s",((char*)(__right_value205=string_to_string(project_name_140))))))))),    (__right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _or_conditional1 != 0) {
        (come_push_stackframe("02transpile.c", 384, 0),__exception_result_var_b1=die("mkdir error"), come_pop_stackframe(), __exception_result_var_b1);
    }
    charp_write(((char*)(__right_value233=xsprintf("\#########################################\n\# istalled directories\n\#########################################\nprefix=\%s\nexec_prefix=${prefix}\nbindir=${exec_prefix}/bin\ndatadir=${datarootdir}\nmandir=${datarootdir}/man\nsharedstatedir=${prefix}/\%s\nsysconfdir=${prefix}/etc/\%s\nincludedir=${prefix}/include/\%s\ndatarootdir=${prefix}/share/\%s\ndocdir=${datarootdir}/doc\nlibdir=${exec_prefix}/lib\n\n\#########################################\n\# environmnet variables\n\#########################################\nCC=\%s\nINSTALL=\%s\nCFLAGS=\%s\nCFLAGS_DEBUG=\%s\nLIBS=\%s\nOS=\%s\nDESTDIR=\%s\nSRCS=$(wildcard *.c)\nSINGLE_SRCS=$(filter-out %%.c.c, $(SRCS))\nOBJS=$(SINGLE_SRCS:.c=.o)\nDEBUG_OBJS=$(SINGLE_SRCS:.c=.debug.o)\nTARGET=\%s\nTARGET_DEBUG=\%s\n\n\#########################################\n\# main\n\#########################################\nall: $(TARGET)\n\n$(TARGET): $(OBJS)\n\t$(CC) $(CFLAGS) $^ -o $@\n\n$(TARGET_DEBUG): $(DEBUG_OBJS)\n\t$(CC) $(CFLAGS_DEBUG) $^ -o $@\n\n%%.o: %%.c\n\t$(CC) $(CFLAGS) -c $< -o $@\n\n%%.debug.o: %%.c\n\t$(CC) $(CFLAGS_DEBUG) -c $< -o $@\n\n\#########################################\n\# header\n\#########################################\n\nheader: common.h\n\ncommon.h: $(SINGLE_SRCS)\n\tcomelang header -common-header $(SINGLE_SRCS)\n\n\#########################################\n\# install\n\#########################################\ninstall:\n\tmkdir -p \"$(DESTDIR)/bin\"\n\t$(INSTALL) -m 755 ./\%s \"$(DESTDIR)/bin\"\n\tmkdir -p \"$(DESTDIR)/include\"\n\tmkdir -p \"$(DESTDIR)/lib\"\n\tmkdir -p \"$(DESTDIR)/share/doc/\%s\"\n\t$(INSTALL) -m 644 README.md \"$(DESTDIR)/share/doc/\%s/README.md\"\n\n\#########################################\n\# clean\n\#########################################\nclean:\n\trm -fR *.o *.c.i *.c.out *.c.c \%s *.log *.out common.h \%s\n\n\#########################################\n\# uninstall\n\#########################################\nuninstall:\n\trm -f \"$(DESTDIR)\"/bin/\%s\n\trm -f \"$(DESTDIR)/share/doc/\%s/README.md\"\n\nrun: \%s\n\trm -f *.log\n\t./\%s\n\ncompile: \%s\n\ndebug: \%s\n\trm -f *.log\n\t./\%s\n",((char*)(__right_value207=string_to_string(prefix_146))),((char*)(__right_value208=string_to_string(project_name_140))),((char*)(__right_value209=string_to_string(project_name_140))),((char*)(__right_value210=string_to_string(project_name_140))),((char*)(__right_value211=string_to_string(project_name_140))),((char*)(__right_value212=string_to_string(cc_142))),((char*)(__right_value213=string_to_string(install_143))),((char*)(__right_value214=string_to_string(cflags_147))),((char*)(__right_value215=string_to_string(cflags_debug_148))),((char*)(__right_value216=string_to_string(libs_144))),((char*)(__right_value217=string_to_string(os_145))),((char*)(__right_value218=string_to_string(prefix_146))),((char*)(__right_value219=string_to_string(project_name_140))),((char*)(__right_value220=string_to_string(project_name_debug_141))),((char*)(__right_value221=string_to_string(project_name_140))),((char*)(__right_value222=string_to_string(project_name_140))),((char*)(__right_value223=string_to_string(project_name_140))),((char*)(__right_value224=string_to_string(project_name_140))),((char*)(__right_value225=string_to_string(project_name_debug_141))),((char*)(__right_value226=string_to_string(project_name_140))),((char*)(__right_value227=string_to_string(project_name_140))),((char*)(__right_value228=string_to_string(project_name_140))),((char*)(__right_value229=string_to_string(project_name_140))),((char*)(__right_value230=string_to_string(project_name_140))),((char*)(__right_value231=string_to_string(project_name_debug_141))),((char*)(__right_value232=string_to_string(project_name_debug_141)))))),((char*)(__right_value235=xsprintf("\%s/Makefile",((char*)(__right_value234=string_to_string(project_name_140)))))),(_Bool)0);
    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value209 = come_decrement_ref_count2(__right_value209, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value231 = come_decrement_ref_count2(__right_value231, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __result86__ = (_Bool)1;
    project_name_140 = come_decrement_ref_count2(project_name_140, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    project_name_debug_141 = come_decrement_ref_count2(project_name_debug_141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cc_142 = come_decrement_ref_count2(cc_142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    install_143 = come_decrement_ref_count2(install_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    libs_144 = come_decrement_ref_count2(libs_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    os_145 = come_decrement_ref_count2(os_145, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    prefix_146 = come_decrement_ref_count2(prefix_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_147 = come_decrement_ref_count2(cflags_147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    cflags_debug_148 = come_decrement_ref_count2(cflags_debug_148, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result86__;
}

_Bool run_project(int argc, char** argv){
struct _IO_FILE* f_149;
_Bool _or_conditional2;
_Bool __exception_result_var_b2;
_Bool _or_conditional3;
_Bool __exception_result_var_b3;
    f_149=fopen("common.h","r");
    if(f_149==((void*)0)) {
        if((_or_conditional2=(system("make header"))),        _or_conditional2 != 0) {
            (come_push_stackframe("02transpile.c", 488, 1),__exception_result_var_b2=die("system"), come_pop_stackframe(), __exception_result_var_b2);
        }
    }
    else {
        fclose(f_149);
    }
    if((_or_conditional3=(system("make run"))),    _or_conditional3 != 0) {
        (come_push_stackframe("02transpile.c", 494, 2),__exception_result_var_b3=die("system"), come_pop_stackframe(), __exception_result_var_b3);
    }
    return (_Bool)1;
}

_Bool make_header_project(int argc, char** argv){
_Bool _or_conditional4;
_Bool __exception_result_var_b4;
    if((_or_conditional4=(system("make header"))),    _or_conditional4 != 0) {
        (come_push_stackframe("02transpile.c", 501, 3),__exception_result_var_b4=die("system"), come_pop_stackframe(), __exception_result_var_b4);
    }
    return (_Bool)1;
}

_Bool compile_project(int argc, char** argv){
struct _IO_FILE* f_150;
_Bool _or_conditional5;
_Bool __exception_result_var_b5;
_Bool _or_conditional6;
_Bool __exception_result_var_b6;
    f_150=fopen("common.h","r");
    if(f_150==((void*)0)) {
        if((_or_conditional5=(system("make header"))),        _or_conditional5 != 0) {
            (come_push_stackframe("02transpile.c", 511, 4),__exception_result_var_b5=die("system"), come_pop_stackframe(), __exception_result_var_b5);
        }
    }
    else {
        fclose(f_150);
    }
    if((_or_conditional6=(system("make compile"))),    _or_conditional6 != 0) {
        (come_push_stackframe("02transpile.c", 516, 5),__exception_result_var_b6=die("system"), come_pop_stackframe(), __exception_result_var_b6);
    }
    return (_Bool)1;
}

_Bool debug_run_project(int argc, char** argv){
struct _IO_FILE* f_151;
_Bool _or_conditional7;
_Bool __exception_result_var_b7;
_Bool _or_conditional8;
_Bool __exception_result_var_b8;
    f_151=fopen("common.h","r");
    if(f_151==((void*)0)) {
        if((_or_conditional7=(system("make header"))),        _or_conditional7 != 0) {
            (come_push_stackframe("02transpile.c", 526, 6),__exception_result_var_b7=die("system"), come_pop_stackframe(), __exception_result_var_b7);
        }
    }
    else {
        fclose(f_151);
    }
    if((_or_conditional8=(system("make debug"))),    _or_conditional8 != 0) {
        (come_push_stackframe("02transpile.c", 531, 7),__exception_result_var_b8=die("system"), come_pop_stackframe(), __exception_result_var_b8);
    }
    return (_Bool)1;
}

_Bool clean_project(int argc, char** argv){
_Bool _or_conditional9;
_Bool __exception_result_var_b9;
    if((_or_conditional9=(system("make clean"))),    _or_conditional9 != 0) {
        (come_push_stackframe("02transpile.c", 538, 8),__exception_result_var_b9=die("system"), come_pop_stackframe(), __exception_result_var_b9);
    }
    return (_Bool)1;
}

_Bool install_project(int argc, char** argv, char* prefix){
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
_Bool _or_conditional10;
_Bool __exception_result_var_b10;
    if((_or_conditional10=(system(((char*)(__right_value237=xsprintf("make install DESTDIR=\%s",((char*)(__right_value236=charp_to_string(prefix))))))))),    (__right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    (__right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
    _or_conditional10 != 0) {
        (come_push_stackframe("02transpile.c", 545, 9),__exception_result_var_b10=die("system"), come_pop_stackframe(), __exception_result_var_b10);
    }
    return (_Bool)1;
}

static void init_classes(struct sInfo* info){
void* __right_value241 = (void*)0;
void* __right_value242 = (void*)0;
void* __right_value243 = (void*)0;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
int i_207;
void* __right_value277 = (void*)0;
char* generics_type_208;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
int i_209;
void* __right_value280 = (void*)0;
char* generics_type_210;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
char* cmd_211;
int rc_212;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
void* __right_value287 = (void*)0;
char* type_name_213;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct sType* type_214;
void* __right_value290 = (void*)0;
char* __dec_obj60;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct sClass* klass_236;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("int")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 552, "sClass")),"int",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("short")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 553, "sClass")),"short",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("long")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 554, "sClass")),"long",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("char")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 555, "sClass")),"char",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 556, "sClass")),"bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("_Bool")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 557, "sClass")),"_Bool",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("void")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 558, "sClass")),"void",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("float")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 559, "sClass")),"float",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("double")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 560, "sClass")),"double",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("lambda")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 561, "sClass")),"lambda",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__uint128_t")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 562, "sClass")),"__uint128_t",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__int128")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 563, "sClass")),"__int128",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
    for(    i_207=0;    i_207<12;    i_207++    ){
        generics_type_208=(char*)come_increment_ref_count(xsprintf("generics_type%d",i_207));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_208),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 566, "sClass")),generics_type_208,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,i_207,-1,(_Bool)0,info)));
        generics_type_208 = come_decrement_ref_count2(generics_type_208, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    for(    i_209=0;    i_209<7;    i_209++    ){
        generics_type_210=(char*)come_increment_ref_count(xsprintf("mgenerics_type%d",i_209));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(generics_type_210),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 570, "sClass")),generics_type_210,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,-1,i_209,(_Bool)0,info)));
        generics_type_210 = come_decrement_ref_count2(generics_type_210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    cmd_211=(char*)come_increment_ref_count(xsprintf("uname -a | grep Darwin 1> /dev/null 2>/dev/null"));
    rc_212=system(cmd_211);
    if(rc_212==0) {
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 577, "sClass")),"__builtin_va_list",(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
        type_name_213=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        type_214=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 581, "sType")),"__builtin_va_list",(_Bool)0,info));
        __dec_obj60=type_214->mOriginalTypeName;
        type_214->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string("__builtin_va_list"));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsTypeph_insert(info->types,(char*)come_increment_ref_count(__builtin_string(type_name_213)),(struct sType*)come_increment_ref_count(type_214));
        type_name_213 = come_decrement_ref_count2(type_name_213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_214,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        klass_236=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "02transpile.c", 589, "sClass")),"__builtin_va_list",(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
        list$1tuple2$2charphsTypephph_push_back(klass_236->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 591, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v1")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 591, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_236->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 592, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v2")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 592, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_236->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 593, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v3")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 593, "sType")),"char*",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_236->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 594, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v4")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 594, "sType")),"int",(_Bool)0,info)))));
        list$1tuple2$2charphsTypephph_push_back(klass_236->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "02transpile.c", 595, "struct tuple2$2charphsTypeph")),(char*)come_increment_ref_count(__builtin_string("v5")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "02transpile.c", 595, "sType")),"int",(_Bool)0,info)))));
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string("__builtin_va_list")),(struct sClass*)come_increment_ref_count(klass_236));
        /*i*/come_call_finalizer3(klass_236,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    cmd_211 = come_decrement_ref_count2(cmd_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_183;
unsigned int it_184;
_Bool same_key_exist_201;
char* it2_204;
struct map$2charphsClassph* __result107__;
    if(self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_183=string_get_hash_key(key)%self->size;
    it_184=hash_183;
    while((_Bool)1) {
        if(self->item_existance[it_184]) {
            if(string_equals(self->keys[it_184],key)) {
                if(1) {
                    list$1charp_remove(self->key_list,self->keys[it_184]);
                    self->keys[it_184] = come_decrement_ref_count2(self->keys[it_184], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_184]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_184]);
                    self->keys[it_184]=key;
                }
                if(1) {
                    /*i*/come_call_finalizer3(self->items[it_184],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_184]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_184]=item;
                }
                break;
            }
            it_184++;
            if(it_184>=self->size) {
                it_184=0;
            }
            else {
                if(it_184==hash_183) {
                    printf("unexpected error in map.insert\n");
                    stackframe();
                    exit(2);
                }
            }
        }
        else {
            self->item_existance[it_184]=(_Bool)1;
            if(1) {
                self->keys[it_184]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_184]=key;
            }
            if(1) {
                self->items[it_184]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_184]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_201=(_Bool)0;
    for(    it2_204=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_204=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_204,key)) {
            same_key_exist_201=(_Bool)1;
        }
    }
    if(!same_key_exist_201) {
        list$1charp_push_back(self->key_list,key);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_152;
void* __right_value238 = (void*)0;
char** keys_153;
void* __right_value239 = (void*)0;
struct sClass** items_154;
void* __right_value240 = (void*)0;
_Bool* item_existance_155;
int len_156;
char* it_159;
struct sClass* default_value_162;
struct sClass* it2_163;
unsigned int hash_180;
int n_181;
struct sClass* default_value_182;
default_value_162 = (void*)0;
default_value_182 = (void*)0;
    size_152=self->size*10;
    keys_153=(char**)come_increment_ref_count(((char**)(__right_value238=(char**)come_calloc(1, sizeof(char*)*(1*(size_152)), "./comelang.h", 1620, "char*%"))));
    items_154=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value239=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_152)), "./comelang.h", 1621, "sClass*%"))));
    item_existance_155=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value240=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_152)), "./comelang.h", 1622, "bool"))));
    len_156=0;
    for(    it_159=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_159=map$2charphsClassph_next(self)    ){
        memset(&default_value_162,0,sizeof(struct sClass*));
        it2_163=map$2charphsClassph_at(self,it_159,default_value_162);
        hash_180=string_get_hash_key(it_159)%size_152;
        n_181=hash_180;
        while((_Bool)1) {
            if(item_existance_155[n_181]) {
                n_181++;
                if(n_181>=size_152) {
                    n_181=0;
                }
                else {
                    if(n_181==hash_180) {
                        printf("unexpected error in map.rehash(1)\n");
                        stackframe();
                        exit(2);
                    }
                }
            }
            else {
                item_existance_155[n_181]=(_Bool)1;
                keys_153[n_181]=it_159;
                items_154[n_181]=map$2charphsClassph_at(self,it_159,default_value_182);
                len_156++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_153;
    self->items=items_154;
    self->item_existance=item_existance_155;
    self->size=size_152;
    self->len=len_156;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_157;
char* __result87__;
char* __result88__;
char* result_158;
char* __result89__;
result_157 = (void*)0;
result_158 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_157,0,sizeof(char*));
        __result87__ = gComeFunResultObject = __result_obj__ = result_157;
        gComeFunResultObject = (void*)0;
        return __result87__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result88__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    memset(&result_158,0,sizeof(char*));
    __result89__ = gComeFunResultObject = __result_obj__ = result_158;
    gComeFunResultObject = (void*)0;
    return __result89__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_160;
char* __result90__;
char* __result91__;
char* result_161;
char* __result92__;
result_160 = (void*)0;
result_161 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_160,0,sizeof(char*));
        __result90__ = gComeFunResultObject = __result_obj__ = result_160;
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result91__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result91__;
    }
    memset(&result_161,0,sizeof(char*));
    __result92__ = gComeFunResultObject = __result_obj__ = result_161;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_164;
unsigned int it_165;
struct sClass* __result93__;
struct sClass* __result94__;
struct sClass* __result95__;
struct sClass* __result96__;
    hash_164=string_get_hash_key(((char*)key))%self->size;
    it_165=hash_164;
    while((_Bool)1) {
        if(self->item_existance[it_165]) {
            if(string_equals(self->keys[it_165],key)) {
                __result93__ = gComeFunResultObject = __result_obj__ = self->items[it_165];
                /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result93__;
            }
            it_165++;
            if(it_165>=self->size) {
                it_165=0;
            }
            else {
                if(it_165==hash_164) {
                    __result94__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result94__;
                }
            }
        }
        else {
            __result95__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result95__;
        }
    }
    __result96__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj36;
struct list$1tuple2$2charphsTypephph* __dec_obj37;
char* __dec_obj58;
char* __dec_obj59;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj36=self->mName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(self->mFields==gComeFunResultObject) {
            __dec_obj37=self->mFields;
            /* a*/come_call_finalizer3(__dec_obj37,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj58=self->mDeclareSName;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(self->mParentClassName==gComeFunResultObject) {
            __dec_obj59=self->mParentClassName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_166;
struct list_item$1tuple2$2charphsTypephph* prev_it_167;
    it_166=self->head;
    while(it_166!=((void*)0)) {
        prev_it_167=it_166;
        it_166=it_166->next;
        /*i*/come_call_finalizer3(prev_it_167,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj38;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj38=self->item;
            /* a*/come_call_finalizer3(__dec_obj38,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj41;
struct tuple1$1sTypeph* __dec_obj43;
char* __dec_obj45;
struct list$1sTypeph* __dec_obj46;
struct list$1sNodeph* __dec_obj48;
struct list$1sTypeph* __dec_obj50;
struct list$1charph* __dec_obj51;
struct tuple1$1sTypeph* __dec_obj52;
struct sNode* __dec_obj54;
struct sNode* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj41=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj43=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(self->mGenericsName==gComeFunResultObject) {
            __dec_obj45=self->mGenericsName;
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj46=self->mGenericsTypes;
            /* a*/come_call_finalizer3(__dec_obj46,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(self->mArrayNum==gComeFunResultObject) {
            __dec_obj48=self->mArrayNum;
            /* a*/come_call_finalizer3(__dec_obj48,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj50=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj50,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj51=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj51,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj52=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj52,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(self->mAlignas==gComeFunResultObject) {
            __dec_obj54=self->mAlignas;
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(self->mSizeNum==gComeFunResultObject) {
            __dec_obj55=self->mSizeNum;
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj56=self->mOriginalTypeName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(self->mAsmName==gComeFunResultObject) {
            __dec_obj57=self->mAsmName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_168;
struct list_item$1sTypeph* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj47;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj47=self->item;
            /* a*/come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_170;
struct list_item$1sTypeph* prev_it_171;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        /*i*/come_call_finalizer3(prev_it_171,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_172;
struct list_item$1sNodeph* prev_it_173;
    it_172=self->head;
    while(it_172!=((void*)0)) {
        prev_it_173=it_172;
        it_172=it_172->next;
        /*i*/come_call_finalizer3(prev_it_173,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj49;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj49=self->item;
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_174;
struct list_item$1sNodeph* prev_it_175;
    it_174=self->head;
    while(it_174!=((void*)0)) {
        prev_it_175=it_174;
        it_174=it_174->next;
        /*i*/come_call_finalizer3(prev_it_175,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_176;
struct list_item$1charph* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        /*i*/come_call_finalizer3(prev_it_177,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            /* a*/come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_178;
struct list_item$1tuple2$2charphsTypephph* prev_it_179;
    it_178=self->head;
    while(it_178!=((void*)0)) {
        prev_it_179=it_178;
        it_178=it_178->next;
        /*i*/come_call_finalizer3(prev_it_179,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_185;
struct list_item$1charp* it_186;
struct list$1charp* __result100__;
    it2_185=0;
    it_186=self->head;
    while(it_186!=((void*)0)) {
        if(charp_equals(it_186->item,item)) {
            list$1charp_delete(self,it2_185,it2_185+1);
            break;
        }
        it2_185++;
        it_186=it_186->next;
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_187;
struct list$1charp* __result97__;
struct list_item$1charp* it_190;
int i_191;
struct list_item$1charp* prev_it_192;
struct list_item$1charp* it_193;
int i_194;
struct list_item$1charp* prev_it_195;
struct list_item$1charp* it_196;
struct list_item$1charp* head_prev_it_197;
struct list_item$1charp* tail_it_198;
int i_199;
struct list_item$1charp* prev_it_200;
struct list$1charp* __result99__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_187=tail;
        tail=head;
        head=tmp_187;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result97__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    if(head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else {
        if(head==0) {
            it_190=self->head;
            i_191=0;
            while(it_190!=((void*)0)) {
                if(i_191<tail) {
                    prev_it_192=it_190;
                    it_190=it_190->next;
                    i_191++;
                    /*i*/come_call_finalizer3(prev_it_192,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_191==tail) {
                        self->head=it_190;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_190=it_190->next;
                        i_191++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_193=self->head;
                i_194=0;
                while(it_193!=((void*)0)) {
                    if(i_194==head) {
                        self->tail=it_193->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_194>=head) {
                        prev_it_195=it_193;
                        it_193=it_193->next;
                        i_194++;
                        /*i*/come_call_finalizer3(prev_it_195,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_193=it_193->next;
                        i_194++;
                    }
                }
            }
            else {
                it_196=self->head;
                head_prev_it_197=((void*)0);
                tail_it_198=((void*)0);
                i_199=0;
                while(it_196!=((void*)0)) {
                    if(i_199==head) {
                        head_prev_it_197=it_196->prev;
                    }
                    if(i_199==tail) {
                        tail_it_198=it_196;
                    }
                    if(i_199>=head&&i_199<tail) {
                        prev_it_200=it_196;
                        it_196=it_196->next;
                        i_199++;
                        /*i*/come_call_finalizer3(prev_it_200,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_196=it_196->next;
                        i_199++;
                    }
                }
                if(head_prev_it_197!=((void*)0)) {
                    head_prev_it_197->next=tail_it_198;
                }
                if(tail_it_198!=((void*)0)) {
                    tail_it_198->prev=head_prev_it_197;
                }
            }
        }
    }
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_188;
struct list_item$1charp* prev_it_189;
struct list$1charp* __result98__;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        /*i*/come_call_finalizer3(prev_it_189,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_202;
char* __result101__;
char* __result102__;
char* result_203;
char* __result103__;
result_202 = (void*)0;
result_203 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_202,0,sizeof(char*));
        __result101__ = gComeFunResultObject = __result_obj__ = result_202;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    self->it=self->head;
    if(self->it) {
        __result102__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result102__;
    }
    memset(&result_203,0,sizeof(char*));
    __result103__ = gComeFunResultObject = __result_obj__ = result_203;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_205;
char* __result104__;
char* __result105__;
char* result_206;
char* __result106__;
result_205 = (void*)0;
result_206 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_205,0,sizeof(char*));
        __result104__ = gComeFunResultObject = __result_obj__ = result_205;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result105__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result105__;
    }
    memset(&result_206,0,sizeof(char*));
    __result106__ = gComeFunResultObject = __result_obj__ = result_206;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__=(void*)0;
unsigned int hash_232;
unsigned int it_233;
_Bool same_key_exist_234;
char* it2_235;
struct map$2charphsTypeph* __result118__;
    if(self->len*10>=self->size) {
        map$2charphsTypeph_rehash(self);
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
                    /*i*/come_call_finalizer3(self->items[it_233],sType_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_233]=(struct sType*)come_increment_ref_count(item);
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
                self->items[it_233]=(struct sType*)come_increment_ref_count(item);
            }
            else {
                self->items[it_233]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_234=(_Bool)0;
    for(    it2_235=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_235=list$1charp_next(self->key_list)    ){
        if(string_equals(it2_235,key)) {
            same_key_exist_234=(_Bool)1;
        }
    }
    if(!same_key_exist_234) {
        list$1charp_push_back(self->key_list,key);
    }
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
int size_215;
void* __right_value291 = (void*)0;
char** keys_216;
void* __right_value292 = (void*)0;
struct sType** items_217;
void* __right_value293 = (void*)0;
_Bool* item_existance_218;
int len_219;
char* it_222;
struct sType* default_value_225;
struct sType* it2_226;
unsigned int hash_229;
int n_230;
struct sType* default_value_231;
default_value_225 = (void*)0;
default_value_231 = (void*)0;
    size_215=self->size*10;
    keys_216=(char**)come_increment_ref_count(((char**)(__right_value291=(char**)come_calloc(1, sizeof(char*)*(1*(size_215)), "./comelang.h", 1620, "char*%"))));
    items_217=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value292=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_215)), "./comelang.h", 1621, "sType*%"))));
    item_existance_218=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value293=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_215)), "./comelang.h", 1622, "bool"))));
    len_219=0;
    for(    it_222=map$2charphsTypeph_begin(self);    !map$2charphsTypeph_end(self);    it_222=map$2charphsTypeph_next(self)    ){
        memset(&default_value_225,0,sizeof(struct sType*));
        it2_226=map$2charphsTypeph_at(self,it_222,default_value_225);
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
                items_217[n_230]=map$2charphsTypeph_at(self,it_222,default_value_231);
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

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_220;
char* __result108__;
char* __result109__;
char* result_221;
char* __result110__;
result_220 = (void*)0;
result_221 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_220,0,sizeof(char*));
        __result108__ = gComeFunResultObject = __result_obj__ = result_220;
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result109__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    memset(&result_221,0,sizeof(char*));
    __result110__ = gComeFunResultObject = __result_obj__ = result_221;
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
char* result_223;
char* __result111__;
char* __result112__;
char* result_224;
char* __result113__;
result_223 = (void*)0;
result_224 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_223,0,sizeof(char*));
        __result111__ = gComeFunResultObject = __result_obj__ = result_223;
        gComeFunResultObject = (void*)0;
        return __result111__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result112__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    memset(&result_224,0,sizeof(char*));
    __result113__ = gComeFunResultObject = __result_obj__ = result_224;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_227;
unsigned int it_228;
struct sType* __result114__;
struct sType* __result115__;
struct sType* __result116__;
struct sType* __result117__;
    hash_227=string_get_hash_key(((char*)key))%self->size;
    it_228=hash_227;
    while((_Bool)1) {
        if(self->item_existance[it_228]) {
            if(string_equals(self->keys[it_228],key)) {
                __result114__ = gComeFunResultObject = __result_obj__ = self->items[it_228];
                /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result114__;
            }
            it_228++;
            if(it_228>=self->size) {
                it_228=0;
            }
            else {
                if(it_228==hash_227) {
                    __result115__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result115__;
                }
            }
        }
        else {
            __result116__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result116__;
        }
    }
    __result117__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_237;
struct tuple2$2charphsTypeph* __dec_obj61;
void* __right_value298 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_238;
struct tuple2$2charphsTypeph* __dec_obj64;
void* __right_value299 = (void*)0;
struct list_item$1tuple2$2charphsTypephph* litem_239;
struct tuple2$2charphsTypeph* __dec_obj67;
struct list$1tuple2$2charphsTypephph* __result119__;
    if(self->len==0) {
        litem_237=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value297=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 221, "list_item$1tuple2$2charphsTypephph"))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        __dec_obj61=litem_237->item;
        litem_237->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj61,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_237;
        self->head=litem_237;
    }
    else {
        if(self->len==1) {
            litem_238=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value298=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 231, "list_item$1tuple2$2charphsTypephph"))));
            litem_238->prev=self->head;
            litem_238->next=((void*)0);
            __dec_obj64=litem_238->item;
            litem_238->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj64,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_238;
            self->head->next=litem_238;
        }
        else {
            litem_239=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(__right_value299=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang.h", 241, "list_item$1tuple2$2charphsTypephph"))));
            litem_239->prev=self->tail;
            litem_239->next=((void*)0);
            __dec_obj67=litem_239->item;
            litem_239->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj67,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_239;
            self->tail=litem_239;
        }
    }
    self->len++;
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj68;
struct sType* __dec_obj69;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj68=self->v1;
            __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj69=self->v2;
            /* a*/come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj70;
struct sType* __dec_obj71;
struct tuple2$2charphsTypeph* __result120__;
    __dec_obj70=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj71=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    /* a*/come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

int come_main_v2(int argc, char** argv){
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
struct buffer* clang_option_240;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct buffer* cpp_option_241;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1charph* files_242;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct list$1charph* object_files_243;
_Bool output_object_file_244;
_Bool output_cpp_file_245;
_Bool output_source_file_flag_246;
void* __right_value334 = (void*)0;
char* output_file_name_247;
_Bool verbose_248;
_Bool prohibit_common_header_249;
_Bool come_debug_250;
_Bool come_malloc_251;
int i_252;
void* __right_value335 = (void*)0;
char* __dec_obj72;
void* __right_value336 = (void*)0;
_Bool _if_conditional1;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
_Bool _if_conditional2;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
_Bool _or_conditional11;
_Bool __exception_result_var_b11;
struct _IO_FILE* f_253;
_Bool _and_conditional1;
_Bool __exception_result_var_b12;
void* __right_value351 = (void*)0;
char* tmp_file_254;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sInfo info_255;
void* __right_value356 = (void*)0;
char* __dec_obj73;
void* __right_value357 = (void*)0;
char* __dec_obj74;
void* __right_value358 = (void*)0;
char* __dec_obj75;
void* __right_value359 = (void*)0;
char* __dec_obj76;
void* __right_value360 = (void*)0;
void* __right_value366 = (void*)0;
struct map$2charphsFunph* __dec_obj93;
void* __right_value367 = (void*)0;
void* __right_value373 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj105;
void* __right_value374 = (void*)0;
void* __right_value380 = (void*)0;
struct map$2charphsClassph* __dec_obj107;
void* __right_value381 = (void*)0;
void* __right_value387 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj113;
void* __right_value388 = (void*)0;
void* __right_value394 = (void*)0;
struct map$2charphsTypeph* __dec_obj115;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct sModule* __dec_obj116;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj129;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct list$1CVALUEph* __dec_obj134;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sVarTable* __dec_obj135;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct sVarTable* lv_table_289;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct list$1charph* __dec_obj136;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct list$1charph* __dec_obj137;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct map$2charphsClassph* __dec_obj138;
void* __right_value411 = (void*)0;
char* __dec_obj139;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct buffer* __dec_obj140;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct buffer* __dec_obj141;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
struct buffer* clang_option_295;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
struct buffer* cpp_option_296;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
struct list$1charph* files_297;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct list$1charph* object_files_298;
_Bool output_object_file_299;
_Bool output_cpp_file_300;
_Bool output_source_file_flag_301;
char* output_file_name_302;
_Bool verbose_303;
_Bool come_debug_304;
_Bool come_malloc_305;
int i_306;
void* __right_value427 = (void*)0;
char* __dec_obj170;
void* __right_value428 = (void*)0;
_Bool _if_conditional3;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
_Bool _if_conditional4;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
struct list$1charph* o2_saved_307;
char* it_308;
struct sInfo info_309;
struct _IO_FILE* tmp_file_310;
void* __right_value442 = (void*)0;
char* __dec_obj171;
void* __right_value443 = (void*)0;
char* __dec_obj172;
void* __right_value444 = (void*)0;
char* __dec_obj173;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct map$2charphsFunph* __dec_obj174;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct map$2charphsGenericsFunph* __dec_obj175;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct map$2charphsClassph* __dec_obj176;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct map$2charphsClassModuleph* __dec_obj177;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct map$2charphsTypeph* __dec_obj178;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct sModule* __dec_obj179;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj180;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct list$1CVALUEph* __dec_obj181;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sVarTable* __dec_obj182;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sVarTable* lv_table_311;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1charph* __dec_obj183;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1charph* __dec_obj184;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct map$2charphsClassph* __dec_obj185;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct buffer* __dec_obj186;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct buffer* __dec_obj187;
void* __right_value477 = (void*)0;
char* __dec_obj188;
char* __dec_obj189;
struct sInfo info_312;
void* __right_value478 = (void*)0;
char* __dec_obj190;
void* __right_value479 = (void*)0;
char* __dec_obj191;
void* __right_value480 = (void*)0;
char* __dec_obj192;
char* __dec_obj193;
struct __current_stack2__ __current_stack2__;
memset(&info_255, 0, sizeof(struct sInfo));
memset(&info_309, 0, sizeof(struct sInfo));
memset(&info_312, 0, sizeof(struct sInfo));
memset(&__current_stack2__, 0, sizeof(struct __current_stack2__));
    if(charp_operator_equals(argv[1],"header")&&argc>=3) {
        gProgramName=argv[0];
        clang_option_240=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 606, "buffer"))));
        cpp_option_241=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 607, "buffer"))));
        files_242=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 608, "list$1charph"))));
        object_files_243=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 609, "list$1charph"))));
        output_object_file_244=(_Bool)0;
        output_cpp_file_245=(_Bool)0;
        output_source_file_flag_246=(_Bool)0;
        output_file_name_247=(char*)come_increment_ref_count(__builtin_string("common.h"));
        verbose_248=(_Bool)0;
        prohibit_common_header_249=(_Bool)0;
        come_debug_250=(_Bool)0;
        come_malloc_251=(_Bool)0;
        for(        i_252=2;        i_252<argc;        i_252++        ){
            if(charp_operator_equals(argv[i_252],"-o")&&i_252+1<argc) {
                __dec_obj72=output_file_name_247;
                output_file_name_247=(char*)come_increment_ref_count(__builtin_string(argv[i_252+1]));
                __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
                i_252++;
            }
            else {
                if(charp_operator_equals(argv[i_252],"-str")) {
                    gComeStr=(_Bool)1;
                }
                else {
                    if(charp_operator_equals(argv[i_252],"-net")) {
                        gComeNet=(_Bool)1;
                    }
                    else {
                        if(charp_operator_equals(argv[i_252],"-gc")) {
                            gComeGC=(_Bool)1;
                        }
                        else {
                            if(charp_operator_equals(argv[i_252],"-g")) {
                                buffer_append_str(clang_option_240,"-g ");
                            }
                            else {
                                if(charp_operator_equals(argv[i_252],"-cg")) {
                                    buffer_append_str(clang_option_240,"-g ");
                                    come_debug_250=(_Bool)1;
                                }
                                else {
                                    if(charp_operator_equals(argv[i_252],"-common-header")) {
                                        gCommonHeader=(_Bool)1;
                                    }
                                    else {
                                        if(charp_operator_equals(argv[i_252],"-original-position")) {
                                            gComeOriginalSourcePosition=(_Bool)0;
                                        }
                                        else {
                                            if((_if_conditional1=(string_operator_equals(((char*)(__right_value336=charp_operator_load_range_element(argv[i_252],0,2))),"-O"))),                                            (__right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                            _if_conditional1) {
                                                buffer_append_str(clang_option_240,((char*)(__right_value338=xsprintf(" \%s ",((char*)(__right_value337=charp_to_string(argv[i_252])))))));
                                                __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                come_debug_250=(_Bool)0;
                                            }
                                            else {
                                                if((_if_conditional2=(string_operator_equals(((char*)(__right_value339=charp_operator_load_range_element(argv[i_252],0,2))),"-D"))),                                                (__right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                _if_conditional2) {
                                                    buffer_append_str(cpp_option_241,((char*)(__right_value341=xsprintf(" \%s ",((char*)(__right_value340=charp_to_string(argv[i_252])))))));
                                                    __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    __right_value341 = come_decrement_ref_count2(__right_value341, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    buffer_append_str(clang_option_240,((char*)(__right_value343=xsprintf(" \%s ",((char*)(__right_value342=charp_to_string(argv[i_252])))))));
                                                    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                    __right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                }
                                                else {
                                                    if(charp_operator_equals(argv[i_252],"-v")) {
                                                        buffer_append_str(clang_option_240,"-v ");
                                                        verbose_248=(_Bool)1;
                                                    }
                                                    else {
                                                        if(strlen(argv[i_252])>=2&&memcmp(argv[i_252],"-I",strlen("-I"))==0) {
                                                            buffer_append_str(cpp_option_241,((char*)(__right_value345=charp_operator_add(" ",((char*)(__right_value344=charp_operator_add(argv[i_252]," ")))))));
                                                            __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                            __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_252],"-gdwarf-4")) {
                                                                buffer_append_str(clang_option_240,"-gdwarf-4 ");
                                                            }
                                                            else {
                                                                if(charp_operator_equals(argv[i_252],"-s")||charp_operator_equals(argv[i_252],"-S")) {
                                                                    output_source_file_flag_246=(_Bool)1;
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    if(charp_operator_equals(argv[i_252],"-c")) {
                                                                        output_object_file_244=(_Bool)1;
                                                                    }
                                                                    else {
                                                                        if(charp_operator_equals(argv[i_252],"-E")) {
                                                                            output_cpp_file_245=(_Bool)1;
                                                                        }
                                                                        else {
                                                                            if(argv[i_252][0]==45) {
                                                                                buffer_append_str(clang_option_240,((char*)(__right_value346=charp_operator_add(argv[i_252]," "))));
                                                                                __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                if(strlen(argv[i_252])>2&&memcmp(argv[i_252]+strlen(argv[i_252])-2,".o",2)==0) {
                                                                                    list$1charph_push_back(object_files_243,(char*)come_increment_ref_count(__builtin_string(argv[i_252])));
                                                                                }
                                                                                else {
                                                                                    if(strlen(argv[i_252])>2&&memcmp(argv[i_252]+strlen(argv[i_252])-2,".a",2)==0) {
                                                                                        list$1charph_push_back(object_files_243,(char*)come_increment_ref_count(__builtin_string(argv[i_252])));
                                                                                    }
                                                                                    else {
                                                                                        list$1charph_push_back(files_242,(char*)come_increment_ref_count(__builtin_string(argv[i_252])));
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
        gComeDebug=come_debug_250;
        gComeMalloc=come_malloc_251;
        if((_or_conditional11=(system(((char*)(__right_value350=xsprintf("%s %s",RM,output_file_name_247)))))),        (__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _or_conditional11 != 0) {
            (come_push_stackframe("02transpile.c", 690, 10),__exception_result_var_b11=die("rm"), come_pop_stackframe(), __exception_result_var_b11);
        }
        if((_and_conditional1=(f_253=fopen(output_file_name_247,"w"))),        _and_conditional1 == 0) {
            (come_push_stackframe("02transpile.c", 692, 11),__exception_result_var_b12=die("fopen"), come_pop_stackframe(), __exception_result_var_b12);
        }
        fclose(f_253);
        tmp_file_254=(char*)come_increment_ref_count(__builtin_string("tmp-common-header.c"));
        system(((char*)(__right_value355=xsprintf("cat \%s > \%s",((char*)(__right_value353=string_to_string(((char*)(__right_value352=list$1charph_join(files_242," ")))))),((char*)(__right_value354=string_to_string(tmp_file_254)))))));
        __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        memset(&info_255,0,sizeof(struct sInfo));
        __dec_obj73=info_255.base_sname;
        info_255.base_sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_254));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj74=info_255.sname;
        info_255.sname=(char*)come_increment_ref_count(__builtin_string(tmp_file_254));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_255.sline=1;
        info_255.err_num=0;
        __dec_obj75=info_255.clang_option;
        info_255.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_240));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj76=info_255.cpp_option;
        info_255.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_241));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        info_255.no_output_err=(_Bool)0;
        __dec_obj93=info_255.funcs;
        info_255.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 710, "map$2charphsFunph"))));
        /* a*/come_call_finalizer3(__dec_obj93,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj105=info_255.generics_funcs;
        info_255.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 711, "map$2charphsGenericsFunph"))));
        /* a*/come_call_finalizer3(__dec_obj105,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj107=info_255.classes;
        info_255.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 712, "map$2charphsClassph"))));
        /* a*/come_call_finalizer3(__dec_obj107,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj113=info_255.modules;
        info_255.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 713, "map$2charphsClassModuleph"))));
        /* a*/come_call_finalizer3(__dec_obj113,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj115=info_255.types;
        info_255.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 714, "map$2charphsTypeph"))));
        /* a*/come_call_finalizer3(__dec_obj115,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj116=info_255.module;
        info_255.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 715, "sModule"))));
        /* a*/come_call_finalizer3(__dec_obj116,sModule_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj129=info_255.right_value_objects;
        info_255.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 716, "list$1sRightValueObjectph"))));
        /* a*/come_call_finalizer3(__dec_obj129,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj134=info_255.stack;
        info_255.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 717, "list$1CVALUEph"))));
        /* a*/come_call_finalizer3(__dec_obj134,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj135=info_255.gv_table;
        info_255.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 718, "sVarTable")),(_Bool)1,((void*)0)));
        /* a*/come_call_finalizer3(__dec_obj135,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        lv_table_289=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 719, "sVarTable")),(_Bool)0,((void*)0)));
        info_255.lv_table=lv_table_289;
        __dec_obj136=info_255.generics_type_names;
        info_255.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 721, "list$1charph"))));
        /* a*/come_call_finalizer3(__dec_obj136,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj137=info_255.method_generics_type_names;
        info_255.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 722, "list$1charph"))));
        /* a*/come_call_finalizer3(__dec_obj137,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj138=info_255.generics_classes;
        info_255.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 723, "map$2charphsClassph"))));
        /* a*/come_call_finalizer3(__dec_obj138,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
        info_255.verbose=verbose_248;
        info_255.output_header_file=(_Bool)1;
        static int n_290=0;
        info_255.num_source_files=n_290++;
        info_255.max_source_files=list$1charph_length(files_242);
        __dec_obj139=info_255.output_file_name;
        info_255.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_247));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        init_classes(&info_255);
        clear_tmp_file(&info_255);
        if(!cpp(&info_255)) {
            printf("%s %d: transpile failed\n",info_255.sname,info_255.sline);
            exit(2);
        }
        __dec_obj140=info_255.original_source;
        info_255.original_source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value413=string_read(((char*)(__right_value412=xsprintf("%s",tmp_file_254))))))));
        /* a*/come_call_finalizer3(__dec_obj140,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __dec_obj141=info_255.source;
        info_255.source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value416=string_read(((char*)(__right_value415=xsprintf("%s.i",tmp_file_254))))))));
        /* a*/come_call_finalizer3(__dec_obj141,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        info_255.p=info_255.source->buf;
        info_255.head=info_255.source->buf;
        if(!output_cpp_file_245) {
            transpile_v5(&info_255);
            if(!output_header_file(&info_255)) {
                printf("%s %d: output source file faield\n",info_255.sname,info_255.sline);
                exit(2);
            }
        }
        system(((char*)(__right_value418=xsprintf("%s %s*",RM,tmp_file_254))));
        __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(clang_option_240,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(cpp_option_241,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(files_242,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(object_files_243,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        output_file_name_247 = come_decrement_ref_count2(output_file_name_247, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tmp_file_254 = come_decrement_ref_count2(tmp_file_254, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3((&info_255),sInfo_finalize, 1, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(lv_table_289,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(charp_operator_equals(argv[1],"new")&&argc==3) {
            if(!new_project(argc,argv)) {
                return (_Bool)0;
            }
        }
        else {
            if(charp_operator_equals(argv[1],"run")&&argc==2) {
                if(!run_project(argc,argv)) {
                    return (_Bool)0;
                }
            }
            else {
                if(charp_operator_equals(argv[1],"header")&&argc==2) {
                    if(!make_header_project(argc,argv)) {
                        return (_Bool)0;
                    }
                }
                else {
                    if(charp_operator_equals(argv[1],"compile")&&argc==2) {
                        if(!compile_project(argc,argv)) {
                            return (_Bool)0;
                        }
                    }
                    else {
                        if(charp_operator_equals(argv[1],"debug")&&argc==2) {
                            if(!debug_run_project(argc,argv)) {
                                return (_Bool)0;
                            }
                        }
                        else {
                            if(charp_operator_equals(argv[1],"clean")&&argc==2) {
                                if(!clean_project(argc,argv)) {
                                    return (_Bool)0;
                                }
                            }
                            else {
                                if(charp_operator_equals(argv[1],"install")&&argc>=2) {
                                    if(argc==2) {
                                        if(!install_project(argc,argv,"/usr/local")) {
                                            return (_Bool)0;
                                        }
                                    }
                                    else {
                                        if(argc>=3) {
                                            if(!install_project(argc,argv,argv[2])) {
                                                return (_Bool)0;
                                            }
                                        }
                                    }
                                }
                                else {
                                    gProgramName=argv[0];
                                    clang_option_295=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 803, "buffer"))));
                                    cpp_option_296=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "02transpile.c", 804, "buffer"))));
                                    files_297=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 805, "list$1charph"))));
                                    object_files_298=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 806, "list$1charph"))));
                                    output_object_file_299=(_Bool)0;
                                    output_cpp_file_300=(_Bool)0;
                                    output_source_file_flag_301=(_Bool)0;
                                    output_file_name_302=((void*)0);
                                    verbose_303=(_Bool)0;
                                    come_debug_304=(_Bool)0;
                                    come_malloc_305=(_Bool)0;
                                    for(                                    i_306=1;                                    i_306<argc;                                    i_306++                                    ){
                                        if(charp_operator_equals(argv[i_306],"-o")&&i_306+1<argc) {
                                            __dec_obj170=output_file_name_302;
                                            output_file_name_302=(char*)come_increment_ref_count(__builtin_string(argv[i_306+1]));
                                            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            i_306++;
                                        }
                                        else {
                                            if(charp_operator_equals(argv[i_306],"-str")) {
                                                gComeStr=(_Bool)1;
                                            }
                                            else {
                                                if(charp_operator_equals(argv[i_306],"-net")) {
                                                    gComeNet=(_Bool)1;
                                                }
                                                else {
                                                    if(charp_operator_equals(argv[i_306],"-gc")) {
                                                        gComeGC=(_Bool)1;
                                                    }
                                                    else {
                                                        if(charp_operator_equals(argv[i_306],"-cg")) {
                                                            come_debug_304=(_Bool)1;
                                                            buffer_append_str(clang_option_295,"-g ");
                                                        }
                                                        else {
                                                            if(charp_operator_equals(argv[i_306],"-common-header")) {
                                                                gCommonHeader=(_Bool)1;
                                                            }
                                                            else {
                                                                if(charp_operator_equals(argv[i_306],"-original-position")) {
                                                                    gComeOriginalSourcePosition=(_Bool)0;
                                                                }
                                                                else {
                                                                    if((_if_conditional3=(string_operator_equals(((char*)(__right_value428=charp_operator_load_range_element(argv[i_306],0,2))),"-O"))),                                                                    (__right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                    _if_conditional3) {
                                                                        buffer_append_str(clang_option_295,((char*)(__right_value430=xsprintf(" \%s ",((char*)(__right_value429=charp_to_string(argv[i_306])))))));
                                                                        __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        come_debug_304=(_Bool)0;
                                                                    }
                                                                    else {
                                                                        if((_if_conditional4=(string_operator_equals(((char*)(__right_value431=charp_operator_load_range_element(argv[i_306],0,2))),"-D"))),                                                                        (__right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
                                                                        _if_conditional4) {
                                                                            buffer_append_str(cpp_option_296,((char*)(__right_value433=xsprintf(" \%s ",((char*)(__right_value432=charp_to_string(argv[i_306])))))));
                                                                            __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            buffer_append_str(clang_option_295,((char*)(__right_value435=xsprintf(" \%s ",((char*)(__right_value434=charp_to_string(argv[i_306])))))));
                                                                            __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                            __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            if(charp_operator_equals(argv[i_306],"-g")) {
                                                                                buffer_append_str(clang_option_295,"-g ");
                                                                            }
                                                                            else {
                                                                                if(charp_operator_equals(argv[i_306],"-v")) {
                                                                                    buffer_append_str(clang_option_295,"-v ");
                                                                                    verbose_303=(_Bool)1;
                                                                                }
                                                                                else {
                                                                                    if(strlen(argv[i_306])>=2&&memcmp(argv[i_306],"-I",strlen("-I"))==0) {
                                                                                        buffer_append_str(cpp_option_296,((char*)(__right_value437=charp_operator_add(" ",((char*)(__right_value436=charp_operator_add(argv[i_306]," ")))))));
                                                                                        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                        __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        if(charp_operator_equals(argv[i_306],"-gdwarf-4")) {
                                                                                            buffer_append_str(clang_option_295,"-gdwarf-4 ");
                                                                                        }
                                                                                        else {
                                                                                            if(charp_operator_equals(argv[i_306],"-s")||charp_operator_equals(argv[i_306],"-S")) {
                                                                                                output_source_file_flag_301=(_Bool)1;
                                                                                                gComeOriginalSourcePosition=(_Bool)0;
                                                                                            }
                                                                                            else {
                                                                                                if(charp_operator_equals(argv[i_306],"-c")) {
                                                                                                    output_object_file_299=(_Bool)1;
                                                                                                }
                                                                                                else {
                                                                                                    if(charp_operator_equals(argv[i_306],"-E")) {
                                                                                                        output_cpp_file_300=(_Bool)1;
                                                                                                    }
                                                                                                    else {
                                                                                                        if(argv[i_306][0]==45) {
                                                                                                            buffer_append_str(clang_option_295,((char*)(__right_value438=charp_operator_add(argv[i_306]," "))));
                                                                                                            __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                                                                                        }
                                                                                                        else {
                                                                                                            if(strlen(argv[i_306])>2&&memcmp(argv[i_306]+strlen(argv[i_306])-2,".o",2)==0) {
                                                                                                                list$1charph_push_back(object_files_298,(char*)come_increment_ref_count(__builtin_string(argv[i_306])));
                                                                                                            }
                                                                                                            else {
                                                                                                                if(strlen(argv[i_306])>2&&memcmp(argv[i_306]+strlen(argv[i_306])-2,".a",2)==0) {
                                                                                                                    list$1charph_push_back(object_files_298,(char*)come_increment_ref_count(__builtin_string(argv[i_306])));
                                                                                                                }
                                                                                                                else {
                                                                                                                    list$1charph_push_back(files_297,(char*)come_increment_ref_count(__builtin_string(argv[i_306])));
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
                                    gComeDebug=come_debug_304;
                                    gComeMalloc=come_malloc_305;
                                    for(                                    o2_saved_307=(struct list$1charph*)come_increment_ref_count((files_297)),it_308=list$1charph_begin((o2_saved_307));                                    !list$1charph_end((o2_saved_307));                                    it_308=list$1charph_next((o2_saved_307))                                    ){
                                        memset(&info_309,0,sizeof(struct sInfo));
                                        tmp_file_310=fopen(it_308,"r");
                                        if(tmp_file_310==((void*)0)) {
                                            /*i*/come_call_finalizer3((&info_309),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                            continue;
                                        }
                                        else {
                                            fclose(tmp_file_310);
                                        }
                                        __dec_obj171=info_309.sname;
                                        info_309.sname=(char*)come_increment_ref_count(__builtin_string(it_308));
                                        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        info_309.sline=1;
                                        info_309.err_num=0;
                                        __dec_obj172=info_309.clang_option;
                                        info_309.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_295));
                                        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj173=info_309.cpp_option;
                                        info_309.cpp_option=(char*)come_increment_ref_count(buffer_to_string(cpp_option_296));
                                        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        info_309.no_output_err=(_Bool)0;
                                        __dec_obj174=info_309.funcs;
                                        info_309.funcs=(struct map$2charphsFunph*)come_increment_ref_count(map$2charphsFunph_initialize((struct map$2charphsFunph*)come_increment_ref_count((struct map$2charphsFunph*)come_calloc(1, sizeof(struct map$2charphsFunph)*(1), "02transpile.c", 905, "map$2charphsFunph"))));
                                        /* a*/come_call_finalizer3(__dec_obj174,map$2charphsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj175=info_309.generics_funcs;
                                        info_309.generics_funcs=(struct map$2charphsGenericsFunph*)come_increment_ref_count(map$2charphsGenericsFunph_initialize((struct map$2charphsGenericsFunph*)come_increment_ref_count((struct map$2charphsGenericsFunph*)come_calloc(1, sizeof(struct map$2charphsGenericsFunph)*(1), "02transpile.c", 906, "map$2charphsGenericsFunph"))));
                                        /* a*/come_call_finalizer3(__dec_obj175,map$2charphsGenericsFunph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj176=info_309.classes;
                                        info_309.classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 907, "map$2charphsClassph"))));
                                        /* a*/come_call_finalizer3(__dec_obj176,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj177=info_309.modules;
                                        info_309.modules=(struct map$2charphsClassModuleph*)come_increment_ref_count(map$2charphsClassModuleph_initialize((struct map$2charphsClassModuleph*)come_increment_ref_count((struct map$2charphsClassModuleph*)come_calloc(1, sizeof(struct map$2charphsClassModuleph)*(1), "02transpile.c", 908, "map$2charphsClassModuleph"))));
                                        /* a*/come_call_finalizer3(__dec_obj177,map$2charphsClassModuleph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj178=info_309.types;
                                        info_309.types=(struct map$2charphsTypeph*)come_increment_ref_count(map$2charphsTypeph_initialize((struct map$2charphsTypeph*)come_increment_ref_count((struct map$2charphsTypeph*)come_calloc(1, sizeof(struct map$2charphsTypeph)*(1), "02transpile.c", 909, "map$2charphsTypeph"))));
                                        /* a*/come_call_finalizer3(__dec_obj178,map$2charphsTypeph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj179=info_309.module;
                                        info_309.module=(struct sModule*)come_increment_ref_count(sModule_initialize((struct sModule*)come_increment_ref_count((struct sModule*)come_calloc(1, sizeof(struct sModule)*(1), "02transpile.c", 910, "sModule"))));
                                        /* a*/come_call_finalizer3(__dec_obj179,sModule_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj180=info_309.right_value_objects;
                                        info_309.right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "02transpile.c", 911, "list$1sRightValueObjectph"))));
                                        /* a*/come_call_finalizer3(__dec_obj180,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj181=info_309.stack;
                                        info_309.stack=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "02transpile.c", 912, "list$1CVALUEph"))));
                                        /* a*/come_call_finalizer3(__dec_obj181,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj182=info_309.gv_table;
                                        info_309.gv_table=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 913, "sVarTable")),(_Bool)1,((void*)0)));
                                        /* a*/come_call_finalizer3(__dec_obj182,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                        lv_table_311=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "02transpile.c", 914, "sVarTable")),(_Bool)0,((void*)0)));
                                        info_309.lv_table=lv_table_311;
                                        __dec_obj183=info_309.generics_type_names;
                                        info_309.generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 916, "list$1charph"))));
                                        /* a*/come_call_finalizer3(__dec_obj183,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj184=info_309.method_generics_type_names;
                                        info_309.method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "02transpile.c", 917, "list$1charph"))));
                                        /* a*/come_call_finalizer3(__dec_obj184,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                                        __dec_obj185=info_309.generics_classes;
                                        info_309.generics_classes=(struct map$2charphsClassph*)come_increment_ref_count(map$2charphsClassph_initialize((struct map$2charphsClassph*)come_increment_ref_count((struct map$2charphsClassph*)come_calloc(1, sizeof(struct map$2charphsClassph)*(1), "02transpile.c", 918, "map$2charphsClassph"))));
                                        /* a*/come_call_finalizer3(__dec_obj185,map$2charphsClassph_finalize, 0, 0, 0, 0, (void*)0);
                                        info_309.verbose=verbose_303;
                                        init_classes(&info_309);
                                        clear_tmp_file(&info_309);
                                        if(!cpp(&info_309)) {
                                            printf("%s %d: transpile failed\n",info_309.sname,info_309.sline);
                                            exit(2);
                                        }
                                        __dec_obj186=info_309.original_source;
                                        info_309.original_source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value472=string_read(((char*)(__right_value471=xsprintf("%s",it_308))))))));
                                        /* a*/come_call_finalizer3(__dec_obj186,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __dec_obj187=info_309.source;
                                        info_309.source=(struct buffer*)come_increment_ref_count(string_to_buffer(((char*)(__right_value475=string_read(((char*)(__right_value474=xsprintf("%s.i",it_308))))))));
                                        /* a*/come_call_finalizer3(__dec_obj187,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                        info_309.p=info_309.source->buf;
                                        info_309.head=info_309.source->buf;
                                        if(output_file_name_302) {
                                            __dec_obj188=info_309.output_file_name;
                                            info_309.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_302));
                                            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        else {
                                            __dec_obj189=info_309.output_file_name;
                                            info_309.output_file_name=((void*)0);
                                            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        if(!output_cpp_file_300) {
                                            transpile_v5(&info_309);
                                            if(!output_source_file_v3(&info_309)) {
                                                printf("%s %d: output source file faield\n",info_309.sname,info_309.sline);
                                                exit(2);
                                            }
                                            if(info_309.err_num>0) {
                                                printf("transpile error. err num %d\n",info_309.err_num);
                                                exit(2);
                                            }
                                            else {
                                                if(!compile(&info_309,output_object_file_299,object_files_298)) {
                                                    printf("%s %d: compile faield\n",info_309.sname,info_309.sline);
                                                    exit(27);
                                                }
                                            }
                                        }
                                        if(output_cpp_file_300) {
                                        }
                                        else {
                                            if(info_309.err_num>0) {
                                            }
                                            else {
                                                if(output_source_file_flag_301) {
                                                    clear_tmp_file_without_object_file_and_ccfile(&info_309);
                                                }
                                                else {
                                                    clear_tmp_file_without_object_file(&info_309);
                                                }
                                            }
                                        }
                                        /*i*/come_call_finalizer3((&info_309),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                        /*i*/come_call_finalizer3(lv_table_311,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
                                    }
                                    /*i*/come_call_finalizer3(o2_saved_307,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    if(!output_object_file_299&&!output_cpp_file_300&&(list$1charph_length(files_297)>0||list$1charph_length(object_files_298)>0)) {
                                        memset(&info_312,0,sizeof(struct sInfo));
                                        __dec_obj190=info_312.sname;
                                        info_312.sname=(char*)come_increment_ref_count(string_clone(list$1charphp_operator_load_element(files_297,0)));
                                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        __dec_obj191=info_312.clang_option;
                                        info_312.clang_option=(char*)come_increment_ref_count(buffer_to_string(clang_option_295));
                                        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        info_312.verbose=verbose_303;
                                        if(output_file_name_302) {
                                            __dec_obj192=info_312.output_file_name;
                                            info_312.output_file_name=(char*)come_increment_ref_count(__builtin_string(output_file_name_302));
                                            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        else {
                                            __dec_obj193=info_312.output_file_name;
                                            info_312.output_file_name=((void*)0);
                                            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        }
                                        __current_stack2__.info_312 = &info_312;
                                        __current_stack2__.clang_option_295 = &clang_option_295;
                                        __current_stack2__.cpp_option_296 = &cpp_option_296;
                                        __current_stack2__.files_297 = &files_297;
                                        __current_stack2__.object_files_298 = &object_files_298;
                                        __current_stack2__.output_object_file_299 = &output_object_file_299;
                                        __current_stack2__.output_cpp_file_300 = &output_cpp_file_300;
                                        __current_stack2__.output_source_file_flag_301 = &output_source_file_flag_301;
                                        __current_stack2__.output_file_name_302 = &output_file_name_302;
                                        __current_stack2__.verbose_303 = &verbose_303;
                                        __current_stack2__.come_debug_304 = &come_debug_304;
                                        __current_stack2__.come_malloc_305 = &come_malloc_305;
                                        __current_stack2__.argc = &argc;
                                        __current_stack2__.argv = &argv;
                                        bool_expect(linker(&info_312,object_files_298),&__current_stack2__,(void*)method_block2_02transpilec);
                                        if(!output_cpp_file_300&&!output_source_file_flag_301) {
                                            clear_tmp_file(&info_312);
                                        }
                                        /*i*/come_call_finalizer3((&info_312),sInfo_finalize, 1, 0, 0, 0, (void*)0);
                                    }
                                    /*i*/come_call_finalizer3(clang_option_295,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(cpp_option_296,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(files_297,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    /*i*/come_call_finalizer3(object_files_298,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                                    output_file_name_302 = come_decrement_ref_count2(output_file_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

static struct map$2charphsFunph* map$2charphsFunph_initialize(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
int i_256;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct list$1charp* __dec_obj77;
struct map$2charphsFunph* __result122__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value361=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1369, "char*%"))));
    self->items=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value362=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(128)), "./comelang.h", 1370, "sFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value363=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1371, "bool"))));
    for(    i_256=0;    i_256<128;    i_256++    ){
        self->item_existance[i_256]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj77=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1381, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj77,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result121__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
int i_257;
int i_258;
    for(    i_257=0;    i_257<self->size;    i_257++    ){
        if(self->item_existance[i_257]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_257],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_258=0;    i_258<self->size;    i_258++    ){
        if(self->item_existance[i_258]) {
            if(1) {
                self->keys[i_258] = come_decrement_ref_count2(self->keys[i_258], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj78;
struct sType* __dec_obj79;
struct list$1sTypeph* __dec_obj80;
struct list$1charph* __dec_obj81;
struct list$1charph* __dec_obj82;
struct sType* __dec_obj83;
struct sBlock* __dec_obj84;
struct buffer* __dec_obj87;
struct buffer* __dec_obj88;
struct buffer* __dec_obj89;
struct buffer* __dec_obj90;
char* __dec_obj91;
char* __dec_obj92;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj78=self->mName;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj79=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj80=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj80,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj81=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj82=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj82,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj83=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj84=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj84,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj87=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj87,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj88=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj88,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj89=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj89,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj90=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj90,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj91=self->mComeHeader;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj92=self->mDeclareSName;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj85;
struct sVarTable* __dec_obj86;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj85=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj85,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj86=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj86,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsFunph_finalize(struct map$2charphsFunph* self){
int i_259;
int i_260;
    for(    i_259=0;    i_259<self->size;    i_259++    ){
        if(self->item_existance[i_259]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_259],sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_260=0;    i_260<self->size;    i_260++    ){
        if(self->item_existance[i_260]) {
            if(1) {
                self->keys[i_260] = come_decrement_ref_count2(self->keys[i_260], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunph_initialize(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
int i_261;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1charp* __dec_obj94;
struct map$2charphsGenericsFunph* __result123__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value368=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1369, "char*%"))));
    self->items=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value369=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(128)), "./comelang.h", 1370, "sGenericsFun*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value370=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1371, "bool"))));
    for(    i_261=0;    i_261<128;    i_261++    ){
        self->item_existance[i_261]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj94=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1381, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj94,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsGenericsFunphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void map$2charphsGenericsFunphp_finalize(struct map$2charphsGenericsFunph* self){
int i_262;
int i_263;
    for(    i_262=0;    i_262<self->size;    i_262++    ){
        if(self->item_existance[i_262]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_262],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_263=0;    i_263<self->size;    i_263++    ){
        if(self->item_existance[i_263]) {
            if(1) {
                self->keys[i_263] = come_decrement_ref_count2(self->keys[i_263], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
char* __dec_obj98;
struct sType* __dec_obj99;
struct list$1sTypeph* __dec_obj100;
struct list$1charph* __dec_obj101;
struct list$1charph* __dec_obj102;
char* __dec_obj103;
char* __dec_obj104;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj95=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj95,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj96=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj97=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj98=self->mName;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj99=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj100=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj100,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj101=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj102=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj102,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj103=self->mBlock;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj104=self->mGenericsSName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsGenericsFunph_finalize(struct map$2charphsGenericsFunph* self){
int i_264;
int i_265;
    for(    i_264=0;    i_264<self->size;    i_264++    ){
        if(self->item_existance[i_264]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_264],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_265=0;    i_265<self->size;    i_265++    ){
        if(self->item_existance[i_265]) {
            if(1) {
                self->keys[i_265] = come_decrement_ref_count2(self->keys[i_265], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassph_initialize(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
int i_266;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct list$1charp* __dec_obj106;
struct map$2charphsClassph* __result124__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value375=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1369, "char*%"))));
    self->items=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value376=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(128)), "./comelang.h", 1370, "sClass*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value377=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1371, "bool"))));
    for(    i_266=0;    i_266<128;    i_266++    ){
        self->item_existance[i_266]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj106=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1381, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj106,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void map$2charphsClassphp_finalize(struct map$2charphsClassph* self){
int i_267;
int i_268;
    for(    i_267=0;    i_267<self->size;    i_267++    ){
        if(self->item_existance[i_267]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_267],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_268=0;    i_268<self->size;    i_268++    ){
        if(self->item_existance[i_268]) {
            if(1) {
                self->keys[i_268] = come_decrement_ref_count2(self->keys[i_268], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsClassph_finalize(struct map$2charphsClassph* self){
int i_269;
int i_270;
    for(    i_269=0;    i_269<self->size;    i_269++    ){
        if(self->item_existance[i_269]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_269],sClass_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_270=0;    i_270<self->size;    i_270++    ){
        if(self->item_existance[i_270]) {
            if(1) {
                self->keys[i_270] = come_decrement_ref_count2(self->keys[i_270], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassModuleph* map$2charphsClassModuleph_initialize(struct map$2charphsClassModuleph* self){
void* __result_obj__=(void*)0;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
int i_271;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct list$1charp* __dec_obj108;
struct map$2charphsClassModuleph* __result125__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value382=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1369, "char*%"))));
    self->items=(struct sClassModule**)come_increment_ref_count(((struct sClassModule**)(__right_value383=(struct sClassModule**)come_calloc(1, sizeof(struct sClassModule*)*(1*(128)), "./comelang.h", 1370, "sClassModule*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value384=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1371, "bool"))));
    for(    i_271=0;    i_271<128;    i_271++    ){
        self->item_existance[i_271]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj108=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1381, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj108,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsClassModulephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void map$2charphsClassModulephp_finalize(struct map$2charphsClassModuleph* self){
int i_272;
int i_273;
    for(    i_272=0;    i_272<self->size;    i_272++    ){
        if(self->item_existance[i_272]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_272],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_273=0;    i_273<self->size;    i_273++    ){
        if(self->item_existance[i_273]) {
            if(1) {
                self->keys[i_273] = come_decrement_ref_count2(self->keys[i_273], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj109;
char* __dec_obj110;
struct list$1charph* __dec_obj111;
char* __dec_obj112;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj109=self->mName;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mText!=((void*)0)) {
        if(self->mText==gComeFunResultObject) {
            __dec_obj110=self->mText;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(self->mParams==gComeFunResultObject) {
            __dec_obj111=self->mParams;
            /* a*/come_call_finalizer3(__dec_obj111,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(self->mSName==gComeFunResultObject) {
            __dec_obj112=self->mSName;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsClassModuleph_finalize(struct map$2charphsClassModuleph* self){
int i_274;
int i_275;
    for(    i_274=0;    i_274<self->size;    i_274++    ){
        if(self->item_existance[i_274]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_274],sClassModule_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_275=0;    i_275<self->size;    i_275++    ){
        if(self->item_existance[i_275]) {
            if(1) {
                self->keys[i_275] = come_decrement_ref_count2(self->keys[i_275], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsTypeph* map$2charphsTypeph_initialize(struct map$2charphsTypeph* self){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
int i_276;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct list$1charp* __dec_obj114;
struct map$2charphsTypeph* __result126__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value389=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 1369, "char*%"))));
    self->items=(struct sType**)come_increment_ref_count(((struct sType**)(__right_value390=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(128)), "./comelang.h", 1370, "sType*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value391=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 1371, "bool"))));
    for(    i_276=0;    i_276<128;    i_276++    ){
        self->item_existance[i_276]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj114=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 1381, "list$1charp"))));
    /* a*/come_call_finalizer3(__dec_obj114,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void map$2charphsTypephp_finalize(struct map$2charphsTypeph* self){
int i_277;
int i_278;
    for(    i_277=0;    i_277<self->size;    i_277++    ){
        if(self->item_existance[i_277]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_277],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_278=0;    i_278<self->size;    i_278++    ){
        if(self->item_existance[i_278]) {
            if(1) {
                self->keys[i_278] = come_decrement_ref_count2(self->keys[i_278], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphsTypeph_finalize(struct map$2charphsTypeph* self){
int i_279;
int i_280;
    for(    i_279=0;    i_279<self->size;    i_279++    ){
        if(self->item_existance[i_279]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_279],sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_280=0;    i_280<self->size;    i_280++    ){
        if(self->item_existance[i_280]) {
            if(1) {
                self->keys[i_280] = come_decrement_ref_count2(self->keys[i_280], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj117;
struct buffer* __dec_obj118;
struct buffer* __dec_obj119;
struct buffer* __dec_obj120;
char* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
struct buffer* __dec_obj124;
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj117=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj117,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj118=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj118,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead3!=((void*)0)) {
        if(self->mSourceHead3==gComeFunResultObject) {
            __dec_obj119=self->mSourceHead3;
            /* a*/come_call_finalizer3(__dec_obj119,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead3,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj120=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj120,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(self->mLastCode==gComeFunResultObject) {
            __dec_obj121=self->mLastCode;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(self->mLastCode2==gComeFunResultObject) {
            __dec_obj122=self->mLastCode2;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLastCode3!=((void*)0)) {
        if(self->mLastCode3==gComeFunResultObject) {
            __dec_obj123=self->mLastCode3;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode3 = come_decrement_ref_count2(self->mLastCode3, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(self->mHeader==gComeFunResultObject) {
            __dec_obj124=self->mHeader;
            /* a*/come_call_finalizer3(__dec_obj124,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result127__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_281;
struct list_item$1sRightValueObjectph* prev_it_282;
    it_281=self->head;
    while(it_281!=((void*)0)) {
        prev_it_282=it_281;
        it_281=it_281->next;
        /*i*/come_call_finalizer3(prev_it_282,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj125;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj125=self->item;
            /* a*/come_call_finalizer3(__dec_obj125,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj126;
char* __dec_obj127;
char* __dec_obj128;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj126=self->mType;
            /* a*/come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj127=self->mVarName;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj128=self->mFunName;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_283;
struct list_item$1sRightValueObjectph* prev_it_284;
    it_283=self->head;
    while(it_283!=((void*)0)) {
        prev_it_284=it_283;
        it_283=it_283->next;
        /*i*/come_call_finalizer3(prev_it_284,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result128__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_285;
struct list_item$1CVALUEph* prev_it_286;
    it_285=self->head;
    while(it_285!=((void*)0)) {
        prev_it_286=it_285;
        it_285=it_285->next;
        /*i*/come_call_finalizer3(prev_it_286,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj130;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj130=self->item;
            /* a*/come_call_finalizer3(__dec_obj130,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj131;
struct sType* __dec_obj132;
char* __dec_obj133;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj131=self->c_value;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj132=self->type;
            /* a*/come_call_finalizer3(__dec_obj132,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj133=self->c_value_without_right_value_objects;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_287;
struct list_item$1CVALUEph* prev_it_288;
    it_287=self->head;
    while(it_287!=((void*)0)) {
        prev_it_288=it_287;
        it_287=it_287->next;
        /*i*/come_call_finalizer3(prev_it_288,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sInfo_finalize(struct sInfo* self){
struct buffer* __dec_obj142;
struct buffer* __dec_obj143;
char* __dec_obj144;
char* __dec_obj145;
char* __dec_obj146;
char* __dec_obj147;
char* __dec_obj148;
char* __dec_obj149;
struct map$2charphsFunph* __dec_obj150;
struct map$2charphsGenericsFunph* __dec_obj151;
struct map$2charphsClassph* __dec_obj152;
struct map$2charphsClassModuleph* __dec_obj153;
struct map$2charphsTypeph* __dec_obj154;
struct map$2charphsClassph* __dec_obj155;
struct sModule* __dec_obj156;
struct sType* __dec_obj157;
struct list$1sRightValueObjectph* __dec_obj158;
struct sType* __dec_obj159;
struct list$1sTypeph* __dec_obj160;
struct list$1CVALUEph* __dec_obj161;
struct sType* __dec_obj162;
struct sVarTable* __dec_obj163;
struct list$1charph* __dec_obj164;
struct list$1charph* __dec_obj165;
struct sType* __dec_obj166;
char* __dec_obj167;
struct sType* __dec_obj168;
struct map$2charphcharph* __dec_obj169;
    if(self!=((void*)0)&&self->original_source!=((void*)0)) {
        if(self->original_source==gComeFunResultObject) {
            __dec_obj142=self->original_source;
            /* a*/come_call_finalizer3(__dec_obj142,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->original_source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->source!=((void*)0)) {
        if(self->source==gComeFunResultObject) {
            __dec_obj143=self->source;
            /* a*/come_call_finalizer3(__dec_obj143,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->source,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->sname!=((void*)0)) {
        if(self->sname==gComeFunResultObject) {
            __dec_obj144=self->sname;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->base_sname!=((void*)0)) {
        if(self->base_sname==gComeFunResultObject) {
            __dec_obj145=self->base_sname;
            __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->base_sname = come_decrement_ref_count2(self->base_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->err_line!=((void*)0)) {
        if(self->err_line==gComeFunResultObject) {
            __dec_obj146=self->err_line;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->err_line = come_decrement_ref_count2(self->err_line, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->clang_option!=((void*)0)) {
        if(self->clang_option==gComeFunResultObject) {
            __dec_obj147=self->clang_option;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->clang_option = come_decrement_ref_count2(self->clang_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->cpp_option!=((void*)0)) {
        if(self->cpp_option==gComeFunResultObject) {
            __dec_obj148=self->cpp_option;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->cpp_option = come_decrement_ref_count2(self->cpp_option, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->come_fun_name!=((void*)0)) {
        if(self->come_fun_name==gComeFunResultObject) {
            __dec_obj149=self->come_fun_name;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->come_fun_name = come_decrement_ref_count2(self->come_fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->funcs!=((void*)0)) {
        if(self->funcs==gComeFunResultObject) {
            __dec_obj150=self->funcs;
            /* a*/come_call_finalizer3(__dec_obj150,map$2charphsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->funcs,map$2charphsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_funcs!=((void*)0)) {
        if(self->generics_funcs==gComeFunResultObject) {
            __dec_obj151=self->generics_funcs;
            /* a*/come_call_finalizer3(__dec_obj151,map$2charphsGenericsFunph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_funcs,map$2charphsGenericsFunphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->classes!=((void*)0)) {
        if(self->classes==gComeFunResultObject) {
            __dec_obj152=self->classes;
            /* a*/come_call_finalizer3(__dec_obj152,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->modules!=((void*)0)) {
        if(self->modules==gComeFunResultObject) {
            __dec_obj153=self->modules;
            /* a*/come_call_finalizer3(__dec_obj153,map$2charphsClassModuleph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->modules,map$2charphsClassModulephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->types!=((void*)0)) {
        if(self->types==gComeFunResultObject) {
            __dec_obj154=self->types;
            /* a*/come_call_finalizer3(__dec_obj154,map$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->types,map$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_classes!=((void*)0)) {
        if(self->generics_classes==gComeFunResultObject) {
            __dec_obj155=self->generics_classes;
            /* a*/come_call_finalizer3(__dec_obj155,map$2charphsClassph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_classes,map$2charphsClassphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->module!=((void*)0)) {
        if(self->module==gComeFunResultObject) {
            __dec_obj156=self->module;
            /* a*/come_call_finalizer3(__dec_obj156,sModule_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module,sModule_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj157=self->type;
            /* a*/come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->right_value_objects!=((void*)0)) {
        if(self->right_value_objects==gComeFunResultObject) {
            __dec_obj158=self->right_value_objects;
            /* a*/come_call_finalizer3(__dec_obj158,list$1sRightValueObjectph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->right_value_objects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_type!=((void*)0)) {
        if(self->generics_type==gComeFunResultObject) {
            __dec_obj159=self->generics_type;
            /* a*/come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(self->method_generics_types==gComeFunResultObject) {
            __dec_obj160=self->method_generics_types;
            /* a*/come_call_finalizer3(__dec_obj160,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->stack!=((void*)0)) {
        if(self->stack==gComeFunResultObject) {
            __dec_obj161=self->stack;
            /* a*/come_call_finalizer3(__dec_obj161,list$1CVALUEph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->stack,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->come_function_result_type!=((void*)0)) {
        if(self->come_function_result_type==gComeFunResultObject) {
            __dec_obj162=self->come_function_result_type;
            /* a*/come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->come_function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->gv_table!=((void*)0)) {
        if(self->gv_table==gComeFunResultObject) {
            __dec_obj163=self->gv_table;
            /* a*/come_call_finalizer3(__dec_obj163,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->gv_table,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->generics_type_names!=((void*)0)) {
        if(self->generics_type_names==gComeFunResultObject) {
            __dec_obj164=self->generics_type_names;
            /* a*/come_call_finalizer3(__dec_obj164,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->method_generics_type_names!=((void*)0)) {
        if(self->method_generics_type_names==gComeFunResultObject) {
            __dec_obj165=self->method_generics_type_names;
            /* a*/come_call_finalizer3(__dec_obj165,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->method_generics_type_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->impl_type!=((void*)0)) {
        if(self->impl_type==gComeFunResultObject) {
            __dec_obj166=self->impl_type;
            /* a*/come_call_finalizer3(__dec_obj166,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->output_file_name!=((void*)0)) {
        if(self->output_file_name==gComeFunResultObject) {
            __dec_obj167=self->output_file_name;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->output_file_name = come_decrement_ref_count2(self->output_file_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->function_result_type!=((void*)0)) {
        if(self->function_result_type==gComeFunResultObject) {
            __dec_obj168=self->function_result_type;
            /* a*/come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->function_result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->module_params!=((void*)0)) {
        if(self->module_params==gComeFunResultObject) {
            __dec_obj169=self->module_params;
            /* a*/come_call_finalizer3(__dec_obj169,map$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->module_params,map$2charphcharphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_291;
int i_292;
    for(    i_291=0;    i_291<self->size;    i_291++    ){
        if(self->item_existance[i_291]) {
            if(1) {
                self->items[i_291] = come_decrement_ref_count2(self->items[i_291], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_292=0;    i_292<self->size;    i_292++    ){
        if(self->item_existance[i_292]) {
            if(1) {
                self->keys[i_292] = come_decrement_ref_count2(self->keys[i_292], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_293;
int i_294;
    for(    i_293=0;    i_293<self->size;    i_293++    ){
        if(self->item_existance[i_293]) {
            if(1) {
                self->items[i_293] = come_decrement_ref_count2(self->items[i_293], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_294=0;    i_294<self->size;    i_294++    ){
        if(self->item_existance[i_294]) {
            if(1) {
                self->keys[i_294] = come_decrement_ref_count2(self->keys[i_294], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_313;
int i_314;
char* __result129__;
char* default_value_315;
char* __result130__;
default_value_315 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_313=self->head;
    i_314=0;
    while(it_313!=((void*)0)) {
        if(position==i_314) {
            __result129__ = gComeFunResultObject = __result_obj__ = it_313->item;
            gComeFunResultObject = (void*)0;
            return __result129__;
        }
        it_313=it_313->next;
        i_314++;
    }
    memset(&default_value_315,0,sizeof(char*));
    __result130__ = gComeFunResultObject = __result_obj__ = default_value_315;
    default_value_315 = come_decrement_ref_count2(default_value_315, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

void method_block2_02transpilec(struct __current_stack2__* parent){
    printf("%s %d: linker faield\n",(*(parent->info_312)).sname,(*(parent->info_312)).sline);
    exit(13);
}

