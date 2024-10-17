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
char* basename();
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
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
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
struct sNode* parse_struct_initializer(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
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
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
// uniq global variable
// source head3
int gRightValueNum=0;

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










void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_64;
struct list$1sRightValueObjectph* o2_saved_65;
struct sRightValueObject* it2_68;
char* __dec_obj37;
void* __right_value116 = (void*)0;
char* __dec_obj38;
    if(gComeGC||gComeC) {
        return;
    }
    if(right_value->right_value_objects) {
        it_64=right_value->right_value_objects;
        for(        o2_saved_65=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it2_68=list$1sRightValueObjectph_begin((o2_saved_65));        !list$1sRightValueObjectph_end((o2_saved_65));        it2_68=list$1sRightValueObjectph_next((o2_saved_65))        ){
            if(it_64->mID==it2_68->mID) {
                it2_68->mStored=(_Bool)1;
                break;
            }
        }
        /*i*/come_call_finalizer3(o2_saved_65,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(right_value->c_value_without_right_value_objects) {
        __dec_obj37=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj38=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_66;
struct sRightValueObject* __result65__;
struct sRightValueObject* __result66__;
struct sRightValueObject* result_67;
struct sRightValueObject* __result67__;
result_66 = (void*)0;
result_67 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_66,0,sizeof(struct sRightValueObject*));
        __result65__ = gComeFunResultObject = __result_obj__ = result_66;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    self->it=self->head;
    if(self->it) {
        __result66__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    memset(&result_67,0,sizeof(struct sRightValueObject*));
    __result67__ = gComeFunResultObject = __result_obj__ = result_67;
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_69;
struct sRightValueObject* __result68__;
struct sRightValueObject* __result69__;
struct sRightValueObject* result_70;
struct sRightValueObject* __result70__;
result_69 = (void*)0;
result_70 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_69,0,sizeof(struct sRightValueObject*));
        __result68__ = gComeFunResultObject = __result_obj__ = result_69;
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result69__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result69__;
    }
    memset(&result_70,0,sizeof(struct sRightValueObject*));
    __result70__ = gComeFunResultObject = __result_obj__ = result_70;
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_71;
struct list_item$1sRightValueObjectph* prev_it_72;
    it_71=self->head;
    while(it_71!=((void*)0)) {
        prev_it_72=it_71;
        it_71=it_71->next;
        /*i*/come_call_finalizer3(prev_it_72,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj15;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj15=self->item;
            /* a*/come_call_finalizer3(__dec_obj15,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj16;
char* __dec_obj35;
char* __dec_obj36;
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj16=self->mType;
            /* a*/come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(self->mVarName==gComeFunResultObject) {
            __dec_obj35=self->mVarName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj36=self->mFunName;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
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
            __dec_obj17=self->mNoSolvedGenericsType;
            /* a*/come_call_finalizer3(__dec_obj17,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj19=self->mOriginalLoadVarType;
            /* a*/come_call_finalizer3(__dec_obj19,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value151 = (void*)0;
struct sType* result_85;
struct sType* __result89__;
struct sType* __result90__;
struct sClass* klass_104;
void* __right_value152 = (void*)0;
struct sType* result_type_105;
void* __right_value153 = (void*)0;
void* __right_value154 = (void*)0;
struct tuple1$1sTypeph* __dec_obj63;
struct list$1sTypeph* o2_saved_108;
struct sType* it_111;
void* __right_value155 = (void*)0;
struct sType* new_param_type_114;
int generics_number_118;
struct list$1sNodeph* array_num_119;
_Bool immutable__120;
int pointer_num_121;
_Bool heap_122;
_Bool guard__123;
_Bool no_heap_124;
_Bool no_calling_destructor_125;
_Bool null_value_126;
void* __right_value159 = (void*)0;
struct sType* __dec_obj67;
struct list$1sNodeph* __dec_obj68;
int generics_number_130;
struct sClass* klass2_131;
int generics_number2_132;
struct list$1sNodeph* array_num_133;
_Bool immutable__134;
int pointer_num_135;
_Bool heap_136;
_Bool guard__137;
_Bool no_heap_138;
_Bool no_calling_destructor_139;
_Bool null_value_140;
_Bool record__141;
_Bool multiple_types_142;
void* __right_value160 = (void*)0;
struct sType* __dec_obj69;
struct list$1sNodeph* __dec_obj70;
struct list$1sTypeph* o2_saved_143;
struct sType* it_144;
void* __right_value161 = (void*)0;
struct sType* type_145;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
char* new_name_146;
struct sType* __result102__;
    result_85=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(generics_type==((void*)0)) {
        __result89__ = gComeFunResultObject = __result_obj__ = result_85;
        /*i*/come_call_finalizer3(result_85,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    if(list$1sTypeph_length(generics_type->mGenericsTypes)==0) {
        __result90__ = gComeFunResultObject = __result_obj__ = result_85;
        /*i*/come_call_finalizer3(result_85,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result90__;
    }
    klass_104=type->mClass;
    if(string_operator_equals(klass_104->mName,"lambda")) {
        result_type_105=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType->v1,generics_type,info));
        __dec_obj63=result_85->mResultType;
        result_85->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 38, "tuple1$1sTypeph")),(struct sType*)come_increment_ref_count(result_type_105)));
        /* a*/come_call_finalizer3(__dec_obj63,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        list$1sTypeph_reset(result_85->mParamTypes);
        for(        o2_saved_108=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_111=list$1sTypeph_begin((o2_saved_108));        !list$1sTypeph_end((o2_saved_108));        it_111=list$1sTypeph_next((o2_saved_108))        ){
            new_param_type_114=(struct sType*)come_increment_ref_count(solve_generics(it_111,generics_type,info));
            list$1sTypeph_push_back(result_85->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_114));
            /*i*/come_call_finalizer3(new_param_type_114,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_108,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_105,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(klass_104->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
            generics_number_118=klass_104->mMethodGenericsNum;
            if(generics_number_118>=list$1sTypeph_length(info->method_generics_types)) {
                err_msg(info,"invalid method generics parametor number. %d %d",generics_number_118,list$1sTypeph_length(info->method_generics_types));
                exit(2);
            }
            array_num_119=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
            immutable__120=type->mImmutable;
            pointer_num_121=type->mPointerNum;
            heap_122=type->mHeap;
            guard__123=type->mGuardValue;
            no_heap_124=type->mNoHeap;
            no_calling_destructor_125=type->mNoCallingDestructor;
            null_value_126=type->mNullValue;
            __dec_obj67=result_85;
            result_85=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_118), "04heap.c", 67, 0))));
            /* a*/come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(heap_122) {
                result_85->mHeap=heap_122;
            }
            if(guard__123) {
                result_85->mGuardValue=guard__123;
            }
            if(no_heap_124) {
                result_85->mNoHeap=(_Bool)1;
                result_85->mHeap=(_Bool)0;
            }
            if(no_calling_destructor_125) {
                result_85->mNoCallingDestructor=(_Bool)1;
            }
            if(immutable__120) {
                result_85->mImmutable=immutable__120;
            }
            if(list$1sNodeph_length(array_num_119)>0) {
                __dec_obj68=result_85->mArrayNum;
                result_85->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_119);
                /* a*/come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(null_value_126) {
                result_85->mNullValue=null_value_126;
            }
            if(pointer_num_121>0) {
                result_85->mPointerNum+=pointer_num_121;
            }
            /*i*/come_call_finalizer3(array_num_119,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(klass_104->mGenerics) {
                generics_number_130=klass_104->mGenericsNum;
                if(generics_number_130>=list$1sTypeph_length(generics_type->mGenericsTypes)) {
                    err_msg(info,"invalid generics parametor number");
                    exit(2);
                }
                klass2_131=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_130), "04heap.c", 106, 1))->mClass;
                generics_number2_132=klass2_131->mGenericsNum;
                if(generics_number_130!=generics_number2_132) {
                    array_num_133=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
                    immutable__134=type->mImmutable;
                    pointer_num_135=type->mPointerNum;
                    heap_136=type->mHeap;
                    guard__137=type->mGuardValue;
                    no_heap_138=type->mNoHeap;
                    no_calling_destructor_139=type->mNoCallingDestructor;
                    null_value_140=type->mNullValue;
                    record__141=type->mRecord;
                    multiple_types_142=type->mMultipleTypes;
                    __dec_obj69=result_85;
                    result_85=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_130), "04heap.c", 124, 2))));
                    /* a*/come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
                    if(heap_136) {
                        result_85->mHeap=heap_136;
                    }
                    if(guard__137) {
                        result_85->mGuardValue=guard__137;
                    }
                    if(record__141) {
                        result_85->mRecord=record__141;
                    }
                    if(no_heap_138) {
                        result_85->mNoHeap=(_Bool)1;
                        result_85->mHeap=(_Bool)0;
                    }
                    if(multiple_types_142) {
                        result_85->mMultipleTypes=(_Bool)1;
                    }
                    if(no_calling_destructor_139) {
                        result_85->mNoCallingDestructor=(_Bool)1;
                    }
                    if(immutable__134) {
                        result_85->mImmutable=immutable__134;
                    }
                    if(list$1sNodeph_length(array_num_133)>0) {
                        __dec_obj70=result_85->mArrayNum;
                        result_85->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_133);
                        /* a*/come_call_finalizer3(__dec_obj70,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    if(null_value_140) {
                        result_85->mNullValue=null_value_140;
                    }
                    if(pointer_num_135>0) {
                        result_85->mPointerNum+=pointer_num_135;
                    }
                    /*i*/come_call_finalizer3(array_num_133,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                list$1sTypeph_reset(result_85->mGenericsTypes);
                for(                o2_saved_143=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_144=list$1sTypeph_begin((o2_saved_143));                !list$1sTypeph_end((o2_saved_143));                it_144=list$1sTypeph_next((o2_saved_143))                ){
                    type_145=(struct sType*)come_increment_ref_count(solve_generics(it_144,generics_type,info));
                    list$1sTypeph_push_back(result_85->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(type_145)));
                    /*i*/come_call_finalizer3(type_145,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                /*i*/come_call_finalizer3(o2_saved_143,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                if(!output_generics_struct(result_85,generics_type,info)) {
                    new_name_146=(char*)come_increment_ref_count(create_generics_name(type,info));
                    printf("output generics is failed(%s)",new_name_146);
                    exit(1);
                    new_name_146 = come_decrement_ref_count2(new_name_146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    __result102__ = gComeFunResultObject = __result_obj__ = result_85;
    /*i*/come_call_finalizer3(result_85,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result71__;
void* __right_value117 = (void*)0;
struct sType* result_86;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value122 = (void*)0;
char* __dec_obj43;
void* __right_value129 = (void*)0;
struct list$1sTypeph* __dec_obj47;
void* __right_value137 = (void*)0;
struct list$1sNodeph* __dec_obj51;
void* __right_value138 = (void*)0;
struct list$1sTypeph* __dec_obj52;
void* __right_value145 = (void*)0;
struct list$1charph* __dec_obj56;
void* __right_value146 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value147 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value148 = (void*)0;
struct sNode* __dec_obj59;
void* __right_value149 = (void*)0;
char* __dec_obj60;
void* __right_value150 = (void*)0;
char* __dec_obj61;
struct sType* __result88__;
    if(self==(void*)0) {
        __result71__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result71__;
    }
    result_86=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(self!=((void*)0)) {
        result_86->mClass=self->mClass;
    }
    if(self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj41=result_86->mNoSolvedGenericsType;
        result_86->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        /* a*/come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj42=result_86->mOriginalLoadVarType;
        result_86->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        /* a*/come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj43=result_86->mGenericsName;
        result_86->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_86->mGenericsTypes;
        result_86->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        /* a*/come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj51=result_86->mArrayNum;
        result_86->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        /* a*/come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj52=result_86->mParamTypes;
        result_86->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        /* a*/come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj56=result_86->mParamNames;
        result_86->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        /* a*/come_call_finalizer3(__dec_obj56,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj57=result_86->mResultType;
        result_86->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        /* a*/come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mVarArgs=self->mVarArgs;
    }
    if(self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj58=result_86->mAlignas;
        result_86->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_86->mUnsigned=self->mUnsigned;
    }
    if(self!=((void*)0)) {
        result_86->mShort=self->mShort;
    }
    if(self!=((void*)0)) {
        result_86->mLong=self->mLong;
    }
    if(self!=((void*)0)) {
        result_86->mLongLong=self->mLongLong;
    }
    if(self!=((void*)0)) {
        result_86->mConstant=self->mConstant;
    }
    if(self!=((void*)0)) {
        result_86->mRegister=self->mRegister;
    }
    if(self!=((void*)0)) {
        result_86->mVolatile=self->mVolatile;
    }
    if(self!=((void*)0)) {
        result_86->mStatic=self->mStatic;
    }
    if(self!=((void*)0)) {
        result_86->mUniq=self->mUniq;
    }
    if(self!=((void*)0)) {
        result_86->mRecord=self->mRecord;
    }
    if(self!=((void*)0)) {
        result_86->mExtern=self->mExtern;
    }
    if(self!=((void*)0)) {
        result_86->mRestrict=self->mRestrict;
    }
    if(self!=((void*)0)) {
        result_86->mImmutable=self->mImmutable;
    }
    if(self!=((void*)0)) {
        result_86->mHeap=self->mHeap;
    }
    if(self!=((void*)0)) {
        result_86->mDummyHeap=self->mDummyHeap;
    }
    if(self!=((void*)0)) {
        result_86->mDelegate=self->mDelegate;
    }
    if(self!=((void*)0)) {
        result_86->mShare=self->mShare;
    }
    if(self!=((void*)0)) {
        result_86->mClone=self->mClone;
    }
    if(self!=((void*)0)) {
        result_86->mNoHeap=self->mNoHeap;
    }
    if(self!=((void*)0)) {
        result_86->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(self!=((void*)0)) {
        result_86->mRefference=self->mRefference;
    }
    if(self!=((void*)0)) {
        result_86->mException=self->mException;
    }
    if(self!=((void*)0)) {
        result_86->mPointerNum=self->mPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(self!=((void*)0)) {
        result_86->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj59=result_86->mSizeNum;
        result_86->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    }
    if(self!=((void*)0)) {
        result_86->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(self!=((void*)0)) {
        result_86->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj60=result_86->mOriginalTypeName;
        result_86->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(self!=((void*)0)) {
        result_86->mFunctionParam=self->mFunctionParam;
    }
    if(self!=((void*)0)) {
        result_86->mAllocaValue=self->mAllocaValue;
    }
    if(self!=((void*)0)) {
        result_86->mGenericsStruct=self->mGenericsStruct;
    }
    if(self!=((void*)0)) {
        result_86->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(self!=((void*)0)) {
        result_86->mComeMemCore=self->mComeMemCore;
    }
    if(self!=((void*)0)) {
        result_86->mInline=self->mInline;
    }
    if(self!=((void*)0)) {
        result_86->mNullValue=self->mNullValue;
    }
    if(self!=((void*)0)) {
        result_86->mGuardValue=self->mGuardValue;
    }
    if(self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj61=result_86->mAsmName;
        result_86->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(self!=((void*)0)) {
        result_86->mArrayPointerType=self->mArrayPointerType;
    }
    if(self!=((void*)0)) {
        result_86->mLambdaArray=self->mLambdaArray;
    }
    if(self!=((void*)0)) {
        result_86->mNoNumberArray=self->mNoNumberArray;
    }
    if(self!=((void*)0)) {
        result_86->mTypedef=self->mTypedef;
    }
    if(self!=((void*)0)) {
        result_86->mMultipleTypes=self->mMultipleTypes;
    }
    if(self!=((void*)0)) {
        result_86->mOriginIsArray=self->mOriginIsArray;
    }
    __result88__ = gComeFunResultObject = __result_obj__ = result_86;
    /*i*/come_call_finalizer3(result_86,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result72__;
void* __right_value118 = (void*)0;
struct tuple1$1sTypeph* result_87;
void* __right_value119 = (void*)0;
struct sType* __dec_obj39;
struct tuple1$1sTypeph* __result73__;
    if(self==(void*)0) {
        __result72__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_87=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj39=result_87->v1;
        result_87->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        /* a*/come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result73__ = gComeFunResultObject = __result_obj__ = result_87;
    /*i*/come_call_finalizer3(result_87,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
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
struct list$1sTypeph* __result74__;
void* __right_value123 = (void*)0;
void* __right_value124 = (void*)0;
struct list$1sTypeph* result_88;
struct list_item$1sTypeph* it_89;
void* __right_value128 = (void*)0;
struct list$1sTypeph* __result77__;
    if(self==((void*)0)) {
        __result74__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result74__;
    }
    result_88=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 137, "list$1sTypeph"))));
    it_89=self->head;
    while(it_89!=((void*)0)) {
        list$1sTypeph_add(result_88,(struct sType*)come_increment_ref_count(sType_clone(it_89->item)));
        it_89=it_89->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_88;
    /*i*/come_call_finalizer3(result_88,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result75__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct list_item$1sTypeph* litem_90;
struct sType* __dec_obj44;
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_91;
struct sType* __dec_obj45;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_92;
struct sType* __dec_obj46;
struct list$1sTypeph* __result76__;
    if(self->len==0) {
        litem_90=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value125=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 151, "list_item$1sTypeph"))));
        litem_90->prev=((void*)0);
        litem_90->next=((void*)0);
        __dec_obj44=litem_90->item;
        litem_90->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_90;
        self->head=litem_90;
    }
    else {
        if(self->len==1) {
            litem_91=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 161, "list_item$1sTypeph"))));
            litem_91->prev=self->head;
            litem_91->next=((void*)0);
            __dec_obj45=litem_91->item;
            litem_91->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_91;
            self->head->next=litem_91;
        }
        else {
            litem_92=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 171, "list_item$1sTypeph"))));
            litem_92->prev=self->tail;
            litem_92->next=((void*)0);
            __dec_obj46=litem_92->item;
            litem_92->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_92;
            self->tail=litem_92;
        }
    }
    self->len++;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result78__;
void* __right_value130 = (void*)0;
void* __right_value131 = (void*)0;
struct list$1sNodeph* result_93;
struct list_item$1sNodeph* it_94;
void* __right_value136 = (void*)0;
struct list$1sNodeph* __result83__;
    if(self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_93=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 137, "list$1sNodeph"))));
    it_94=self->head;
    while(it_94!=((void*)0)) {
        list$1sNodeph_add(result_93,(struct sNode*)come_increment_ref_count(sNode_clone(it_94->item)));
        it_94=it_94->next;
    }
    __result83__ = gComeFunResultObject = __result_obj__ = result_93;
    /*i*/come_call_finalizer3(result_93,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value132 = (void*)0;
struct list_item$1sNodeph* litem_95;
struct sNode* __dec_obj48;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_96;
struct sNode* __dec_obj49;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_97;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result80__;
    if(self->len==0) {
        litem_95=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value132=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 151, "list_item$1sNodeph"))));
        litem_95->prev=((void*)0);
        litem_95->next=((void*)0);
        __dec_obj48=litem_95->item;
        litem_95->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); }
        self->tail=litem_95;
        self->head=litem_95;
    }
    else {
        if(self->len==1) {
            litem_96=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 161, "list_item$1sNodeph"))));
            litem_96->prev=self->head;
            litem_96->next=((void*)0);
            __dec_obj49=litem_96->item;
            litem_96->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail=litem_96;
            self->head->next=litem_96;
        }
        else {
            litem_97=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 171, "list_item$1sNodeph"))));
            litem_97->prev=self->tail;
            litem_97->next=((void*)0);
            __dec_obj50=litem_97->item;
            litem_97->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); }
            self->tail->next=litem_97;
            self->tail=litem_97;
        }
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result81__;
void* __right_value135 = (void*)0;
struct sNode* result_98;
struct sNode* __result82__;
    if(self==(void*)0) {
        __result81__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result81__;
    }
    result_98=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(self!=((void*)0)&&self->clone!=((void*)0)) {
        result_98->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(self!=((void*)0)) {
        result_98->finalize=self->finalize;
    }
    if(self!=((void*)0)) {
        result_98->clone=self->clone;
    }
    if(self!=((void*)0)) {
        result_98->compile=self->compile;
    }
    if(self!=((void*)0)) {
        result_98->sline=self->sline;
    }
    if(self!=((void*)0)) {
        result_98->sname=self->sname;
    }
    if(self!=((void*)0)) {
        result_98->terminated=self->terminated;
    }
    if(self!=((void*)0)) {
        result_98->kind=self->kind;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_98;
    if(result_98) { result_98 = come_decrement_ref_count2(result_98, ((struct sNode*)result_98)->finalize, ((struct sNode*)result_98)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result84__;
void* __right_value139 = (void*)0;
void* __right_value140 = (void*)0;
struct list$1charph* result_99;
struct list_item$1charph* it_100;
void* __right_value144 = (void*)0;
struct list$1charph* __result87__;
    if(self==((void*)0)) {
        __result84__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result84__;
    }
    result_99=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 137, "list$1charph"))));
    it_100=self->head;
    while(it_100!=((void*)0)) {
        list$1charph_add(result_99,(char*)come_increment_ref_count(string_clone(it_100->item)));
        it_100=it_100->next;
    }
    __result87__ = gComeFunResultObject = __result_obj__ = result_99;
    /*i*/come_call_finalizer3(result_99,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value141 = (void*)0;
struct list_item$1charph* litem_101;
char* __dec_obj53;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_102;
char* __dec_obj54;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_103;
char* __dec_obj55;
struct list$1charph* __result86__;
    if(self->len==0) {
        litem_101=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value141=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 151, "list_item$1charph"))));
        litem_101->prev=((void*)0);
        litem_101->next=((void*)0);
        __dec_obj53=litem_101->item;
        litem_101->item=(char*)come_increment_ref_count(item);
        __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_101;
        self->head=litem_101;
    }
    else {
        if(self->len==1) {
            litem_102=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 161, "list_item$1charph"))));
            litem_102->prev=self->head;
            litem_102->next=((void*)0);
            __dec_obj54=litem_102->item;
            litem_102->item=(char*)come_increment_ref_count(item);
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail=litem_102;
            self->head->next=litem_102;
        }
        else {
            litem_103=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 171, "list_item$1charph"))));
            litem_103->prev=self->tail;
            litem_103->next=((void*)0);
            __dec_obj55=litem_103->item;
            litem_103->item=(char*)come_increment_ref_count(item);
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
            self->tail->next=litem_103;
            self->tail=litem_103;
        }
    }
    self->len++;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj62;
