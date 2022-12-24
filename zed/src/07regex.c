#include <neo-c.h>
#include "common.h"

private struct sRegexNode
{
    int id;
    wstring value;
    bool global;
    bool ignore_case;
};

private sRegexNode*% sRegexNode*::initialize(sRegexNode*% self, wstring value, bool global, bool ignore_case)
{
    self.id = gNodeID++;
    self.value = value;
    self.global = global;
    self.ignore_case = ignore_case;
    
    return self;
}

private unsigned int sRegexNode*::id(sRegexNode* self)
{
    return self.id;
}

private bool sRegexNode*::compile(sRegexNode* self, sInfo* info)
{
    info.codes.append_int(OP_REGEX_VALUE);
    
    append_str_to_codes(info, str:self.value);
    
    info.codes.append_int(self.global);
    info.codes.append_int(self.ignore_case);
    
    info.stack_num++;
    
    return true;
}

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
            
            info->stack.push_back(new ZVALUE(kind: kRegexValue, regex_value:value.to_string().to_regex_flags(global:global, ignore_case:ignore_case)));
            }
            break;
    }
    
    return true;
}



sNode*? exp_node(sInfo* info) version 7
{
    if(*info->p == '/') {
        info->p++;
        skip_spaces(info);
        
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
        
        return borrow new sNode(new sRegexNode(buf.to_string().to_wstring(), global ,ignore_case));
    }
    else {
        return inherit(info);
    }
    
    return null;
}
