#include <neo-c.h>
#include "common.h"

private struct sPrintNode
{
    int id;
    sNode*% print_exp;
};

private sPrintNode*% sPrintNode*::initialize(sPrintNode*% self, sNode*% print_exp)
{
    self.id = gNodeID++;
    self.print_exp = print_exp;
    
    return self;
}

private unsigned int sPrintNode*::id(sPrintNode* self)
{
    return self.id;
}

private bool sPrintNode*::compile(sPrintNode* self, sInfo* info)
{
    sNode* print_exp = self.print_exp;
    
    if(!print_exp.compile->(info)) {
        return false;
    }
    
    info->stack_num--;
    
    info.codes.append_int(OP_PRINT);
    
    return true;
}

private struct sStdinNode
{
    int id;
    int dummy;
};

private sStdinNode*% sStdinNode*::initialize(sStdinNode*% self)
{
    self.id = gNodeID++;
    return self;
}

private unsigned int sStdinNode*::id(sStdinNode* self)
{
    return self.id;
}

private bool sStdinNode*::compile(sStdinNode* self, sInfo* info)
{
    info.codes.append_int(OP_STDIN);
    
    info.stack_num++;
    
    return true;
}

private struct sStdoutNode
{
    int id;
    int dummy;
};

private sStdoutNode*% sStdoutNode*::initialize(sStdoutNode*% self)
{
    self.id = gNodeID++;
    return self;
}

private unsigned int sStdoutNode*::id(sStdoutNode* self)
{
    return self.id;
}

private bool sStdoutNode*::compile(sStdoutNode* self, sInfo* info)
{
    info.codes.append_int(OP_STDOUT);
    
    info.stack_num++;
    
    return true;
}

private struct sStderrNode
{
    int id;
    int dummy;
};

private sStderrNode*% sStderrNode*::initialize(sStderrNode*% self)
{
    self.id = gNodeID++;
    return self;
}

private unsigned int sStderrNode*::id(sStderrNode* self)
{
    return self.id;
}

private bool sStderrNode*::compile(sStderrNode* self, sInfo* info)
{
    info.codes.append_int(OP_STDERR);
    
    info.stack_num++;
    
    return true;
}


bool vm(sInfo* info) version 5
{
    inherit(info);
    
    switch(*info->op) {
        case OP_PRINT: {
            info->op++;
            
            ZVALUE*? value = nullable info.stack[-1];
            
            puts(value!.to_string());
            
            info.stack.delete_back();
            }
            break;
            
        case OP_STDIN: {
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kFileValue, file_value:stdin));
            }
            break;
            
        case OP_STDOUT: {
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kFileValue, file_value:stdout));
            }
            break;
            
        case OP_STDERR: {
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kFileValue, file_value:stderr));
            }
            break;
    }
    
    return true;
}

sNode*? exp_node(sInfo* info) version 6
{
    if(*info->p == '.') {
        return borrow new sNode(new sStdinNode());
    }
    
    if(is_word("print", info)) {
        info->p += strlen("print");
        skip_spaces(info);
        
        sNode*? node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if conditional expression\n");
            exit(2);
        }
        
        sNode*% print_exp = dummy_heap node!;
        
        return borrow new sNode(new sPrintNode(print_exp));
    }
    else if(is_word("stdin", info)) {
        info->p += strlen("stdin");
        skip_spaces(info);
        
        return borrow new sNode(new sStdinNode());
    }
    else {
        return inherit(info);
    }
    
    return null;
}