struct tuple1$1sTypeph* __result91__;
    __dec_obj62=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_106;
struct list_item$1sTypeph* prev_it_107;
struct list$1sTypeph* __result92__;
    it_106=self->head;
    while(it_106!=((void*)0)) {
        prev_it_107=it_106;
        it_106=it_106->next;
        /*i*/come_call_finalizer3(prev_it_107,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_109;
struct sType* __result93__;
struct sType* __result94__;
struct sType* result_110;
struct sType* __result95__;
result_109 = (void*)0;
result_110 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_109,0,sizeof(struct sType*));
        __result93__ = gComeFunResultObject = __result_obj__ = result_109;
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    self->it=self->head;
    if(self->it) {
        __result94__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    memset(&result_110,0,sizeof(struct sType*));
    __result95__ = gComeFunResultObject = __result_obj__ = result_110;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_112;
struct sType* __result96__;
struct sType* __result97__;
struct sType* result_113;
struct sType* __result98__;
result_112 = (void*)0;
result_113 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_112,0,sizeof(struct sType*));
        __result96__ = gComeFunResultObject = __result_obj__ = result_112;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result97__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    memset(&result_113,0,sizeof(struct sType*));
    __result98__ = gComeFunResultObject = __result_obj__ = result_113;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value156 = (void*)0;
struct list_item$1sTypeph* litem_115;
struct sType* __dec_obj64;
void* __right_value157 = (void*)0;
struct list_item$1sTypeph* litem_116;
struct sType* __dec_obj65;
void* __right_value158 = (void*)0;
struct list_item$1sTypeph* litem_117;
struct sType* __dec_obj66;
struct list$1sTypeph* __result99__;
    if(self->len==0) {
        litem_115=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value156=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 221, "list_item$1sTypeph"))));
        litem_115->prev=((void*)0);
        litem_115->next=((void*)0);
        __dec_obj64=litem_115->item;
        litem_115->item=(struct sType*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_115;
        self->head=litem_115;
    }
    else {
        if(self->len==1) {
            litem_116=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value157=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 231, "list_item$1sTypeph"))));
            litem_116->prev=self->head;
            litem_116->next=((void*)0);
            __dec_obj65=litem_116->item;
            litem_116->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_116;
            self->head->next=litem_116;
        }
        else {
            litem_117=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value158=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 241, "list_item$1sTypeph"))));
            litem_117->prev=self->tail;
            litem_117->next=((void*)0);
            __dec_obj66=litem_117->item;
            litem_117->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_117;
            self->tail=litem_117;
        }
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_127;
int i_128;
struct sType* __result100__;
struct sType* default_value_129;
struct sType* __result101__;
default_value_129 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    it_127=self->head;
    i_128=0;
    while(it_127!=((void*)0)) {
        if(position==i_128) {
            __result100__ = gComeFunResultObject = __result_obj__ = it_127->item;
            gComeFunResultObject = (void*)0;
            return __result100__;
        }
        it_127=it_127->next;
        i_128++;
    }
    memset(&default_value_129,0,sizeof(struct sType*));
    __result101__ = gComeFunResultObject = __result_obj__ = default_value_129;
    /*i*/come_call_finalizer3(default_value_129,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value164 = (void*)0;
struct sType* result_147;
struct sClass* klass_148;
int generics_number_149;
struct list$1sNodeph* array_num_150;
_Bool immutable__151;
int pointer_num_152;
_Bool heap_153;
_Bool guard__154;
_Bool no_heap_155;
_Bool no_calling_destructor_156;
_Bool null_value_157;
void* __right_value165 = (void*)0;
struct sType* __dec_obj71;
struct list$1sNodeph* __dec_obj72;
int i_158;
struct list$1sTypeph* o2_saved_159;
struct sType* it_160;
void* __right_value166 = (void*)0;
struct list$1sTypeph* o2_saved_166;
struct sType* it_167;
void* __right_value167 = (void*)0;
void* __right_value168 = (void*)0;
struct sType* __dec_obj74;
struct sType* __result106__;
    result_147=(struct sType*)come_increment_ref_count(sType_clone(type));
    klass_148=type->mClass;
    if(klass_148->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_149=klass_148->mMethodGenericsNum;
        if(generics_number_149>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_149,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_150=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__151=type->mImmutable;
        pointer_num_152=type->mPointerNum;
        heap_153=type->mHeap;
        guard__154=type->mGuardValue;
        no_heap_155=type->mNoHeap;
        no_calling_destructor_156=type->mNoCallingDestructor;
        null_value_157=type->mNullValue;
        __dec_obj71=result_147;
        result_147=(struct sType*)come_increment_ref_count(sType_clone(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_149), "04heap.c", 204, 3))));
        /* a*/come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(heap_153) {
            result_147->mHeap=heap_153||result_147->mHeap;
        }
        if(guard__154) {
            result_147->mGuardValue=guard__154||result_147->mGuardValue;
        }
        if(no_heap_155) {
            result_147->mNoHeap=(_Bool)1;
            result_147->mHeap=(_Bool)0;
        }
        if(no_calling_destructor_156) {
            result_147->mNoCallingDestructor=(_Bool)1;
        }
        if(immutable__151) {
            result_147->mImmutable=immutable__151;
        }
        if(list$1sNodeph_length(array_num_150)>0) {
            __dec_obj72=result_147->mArrayNum;
            result_147->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_150);
            /* a*/come_call_finalizer3(__dec_obj72,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(null_value_157) {
            result_147->mNullValue=null_value_157;
        }
        if(pointer_num_152>0) {
            result_147->mPointerNum+=pointer_num_152;
        }
        /*i*/come_call_finalizer3(array_num_150,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_158=0;
    for(    o2_saved_159=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_160=list$1sTypeph_begin((o2_saved_159));    !list$1sTypeph_end((o2_saved_159));    it_160=list$1sTypeph_next((o2_saved_159))    ){
        list$1sTypephp_operator_store_element(result_147->mGenericsTypes,i_158,(struct sType*)come_increment_ref_count(solve_method_generics(it_160,info)));
        i_158++;
    }
    /*i*/come_call_finalizer3(o2_saved_159,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    i_158=0;
    for(    o2_saved_166=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_167=list$1sTypeph_begin((o2_saved_166));    !list$1sTypeph_end((o2_saved_166));    it_167=list$1sTypeph_next((o2_saved_166))    ){
        list$1sTypephp_operator_store_element(result_147->mParamTypes,i_158,(struct sType*)come_increment_ref_count(solve_method_generics(it_167,info)));
        i_158++;
    }
    /*i*/come_call_finalizer3(o2_saved_166,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(type->mResultType) {
        __dec_obj74=result_147->mResultType->v1;
        result_147->mResultType->v1=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType->v1,info));
        /* a*/come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = result_147;
    /*i*/come_call_finalizer3(result_147,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct sType* list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
struct sType* __result105__;
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    __result105__ = gComeFunResultObject = __result_obj__ = item;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_161;
int i_162;
struct sType* default_value_163;
struct list$1sTypeph* __result103__;
struct list_item$1sTypeph* it_164;
int i_165;
struct sType* __dec_obj73;
struct list$1sTypeph* __result104__;
default_value_163 = (void*)0;
    if(position<0) {
        position+=self->len;
    }
    if(position<0) {
        position=0;
    }
    if(self->len==0||position>=self->len) {
        len_161=self->len;
        for(        i_162=0;        i_162<position-len_161;        i_162++        ){
            memset(&default_value_163,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_163));
            /*i*/come_call_finalizer3(default_value_163,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result103__ = gComeFunResultObject = __result_obj__ = self;
        /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    it_164=self->head;
    i_165=0;
    while(it_164!=((void*)0)) {
        if(position==i_165) {
            __dec_obj73=it_164->item;
            it_164->item=(struct sType*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_164=it_164->next;
        i_165++;
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value169 = (void*)0;
struct sType* result_168;
void* __right_value170 = (void*)0;
struct sType* __dec_obj75;
struct sType* __result107__;
    result_168=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(generics_type) {
        __dec_obj75=result_168;
        result_168=(struct sType*)come_increment_ref_count(solve_generics(result_168,generics_type,info));
        /* a*/come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = result_168;
    /*i*/come_call_finalizer3(result_168,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value171 = (void*)0;
char* __result108__;
void* __right_value172 = (void*)0;
char* __result109__;
void* __right_value173 = (void*)0;
struct sRightValueObject* new_value_169;
struct sType* __dec_obj76;
void* __right_value174 = (void*)0;
char* __dec_obj77;
char* __dec_obj78;
void* __right_value178 = (void*)0;
char* buf_173;
void* __right_value179 = (void*)0;
void* __right_value180 = (void*)0;
char* __result111__;
    if(gComeGC||gComeC) {
        __result108__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value171=__builtin_string(obj)));
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result108__;
    }
    if(info->no_output_come_code) {
        __result109__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value172=__builtin_string("")));
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result109__;
    }
    new_value_169=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 274, "sRightValueObject"));
    __dec_obj76=new_value_169->mType;
    new_value_169->mType=(struct sType*)come_increment_ref_count(type);
    /* a*/come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_169->mFreed=(_Bool)0;
    new_value_169->mID=gRightValueNum;
    __dec_obj77=new_value_169->mVarName;
    new_value_169->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj78=new_value_169->mFunName;
    new_value_169->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_169->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_169));
    buf_173=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_173);
    __result111__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=xsprintf("((%s)(%s=%s))",((char*)(__right_value179=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_169->mVarName,obj)));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(new_value_169,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_173 = come_decrement_ref_count2(buf_173, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__=(void*)0;
void* __right_value175 = (void*)0;
struct list_item$1sRightValueObjectph* litem_170;
struct sRightValueObject* __dec_obj79;
void* __right_value176 = (void*)0;
struct list_item$1sRightValueObjectph* litem_171;
struct sRightValueObject* __dec_obj80;
void* __right_value177 = (void*)0;
struct list_item$1sRightValueObjectph* litem_172;
struct sRightValueObject* __dec_obj81;
struct list$1sRightValueObjectph* __result110__;
    if(self->len==0) {
        litem_170=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value175=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 221, "list_item$1sRightValueObjectph"))));
        litem_170->prev=((void*)0);
        litem_170->next=((void*)0);
        __dec_obj79=litem_170->item;
        litem_170->item=(struct sRightValueObject*)come_increment_ref_count(item);
        /* a*/come_call_finalizer3(__dec_obj79,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_170;
        self->head=litem_170;
    }
    else {
        if(self->len==1) {
            litem_171=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value176=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 231, "list_item$1sRightValueObjectph"))));
            litem_171->prev=self->head;
            litem_171->next=((void*)0);
            __dec_obj80=litem_171->item;
            litem_171->item=(struct sRightValueObject*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj80,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail=litem_171;
            self->head->next=litem_171;
        }
        else {
            litem_172=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value177=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 241, "list_item$1sRightValueObjectph"))));
            litem_172->prev=self->tail;
            litem_172->next=((void*)0);
            __dec_obj81=litem_172->item;
            litem_172->item=(struct sRightValueObject*)come_increment_ref_count(item);
            /* a*/come_call_finalizer3(__dec_obj81,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
            self->tail->next=litem_172;
            self->tail=litem_172;
        }
    }
    self->len++;
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value181 = (void*)0;
struct sRightValueObject* new_value_174;
struct sType* __dec_obj82;
void* __right_value182 = (void*)0;
char* __dec_obj83;
char* __dec_obj84;
void* __right_value183 = (void*)0;
char* buf_175;
void* __right_value184 = (void*)0;
char* __dec_obj85;
void* __right_value185 = (void*)0;
void* __right_value186 = (void*)0;
char* __dec_obj86;
    if(gComeGC||gComeC) {
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(info->no_output_come_code) {
        /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_174=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 298, "sRightValueObject"));
    __dec_obj82=new_value_174->mType;
    new_value_174->mType=(struct sType*)come_increment_ref_count(type);
    /* a*/come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_174->mFreed=(_Bool)0;
    new_value_174->mID=gRightValueNum;
    __dec_obj83=new_value_174->mVarName;
    new_value_174->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj84=new_value_174->mFunName;
    new_value_174->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_174->mBlockLevel=info->block_level;
    new_value_174->mDecrementRefCount=decrement_ref_count;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_174));
    buf_175=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_175);
    __dec_obj85=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(come_value->c_value));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj86=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value185=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_174->mVarName,come_value->c_value));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value185 = come_decrement_ref_count2(__right_value185, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value->right_value_objects=new_value_174;
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(new_value_174,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_175 = come_decrement_ref_count2(buf_175, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_176;
struct list$1sRightValueObjectph* o2_saved_177;
struct sRightValueObject* it_178;
    if(gComeGC||gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    i_176=0;
    for(    o2_saved_177=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_178=list$1sRightValueObjectph_begin((o2_saved_177));    !list$1sRightValueObjectph_end((o2_saved_177));    it_178=list$1sRightValueObjectph_next((o2_saved_177))    ){
        if(it_178->mID==right_value_num) {
            break;
        }
        i_176++;
    }
    /*i*/come_call_finalizer3(o2_saved_177,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_176,i_176+1);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_179;
struct list$1sRightValueObjectph* __result112__;
struct list_item$1sRightValueObjectph* it_182;
int i_183;
struct list_item$1sRightValueObjectph* prev_it_184;
struct list_item$1sRightValueObjectph* it_185;
int i_186;
struct list_item$1sRightValueObjectph* prev_it_187;
struct list_item$1sRightValueObjectph* it_188;
struct list_item$1sRightValueObjectph* head_prev_it_189;
struct list_item$1sRightValueObjectph* tail_it_190;
int i_191;
struct list_item$1sRightValueObjectph* prev_it_192;
struct list$1sRightValueObjectph* __result114__;
    if(head<0) {
        head+=self->len;
    }
    if(tail<0) {
        tail+=self->len+1;
    }
    if(head>tail) {
        tmp_179=tail;
        tail=head;
        head=tmp_179;
    }
    if(head<0) {
        head=0;
    }
    if(tail>self->len) {
        tail=self->len;
    }
    if(head==tail) {
        __result112__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result112__;
    }
    if(head==0&&tail==self->len) {
        list$1sRightValueObjectph_reset(self);
    }
    else {
        if(head==0) {
            it_182=self->head;
            i_183=0;
            while(it_182!=((void*)0)) {
                if(i_183<tail) {
                    prev_it_184=it_182;
                    it_182=it_182->next;
                    i_183++;
                    /*i*/come_call_finalizer3(prev_it_184,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                    self->len--;
                }
                else {
                    if(i_183==tail) {
                        self->head=it_182;
                        self->head->prev=((void*)0);
                        break;
                    }
                    else {
                        it_182=it_182->next;
                        i_183++;
                    }
                }
            }
        }
        else {
            if(tail==self->len) {
                it_185=self->head;
                i_186=0;
                while(it_185!=((void*)0)) {
                    if(i_186==head) {
                        self->tail=it_185->prev;
                        self->tail->next=((void*)0);
                    }
                    if(i_186>=head) {
                        prev_it_187=it_185;
                        it_185=it_185->next;
                        i_186++;
                        /*i*/come_call_finalizer3(prev_it_187,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_185=it_185->next;
                        i_186++;
                    }
                }
            }
            else {
                it_188=self->head;
                head_prev_it_189=((void*)0);
                tail_it_190=((void*)0);
                i_191=0;
                while(it_188!=((void*)0)) {
                    if(i_191==head) {
                        head_prev_it_189=it_188->prev;
                    }
                    if(i_191==tail) {
                        tail_it_190=it_188;
                    }
                    if(i_191>=head&&i_191<tail) {
                        prev_it_192=it_188;
                        it_188=it_188->next;
                        i_191++;
                        /*i*/come_call_finalizer3(prev_it_192,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                        self->len--;
                    }
                    else {
                        it_188=it_188->next;
                        i_191++;
                    }
                }
                if(head_prev_it_189!=((void*)0)) {
                    head_prev_it_189->next=tail_it_190;
                }
                if(tail_it_190!=((void*)0)) {
                    tail_it_190->prev=head_prev_it_189;
                }
            }
        }
    }
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_180;
struct list_item$1sRightValueObjectph* prev_it_181;
struct list$1sRightValueObjectph* __result113__;
    it_180=self->head;
    while(it_180!=((void*)0)) {
        prev_it_181=it_180;
        it_180=it_180->next;
        /*i*/come_call_finalizer3(prev_it_181,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result113__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value187 = (void*)0;
char* __result115__;
void* __right_value188 = (void*)0;
char* __result116__;
struct sClass* klass_193;
void* __right_value189 = (void*)0;
char* type_name_194;
void* __right_value190 = (void*)0;
char* __result117__;
    if(gComeGC||gComeC) {
        __result115__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value187=__builtin_string(obj)));
        __right_value187 = come_decrement_ref_count2(__right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result115__;
    }
    if(info->no_output_come_code) {
        __result116__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value188=__builtin_string(obj)));
        __right_value188 = come_decrement_ref_count2(__right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result116__;
    }
    klass_193=type->mClass;
    type_name_194=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result117__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value190=xsprintf("(%s)come_increment_ref_count(%s)",type_name_194,obj)));
    type_name_194 = come_decrement_ref_count2(type_name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value190 = come_decrement_ref_count2(__right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUEph* stack_saved_195;
struct list$1sRightValueObjectph* right_value_objects_196;
struct sClass* klass_197;
void* __right_value191 = (void*)0;
char* name_199;
void* __right_value192 = (void*)0;
_Bool no_decrement_200;
void* __right_value193 = (void*)0;
char* c_value_201;
struct sClass* klass_202;
char* class_name_203;
char* fun_name_204;
void* __right_value194 = (void*)0;
struct sType* type2_205;
void* __right_value195 = (void*)0;
char* fun_name2_206;
struct sFun* finalizer_207;
void* __right_value196 = (void*)0;
char* none_generics_name_211;
void* __right_value197 = (void*)0;
char* generics_fun_name_212;
struct sGenericsFun* generics_fun_213;
int i_217;
void* __right_value198 = (void*)0;
char* new_fun_name_218;
void* __right_value199 = (void*)0;
char* __dec_obj112;
void* __right_value200 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_219;
char* new_fun_name_220;
char* __dec_obj114;
void* __right_value201 = (void*)0;
char* type_name_221;
void* __right_value202 = (void*)0;
void* __right_value203 = (void*)0;
char* type_name_222;
void* __right_value204 = (void*)0;
void* __right_value205 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj115;
struct list$1CVALUEph* __dec_obj116;
memset(&i_217, 0, sizeof(int));
    if(gComeGC||gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    stack_saved_195=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_196=info->right_value_objects;
    klass_197=type->mClass;
    static int dec_num_198=0;
    name_199=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_198));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value192=make_define_var(type,name_199,(_Bool)0,info))));
    __right_value192 = come_decrement_ref_count2(__right_value192, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code(info,"%s=%s;\n",name_199,obj);
    obj=name_199;
    no_decrement_200=(_Bool)0;
    if(type->mPointerNum>0) {
        c_value_201=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_202=type->mClass;
        class_name_203=klass_202->mName;
        fun_name_204="finalize";
        type2_205=(struct sType*)come_increment_ref_count(sType_clone(type));
        type2_205->mHeap=(_Bool)0;
        fun_name2_206=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_204,info,(_Bool)1));
        if(type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_207=((void*)0);
        if(list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_207=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_206);
            if(finalizer_207==((void*)0)) {
                none_generics_name_211=(char*)come_increment_ref_count(get_none_generics_name(type2_205->mClass->mName));
                generics_fun_name_212=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_211,fun_name_204));
                generics_fun_213=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_212);
                if(generics_fun_213) {
                    if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_206),generics_fun_213,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_207=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_206);
                }
                none_generics_name_211 = come_decrement_ref_count2(none_generics_name_211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_212 = come_decrement_ref_count2(generics_fun_name_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_217=128-1;            i_217>=1;            i_217--            ){
                new_fun_name_218=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_206,i_217));
                finalizer_207=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_218);
                if(finalizer_207) {
                    __dec_obj112=fun_name2_206;
                    fun_name2_206=(char*)come_increment_ref_count(__builtin_string(new_fun_name_218));
                    __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_218 = come_decrement_ref_count2(new_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_218 = come_decrement_ref_count2(new_fun_name_218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_207==((void*)0)) {
                finalizer_207=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_206);
            }
        }
        if(finalizer_207==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value200=create_finalizer_automatically(type,fun_name_204,info)));
            fun_219=multiple_assign_var1->v1;
            new_fun_name_220=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            /*g*/come_call_finalizer3(__right_value200,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj114=fun_name2_206;
            fun_name2_206=(char*)come_increment_ref_count(new_fun_name_220);
            __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_207=fun_219;
            new_fun_name_220 = come_decrement_ref_count2(new_fun_name_220, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(finalizer_207!=((void*)0)) {
            if(klass_202->mProtocol&&type->mPointerNum==1) {
                type_name_221=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(c_value_201) {
                    add_come_last_code2(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_206,c_value_201,type_name_221,c_value_201,type_name_221,c_value_201,type->mAllocaValue,no_decrement_200,no_free,force_delete_);
                }
                type_name_221 = come_decrement_ref_count2(type_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(c_value_201) {
                    add_come_last_code2(info,((char*)(__right_value202=xsprintf("/* a*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_201,fun_name2_206,type->mAllocaValue,no_decrement_200,no_free,force_delete_))));
                    __right_value202 = come_decrement_ref_count2(__right_value202, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(klass_202->mProtocol&&type->mPointerNum==1) {
                type_name_222=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                add_come_last_code2(info,((char*)(__right_value204=xsprintf("if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0, (void*)0); }\n",name_199,name_199,name_199,type_name_222,name_199,type_name_222,name_199))));
                __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                type_name_222 = come_decrement_ref_count2(type_name_222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                add_come_last_code2(info,((char*)(__right_value205=xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0);\n",name_199,name_199))));
                __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
        }
        c_value_201 = come_decrement_ref_count2(c_value_201, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_205,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_206 = come_decrement_ref_count2(fun_name2_206, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj115=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_196);
    /* a*/come_call_finalizer3(__dec_obj115,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_195);
    /* a*/come_call_finalizer3(__dec_obj116,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_195,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_199 = come_decrement_ref_count2(name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_208;
unsigned int hash_209;
unsigned int it_210;
struct sFun* __result118__;
struct sFun* __result119__;
struct sFun* __result120__;
struct sFun* __result121__;
default_value_208 = (void*)0;
    memset(&default_value_208,0,sizeof(struct sFun*));
    hash_209=string_get_hash_key(((char*)key))%self->size;
    it_210=hash_209;
    while((_Bool)1) {
        if(self->item_existance[it_210]) {
            if(string_equals(self->keys[it_210],key)) {
                __result118__ = gComeFunResultObject = __result_obj__ = self->items[it_210];
                /*i*/come_call_finalizer3(default_value_208,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result118__;
            }
            it_210++;
            if(it_210>=self->size) {
                it_210=0;
            }
            else {
                if(it_210==hash_209) {
                    __result119__ = gComeFunResultObject = __result_obj__ = default_value_208;
                    /*i*/come_call_finalizer3(default_value_208,sFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result119__;
                }
            }
        }
        else {
            __result120__ = gComeFunResultObject = __result_obj__ = default_value_208;
            /*i*/come_call_finalizer3(default_value_208,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result120__;
        }
    }
    __result121__ = gComeFunResultObject = __result_obj__ = default_value_208;
    /*i*/come_call_finalizer3(default_value_208,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj87;
struct sType* __dec_obj88;
struct list$1sTypeph* __dec_obj89;
struct list$1charph* __dec_obj90;
struct list$1charph* __dec_obj91;
struct sType* __dec_obj92;
struct sBlock* __dec_obj93;
struct buffer* __dec_obj96;
struct buffer* __dec_obj97;
struct buffer* __dec_obj98;
struct buffer* __dec_obj99;
char* __dec_obj100;
char* __dec_obj101;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj87=self->mName;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj88=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj89=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj89,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj90=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj91=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(self->mLambdaType==gComeFunResultObject) {
            __dec_obj92=self->mLambdaType;
            /* a*/come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj93=self->mBlock;
            /* a*/come_call_finalizer3(__dec_obj93,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(self->mSource==gComeFunResultObject) {
            __dec_obj96=self->mSource;
            /* a*/come_call_finalizer3(__dec_obj96,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(self->mSourceHead==gComeFunResultObject) {
            __dec_obj97=self->mSourceHead;
            /* a*/come_call_finalizer3(__dec_obj97,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(self->mSourceHead2==gComeFunResultObject) {
            __dec_obj98=self->mSourceHead2;
            /* a*/come_call_finalizer3(__dec_obj98,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(self->mSourceDefer==gComeFunResultObject) {
            __dec_obj99=self->mSourceDefer;
            /* a*/come_call_finalizer3(__dec_obj99,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(self->mComeHeader==gComeFunResultObject) {
            __dec_obj100=self->mComeHeader;
            __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(self->mDeclareSName==gComeFunResultObject) {
            __dec_obj101=self->mDeclareSName;
            __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj94;
struct sVarTable* __dec_obj95;
    if(self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(self->mNodes==gComeFunResultObject) {
            __dec_obj94=self->mNodes;
            /* a*/come_call_finalizer3(__dec_obj94,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(self->mVarTable==gComeFunResultObject) {
            __dec_obj95=self->mVarTable;
            /* a*/come_call_finalizer3(__dec_obj95,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_214;
unsigned int hash_215;
unsigned int it_216;
struct sGenericsFun* __result122__;
struct sGenericsFun* __result123__;
struct sGenericsFun* __result124__;
struct sGenericsFun* __result125__;
default_value_214 = (void*)0;
    memset(&default_value_214,0,sizeof(struct sGenericsFun*));
    hash_215=string_get_hash_key(((char*)key))%self->size;
    it_216=hash_215;
    while((_Bool)1) {
        if(self->item_existance[it_216]) {
            if(string_equals(self->keys[it_216],key)) {
                __result122__ = gComeFunResultObject = __result_obj__ = self->items[it_216];
                /*i*/come_call_finalizer3(default_value_214,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result122__;
            }
            it_216++;
            if(it_216>=self->size) {
                it_216=0;
            }
            else {
                if(it_216==hash_215) {
                    __result123__ = gComeFunResultObject = __result_obj__ = default_value_214;
                    /*i*/come_call_finalizer3(default_value_214,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result123__;
                }
            }
        }
        else {
            __result124__ = gComeFunResultObject = __result_obj__ = default_value_214;
            /*i*/come_call_finalizer3(default_value_214,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result124__;
        }
    }
    __result125__ = gComeFunResultObject = __result_obj__ = default_value_214;
    /*i*/come_call_finalizer3(default_value_214,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj102;
struct list$1charph* __dec_obj103;
struct list$1charph* __dec_obj104;
char* __dec_obj105;
struct sType* __dec_obj106;
struct list$1sTypeph* __dec_obj107;
struct list$1charph* __dec_obj108;
struct list$1charph* __dec_obj109;
char* __dec_obj110;
char* __dec_obj111;
    if(self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(self->mImplType==gComeFunResultObject) {
            __dec_obj102=self->mImplType;
            /* a*/come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj103=self->mGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj103,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj104=self->mMethodGenericsTypeNames;
            /* a*/come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj105=self->mName;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(self->mResultType==gComeFunResultObject) {
            __dec_obj106=self->mResultType;
            /* a*/come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(self->mParamTypes==gComeFunResultObject) {
            __dec_obj107=self->mParamTypes;
            /* a*/come_call_finalizer3(__dec_obj107,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(self->mParamNames==gComeFunResultObject) {
            __dec_obj108=self->mParamNames;
            /* a*/come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj109=self->mParamDefaultParametors;
            /* a*/come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(self->mBlock==gComeFunResultObject) {
            __dec_obj110=self->mBlock;
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(self->mGenericsSName==gComeFunResultObject) {
            __dec_obj111=self->mGenericsSName;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj113;
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj113=self->v2;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_223;
struct list_item$1sRightValueObjectph* prev_it_224;
    it_223=self->head;
    while(it_223!=((void*)0)) {
        prev_it_224=it_223;
        it_223=it_223->next;
        /*i*/come_call_finalizer3(prev_it_224,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_225;
struct list_item$1CVALUEph* prev_it_226;
    it_225=self->head;
    while(it_225!=((void*)0)) {
        prev_it_226=it_225;
        it_225=it_225->next;
        /*i*/come_call_finalizer3(prev_it_226,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj117;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj117=self->item;
            /* a*/come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj118;
struct sType* __dec_obj119;
char* __dec_obj120;
    if(self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(self->c_value==gComeFunResultObject) {
            __dec_obj118=self->c_value;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->type!=((void*)0)) {
        if(self->type==gComeFunResultObject) {
            __dec_obj119=self->type;
            /* a*/come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj120=self->c_value_without_right_value_objects;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_227;
struct list_item$1CVALUEph* prev_it_228;
    it_227=self->head;
    while(it_227!=((void*)0)) {
        prev_it_228=it_227;
        it_227=it_227->next;
        /*i*/come_call_finalizer3(prev_it_228,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_229;
struct list$1sRightValueObjectph* right_value_objects_230;
struct sType* type_before_231;
void* __right_value206 = (void*)0;
char* c_value_232;
struct sClass* klass_233;
char* class_name_234;
char* fun_name_235;
void* __right_value207 = (void*)0;
struct sType* type2_236;
void* __right_value208 = (void*)0;
char* fun_name2_237;
struct sFun* finalizer_238;
void* __right_value209 = (void*)0;
char* none_generics_name_239;
void* __right_value210 = (void*)0;
char* generics_fun_name_240;
struct sGenericsFun* generics_fun_241;
int i_242;
void* __right_value211 = (void*)0;
char* new_fun_name_243;
void* __right_value212 = (void*)0;
char* __dec_obj121;
void* __right_value213 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun_244;
char* new_fun_name_245;
char* __dec_obj122;
void* __right_value214 = (void*)0;
char* type_name_246;
void* __right_value215 = (void*)0;
void* __right_value216 = (void*)0;
void* __right_value217 = (void*)0;
void* __right_value218 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_247;
struct tuple2$2charphsTypeph* it_250;
struct tuple2$2charphsTypeph* multiple_assign_var3;
char* name_253;
struct sType* field_type_254;
void* __right_value219 = (void*)0;
void* __right_value220 = (void*)0;
char* obj_255;
struct list$1tuple2$2charphsTypephph* o2_saved_258;
struct tuple2$2charphsTypeph* it_259;
struct tuple2$2charphsTypeph* multiple_assign_var4;
char* name_260;
struct sType* field_type_261;
void* __right_value221 = (void*)0;
void* __right_value222 = (void*)0;
char* obj_262;
void* __right_value223 = (void*)0;
char* type_name_263;
void* __right_value224 = (void*)0;
char* c_value_264;
struct sClass* klass_265;
char* class_name_266;
char* fun_name_267;
void* __right_value225 = (void*)0;
struct sType* type2_268;
void* __right_value226 = (void*)0;
char* fun_name2_269;
struct sFun* finalizer_270;
void* __right_value227 = (void*)0;
char* none_generics_name_271;
void* __right_value228 = (void*)0;
char* generics_fun_name_272;
struct sGenericsFun* generics_fun_273;
int i_274;
void* __right_value229 = (void*)0;
char* new_fun_name_275;
void* __right_value230 = (void*)0;
char* __dec_obj126;
void* __right_value231 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5;
struct sFun* fun_276;
char* new_fun_name_277;
char* __dec_obj127;
void* __right_value232 = (void*)0;
char* type_name_278;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
void* __right_value235 = (void*)0;
void* __right_value236 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_279;
struct tuple2$2charphsTypeph* it_280;
struct tuple2$2charphsTypeph* multiple_assign_var6;
char* name_281;
struct sType* field_type_282;
void* __right_value237 = (void*)0;
void* __right_value238 = (void*)0;
char* obj_283;
struct list$1tuple2$2charphsTypephph* o2_saved_284;
struct tuple2$2charphsTypeph* it_285;
struct tuple2$2charphsTypeph* multiple_assign_var7;
char* name_286;
struct sType* field_type_287;
void* __right_value239 = (void*)0;
void* __right_value240 = (void*)0;
char* obj_288;
void* __right_value241 = (void*)0;
char* type_name_289;
struct list$1sRightValueObjectph* __dec_obj128;
struct list$1CVALUEph* __dec_obj129;
memset(&i_242, 0, sizeof(int));
memset(&i_274, 0, sizeof(int));
    if(gComeGC||gComeC) {
        return;
    }
    if(info->no_output_come_code) {
        return;
    }
    stack_saved_229=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_230=info->right_value_objects;
    type_before_231=type;
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    if(type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        if(force_delete_) {
            c_value_232=(char*)come_increment_ref_count(__builtin_string(obj));
            klass_233=type->mClass;
            class_name_234=klass_233->mName;
            fun_name_235="force_finalize";
            type2_236=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_236->mHeap=(_Bool)0;
            fun_name2_237=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_235,info,(_Bool)1));
            finalizer_238=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_238=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_237);
                if(finalizer_238==((void*)0)) {
                    none_generics_name_239=(char*)come_increment_ref_count(get_none_generics_name(type2_236->mClass->mName));
                    generics_fun_name_240=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_239,fun_name_235));
                    generics_fun_241=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_240);
                    if(generics_fun_241) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_237),generics_fun_241,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_238=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_237);
                    }
                    none_generics_name_239 = come_decrement_ref_count2(none_generics_name_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_240 = come_decrement_ref_count2(generics_fun_name_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_242=128-1;                i_242>=1;                i_242--                ){
                    new_fun_name_243=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_237,i_242));
                    finalizer_238=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_243);
                    if(finalizer_238) {
                        __dec_obj121=fun_name2_237;
                        fun_name2_237=(char*)come_increment_ref_count(__builtin_string(new_fun_name_243));
                        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_243 = come_decrement_ref_count2(new_fun_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_243 = come_decrement_ref_count2(new_fun_name_243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_238==((void*)0)) {
                    finalizer_238=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_237);
                }
            }
            if(finalizer_238==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value213=create_force_finalizer_automatically(type,fun_name_235,info)));
                fun_244=multiple_assign_var2->v1;
                new_fun_name_245=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                /*g*/come_call_finalizer3(__right_value213,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj122=fun_name2_237;
                fun_name2_237=(char*)come_increment_ref_count(new_fun_name_245);
                __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_238=fun_244;
                new_fun_name_245 = come_decrement_ref_count2(new_fun_name_245, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_238!=((void*)0)) {
                if(klass_233->mProtocol&&type->mPointerNum==1) {
                    type_name_246=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    if(c_value_232) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_237,c_value_232,type_name_246,c_value_232,type_name_246,c_value_232,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_237,c_value_232,type_name_246,c_value_232,type_name_246,c_value_232,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_237,c_value_232,type_name_246,c_value_232,type_name_246,c_value_232,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_237,c_value_232,type_name_246,c_value_232,type_name_246,c_value_232,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_246 = come_decrement_ref_count2(type_name_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_232) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value215=xsprintf("/*b*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_232,fun_name2_237,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value216=xsprintf("/*c*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_232,fun_name2_237,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value217=xsprintf("/*d*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_232,fun_name2_237,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value218=xsprintf("/*e*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_232,fun_name2_237,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_233->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_247=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_233->mFields)),it_250=list$1tuple2$2charphsTypephph_begin((o2_saved_247));                    !list$1tuple2$2charphsTypephph_end((o2_saved_247));                    it_250=list$1tuple2$2charphsTypephph_next((o2_saved_247))                    ){
                        multiple_assign_var3=it_250;
                        name_253=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                        field_type_254=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                        if(field_type_254->mHeap&&field_type_254->mPointerNum>0) {
                            obj_255=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value219=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_232,name_253));
                            __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_254,obj_255,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_255 = come_decrement_ref_count2(obj_255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_253 = come_decrement_ref_count2(name_253, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(field_type_254,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_247,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_233->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_258=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_233->mFields)),it_259=list$1tuple2$2charphsTypephph_begin((o2_saved_258));                        !list$1tuple2$2charphsTypephph_end((o2_saved_258));                        it_259=list$1tuple2$2charphsTypephph_next((o2_saved_258))                        ){
                            multiple_assign_var4=it_259;
                            name_260=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                            field_type_261=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                            if(field_type_261->mHeap&&field_type_261->mPointerNum>0) {
                                obj_262=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value221=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_232,name_260));
                                __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_261,obj_262,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_262 = come_decrement_ref_count2(obj_262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_260 = come_decrement_ref_count2(name_260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(field_type_261,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(o2_saved_258,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_233->mProtocol&&type->mPointerNum==1) {
                        if(c_value_232) {
                            type_name_263=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0),\n",c_value_232,c_value_232,c_value_232,type_name_263,c_value_232,type_name_263,c_value_232,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_232,c_value_232,c_value_232,type_name_263,c_value_232,type_name_263,c_value_232,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0),\n",c_value_232,c_value_232,c_value_232,type_name_263,c_value_232,type_name_263,c_value_232,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_232,c_value_232,c_value_232,type_name_263,c_value_232,type_name_263,c_value_232,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_263 = come_decrement_ref_count2(type_name_263, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_232) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_232,c_value_232,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_232,c_value_232,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",c_value_232,c_value_232,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_232,c_value_232,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_232 = come_decrement_ref_count2(c_value_232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_236,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_237 = come_decrement_ref_count2(fun_name2_237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            c_value_264=(char*)come_increment_ref_count(__builtin_string(obj));
            klass_265=type->mClass;
            class_name_266=klass_265->mName;
            fun_name_267="finalize";
            type2_268=(struct sType*)come_increment_ref_count(sType_clone(type));
            type2_268->mHeap=(_Bool)0;
            fun_name2_269=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_267,info,(_Bool)1));
            finalizer_270=((void*)0);
            if(list$1sTypeph_length(type->mGenericsTypes)>0) {
                finalizer_270=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_269);
                if(finalizer_270==((void*)0)) {
                    none_generics_name_271=(char*)come_increment_ref_count(get_none_generics_name(type2_268->mClass->mName));
                    generics_fun_name_272=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_271,fun_name_267));
                    generics_fun_273=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_272);
                    if(generics_fun_273) {
                        if(!create_generics_fun((char*)come_increment_ref_count(fun_name2_269),generics_fun_273,type,info)) {
                            printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                            exit(2);
                        }
                        finalizer_270=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_269);
                    }
                    none_generics_name_271 = come_decrement_ref_count2(none_generics_name_271, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    generics_fun_name_272 = come_decrement_ref_count2(generics_fun_name_272, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            else {
                for(                i_274=128-1;                i_274>=1;                i_274--                ){
                    new_fun_name_275=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_269,i_274));
                    finalizer_270=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_275);
                    if(finalizer_270) {
                        __dec_obj126=fun_name2_269;
                        fun_name2_269=(char*)come_increment_ref_count(__builtin_string(new_fun_name_275));
                        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                        new_fun_name_275 = come_decrement_ref_count2(new_fun_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    new_fun_name_275 = come_decrement_ref_count2(new_fun_name_275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(finalizer_270==((void*)0)) {
                    finalizer_270=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_269);
                }
            }
            if(finalizer_270==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
                multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value231=create_finalizer_automatically(type,fun_name_267,info)));
                fun_276=multiple_assign_var5->v1;
                new_fun_name_277=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                /*g*/come_call_finalizer3(__right_value231,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj127=fun_name2_269;
                fun_name2_269=(char*)come_increment_ref_count(new_fun_name_277);
                __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
                finalizer_270=fun_276;
                new_fun_name_277 = come_decrement_ref_count2(new_fun_name_277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(finalizer_270!=((void*)0)) {
                if(klass_265->mProtocol&&type->mPointerNum==1) {
                    type_name_278=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                    if(c_value_264) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s),\n",fun_name2_269,c_value_264,type_name_278,c_value_264,type_name_278,c_value_264,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, %s);\n",fun_name2_269,c_value_264,type_name_278,c_value_264,type_name_278,c_value_264,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0),\n",fun_name2_269,c_value_264,type_name_278,c_value_264,type_name_278,c_value_264,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"come_call_finalizer2(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d, (void*)0);\n",fun_name2_269,c_value_264,type_name_278,c_value_264,type_name_278,c_value_264,type->mAllocaValue,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                    type_name_278 = come_decrement_ref_count2(type_name_278, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    if(c_value_264) {
                        if(no_decrement) {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value233=xsprintf("/*f*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_264,fun_name2_269,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value234=xsprintf("/*g*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_264,fun_name2_269,type->mAllocaValue,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__"))));
                                __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(comma) {
                                add_come_code(info,((char*)(__right_value235=xsprintf("/*h*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_264,fun_name2_269,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value236=xsprintf("/*i*/come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_264,fun_name2_269,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                __right_value236 = come_decrement_ref_count2(__right_value236, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                    }
                }
            }
            else {
                if(klass_265->mStruct&&type->mPointerNum==0) {
                    for(                    o2_saved_279=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_265->mFields)),it_280=list$1tuple2$2charphsTypephph_begin((o2_saved_279));                    !list$1tuple2$2charphsTypephph_end((o2_saved_279));                    it_280=list$1tuple2$2charphsTypephph_next((o2_saved_279))                    ){
                        multiple_assign_var6=it_280;
                        name_281=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                        field_type_282=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                        if(field_type_282->mHeap&&field_type_282->mPointerNum>0) {
                            obj_283=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value237=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_264,name_281));
                            __right_value237 = come_decrement_ref_count2(__right_value237, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            free_object(field_type_282,obj_283,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                            obj_283 = come_decrement_ref_count2(obj_283, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        name_281 = come_decrement_ref_count2(name_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        /*i*/come_call_finalizer3(field_type_282,sType_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    /*i*/come_call_finalizer3(o2_saved_279,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(klass_265->mStruct&&type->mPointerNum==1) {
                        for(                        o2_saved_284=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_265->mFields)),it_285=list$1tuple2$2charphsTypephph_begin((o2_saved_284));                        !list$1tuple2$2charphsTypephph_end((o2_saved_284));                        it_285=list$1tuple2$2charphsTypephph_next((o2_saved_284))                        ){
                            multiple_assign_var7=it_285;
                            name_286=(char*)come_increment_ref_count(multiple_assign_var7->v1);
                            field_type_287=(struct sType*)come_increment_ref_count(multiple_assign_var7->v2);
                            if(field_type_287->mHeap&&field_type_287->mPointerNum>0) {
                                obj_288=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value239=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_264,name_286));
                                __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                free_object(field_type_287,obj_288,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                                obj_288 = come_decrement_ref_count2(obj_288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            name_286 = come_decrement_ref_count2(name_286, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            /*i*/come_call_finalizer3(field_type_287,sType_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        /*i*/come_call_finalizer3(o2_saved_284,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
                    }
                }
                if(!type->mAllocaValue) {
                    if(klass_265->mProtocol&&type->mPointerNum==1) {
                        if(c_value_264) {
                            type_name_289=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d, %s):0),\n",c_value_264,c_value_264,c_value_264,type_name_289,c_value_264,type_name_289,c_value_264,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %s); } \n",c_value_264,c_value_264,c_value_264,type_name_289,c_value_264,type_name_289,c_value_264,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"((%s) ? %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0):0),\n",c_value_264,c_value_264,c_value_264,type_name_289,c_value_264,type_name_289,c_value_264,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"if(%s) { %s = come_decrement_ref_count2(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, (void*)0); } \n",c_value_264,c_value_264,c_value_264,type_name_289,c_value_264,type_name_289,c_value_264,no_decrement,no_free,force_delete_);
                                }
                            }
                            type_name_289 = come_decrement_ref_count2(type_name_289, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(c_value_264) {
                            if(no_decrement) {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_264,c_value_264,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_264,c_value_264,no_decrement,no_free,force_delete_,info->come_fun->mNoResultType?"(void*)0":"__result_obj__");
                                }
                            }
                            else {
                                if(comma) {
                                    add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",no_decrement,no_decrement,no_free,force_delete_);
                                }
                                else {
                                    add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_264,c_value_264,no_decrement,no_free,force_delete_);
                                }
                            }
                        }
                    }
                }
            }
            c_value_264 = come_decrement_ref_count2(c_value_264, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_268,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name2_269 = come_decrement_ref_count2(fun_name2_269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __dec_obj128=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_230);
    /* a*/come_call_finalizer3(__dec_obj128,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj129=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_229);
    /* a*/come_call_finalizer3(__dec_obj129,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_229,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_248;
struct tuple2$2charphsTypeph* __result126__;
struct tuple2$2charphsTypeph* __result127__;
struct tuple2$2charphsTypeph* result_249;
struct tuple2$2charphsTypeph* __result128__;
result_248 = (void*)0;
result_249 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_248,0,sizeof(struct tuple2$2charphsTypeph*));
        __result126__ = gComeFunResultObject = __result_obj__ = result_248;
        gComeFunResultObject = (void*)0;
        return __result126__;
    }
    self->it=self->head;
    if(self->it) {
        __result127__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    memset(&result_249,0,sizeof(struct tuple2$2charphsTypeph*));
    __result128__ = gComeFunResultObject = __result_obj__ = result_249;
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_251;
struct tuple2$2charphsTypeph* __result129__;
struct tuple2$2charphsTypeph* __result130__;
struct tuple2$2charphsTypeph* result_252;
struct tuple2$2charphsTypeph* __result131__;
result_251 = (void*)0;
result_252 = (void*)0;
    if(self==((void*)0)||self->it==((void*)0)) {
        memset(&result_251,0,sizeof(struct tuple2$2charphsTypeph*));
        __result129__ = gComeFunResultObject = __result_obj__ = result_251;
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    self->it=self->it->next;
    if(self->it) {
        __result130__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result130__;
    }
    memset(&result_252,0,sizeof(struct tuple2$2charphsTypeph*));
    __result131__ = gComeFunResultObject = __result_obj__ = result_252;
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_256;
struct list_item$1tuple2$2charphsTypephph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        /*i*/come_call_finalizer3(prev_it_257,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj123;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        if(self->item==gComeFunResultObject) {
            __dec_obj123=self->item;
            /* a*/come_call_finalizer3(__dec_obj123,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj124;
struct sType* __dec_obj125;
    if(self!=((void*)0)&&self->v1!=((void*)0)) {
        if(self->v1==gComeFunResultObject) {
            __dec_obj124=self->v1;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->v2!=((void*)0)) {
        if(self->v2==gComeFunResultObject) {
            __dec_obj125=self->v2;
            /* a*/come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_clone_object_290;
void* __right_value242 = (void*)0;
struct sType* type2_291;
char* result_292;
struct sType* result_type_293;
struct list$1CVALUEph* stack_saved_294;
struct list$1sRightValueObjectph* right_value_objects_295;
void* __right_value243 = (void*)0;
char* c_value_296;
struct sClass* klass_297;
char* class_name_298;
char* fun_name_299;
struct sFun* cloner_300;
char* fun_name2_301;
void* __right_value244 = (void*)0;
char* none_generics_name_302;
void* __right_value245 = (void*)0;
struct sType* obj_type_303;
void* __right_value246 = (void*)0;
char* __dec_obj130;
void* __right_value247 = (void*)0;
char* fun_name3_304;
struct sGenericsFun* generics_fun_305;
void* __right_value248 = (void*)0;
_Bool _if_conditional1;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct tuple2$2sTypephcharph* __result137__;
void* __right_value254 = (void*)0;
char* __dec_obj135;
int i_308;
void* __right_value255 = (void*)0;
char* new_fun_name_309;
void* __right_value256 = (void*)0;
char* __dec_obj136;
void* __right_value257 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8;
struct sFun* fun_310;
char* new_fun_name_311;
char* __dec_obj137;
struct sType* __dec_obj138;
void* __right_value258 = (void*)0;
struct sType* __dec_obj139;
void* __right_value259 = (void*)0;
char* __dec_obj140;
void* __right_value260 = (void*)0;
char* __dec_obj141;
void* __right_value261 = (void*)0;
struct sType* __dec_obj142;
void* __right_value262 = (void*)0;
char* type_name_312;
void* __right_value263 = (void*)0;
char* __dec_obj143;
void* __right_value264 = (void*)0;
char* __dec_obj144;
struct list$1sRightValueObjectph* __dec_obj145;
struct list$1CVALUEph* __dec_obj146;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct tuple2$2sTypephcharph* __result138__;
fun_name2_301 = (void*)0;
memset(&i_308, 0, sizeof(int));
    in_clone_object_290=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_291=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_292=((void*)0);
    result_type_293=((void*)0);
    stack_saved_294=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_295=info->right_value_objects;
    c_value_296=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_297=type->mClass;
    class_name_298=klass_297->mName;
    fun_name_299="clone";
    cloner_300=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_302=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_303=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj130=fun_name2_301;
        fun_name2_301=(char*)come_increment_ref_count(create_method_name(obj_type_303,(_Bool)0,fun_name_299,info,(_Bool)1));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_304=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_302,fun_name_299));
        generics_fun_305=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_304,((void*)0));
        if(generics_fun_305) {
            if((_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_301)),generics_fun_305,obj_type_303,info))),            _if_conditional1) {
                __result137__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value253=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 875, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 875, "sType")),"void",(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string("")))));
                none_generics_name_302 = come_decrement_ref_count2(none_generics_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_304 = come_decrement_ref_count2(fun_name3_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_292 = come_decrement_ref_count2(result_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(result_type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_294,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_296 = come_decrement_ref_count2(c_value_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_301 = come_decrement_ref_count2(fun_name2_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value253,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result137__;
            }
        }
        cloner_300=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_301);
        none_generics_name_302 = come_decrement_ref_count2(none_generics_name_302, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_303,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_304 = come_decrement_ref_count2(fun_name3_304, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj135=fun_name2_301;
        fun_name2_301=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_299,info,(_Bool)1));
        __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_308=128-1;        i_308>=1;        i_308--        ){
            new_fun_name_309=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_301,i_308));
            cloner_300=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_309);
            if(cloner_300) {
                __dec_obj136=fun_name2_301;
                fun_name2_301=(char*)come_increment_ref_count(__builtin_string(new_fun_name_309));
                __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_309 = come_decrement_ref_count2(new_fun_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_309 = come_decrement_ref_count2(new_fun_name_309, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_300==((void*)0)) {
            cloner_300=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_301);
        }
    }
    if(cloner_300==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value257=create_cloner_automatically(type,fun_name_299,info)));
        fun_310=multiple_assign_var8->v1;
        new_fun_name_311=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        /*g*/come_call_finalizer3(__right_value257,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj137=fun_name2_301;
        fun_name2_301=(char*)come_increment_ref_count(new_fun_name_311);
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_300=fun_310;
        new_fun_name_311 = come_decrement_ref_count2(new_fun_name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(cloner_300!=((void*)0)) {
        __dec_obj138=result_type_293;
        result_type_293=(struct sType*)come_increment_ref_count(cloner_300->mResultType);
        /* a*/come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj139=result_type_293;
        result_type_293=(struct sType*)come_increment_ref_count(solve_generics(result_type_293,type,info));
        /* a*/come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj140=result_292;
        result_292=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_301,c_value_296));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(gComeDebug) {
            __dec_obj141=result_292;
            result_292=(char*)come_increment_ref_count(append_stackframe(result_292,result_type_293,info));
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj142=result_type_293;
        result_type_293=(struct sType*)come_increment_ref_count(sType_clone(type));
        /* a*/come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
        type2_291->mHeap=(_Bool)1;
        type_name_312=(char*)come_increment_ref_count(make_type_name_string(type2_291,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj143=result_292;
        result_292=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_312,c_value_296,info->sname,info->sline,type_name_312));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(gComeDebug) {
            __dec_obj144=result_292;
            result_292=(char*)come_increment_ref_count(append_stackframe(result_292,result_type_293,info));
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type_name_312 = come_decrement_ref_count2(type_name_312, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj145=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_295);
    /* a*/come_call_finalizer3(__dec_obj145,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj146=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_294);
    /* a*/come_call_finalizer3(__dec_obj146,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    info->in_clone_object=in_clone_object_290;
    __result138__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value266=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 934, "struct tuple2$2sTypephcharph")),(struct sType*)come_increment_ref_count(result_type_293),(char*)come_increment_ref_count(result_292))));
    /*i*/come_call_finalizer3(type2_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_292 = come_decrement_ref_count2(result_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_293,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_294,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_296 = come_decrement_ref_count2(c_value_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_301 = come_decrement_ref_count2(fun_name2_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value266,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_306;
unsigned int it_307;
struct sGenericsFun* __result132__;
struct sGenericsFun* __result133__;
struct sGenericsFun* __result134__;
struct sGenericsFun* __result135__;
    hash_306=string_get_hash_key(((char*)key))%self->size;
    it_307=hash_306;
    while((_Bool)1) {
        if(self->item_existance[it_307]) {
            if(string_equals(self->keys[it_307],key)) {
                __result132__ = gComeFunResultObject = __result_obj__ = self->items[it_307];
                /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result132__;
            }
            it_307++;
            if(it_307>=self->size) {
                it_307=0;
            }
            else {
                if(it_307==hash_306) {
                    __result133__ = gComeFunResultObject = __result_obj__ = default_value;
                    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result133__;
                }
            }
        }
        else {
            __result134__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result134__;
        }
    }
    __result135__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj131;
char* __dec_obj132;
struct tuple2$2sTypephcharph* __result136__;
    __dec_obj131=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    /* a*/come_call_finalizer3(__dec_obj131,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj132=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result136__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result136__;
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

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_313;
struct list$1CVALUEph* stack_saved_314;
struct list$1sRightValueObjectph* right_value_objects_315;
struct sClass* klass_316;
char* class_name_317;
char* fun_name_318;
void* __right_value267 = (void*)0;
struct sType* type2_319;
struct sFun* cloner_320;
char* fun_name2_321;
void* __right_value268 = (void*)0;
char* none_generics_name_322;
void* __right_value269 = (void*)0;
struct sType* obj_type_323;
void* __right_value270 = (void*)0;
char* __dec_obj147;
void* __right_value271 = (void*)0;
char* fun_name3_324;
struct sGenericsFun* generics_fun_325;
void* __right_value272 = (void*)0;
_Bool _if_conditional2;
_Bool __result139__;
void* __right_value273 = (void*)0;
char* __dec_obj148;
int i_326;
void* __right_value274 = (void*)0;
char* new_fun_name_327;
void* __right_value275 = (void*)0;
char* __dec_obj149;
void* __right_value276 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var9;
struct sFun* fun_328;
char* new_fun_name_329;
char* __dec_obj150;
struct list$1sRightValueObjectph* __dec_obj151;
struct list$1CVALUEph* __dec_obj152;
_Bool __result140__;
fun_name2_321 = (void*)0;
memset(&i_326, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_313=((void*)0);
    stack_saved_314=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_315=info->right_value_objects;
    klass_316=type->mClass;
    class_name_317=klass_316->mName;
    fun_name_318="equals";
    type2_319=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_319->mHeap=(_Bool)0;
    cloner_320=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_322=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_323=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj147=fun_name2_321;
        fun_name2_321=(char*)come_increment_ref_count(create_method_name(obj_type_323,(_Bool)0,fun_name_318,info,(_Bool)1));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_324=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_322,fun_name_318));
        generics_fun_325=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_324,((void*)0));
        if(generics_fun_325) {
            if((_if_conditional2=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_321)),generics_fun_325,obj_type_323,info))),            _if_conditional2) {
                __result139__ = (_Bool)0;
                none_generics_name_322 = come_decrement_ref_count2(none_generics_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_323,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_324 = come_decrement_ref_count2(fun_name3_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_313 = come_decrement_ref_count2(result_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_314,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_319,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_321 = come_decrement_ref_count2(fun_name2_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result139__;
            }
        }
        cloner_320=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_321);
        none_generics_name_322 = come_decrement_ref_count2(none_generics_name_322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_323,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_324 = come_decrement_ref_count2(fun_name3_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj148=fun_name2_321;
        fun_name2_321=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_318,info,(_Bool)1));
        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_326=128-1;        i_326>=1;        i_326--        ){
            new_fun_name_327=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_321,i_326));
            cloner_320=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_327);
            if(cloner_320) {
                __dec_obj149=fun_name2_321;
                fun_name2_321=(char*)come_increment_ref_count(__builtin_string(new_fun_name_327));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_327 = come_decrement_ref_count2(new_fun_name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_327 = come_decrement_ref_count2(new_fun_name_327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_320==((void*)0)) {
            cloner_320=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_321);
        }
    }
    if(cloner_320==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var9=((struct tuple2$2sFunpcharph*)(__right_value276=create_equals_automatically(type,fun_name_318,info)));
        fun_328=multiple_assign_var9->v1;
        new_fun_name_329=(char*)come_increment_ref_count(multiple_assign_var9->v2);
        /*g*/come_call_finalizer3(__right_value276,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj150=fun_name2_321;
        fun_name2_321=(char*)come_increment_ref_count(new_fun_name_329);
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_320=fun_328;
        new_fun_name_329 = come_decrement_ref_count2(new_fun_name_329, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj151=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_315);
    /* a*/come_call_finalizer3(__dec_obj151,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj152=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_314);
    /* a*/come_call_finalizer3(__dec_obj152,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result140__ = (_Bool)1;
    result_313 = come_decrement_ref_count2(result_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_314,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_319,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_321 = come_decrement_ref_count2(fun_name2_321, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result140__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_330;
struct list$1CVALUEph* stack_saved_331;
struct list$1sRightValueObjectph* right_value_objects_332;
struct sClass* klass_333;
char* class_name_334;
char* fun_name_335;
void* __right_value277 = (void*)0;
struct sType* type2_336;
struct sFun* cloner_337;
char* fun_name2_338;
void* __right_value278 = (void*)0;
char* none_generics_name_339;
void* __right_value279 = (void*)0;
struct sType* obj_type_340;
void* __right_value280 = (void*)0;
char* __dec_obj153;
void* __right_value281 = (void*)0;
char* fun_name3_341;
struct sGenericsFun* generics_fun_342;
void* __right_value282 = (void*)0;
_Bool _if_conditional3;
_Bool __result141__;
void* __right_value283 = (void*)0;
char* __dec_obj154;
int i_343;
void* __right_value284 = (void*)0;
char* new_fun_name_344;
void* __right_value285 = (void*)0;
char* __dec_obj155;
void* __right_value286 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10;
struct sFun* fun_345;
char* new_fun_name_346;
char* __dec_obj156;
struct list$1sRightValueObjectph* __dec_obj157;
struct list$1CVALUEph* __dec_obj158;
_Bool __result142__;
fun_name2_338 = (void*)0;
memset(&i_343, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_330=((void*)0);
    stack_saved_331=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_332=info->right_value_objects;
    klass_333=type->mClass;
    class_name_334=klass_333->mName;
    fun_name_335="operator_equals";
    type2_336=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_336->mHeap=(_Bool)0;
    cloner_337=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_339=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_340=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj153=fun_name2_338;
        fun_name2_338=(char*)come_increment_ref_count(create_method_name(obj_type_340,(_Bool)0,fun_name_335,info,(_Bool)1));
        __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_341=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_339,fun_name_335));
        generics_fun_342=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_341,((void*)0));
        if(generics_fun_342) {
            if((_if_conditional3=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_338)),generics_fun_342,obj_type_340,info))),            _if_conditional3) {
                __result141__ = (_Bool)0;
                none_generics_name_339 = come_decrement_ref_count2(none_generics_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_341 = come_decrement_ref_count2(fun_name3_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_330 = come_decrement_ref_count2(result_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_331,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_336,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_338 = come_decrement_ref_count2(fun_name2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result141__;
            }
        }
        cloner_337=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_338);
        none_generics_name_339 = come_decrement_ref_count2(none_generics_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_340,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_341 = come_decrement_ref_count2(fun_name3_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj154=fun_name2_338;
        fun_name2_338=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_335,info,(_Bool)1));
        __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_343=128-1;        i_343>=1;        i_343--        ){
            new_fun_name_344=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_338,i_343));
            cloner_337=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_344);
            if(cloner_337) {
                __dec_obj155=fun_name2_338;
                fun_name2_338=(char*)come_increment_ref_count(__builtin_string(new_fun_name_344));
                __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_344 = come_decrement_ref_count2(new_fun_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_344 = come_decrement_ref_count2(new_fun_name_344, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_337==((void*)0)) {
            cloner_337=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_338);
        }
    }
    if(cloner_337==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value286=create_operator_equals_automatically(type,fun_name_335,info)));
        fun_345=multiple_assign_var10->v1;
        new_fun_name_346=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        /*g*/come_call_finalizer3(__right_value286,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj156=fun_name2_338;
        fun_name2_338=(char*)come_increment_ref_count(new_fun_name_346);
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_337=fun_345;
        new_fun_name_346 = come_decrement_ref_count2(new_fun_name_346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj157=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_332);
    /* a*/come_call_finalizer3(__dec_obj157,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj158=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_331);
    /* a*/come_call_finalizer3(__dec_obj158,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result142__ = (_Bool)1;
    result_330 = come_decrement_ref_count2(result_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_331,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_336,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_338 = come_decrement_ref_count2(fun_name2_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result142__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_347;
struct list$1CVALUEph* stack_saved_348;
struct list$1sRightValueObjectph* right_value_objects_349;
struct sClass* klass_350;
char* class_name_351;
char* fun_name_352;
void* __right_value287 = (void*)0;
struct sType* type2_353;
struct sFun* cloner_354;
char* fun_name2_355;
void* __right_value288 = (void*)0;
char* none_generics_name_356;
void* __right_value289 = (void*)0;
struct sType* obj_type_357;
void* __right_value290 = (void*)0;
char* __dec_obj159;
void* __right_value291 = (void*)0;
char* fun_name3_358;
struct sGenericsFun* generics_fun_359;
void* __right_value292 = (void*)0;
_Bool _if_conditional4;
_Bool __result143__;
void* __right_value293 = (void*)0;
char* __dec_obj160;
int i_360;
void* __right_value294 = (void*)0;
char* new_fun_name_361;
void* __right_value295 = (void*)0;
char* __dec_obj161;
void* __right_value296 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11;
struct sFun* fun_362;
char* new_fun_name_363;
char* __dec_obj162;
struct list$1sRightValueObjectph* __dec_obj163;
struct list$1CVALUEph* __dec_obj164;
_Bool __result144__;
fun_name2_355 = (void*)0;
memset(&i_360, 0, sizeof(int));
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_347=((void*)0);
    stack_saved_348=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_349=info->right_value_objects;
    klass_350=type->mClass;
    class_name_351=klass_350->mName;
    fun_name_352="operator_not_equals";
    type2_353=(struct sType*)come_increment_ref_count(sType_clone(type));
    type2_353->mHeap=(_Bool)0;
    cloner_354=((void*)0);
    if(list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_356=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_357=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj159=fun_name2_355;
        fun_name2_355=(char*)come_increment_ref_count(create_method_name(obj_type_357,(_Bool)0,fun_name_352,info,(_Bool)1));
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_358=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_356,fun_name_352));
        generics_fun_359=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_358,((void*)0));
        if(generics_fun_359) {
            if((_if_conditional4=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_355)),generics_fun_359,obj_type_357,info))),            _if_conditional4) {
                __result143__ = (_Bool)0;
                none_generics_name_356 = come_decrement_ref_count2(none_generics_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(obj_type_357,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_358 = come_decrement_ref_count2(fun_name3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_347 = come_decrement_ref_count2(result_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(stack_saved_348,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_355 = come_decrement_ref_count2(fun_name2_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result143__;
            }
        }
        cloner_354=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_355);
        none_generics_name_356 = come_decrement_ref_count2(none_generics_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(obj_type_357,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_358 = come_decrement_ref_count2(fun_name3_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj160=fun_name2_355;
        fun_name2_355=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_352,info,(_Bool)1));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_360=128-1;        i_360>=1;        i_360--        ){
            new_fun_name_361=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_355,i_360));
            cloner_354=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_361);
            if(cloner_354) {
                __dec_obj161=fun_name2_355;
                fun_name2_355=(char*)come_increment_ref_count(__builtin_string(new_fun_name_361));
                __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_361 = come_decrement_ref_count2(new_fun_name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_361 = come_decrement_ref_count2(new_fun_name_361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(cloner_354==((void*)0)) {
            cloner_354=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_355);
        }
    }
    if(cloner_354==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value296=create_operator_not_equals_automatically(type,fun_name_352,info)));
        fun_362=multiple_assign_var11->v1;
        new_fun_name_363=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        /*g*/come_call_finalizer3(__right_value296,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj162=fun_name2_355;
        fun_name2_355=(char*)come_increment_ref_count(new_fun_name_363);
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_354=fun_362;
        new_fun_name_363 = come_decrement_ref_count2(new_fun_name_363, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj163=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_349);
    /* a*/come_call_finalizer3(__dec_obj163,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj164=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_348);
    /* a*/come_call_finalizer3(__dec_obj164,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result144__ = (_Bool)1;
    result_347 = come_decrement_ref_count2(result_347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(stack_saved_348,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_353,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_355 = come_decrement_ref_count2(fun_name2_355, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result144__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_364;
struct list$1sRightValueObjectph* right_value_objects_365;
int n_366;
struct list$1sRightValueObjectph* o2_saved_367;
struct sRightValueObject* it_368;
struct sType* type_369;
void* __right_value297 = (void*)0;
struct sType* __dec_obj165;
    if(gComeGC||gComeC) {
        return;
    }
    free_right_value_364=(_Bool)0;
    right_value_objects_365=info->right_value_objects;
    n_366=0;
    for(    o2_saved_367=(right_value_objects_365),it_368=list$1sRightValueObjectph_begin((o2_saved_367));    !list$1sRightValueObjectph_end((o2_saved_367));    it_368=list$1sRightValueObjectph_next((o2_saved_367))    ){
        if(it_368&&!it_368->mFreed) {
            if(string_operator_equals(it_368->mFunName,info->come_fun->mName)&&it_368->mBlockLevel==info->block_level&&!it_368->mStored) {
                type_369=(struct sType*)come_increment_ref_count(it_368->mType);
                __dec_obj165=type_369;
                type_369=(struct sType*)come_increment_ref_count(solve_type(type_369,info->generics_type,info->method_generics_types,info));
                /* a*/come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
                free_object(type_369,it_368->mVarName,!it_368->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_368->mFreed=(_Bool)1;
                free_right_value_364=(_Bool)1;
                /*i*/come_call_finalizer3(type_369,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_366++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_370;
struct sVar* var__371;
struct sVar* __result149__;
struct sVar* __result150__;
    it_370=table;
    while(it_370) {
        var__371=map$2charphsVarphp_operator_load_element(it_370->mVars,name);
        if(var__371) {
            __result149__ = gComeFunResultObject = __result_obj__ = var__371;
            gComeFunResultObject = (void*)0;
            return __result149__;
        }
        it_370=it_370->mParent;
    }
    __result150__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result150__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_372;
unsigned int hash_373;
unsigned int it_374;
struct sVar* __result145__;
struct sVar* __result146__;
struct sVar* __result147__;
struct sVar* __result148__;
default_value_372 = (void*)0;
    memset(&default_value_372,0,sizeof(struct sVar*));
    hash_373=string_get_hash_key(((char*)key))%self->size;
    it_374=hash_373;
    while((_Bool)1) {
        if(self->item_existance[it_374]) {
            if(string_equals(self->keys[it_374],key)) {
                __result145__ = gComeFunResultObject = __result_obj__ = self->items[it_374];
                /*i*/come_call_finalizer3(default_value_372,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result145__;
            }
            it_374++;
            if(it_374>=self->size) {
                it_374=0;
            }
            else {
                if(it_374==hash_373) {
                    __result146__ = gComeFunResultObject = __result_obj__ = default_value_372;
                    /*i*/come_call_finalizer3(default_value_372,sVar_finalize, 0, 0, 1, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result146__;
                }
            }
        }
        else {
            __result147__ = gComeFunResultObject = __result_obj__ = default_value_372;
            /*i*/come_call_finalizer3(default_value_372,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result147__;
        }
    }
    __result148__ = gComeFunResultObject = __result_obj__ = default_value_372;
    /*i*/come_call_finalizer3(default_value_372,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj166;
char* __dec_obj167;
struct sType* __dec_obj168;
char* __dec_obj169;
    if(self!=((void*)0)&&self->mName!=((void*)0)) {
        if(self->mName==gComeFunResultObject) {
            __dec_obj166=self->mName;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(self->mCValueName==gComeFunResultObject) {
            __dec_obj167=self->mCValueName;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mType!=((void*)0)) {
        if(self->mType==gComeFunResultObject) {
            __dec_obj168=self->mType;
            /* a*/come_call_finalizer3(__dec_obj168,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(self->mFunName==gComeFunResultObject) {
            __dec_obj169=self->mFunName;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_375;
char* it_378;
struct sVar* p_381;
struct sType* type_382;
struct sClass* klass_383;
void* __right_value298 = (void*)0;
char* c_value_384;
void* __right_value299 = (void*)0;
struct sType* type2_385;
    if(gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_375=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_378=map$2charphsVarph_begin((o2_saved_375));    !map$2charphsVarph_end((o2_saved_375));    it_378=map$2charphsVarph_next((o2_saved_375))    ){
        p_381=map$2charphsVarphp_operator_load_element(table->mVars,it_378);
        type_382=p_381->mType;
        klass_383=type_382->mClass;
        if(ret_value!=((void*)0)&&p_381->mCValueName!=((void*)0)&&string_operator_equals(p_381->mCValueName,ret_value->mCValueName)&&type_382->mHeap) {
            free_object(p_381->mType,p_381->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else {
            if(type_382->mHeap&&p_381->mCValueName) {
                free_object(p_381->mType,p_381->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            else {
                if(klass_383->mStruct&&p_381->mCValueName&&type_382->mAllocaValue&&!type_382->mNoCallingDestructor) {
                    c_value_384=(char*)come_increment_ref_count(xsprintf("(&%s)",p_381->mCValueName));
                    type2_385=(struct sType*)come_increment_ref_count(sType_clone(type_382));
                    type2_385->mPointerNum++;
                    free_object(type2_385,c_value_384,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                    c_value_384 = come_decrement_ref_count2(c_value_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type2_385,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
        }
    }
    /*i*/come_call_finalizer3(o2_saved_375,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_376;
char* __result151__;
char* __result152__;
char* result_377;
char* __result153__;
result_376 = (void*)0;
result_377 = (void*)0;
    if(self==((void*)0)) {
        memset(&result_376,0,sizeof(char*));
        __result151__ = gComeFunResultObject = __result_obj__ = result_376;
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    self->key_list->it=self->key_list->head;
    if(self->key_list->it) {
        __result152__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    memset(&result_377,0,sizeof(char*));
    __result153__ = gComeFunResultObject = __result_obj__ = result_377;
    gComeFunResultObject = (void*)0;
    return __result153__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_379;
char* __result154__;
char* __result155__;
char* result_380;
char* __result156__;
result_379 = (void*)0;
result_380 = (void*)0;
    if(self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_379,0,sizeof(char*));
        __result154__ = gComeFunResultObject = __result_obj__ = result_379;
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    self->key_list->it=self->key_list->it->next;
    if(self->key_list->it) {
        __result155__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    memset(&result_380,0,sizeof(char*));
    __result156__ = gComeFunResultObject = __result_obj__ = result_380;
    gComeFunResultObject = (void*)0;
    return __result156__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_386;
int i_387;
    for(    i_386=0;    i_386<self->size;    i_386++    ){
        if(self->item_existance[i_386]) {
            if(1) {
                /*i*/come_call_finalizer3(self->items[i_386],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_387=0;    i_387<self->size;    i_387++    ){
        if(self->item_existance[i_387]) {
            if(1) {
                self->keys[i_387] = come_decrement_ref_count2(self->keys[i_387], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_388;
    if(gComeGC||gComeC) {
        return;
    }
    it_388=info->lv_table;
    if(it_388==info->come_fun->mBlock->mVarTable) {
        free_objects(it_388,ret_value,info);
    }
    else {
        while(it_388!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_388,ret_value,info);
            it_388=it_388->mParent;
        }
        free_objects(it_388,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_389;
struct sVarTable* current_loop_vtable_390;
struct sVarTable* it_391;
    if(gComeGC||gComeC) {
        return;
    }
    ret_value_389=((void*)0);
    current_loop_vtable_390=info->current_loop_vtable;
    if(current_loop_vtable_390!=((void*)0)) {
        it_391=info->lv_table;
        while(it_391!=current_loop_vtable_390) {
            free_objects(it_391,ret_value_389,info);
            it_391=it_391->mParent;
        }
        free_objects(it_391,ret_value_389,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* __result157__;
void* __right_value305 = (void*)0;
char* var_name_393;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
char* __result158__;
void* __right_value314 = (void*)0;
char* __result159__;
    if(string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(gComeDebug||type->mRecord) {
            __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value304=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value300=string_to_string(info->sname))),((char*)(__right_value301=int_to_string(info->sline))),((char*)(__right_value302=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value303=charp_to_string(c_value))))));
            __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value303 = come_decrement_ref_count2(__right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value304 = come_decrement_ref_count2(__right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result157__;
        }
    }
    else {
        if(gComeDebug||type->mRecord) {
            static int n_392=0;
            ++n_392;
            var_name_393=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_392));
            add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value306=make_define_var(type,var_name_393,(_Bool)0,info))));
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value313=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value307=string_to_string(info->sname))),((char*)(__right_value308=int_to_string(info->sline))),((char*)(__right_value309=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value310=string_to_string(var_name_393))),((char*)(__right_value311=charp_to_string(c_value))),((char*)(__right_value312=string_to_string(var_name_393))))));
            var_name_393 = come_decrement_ref_count2(var_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value312 = come_decrement_ref_count2(__right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value313 = come_decrement_ref_count2(__right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result158__;
            var_name_393 = come_decrement_ref_count2(var_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value314=__builtin_string(c_value)));
    __right_value314 = come_decrement_ref_count2(__right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result159__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_394;
char* it_395;
struct sVar* p_396;
struct sType* type_397;
struct sClass* klass_398;
_Bool __result160__;
_Bool __result161__;
_Bool __result162__;
_Bool __result163__;
    if(gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_394=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_395=map$2charphsVarph_begin((o2_saved_394));    !map$2charphsVarph_end((o2_saved_394));    it_395=map$2charphsVarph_next((o2_saved_394))    ){
        p_396=map$2charphsVarphp_operator_load_element(table->mVars,it_395);
        type_397=p_396->mType;
        klass_398=type_397->mClass;
        if(ret_value!=((void*)0)&&p_396->mCValueName!=((void*)0)&&string_operator_equals(p_396->mCValueName,ret_value->mCValueName)&&type_397->mHeap) {
            __result160__ = (_Bool)1;
            /*i*/come_call_finalizer3(o2_saved_394,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result160__;
        }
        else {
            if(type_397->mHeap&&p_396->mCValueName) {
                if(type_397->mFunctionParam) {
                    __result161__ = (_Bool)1;
                    /*i*/come_call_finalizer3(o2_saved_394,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result161__;
                }
                else {
                    __result162__ = (_Bool)1;
                    /*i*/come_call_finalizer3(o2_saved_394,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result162__;
                }
            }
            else {
                if(klass_398->mStruct&&p_396->mCValueName&&type_397->mAllocaValue&&!type_397->mNoCallingDestructor) {
                    __result163__ = (_Bool)1;
                    /*i*/come_call_finalizer3(o2_saved_394,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                    return __result163__;
                }
            }
        }
    }
    /*i*/come_call_finalizer3(o2_saved_394,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_399;
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_399=info->lv_table;
    if(it_399==info->come_fun->mBlock->mVarTable) {
        if(existance_free_objects(it_399,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_399!=info->come_fun->mBlock->mVarTable) {
            if(existance_free_objects(it_399,ret_value,info)) {
                return (_Bool)1;
            }
            it_399=it_399->mParent;
        }
        if(existance_free_objects(it_399,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_400;
struct list$1sRightValueObjectph* o2_saved_401;
struct sRightValueObject* it_402;
    if(gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_400=info->right_value_objects;
    for(    o2_saved_401=(right_value_objects_400),it_402=list$1sRightValueObjectph_begin((o2_saved_401));    !list$1sRightValueObjectph_end((o2_saved_401));    it_402=list$1sRightValueObjectph_next((o2_saved_401))    ){
        if(it_402&&!it_402->mFreed) {
            if(string_operator_equals(it_402->mFunName,info->come_fun->mName)&&it_402->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

