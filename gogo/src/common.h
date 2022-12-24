
////////////////////////////
// src/main.c
////////////////////////////
#include <neo-c.h>

#include <llvm-c/Core.h>

#include <llvm-c/DebugInfo.h>

#define STACK_NUM 512

#define COMPILE_ERR_MSG_MAX 5

struct sType;

extern LLVMContextRef gContext;
extern LLVMModuleRef gModule;
extern LLVMBuilderRef gBuilder;
extern LLVMDIBuilderRef gDIBuilder;
void node_init(char* sname);
void node_final(char* sname);
struct sVar;

struct LVALUE
{
    sType* type;
    LLVMValueRef value;
    LLVMValueRef address;
    sVar* var;
};

extern int gNodeID ;
 struct sInfo; 

protocol sNode
{
    unsigned int (*id)(protocol_obj_t self);
    bool (*compile)(protocol_obj_t self, sInfo* info);
};

struct sVarTable;

struct sInfo
{
    string sname;
    int sline;

    char* p;
    string source;

    int err_num;
    sType* type;

    int stack_num;

    int block_level;

    bool no_err_msg;

    LVALUE* stack;
    LVALUE* stack_head;

    LLVMBasicBlockRef current_block;

    sVarTable* lv_table;

    bool last_expression_is_return;
};

sNode*? expression(sInfo* info);
bool parse(list<sNode*>* nodes, sInfo* info);
string parse_word(sInfo* info);
void expect_next_character_with_one_forward(char* characters, sInfo* info);
LVALUE* get_value_from_stack(sInfo* info, int offset);
void dec_stack_ptr(int value, sInfo* info);
void push_value_to_stack_ptr(LVALUE* value, sInfo* info);
void arrange_stack(sInfo* info, int top);
bool compile(list<sNode*>* nodes, sInfo* info);
void skip_spaces(sInfo* info);
void compile_err_msg(sInfo* info, const char* msg, ...);
void llvm_change_block(LLVMBasicBlockRef current_block, sInfo* info);
int main(int argc, char** argv);

////////////////////////////
// src/type.c
////////////////////////////
#define PARAMS_MAX 32

#define VAR_NAME_MAX 128

struct sClass
{
    string name;
    bool number;
    bool unsigned_;
};

void class_init();
void class_final();
sClass* sClass*::initialize(sClass* self, char* class_name, bool number, bool unsigned_);
sClass* sClass*::clone(sClass* klass);
sClass* get_class(char* class_name_);
struct sType
{
    sClass* klass;

    int pointer_num;
    int size_num;
    bool immutable_;
    bool unsigned_;
    bool global_;
    bool constant_;

    list<sType*>* param_types;
    struct sType* result_type;

    list<int>* num_arrays;
};

sType* sType*::initialize(sType* self);
sType* sType*::clone(sType* node_type);
bool auto_cast_posibility(sType* left_type, sType* right_type);
bool cast_posibility(sType* left_type, sType* right_type);
bool substitution_posibility(sType* left_type, sType* right_type, LLVMValueRef right_obj, sInfo* info);
bool type_identify(sType* left, sType* right);
sType* create_node_type_with_class_name(char* class_name_);
bool type_identify_with_class_name(sType* left, char* right_class_name);
bool type_equalability(sType* left_type, sType* right_type);
LLVMTypeRef create_llvm_type_from_node_type(sType* node_type);
LLVMTypeRef create_llvm_type_with_class_name(char* class_name);
bool cast_right_type_to_left_type(sType* left_type, sType** right_type, LVALUE* rvalue, struct sInfo* info);

////////////////////////////
// src/vtable.c
////////////////////////////

////////////////////////////
// src/01fun.c
////////////////////////////
struct sParam
{
    string mName;
    sType* mType;
};

sParam* sParam*::initialize(sParam* self, string name, sType* type);
struct sFunction {
    string name;
    sType* result_type;
    list<sParam*>* params;
    LLVMValueRef llvm_fun;
};

extern map<string,sFunction*>* gFuncs;
sFunction* sFunction*::initialize(sFunction* self, string name, sType* result_type, list<sParam*>* params, LLVMValueRef llvm_fun);
void func_init();
void func_final();
extern LLVMValueRef gFunction;
struct sNodeBlock
{
    list<sNode*>* nodes;
    sVarTable* lv_table;
};

sNodeBlock* sNodeBlock*::initialize(sNodeBlock* self);
sType*, bool parse_type(sInfo* info);
list<sParam*>*, bool parse_params(sInfo* info);
sNodeBlock*, bool parse_block(sInfo* info);
bool compile_block(sNodeBlock* node_block, sInfo* info);
list<sNode*>*, bool parse_fun_call_params(sInfo* info);
sNode*? word_expression(string word, sInfo* info);
sNode*? expression(sInfo* info) version 2;

////////////////////////////
// src/02int.c
////////////////////////////
sNode*? word_expression(string word, sInfo* info) version 2;
sNode*? expression(sInfo* info) version 3;

////////////////////////////
// src/03var.c
////////////////////////////
struct sVar {
    string name;
    sType*? type;
    int index;

    LLVMValueRef llvm_value;
};

sVar* sVar*::initialize(sVar* self, string name, sType*? type, int index);
struct sVarTable {
    map<string, sVar*>* vtable;
    int var_num;

    int block_level;

    struct sVarTable*? parent;
};


sVarTable* sVarTable*::initialize(sVarTable* self, sVarTable*? parent);
void sVarTable*::add_variable(sVarTable* self, char* name, sType*? type_);
sVar*? sVarTable*::get_variable_from_index(sVarTable* self, int index);
sVar*? sVarTable*::get_variable_from_this_table_only(sVarTable* self, char* name);
sVar*? get_variable_from_table(sVarTable* table, char* name);
sVarTable* init_block_vtable(sVarTable*? lv_table);
sNode*? word_expression(string word, sInfo* info) version 3;

////////////////////////////
// src/04if.c
////////////////////////////




sNode*? word_expression(string word, sInfo* info) version 4;

