#include <neo-c.h>
#include "common.h"

public {#include <neo-c.h>}
public {
struct sInfo;

extern int gNodeID;

protocol sNode
{
    unsigned int id();
    bool compile(sInfo* info);
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
}

private struct sIntNode
{
    int id;
    int value;
};

private sIntNode*% sIntNode*::initialize(sIntNode*% self, int value)
{
    self.value = value;
    self.id = gNodeID++;
    
    return self;
}

private unsigned int sIntNode*::id(sIntNode*% self)
{
    return self.id;
}

private bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    info.codes.append_int(OP_INT_VALUE);
    info.codes.append_int(self.value);
    
    info.stack_num++;
    
    return true;
}

private struct sAddNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sAddNode*% sAddNode*::initialize(sAddNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sAddNode*::id(sAddNode*% self)
{
    return self.id;
}

private bool sAddNode*::compile(sAddNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IADD);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sSubNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sSubNode*% sSubNode*::initialize(sSubNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sSubNode*::id(sSubNode*% self)
{
    return self.id;
}

private bool sSubNode*::compile(sSubNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_ISUB);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sMultNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sMultNode*% sMultNode*::initialize(sMultNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sMultNode*::id(sMultNode*% self)
{
    return self.id;
}

private bool sMultNode*::compile(sMultNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IMUL);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sDivNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sDivNode*% sDivNode*::initialize(sDivNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sDivNode*::id(sDivNode*% self)
{
    return self.id;
}

private bool sDivNode*::compile(sDivNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IDIV);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sModNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sModNode*% sModNode*::initialize(sModNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sModNode*::id(sModNode*% self)
{
    return self.id;
}

private bool sModNode*::compile(sModNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IMOD);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sEqNode*% sEqNode*::initialize(sEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sEqNode*::id(sEqNode*% self)
{
    return self.id;
}

private bool sEqNode*::compile(sEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sNotEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sNotEqNode*% sNotEqNode*::initialize(sNotEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sNotEqNode*::id(sNotEqNode*% self)
{
    return self.id;
}

private bool sNotEqNode*::compile(sNotEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_INOTEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sGTEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sGTEqNode*% sGTEqNode*::initialize(sGTEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sGTEqNode*::id(sGTEqNode*% self)
{
    return self.id;
}

private bool sGTEqNode*::compile(sGTEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IGTEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sLTEqNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sLTEqNode*% sLTEqNode*::initialize(sLTEqNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sLTEqNode*::id(sLTEqNode*% self)
{
    return self.id;
}

private bool sLTEqNode*::compile(sLTEqNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_ILTEQ);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sGTNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sGTNode*% sGTNode*::initialize(sGTNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sGTNode*::id(sGTNode*% self)
{
    return self.id;
}

private bool sGTNode*::compile(sGTNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IGT);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

private struct sLTNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sLTNode*% sLTNode*::initialize(sLTNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sLTNode*::id(sLTNode*% self)
{
    return self.id;
}

private bool sLTNode*::compile(sLTNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_ILT);
    
    info.stack_num -= 2;
    info.stack_num++;
    
    return true;
}

sNode*? exp_node(sInfo* info) version 1
{
    if(*info->p == '-' && xisdigit(*(info->p+1))) {
        info->p++;
        
        if(xisdigit(*info->p)) {
            int n = 0;
            while(xisdigit(*info->p)) {
                n = n * 10 + (*info->p - '0');
                info->p++;
            }
            skip_spaces(info);
            
            sNode* result = borrow new sNode(new sIntNode(-n));
            
            return result;
        }
    }
    else if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces(info);
        
        sNode* result = borrow new sNode(new sIntNode(n));
        
        return result;
    }
    
    return null;
}

private sNode*? op_mult_node(sInfo* info)
{
    sNode*? result = exp_node(info);
    
    while(*info->p == '/' || *info->p == '*' || *info->p == '%') {
        if(*info->p == '*') {
            info->p++;
            skip_spaces(info);
            
            sNode*? right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sMultNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '/') {
            info->p++;
            skip_spaces(info);
            
            sNode*? right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sDivNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces(info);
            
            sNode*? right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sModNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
    }
    
    return result;
}

private struct sAndAndNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sAndAndNode*% sAndAndNode*::initialize(sAndAndNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sAndAndNode*::id(sAndAndNode* self)
{
    return self.id;
}

private bool sAndAndNode*::compile(sAndAndNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IANDAND);
    
    return true;
}

private struct sOrOrNode
{
    int id;
    sNode*% left;
    sNode*% right;
};

private sOrOrNode*% sOrOrNode*::initialize(sOrOrNode*% self, sNode*% left, sNode*% right)
{
    self.id = gNodeID++;
    self.left = left;
    self.right = right;
    
    return self;
}

private unsigned int sOrOrNode*::id(sOrOrNode* self)
{
    return self.id;
}

private bool sOrOrNode*::compile(sOrOrNode* self, sInfo* info)
{
    if(!self.left.compile->(info)) {
        return false;
    }
    if(!self.right.compile->(info)) {
        return false;
    }
    
    info.codes.append_int(OP_IOROR);
    
    return true;
}

private sNode*? op_add_node(sInfo* info)
{
    sNode*? result = op_mult_node(info);
    
    while(*info->p == '+' || *info->p == '-') {
        if(*info->p == '+') {
            info->p++;
            skip_spaces(info);
            
            sNode*? right = op_add_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sAddNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '-') {
            info->p++;
            skip_spaces(info);
            
            sNode*? right = op_add_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sSubNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
    }
    
    return result;
}

private sNode*? op_eq_node(sInfo* info)
{
    sNode*? result = op_add_node(info);
    
    while((*info->p == '=' && *(info->p+1) == '=') || (*info->p == '!' && *(info->p+1) == '=') || *info->p == '>' || *info->p == '<' || (*info->p == '>' && *(info->p + 1) == '=') || (*info->p == '<' && *(info->p + 1) == '=')) {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sEqNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sNotEqNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '>' && *(info->p +1 ) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sGTEqNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '<' && *(info->p +1 ) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sLTEqNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '>') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sGTNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '<') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sLTNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
    }
    
    return result;
}

private sNode*? op_andand_node(sInfo* info)
{
    sNode*? result = op_eq_node(info);
    
    while((*info->p == '&' && *(info->p+1) == '&') || (*info->p == '|' && *(info->p+1) == '|')) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_andand_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sAndAndNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
        else if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*? right = op_andand_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            sNode*? result_before = result;
            
            result = borrow new sNode(new sOrOrNode(clone result!, clone right!));
            
            delete result_before!;
            delete right!;
        }
    }
    
    return result;
}

sNode*? expression(sInfo* info) version 1
{
    return op_andand_node(info);
}

bool parse(sInfo* info) version 1
{
    sNode*? node = expression(info);
    
    info->nodes.push_back(dummy_heap node!);
    
    return true;
}

void arrange_stack(sInfo* info)
{
    if(info->stack_num > 0) {
        info.codes.append_int(OP_POP);
        info.codes.append_int(info->stack_num);
    }
}

bool vm(sInfo* info) version 1
{
    switch(*info->op) {
        case OP_POP: {
            info->op++;
            
            int value = *info->op;
            info->op++;
            
            if(info.stack.length() > 0) {
                info->result_value = clone info.stack[-1];
            }
            
            for(int i=0; i<value; i++) {
                info.stack.delete_back();
            }
            }
            break;
            
        case OP_INT_VALUE: {
            info->op++;
            int value = *info->op;
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IADD: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            if(left_value!.kind == kIntValue && right_value!.kind == kIntValue) {
                int lvalue = left_value!.intValue;
                int rvalue = right_value!.intValue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                int value = lvalue + rvalue;
                
                info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            else if(left_value!.kind == kStrValue && right_value!.kind == kStrValue) {
                wchar_t* lvalue = borrow left_value!.strValue;
                wchar_t* rvalue = borrow right_value!.strValue;
                
                wstring value = lvalue + rvalue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            else if(left_value!.kind == kMapValue && right_value!.kind == kMapValue) {
                map<ZVALUE*%, ZVALUE*%>* lvalue = borrow left_value!.mapValue;
                map<ZVALUE*%, ZVALUE*%>* rvalue = borrow right_value!.mapValue;
                
                map<ZVALUE*%, ZVALUE*%>*% value = lvalue + rvalue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                info->stack.push_back(new ZVALUE(kind: kMapValue, map_value:value));
            }
            else if(left_value!.kind == kListValue && right_value!.kind == kListValue) {
                list<ZVALUE*%>* lvalue = borrow left_value!.listValue;
                list<ZVALUE*%>* rvalue = borrow right_value!.listValue;
                
                list<ZVALUE*%>*% value = lvalue + rvalue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                info->stack.push_back(new ZVALUE(kind: kListValue, list_value:value));
            }
            else {
                fprintf(stderr, "invalid type for + operator\n");
                exit(2);
            }
            }
            break;
            
        case OP_ISUB: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            int lvalue = left_value!.intValue;
            int rvalue = right_value!.intValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            int value = lvalue - rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IMUL: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            if(left_value!.kind == kIntValue && right_value!.kind == kIntValue) {
                int lvalue = left_value!.intValue;
                int rvalue = right_value!.intValue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                int value = lvalue * rvalue;
                
                info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            else if(left_value!.kind == kStrValue && right_value!.kind == kIntValue) {
                wchar_t* lvalue = borrow left_value!.strValue;
                int rvalue = right_value!.intValue;
                
                wstring value = lvalue * rvalue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            else if(left_value!.kind == kMapValue && right_value!.kind == kIntValue) {
                map<ZVALUE*%, ZVALUE*%>* lvalue = borrow left_value!.mapValue;
                int rvalue = right_value!.intValue;
                
                map<ZVALUE*%, ZVALUE*%>*% value = lvalue * rvalue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                info->stack.push_back(new ZVALUE(kind: kMapValue, map_value:value));
            }
            else if(left_value!.kind == kListValue && right_value!.kind == kIntValue) {
                list<ZVALUE*%>* lvalue = borrow left_value!.listValue;
                int rvalue = right_value!.intValue;
                
                list<ZVALUE*%>*% value = lvalue * rvalue;
                
                info.stack.delete_back();
                info.stack.delete_back();
                
                info->stack.push_back(new ZVALUE(kind: kListValue, list_value:value));
            }
            else {
                fprintf(stderr, "invalid type for + operator\n");
                exit(2);
            }
            }
            break;
            
        case OP_IDIV: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            int lvalue = left_value!.intValue;
            int rvalue = right_value!.intValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            int value = lvalue / rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IMOD: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            int lvalue = left_value!.intValue;
            int rvalue = right_value!.intValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            int value = lvalue % rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IEQ: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            bool value = left_value! === right_value!;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_INOTEQ: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            bool value = left_value! !== right_value!;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IGT: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            int lvalue = left_value!.intValue;
            int rvalue = right_value!.intValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            bool value = lvalue > rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_ILT: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            int lvalue = left_value!.intValue;
            int rvalue = right_value!.intValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            bool value = lvalue < rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IGTEQ: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            int lvalue = left_value!.intValue;
            int rvalue = right_value!.intValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            bool value = lvalue >= rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_ILTEQ: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            int lvalue = left_value!.intValue;
            int rvalue = right_value!.intValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            bool value = lvalue <= rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IANDAND: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            bool lvalue = left_value!.boolValue;
            bool rvalue = right_value!.boolValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            bool value = lvalue && rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IOROR: {
            info->op++;
            
            ZVALUE*? left_value = nullable info.stack[-2];
            ZVALUE*? right_value = nullable info.stack[-1];
            
            bool lvalue = left_value!.boolValue;
            bool rvalue = right_value!.boolValue;
            
            info.stack.delete_back();
            info.stack.delete_back();
            
            bool value = lvalue || rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
    }
    
    return true;
}

