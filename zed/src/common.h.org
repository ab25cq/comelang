#include <comelang.h>

struct sInfo;

extern int gNodeID;

protocol sNode
{
    unsigned int (*id)(protocol_obj_t self);
    bool (*compile)(protocol_obj_t self, sInfo* info);
};

inline unsigned int sNode*::get_hash_key(sNode* self)
{
    return self.id->();
}

inline bool sNode*::equals(sNode* self, sNode* right)
{
    return (self.compile == right.compile);
}

struct ZVALUE 
{
    enum { kIntValue, kStrValue, kBoolValue, kNullValue, kFileValue, kRegexValue, kListValue, kMapValue } kind;
    
    int intValue;
    wstring strValue;
    bool boolValue;
    FILE* fileValue;
    nregex regexValue;
    list<ZVALUE*%>*% listValue;
    map<ZVALUE*%, ZVALUE*%>*% mapValue;
};

inline ZVALUE*% ZVALUE*::initialize(ZVALUE*% self, int kind, int int_value=0, wstring str_value=wstring(""), bool bool_value=false, FILE* file_value=null, nregex regex_value=null, list<ZVALUE*%>*% list_value=null, map<ZVALUE*%, ZVALUE*%>*% map_value=null)
{
    self.kind = kind;
    self.intValue = int_value;
    self.strValue = str_value;
    self.boolValue = bool_value;
    self.fileValue = file_value;
    self.regexValue = regex_value;
    self.listValue = list_value;
    self.mapValue = map_value;
    
    return self;
}

string ZVALUE*::to_string(ZVALUE* self);
unsigned int ZVALUE*::get_hash_key(ZVALUE* self);
bool ZVALUE*::equals(ZVALUE* self, ZVALUE* right);
bool ZVALUE*::operator_equals(ZVALUE* self, ZVALUE* right);
int ZVALUE*::compare(ZVALUE* self, ZVALUE* right);

struct sInfo
{
    char* p;
    string command;
    buffer*% codes;
    vector<sNode*%>*% nodes;
    int* head;
    int* op;
    vector<ZVALUE*%>*% stack;
    
    int loop_head;
    
    vector<int>*%? breaks;
    
    ZVALUE*% result_value;
    
    int stack_num;
};

/// main.c ///
#define OP_INT_VALUE 1
#define OP_IADD 2
#define OP_ISUB 3
#define OP_IMUL 4
#define OP_IDIV 5
#define OP_IMOD 6
#define OP_IEQ  7
#define OP_INOTEQ 8
#define OP_IGT  9
#define OP_ILT 10
#define OP_IGTEQ 11
#define OP_ILTEQ 12
#define OP_IANDAND 13
#define OP_IOROR 14
#define OP_POP 15

#define OP_STR_VALUE 20
#define OP_TRUE_VALUE 21
#define OP_FALSE_VALUE 22

#define OP_STORE 30
#define OP_LOAD 31

#define OP_IF 40
#define OP_GOTO 41

#define OP_PRINT 50
#define OP_STDIN 51
#define OP_STDOUT 52
#define OP_STDERR 53

#define OP_REGEX_VALUE 60
#define OP_LIST_VALUE 61
#define OP_MAP_VALUE 62

#define OP_FUN 63

#define OP_LOAD_ELEMENT 64
#define OP_STORE_ELEMENT 65

void skip_spaces(sInfo* info);

/// 01int.c ///
sNode*? expression(sInfo* info) version 1;
sNode*? exp_node(sInfo* info) version 1;

bool parse(sInfo* info) version 1;
bool vm(sInfo* info) version 1;

void arrange_stack(sInfo* info);

/// 02str.c ///
void append_str_to_codes(sInfo* info, wstring& str);
wstring get_str_from_codes(sInfo* info);

sNode*? exp_node(sInfo* info) version 2;
bool vm(sInfo* info) version 2;

/// 03var.c ///
sNode*? exp_node(sInfo* info) version 3;
bool vm(sInfo* info) version 3;

void initialize_modules();
void finalize_modules();

extern ZVALUE gNullValue;

void append_var(wstring name, ZVALUE* value);

/// 04if.c ///
typedef vector<sNode*%>*% sNodeBlock;
sNodeBlock? parse_block(sInfo* info);

sNode*? exp_node(sInfo* info) version 4;
bool vm(sInfo* info) version 4;

bool compile_block(sNodeBlock& block, sInfo* info);

bool is_word(char* str, sInfo* info);

/// 05loop.c ///
sNode*? exp_node(sInfo* info) version 5;

/// 06print.c ///
sNode*? exp_node(sInfo* info) version 6;
bool vm(sInfo* info) version 5;

/// 07regex.c ///
sNode*? exp_node(sInfo* info) version 7;
bool vm(sInfo* info) version 6;

/// 08list.c ///
sNode*? exp_node(sInfo* info) version 8;
bool vm(sInfo* info) version 7;

/// 09fun.c ///
sNode*? exp_node(sInfo* info) version 9;
bool vm(sInfo* info) version 8;
