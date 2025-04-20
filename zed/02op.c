
class sAddNode
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
        if(!self.left.compile(info)) {
            return false;
        }
        if(!self.right.compile(info)) {
            return false;
        }
        
        info.codes.append_int(OP_IADD);
        
        info.stack_num -= 2;
        info.stack_num++;
        
        return true;
    }
};

class sSubNode
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
        if(!self.left.compile(info)) {
            return false;
        }
        if(!self.right.compile(info)) {
            return false;
        }
        
        info.codes.append_int(OP_ISUB);
        
        info.stack_num -= 2;
        info.stack_num++;
        
        return true;
    }
};

sNode*% op_mult_node(sInfo* info) version 1
{
    return exp_node(info);
}

sNode*% op_add_node(sInfo* info)
{
    sNode*% result = op_mult_node(info);
    
    while(*info->p == '+' || *info->p == '-') {
        if(*info->p == '+') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_add_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sAddNode(result, dummy_heap right) implements sNode;
        }
        else if(*info->p == '-') {
            info->p++;
            skip_spaces(info);
            
            sNode*% right = op_add_node(info);
            
            if(result == null) {
                return null;
            }
            
            if(right == null) {
                return null;
            }
            
            result = new sSubNode(result, dummy_heap right) implements sNode;
        }
    }
    
    return result;
}

sNode*% expression(sInfo* info) version 2
{
    return op_add_node(info);
}

bool vm(sInfo* info) version 2
{
    switch(*info->op) {
        case OP_IADD: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            if(left_value.kind == kIntValue && right_value.kind == kIntValue) {
                int lvalue = left_value.intValue;
                int rvalue = right_value.intValue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                int value = lvalue + rvalue;
                
                info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            else if(left_value.kind == kIntValue && right_value.kind == kStrValue) {
                int lvalue = left_value.intValue;
                wchar_t* rvalue = right_value.strValue;
                
                wstring value = lvalue.to_wstring() + rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            else if(left_value.kind == kStrValue && right_value.kind == kIntValue) {
                wchar_t* lvalue = left_value.strValue;
                int rvalue = right_value.intValue;
                
                wstring value = lvalue + rvalue.to_wstring();
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            else if(left_value.kind == kStrValue && right_value.kind == kStrValue) {
                wchar_t* lvalue = left_value.strValue;
                wchar_t* rvalue = right_value.strValue;
                
                wstring value = lvalue + rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kStrValue, str_value:value));
            }
            else if(left_value.kind == kMapValue && right_value.kind == kMapValue) {
                map<ZVALUE*%, ZVALUE*%>* lvalue = left_value.mapValue;
                map<ZVALUE*%, ZVALUE*%>* rvalue = right_value.mapValue;
                
                map<ZVALUE*%, ZVALUE*%>*% value = lvalue + rvalue;
                
                info.stack.delete(-1, -1);
                info.stack.delete(-1, -1);
                
                info->stack.push_back(new ZVALUE(kind: kMapValue, map_value:value));
            }
            else if(left_value.kind == kListValue && right_value.kind == kListValue) {
                list<ZVALUE*%>*% lvalue = left_value.listValue;
                list<ZVALUE*%>*% rvalue = right_value.listValue;
                
                list<ZVALUE*%>*% value = lvalue + rvalue;
                
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
            
        case OP_ISUB: {
            info->op++;
            
            ZVALUE* left_value = info.stack[-2];
            ZVALUE* right_value = info.stack[-1];
            
            int lvalue = left_value.intValue;
            int rvalue = right_value.intValue;
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
            int value = lvalue - rvalue;
            
            info->stack.push_back(new ZVALUE(kind: kIntValue, int_value:value));
            }
            break;
            
        default:
            return inherit(info);
            break;
    }
    
    return true;
}
