
bool compile_block(sNodeBlock& block, sInfo* info)
{
    list<sNode*%>* v = block;
    foreach(it, v) {
        if(!it.compile(info)) {
            return false;
        }
        
        arrange_stack(info);
    }
    
    return true;
}

class sIfNode
{
    new(sNode*% if_exp, sNodeBlock if_block, list<sNode*%>*% elif_exps, list<sNodeBlock>*% elif_blocks, sNodeBlock? else_block)
    {
        int self.id = gNodeID++;
        sNode*% self.if_exp = if_exp;
        sNodeBlock self.if_block = if_block;
        list<sNode*%>*% self.elif_exps = elif_exps;
        list<sNodeBlock>*% self.elif_blocks = elif_blocks
        sNodeBlock? self.else_block = clone else_block;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        sNode* if_exp = self.if_exp;
        sNodeBlock& if_block = self.if_block;
        list<sNode*%>* elif_exps = self.elif_exps;
        list<sNodeBlock>* elif_blocks = self.elif_blocks;
        sNodeBlock? else_block = self.else_block;
        
        list<int>*% end_points = new list<int>();
        
        if(!if_exp.compile(info)) {
            return false;
        }
        
        info.codes.append_int(OP_IF);
        int false_jump_point = info.codes.len;
        info.codes.append_int(0);
        
        info->stack_num--;
        
        if(!compile_block(if_block, info)) {
            return false;
        }
        
        info.codes.append_int(OP_GOTO);
        
        int end_point = info.codes.len;
        end_points.push_back(end_point);
        info.codes.append_int(0);
        
        using unsafe;
        
        int* p = (int*)(info.codes.buf + false_jump_point);
        *p = info.codes.len;
        
        for(int i= 0; i<elif_exps.length(); i++) {
            sNode* elif_exp = elif_exps[i];
            list<sNode*%>* elif_block = elif_blocks[i];
            
            if(!elif_exp.compile(info)) {
                return false;
            }
            
            info.codes.append_int(OP_IF);
            int false_jump_point = info.codes.len;
            info.codes.append_int(0);
            
            info->stack_num--;
            
            if(!compile_block(elif_block, info)) {
                return false;
            }
            
            info.codes.append_int(OP_GOTO);
            
            int end_point = info.codes.len;
            end_points.push_back(end_point);
            info.codes.append_int(0);
            
            using unsafe;
            
            int* p = (int*)(info.codes.buf + false_jump_point);
            *p = info.codes.len;
        }
        
        if(else_block) {
            if(!compile_block(else_block, info)) {
                return false;
            }
        }
        
        for(int i=0; i<end_points.length(); i++) {
            int end_point = end_points[i];
            
            int* p = (int*)(info.codes.buf + end_point);
            
            using unsafe;
            
            *p = info.codes.length();
        }
        
        return true;
    }
};

class sTrueNode
{
    new()
    {
        int self.id = gNodeID++;
        bool self.dummy = false;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_TRUE_VALUE);
        
        info.stack_num++;
        
        return true;
    }
};

class sFalseNode
{
    new()
    {
        int self.id = gNodeID++;
        bool self.dummy = false;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_FALSE_VALUE);
        
        info.stack_num++;
        
        return true;
    }
};

bool vm(sInfo* info) version 8
{
    inherit(info);
    
    switch(*info->op) {
        case OP_GOTO: {
            using unsafe;
            info->op++;
            
            int value = *info->op;
            info->op++;
            
            info->op = (int*)((char*)info->head + value);
            }
            break;
            
        case OP_IF: {
            info->op++;
            
            int value = *info->op;
            info->op++;
            
            ZVALUE* conditional = info.stack[-1];
            
            if(conditional.kind == kBoolValue) {
                bool exp = conditional.boolValue;
                
                if(!exp) {
                    using unsafe;
                    info.op = (int*)((char*)info->head + value);
                }
                
                info.stack.delete(-1, -1);
            }
            else {
                fprintf(stderr, "invalid conditional type\n");
                exit(2);
            }
            }
            break;
            
        case OP_TRUE_VALUE: {
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:true));
            }
            break;
            
        case OP_FALSE_VALUE: {
            info->op++;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:false));
            }
            break;
    }
    
    return true;
}

sNodeBlock parse_block(sInfo* info)
{
    list<sNode*%>*% result = new list<sNode*%>();
    
    if(*info->p != '{') {
        fprintf(stderr, "reuire {\n");
        exit(1);
    }
    
    info->p++;
    skip_spaces(info);
    
    while(true) {
        sNode*% node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if block expression\n");
            exit(1);
        }
        
        result.push_back(node);
        
        if(*info->p == ';') {
            info->p++;
            skip_spaces(info);
        }
        
        if(*info->p == '}') {
            info->p++;
            skip_spaces(info);
            break;
        }
    }
    
    return result;
}

bool is_word(char* str, sInfo* info)
{
    using unsafe;
    return strlen(info->p) >= strlen(str) && memcmp(info->p, str, strlen(str)) == 0 && (strlen(info->p) == strlen(str) || !xisalnum(*(info->p + strlen(str))));
}

sNode*% exp_node(sInfo* info) version 6
{
    if(is_word("true", info)) {
        info->p += strlen("true");
        skip_spaces(info);
        
        return new sTrueNode() implements sNode;
    }
    else if(is_word("false", info)) {
        info->p += strlen("false");
        skip_spaces(info);
        
        return new sFalseNode() implements sNode;
    }
    else if(is_word("if", info)) {
        info->p += strlen("if");
        skip_spaces(info);
        
        sNode*% node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require if conditional expression\n");
            exit(2);
        }
        
        sNode*% if_exp = node;
        
        sNodeBlock if_block = parse_block(info);
        
        list<sNode*%>*% elif_exps = new list<sNode*%>();
        list<sNodeBlock>*% elif_blocks = new list<sNodeBlock>();
        
        if(memcmp(info->p, "elif", 4) == 0 && !xisalnum(*(info->p+4))) {
            info->p += strlen("elif");
            skip_spaces(info);
            
            sNode*% node = expression(info);
            
            if(node == null) {
                fprintf(stderr, "reuire elif conditional expression\n");
                exit(2);
            }
            
            elif_exps.push_back(node);
            
            sNodeBlock elif_block = parse_block(info);
            
            elif_blocks.push_back(elif_block);
        }
        
        sNodeBlock else_block = null;
        
        if(memcmp(info->p, "else", 4) == 0 && !xisalnum(*(info->p+4))) {
            info->p += strlen("else");
            skip_spaces(info);
            
            else_block = parse_block(info);
        }
        
        return new sIfNode(if_exp, if_block, elif_exps, elif_blocks, clone else_block) implements sNode;
    }
    else {
        return inherit(info);
    }
    
    return null;
}
