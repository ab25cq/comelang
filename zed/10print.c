
class sPrintNode
{
    new(sNode*% print_exp)
    {
        int self.id = gNodeID++;
        sNode*% self.print_exp = print_exp;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        sNode* print_exp = self.print_exp;
        
        if(!print_exp.compile(info)) {
            return false;
        }
        
        info->stack_num--;
        
        info.codes.append_int(OP_PRINT);
        
        return true;
    }
};

class sStdinNode
{
    new()
    {
        int self.id = gNodeID++;
        int self.dummy = 0;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_STDIN);
        
        info.stack_num++;
        
        return true;
    }
};

class sStdoutNode
{
    new()
    {
        int self.id = gNodeID++;
        int self.dummy = 0;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_STDOUT);
        
        info.stack_num++;
        
        return true;
    }
};

class sStderrNode
{
    new()
    {
        int self.id = gNodeID++;
        int self.dummy = 0;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_STDERR);
        
        info.stack_num++;
        
        return true;
    }
};


bool vm(sInfo* info) version 9
{
    inherit(info);
    
    switch(*info->op) {
        case OP_PRINT: {
            info->op++;
            
            ZVALUE* value = info.stack[-1];
            
            puts(value.to_string());
            
            info.stack.delete(-1, -1);
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

sNode*% exp_node(sInfo* info) version 8
{
    if(*info->p == '.') {
        return new sStdinNode() implements sNode;
    }
    
    if(is_word("print", info)) {
        info->p += strlen("print");
        skip_spaces(info);
        
        sNode*% node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if conditional expression\n");
            exit(2);
        }
        
        sNode*% print_exp = node;
        
        return new sPrintNode(print_exp) implements sNode;
    }
    else if(is_word("stdin", info)) {
        info->p += strlen("stdin");
        skip_spaces(info);
        
        return new sStdinNode() implements sNode;
    }
    else {
        return inherit(info);
    }
    
    return null;
}
