
class sStoreNode
{
    new(wstring var_name, sNode*% right)
    {
        int self.id = gNodeID++;
        wstring self.var_name = var_name;
        sNode*% self.right = right;
    }
    
    bool compile(sInfo* info)
    {
        if(!self.right.compile(info)) {
            return false;
        }
        info.codes.append_int(OP_STORE);
        
        append_str_to_codes(info, str:self.var_name);
        
        info->stack_num--;
        
        return true;
    }
    
    unsigned int id()
    {
        return self.id;
    }
};

class sLoadNode
{
    new(wstring var_name)
    {
        int self.id = gNodeID++;
        wstring self.var_name = var_name;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_LOAD);
        
        append_str_to_codes(info, str:self.var_name);
        
        info->stack_num++;
        
        return true;
    }
    
    unsigned int id()
    {
        return self.id;
    }
};

class sLoadElementNode
{
    new(string var_name, sNode*% index)
    {
        int self.id = gNodeID++;
        
        string self.var_name = var_name;
        sNode*% self.index = index;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        sNode* index = self.index;
        
        if(!index.compile(info)) {
            return false;
        }
        
        info.codes.append_int(OP_LOAD_ELEMENT);
        
        append_str_to_codes(info, str:self.var_name.to_wstring());
        
        info->stack_num --;
        info->stack_num++;
        
        return true;
    }
};

class sStoreElementNode
{
    new(string var_name, sNode*% index, sNode*% right)
    {
        int self.id = gNodeID++;
        
        string self.var_name = var_name;
        sNode*% self.index = index;
        sNode*% self.right = right;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        sNode* index = self.index;
        
        if(!index.compile(info)) {
            return false;
        }
        
        sNode* right = self.right;
        
        if(!right.compile(info)) {
            return false;
        }
        
        info.codes.append_int(OP_STORE_ELEMENT);
        
        append_str_to_codes(info, str:self.var_name.to_wstring());
        
        info->stack_num -=2;
        
        return true;
    }
};

map<wstring, ZVALUE*%>*% gVars = null;

ZVALUE gNullValue;

void initialize_modules() version 2
{
    gVars = new map<wstring, ZVALUE*%>();
    gNullValue.kind = kNullValue;
}

void finalize_modules() version 2
{
    delete gVars;
}

