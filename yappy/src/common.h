#include <neo-c.h>

/// type.c ///
struct sPyClass {
    char* mName;

    int mGenericsNum;
    int mMethodGenericsNum;
};

struct sPyType;

struct sPyType
{
    sPyClass* mClass;
    
    vector<sPyType*>* mGenericsTypes;
};

void add_type(char* name, vector<sPyType*>* generics_types);
sPyType* get_type(char* name);

sPyType* sPyType_initialize(sPyType* self, char* name, vector<sPyType*>* generics_types, int generics_num, int method_generics_num);

void initialize_modules() version 2;
void finalize_modules() version 2;

struct sParserInfo
{
    char* p;
    int sline;
    char* fname;
    
    int stack_num;
    
    bool in_global_context;
    int space_num;
    
    int loop_head;
    vector<int>* breaks;
    bool in_fun_call;
};

struct ZVALUE;

struct ZVALUE 
{
    enum { kIntValue, kBoolValue, kLongValue, kStringValue, kObjValue, kNoneValue, kUndefinedValue, kExceptionValue, kModuleValue, kClassValue, kListValue, kMapValue, kTupleValue, kRegexValue, kMatchObjectValue } kind;
    
    union {
        int intValue;
        bool boolValue;
        long longValue;
        wchar_t* stringValue;
        void* objValue;
        enum { kExceptionVarNotFound, kExceptionDivisionByZero, kExceptionNameError, kExceptionTypeError, kExceptionMethodNotFound, kExceptionRegCompileError } expValue;
        void* moduleValue;
        void* classValue;
        list<ZVALUE>* listValue;
        map<ZVALUE, ZVALUE>* mapValue;
        immutable list<ZVALUE>* tupleValue;
        regex_struct* regexValue;
        
        struct matchValueStruct {
            wchar_t* str;
            list<match_object*>* object;
        } matchValue;
    } value;
};

inline void print_exception(ZVALUE exception)
{
    if(exception.kind != kExceptionValue) {
        fprintf(stderr, "not exception\n");
        exit(1);
    }
    switch(exception.value.expValue) {
        case kExceptionDivisionByZero:
            fprintf(stderr, "DivisionByZerro Excetpion\n");
            break;
            
        case kExceptionNameError:
            fprintf(stderr, "NameError Excetpion\n");
            break;
            
        case kExceptionVarNotFound:
            fprintf(stderr, "VarNotFound Excetpion\n");
            break;
            
        case kExceptionRegCompileError:
            fprintf(stderr, "RegCompileError Excetpion\n");
            break;
            
        case kExceptionMethodNotFound:
            fprintf(stderr, "MethodNotFound Exception\n");
            break;
            
        case kExceptionTypeError:
            fprintf(stderr, "Type Error Excetpion\n");
            break;
    }
}

struct sVar
{
    char* name;
    ZVALUE value;
};

#define ZSTACK_MAX 1024

#define OP_INT_VALUE 1
#define OP_ADD 2
#define OP_SUB 3
#define OP_STRING_VALUE 4
#define OP_PRINT 5
#define OP_POP 6
#define OP_STORE 7
#define OP_LOAD 8
#define OP_FUNCALL 9
#define OP_BOOL_VALUE 10
#define OP_IF 11
#define OP_GOTO 12
#define OP_EQ 13
#define OP_NOT_EQ 14
#define OP_MULT 15
#define OP_DIV 16
#define OP_EXIT 17
#define OP_RETURN 18
#define OP_FUN 19
#define OP_IMPORT 20
#define OP_METHOD_CALL 21
#define OP_LOAD_FIELD 22
#define OP_STORE_FIELD 23
#define OP_CLASS 24
#define OP_LEN 25
#define OP_LIST_VALUE 26
#define OP_LIST_INDEX 27
#define OP_OROR 28
#define OP_ANDAND 29
#define OP_INT 30
#define OP_STR 31
#define OP_NONE_VALUE 32
#define OP_TYPE 33
#define OP_GET_ELEMENT 34
#define OP_INIT_GET_ELEMENT 35
#define OP_TUPLE_VALUE 36
#define OP_MAP_VALUE 37
#define OP_IS 38
#define OP_IS_NOT 39

