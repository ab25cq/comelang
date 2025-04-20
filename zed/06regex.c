
class sRegexNode
{
    new(wstring value, bool global, bool ignore_case)
    {
        int self.id = gNodeID++;
        wstring self.value = value;
        bool self.global = global;
        bool self.ignore_case = ignore_case;
    }
    
    unsigned int id()
    {
        return self.id;
    }
    
    bool compile(sInfo* info)
    {
        info.codes.append_int(OP_REGEX_VALUE);
        
        append_str_to_codes(info, str:self.value);
        
        info.codes.append_int(self.global);
        info.codes.append_int(self.ignore_case);
        
        info.stack_num++;
        
        return true;
    }
};

bool vm(sInfo* info) version 6
{
    inherit(info);
    
    switch(*info->op) {
        case OP_REGEX_VALUE: {
            info->op++;
            
            wstring value = get_str_from_codes(info);
            
            int global = *info->op;
            info->op++;
            
            int ignore_case = *info->op;
            info->op++;
            
            
            value.to_string().to_regex(global:global, ignore_case:ignore_case).if {
                info->stack.push_back(new ZVALUE(kind: kRegexValue, regex_value:Value));
            }
            else {
                ZVALUE*% null_value = new ZVALUE(kind: kNullValue);
                info->stack.push_back(null_value);
            }
            }
            break;
    }
    
    return true;
}

sNode*% exp_node(sInfo* info) version 4
{
    if(*info->p == '/') {
        info->p++;
        
        buffer*% buf = new buffer();
        bool global = false;
        bool ignore_case = false;
        
        while(true) {
            if(*info->p == '\\') {
                switch(*info->p) {
                    case 'n': {
                        info->p++;
                        buf.append_char('\n');
                        info->p++;
                    }
                    break;
                    
                    case 't': {
                        info->p++;
                        buf.append_char('\t');
                        info->p++;
                    }
                    break;
                    
                    case 'r': {
                        info->p++;
                        buf.append_char('\r');
                        info->p++;
                    }
                    break;
                    
                    case '0': {
                        info->p++;
                        buf.append_char('\0');
                        info->p++;
                    }
                    break;
                    
                    case 'a': {
                        info->p++;
                        buf.append_char('\a');
                        info->p++;
                    }
                    break;
                    
                    default: {
                        buf.append_char(*info->p);
                        info->p++;
                    }
                    break;
                }
            }
            else if(*info->p == '/') {
                info->p++;
                skip_spaces(info);
                
                while(*info->p == 'g' || *info->p == 'i') {
                    if(*info->p == 'g') {
                        info->p++;
                        skip_spaces(info);
                        global = true;
                    }
                    else if(*info->p == 'i') {
                        info->p++;
                        skip_spaces(info);
                        ignore_case = true;
                    }
                    else {
                        break;
                    }
                }
                break;
            }
            else {
                buf.append_char(*info->p);
                info->p++;
            }
        }
        
        return new sRegexNode(buf.to_string().to_wstring(), global ,ignore_case) implements sNode;
    }
    else {
        return inherit(info);
    }
    
    return null;
}