bool vm(sInfo* info) version 7
{
    switch(*info->op) {
        case OP_STORE: {
            info->op++;
            
            wstring var_name = get_str_from_codes(info);
            
            ZVALUE* right_value = info.stack[-1];
            
            gVars.insert(var_name, clone right_value);
            
            info.stack.delete(-1, -1);
            }
            break;
            
        case OP_LOAD: {
            info->op++;
            
            wstring var_name = get_str_from_codes(info);
            
            ZVALUE* zvalue = gVars.at(var_name, null);
            
            if(zvalue == null) {
                fprintf(stderr, "undeclared var(%ls)\n", var_name);
                exit(1);
            }
            
            info->stack.push_back(clone zvalue);
            }
            break;
            
        case OP_LOAD_ELEMENT: {
            info->op++
            
            wstring var_name = get_str_from_codes(info);
            
            ZVALUE* map_ = gVars.at(var_name, null);
            
            if(map_ == null || (map_.kind != kMapValue && map_.kind != kListValue && map_.kind != kStrValue)) {
                fprintf(stderr, "invalid obj value for array index\n");
                exit(2);
            }
            
            ZVALUE*% index = clone info.stack[-1];
            
            info.stack.delete(-1,-1);
            
            switch(map_.kind) {
                case kListValue: {
                    int index_value = -1;
                    if(index.kind == kIntValue) {
                        index_value = index.intValue;
                    }
                    else {
                        fprintf(stderr, "require int value for array index\n");
                        exit(2);
                    }
                    
                    ZVALUE* result = map_.listValue[index_value];
                    
                    if(result == null) {
                        fprintf(stderr, "invalid list index\n");
                        exit(1);
                    }
                    
                    info.stack.push_back(clone result);
                    }
                    break;
                    
                case kMapValue: {
                    ZVALUE* result = map_.mapValue[index];
                    
                    if(result == null) {
                        fprintf(stderr, "invalid map index\n");
                        exit(1);
                    }
                    
                    info.stack.push_back(clone result);
                    }
                    break;
                    
                case kStrValue: {
                    int index_value = -1;
                    if(index.kind == kIntValue) {
                        index_value = index.intValue;
                    }
                    else {
                        fprintf(stderr, "require int value for array index\n");
                        exit(2);
                    }
                    
                    wchar_t result = map_.strValue[index_value];
                    
                    if(result == '\0') {
                        fprintf(stderr, "invalid index\n");
                        exit(1);
                    }
                    
                    info.stack.push_back(new ZVALUE(kind:kStrValue, str_value:xsprintf("%lc", result).to_wstring()));
                    }
                    break;
                    
                default:
                    fprintf(stderr, "require list or map or string for index node\n");
                    exit(1);
            }
            }
            break;
            
        case OP_STORE_ELEMENT: {
            info->op++
            
            wstring var_name = get_str_from_codes(info);
            
            ZVALUE* map_ = gVars.at(var_name, null);
            
            if(map_ == null || (map_.kind != kMapValue && map_.kind != kListValue)) {
                fprintf(stderr, "invalid obj value for array index\n");
                exit(2);
            }
            
            ZVALUE*% index = clone info.stack[-2];
            ZVALUE*% right = clone info.stack[-1];
            
            info.stack.delete(-1, -1);
            info.stack.delete(-1, -1);
            
//            info->stack.push_back(clone right);
            
            switch(map_.kind) {
                case kListValue: {
                    int index_value = -1;
                    if(index.kind == kIntValue) {
                        index_value = index.intValue;
                    }
                    else {
                        fprintf(stderr, "require int value for array index\n");
                        exit(2);
                    }
                    
                    ZVALUE* item = map_.listValue.item(index_value, null);
                    
                    if(item == null) {
                        fprintf(stderr, "invalid list index\n");
                        exit(2);
                    }
                    
                    map_.listValue[index_value] = clone right;
                    }
                    break;
                    
                case kMapValue: 
                    map_.mapValue[clone index] = clone right;
                    break;
                    
                default:
                    fprintf(stderr, "require list or map for index node\n");
                    exit(1);
            }
            }
            break;
            
        default:
            return inherit(info);
    }
    
    return true;
}

sNode*% exp_node(sInfo* info) version 5
{
    sNode*% result = null;
    
    buffer*% var_name = null;
    
    if(xisalpha(*info->p)) {
        var_name = new buffer();
        
        while(xisalnum(*info->p) || *info->p == '_') {
            var_name.append_char(*info->p);
            info->p++;
        }
        
        skip_spaces(info);
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces(info);
            
            sNode*% node = expression(info);
            
            if(node == null) {
                fprintf(stderr, "require right value\n");
                exit(2);
            }
            
            result = new sStoreNode(var_name.to_string().to_wstring(), node) implements sNode;
        }
        else {
           result = new sLoadNode(var_name.to_string().to_wstring()) implements sNode;
        }
    }
    else {
        result = inherit(info);
    }
    
    if(*info->p == '[') {
        info->p++;
        skip_spaces(info);
        
        sNode*% node = expression(info);
        
        if(node == null) {
            fprintf(stderr, "require index value\n");
            exit(2);
        }
        
        if(*info->p == ']') {
            info->p++;
            skip_spaces(info);
        }
        
        if(*info->p == '=' && *(info->p+1) != '=') {
            info->p++;
            skip_spaces(info);
            
            sNode*% node2 = expression(info);
            
            if(node2 == null) {
                fprintf(stderr, "require right value\n");
                exit(2);
            }
            
            sNode*% result2 = new sStoreElementNode(var_name.to_string(), node, node2) implements sNode;
            
            result = result2;
        }
        else {
            sNode*% result2 = new sLoadElementNode(var_name.to_string(), node) implements sNode;
            
            result = result2;
        }
    }
    
    return result;
}

void append_var(wstring name, ZVALUE* value)
{
    gVars.insert(clone name, clone value);
}

