
class sIntNode
{
    new(int value) {
        int self.value = value;
        int self.id = gNodeID++;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_INT_VALUE);
        info.codes.append_int(self.value);
        
        info.stack_num++;
        
        return true;
    }
};

sNode*% exp_node(sInfo* info) version 1
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
            
            return new sIntNode(-n) implements sNode;
        }
    }
    else if(xisdigit(*info->p)) {
        int n = 0;
        while(xisdigit(*info->p)) {
            n = n * 10 + (*info->p - '0');
            info->p++;
        }
        skip_spaces(info);
        
        return new sIntNode(n) implements sNode;
    }
    else if(*info->p == '(') {
        info->p++;
        skip_spaces(info);
        
        sNode*% exp = expression(info);
        
        if(*info->p == ')') {
            info->p++;
            skip_spaces(info);
        }
        
        return exp;
    }
    
    return null;
}

sNode*% expression(sInfo* info) version 1
{
    return exp_node(info);
}

bool parse(sInfo* info) version 1
{
    sNode*% node = expression(info);
    
    if(node == null) {
        fprintf(stderr, "invalid expression\n");
        return false;
    }
    
    info->nodes.push_back(node);
    
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
                info.stack.delete(-1, -1);
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
            
    }
    
    return true;
}

