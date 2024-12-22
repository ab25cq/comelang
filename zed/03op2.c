
class sMultNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sDivNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sModNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sEqNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sNotEqNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sGTEqNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sLTEqNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sGTNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sLTNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

sNode*% op_mult_node(sInfo* info) version 2
{
    sNode*% result = exp_node(info);
    
    while(*info->p == '/' || *info->p == '*' || *info->p == '%') {
        if(*info->p == '*') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sMultNode(result, right) implements sNode;
        }
        else if(*info->p == '/') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sDivNode(result, right) implements sNode;
        }
        else if(*info->p == '%') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_mult_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sModNode(result, right) implements sNode;
        }
    }
    
    return result;
}

class sAndAndNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

class sOrOrNode
{
    new(sNode*% left, sNode*% right)
    {
        int self.id = gNodeID++;
        sNode*% self.left = left;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
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
};

sNode*% op_eq_node(sInfo* info)
{
    sNode*% result = op_add_node(info);
    
    while((*info->p == '=' && *(info->p+1) == '=') || (*info->p == '!' && *(info->p+1) == '=') || *info->p == '>' || *info->p == '<' || (*info->p == '>' && *(info->p + 1) == '=') || (*info->p == '<' && *(info->p + 1) == '=')) {
        if(*info->p == '=' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sEqNode(result, right) implements sNode;
        }
        else if(*info->p == '!' && *(info->p+1) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sNotEqNode(result, right) implements sNode;
        }
        else if(*info->p == '>' && *(info->p +1 ) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sGTEqNode(result, right) implements sNode;
        }
        else if(*info->p == '<' && *(info->p +1 ) == '=') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sLTEqNode(result, right) implements sNode;
        }
        else if(*info->p == '>') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sGTNode(result, right) implements sNode;
        }
        else if(*info->p == '<') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_eq_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sLTNode(result, right) implements sNode;
        }
    }
    
    return result;
}

sNode*% op_andand_node(sInfo* info)
{
    sNode*% result = op_eq_node(info);
    
    while((*info->p == '&' && *(info->p+1) == '&') || (*info->p == '|' && *(info->p+1) == '|')) {
        if(*info->p == '&' && *(info->p+1) == '&') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_andand_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sAndAndNode(result, right) implements sNode;
        }
        else if(*info->p == '|' && *(info->p+1) == '|') {
            info->p+=2;
            skip_spaces(info);
            
            sNode*% right = op_andand_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sOrOrNode(result, right) implements sNode;
        }
    }
    
    return result;
}

sNode*% expression(sInfo* info) version 3
{
    return op_andand_node(info);
}

bool vm(sInfo* info) version 3
{
    switch(*info->op) {
        case OP_IMUL: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            if(left_value.kind == kIntValue && right_value.kind == kIntValue) {
                int lvalue = left_value.intValue;
                int rvalue = right_value.intValue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                int value = lvalue * rvalue;
                
                info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            else if(left_value.kind == kStrValue && right_value.kind == kIntValue) {
                wchar_t* lvalue = left_value.strValue;
                int rvalue = right_value.intValue;
                
                wstring value = lvalue * rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            else if(left_value.kind == kMapValue && right_value.kind == kIntValue) {
                map<ZVALUE*%, ZVALUE*%>* lvalue = left_value.mapValue;
                int rvalue = right_value.intValue;
                
                map<ZVALUE*%, ZVALUE*%>*% value = lvalue * rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kMapValue, map_value:value));
            }
            else if(left_value.kind == kListValue && right_value.kind == kIntValue) {
                list<ZVALUE*%>* lvalue = left_value.listValue;
                int rvalue = right_value.intValue;
                
                list<ZVALUE*%>*% value = lvalue * rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
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
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            int value = lvalue / rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IMOD: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            int value = lvalue % rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        case OP_IEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool value = left_value === right_value;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_INOTEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool value = left_value !== right_value;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IGT: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue > rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_ILT: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue < rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IGTEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue >= rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_ILTEQ: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue <= rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IANDAND: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool lvalue = left_value.boolValue;
            bool rvalue = right_value.boolValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue && rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        case OP_IOROR: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            bool lvalue = left_value.boolValue;
            bool rvalue = right_value.boolValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            bool value = lvalue || rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kBoolValue, bool_value:value));
            }
            break;
            
        default:
            return inherit(info);
            break;
    }
    
    return true;
}