/// main.c ///

protocol sNode;

void skip_spaces(sParserInfo* info);
void skip_spaces_until_eol(sParserInfo* info);
string parse_word(sParserInfo* info);
list<sNode*%>*%? parse_block(sParserInfo* info);
buffer*% compile_nodes(list<sNode*>* nodes, sParserInfo* info);
void compile_block(buffer* codes, list<sNode*>* nodes, sParserInfo* info);

bool import_module(char* module_name);


/// node ///
protocol sNode
{
    bool compile(buffer* codes, sParserInfo* info);
};

/// 01int.c ///
bool expression(sNode** node, sParserInfo* info) version 1;
sNode*? exp_node(sParserInfo* info) version 1;

inline bool sNode*::equals(sNode* left, sNode* right)
{
    return left == right;
}

void initialize_modules() version 1;
void finalize_modules() version 1;

extern ZVALUE gNoneValue;
extern ZVALUE gUndefined;

struct sVMInfo 
{
    ZVALUE exception;
    ZVALUE return_value;
    
    char* module_name;
    char* class_name;
    
    int* p;
    int* head;
    
    ZVALUE stack[ZSTACK_MAX];
    int stack_num;
};

void vm_init(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info);
bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 1;
bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 99;

/// 02add.c ///
bool expression(sNode** node, sParserInfo* info) version 2;

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 98;

/// 03str.c ///
sNode*? exp_node(sParserInfo* info) version 3;
sNode* method_node(sNode* node, sParserInfo* info) version 1;

bool vm(buffer* codes, map<char*, ZVALUE>* params, sVMInfo* info) version 97;

/*
/// 04print.c ///
bool wordcmp(char* p, char* word2);

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 4;

sNode*? exp_node(sParserInfo* info) version 4;

/// 05var.c ///
sNode*? exp_node(sParserInfo* info) version 5;
sNode*? fun_node(char* fun_name, sParserInfo* info) version 5;   // implemented after layer
sNode*? def_node(sParserInfo* info) version 5;   // implemented after layer
sNode*? class_node(sParserInfo* info) version 5;   // implemented after layer
sNode*? index_node(char* var_name, sParserInfo* info) version 5;   // implemented after layer

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 5;

sPyType* parse_type(sParserInfo* info);

/// 06fun.c ///
sNode*? fun_node(char* fun_name, sParserInfo* info) version 6;
sNode*? def_node(sParserInfo* info) version 6;
sNode*? class_node(sParserInfo* info) version 6;   // implemented after layer

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 6;

/// 07bool.c ///
sNode*? exp_node(sParserInfo* info) version 7;

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 7;

/// 08if.c ///
sNode*? exp_node(sParserInfo* info) version 8;

bool compile(sNode* node, buffer* codes, sParserInfo* info) version 8;

/// 09comment.c ///
bool expression(sNode** node, sParserInfo* info) version 99;

/// 10while.c ///
sNode*? exp_node(sParserInfo* info) version 10;
bool compile(sNode* node, buffer* codes, sParserInfo* info) version 10;

/// 11op.c ///
bool expression(sNode** node, sParserInfo* info) version 11;
bool compile(sNode* node, buffer* codes, sParserInfo* info) version 11;

/// 12module.c ///
sNode*? exp_node(sParserInfo* info) version 12;
bool compile(sNode* node, buffer* codes, sParserInfo* info) version 12;

sNode*? method_node(sNode* node, sParserInfo* info);

/// 13list.c ///
sNode*? exp_node(sParserInfo* info) version 13;
bool compile(sNode* node, buffer* codes, sParserInfo* info) version 13;

sNode*? index_node(char* var_name, sParserInfo* info) version 13;
*/
